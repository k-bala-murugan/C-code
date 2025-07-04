#include <stdio.h>

int main()
{
    int x,y;
    char z;
    printf("Enter the two numbers:");
    scanf("%d%d",&x,&y);
    printf("Enter the operation:");
    scanf(" %c",&z);
    if(z=='+')
    printf("x+y=%d",x+y);
    else if(z=='-')
    printf("x-y=%d",x-y);
    else if(z=='*')
    printf("x*y=%d",x*y);
    else if(z=='/')
    printf("x/y=%d",x/y);
    else if(z=='%')
    printf("x%%y=%d",x%y);
    else
    printf("invalid");


    return 0;
}
