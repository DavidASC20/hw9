#include <stdio.h>
#include <stdlib.h>

struct shoes{char *name; int price;};

void print_shoes(struct shoes *p){
    printf("The %s's will cost you around %d dollars\n", p -> name, p -> price);
}

struct shoes * make_shoes(char *n, int p){
    struct shoes *x = malloc(sizeof(struct shoes));

    x -> name = n;
    x -> price = p;

    return x;
}


int main(){
    struct shoes *p = make_shoes("air jordan 1", 170);
    print_shoes(p);

    free(p);

    return 0;
}