#include <stdio.h>

int main()
{
    unsigned long long int n,con,odd=0,even=0;
    printf("enter the digit:");
    scanf("%Ld",&n);
    while(n>0)
    {
    con=n%10;
    if(con%2==0)
    {
   even++;
   
    }
    else{
        odd++;
    }
    n=n/10;
    }
    printf("odd=%Ld\teven=%Ld",odd,even);
    return 0;

    
}
