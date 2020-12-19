#include<stdio.h>
#include<stdlib.h>
#include"avl.h"

int main(){

	t_node *root=NULL;

	root=createNode(50);
	insertNode(root, 40);
	insertNode(root, 70);
	insertNode(root, 60);
	insertNode(root, 80);

	inOrder(root);
	printf("\n");

	deleteNode(root, 50);

	inOrder(root);
	printf("\n");

	return 0;
}
