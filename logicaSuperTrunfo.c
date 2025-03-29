#include <stdio.h>

    int main() {
        char codecity[20];
        int populacao;
        int area;
        int pib;
        int numpt;
        int opcao;
        int escolha;
       
     
        char codecity2[20];
        int populacao2;
        int area2;
        int pib2;
        int numpt2;
        
        printf("* SUPER TRUNFO DE CIDADES *\n");
     
        printf("Ola jogador 1! diga o codigo da sua cidade :\n");
        scanf("%19s", codecity);
        
     
        printf("Diga a população da sua cidade :\n");
        scanf("%d", &populacao);
       
     
        printf("Diga a area da sua cidade :\n");
        scanf("%d", &area);
        
     
        printf("Diga o pib da sua cidade :\n");
        scanf("%d", &pib);
       
     
        printf("Diga o numero de pontos turisticos da sua cidade :\n");
        scanf("%d", &numpt);
     
        int densidade = populacao / area;
        int pibpercapita = pib / populacao;
        
        printf("Densidade populacional: %d\n", densidade);
        
        printf("Pib per capita :%d\n", pibpercapita);
     
     
        printf("Ola jogador 2! diga o codigo da sua cidade :\n");
        scanf("%19s", codecity2);
        
     
        printf("Diga a população da sua cidade :\n");
        scanf("%d", &populacao2);
       
     
        printf("Diga a area da sua cidade :\n");
        scanf("%d", &area2);
        
     
        printf("Diga o pib da sua cidade :\n");
        scanf("%d", &pib2);
       
     
        printf("Diga o numero de pontos turisticos da sua cidade :\n");
        scanf("%d", &numpt2);
         
        int densidade2 = populacao2 / area2;
        int pibpercapita2 = pib2 / populacao2;
     
        printf("Densidade populacional: %d\n", densidade2);
        
        printf("Pib per capita: %d\n", pibpercapita2);
        
        
        printf("1. Comparar população\n");
        printf("2. Comparar área\n");
        printf("3. Comparar pib\n");
        printf("4. Comparar numero de pontos turisticos\n");
        printf("5. Comparar densidade populacional\n");
        printf("6. Comparar pib per-capita\n");
        printf("Escolha: \n");
        scanf("%d", &escolha);
        
        switch(escolha){
        
        case 1:
            if(populacao > populacao2){
              printf("Jogador 1 venceu!");
            } else {
              printf("Jogador 2 venceu!");
            }
            break;
        
        case 2:
            if(area > area2){
             printf("Jogador 1 venceu!");
            } else {
              printf("Jogador 2 venceu!");
            }
            break;
            
        case 3: 
            if(pib > pib2){
              printf("Jogador 1 venceu!");
            } else {
              printf("Jogador 2 venceu!");
            }
            break;
        
        case 4: 
            if(numpt > numpt2){
              printf("Jogador 1 venceu!");
            } else {
              printf("Jogador 2 venceu!");
            }
            break;
            
        case 5: 
            if(densidade < densidade2){
              printf("Jogador 1 venceu!");
            } else {
              printf("Jogador 2 venceu!");
            }    
            break;
            
        case 6: 
            if(pibpercapita > pibpercapita2){
              printf("Jogador 1 venceu!");
            } else {
              printf("Jogador 2 venceu!");
            }
            break;
            
            
        default:
            printf("Opção invalida!");
            break;    
        }
        return 0;
     }
    
