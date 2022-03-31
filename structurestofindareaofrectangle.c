#include<stdio.h>


struct point
{
 int x;
 int y;
 
};
struct rectangle {
struct point upper_left;
struct point lower_right;
};


int area(struct rectangle r)
{
  int length,breadth;
  length = r.lower_right.x;
  breadth = r.upper_left.x;
  return length*breadth;
    
}
int main ()
{
    struct rectangle r;
   
    scanf("%d",&r.upper_left.x);
   
    scanf("%d",&r.lower_right.x);
    printf("Area:%d", area (r));
    return 0;
}
