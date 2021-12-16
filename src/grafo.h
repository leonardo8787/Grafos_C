#ifndef GRAFO_H
#define GRAFO_H

#include<stdlib.h>
#include<stdio.h>

typedef struct TipoVertex *Vertex;
typedef struct graph *Graph;

struct TipoVertex{
	int value;
	Vertex prox;
};

struct graph{
	int V;
	int E;
	Vertex *adj;
};

Vertex VertexInitialize(int value);

Graph GraphInitialize(int V);

void GraphInsertEdge(Graph G, Vertex v1, Vertex v2);

void ImprimeGraph(Graph G);

#endif