#include <stdio.h>
int ArrSum(int count,int *ptr){
    int sum = 0;
    //Through Iteration adding all values
    for(int i=0;i<count;i++){
        sum+=ptr[i];
    }
    return sum;

}
int main() {
    int count,sum;
    //Taking Quantity of array Elements
    printf("Enter number of elements you want to add : ");
    scanf("%d",&count);
    int arr[count];

    //Input from User array Elements
    for(int i=0;i<count;i++){
        printf("\n Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
   //storing return value
   sum=ArrSum(count,&arr);
   printf("Sum of Array Elements %d ",sum);

    return 0;
}
