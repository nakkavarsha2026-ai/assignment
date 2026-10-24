#include<stdio.h>
int main(){
  int mark;
  printf("enter mark(0-100):");
  scanf("%d",&mark);
  
  if(mark<0||mark>100){
    printf("invalid mark");
  } 
  else if(mark>=90){
    printf("graed O");
  } 
  else if(mark>=80){
    printf("gread A+");
  } 
  else if(mark>=70){
    printf("gread A");
  } 
  else if(mark>=60){
    printf("gread B");
  } 
  else if(mark>=50){
    printf("gread C");
  }  
  else{
    printf("gread fail");
  }  
  return 0;
}  
   
  
  
  
  
  


      