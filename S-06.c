#include <stdio.h>

int main() {

  int n,dob;

  printf("Digite um numero:\n");
  scanf("%d",&n);

  if(n>0){
  
     dob= n*2;
     
  }else{
  
    printf("Operação inválida!");
    
  }
  
  printf("O dobro do numero eh:%d",dob);
  
  return 0;
}
