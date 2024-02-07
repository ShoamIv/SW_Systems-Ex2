#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define S 10
#define cap 20
#define arr 5
/*
Fill the matrix.
*/
void A(int matrix[S][S]){
    for(int i=0; i<S; i++){
      for(int j=0; j<S; j++){
        scanf("%d",&matrix[i][j]);
      }
    }
}
/*
find maximum and minimum.
*/
int mini(int a,int b){
  if(a<b){return a;} else return b;
}
int maxi(int a,int b){
  if(a>b){return a;} else return b;
}
/*
Find the shortest path matrix that indicates us if there is a route,
on top of that what is shortest route.
*/
void shortestpath(int matrix[S][S]){
for(int k=0; k<S; k++){
 for(int i=0; i<S; i++){
  for(int j=0; j<S; j++){

    if(i!=j){
      if(matrix[i][j]!=0){
        if(matrix[i][k]!=0 && matrix[k][j]!=0){
          matrix[i][j]=mini(matrix[i][j],matrix[i][k]+matrix[k][j]);
        }
      }
      else if(matrix[i][k]!=0 && matrix[k][j]!=0 ){
           matrix[i][j]=matrix[i][k]+matrix[k][j];
        }   
      } 
     }
    }
  }

return;
}
/*
recived the shorest path matrix and return true or false.
*/
void B(int matrix[S][S],int i,int j){
int ans=matrix[i][j];
if(ans==0){printf("False");}else printf("True");
printf("\n");
}
/*
recived the shortest path matrix and return the shortest path, if there isnt path reuturn -1.
*/
void C(int matrix[S][S],int i,int j){
  int ans=matrix[i][j];
  if(ans==0){printf("%d",-1);}
  else printf("%d",ans);
  printf("\n");
  return;
}
/*
knapSack function, build the matrix.
the matrix[5][20] position will return us max profit.
*/
int knapSack (int value[5],int weights[5],int selected_bool[5]){
 int k[arr+1][cap+1];
    for(int i=0; i<=arr; i++){
    for(int j=0; j<=cap; j++ ){
        if(i==0 || j==0){k[i][j]=0;}
    else if (weights[i-1]<=j){
        k[i][j]=maxi(value[i-1]+k[i-1][j-weights[i-1]],k[i-1][j]);
        }
    else{k[i][j]=k[i-1][j];}
        }
    }
    reverse(k,weights,selected_bool);
   return(k[arr][cap]);
}
/*
starting traverse the matrix from matrix[5][20].
decrease i and j according conditons.
increase selected_bool if neccsery.
*/
void reverse(int k[6][21],int weights[5],int selected_bool[5]){
int i=5, j=cap;
while(i>0 && j>0){
if(k[i][j]>k[i-1][j]){
    i--;
    j=j-weights[i];
      selected_bool[i]=1;
   }
   else if(i--);
  }
 }
