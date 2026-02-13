#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(int *a, int *b){
    int temp=*a;
    *a = *b;
    *b =temp;
}

int main(){
    int a = 20;
    int b = 10;
    printf("valeur de a : %d \n",a);
    printf("valeur de b : %d \n",b);

    swap(&a,&b);

    printf("valeur de a : %d \n",a);
    printf("valeur de b : %d \n",b);

}