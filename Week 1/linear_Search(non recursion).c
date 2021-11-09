#include<stdio.h>
int linear_Search(int [] ,int ,int );
int main(){
    int i,x,a[50],n,ele;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the Element to be searched: ");
    scanf("%d",&ele);
    x= linear_Search(a,n,ele);
    if(x  == -1)
        printf("Element Not found");
    else
        printf("Element found at %d position",x+1);
    }
int linear_Search(int a[],int n,int ele){
    int i;
    for(i = 0;i<n;i++){
        if(a[i] == ele){
            return i;
        }
    }return -1;
}

/*
Enter the number of elements in array:5
Enter the array elements: 5 4 3 7 8
Enter the elements to be Searched:7
Element to be searched:3
Element found at 3 position
Enter the number of elements in array:5
Enter the array elements: 5 4 3 7 8
Enter the elements to be Searched:9
Element to be searched:3
Element not found*/
