#include<stdio.h>
#include<conio.h>
void sumchecker(int ar[],int n,int a);
int main(){
    int array[100]={0};
    int lenght;
    printf("Enter array elements ");
    for(lenght=0;array[lenght-1]!=-1;lenght++){
        scanf("%d",&array[lenght]);
    }
    int a;
    printf("Enter number to check :");
    scanf("%d",&a);
    sumchecker(array,lenght-1,a);
}
void sumchecker(int ar[],int n,int a){
    int result=0;
    int found =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]+ar[j]==a){
                printf("%d + %d : %d\n",ar[i],ar[j],a);
                result++;
                found=1;
                break;
            }
            if(found){
                break;
            } 
        }
    }
    if(result==0){
    printf("sum is not possible\n");
    }
}

