#include <stdio.h>
#include "my_mat.h"
#define S 10

int main(){
int mat [S][S];
char user;
/*
while user not press D stay in the loop.
*/
while(user!='D'){
/*
Send to A func. after entering values send to shortest path func to recive the desire matrix.
*/
  scanf("%c",&user);
    if(user=='A'){
      A(mat);
        shortestpath(mat);
}
/*send i,j to B and k,t  C.
print true or false to B according conditions.
print -1 or ans value to C according conditions.
*/
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