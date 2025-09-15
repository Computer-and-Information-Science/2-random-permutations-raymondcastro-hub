# Assignment 2 Analysis - Raymond Castro

## Algorithm 1

Your test results and analysis here...

Algorithm 1 has a time complexity of **O(N^2)** notation. To check for duplicates, the algorithm scans the portion of the array already filled, which costs **O(i)** time per insertion. The total work for filling all slots is `1 + 2 + 3 + ... + (N-1)` checks, which sums to **O(N^2)**.

The measured run-times are below:

- **size = 5000**: 0.26 seconds
- **size = 10000**: 1.55 seconds
- **size = 20000**: 4.28 seconds
- **size = 40000**: 15.40 seconds

These results support the Big-Oh analysis. As the input size increases, retries become more frequent, and the runtime grows rapidly, reaching very high values for sizes such as 40,000.

## Algorithm 2

Your test results and analysis here...

Algorithm 2 has an expected time complexity of **O(N)**, thanks to the `used[]` array. The line `while (used[num])` allows duplicate checks in **O(1)** time, instead of scanning the array as in Algorithm 1.

The measured run-times are below:

- **size = 100000**: 0.07 seconds
- **size = 200000**: 0.18 seconds
- **size = 400000**: 0.48 seconds
- **size = 800000**: 1.04 seconds
- **size = 1600000**: 1.86 seconds
- **size = 3200000**: 3.86 seconds
- **size = 6400000**: 9.73 seconds

These results support the expected **O(N)** growth. However, in the worst case, if duplicates are drawn repeatedly, the runtime can degrade to **O(N^2)**, which I neglected to consider in my original analysis. This makes Algorithm 2 significantly faster in practice than Algorithm 1, but with the tradeoff that it uses **O(N)** extra memory for the `used[]` array.

## Algorithm 3

Your test results and analysis here...

Algorithm 3 has a time complexity of **O(N)**. The first for-loop runs exactly `N` times, with each assignment (`a[i] = ...`) taking O(1) time. The shuffle loop also runs in linear time, performing a constant-time random number generation and swap per iteration. Therefore, the total work is **O(N)**.

The measured run-times are below:

- **size = 500000**: 0.02 seconds
- **size = 1000000**: 0.04 seconds
- **size = 2000000**: 0.07 seconds
- **size = 4000000**: 0.25 seconds
- **size = 8000000**: 0.58 seconds
- **size = 16000000**: 1.67 seconds
- **size = 32000000**: 3.76 seconds

These results support the Big-Oh analysis. The runtime scales linearly with input size. Performance remains efficient even for very large arrays, with increases in runtime appearing only at the largest test sizes.