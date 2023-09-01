#include <stdio.h>

int main() {
    int numero[2], soma,i;
    for (i=1;i<=2;i++){
        printf("Qual é o %d° numero?",i);
        scanf("%d",&numero[i]);
    }
    
    while (numero[1] == 0 || numero[2] == 0){
        printf("Não digite 0! \n");
        if (numero[1] == 0){
            printf ("Qual é o 1° Numero?");
            scanf ("%d", &numero[1]);
        } else {
            printf ("Qual é o 2° Numero?");
            scanf ("%d", &numero[2]);
        }
    }
    
  soma = numero[1] + numero[2];
  printf ("A soma do %d e do %d é de: %d", numero[1], numero[2], soma);

  return 0;
}
