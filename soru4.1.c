#include <stdio.h>
#include <string.h>

int main() {
    char mesaj[100];
    int anahtar;
    printf("Mesaj: ");
    scanf("%s", mesaj);
    printf("Anahtar: ");
    scanf("%d", &anahtar);

    for(int i=0; i<strlen(mesaj); i++) {
        char c = mesaj[i];
        if(c>='a' && c<='z') {
            c = ((c-'a'+anahtar)%26)+'a';
        }
        else if(c>='A' && c<='Z') {
            c = ((c-'A'+anahtar)%26)+'A';
        }
        printf("%c", c);
    }
    return 0;
}