#include "LeNet.h"

int main(int argc, char **argv)
{
    NetParams *p = load_data_cfg("./cfg/LeNet5.cfg");
    Node *n = p->head;
    n = n->next;
    LayerParams *LP = n->val;
    Node *N = LP->head;
    N = N->next;
    Params *P = N->val;
    
    printf("%s %s\n", P->key, P->val);
    return 0;
}