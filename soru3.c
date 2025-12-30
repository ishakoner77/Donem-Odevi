#include <stdio.h>
#include <string.h>
#include <ctype.h>

int asalMi(int sayi) {
    if(sayi < 2) return 0;
    for(int i=2; i*i<=sayi; i++) {
        if(sayi % i == 0) return 0;
    }
    return 1;
}

int main() {
    char unlu[] = {'a','e','i','o','u'};
    int sayac=0;

    for(char h1='a'; h1<='z'; h1++) {
        for(char h2='a'; h2<='z'; h2++) {
            for(char h3='a'; h3<='z'; h3++) {
                if(h1==h3) {
                    int toplam = h1+h2+h3;
                    if(asalMi(toplam)) {
                        printf("%c%c%c\n", h1,h2,h3);
                        sayac++;
                    }
                }
            }
        }
    }
    printf("Toplam geçerli isim: %d\n", sayac);
    return 0;
}