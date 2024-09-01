#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *creating(int n) {
    int data;
    struct node *head = NULL, *temp = NULL, *new_node;
    for (int i = 0; i < n; i++) {
        printf("Enter %d data:", i + 1);
        scanf("%d", &data);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = data;
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            temp = head;
        } else {
            temp->next = new_node;
            temp = temp->next;
        }
    }
    return head;
}

void printing(struct node *p) {
    printf("\nLIST ARE:\n");
    while (p != NULL) {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

struct node *delete_node(struct node *head, int value) {
    if (head == NULL) {
        printf("\nList is empty.");
        return head;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    if (head->data == value) {
        head = head->next;
        free(temp);
        return head;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("\nValue is not found.");
        return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

struct node *insert(struct node *head, int data, int position) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if (position == 0) {
        new_node->next = head;
        head = new_node;
        return head;
    }

    struct node *temp = head;
    int current_position = 0;
    while (temp != NULL && current_position < position - 1) {
        temp = temp->next;
        current_position++;
    }

    if (temp != NULL) {
        new_node->next = temp->next;
        temp->next = new_node;
    } else {
        printf("\nPosition out of bounds, adding to the end of the list.");
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    return head;
}

struct node *search(struct node *head, int value) {
    if (head == NULL) {
        printf("\nList is empty.");
        return NULL;
    }
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

struct node *reversing(struct node *head) {
    struct node *current = head;
    struct node *prev = NULL;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

void empty(struct node *p) {
    while (p != NULL) {
        struct node *temp = p;
        p = p->next;
        free(temp);
    }
}

void counting(struct node *p) {
    int count = 0;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    printf("\nTotal number of nodes are: %d\n", count);
}

int main() {
    int n, value, position;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    struct node *p = creating(n);
    int choice;
    do {
        printf("\nMENU");
        printf("\n1. TRAVERSE");
        printf("\n2. INSERT");
        printf("\n3. DELETE");
        printf("\n4. COUNT");
        printf("\n5. REVERSE");
        printf("\n6. SEARCH");
        printf("\n7. Empty");
        printf("\n8. EXIT");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printing(p);
                break;

            case 2:
                printf("\nEnter value to insert: ");
                scanf("%d", &value);
                printf("\nEnter position to insert: ");
                scanf("%d", &position);
                p = insert(p, value, position);
                break;

            case 3:
                printf("\nEnter value to delete: ");
                scanf("%d", &value);
                p = delete_node(p, value);
                break;

            case 4:
                counting(p);
                break;

            case 5:
                p = reversing(p);
                printf("\nNodes after reversing:");
                printing(p);
                break;

            case 6:
                printf("\nEnter value to search: ");
                scanf("%d", &value);
                struct node *k = search(p, value);
                if (k != NULL) {
                    printf("\nValue is found in the list.\n");
                } else {
                    printf("\nValue is not found in the list.\n");
                }
                break;
            
            case 7:
                empty(p);
                p = NULL;  
                printf("\nList has been emptied.\n");
                break;
                
            case 8:
                printf("\nExiting.\n");
                break;

            default:
                printf("\nInvalid choice.\n");
        }

    } while (choice != 8);

    empty(p);
    return 0;
}
