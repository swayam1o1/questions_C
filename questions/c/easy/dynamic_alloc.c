//Dynamically allocate an array using malloc() and compute the sum.
#include <stdio.h>
#include <stdlib.h>

int input(int arr[], int n)
{
    int a ;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &a) ;
        arr[i] = a ;
    }
    return 0 ; 
}

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0 ; i < n ; i++)
    {
        sum += arr[i] ;
    }
    return sum ;
}

int main(){
    int n ; 
    printf("Enter the size of the array ") ;
    scanf("%d", &n) ;
    int *arr = (int*)malloc(n*sizeof(int)) ;
    input(arr, n) ;
    int sums = sum(arr, n) ;
    printf("\n Sum is %d", sums) ;
    free(arr) ;
    
}