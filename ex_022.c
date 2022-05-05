#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void mult_mat(int lA, int cA, int A[lA][cA], int lB, int cB, int B[lB][cB], int R[lA][cB])
{
    int produto=0;
    int i =0;
    int a =0;
    int e =0;
    
    for(i=0; i<lA; i++){
        for(a=0; a<cB; a++){
            produto=0;
            for(e=0; e<lA; e++){
                produto+=A[i][e]*B[e][a];
                R[i][a]=produto;
            } 
        }
    }
        
}

void add_mat(int lA, int cA, int A[lA][cA], int lB, int cB, int B[lB][cB], int R[lA][cB])
{
    int i, a=0;
    for (i = 0; i < lA; i++)
    {
        for (a = 0; a < cB; a++)
        {
            R[i][a] = A[i][a] + B[i][a];
        }
    }

}

int main()
{

    int L1, C1, L2, C2, L3, C3, L4, C4 = 0;
    int cont = 1;
    scanf("%d %d", &L1, &C1);
    int A[L1][C1];
    for (int i = 0; i < L1; i++)
    {
        for (int a = 0; a < C1; a++)
        {
            scanf("%d ", &A[i][a]);
        }
    }
    scanf("%d %d", &L2, &C2);
    int B[L2][C2];
    for (int i = 0; i < L2; i++)
    {
        for (int a = 0; a < C2; a++)
        {
            scanf("%d ", &B[i][a]);
        }
    }

    scanf("%d %d", &L3, &C3);
    int C[L3][C3];
    for (int i = 0; i < L3; i++)
    {
        for (int a = 0; a < C3; a++)
        {
            scanf("%d ", &C[i][a]);
        }
    }
    scanf("%d %d", &L4, &C4);
    int D[L4][C4];
    for (int i = 0; i < L4; i++)
    {
        for (int a = 0; a < C4; a++)
        {
            scanf("%d ", &D[i][a]);
        }
    }
    int R1[L1][C2];
    int R2[L2][C3];
    int R3[L3][C4];

    int R4[L1][C2];
    int R5[L3][C4];

    if (L1 != C2 || L2 != C3 || L3 != C4)
    {
        printf("Valor de alguma das multiplicações não pode ser calculado");
        cont = 0;
    }
    else
    {
        mult_mat(L1, C1, A, L2, C2, B, R1);

        // printf("---------------matriz 1---------- \n");
        // for (int i = 0; i < L1; i++)
        // {
        //     for (int a = 0; a < C2; a++)
        //     {
        //         printf("%d ", R1[i][a]);
        //     }  
        //     printf("\n");
        // }
        // printf("---------------matriz fim----------\n");
        mult_mat(L2, C2, B, L3, C3, C, R2);
        // printf("---------------matriz 2----------\n");
        // for (int i = 0; i < L2; i++)
        // {
        //     for (int a = 0; a < C3; a++)
        //     {
        //         printf("%d ", R2[i][a]);
        //     }  
        //     printf("\n");
        // }
        // printf("---------------matriz fim---------- \n");
        mult_mat(L3, C3, C, L4, C4, D, R3);
        // printf("---------------matriz 3---------- \n");
        // for (int i = 0; i < L3; i++)
        // {
        //     for (int a = 0; a < C4; a++)
        //     {
        //         printf("%d ", R3[i][a]);
        //     }  
        //     printf("\n");
        // }
        // printf("---------------matriz fim---------- \n");

        if (L1 != C2 || L2 != C3 || L3!= C4 || L3 != L4 || C3 != C4)
        {
            printf("Valor da soma não pode ser calculado");
            cont = 0;
        }
        else
        {
            add_mat(L1, C2, R1, L2, C3, R2, R4);
            add_mat(L1, C2, R4, L3, C4, R3, R5);
        }
        
    }

    if (cont != 0)
    {
        for (int i = 0; i < L3; i++)
        {
            for (int a = 0; a < C4; a++)
            {
                printf("%d ", R5[i][a]);
            }
            printf("\n");
        }
    }

    return 0;
}