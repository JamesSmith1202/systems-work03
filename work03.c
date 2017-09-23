#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[10];
    int i = 0;

    srand(time(NULL));
    
    for(;i<9;i++){
        arr[i] = rand();
    }
    arr[9] = 0;
    
    printf("The original array:\n");
    for(i = 0;i < 10; i++){
        printf("arr[%d]: %d\n", i, arr[i]);
    }
    
    int *p = &arr[9];
    int arr2[10];
    for(i = 0;i < 10; i++){
        arr2[i] = *p;
        p--;
    }

    printf("The second array:\n");
    for(i = 0;i < 10; i++){
        printf("arr2[%d]: %d\n", i, arr2[i]);        
    }

    return 0;
}