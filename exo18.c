#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *renverse(char mot[]){
    char *motR;
    motR = malloc(strlen(mot)+1);
    int i = 0;
    int ln = strlen(mot);
    while(mot[i]!=0){
        motR[i]=mot[ln-1-i];
        i++;
    }
    return motR;
}

int main(int argc, char *argv[]){
    printf("%s\n",renverse(argv[1]));
}