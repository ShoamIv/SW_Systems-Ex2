    #include <stdio.h>
    #include "my_mat.h"
    #define cap 20
    #define arr 5
    int main(){
    char items[arr];
    int values[arr];
    int weights[arr];
    int selected_bool[]={0,0,0,0,0};
       /*
        Get from the user an item and its value and weight.
        */
    for(int i=0; i<arr; i++){
        scanf(" %c",&items[i]);
        scanf("%d",&values[i]);
        scanf("%d",&weights[i]);
    }
    /*
    get from knapSack function maximum profit and in the proccess print the items that we take..
    */
    int prof=knapSack(values,weights,selected_bool);
    printf("Maximum profit: ""%d",prof);
    printf("\n""Selected items:");
    for(int i=0;i<arr; i++){
     if(selected_bool[i]==1){
        printf(" %c",items[i]);
     }
    }
    return 0;
}