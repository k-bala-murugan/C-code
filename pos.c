
#include <stdio.h>  //posive or negative

int main()
{
    int MSB,num;
    scanf("%d",&num);
    MSB=sizeof(num)*8-1;
    ((1<<MSB)&num)?puts("-ve"):puts("+ve");
    //((num>>MSB)&1)?puts("-ve"):puts("+ve");
    


}
