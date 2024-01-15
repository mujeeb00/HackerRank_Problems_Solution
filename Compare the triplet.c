#include <stdio.h>
int compareTriplet(int *a,int *b,int *points){
    int alice,Bobs;
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            alice++;
        }
        else if(a[i]<b[i]){
            Bobs++;
        }
    }

    points[0]=alice;
    points[1]=Bobs;

}
int main(){
    int a[]={5,6,7};
    int b[]={3,6,10};
    int points[2];
    compareTriplet(&a,&b,&points);

    printf("Alice %d Bob's %d",points[0],points[1]);
}
