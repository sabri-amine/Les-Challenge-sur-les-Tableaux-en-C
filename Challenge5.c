5)

// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int in;
    
    printf("Entrer le nombre des element de Table :");
    scanf("%d",&in);
    
    int T[in];
    
    for(int i=0;i<in;i++){
        printf("saisir le tableau %d:",i+1);
        scanf("%d",&T[i]);
    }
    
    int min = T[0];
    
    for(int i = 1;i<in;i++){
        if(T[i]<=T[0]){
            min = T[i];
        }
    }
    
    printf("Le valeur minimun de table est %d",min);
}
