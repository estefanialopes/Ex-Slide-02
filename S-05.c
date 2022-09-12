#include <stdio.h>

int main() {

  float alt,ps;
  char sex;

  printf("Digite seu sexo F para feminino e M para masculino:\n");
  scanf("%c",&sex);

  printf("Digite sua altura;\n");
  scanf("%f",&alt);

  if(sex=='F'){
        ps=(62.1*alt)-44.7;
    
  }else if(sex=='M'){
         ps=(72.7*alt)-58;
  }
  printf("Seu peso ideal eh:%0.2f",ps);
  
  return 0;
}
