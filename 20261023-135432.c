#include<stdio.h>
int main()
{
  int user_id,password;
  int storage_id=101;
  int storage_pass=4321;
  printf("enter user ID password:");
  scanf("%d%d",&user_id,&password);
  if(user_id!=storage_id){
    printf("user not found");
  }  
  else
  {
    if(password==storage_pass){
       printf("login successful");
    }else{
    printf("incorrect password");
    }
  }
  return 0;
}  

      