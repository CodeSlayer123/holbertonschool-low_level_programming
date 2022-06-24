#include "search_algos.h"

/**
 * binary_search - the actual recursive algorithm
 * @array: the array passed from the called function
 * @l1: left 1, starting from the left of the array
 * @r1: right 1, rightmost of the array
 * Return: this function until it returns the mid number
 */
int binary_search(int *array, int l1, int r1, int val)
{

    int mid, l2, r2;

    if (r1 >= l1)
    {

        mid = l1 + (r1 - l1) / 2;

        printf("Searching in array:");

        l2 = l1;
        r2 = r1;

        while (l2 <= r2)
        {
            printf(" %d", array[l2]);
            if (l2 != r2)
            {
                printf(",");
            }
            l2++;
        }

        printf("\n");

        if (array[mid] == val)
        {
            if (array[mid - 1] == val)
            {
                return (binary_search(array, l1, mid, val));
            }
            return mid;
        }

        if (array[mid] < val)
        {
            return (binary_search(array, mid + 1, r1, val));
        }

        return (binary_search(array, l1, mid, val));
    }
    return (-1);
}

/**
 * advanced_binary - advanced binary search
 * @array: the array passed in from the main function
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index in which the value was found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return (-1);
    }

    return binary_search(array, 0, size - 1, value);
}