#include <stdio.h>

int main() {

  int n1,n2,n3,s,t;

  printf("Digite tres numeros:\n");
  scanf("%d %d %d",&n1,&n2,&n3);

  if(n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1){
    printf("Os valores informados formam um triangulo!\n");
    
  }else{
     printf("Os valores informados não formam um triangulo!\n");
  }
  
  return 0;
}
