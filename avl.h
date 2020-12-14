#ifndef __AVL__
#define __AVL__

/* Definição da estrutura */
typedef struct s_node 
{
    int bf; // Balance Factor - Fator de balanceamento
    int key; // chave
    struct s_node *left; // esquerda
    struct s_node *right; // direita
} t_node;

/** Função para criar um nodo
 *  Recebe a chave do nodo com valor inteiro 
 */ 
t_node *createNode(int key);

/** Insere uma chave inteira em um nodo
 *  Recebe um ponteiro para nodo e uma chave inteira
 */
t_node *insertNode(t_node *p_node, int key);

/** Função para escrever uma árvore em pré-ordem */
void preOrder(t_node *p_node);

/** Função para escrever uma árvore em ordem */
void inOrder(t_node *p_node);

/** Função para escrever uma árvore em pós-ordem */
void postOrder(t_node *p_node);