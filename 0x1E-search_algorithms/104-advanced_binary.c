#include "search_algos.h"

int advanced_binary(int *array, size_t size, int value){

    return search(array, 0, size - 1, value);
}
int search(int arr[], int l, int r, int x){
    
    int mid, l2, r2;
    
    if (arr == NULL){
        return(-1);
    }
    if (r >= l){
        mid = l + (r - l) / 2;
        printf("Searching in array:");
        l2 = l;
        r2 = r;
        while (l2 <= r2)
        {
            printf(" %d", arr[l2]);
            if (l2 != r2){
                printf(",");
            }
            l2++;
        }
        printf("\n");

        if (arr[mid] == x){
            return mid;
        }

        if (arr[mid] > x) {
            return search(arr, l, mid - 1, x);
        }

        return search(arr, mid + 1, r , x);
    }
    return (-1);
}
