#include <stdio.h>
#include <stdlib.h>
#define r 2
#define c 3

void gotoxy(int x, int y)
{
    printf(" ", x, y);
}

int main()
{

 /* int arr[5];
    int i;
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");

    printf("Input 5 elements in the array :\n");
    for(i=0; i<5; i++)
    {
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for(i=0; i<5; i++)
    {
        printf("%d  ", arr[i]);
    }
*/

  /*  int i,n,max;

    printf("Enter size of the array : ");
    scanf("%d",&n);
      int arr[n];
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

     max=arr[0];
    for(i=1; i<n; i++)
    {

		   if(max<arr[i])
		    max=arr[i];
    }

          printf("\n maximum of array = : %d",max);


int i,j, row,col,row2,col2;

printf("Enter row of the array1 : ");
    scanf("%d",&row);
    printf("Enter col of the array1 : ");
    scanf("%d",&col);
       int arr[row][col];


    printf("Enter row of the array2 : ");
    scanf("%d",&row2);
    printf("Enter col of the array2 : ");
    scanf("%d",&col2);
      int arr2[row2][col2];

       int sum[row][col];

       printf("Enter elements in array1 : ");
    for(i=0; i<row; i++)
    {
        for(j=0;j<col;j++)
        {
         printf("Enter element array1 %d%d: ", i, j );

            scanf("%d",&arr[i][j]);
        }

    }

       printf("Enter elements in array2 : ");
    for(i=0 ; i<row2; i++)
    {
        for( j=0;j<col2;j++)
        {printf("Enter element array2 %d%d: ", i , j );
            scanf("%d",&arr2[i][j]);
        }

    }
      for(i=0; i<row; i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=arr[i][j]+arr2[i][j];
        }

    }

      printf("\nSum of two matrices: \n");
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == col - 1) {
                printf("\n\n");
            }
        }
*/
        int i,j,sum=0;float avg;
        int arr[r][c];
   for(i=0 ; i<r; i++)
    {
        for( j=0;j<c;j++)
        {
           // printf("Enter element of array %d%d: ", i , j );
            scanf("%d",&arr[i][j]);
            gotoxy(i,j);
        }

    }

     for(i=0 ; i<r; i++)
    {
        for(j=0;j<c;j++)
        {

            sum+=arr[i][j];

        }
        printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;


    }

     for(i=0 ; i<c; i++)
    {
        for( j=0;j<r;j++)
        {
             sum+=arr[j][i];


        }
  avg=(sum)/r;
        printf("avg the %f col is = %f\n", i, avg);

   sum=0;
    }


    return 0;
}
