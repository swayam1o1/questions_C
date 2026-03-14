#include <stdio.h>
#include <stdlib.h>


int strlenn(char str[])
{
    int n = 0; 
    char c = str[n] ;
    while (c!='\0')
    {
        n++ ;
        c = str[n] ;
    }
    return n-1 ;
}

char* strcpyy(char str1[])
{
    int n = strlenn(str1) ;
    char* str2 = (char*)malloc(n*sizeof(char)) ;
    for (int i = 0 ; i < n ; i++)
    {
        str2[i] = str1[i] ;
    }
    return str2 ;
}
int main()
{
    char str[100] ;
    printf("\nEnter the string ") ;
    fgets(str, sizeof(str), stdin) ;
    char *str2 = strcpyy(str) ;
    printf("%s", str2) ;
    return 0 ;
}
