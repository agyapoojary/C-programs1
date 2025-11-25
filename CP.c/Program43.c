#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    printf("Array elements are:\n");
    for(i=0; i<n; i++)
        printf("%d\n", arr[i]);
    }
    int main()
    {
        int arr[10]={10,20,30,40,50};
        display(arr, 5);
        return 0;
    }
