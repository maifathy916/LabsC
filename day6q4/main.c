#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point
{
    int x;
    int y;
};
struct line
{
    struct point p1;
    struct point p2;
};
void change_Position(struct line *l, int newX, int newY)
{
    l->p1.x=newX;
    l->p1.y=newY;

}
int main()
{

   int size;
    float lenght=0;
   printf("enter the size\n");
    scanf("%d",&size);
     struct line *lin;


   lin=(struct line*)malloc(size*sizeof(struct line));
   for(int i=0;i<size;i++)
    {
         printf("enter first point of x %d\n",i);
         scanf("%d%d",&lin[i].p1.x,&lin[i].p1.y);
         printf("enter secand point of y %d\n",i);
         scanf("%d%d",&lin[i].p2.x,&lin[i].p2.y);


   }
   //printf("%d",size);
   for(int i=0;i<size;i++)
   {
      lenght=((lin[i].p2.x-lin[i].p1.x)*(lin[i].p2.x-lin[i].p1.x))+((lin[i].p2.y-lin[i].p1.y)*(lin[i].p2.y-lin[i].p1.y));
      printf("Distance between the said points: %f", sqrt(lenght));
      printf("\n");
   }

    return 0;
}
