#include<stdio.h>
int main()
{
   int age,income,credit;
   printf("enter age,income,credit score:");
   scanf("%d%d%d",&age,&income,&credit);
   if(age<21||age>60)
   {
     printf("loan rejected:age not in 21to60");
   }  
   else if(income<25000)
   {
     printf("loan rejected:income below Rs.25000");
   } 
   else if(credit<700)
   {
     printf("loan rejected: credit score below 700");
   }  
   else
   {
     printf("loan approved");
   }  
   return 0;
}   