#include <stdio.h>
#include <stdarg.h>

int checkBit(int mask, char bit);

unsigned onesCount(size_t size, unsigned count, ...);

int main(){
    printf("\n%u\n", onesCount(1, 1,    1));
    printf("\n%u\n", onesCount(1, 2,    1, 1));
    printf("\n%u\n", onesCount(2, 3,    1, 2, 3));
    printf("\n%u\n", onesCount(2, 4,    1, 2, 3, 4));
}

int checkBit(int mask, char bit){
    return (mask & (1 << bit)) >> bit;
}

unsigned onesCount(size_t size, unsigned count, ...){
    va_list ap;
    va_start(ap, count);
    unsigned ones_count = 0;
    // count - broi maski
    // za tova cikyla ni e do broj maski iskame da obhodim vsqka maska
    for(int i=0; i < count; i++){
        int mask = va_arg(ap, int);
        printf("\n%d   ", mask);
        // obhojdame bitovete koito sa znacheshti, t.e. nomera im e po malyk ot razmera na maskata.
        for(int bit_number = size - 1; bit_number >= 0; bit_number--){
            printf("%d", checkBit(mask, bit_number));
            ones_count += checkBit(mask, bit_number);
        }
    }
    va_end(ap); 
    return ones_count;
}