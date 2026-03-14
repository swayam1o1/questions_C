#include<stdio.h>
#include<stdlib.h>
int strlenn(char str[])
{
    char c;
    int n = 0 ;
    c = str[n] ;
    printf("%d", n) ;
    printf("%c", c) ;
    while (c!= '\0')
    {
        n++ ;
        c = str[n] ;
    }
    return n ;
    
}
int main()
{
    char str[100] ;
    printf("enter the string") ;
    fgets(str, sizeof(str), stdin) ;
    printf("%s", str) ;
    int n = strlenn(str) ;
    printf("%d", n) ;
}
