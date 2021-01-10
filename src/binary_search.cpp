#include "binary_search.hpp"

int binary_search::find(const int *array, int target, int min, int max)
{
    if (max < min) return -1;

    const int center{(max + min) / 2};

    if (array[center] == target)
    {
        return center;
    }
    else if (array[center] > target)
    {
        return find(array, target, min, center - 1);
    }
    else
    {
        return find(array, target, center + 1, max);
    }
}

int binary_search::find_iterative(const int *array, int target, int min, int max)
{
    while(max >= min)
    {
        const int center{(max + min) / 2};

        if (array[center] == target)
        {
            return center;
        }
        else if (array[center] > target)
        {
            max = center - 1;
        }
        else
        {
            min = center + 1;
        }
    }

    return -1;
}