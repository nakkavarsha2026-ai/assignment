#include<stdio.h>
int main()
{
  float length,breadth;
  printf("enterlength&breadth:");
  scanf("%f%f",&length,&breadth);
  printf("area=%2.f\n",length*breadth);
  printf("perimeter=%2.f",2*(length+breadth));
  return 0;
}