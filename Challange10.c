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
    int c = 0;
    int S;
    
    printf("donner le nombre de recherche :");
    scanf("%d",&S);
    for(int i = 0;i<in;i++){
        if(T[i] == S){
            c++;
        }
    }
    if (c==0){
        printf("non");
    }else{
        printf("present");
    }

    return 0;
}