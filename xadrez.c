#include <stdio.h>
void movertorre(int torre){
    if (torre > 0)
    {
       printf("Direita\n");
       movertorre(torre - 1);
    }
    
}
void moverrainha(int rainha){
    if (rainha > 0)
    {
    printf("Esquerda\n");
    moverrainha(rainha - 1);
    }
    
}

int main (){
    
    int escolha;
    int casasT, casasR, casasB, casasC; // casas de cada peças vai mover, indicado pela inicial

  do{
   printf("\nEscolha uma opção\n");// Menu interativo para mexer as peças
   printf("1.Mover torre\n2.Mover rainha\n3.Mover bispo\n4.Mover cavalo\n5.Saindo do programa\n");
   scanf("%d", &escolha);

   switch (escolha)
    {
    case 1:
    printf("Quantidade de casas:");
    scanf("%d", &casasT);
    printf("\nTorre moveu para:\n");
    movertorrre(casasT);
        break;
    case 2:
    printf("Quantidade de casa:");
    scanf("%d", &casasR);
    printf("\nRainha moveu para:\n");
    moverrainha(casasR);
    break;
    case 3:
    printf("Quantidade de movimentos em diagonal:");
    scanf("%d", &casasB);
    printf("\nBispo moveu para:\n");
    for (int i = 0; i < casasB; i++)
    {
        for (int j = 0; j < 1 ; j++)
        {
        printf("Cima\n");
        }
        printf("Direita\n");
    }

    break;
    case 4:
    printf("Quantidade de movimentos em L:");
    scanf("%d", &casasC);
    printf("\nCavalo moveu para:\n");
    for (int i = 0; i < casasC; i++)
    {
        for (int j = 0; j < 2 ; j++)
        {
        printf("Cima\n");
        }
        printf("Direita\n");
       
    }
    
    break;
    default:
    printf ("Opção inválido\n");
        break;
    case 5:
    printf("Saindo...\n");

   
    }
    
  } while (escolha != 5);
  
    
    

return 0;
}

