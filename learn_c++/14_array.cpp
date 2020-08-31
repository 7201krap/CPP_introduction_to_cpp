// Pascal's Triangle
#include <stdio.h>
int main(){
   int d=5;
   int empty_array[d][d];

   for(int i=0; i<d; i++){
     for(int j=0; j<=i; j++){
       if(j==0 || j==i){
         empty_array[i][j] = 1;
       } else {
         empty_array[i][j] = empty_array[i-1][j-1] + empty_array[i-1][j];
       }
       printf("%d ", empty_array[i][j]);
     }
     printf("\n");
   }
}
