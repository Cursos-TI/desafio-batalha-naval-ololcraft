#include <stdio.h>
int main(){
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            if (i == 0 && x > 1 && x < 5)
            {
                tabuleiro[i][x] = 3;

            }else if (i > 5 && i < 9 && x == 8)
            {
                tabuleiro[i][x] = 3;

            }else{
                tabuleiro[i][x] = 0;
                
            }
        }

    }
    tabuleiro[2][1] = 3;
    tabuleiro[3][2] = 3;
    tabuleiro[4][3] = 3;

    tabuleiro[7][5] = 3;
    tabuleiro[8][4] = 3;
    tabuleiro[9][3] = 3;
    for (int i = 0; i < 10; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            printf(" %d", tabuleiro[i][x]);
        }
        printf("\n");
    }
    printf("\n");

    int cone[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == 0 && j ==2) || (i == 1 && j > 0 && j < 4) || (i == 2))
            {
                cone[i][j] = 1;
            }else{
                cone[i][j] = 0;
            }            
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", cone[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int cruz[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (j == 2 || i == 1)
            {
                cruz[i][j]=1;
            }else{
                cruz[i][j]=0;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", cruz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    int octa[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i==1 && j>0 && j<4) || j==2)
            {
                octa[i][j]=1;
            }else{
                octa[i][j]=0;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %d", octa[i][j]);
        }
        printf("\n");
    }
    return 0;
}