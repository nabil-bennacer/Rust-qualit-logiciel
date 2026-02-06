#include <stdio.h>

void maybe_init(int init){
    int a;
    int b;
    int c;

    if (init == 1){
        a = 42;
        b = 2077;
        c = 2029;
    }

    printf(" les valeurs de a,b,c sont (%d,%d,%d) \n",a,b,c);

}

int main(){
    maybe_init(0);
    maybe_init(1);
    maybe_init(0);
}