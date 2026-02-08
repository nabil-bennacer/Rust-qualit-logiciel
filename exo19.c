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

int palindrome(char chaine[]){
    char *motRenv= renverse(chaine);
    int i = 0;
    while(chaine[i]!=0){
        if (chaine[i]==motRenv[i]){
            printf("palindrome\n");
            return 1;
    }
        else{
            printf("pas un palindrome\n");
            return 0;
        }
    i++;
    }

}


int main(int argc, char *argv[]){
    printf("%d\n",palindrome(argv[1]));
}