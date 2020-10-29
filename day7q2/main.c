#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rows,cols,index;
     printf("enter number of student (rows) \n");
     scanf("%d",&rows);
      printf("enter number of subject (cols) \n");
     scanf("%d",&cols);


    int **s,sum=0;
    float avg;
    s=(int**) malloc(rows*sizeof(int*));
       for(int i=0;i<rows;i++)
       {
            s[i]=(int*)malloc(cols*sizeof(int));
            for(int j=0;j<cols;j++)
            {

            printf("enter degree of students %d%d\n",i,j);
            scanf("%d",&s[i][j]);

             }
       }

     for(int i=0;i<rows;i++)
       {

            for(int j=0;j<cols;j++)
            {
               sum+=s[i][j];

            }
        printf(" the sum of student%d:%d\n",i,sum);
        sum=0;
    }
     for(int i=0;i<cols;i++)
       {

            for(int j=0;j<rows;j++)
            {

              sum+=s[j][i];


             }
           avg=(sum)/rows;
        printf(" the avg of student%d:%f\n",i,avg);
          sum=0;

    }

    return 0;
}
