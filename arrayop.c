#include <stdio.h>
#include <stdlib.h>

void display();
void search();
void sort();

int arr[10],size;

void main() {
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    printf("Enter the array elements: ");

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    while(1){
        int choice;
        printf("\n1 to display\n2 to search\n3 to sort\n4 to exit\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                display();
                break;
            
            case 2:
                search();
                break;
                
            case 3:
                sort();
                break;
                
            case 4:
                exit(0);
                
            default:
                break;
        }
    }
}

void display() {
    printf("Array: ");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


void search() {
    int item;
    printf("Enter the element to be searched: ");
    scanf("%d",&item);
    
    for(int i=0; i<size; i++){
        if(item == arr[i]){
            printf("%d is found at position %d\n",item,i+1);
            return;
        }
    }
    printf("Element not found!\n");
}

void sort() {
    int temp;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++)
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
    printf("Sorted ");
    display();
}
