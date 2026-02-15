#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap_pointeurs(int **a, int **b){
    int *temp=*a;
    *a = *b;
    *b =temp;
}

int main(){
    int sensor1 = 42;
    int sensor2 = 100;

    int *ptr1 =&sensor1;
    int *ptr2 =&sensor2;

    printf("(%p,%p)\n",ptr1,ptr2);
    printf("(%d,%d)\n",*ptr1,*ptr2);

    swap_pointeurs(&ptr1,&ptr2);

    printf("(%p,%p)\n",ptr1,ptr2);
    printf("(%d,%d)\n",*ptr1,*ptr2);

    return 0;


}