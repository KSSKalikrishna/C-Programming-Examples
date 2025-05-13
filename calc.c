#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,sum,sub,mul,Div;
    char oper;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("\nEnter the value of b :");
    scanf("%d",&b);
    getchar();
    printf("\nEnter the oper :");
    scanf("%c",&oper);
    switch(oper){
        case '+':
        printf("sum = %d",a+b);
        break;
        case '-':
        printf("sub = %d",a-b);
        break;
        case '*':
        printf("mul = %d",a*b);
        break;
        case '/':
        printf("Div = %f",a/b);
        break;
        default:
        printf("\nEnter valid Input");
    }
    getch();
}
