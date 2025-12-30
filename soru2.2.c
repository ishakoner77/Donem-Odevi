#include <stdio.h>

int ucgenSayi(int n) {
    if(n==1) return 1;
    return n + ucgenSayi(n-1);
}

int main() {
    int N=5;
    for(int i=1; i<=N; i++) {
        printf("%d ", ucgenSayi(i));
    }
    return 0;
}