//Find the largest and smallest element in an array

#include <stdio.h>
#include <stdlib.h>
int input(int *arr, int n)
{
    int a;
    printf("Enter the elements of the array") ;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &a) ;
        *arr = a ;
        arr++ ;
    }
    return 0 ;
}
int main()
{
    int n, indexs, indexl ;
    printf(" Enter the size of the array ") ;
    scanf("%d", &n) ;
    int *arr = (int*)malloc(n*sizeof(int)) ;
    input(arr, n) ;
    int small = arr[0] , large = arr[0] ;
    indexs = 0, indexl = 0 ;
    for (int i = 0 ; i < n ; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i] ;
            indexs = i ;
        }
        if (arr[i] > large)
        {
            large = arr[i] ;
            indexl = i ;
        }
    }
    printf("smallest number is %d at index %d", small, indexs) ;
    printf("largest number is %d at index %d", large, indexl) ;
    return 0 ;
}