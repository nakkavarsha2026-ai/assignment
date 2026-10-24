#include<stdio.h>
int main()
{
  float weight,height,bmi;
  printf("enter weight(kg)and height(m):");
  scanf("%f%f",&weight,&height);
  
  bmi=weight/(height*height);
  printf("BMI=%.2f\n",bmi);
  
  if(bmi<18.5)
  {
    printf("category:underweight");
  }
  else if(bmi<25)
  {
    printf("category:normal");
  }
  else if(bmi<30)
  {
    printf("category:overweight");
  }
  else
  {
    printf("category:obese");
  }
  return 0;
}  
