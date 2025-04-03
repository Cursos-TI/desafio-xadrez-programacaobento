#include <stdio.h>
int main(){

    //Declaração de variáveis e tipo.
    int i = 1;
    int j = 1;
    
    //Impressão do Desafio Xadrez Nível Novato.
    printf("### DESAFIO XADREZ NÍVEL NOVATO ###\n\v");
    
    //Impressão da Peça Torre e a aplicação da estrutura de repetição While.
    printf(" *** MOVIMENTO DA PEÇA TORRE ***\n\v");

    while (i <= 5)
    {
        printf("FRENTE\n");
        i++;
    }

        //Impressão da Peça Rainha e a aplicação da estrutura de repetição For.
        printf("*** MOVIMENTO DA PEÇA RAINHA ***\n\v");

    for (int i = 1; i <= 8; i++)
    {
        printf("ESQUERDA\n");
    }
    
    //Impressão da Peça Bispo e a aplicação da estrutura de repetição Do-While.
    printf("*** MOVIMENTO DA PEÇA BISPO\n\v");

   do{
    printf("CIMA, DIREITA\n");
    j++;    
   } while (j < 6);
   
    
    return 0;
}