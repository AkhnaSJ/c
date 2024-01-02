
#include <stdio.h>
#include <stdlib.h>

void isFull();
void display();
void insert();
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
        printf("\nEnter your choice of insertion\n1 at beginning\n2 at end\n3 at a particular position\n4 to exit: ");
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

void isFull() {
    if(size==10){
        printf("Array is full!!\n");
        return;
    }
}

void insert() {
    isFull();
    printf("Element: ");
    scanf("%d",&item);
}

void beg() {
    insert();
    for(int i=size-1; i>=0; i--)
        arr[i+1]=arr[i];
    arr[0]=item;
    size++;
    printf("Inserted ");
    display();
}

void end() {
    insert();
    arr[size]=item;
    size++;
    printf("Inserted: ");
    display();
}

void partpos() {
    insert();
    int pos;
    printf("Position: ");
    scanf("%d",&pos);
    if(pos<=0 || pos>size){
        printf("Invalid position!!\n");
        return;
    }
    
    for(int i=size-1; i>=pos-1; i--)
        arr[i+1]=arr[i];
    arr[pos-1]=item;
    size++;
    printf("Inserted ");
    display();
}