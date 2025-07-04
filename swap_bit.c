#include<stdio.h>
int main()
{
        int i, num,pos1,pos2;
        printf("Enter the num:");
        scanf("%d",&num);
        printf("Binary:");
        for(i=31;i>=0;i--)
        {
            printf("%d",((num>>i)&1));
        }
        printf("\nEnter the two positions:");
        scanf("%d%d",&pos1,&pos2);
        if( ((num>>pos1)&1) != ((num>>pos2)&1) )
        {
            num=num^(1<<pos1);
            num=num^(1<<pos2);
        }
         for(i=31;i>=0;i--)
        {
            printf("%d",((num>>i)&1));
        }
        
}		

