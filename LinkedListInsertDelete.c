#include<stdio.h>
#include<malloc.h>

struct node
{
	int num;
	struct node* next;
};
struct node * head = NULL;

void insert(int data)
{
	struct node*tmp = (struct node*)malloc(sizeof(struct node));
	if (!tmp)
		printf("Memory Issue\n");

	tmp->num = data;
	tmp->next = NULL;
	if (head == NULL)
	{
		printf("First node addded \n");
		head = tmp;
	}
	else
	{
		struct node *current = head;
		while (current->next != NULL)
			current = current->next;
		current->next = tmp;
	}
	printf("Node with data: %d added Successfully\n", data);
}

void print()
{
	struct node*current = head;
	printf("List contains: \n");
	while (current != NULL)
	{
		printf(" %d ", current->num);
		current = current->next;
	}
}

void deleteNode(int data)
{
	struct node*current = head;
	while (current->next->num != data)
	{
		current = current->next;
	}
	struct node * tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	printf("\nDelete Called: %d deleted successfully\n", data);

}

int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);

	print();
	deleteNode(30);
	print();

	return 0;
}
