#include "grafo.h"

int main(int argc, char const *argv[]) {
	
	Graph G = GraphInitialize(3);

	GraphInitialize(G, G->adj[0], G->adj[2]);
	GraphInitialize(G, G->adj[2], G->adj[0]);

	return 0;
}