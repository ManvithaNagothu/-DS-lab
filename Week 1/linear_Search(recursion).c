#include<stdio.h>
int linear_search(int a[],int n, int ele){
    if(n>= 0){
         if(a[n-1] == ele){
             return n-1;
             }
         else
    
             return  linear_search(a,n-1,ele);
        }
    return -1;
}
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
    pos = linear_search(a,n,ele);
    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at %d postion",pos+1);
}
/*Enter the number of elements:5
Enter array elements:1 2 3 4 5
Element to be Searched:5
Element found at 5 position
Enter the number of elements:5
Enter array elements:1 2 3 4 5
Element to be Searched:5
Element found at 5 position
*/include<stdio.h>
int linear_search(int a[],int n, int ele){
    if(n>= 0){
         if(a[n-1] == ele){
             return n-1;
             }
         else
    
             return  linear_search(a,n-1,ele);
        }
    return -1;
}
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
    pos = linear_search(a,n,ele);
    if(pos == -1)
        printf("Element not found");
    else
        printf("Element found at %d postion",pos+1);
}
