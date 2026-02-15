#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[50];
    int level;
    int health;
}character;

void level_up_by_value(character chr){
    chr.level +=1;
    printf("new level : %d \n",chr.level);
}

void heal_by_address(character* chr){
    chr -> health +=20; //équivalent à (*chr.health).health+=20;
    printf("new health : %d \n",chr -> health);
}
 
void print_character(character chr){
    printf("Name : %s\n", chr.name);
    printf("Level : %d\n",chr.level);
    printf("Health : %d\n",chr.health);
}

int main(){
    character ray = {"Hero",1,100};
    print_character(ray);
    level_up_by_value(ray);
    heal_by_address(&ray);
    print_character(ray);
    return 0;
}