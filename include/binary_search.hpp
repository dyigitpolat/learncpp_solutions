#pragma once

namespace binary_search
{
    int find(const int *array, int target, int min, int max);
    int find_iterative(const int *array, int target, int min, int max);

    namespace tests
    {
        void test_find();
    }
}