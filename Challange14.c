// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int in;
    
    printf("Entrer les nombre des elements dans le tableau :");
    scanf("%d",&in);
    
    int T[in];
    
    for(int i=0;i<in;i++){
        printf("saisir le nombre dans le tableau %d :",i+1);
        scanf("%d",&T[i]);
    }
    
    int c=0;
    for(int i=0;i<in;i++){
        c = c+ T[i] ;
    }
    
    int moyenne;
    moyenne = c/in;
    
    printf("La moyenne de tableau est %d:",moyenne);
    
    return 0;
}