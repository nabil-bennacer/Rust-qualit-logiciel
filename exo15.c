#include <stdio.h>
int main(){
    for (unsigned char c=0;c<32;c++){
        printf("(0x%02x)--",c);
    }
    for (unsigned char c=32;c<128;c++){
        printf("(%d -- %c),",c,c);
    }
}
