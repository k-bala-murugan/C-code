#include <stdio.h>

int main()
{
    int num,pos;
    printf("Enter the num:");
    scanf("%d",&num);
    printf("Enter the pos:");
    scanf("%d",&pos);
    if((1<<pos)&num)
    printf("set");
    else
    printf("clear");
    

    return 0;
}
