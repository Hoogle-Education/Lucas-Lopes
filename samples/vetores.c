#include <stdio.h>

void ler_inteiro(int *var)
{
  scanf("%d", var);
  printf("na funcao = %d\n", *var);
}

int *ler_inteiro_autonoma()
{
  int *var;
  scanf("%d", var);
  return var;
}

int main(int argc, char const *argv[])
{

  int v[10];
  int *var;
  // ler_inteiro(&var);
  // var = ler_inteiro_autonoma();

  // malloc sample
  int tam = 5;
  int *vetor = (int *)malloc(tam * sizeof(int));

  return 0;
}
