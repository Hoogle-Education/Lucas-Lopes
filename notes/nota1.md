# Alocacao Dinamica

## vetor

Eh um bloco contiguo na memoria.

## casting

aviso do tipo para a propria variavel.

```c
double div1 = 1 / 2;
printf("%lf", div1); // 0

double div2 = (double)1 / (double)2;
printf("%lf", div2); // 0.5
```

## Mallloc

Memory allocation.

```c
int tam = 5;
int *vetor = (int *) malloc(tam * sizeof(int));
char *palavra  = (char *) malloc(50 * sizeof(char));
```

## Calloc

Continuos Allocation.

```c
int *vetor = (int *) calloc(tam, sizeof(int));
```

## Free

Faz o ponteiro parar de observar o conteudo.

```c
void libera_memoria(int *ptr) {
  free(ptr);
}
```

## Realloc

## File manipulation modes

| code  |            mode            |
| :---: | :------------------------: |
|  "w"  |    write (_or create_)     |
| "w+"  |    write (_if exists_)     |
| "wb"  | write binary (_or create_) |
| "wb+" | write binary (_if exists_) |
|  "r"  |            read            |
| "rb"  |        write binary        |

## Abrindo e fechando

```c
#include <string.h>

File* abrir(string nome_do_arquivo) {
  File *file;
  file = fopen("arquivo.txt", "rw+");
  return file;
}
```

```c
File *file;

// ler e escrever sem criar o arquivo
file = fopen("arquivo.txt", "rw+");

// validacao
if(file == NULL) {
  puts("nao conseguiu abrir");
  return 0;
}

// imprime linhas do arquivo (fgets)

flose(file);
```
