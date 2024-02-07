#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define S 10
#define cap 20
#define arr 5
//Fill values in the matrix.
void A(int matrix[S][S]){

    for(int i=0; i<S; i++){
      for(int j=0; j<S; j++){
        scanf("%d",&matrix[i][j]);
      }
    }
} 
//Find minimum and maximum
int mini(int a,int b){
  if(a<b){return a;} else return b;
}
int maxi(int a,int b){
  if(a>b){return a;} else return b;
}
// Find the shortest path for every i,j in matrix.
//according Floyd Warshall algorithm.
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
//Send to the shortest path matrix 2 integers.
void B(int matrix[S][S],int i,int j){
int ans=matrix[i][j];
if(ans==0){printf("False");}else printf("True");
printf("\n");
}
//Send to the shortest path matrix 2 integers.
void C(int matrix[S][S],int i,int j){
  int ans=matrix[i][j];
  if(ans==0){printf("%d",-1);}
  else printf("%d",ans);
  printf("\n");
  return;
}
//create and fill knapsack matrix. that we can track back for items
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
//Start traverse the matrix from position [5][20](max).
//go "up" in the matrix and check conditions.
//according conditions decrease i and j, and increase selected_bool[i].
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

