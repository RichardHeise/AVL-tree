#ifndef __AVL__
#define __AVL__

/*structure definition*/
typedef struct s_node 
{
    int bf; /* Balance Factor*/
    int key;
    struct s_node *left;
    struct s_node *right;
} t_node;

/** function to create a node
 *  receives an int node key
 *  */ 
t_node *createNode(int key);

/** inserts a int key into a node
 *  receives a node pointer and an int key
 */
t_node *insertNode(t_node *p_node, int key);

/** pre order print function */
void preOrder(t_node *p_node);

/** in order print function*/
void inOrder(t_node *p_node);

/** pos order print function */
void postOrder(t_node *p_node);

/* right rotates a node*/
t_node *rightRotation(t_node *node);

/* left rotates a node*/
t_node *leftRotation(t_node *node);

#endif
