/* the header file */
#include <stdio.h>
#include <stdlib.h>

#ifndef LNK_LIST_H
#define LNK_LIST_H
#define ERR_FLAG	1
#define MAX_LEN		16

struct lnk_list_struct
{
	char name[MAX_LEN];
	unsigned long id;
	struct lnk_list_struct *next_ptr;
};

typedef struct lnk_list_struct NODE;

NODE *list_node_create(void);
void list_node_add(void);
int list_node_delete(void);
void list_node_print(void);
void list_node_free(void);
void ErrorExit(char *);
void main_interface(int);

#endif /* for LNK_LIST_H */
