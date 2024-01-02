#include <stdio.h>
#include <stdlib.h>

void isEmpty();
void display();
void del();
void beg();
void end();
void partpos();

int arr[10],size,item;

void main() {
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    printf("Enter the array elements: ");

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    display();
    
    while(1){
        int choice;
        printf("\nEnter your choice of deletion\n1 at beginning\n2 at end\n3 at a particular position\n4 to exit: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                beg();
                break;
            
            case 2:
                end();
                break;
                
            case 3:
                partpos();
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

void isEmpty() {
    if (size == 0){
        printf("Array is empty!!\n");
        return;
    }
}

void del() {
    size--;
    printf("Deleted ");
    display();
    printf("Deleted element: ",item);
}

void beg() {
    isEmpty();
    item = arr[0];
    for(int i=0; i<size; i++)
        arr[i]=arr[i+1];
     size--;
    printf("Deleted ");
    display();
    printf("Deleted element: ",item);
}

void end() {
    isEmpty();
    item = arr[size];
    del();
}

void partpos() {
    isEmpty();
    int pos;
    printf("Position: ");
    scanf("%d",&pos);
    item = arr[pos-1];
    for(int i=pos-1; i<size; i++)
        arr[i]=arr[i+1];
    del();
}