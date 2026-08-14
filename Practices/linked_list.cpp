#include <cstdio>
#include <cstdlib>

struct Node
{
    int val;
    struct Node *next;
};
void append(struct Node** h, int newVal){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *It = *h;
    newNode->val = newVal;
    newNode->next = NULL;
    if(*h == NULL){
        *h = newNode;
        return;
    }
    while(It->next != NULL){
        It = It->next;
    }
    It->next = newNode;
}
void displayList(struct Node *h){
    struct Node *current = h;
    while(current != NULL){
        printf("%d",current->val);
        if(current->next != NULL){
            printf("->");
        }
        current = current->next;
    }
    printf("\n");
}
int main(){
    struct Node* head = NULL;
    append(&head, 12);
    append(&head, 13);
    append(&head, 14);
    append(&head, 15);
    printf("The linked list is: \n");
    displayList(head);
    return 0;
    
}
