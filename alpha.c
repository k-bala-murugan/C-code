#include<stdio.h>
int main()
{
    int c;
    char ch;
    printf("Enter the value:");
    scanf("%c",&ch);
    c=ch^32;printf("%c",c);
}
