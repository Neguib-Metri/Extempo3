#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){

int n, m, y, x = atoi(argv[1]);
for( n = 2; n <= x; n++){
y = 0;
for(m = 2; m < n-1 && y == 0; m++){
if(n % m == 0) y = 1;}
if(y == 0 && x % n == 0){
printf("%d\n", n);}
}

return 0;
}
