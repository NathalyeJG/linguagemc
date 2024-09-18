#include <stdio.h>
int main(void)
{    int contador;                          // vai contar quantas notas foram digitadas//
     int total;                                  // a soma de todas as notas//
     int media;                               // essa variante irá tirar as medias das notas//
     int nota;                                  //vai ser o valor das notas//

     total = 0;
     contador = 1;
     while (contador <= 10)
         {
             printf("Digite a nota:");
             scanf( "%d", &nota );
             total = total + nota;
             contador = contador + 1;
         }
         media = total / 10;
         printf( "Média da turma é %d\n", media );
         return 0;
}