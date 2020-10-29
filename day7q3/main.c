#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows,cols,**s;
     printf("enter number of student (rows) \n");
     scanf("%d",&rows);
     int arr_col[rows];
     s=(int**) malloc(rows*sizeof(int*));
       for(int i=0;i<rows;i++)
       {     printf("enter number of subject (cols) \n");
             scanf("%d",&cols);
             arr_col[i]=cols;
            s[i]=(int*)malloc(cols*sizeof(int));
            for(int j=0;j<cols;j++)
            {

            printf("enter degree of students %d%d\n",i,j);
            scanf("%d",&s[i][j]);

             }
       }

        for(int i=0;i<rows;i++)
           {

              for(int j=0;j<arr_col[i];j++)
              {

              printf(" %d ",s[i][j]);



              }
              printf("\n");
          }

    return 0;
}
