#include <stdio.h>
#include "my_mat.h"
#define S 10

int main(){
int mat [S][S];
char user;
while(user!='D'){
  scanf("%c",&user);
    if(user=='A'){
      A(mat);
        shortestpath(mat);
}
if (user=='B'){
    int i;
    int j;
    scanf("%d %d", &i, &j);
    B(mat,i,j);
}
if (user=='C'){
  int k;
  int t;
  scanf("%d %d", &k, &t);
  C(mat,k,t);
   }
 }
 return 0;
}