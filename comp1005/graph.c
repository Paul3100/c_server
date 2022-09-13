#include "graph.h"

#include <stdio.h>
#include <stdlib.h>

/* initialise an empty graph */
/* return pointer to initialised graph */
Graph *init_graph(void)
{
}

/* release memory for graph */
void free_graph(Graph *graph)
{
}

/* initialise a vertex */
/* return pointer to initialised vertex */
Vertex *init_vertex(int id)
{
}

/* release memory for initialised vertex */
void free_vertex(Vertex *vertex)
{
}

/* initialise an edge. */
/* return pointer to initialised edge. */
Edge *init_edge(void)
{
}

/* release memory for initialised edge. */
void free_edge(Edge *edge)
{
}

/* remove all edges from vertex with id from to vertex with id to from graph. */
void remove_edge(Graph *graph, int from, int to)
{
}

/* remove all edges from vertex with specified id. */
void remove_edges(Graph *graph, int id)
{
}

/* output all vertices and edges in graph. */
/* each vertex in the graphs should be printed on a new line */
/* each vertex should be printed in the following format: */
/* vertex_id: edge_to_vertex[weight] edge_to_vertex[weight] ... */
/* for example: */
/* 1: 3[1.00] 5[2.00] */
/* indicating that vertex id 1 has edges to vertices 3 and 5 */
/* with weights 1.00 and 2.00 respectively */
/* weights should be output to two decimal places */
void print_graph(Graph *graph)
{
}

/* find vertex with specified id in graph. */
/* return pointer to vertex, or NULL if no vertex found. */
Vertex *find_vertex(Graph *graph, int id)
{
}

/* create and add vertex with specified id to graph. */
/* return pointer to vertex or NULL if an error occurs. */
/* if vertex with id already exists, return pointer to existing vertex. */
Vertex *add_vertex(Graph *graph, int id)
{
}

/* remove vertex with specified id from graph. */
/* remove all edges between specified vertex and any other vertices in graph. */
void remove_vertex(Graph *graph, int id)
{
}

/* add directed edge with specified weight between vertex with id from */
/* to vertex with id to. */
/* if no vertices with specified ids (from or to) exist */
/* then the vertices will be created. */
/* multiple vertices between the same pair of vertices are allowed. */
/* return pointer to edge, or NULL if an error occurs found. */
Edge *add_edge(Graph *graph, int from, int to, double weight)
{
}

/* add two edges to graph, one from vertex with id from to vertex with id to, */
/* and one from vertex with id to to vertex with id from. */
/* both edges should have the same weight */
/* if no vertices with specified ids (from or to) exist */
/* then the vertices will be created. */
/* multiple vertices between the same pair of vertices are allowed. */
void add_edge_undirected(Graph *graph, int from, int to, double weight)
{
}

/* return array of node ids in graph. */
/* array of node ids should be dynamically allocated */
/* set count to be the number of nodes in graph */
/* return NULL if no vertices in graph */
int *get_vertices(Graph *graph, int *count)
{
}

/* return array of pointers to edges for a given vertex. */
/* array of edges should be dynamically allocated */
/* set count to be number of edges of vertex */
/* return NULL if no edges from/to vertex */
Edge **get_edges(Graph *graph, Vertex *vertex, int *count)
{
}

/* return pointer to edge from vertex with id from, to vertex with id to. */
/* return NULL if no edge */
Edge *get_edge(Graph *graph, int from, int to)
{
}

/* return id of destination node of edge. */
int edge_destination(Edge *edge)
{
}

/* return weight of edge. */
double edge_weight(Edge *edge)
{
}