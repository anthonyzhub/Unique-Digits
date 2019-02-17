# Unique-Digits

Hi All,

This is project focuses on finding unique digits. What is a unique digit? Throughout this project, it is consider one type of a number. The sample array in main.cpp, for instance, is: {1, 2, 1, 1} and the unique digits are 1 and 2. 1 is repeated three times, but we only need one, while there is only a single 2 in the array. 

The uniqueDigits function accepts an array and its size. A new array, called "counted", is initialized with the same size as the sample, but Why? Well, what if there aren't any repeatative digits? If so, the array needs to hold all the digits. Anyway, we start off by copying the first element from Sample and increment "count" by one. "Count" will keep track of Counted's size. The nested for-loops will iterate through both arrays for comparisons. Remember, we want to find unique digits and copy it to our newly allocated array. 

The first for-loop will iterate through Sample, while the second loop will iterate through Counted. Inside the second for-loop, we will compare the element at x in Sample to all elements in Counted. The for-loop will terminate by itself if an identical pair is found. If not, then set flag to 1. Our "flag" variable will keep track if there is even an existence of identical elements in both arrays. If flag equals to 1, then a match exists and a new element must be appended from Sample to Counted (Hence, the upcoming if condition). If not, then stay at 0.

If you have any question, please feel free to contact me.

Sincerely,

Anthony
