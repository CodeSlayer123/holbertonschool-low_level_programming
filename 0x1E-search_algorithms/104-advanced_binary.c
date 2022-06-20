#include "search_algos.h"

int advanced_binary(int *array, size_t size, int value){

    return search(array, 0, size - 1, value);
}
int search(int array[], int left, int right, int val){

    int mid, left2, right2;

    if (array == NULL){
        return(-1);
    }
    if (right >= left){
        mid = left + (right - left) / 2;
        printf("Searching in array:");
        left2 = left;
        right2 = right;
        while (left2 <= right2)
        {
            printf(" %d", array[left2]);
            if (left2 != right2){
                printf(",");
            }
            left2++;
        }
        printf("\n");

        if (array[mid] == val){
            if (array[mid - 1] == val) {
                return search(array, left, mid, val);
            }
            return mid;
        }

        if (array[mid] < val)
            return (search(array, mid + 1, right, val));

        return (search(array, left, mid, val));

        
    }
    return (-1);
}