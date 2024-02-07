#include <stdio.h>
#include "my_mat.h"
#define S 10

int main(){
int mat [S][S];
char user;
/*
if user press D the progrem exit.
*/
while(user!='D'){
  /*
  send to A fucntion. to fill the matrix.
  Once the matrix is filled,  send to shortest path function
  to recive shortestpath matrix.
  */
  scanf("%c",&user);
    if(user=='A'){
      A(mat);
        shortestpath(mat);
}
/*
send to shortest path matrix i,j integers and return false/true
*/
if (user=='B'){
    int i;
    int j;
    scanf("%d %d", &i, &j);
    B(mat,i,j);
}
/*
send to shortest path matrix k,t integers and return -1/ans value
*/
if (user=='C'){
  int k;
  int t;
  scanf("%d %d", &k, &t);
  C(mat,k,t);
   }
 }
 return 0;
}