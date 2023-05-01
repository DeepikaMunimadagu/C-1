#include <stdio.h>
#define max 100
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[max];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    divide(arr, n);
    return 0;
}

void divide(int arr[], int n){
    int c1 = n/2;
    printf("First half of the array is : ");
    for(int i=0; i<c1; i++){
        printf("\t%d",arr[i]);
    }
    printf("\nSecond half of the array is : ");
    for(int i=c1; i<n; i++){
        printf("\t%d",arr[i]);
    }
}
