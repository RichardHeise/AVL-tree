#include<stdio.h>
#include<stdlib.h>
#include"avl.h"

int main(){

	t_node *root=NULL;

	root=createNode(0);
	insertNode(root, -8);
	insertNode(root, 10);
	insertNode(root, -62);
	insertNode(root, -63);
	insertNode(root, -64);
	insertNode(root, -65);
	insertNode(root, -66);
	insertNode(root, 3);
	insertNode(root, 2);

	inOrder(root);
	printf("\n");

	//printf("leftrotating the node...\n");
	//root = leftRotation(root);
	//inOrder(root);
	//printf("\n");


	return 0;
}
