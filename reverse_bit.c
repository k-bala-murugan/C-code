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
        printf("\n");
        
        for(pos1=31,pos2=0;pos1>pos2;pos1--,pos2++)
        {
        if( ((num>>pos1)&1) != ((num>>pos2)&1) )
        {
            num=num^(1<<pos1);
            num=num^(1<<pos2);
        }
            
        }

        printf("\nAfter revresing :");
         for(i=31;i>=0;i--)
        {
            printf("%d",((num>>i)&1));
        }
        printf("\n%d",num);
}
