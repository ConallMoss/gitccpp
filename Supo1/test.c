#include <stdio.h>
#define CONCAT(A, B) (A B)
#define SWAP(t, a, b) {t temp = a; a = b; b = temp;}

void change(int *a){
    a[1] = a[2];
}

void printarr(int *n, int l){
    for(int i = 0; i<l; i++){
        printf("%d, ", n[i]);
    }
    printf("/n");
}

int main(void){
    /*int i[] = {1, 2, 3};
    int *p = i;
    change(i);
    printarr(i, 3);*/
    //printf(CONCAT("Hello", "World"));
    int a = 3;
    int b = 4;

    //SWAP
    int temp = a;
    a = b;
    b = temp;

    SWAP(int, a, b);
    printf("%d %d", a, b);

    
    return 0;
}

