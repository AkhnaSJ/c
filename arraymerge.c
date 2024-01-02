#include <stdio.h>

void main() {
    int arr1[50],arr2[50],arr[50],n1,n2;

    printf("Enter the size of array 1: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(int i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of array 2: ");
    scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i=0; i<n2; i++){
        scanf("%d",&arr2[i]);
    }
    
    for(int i=0; i<n1; i++)
        arr[i]=arr1[i];
        
    for(int i=0; i<n2; i++)
        arr[n1+i]=arr2[i];

    printf("Merged Array: ");
    
    for(int i=0; i<n1+n2; i++){
        printf("%d ",arr[i]);
    }
    
}