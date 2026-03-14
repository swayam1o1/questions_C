#include <stdio.h>
#include <stdlib.h>
int swap(int *a, int *b)
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
    return 0 ;
}
int reversearray(int a[], int n)
{
    int j = n-1 ;
    if (n % 2 != 0)
    {
        n = (n-1)/2 ;
    }
    for (int i = 0 ; i < n/2 ; i++ )
    {
        swap(&a[i], &a[j]) ;
        j-- ;
    }  
    return 0 ; 
}
int printarray(int a[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        printf("\t%d", a[i]) ;
    }
    return 0 ;
}

int main()
{
    printf("\nEnter the size of the array ") ;
    int n, a ;
    scanf ("%d", &n) ;
    int *arr = (int*)malloc(n*sizeof(int)) ;
    printf("\nEnter the elements of the array") ;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &a) ;
        arr[i] = a ;
        
    }
    printf("array before reversing") ;
    printarray(arr, n) ;
    reversearray(arr, n) ;
    printf("array after reversing") ;
    printarray(arr, n) ;
    free(arr) ;
    return 0 ;
}