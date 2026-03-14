#include <stdio.h>

int swap(int *a, int *b)
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
    return 0 ;
}

int main()
{
    int a , b ;
    printf("\n Enter two numbers, a and b");
    printf("\nenter a ") ;
    scanf("%d", &a) ;
    printf("\nenter b") ;
    scanf("%d", &b) ;
    printf("\na before swap : %d", a) ;
    printf("\nb before swap : %d", b) ;
    swap(&a, &b) ;
    printf("\na after swap : %d", a) ;
    printf("\nb after swap : %d", b) ;
    return 0 ;
}