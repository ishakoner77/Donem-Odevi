#include <stdio.h>

#define N 5

int labirent[N][N] = {
    {1,0,1,1,1},
    {1,1,1,0,1},
    {0,1,0,1,1},
    {1,1,1,1,0},
    {0,0,1,1,1}
};

int yolBul(int x, int y) {
    if(x==N-1 && y==N-1) return 1;
    if(x<0 || y<0 || x>=N || y>=N || labirent[x][y]==0) return 0;

    labirent[x][y]=0; // ziyaret edildi
    if(yolBul(x+1,y) || yolBul(x,y+1) || yolBul(x-1,y) || yolBul(x,y-1)) {
        printf("(%d,%d) -> ", x,y);
        return 1;
    }
    return 0;
}

int main() {
    if(yolBul(0,0)) printf("Çıkış bulundu!\n");
    else printf("Çıkış yok!\n");
    return 0;
}