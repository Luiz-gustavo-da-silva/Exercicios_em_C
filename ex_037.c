#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
  int nlin, ncol;
  int **mat;
} Matrix;

Matrix* createMatrix(int nlin, int ncol){

  Matrix *m = malloc(sizeof(Matrix));

  m->nlin = nlin;
  m->ncol = ncol;

  m->mat = malloc(sizeof(int*)*nlin);
  for (int i = 0; i < nlin; i++)
  {
    m->mat[i] = malloc(sizeof(int)*ncol);
  }

  return m;

}

void readMatrix(Matrix *m){
  for (int l = 0; l < m->nlin; l++)
  {
    for (int c = 0; c < m->ncol; c++)
    {
      scanf("%d ", &m->mat[l][c]);
    }
  }
  
} 

void printMatrix(Matrix *m){
  for (int l = 0; l < m->nlin; l++)
  {
    for (int c = 0; c < m->ncol; c++)
    {
      printf("%d ", m->mat[l][c]);
    }
    printf("\n");
  }
}

void destroyMatrix(Matrix *m){
  for (int i = 0; i < m->nlin; i++)
  {
    free(m->mat[i]);
  }
  free(m);
  m=NULL;
}

int main(){

  int lin, col;
  Matrix* mat;

  scanf("%i %i", &lin, &col);
  mat = createMatrix(lin, col);
  readMatrix(mat);
  printMatrix(mat);
  destroyMatrix(&mat);

  mat=NULL;
  if(mat == NULL){
    printf("OK\n");
  }

  return 0;
}