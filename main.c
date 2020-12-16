#include<stdio.h>
#include<stdlib.h>
#include"avl.h"

int main(){

	t_node *root=NULL;

	root=createNode(0);
	insertNode(root, -8);
	insertNode(root, 3);
	insertNode(root, 1);
	insertNode(root, 4);

	inOrder(root);
	printf("\n");

	printf("leftrotating the node...\n");
	root = leftRotation(root);
	inOrder(root);
	printf("\n");


	return 0;
}
