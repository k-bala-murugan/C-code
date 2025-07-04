#include <stdio.h>
#include<math.h>

int main()

{
    int n,temp,count=0,rem,sum=0;
    printf("enter the value:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=temp;
    while(n!=0)
    {
        rem=n%10;
        sum+=pow(rem,count);
        n=n/10;
    }
    
    if(sum==temp)
    printf("%d is armstrong number",temp);
    else
    printf("%d is not a armstrong number",temp);

    return 0;
}
