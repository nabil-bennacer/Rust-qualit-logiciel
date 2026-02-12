#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *memcpyNabil(void *src, void *dest, int size){
    unsigned char *d = dest;
    unsigned char *s = src;

    for (int i = 0; i<size; i++){
        d[i]=s[i];
    }
    return dest;
}

char *concat(char *str1, char *str2){
    int taille1 = strlen(str1);
    int taille2 = strlen(str2);
    int tailleTot = taille1 + taille2 + 1;
    char *result = malloc(tailleTot);
    if (result==NULL){
        return NULL;
    }
    memcpyNabil(str1,result, taille1);
    memcpyNabil(str2, result + taille1,taille2 +1);
    // equivalent à memcpyNabil(str2, &result[taille1],taille2 +1)

    return result;
}

int main(int argc, char *argv[]){
    // int t1[] = {1,2,3,4};
    // int t2[4];

    // memcpyNabil(t1, t2, sizeof(t1)); on copie tout le tableau
 
    // for (int i=0;i<4;i++){
    //     printf("%d ", t2[i]);
    // }

    int t1[] = {1,2,3,4};
    int t2[3];

    memcpyNabil(&t1[1],t2, 3*sizeof(int)); // Ici on va copier un sous tableau de t1

    for (int i = 0; i<3; i++){
        printf("%d ", t2[i]);
    }
    printf("\n");

    char *a = "nab";
    char *b ="test";

    char * res = concat(a,b);
    printf("%s \n",res);
    free(res);
    

}