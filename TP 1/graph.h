#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

/* Impl�mente les diff�rentes structures de graphe */

typedef struct {
	unsigned long s;
	unsigned long t;
} edge;

//edge list structure:
typedef struct {
	unsigned long n;//number of nodes
	unsigned long e;//number of edges
	edge *edges;//list of edges
} edge_list;

//adjacency matrix structure:
typedef struct {
	unsigned long n;//number of nodes
	unsigned long e;//number of edges
	bool* adj;//list of edges
} adjacency_matrix;

typedef struct {
	unsigned long n;//number of nodes
	unsigned long e;//number of edges
	unsigned long *cd;// cumulative degree
	unsigned long *adj;// concatenated lists of neighbors
} adjacency_array;

edge_list* read_edge_list(char* input);
void free_edge_list(edge_list *g);

adjacency_matrix* read_adjacency_matrix(char* input);
void free_adjacency_matrix(adjacency_matrix *g);

adjacency_array* read_adjacency_array(char* input);
void free_adjacency_array(adjacency_array *g);



#endif // GRAPH_H_INCLUDED
