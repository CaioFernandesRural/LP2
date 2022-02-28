#include <stdio.h>
#include <string.h>

int main(){

    int vog=0;
    char fra[50];

    printf("Escreve(ate 50): ");
    fgets(fra, sizeof(fra),stdin);

    for(int c=0;c<strlen(fra);c++){

        if (fra[c]=='a' || fra[c]=='e' || fra[c]=='c' ||fra[c]=='o' || fra[c]=='u'){
        
            for(int d=0;d<vog;d++){

                printf("%c",fra[c]);
            }
        vog++;
        }
        printf("%c",fra[c]);
    }
}