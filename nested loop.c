#include<stdio.h>
int main(){
    int i=1,j=0;
    do
   {
       do{ 
          j++; 
           printf("%d",j);
          }
             while(j<=3);
             i++;
        printf("%d",i);
       } while(i<=5);
    }
    