#include <stdio.h>

int main(){
  int final_placa;
  printf("Digite o número final da Placa do seu veiculo:\n");
  scanf("%d",&final_placa);

  switch(final_placa){
     case 1:
       printf("Rodizio na segunda-feira");
       break;

         case 2:
       printf("Rodizio na segunda-feira");
       break;

         case 3:
       printf("Rodizio na Terça-feira");
       break;

         case 4:
       printf("Rodizio na Terça-feira");
       break;

         case 5:
       printf("Rodizio na Quarta-feira");
       break;

         case 6:
       printf("Rodizio na Quarta-feira");
       break;


         case 7:
       printf("Rodizio na Quinta-feira");
       break;

         case 8:
       printf("Rodizio na Quinta-feira");
       break;

         case 9:
       printf("Rodizio na Sexta-feira");
       break;

         case 0:
       printf("Rodizio na Sexta-feira");
       break;

       default:
          printf("Final de placa inexistente");
            break;

  }
  return 0;


}