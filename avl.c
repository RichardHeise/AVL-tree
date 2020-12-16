#include<stdio.h>
#include<stdlib.h>
#include"avl.h"

t_node *createNode(int key){

	t_node *node;
	node = malloc ( sizeof(t_node));

	if(!node){
		perror("error: could not allocate node properly");
		exit(-1);
	}

	node->left=NULL;
	node->right=NULL;
	node->bf=0;
	node->key=key;

	return node;
}

/*generic function*/
t_node *insertNode(t_node *p_node, int key){

	if(!p_node)
		return(createNode(key));

	if(key < p_node->key)
		p_node->left = insertNode(p_node->left, key);
	else
		p_node->right = insertNode(p_node->right, key);
	return p_node;
}

void preOrder(t_node *p_node){

	if(!p_node)	
		return;
	printf("%d ", p_node->key);
	preOrder(p_node->left);
	preOrder(p_node->right);
}

void inOrder(t_node *p_node){

	if(!p_node)	
		return;
	inOrder(p_node->left);
	printf("%d ", p_node->key);
	inOrder(p_node->right);

}

void postOrder(t_node *p_node){

	if(!p_node)	
		return;
	postOrder(p_node->left);
	postOrder(p_node->right);
	printf("%d ", p_node->key);

}

t_node *rightRotation(t_node *node){

	t_node *aux = node->left;
	t_node *aux2 = node->left->right; /*or simply aux->right*/
	node->left->right = node;
	node->left=aux2;

	return aux;
}

t_node *leftRotation(t_node *node){

	t_node *aux = node->right;
	t_node *aux2 = node->right->left; /*or simply aux->left*/

	node->right->left = node;
	node->right = aux2;

	return aux;
}
