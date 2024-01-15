#include <stdio.h>
void MinusPlusCount(int *arr,int n){
    float plus=0,minus=0,zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            plus++;
        }
        else if(arr[i]<0){
            minus++;
        }
        else{
            zero++;
        }
    }

    printf("%.4f %.4f %.4f ",plus/5,minus/5,zero/5);
}
int main(){
    int n,minus=0,plus=0,zero=0;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter Number +ve or -ve: ");
        scanf("%d",&arr[i]);
    }

    MinusPlusCount(&arr,n);

}
