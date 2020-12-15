#include<stdio.h>
#include<stdlib.h>
#include"avl.h"

int main(){

	t_node *root=NULL;

	root=createNode(0);
	insertNode(root, -2);
	insertNode(root, 3);
	insertNode(root, -1);
	insertNode(root, 7);

	preOrder(root);
	printf("\n");
	inOrder(root);
	printf("\n");
	postOrder(root);
	printf("\n");

	return 0;
}
