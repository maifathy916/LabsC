#include <stdio.h>
#include <stdlib.h>
int * test() {
  static int x[4];
  for(int i=0;i<4;i++){
    x[i] = i%2;
  }
  return x;
}
int main()
{
    //printf("Hello world!\n");
     printf("int: %ld \n", sizeof(int));
    printf("float: %ld \n", sizeof(float));
    printf("double: %ld \n", sizeof(double));
    printf("char: %ld \n", sizeof(char));
      char a = getchar();
     char b = getch();
     char c= getche();
  printf("You entered: %c", c);
  printf("You entered: ");
  putchar(a);
int a2 = 12;
int b2 = 5;
int result = a2 % b2;
int x = 8;
int y = 7;
x++;
x+= y--;

printf("lllll %d\n",x);
  int * arr = test();
  printf("%d", *(arr+3));return 0;
}
