#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a,b;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter secand number\n");
    scanf("%d",&b);
    swap(&a,&b);

 printf("the swap : %d %d\n",a,b);

    return 0;
}
