#include<stdio.h>
#include<stdlib.h>

int main() {

int m,o,p;
int a=5;

for(m=a;m>=1;m--){
for(o=a;o>m;o--){
printf(" ");
}
for(p=1;p<=m;p++){
printf("*");
}
printf("\n");
}
printf("\n");

system("PAUSE");
return 0;
}
