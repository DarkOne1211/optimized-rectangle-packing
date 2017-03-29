#ifndef PACKING_H
#define PACKING_H

typedef struct packing_Node{
    int label;
    char orientation;
    double width;
    double height;
    double xcoord;
    double ycoord;
    struct packing_Node *left;
    struct packing_Node *right;
}Node;

typedef struct _stack{
    Node** stk;
    int top;
    int maxSize;
}Stack;

typedef struct _container{
    double height;
    double width;
}Container;

Node* Load_From_File(char* Filename, Node **mallocSpace);
Node* Packing_Data(Node *root);
int Save_To_File(char* Filename, Node *root);
void reroot(Node *root,double* BestWidth, double* BestHeight, double* xcoord, double* ycoord);
#endif