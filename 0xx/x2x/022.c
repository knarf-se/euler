/*	Probably not the most beautiful soloution, but it works!
	I blame whatever noise that woke me up so that I could not sleep,
	as it is the Halloween weekend I bet that it was a ghost or witch ;-)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int stringCompare(const void *s1, const void *s2) {
	return strcmp(*(char*const*)s1, *(char*const*)s2);
}

int main() {
	char *line	= NULL;
	size_t len = 0;
	ssize_t read;
	char **lines	= calloc(6000, sizeof(char *));
	int lineNo	= 0;
	FILE *names = fopen("names.txt", "r");
	if (!names) {
		perror("Could not open file \"names.txt\"");
		goto cleanUp;
	}
	while(!feof(names)) {
		line = (char *)malloc(1024);
		fgetc(names);	//	Remove beginning "
		if(read = getdelim(&line,&len,'"',names)>0) {
			int l = strlen(line);
			//	Remove ending "
			line[l-1] = '\0';
			//	Truncate buffer
			lines[lineNo]=realloc(line,l-1);
		}
		lineNo++;
		fgetc(names);	//	Remove ending ,
	}
	qsort(lines, lineNo, sizeof(char *), stringCompare);
	int i, j, namescore, sum = 0;
	for(i = 0; i <5163 ; i++) {
		namescore = 0;
		for(j = 0; lines[i][j] != 0; j++) {
			namescore = namescore + lines[i][j] - 64;
		}
		sum = sum + namescore*(i+1);
	}
	printf("The score is: %d\n", sum);

cleanUp:
	fclose(names);
	free(line);
	while(lineNo--)
		free(lines[lineNo]);
	free(lines);
//	I bet that I leaked a kilobyte or two.
	return 0;
}
