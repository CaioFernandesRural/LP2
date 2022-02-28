#include <stdio.h>

int main(){

    int mat[3][5],som[3]={0,0,0};

    for(int lin=0;lin<3;lin++){

        for(int col=0;col<5;col++){

            printf("Numero: ");
            scanf("%d",&mat[lin][col]);
        }
      printf("\n");
    }
    printf("\nMatriz Digitada:\n");

    for(int lin=0;lin<3;lin++){

        for(int col=0;col<5;col++){

            printf("%d ",mat[lin][col]);

        }
        printf("\n");
    }
    for(int lin=0;lin<3;lin++){

        for(int col=0;col<5;col++){

            som[lin]+=mat[lin][col];
            
        }
    }
    printf("\nSoma das linhas: \n");

    for(int c=0;c<3;c++){

        printf(" %d\n",som[c]);
    }


}