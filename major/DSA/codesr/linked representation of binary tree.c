#include<stdio.h>
#include<stdlib.h>

/*
this is a node structure, where there is a info part and left pointer and right pointer
*/
typedef struct node{
    int info;
    struct node * left;
    struct node * right;
}node;


/*
in the function (root address is given)
    take the info value
    assign the value in the info part;

    ask if left node exits?
    if true
        create a new node
        assign the node address to left pointer of root
        function(address of the created node)
    else
        assign NULL in the left pointer of root 

    ask if right node exits?
    if true
        create a new node
        assign the node address to right pointer of root
        function(address of the created node)
    else
        assign NULL in the right pointer of root 

*/
void tree(node * root){
    int ch;
    printf("enter the data \n");
    scanf("%d",&root->info);

    printf("is there any left node of %d\n",(root->info));
    scanf("%d",&ch);
    if(ch){
        node * a = (node *)malloc(sizeof(node));
        root->left = a;
        tree(a);
    }
    else{
        root->left = NULL;
    }

    printf("is there any right node of %d\n",root->info);
    scanf("%d",&ch);
    if(ch){
        node * a = (node *)malloc(sizeof(node));
        root->right = a;
        tree(a);
    }
    else{
        root->right = NULL;
    }
}


/*
using preorder travarsal
*/
void preorder(node * root){
    if(root != NULL){
        printf("%d ",root->info);
        preorder(root->left);
        preorder(root->right);
    }
}

/*
using inorder travarsal
*/
void inorder(node * root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->info);
        inorder(root->right);
    }
}

/*
using postorder travarsal
*/
void postorder(node * root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->info);
    }
}

int main(){

    /*
    first create root node
    then pass it's referance to tree function to get the value and next node
    */
    node * root = (node *)malloc(sizeof(node));
    tree(root);
    printf("preorder\n");
    preorder(root);
    printf("\n");
    printf("inorder\n");
    inorder(root);
    printf("\n");
    printf("postorder\n");
    postorder(root);
    printf("\n");
}

/*
enter the data
42
is there any left node of 42
1
enter the data
56
is there any left node of 56
0
is there any right node of 56
1
enter the data
61
is there any left node of 61
0
is there any right node of 61
0
is there any right node of 42
1
enter the data
66
is there any left node of 66
1
enter the data
72
is there any left node of 72
0
is there any right node of 72
0
is there any right node of 66
1
enter the data
88
is there any left node of 88
0
is there any right node of 88
0
preorder
42 56 61 66 72 88
inorder
56 61 42 72 66 88
postorder
61 56 72 88 66 42
*/