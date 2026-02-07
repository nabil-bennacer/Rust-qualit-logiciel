#include <stdio.h>
#include <stdlib.h>

int strlenNab(char chaine[]){
    int i = 0;
    while (chaine[i]!= 0){
        i++;
    }
    return i;
}

char *strcpyNabil(char destination[], char source[]){
    destination = malloc(strlenNab(source));
    int i = 0;
    while(source[i]!=0){
        destination[i]=source[i];
        i++;
    }
    return destination;
}

int strcmpNabil(char chaine1[], char chaine2[]){
   int i = 0;
   while (chaine1[i]==chaine2[i]){
    if (chaine1[i]==0){
        return 0;
    }
    i++;
   }
   return (unsigned char)chaine1[i]-(unsigned char)chaine2[i];
}

int main(int argc, char *argv[]){
    // int tailleMot = strlenNab(argv[1]);
    // printf("La taille du mot est : %d \n", tailleMot);

    char *s1 = "slab";
    char *s2 = "slam";
    // printf(strcpyNabil(s2,s1));

    printf("%d\n",strcmpNabil(s1,s2));
      
}