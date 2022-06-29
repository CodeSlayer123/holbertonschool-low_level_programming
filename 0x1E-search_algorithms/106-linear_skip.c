#include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value){
    skiplist_t *prev = list;
    skiplist_t *tmp = list->express;

    if (list == NULL) {
        return NULL;
    }
    while (tmp != NULL){
        /*
        if (tmp->n == value){
            return tmp;
        }
        */
        printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);

        if (value < tmp->n){
            printf("Value found between indexes [%ld] and [%ld]\n", prev->index, tmp->index);

            while (prev != tmp->next){
                printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

                if (prev->n == value){
                    return prev;
                }
                prev = prev->next;

                /*if (prev->next == tmp){
                    return NULL;
                }
                */
            }
        }
        else {
            tmp = tmp->express;
            prev = prev->express;

        }
    }
    return NULL;

}