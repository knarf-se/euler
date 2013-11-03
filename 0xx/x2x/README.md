Euler 020-029
=============
 — “So Long, and Thanks for All the Fish!”

|No#| Description |
|--:| ----------- |
|020|  |
|021|  |
|022| Get score of names by adding alphabetic value and muliply by sorted index value |
|023|  |
|024|  |
|025|  |
|026|  |
|027|  |
|028|  |
|029|  |

Problem 022
-----------
Okay, this is a somewhat ugly solution, but hey! It works! And it does not by no means need to be a **purrfect** solution, right?

I was bitten at first, because I did not even look at the file “`names.txt`” and believed that the names were each at its own line so I got quite strange results.. But then I opened it up and got the “Aha!” I changed the code so that it uses `getdelim` instead of `fgets` to read up to the next `"` and then I uses `fgetc` to chew up `,"` between the names.

Nothing fancy here! (°¿° )
