#include <stdio.h>

int main()
{
    int n1,n2,a=1;
    printf("Enter the two number:");
    scanf("%d%d",&n1,&n2);
    label:
    printf("%d * %d = %d \t %d * %d = %d\n",n1,a,n1*a,n2,a,n2*a);
    a++;
    if(a<=10)
    goto label;

    return 0;
}
