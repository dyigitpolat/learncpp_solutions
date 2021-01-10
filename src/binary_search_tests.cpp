#include "binary_search.hpp"

//std headers
#include <iostream>

void binary_search::tests::test_find()
{
    std::cout << "Testing binary search... " << std::endl;

    constexpr int array[]{3, 6, 8, 12, 14, 17, 20, 21, 26, 32, 36, 37, 42, 44, 48};

    // We're going to test a bunch of values to see if they produce the expected results
    constexpr int numTestValues{9};
    // Here are the test values
    constexpr int testValues[numTestValues]{0, 3, 12, 13, 22, 26, 43, 44, 49};
    // And here are the expected results for each value
    int expectedValues[numTestValues]{-1, 0, 3, -1, -1, 8, -1, 13, -1};

    // Loop through all of the test values
    for (int count{0}; count < numTestValues; ++count)
    {
        // See if our test value is in the array
        int index{find(array, testValues[count], 0, static_cast<int>(std::size(array)) - 1)};
        int index2{find_iterative(array, testValues[count], 0, static_cast<int>(std::size(array)) - 1)};
        
        // If it matches our expected value, then great!
        if (index == expectedValues[count])
            std::cout << "test value " << testValues[count] << " passed!\n";
        else // otherwise, our binarySearch() function must be broken
            std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code!\n";

        // If it matches our expected value, then great!
        if (index2 == expectedValues[count])
            std::cout << "test value " << testValues[count] << " passed! (iterative)\n";
        else // otherwise, our binarySearch() function must be broken
            std::cout << "test value " << testValues[count] << " failed.  There's something wrong with your code! (iterative)\n";
    }

    std::cout << std::endl;
}