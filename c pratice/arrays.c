#include<stdio.h>
int main(){
    //int arr[5] = {2,4,6,1,7};
    //arr[3] = 34;
    //printf("%d", arr[3]);
    int arr[5];
    for(int i = 0; i<=4 ; i++){
        printf("enter the value %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    //printf("%d", arr[3]);
    //for(int i = 0; i<5 ; i++){
      //  printf("%d", arr[i]);
    //}
    for(int i = 4 ; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    



    return 0;
}