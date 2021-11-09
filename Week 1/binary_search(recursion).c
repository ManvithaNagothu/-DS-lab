#include<stdio.h>
int binary_search(int [],int , int ,int);
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
    pos = binary_search(a,0,n-1,ele);
    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at %d postion",pos+1);
}
int binary_search(int a[],int beg,int end,int ele){
    int mid;
     mid = (beg+end)/2;
            if(ele == a[mid])
                 return mid;
            else if(ele > a[mid])
                 binary_search(a,mid+1,end,ele);
            else if(ele< a[mid])
                 binary_search(a,beg,mid-1,ele);
            else
                return -1;
    }

/*
Enter the number of elements:5
Enter the number of elements:1 2 3 4 5
Element to be searched:4
Element found at 4 postion
Enter the number of elements:5
Enter the number of elements:1 2 3 4 5
Element to be searched:6
Element not found*/


