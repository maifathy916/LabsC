#include <stdio.h>
#include <stdlib.h>
struct employee
{
   int id;
   char name[20];
};

int main()
{
  struct employee *e[3];
    int size,arr_size[3];
       for(int i=0;i<3;i++)
       {

            printf("enter size of arr \n");
              scanf("%d",&size);
            arr_size[i]=size;

            e[i]=(struct employee *)malloc(size*sizeof(struct employee));
              for(int j=0;j<size;j++)
              {

              printf("enter id of employee %d\n",j+1);
              scanf("%d",&e[i][j].id);
              printf("enter name of employee %d\n",j+1);
              scanf("%s",&e[i][j].name);

              }
       }

           for(int i=0;i<3;i++)
           {

              for(int j=0;j<arr_size[i];j++)
              {

              printf("id of employee %d : %d\n",j+1,e[i][j].id);

              printf("name of employee %d : %s\n",j+1,e[i][j].name);

              }
              printf(".......................\n");
          }


    return 0;
}
