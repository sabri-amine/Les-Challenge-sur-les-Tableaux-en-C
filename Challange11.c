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
    
    int s,m;
    
    printf("Saisir un nombre pour modifier :");
    scanf("%d",&s);
    
    printf("Saisir un nombre pour change la modification :");
    scanf("%d",&m);
    for(int i=0;i<in;i++){
        if(T[i]==s){
            T[i]=m;
        }
    }
    
    for(int i=0;i<in;i++){
        printf("%d\t",T[i]);
    }
    

    return 0;
}