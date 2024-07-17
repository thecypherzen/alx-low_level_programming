#include "search_algos.h"


int jump_search(int *array, size_t size, int value)
{
        size_t i, j, jumps = 0, jump_size = sqrt(size);
        size_t low = 0, high = jump_size;

        if (array == NULL)
                return (-1);

        for (i = 0; i <= jump_size; i++)
        {
                if (value < array[low] || high > size - 1)
                        return (-1);
                if (value > array[low] && value < array[high])
                {
                        printf("Value found between indexes [%lu] and [%lu]\n", low, high);
                        for (j = low; j <= high; j++)
                        {
                                if (array[j] == value)
                                        return (j);
                        }
                        return (-1);
                }
                if (value > array[low] && value > array[high])
                {
                        printf("Value checked array[%lu] = [%d]\n", low,  array[low]);
                        low += jump_size;
                        high += jump_size;
                        jumps += 1;
                }
        }
        return (0);
}
