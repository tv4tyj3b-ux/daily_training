#include <stdio.h>
#include <stdlib.h>
typedef struct _node {
    int value;
    struct _node *next;
}Node;

//Á´±í½âÆÊ
int main() {
    Node * head =NULL;
    int number;
    do {
        scanf("%d",&number);
        if (number != -1) {
            //add to linked list
            Node *p = (Node*)malloc(sizeof(Node));
            p->value = number;
            p->next = NULL;
            //find the last
            Node *last = head;
            if (last) {
                while ( last -> next)
            {
                /* code */
                last = last -> next;
            }
            //ATTACH
            last -> next = p;
        }else {
            head = p;
            }
        }
    }while (number != -1);
    return 0;
}