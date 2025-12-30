
#include <stdio.h>

int main() {
    int ciro[12] = {2,8,5,1,10,5,9,9,3,5,6,6};
    int max = 10;

    for(int i=0; i<12; i++) {
        printf("%2d. Ay: ", i+1);
        for(int j=0; j<ciro[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


