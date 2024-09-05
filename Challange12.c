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
    
    
    for(int i=0;i<in;i++){
        if(T[i]%2 == 0){
          printf("%d\t",T[i]);
        }
            
    }
    

    
    

    return 0;
}