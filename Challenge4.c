// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int in ;
   
   printf("saisir le nombre des elements dans un table :");
   scanf("%d",&in);
   
   int T[in];
   
   for(int i = 0;i<in;i++){
       printf("Sairir les nombre de tableau %d:",i+1);
       scanf("%d",&T[i]);
   }
   
   int max =T[0];
   for(int i=0;i<in;i++){
       if(T[i]>max){
           max = T[i];
       }
   }
   printf("Le maximun nombre dans le tabeau est %d :",max);
}
