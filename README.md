# Unique-Digits

Hi Everyone,

This project focuses on finding unique digits. What is a unique digit? It is consider one type of number. The sample array in `main.cpp`, for instance, is: `{1, 2, 1, 1}` and the unique digits are `1 and 2`. `1` is repeated three times, but we only need one, while `2` is repeated once in the array. 

`uniqueDigits()` accepts an array and its size. A new array, called `counted`, is initialized with the same size as the sample, but why? Well, what if there aren't any repeatative digits? If so, the array needs to hold all the digits. Anyway, we start off by copying the first element from `Sample` and increment `count` by 1. `count` will keep track of `counted`'s size. The nested for-loops will iterate through both arrays for comparisons. Remember, we want to find unique digits and copy it to our newly allocated array. 

The first for-loop will iterate through `Sample`, while the second loop will iterate through `counted`. Inside the second for-loop, we will compare the element at `sample[x]` to all elements in `counted`. The for-loop will terminate by itself, if an identical pair is found. If not, then set `flag` to 1. Our `flag` variable will keep track, if there is an identical element in both arrays. If `flag` equals 1, then a match exists and a new element must be appended from `sample` to `counted` (hence, the upcoming if condition). If not, then stay at 0.

Sincerely,

Anthony
