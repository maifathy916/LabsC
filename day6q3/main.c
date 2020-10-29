#include <stdio.h>
#include <stdlib.h>

void mul(int arr [],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]*10);


    }
}
void mulpo(int *arr)
{
     //*arr=(int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]*10);


    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    mul(arr,5);
     printf("\n");
    mulpo(arr);
    return 0;
}
