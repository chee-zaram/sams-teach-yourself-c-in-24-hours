/* A module file */
#include "hour_24.h"

static NODE *head_ptr = NULL;

/**
 * main_interface()
 */
void main_interface(int ch)
{
	switch (ch){
		case 'a':
			list_node_add();
			break;
		case 'd':
			if (!list_node_delete())
				list_node_print();
			break;
		case 'p':
			list_node_print();
			break;
		default:
			break;
	}
}

/**
 * list_node_create()
 */
NODE *list_node_create(void)
{
	NODE *ptr;

	if ((ptr = (NODE *)malloc(sizeof(NODE))) == NULL)
		ErrorExit("malloc() failed.\n");

	ptr->next_ptr = NULL; /* set the next pointer to NULL */
	ptr->id = 0; /* initialization */
	
	return (ptr);
}

/**
 * list_node_add()
 */
void list_node_add()
{
	NODE *new_ptr, *ptr;

	new_ptr = list_node_create();
	printf("Enter the student name and ID: ");
	scanf("%s%ld", new_ptr->name, &new_ptr->id);

	if (head_ptr == NULL)
	{
		head_ptr = new_ptr;
	}
	else
	{
		/* find the last node in the list */
		for (ptr = head_ptr;
		     ptr->next_ptr != NULL;
		     ptr = ptr->next_ptr)
			; /* doing nothing here */
		/* link to the last node */
		ptr->next_ptr = new_ptr;
	}
}

/**
 * list_node_delete()
 */
int list_node_delete(void)
{
	NODE *ptr, *ptr_saved;
	unsigned long id;
	int deleted = 0;
	int reval = 0;

	if (head_ptr == NULL)
	{
		printf("Sorry, nothing to delete.\n");
		reval = 1;
	}
	else
	{
		printf("Enter the student ID: ");
		scanf("%ld", &id);

		if (head_ptr->id == id)
		{
			ptr_saved = head_ptr->next_ptr;
			free(head_ptr);
			head_ptr = ptr_saved;
			if (head_ptr == NULL)
			{
				printf("All nodes have been deleted.\n");
				reval = 1;
			}
		}
		else
		{
			for (ptr = head_ptr;
			     ptr->next_ptr != NULL;
			     ptr = ptr->next_ptr)
			{
				if (ptr->next_ptr->id == id)
				{
					ptr_saved = ptr->next_ptr->next_ptr;
					free(ptr->next_ptr);
					ptr->next_ptr = ptr_saved;
					deleted = 1;
					break;
				}
			}
			if (!deleted)
			{
				printf("Can not find the student ID.\n");
			}
		}
	}
	return (reval);
}

/**
 * list_node_print()
 */
void list_node_print(void)
{
	NODE *ptr;

	if (head_ptr == NULL)
	{
		printf("Nothing to display.\n");
	}
	else
	{
		printf("The content of the linked list:\n");
		for (ptr = head_ptr;
		     ptr->next_ptr != NULL;
		     ptr = ptr->next_ptr)
		{
			printf("%s:%ld -> ", ptr->name, ptr->id);
		}
		printf("%s:%ld ->|", ptr->name, ptr->id);
		printf("\n");
	}
}

/**
 * list_node_free()
 */
void list_node_free()
{
	NODE *ptr, *ptr_saved;

	for (ptr = head_ptr; ptr != NULL; )
	{
		ptr_saved = ptr->next_ptr;
		free(ptr);
		ptr = ptr_saved;
	}
	free(ptr);
}

/**
 * ErrorExit()
 */
void ErrorExit(char *str)
{
	printf("%s\n", str);
	exit(ERR_FLAG);
}

