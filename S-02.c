#include <stdio.h>

int main() {

  int n1,n2,menor;

  printf("Digite dois numeros\n");
  scanf("%d %d",&n1, &n2);

  if(n1<n2){
    menor=n1;
    printf("O menor valor eh:%d",menor);
    
  }else{
    menor=n2;
    printf("O menor valor eh:%d",menor);
  }
  
  return 0;
}
