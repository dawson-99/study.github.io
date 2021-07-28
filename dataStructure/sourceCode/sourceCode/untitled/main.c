#include <stdio.h>

void show(int *array);
void sort_array(int *array);
int main() {
    int array[5] = {1,3,4,8,2};

    show(&array);
    sort_array(&array);
    show(&array);
    return 0;
}

void show(int *array){

    for (int i = 0; i < sizeof(array)/sizeof(array[0]); ++i) {
        printf(array[i]);
    }
}

void sort_array(int * array){
    for (int i = 0; i < sizeof(array); ++i) {
        for (int j = i + 1; j < sizeof(array)/sizeof(array[0]); ++j) {
            if (array[i] > array [j]){
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}