#include <stdio.h>

int main() {
    int ciro[12] = {2,8,5,1,10,5,9,9,3,5,6,6};
    int max = 10;

    for(int i=max; i>0; i--) {
        for(int j=0; j<12; j++) {
            if(ciro[j] >= i) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for(int j=0; j<12; j++) printf("%d ", j+1);
    return 0;
}