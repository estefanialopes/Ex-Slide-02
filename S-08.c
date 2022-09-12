#include <stdio.h>
int main() {

  float n1,n2,m;

  printf("Digite as duas notas do aluno:\n");
  scanf("%f %f",&n1,&n2);

  m=(n1*n2)/2;
  
  if(m>=0.0 && m<4.0){
    printf("Reprovado");
    
  }else if(m>=4.0 && m<7.0){
    printf("Exame");
    
  }else{
    printf("Aprovado");
  }
  
  return 0;
}
