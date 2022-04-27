#include <stdio.h>	
void fastread( int *a);
#define INF 100000000
int dist[231][231] = {0};
int main(){
int c, f;
fastread(&c); fastread(&f);
int x, y, p, i, j, k;
for(i = 1; i <= c; i++){
for(j = 1; j <= c; j++){
if(i != j) dist[i][j] = INF;
else dist[i][j] = 0;
}
}	
for(i = 0; i < f; i++){
fastread(&x); fastread(&y); fastread(&p);
dist[x][y] = p;
dist[y][x] = p;
}
for(k = 1; k <= c; k++){
for(i = 1; i <= c; i++){
for(j = 1; j <= c; j++){
if(dist[i][k] + dist[k][j] < dist[i][j]) dist[i][j] = dist[i][k] + dist[k][j];
}
}
}
int max = 0;
for(i = 1; i <= c; i++){
for(j = 1; j <= c; j++){
if(dist[i][j] < INF && dist[i][j] > max) max = dist[i][j];
}
}
printf("%d\n", max);
return 0;
}

void fastread( int *a){
char c=0;
while(c<33){
c=getchar_unlocked();
}
*a=0;
while(c>33){
*a=*a*10+c-'0';
c=getchar_unlocked();
}
}
