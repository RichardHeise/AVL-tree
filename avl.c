#include<stdio.h>
#include<stdlib.h>
#include"avl.h"

static int height(t_node *p_node) {
	if (!p_node) return 0;
	return p_node->bf;
}

static int max(int a, int b) {
	if (a > b) {
		return a;
	}

	return b;
}
static int readBalance(t_node *p_node) {
	if (!p_node) return 0;
	return height(p_node->left) - height(p_node->right);
}

t_node *createNode(int key){

	t_node *node;
	node = malloc (sizeof(t_node));

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

	if (!p_node)
		return(createNode(key));

	if (key < p_node->key)
		p_node->left = insertNode(p_node->left, key);
	else if (key > p_node->key)
		p_node->right = insertNode(p_node->right, key);
	else
		return p_node;

	p_node->bf = 1 + max(height(p_node->left), height(p_node->right));

	int currentBalance = readBalance(p_node);

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
	printf("key: %d ", p_node->key);
	printf("bf: %d ", p_node->bf);
	inOrder(p_node->right);

}

void postOrder(t_node *p_node){

	if(!p_node)	
		return;
	postOrder(p_node->left);
	postOrder(p_node->right);
	printf("%d ", p_node->key);

}

t_node *rightRotation(t_node *p_node){

	t_node *aux =  p_node->left;
	t_node *aux2 = p_node->left->right; /*or simply aux->right*/

	p_node->left->right = p_node;
	p_node->left=aux2;

	p_node->bf = max(height(p_node->left), height(p_node->right));

	return aux;
}

t_node *leftRotation(t_node *p_node){

	t_node *aux =  p_node->right;
	t_node *aux2 = p_node->right->left; /*or simply aux->left*/

	p_node->right->left = p_node;
	p_node->right = aux2;


	p_node->bf = max(height(p_node->left), height(p_node->right));

	return aux;
}
