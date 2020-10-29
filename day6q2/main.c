#include <stdio.h>
#include <stdlib.h>

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
     //printf("new x : %d \n",newX);
     //printf("new y : %d \n",newY);

}

int main()
{
   struct line l1;
   //struct point p;
   //={2,3};
   l1.p1.x=2;
   l1.p1.y=3;
   int a,b,lenx,leny;
    printf("enter first point\n");
    scanf("%d",&a);
    printf("enter secand point\n");
    scanf("%d",&b);
     lenx=a-l1.p1.x;
     leny=b-l1.p1.y;
   change_Position(&l1,a,b);
   //lenx=-l1.p1.x;
     printf("new x : %d \n",l1.p1.x);
     printf("new y : %d \n",l1.p1.y);
    return 0;
}
