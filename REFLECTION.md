# Assignment 2 Reflection - Raymond Castro

## Approach to the Problem

Your response here...

I approached the problem by first figuring out how to implement the functions in permutations.cpp. I did this using the Random Permutations Algorithms PDF, along with the description in Exercise 2.8 on page 72 of the textbook. Afterward, when analyzing the Big-Oh notation of each algorithm, I based my analyses on examining the loops in each function, with the exception of Algorithm 1, where I focused more on the search function. Once the functions were complete, testing was straightforward, and it was also the part of the assignment I enjoyed the most.

## Techniques Used

Your response here...

When starting permutations.cpp, I first wrote pseudocode to plan out the program, though it could use some refinement. While programming, I used looping techniques such as `while` and `for` loops for random number generation. I also added comments to remind myself of certain concepts when reviewing the code later. Additonally, I consulted the references listed below to refresh my knowledge of C++ concepts, such as the `size_t` data type and the syntax for `while` and `for` loops:

[std::size_t - cppreference.com](https://en.cppreference.com/w/cpp/types/size_t.html)

[Learn C++ Cheatsheet | Codecademy](https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-hello-world/cheatsheet)

## Challenges Encountered

Your response here...

I did not encounter much challenges during testing. However, aside from difficulties with coding, one of the main challenges I faced was analyzing the functions using Big-Oh notation. I overcame this as best I could by reviewing the textbook and consulting outside references, along with focusing on the loops to determine time complexity. I used the reference listed below as a guide to common Big-Oh notations and as a reminder of what the notation represents:

[Big O Notation Tutorial - A Guide to Big O Analysis - GeeksforGeeks](https://www.geeksforgeeks.org/dsa/analysis-algorithms-big-o-analysis/)

## Conclusions

Your response here...

From this assignment, I learned how significant reducing run-time is overall. Compared to Algorithms 1 and 2, Algorithm 3's **O(N)** time complexity allowed its runtime to scale efficiently with input size. In contrast, Algorithm 1 had an **O(N^2)** time complexity, and Algorithm 2 had an expected case of O(N), but required much more memory because of the `used[]` array. This demonstrated to me how important runtime efficiency will be in future work. Additionally, while it may seem obvious, the assignment also showed me that I still have a long way to go, as completing it was challenging without outside assistance.