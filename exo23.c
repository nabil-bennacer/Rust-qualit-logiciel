#include <stdio.h>
#include <stdlib.h>
#include <string.h>


    // tab dégradé en pointer int *
void multiplier2(int tab[], int len){ // 3X
    // for( int i = 0; i < len; i++) {
    //     tab[i] *= 2; 
    // }

    // int *tab2 = tab;
    for( int i = 0; i < len; i++) {
        *tab*=2; 
        // printf("%p\n", tab);
        tab++;  // par arith. tab devient @ += 4 (int *)
    }
 
    // int *end = tab2 + len;

    // printf("end : %p\n", end);
    // for( /*vide */; tab2 < end; tab2++) {
    //     *tab2*=2; 
    //     printf("%p\n", tab2);

    // }

}

int main(){
    int tab[]={1,2,3,4};
    multiplier2(tab, 4);
    for( int i = 0; i < 4; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n");
    return 0;
    // printf("tab avant : %d \n",);
    
    // printf("tab après : \n",)
}