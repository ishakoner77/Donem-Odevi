#include <stdio.h>

int main() {
    int n;
    printf("n gir: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}