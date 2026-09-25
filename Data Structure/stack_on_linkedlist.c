#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void push(int x){
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

int main(){
    push(10);
    push(20);

    while(top != NULL){
        struct Node *node = top;
        printf("%d ", node->data);
        top = top->next;
        free(node);
    }

    printf("\n");
    return 0;
}
