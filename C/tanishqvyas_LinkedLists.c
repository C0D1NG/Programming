#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};
typedef struct Node* node;

// Function to return a node
node create_node(int data)
{
	node new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = data;
	new_node->next = NULL;

	return new_node;
}


// function to insert at the end
node insert_end(node head, node new_node)
{
	if(new_node == NULL)
	{
		printf("New node passed is NULL\n");
		return head;
	}

	// Empty List
	if(head == NULL)
	{
		return new_node;
	}

	// One element
	else if(head->next == NULL)
	{
		head->next = new_node;
		return head;
	}

	//Loop till last element
	else 
	{
		node ptr = head;
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = new_node;
		return head;
	}
}


// function to insert at the front
node insert_front(node head, node new_node)
{
	if(new_node == NULL)
	{
		printf("New node passed is NULL\n");
		return head;
	}

	// Empty List
	if(head == NULL)
	{
		return new_node;
	}

	else
	{
		new_node->next = head;
		return new_node;
	}
}


// Delete from the end
node delete_last(node head)
{
	if(head == NULL)
	{
		printf("List is empty. Nothing to delete.\n");
		return head;
	}

	else if(head->next == NULL)
	{
		free(head);
		return NULL;
	}

	else
	{
		node cur = head;
		node prev = NULL;

		while(cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}


		prev->next = NULL;
		free(cur);
		
		return head;

	}
}


node delete_first(node head)
{
	if(head == NULL)
	{
		printf("List is empty. Nothing to delete.\n");
		return head;
	}

	else
	{
		node ptr = head;
		head = head->next;

		free(ptr);

		return head;
	}
}


void display_list(node head)
{

	if(head == NULL)
	{
		printf("List is empty. Nothing to print.\n");
		return;
	}

	node ptr = head;

	while(ptr != NULL)
	{
		printf("%d-->", ptr->data);
	}

	printf("\n");
}


int search_list(node head, int key)
{
	if(head == NULL)
	{
		printf("List is empty. Nothing to Search.\n");
		return -1;
	}

	else
	{
		node ptr = head;
		int found = 0;
		int index = 0;

		while(ptr != NULL)
		{
			if(ptr->data == key)
			{
				found = 1;
				break;
			}

			else
			{
				ptr = ptr->next;
				index++;
			}
		}

		if(found)
		{
			return index;
		}

		else
		{
			return -1;
		}
	}
}




int main(int argc, char const *argv[])
{

	// Initializing the head node
	node head = NULL

	// Anything that needs to be done can be done in the following lines

	// Creating a Linked List
	for (int i = 0; i < 10; ++i)
	{
		node holder = create_node(i);

		head = insert_end(head, holder);
	}

	// Displaying the List
	display_list(head);
	
}