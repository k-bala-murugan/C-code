#include<stdio.h>
int main()
{
        int x,y,z;
        printf("Enter the three values:");
        scanf("%d %d%d",&x, &y,&z);
        if(x>y&&x>z)
                printf("x is greater");
        else if(y>x&&y>z)
                printf("y is greater");
        else if(z>x&&z>y)
		printf("z is greater");
	else if( (y == z)&&(x < y) )
		printf("y,z are equal & greater than x\n");
        else if( (x == y)&&(z < x) )
                printf("x,y are equal & greater than z\n");
        else if( (x == z)&&(y < z) )
                printf("x,z are equal & greater than y\n");
        else
                printf("all are equal");
}

