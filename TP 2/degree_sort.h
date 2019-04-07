#ifndef DEGREE_SORT_H_INCLUDED
#define DEGREE_SORT_H_INCLUDED

/* Impl�mente une structure de tri tr�s efficace (O(1)) pour maintenir les noeuds tri�s par leurs degr�s */

typedef struct{
    unsigned long size;
    unsigned long* p;
} NodeArray;

NodeArray createNodeArray();
unsigned long getBackNode(NodeArray* array);
void addNode(NodeArray* array, unsigned long node);
unsigned long popNode(NodeArray* array);
void removeNode(NodeArray* array, unsigned long idx);



#endif // DEGREE_SORT_H_INCLUDED
