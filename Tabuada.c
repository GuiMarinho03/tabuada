#include <stdio.h>
#include <locale.h>

int numero;
int i;

int main() {
  setlocale(LC_ALL, "portuguese");
    
  printf("Qual tabuada você quer? ");
  scanf("%d", &numero);

  for(i = 0; i <= 10; i++) {
    int multiplicacao = numero * i;
    printf("%d x %d = %d\n", numero, i, multiplicacao);
  }
}