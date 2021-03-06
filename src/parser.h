#ifndef PARSER_H
#define PARSER_H

#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    struct Node *prev;
    struct Node *next;
    void *val;
} Node;

typedef struct Params
{
    char *key;
    char *val;
} Params;

typedef struct LayerParams
{
    char *type;
    int size;
    struct Node *head;
    struct Node *tail;
} LayerParams;

typedef struct NetParams
{
    int size;
    struct Node *head;
    struct Node *tail;
} NetParams;

NetParams *load_data_cfg(char *filecfg);
LayerParams *make_layer_params(char *line);
NetParams *make_net_params();
void insert_net_params(NetParams *NP, LayerParams *LP);
void insert_layer_params(LayerParams *LP, char *line);
Node *make_node_param(char *line);
#endif