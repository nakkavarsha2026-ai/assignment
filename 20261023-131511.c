#include<stdio.h>
int main()
{
  float order_amount,discount=0,delivery=0,payable;
  int membership;
  printf("enter the orderamount:");
  scanf("%f",&order_amount);
  printf("enter membership(1 premium ,0 regular):");
  scanf("%d",&membership);
  if(order_amount>=500)
  {
    delivery=0;
    if(membership==1)
    {
       discount=order_amount*0.10;
    }  
  }  
  else
  {
      delivery=50;
  }   
  payable=order_amount-discount+delivery; 
  printf("final payable amount=%.2f",payable);
  return 0;
  }
   
      