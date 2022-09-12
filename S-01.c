
#include <stdio.h>

int main() {
  
  float n1,n2,m;

  printf("Digite a primeira nota\n");
  scanf("%f",&n1);

   printf("Digite a segunda nota\n");
  scanf("%f",&n2);

  m=(n1+n2)/2;

  if(m>=7.0){
    printf("Aprovado");
    
  }else{
    printf("Reprovado");
  }
  
  return 0;
}
