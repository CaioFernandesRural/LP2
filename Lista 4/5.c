#include <stdio.h>

int main(){

   int mat[4][5],dob[4][5],som[4][5];

   for(int lin=0;lin<4;lin++){

      for(int col=0;col<5;col++){

         printf("Numero: ");
         scanf("%d",&mat[lin][col]);

      }
      printf("\n");
   }
   printf("\nDobro:\n");

   for(int lin=0;lin<4;lin++){

      for(int col=0;col<5;col++){

         dob[lin][col]=mat[lin][col]*2;
         printf("%d ",dob[lin][col]);

      }
      printf("\n");
   }
   printf("\nSoma:\n");

   for(int lin=0;lin<4;lin++){

      for(int col=0;col<5;col++){

         som[lin][col]=dob[lin][col]+mat[lin][col];
         printf("%d ",som[lin][col]);

      }
      printf("\n");
   }
}