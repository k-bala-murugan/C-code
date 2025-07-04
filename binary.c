#include <stdio.h>

int main()
{
    int num,pos,operation;
    printf("Enter the num:");
    scanf("%d",&num);
    for(pos=31;pos>=0;pos--)
    {
        printf("%d",(1&(num>>pos)));
    }
}
