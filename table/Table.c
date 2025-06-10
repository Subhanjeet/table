#include<stdio.h>
int main(){
    int a,i;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(i=1; i<=a*10; i++){
        if(i%a==0){
            printf("%d \n",i);
        }
    }
    return 0;
}