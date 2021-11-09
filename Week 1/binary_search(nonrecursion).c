#include<stdio.h>
int binary_search(int [],int , int );
int main(){
    int n,a[50],pos,ele,i,x=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Element to be searched: ");
    scanf("%d",&ele);
    pos = binary_search(a,n,ele);
    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at %d postion",pos+1);
}
int binary_search(int a[],int n,int ele){
    int mid,beg = 0,end = n-1;
    while(beg<=end){
        mid = (beg+end)/2;
            if(ele < a[mid])
                end = mid - 1;
            else if(ele > a[mid])
                beg = mid + 1;
            else
                return mid;
    }return -1;
}
/*
Enter array elements:5
Enter array elements: 1 2 3 4 5
Element to be searched: 3
Element found at 3 postion
Enter array elements:5
Enter array elements: 1 2 3 4 5
Element to be searched: 6
Element not found*/
