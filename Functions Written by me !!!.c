#include <stdio.h>
int in_ara(int size, int ara[size]){

for(int i=0;i<size;i++)
    scanf("%d",&ara[i]);
}

int out_ara(int size, int ara[size]){
    for(int i=0;i<size;i++){
    printf("%d",ara[i]);
}

}

void sort1(vector<int> ara,int n){ // this is for vector. for an arry
int i,j,temp;                      //just pass this (int arr[], int n)
for(i=0;i<n;i++){
    bool flag = true;
    for(j=0;j<n-1;j++){
        if(ara[j]>ara[j+1]){
            temp=ara[j];
            ara[j]=ara[j+1];
            ara[j+1]=temp;
            flag = false;
        }
    }
    if(flag){
        break;
    }

}
}

void swap1(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

