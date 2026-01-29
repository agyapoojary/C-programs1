#include<stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for(int i=0; i<5; i++) {
        if(*(ptr+i) % 2 == 0) {
            *(ptr+i) = *(ptr+i) + 1;
        } else {
            *(ptr+i) = *(ptr+i) - 1;
        }
    }
    for(int i=0; i<5; i++) {
        printf("%d ", *(ptr+i));
    }
    return 0;
}