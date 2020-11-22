#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void mostrar_sopa(int sopa[20][20], int x,int y, int dx,int dy, int contador);

void main(void){
  int sopa[20][20];
  int palabra[] = {67,82,85,68,79};
  unsigned long contador = 1; 

  srand(time(NULL));

  while(1){
  
  contador = contador + 1 ;
  
  // Generar la sopa de letras aleatoriamente
  for(int i=0;i<20;i++){
      for(int j=0;j<20;j++){
        sopa[i][j] = rand () % (90-65+1) + 65;
      }
  }

  // buscar la palabra CRUDO
  for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
      if(palabra[0] == sopa[i][j]){
        if(i>3 && palabra[1] == sopa[i-1][j] && palabra[2] == sopa[i-2][j] && palabra[3] == sopa[i-3][j] && palabra[4] == sopa[i-4][j]){
          mostrar_sopa(sopa,i,j,-1,0,contador);
          exit(1);
        }
        if(i<16 && palabra[1] == sopa[i+1][j] && palabra[2] == sopa[i+1][j] && palabra[3] == sopa[i+3][j] && palabra[4] == sopa[i+4][j]){
          mostrar_sopa(sopa,i,j,1,0,contador);
          exit(1);
        }
        if(j>3 && palabra[1] == sopa[i][j-1] && palabra[2] == sopa[i][j-2] && palabra[3] == sopa[i][j-3] && palabra[4] == sopa[i][j-4]){
          mostrar_sopa(sopa,i,j,0,-1,contador);
          exit(1);
        }
        if(j<16 && palabra[1] == sopa[i][j+1] && palabra[2] == sopa[i][j+2] && palabra[3] == sopa[i][j+3] && palabra[4] == sopa[i][j+4]){
          mostrar_sopa(sopa,i,j,0,1,contador);
          exit(1);
        }
        if(i>3 && j<16 && palabra[1] == sopa[i-1][j+1] && palabra[2] == sopa[i-2][j+2] && palabra[3] == sopa[i-3][j+3] && palabra[4] == sopa[i-4][j+4]){
          mostrar_sopa(sopa,i,j,-1,1,contador);
          exit(1);
        }
        if(i<16 && j<16 && palabra[1] == sopa[i+1][j+1] && palabra[2] == sopa[i+2][j+2] && palabra[3] == sopa[i+3][j+3] && palabra[4] == sopa[i+4][j+4]){
          mostrar_sopa(sopa,i,j,1,1,contador);
          exit(1);
        }
        if(i>3 && j>3 && palabra[1] == sopa[i-1][j-1] && palabra[2] == sopa[i-2][j-2] && palabra[3] == sopa[i-3][j-3] && palabra[4] == sopa[i-4][j-4]){
          mostrar_sopa(sopa,i,j,-1,-1,contador);
          exit(1);
        }
        if(i<3 && j>3 && palabra[1] == sopa[i+1][j-1] && palabra[2] == sopa[i+2][j-2] && palabra[3] == sopa[i+3][j-3] && palabra[4] == sopa[i+4][j-4]){
          mostrar_sopa(sopa,i,j,1,-1,contador);
          exit(1);
        }
      }
    }
  }
  }
}
  
void mostrar_sopa(int sopa[20][20], int x, int y, int dx,int dy, int contador){
    printf(ANSI_COLOR_CYAN "Iteraciones : %d\n" ANSI_COLOR_RESET, contador);
    //printf("\nSOPA DE LETRAS : \n \n");
    printf(ANSI_COLOR_BLUE " ____________________________________________________________\n\n" ANSI_COLOR_RESET);
    for(int i=0;i<20;i++){
        printf(ANSI_COLOR_BLUE "|" ANSI_COLOR_RESET);
        for(int j=0;j<20;j++){
          if((i == x && j == y) || 
            (i == x+dx && j == y+dy) ||
            (i == x+2*dx && j == y+2*dy) ||
            (i == x+3*dx && j == y+3*dy) ||
            (i == x+4*dx && j == y+4*dy) ){
            printf(ANSI_COLOR_RED " %c " ANSI_COLOR_RESET, sopa[i][j]);
          }else{
            printf(ANSI_COLOR_GREEN " %c " ANSI_COLOR_RESET,sopa[i][j] );
          }
        }
        printf(ANSI_COLOR_BLUE "|\n" ANSI_COLOR_RESET);
    }
    printf(ANSI_COLOR_BLUE " ____________________________________________________________\n" ANSI_COLOR_RESET);
}

