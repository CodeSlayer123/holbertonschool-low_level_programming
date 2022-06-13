#include "search_algos.h"

int binary_search(int *array, size_t size, int value){
    int l=0;
    int r= size -1;
    int m;
    int l2, r2;
    if (array == NULL){
        return(-1);
    }
    while (l <= r){

        m = l + (r - l) / 2;


        printf("Searching in array:");
        l2 = l;
        r2 = r;
        while (l2 <= r2)
        {
            printf(" %d", array[l2]);
            if (l2 != r2){
                printf(",");
            }
            l2++;
        }
        printf("\n");


        if (array[m] < value){
            l = m + 1;
        }
        else if (array[m] > value){
                r = m - 1;
            }
            else {
                return m;
        }
    }
    return -1;

}