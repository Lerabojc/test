#include <stdio.h>

typedef struct cart {
    char* a;
        char* b;
        int c;
    struct cart *next;
} cart;

FILE* file;
cart* head = NULL;
void push(cart **head, char* a, char* b, int c);

void readthefile(cart **head);

int main(int argc, char *argv[])
{
        readthefile(&head);
        while(head != NULL) {
                printf("%s %s %d\n", head->a, head->b, head->c);
                head = head->next;
        }
    return 0;
}

void readthefile(cart **head) {
        file = fopen("1.txt", "r");
        char* a = (char*)malloc(20 * sizeof(char));
        char* b = (char*)malloc(20 * sizeof(char));
        int c;
        while(fscanf (file, "%s%s%d", a, b, &(c)) != EOF){

        printf("%s %s %d\n", a, b, c);
                push(head, a, b, c);

        }

}

void push(cart **head, char* a, char* b, int c) {
    cart *tmp = (cart*) malloc(sizeof(cart));
        tmp->a = strdup(a);
        tmp->b = strdup(b);
        tmp->c = c;
    tmp->next = (*head);
    (*head) = tmp;
    free(tmp);
}
