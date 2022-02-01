#include<stdio.h>
void insertionsort(int[],int);
int main(){
    int a[20],i,n;
    printf("Enter the size of list: ");
    scanf("%d",&n);
    printf("Enter %d element values: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("sorted array: ");
    for(i=0;i<n;i++){
        printf("%3d",a[i]);

    }
    return 0;
}
void insertionsort(int a[],int n){
    int i,j,temp;
    for(i = 1;i< n;i++){
        temp = a[i];
        for(j = i -1;j>= 0&&temp < a[j];j--){
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }
}
Output:
Enter the size of list: 6
Enter 6 element values: 57
60
54
55
43
44
sorted array:  43 44 54 55 57 60
