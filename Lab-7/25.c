// 25. Write algorithms to perform following operations on a stack:
// i. Push
// ii. Pop
// iii. Peep
// iv. Change

#include<stdio.h>

int top = -1;
int stack[100];

void push(int x){
    if(top == 99){
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

void pop(){
    if(top == -1){
        printf("Stack underflow\n");
        return;
    }
    top--;
}

void peep(){
    if(top == -1){
        printf("Stack underflow\n");
        return;
    }
    printf("%d\n", stack[top]);
}

void change(int x){
    if(top == -1){
        printf("Stack underflow\n");
        return;
    }
    stack[top] = x;
}

int main(){
    printf("1. Push\n2. Pop\n3. Peep\n4. Change\n5. Exit\n");
    int choice;
    while(true){
    printf("Enter your choice: ");
    scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Push\n");
                break;
            case 2:
                printf("Pop\n");
                break;
            case 3:
                printf("Peep\n");
                break;
            case 4:
                printf("Change\n");
                break;
            case 5:
                printf("Exit\n");
                return 0;
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    }
}