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
    printf("\nEnter the position:");
    scanf("%d",&pos);
    printf("Enter the option:\n1) Set a bit\n2) Clear a bit\n3) Toggle a bit\n");
    scanf("%d",&operation);
    switch(operation)
    {
        case 1:num=num|(1<<pos);
        break;
        case 2:num=num&~(1<<pos);
        break;
        case 3:num=num^(1<<pos);
        break;
        default:printf("Invalid");
    }
    printf("Number=%d\n",num);
    
    for(pos=31;pos>=0;pos--)
    {
        printf("%d",(1&(num>>pos)));
    }
        
    }


