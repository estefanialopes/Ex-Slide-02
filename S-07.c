#include <stdio.h>

int main() {

  int n1,n2,n3,maior;

  printf("Digite tres numeros:\n");
  scanf("%d %d %d",&n1,&n2,&n3);

  if(n1>n2 && n1>n3){
    maior= n1;
    
  }else if(n2>n1 && n2>n3){
    maior =n2;
    
  }else{
    maior= n3;
  }
  
  printf("O maior número eh:%d",maior);
  
  return 0;
}
