#include<stdio.h>
#include<stdlib.h>
#include"avl.h"

int main(){

	t_node *root=NULL;

	root=createNode(50);
	insertNode(root, 40);
	insertNode(root, 70);
	insertNode(root, 56);
	insertNode(root, 55);
	insertNode(root, 54);
	insertNode(root, 53);
	insertNode(root, 52);

	inOrder(root);
	printf("\n");

	deleteNode(root, 52);
	deleteNode(root, 53);
	//deleteNode(root, 70);
	//deleteNode(root, 40);

	inOrder(root);
	printf("\n");

	return 0;
}
