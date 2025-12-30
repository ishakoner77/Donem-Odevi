#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int kazanc[12];
    srand(time(NULL));

    for(int i=0; i<12; i++) {
        kazanc[i] = rand() % 10 + 1; // 1K-10K arası
        printf("%d. Ay: %dK\n", i+1, ciro[i]);
    }
    return 0;
}