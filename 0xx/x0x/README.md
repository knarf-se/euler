Euler 000-009
=============
 — “The person who say it cannot be done shall not interrupt the person doing it!”

|No#| Description |
|--:| ----------- |
|000| No such problem exists (But I always begin counting at zero) |
|001| Get sum of all multiplies of `3` and `5` below `1000` |
|002|  |
|003|  |
|004|  |
|005|  |
|006|  |
|007|  |
|008|  |
|009|  |

Problem 001
-----------
I solved this problem at first with Haskell and then C, using a brute force method. I was fun that I got Haskell running, I tried to learn programming in it years ago but I was never able to get the compiler to spit out anything other than errors. But this time around I was able to just install `ghc` and it actually held my hand and told me what misstake I made in a very pleasant way!

Hopefully I will use Haskell more in the future, not very least because it will help me grow as a programmer by the fact that you must use another way to reason about your programs.

I'm pretty sure that I wrote quite bad Haskell code, and the line could easily be cut in half by a pro. But that is for an later endeavour! ;D

Explanation for solution
________________________
When I went to bed, I realized that one could solve the calculation in a leaner way without any loops at all! So I wrote it in C++ using macros (Because the subexpressions are repeated, *[DRY][0]*).

In the brute force version, I just loops through all numbers between 0..999 and checks if it can be dived by `3` or `5` and then summarize‎s their value, nothing fancy there.

In the alternate version (`001.cxx`), I uses the realization that there is `333` numbers below `1000` that are divisible by `3`, and their sum is `166833`. This can be expressed as `333×334×1.5`, Don't ask me why, my math skills are not that strong, but I'm good at memorising things like this that I've noticed when I've played around with numbers.

This means that we can add the sum of all numbers below `1000` that are divisible by `3` and all numbers that are divisible by `5`, but this means that we count `66` numbers twice and thus we must correct for this by substracting the sum of all numbers below `1000` that are dividible by `15` (`3×5`).

Problem 00x
-----------
**TODO** Solve some more problems (^_^)

	[0]:	http://en.wikipedia.org/wiki/Don't_repeat_yourself	"WP: Don't repeat yourself"
