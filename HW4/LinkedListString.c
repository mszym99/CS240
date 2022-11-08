#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Link list node */
struct node
{
        char data[40];
        struct node* next;
};

/* Function to push a node */
void push(struct node** head_ref, char* new_data)
{
        /* allocate node */
        struct node* new_node = malloc(sizeof(struct node));

        /* put in the data  */

        strcpy(new_node->data, new_data);


        /* link the old list off the new node */
        new_node->next = (*head_ref);

        /* move the head to point to the new node */
        (*head_ref) = new_node;
}

/* Function to print linked list */
void printList(struct node *head)
{
        struct node *temp = head;
        while (temp != NULL)
        {
                printf("%s  ", temp->data);
                temp = temp->next;
        }
}

/* Function to count the number of elements in the linked list */
int listCount(struct node *head) {
int count = 0;
struct node *temp = head;

while (temp != NULL) {
	count++;
	temp = temp->next;
}
return count;
}


/* Function to reverse the linked list */

/**/

void reverseList(struct node** head_ref){

	struct node* current = *head_ref;
	struct node* prev = NULL;
	struct node* next;

	while(current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
}
	*head_ref = prev;

}
/*Function to delete all elements in a Linked List */
/**/

void listAllDelete(struct node **currP){
	struct node* temp = *currP;
	while(temp != NULL) {
		*currP = (*currP)->next;
		free(temp);
		temp = (*currP);

	}
}
/***Function to delete a particular element in alinked list**/
void deleteElement(struct node **currP, char *value){
	struct node* temp = *currP;
	while (temp != NULL && (strcmp(temp->data, value) == 0) ){
		*currP = (*currP)->next;
		free(temp);
		temp = (*currP);
}

	struct node* prev;

while (temp != NULL) {
	while(temp != NULL && (strcmp(temp->data, value) != 0)) {
		prev = temp;
		temp = temp->next;
}

	if(temp == NULL) return;
	prev->next = temp->next;
	free(temp);
	temp = prev->next;
}

}


int main()
{
        /* Start with the empty list */
        struct node* head = NULL;

        push(&head, "Tom");
        push(&head, "Dick");
        push(&head, "Harry");
        push(&head, "Paul");
        push(&head, "Chris");
        push(&head, "Stuart");
        push(&head, "Rob");
        push(&head, "Harry");
        push(&head, "Harry");

        printf("Linked list after insertion: \n");
        printList(head);
        printf("\n");

    /*  Step 1: count the number of elements in the list */
        printf("Number of elements in the list: %d\n", listCount(head));
        printf("\n");

       /***Step 2:  delete a particular element/ multiple occurrences of an element from the list   */
        deleteElement(&head, "Harry");
        printf("Linked list after deletion: \n");
        printList(head);
        printf("\n");
        printf("Number of elements in the list after deletion: %d\n", listCount(head));
        printf("\n");

       /** Step 3: reverse the elements in a list **/

      reverseList(&head);
        printf("Reversed Linked list \n");
        printList(head);
        printf("\n");


       /**Step 4: delete all the elements in a linked list ***/

      listAllDelete(&head);
        printf("Number of elements in the list after deletion: %d\n", listCount(head));
        printf("\n");

        return 0;
}
