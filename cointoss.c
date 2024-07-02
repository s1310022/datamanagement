#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int a=0,b=0;
  
  printf("Tossing a coin...\n");
  srand((int)time(NULL));
  for(int i=0;i<3;i++){
    printf("Round %d : ",i);
    if(rand()%2==0){
      printf("Heads\n");
      a++;
    }
    else{
      printf("Tails\n");
      b++;
    }
  }
    printf("Heads : %d, Tails : %d\n",a,b);
    
    return 0;
}
  
