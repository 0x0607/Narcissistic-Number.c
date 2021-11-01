#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned int input=0,output=0,temp=0;
    int i=1;
    while(input<100||input>999){
        printf("plz type Ur input：");
        scanf("%d",&input);
    }
    while(i<1000){
        temp=input/i%10;
        output+=temp*temp*temp;
        printf("\n%d^3=%d",temp,temp*temp*temp);
    i*=10;}
    printf("\n\n%d is %sNarcissistic-Number",input,output==input ? "\0" :"not ");
return 0;}
