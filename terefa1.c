//Olá professor, infelizmente não consegui pensar em como fazer ele mostrar a matriz com a maior somatória, mas ele está printando as submatrizes corretamente, espero que ainda valha de algo, vou melhorar na próxima.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAXL 4
#define MAXC 5

int main(){
 
 srand(time(0));
   
   int matriz[MAXL][MAXC];
   int a,b,i,j;
   
   //definindo a matriz maior
   for(i = 0;i<MAXL;i++){
       for(j = 0;j<MAXC;j++){
           matriz[i][j] = rand() % 100;
       }
   }
   
   for(i = 0;i<MAXL;i++){
       printf("\n");
       for(j = 0;j<MAXC;j++){
           printf(" %d ",matriz[i][j]);
       }
   }
   //fim
   
  printf("agora digite as dimensoes da submatriz");
  scanf("%d",&a);
  scanf("%d",&b);
  
  int x,y,auxl,auxc;
  x = a;
  y = b;
  auxl = 0;
  auxc = 0;
  int cont = 1;
  
  for(x=a;x<MAXL+1;x++){
     
      for(y=b;y<MAXC+1;y++){
          printf("\nsubmatriz%d: ",cont);
          cont++;
          for(i=auxl;i<x;i++){
              printf("\n");
              for(j=auxc;j<y;j++){
                  printf( "[%d][%d] = %d ",i,j,matriz[i][j]);
              }
          }
      
          auxc++;
      }
      auxc = 0;
      auxl++;
     
  }
  

    return 0;
}
