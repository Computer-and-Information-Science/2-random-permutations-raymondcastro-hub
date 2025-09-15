// Raymond Castro

#include "permutations.h"
#include "randint.h"
#include <cstddef>

// A sequential search function, for your convenience.
// Parameters:
//  array - The array of int's to be searched
//  size - The size of the array
//  target - The target value
// Returns:
//  Array index where target is found, or size if target is not found.
// Example:
//  if (search(array, size, x) < size)
//      cout << "x was found in the array\n";
//  else
//      cout << "x was not found in the array\n";
static size_t search (const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
    if (array[i] == target)
        return i;
    return size;
}

void permutations1 (int array[], size_t size) {
    // TODO: Implement algorithm #1 here
    // Loop over each position in array
    for (size_t i = 0; i < size; ++i) {
        int num;
        // Generate random number until it's not already in array[0..i-1]
        do {
            num = randint(1u, static_cast<unsigned int>(size));
        } while (search(array, i, num) != i); // Returns i if not found
        
        // Once unique number is found, store it in array[i]
        array[i] = num;
    }
}

void permutations2 (int array[], size_t size) {
    // TODO: Implement algorithm #2 here
    // Create a "used" array initialized to false
    bool *used = new bool[size + 1]; /* Make it size+1 so indices
    go from 1..size */
    for (size_t i = 0; i <= size; ++i)
        used[i] = false;

    // Fill array one element at a time
    for (size_t i = 0; i < size; ++i) {
        int num;
        // Keep generating random numbers until one not used yet is found
        do {
            num = randint(1u, static_cast<unsigned int>(size)); // Generate 1..size
        } while (used[num]); // If already used, generate again

        array[i] = num; // Assign unused number to array
        used[num] = true; // Mark number as used
    }

    delete[] used; // Free memory for "used" array
}

void permutations3 (int array[], size_t size) {
    // TODO: Implement algorithm #3 here
    // Fill array with sequence [1, 2, 3, ..., size]
    for (size_t i = 0; i < size; ++i)
        array[i] = static_cast<int>(i + 1);

    /* Shuffle array in place by swapping each element a[i] with
    random earlier element (including itself) */
    for (size_t i = 1; i < size; ++i) {
        // Pick random index j between 0 and i (inclusive)
        size_t j = static_cast<size_t>(randint(0u, static_cast<unsigned int>(i)));
        
        // Swap array[i] and array[j]
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
