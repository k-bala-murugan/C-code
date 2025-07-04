#include<stdio.h>
int main()
{
        int x,y;
        char op;
        printf("Enter the two values:");
        scanf("%d%d",&x,&y);
        printf("Enter the operator:");
        scanf(" %c",&op);
        switch (op){
        case '+':printf("x+y=%d",x+y);
        break;
        case '-':printf("x-y=%d",x-y);
        break ;
        case '*':printf("x*y=%d",x*y);
        break ;
        case '/':printf("x/y=%d",x/y);
        break;
        case '%':printf("x%%y=%d",x%y);
        break;
        default:printf("other operator");
        }

        
}
