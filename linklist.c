// 6210451144 Nattakarn Orasoonthon
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int input_number;
    struct node *next;} Node;

void insert_sort(Node **Head, int input_number);
void print_list(Node* Head);

int main(){
    int input_number;
    Node *Head = NULL;
    while (1)
    {
        scanf("%d", &input_number);
        if (input_number == -1){
            break;}
        else{
            insert_sort(&Head, input_number);}
    }
    print_list(Head);
}

void print_list(Node* Head){
      while (Head!=NULL) {
        printf("%d\n", Head->input_number);
        Head = Head->next;}
}

void insert_sort(Node **Head, int input_number){
    Node *insert_area = (Node *)malloc(sizeof(Node));
    insert_area->input_number = input_number;
    insert_area->next = NULL;
    if (*Head!=NULL)
    {
        Node *before_node = *Head;
        if (before_node->input_number > input_number){
            insert_area->next = before_node;
            *Head = insert_area;}
        else
        {
            while (before_node->next!=NULL)
            {
                if (before_node->next->input_number > input_number)
                {
                    insert_area->next = before_node->next;
                    break;}
                before_node = before_node->next;}
            before_node->next = insert_area;}
    }
    else
        *Head = insert_area;
}