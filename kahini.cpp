#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    Node* next = NULL;
};

Node* head;

print(Node *head){
    Node* cur_node = head;
    while(cur_node!=NULL){
        printf("%d ", cur_node->value);
        cur_node = cur_node->next;
    }

    printf("\n");
}

insert(int position, Node* newnode)
{
    Node* cur_node = head;
    for(int i=0;i<position;i++){
        cur_node = cur_node -> next;
    }

    newnode-> next = cur_node->next;
    cur_node->next = newnode;
}

my_delete(int position)
{
    Node* cur_node = head;
    for(int i=0;i<position-1;i++){
        cur_node = cur_node -> next;
    }
    cur_node-> next = cur_node->next->next;
    //delete cur_node->next;
}

int main()
{
    //struct Node* head;

    head = (Node*) malloc(sizeof(struct Node));
    head->value = 10;

    struct Node* newOne =(Node*) malloc(sizeof(struct Node));
    newOne->value = 5;

    struct Node* newTwo =(Node*) malloc(sizeof(struct Node));
    newTwo->value = 15;

    head -> next = newOne;
    newOne->next = newTwo;
    newTwo-> next = NULL;

    print(head);

    struct Node* nodeToInsert =(Node*) malloc(sizeof(struct Node));
    nodeToInsert->value = 7;
    insert(1, nodeToInsert);

    print(head);

    my_delete(2);

    print(head);

}

