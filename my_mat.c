#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define S 10
#define cap 20
#define arr 5
void A(int matrix[S][S]){

    for(int i=0; i<S; i++){
      for(int j=0; j<S; j++){
        scanf("%d",&matrix[i][j]);
      }
    }
}
int mini(int a,int b){
  if(a<b){return a;} else return b;
}
int maxi(int a,int b){
  if(a>b){return a;} else return b;
}
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
void B(int matrix[S][S],int i,int j){
int ans=matrix[i][j];
if(ans==0){printf("False");}else printf("True");
printf("\n");
}
void C(int matrix[S][S],int i,int j){
  int ans=matrix[i][j];
  if(ans==0){printf("%d",-1);}
  else printf("%d",ans);
  printf("\n");
  return;
}
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
