#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct character{
    char name[50];
    int level;
    int health;
};

void print_character(struct character chr){
    printf("Name : %s\n", chr.name);
    printf("Level : %d\n",chr.level);
    printf("Health : %d\n",chr.health);
}

int main(){
    struct character charac = {"Hero",1,100};
    print_character(charac);
    return 0;
}