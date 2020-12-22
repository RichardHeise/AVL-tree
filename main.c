#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"avl.h"

int main(){

	t_node *root;
	char *buffer = malloc(50 * sizeof(char));

	for(;fgets(buffer,50,stdin);){

		char *code=NULL;
		code=strtok(buffer," ");	
		int key = atoi( strtok(NULL, " "));

		if(!strcmp("i",code))
			root=insertNode(root,key);
		else if (!strcmp("d",code))
			root=deleteNode(root,key);
		else
			perror("invalid operation code\n");

	}

	return 0;
}
