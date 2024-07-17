#include "search_algos.h"

/**
 * binary_search - Binary search algorithm.
 * @array: Array of integers.
 * @size: Size of the array.
 * @value: The value to be searched for.
 *
 * Description: Searches for a value in an array of integers,
 * using the binary search algorithm.
 * Return: index of value on success, -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
        int index = 0;

        binary_helper(array, size, value, &index);

        return (index);
}

void binary_helper(int *array, size_t size, int value, int *index)
{
        size_t left = 0, right = size - 1;
        size_t mid = (lft + right) / 2;

        if (array == NULL)
        {
                *index = -1;
                return;
        }

        print_function(array, size);

        if (left == right)
        {
                if (array[left] == value)
                        return;
                *index = -1;
                return;
        }

        if (array[mid] == value)
        {
                *index = *index + mid;
                return;
        }
        if (array[mid] > value)
                right = mid - 1;
        else
        {
                left = mid + 1;
                *index = *index + left;
        }
        size = (right - lft) + 1;
        binary_helper(array + left, size, value, left);
}
