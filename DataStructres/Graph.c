#include<stdio.h>
#define MAX_SIZE = 50

struct Edge{
	char *startVertex;
	char *endVertex;
	int weight;
};

/* OR

struct Edge{
	string startVertex;
	string endVertex;
	int weight;
};

*/

Edge edge_list[MAX_SIZE];

/*  OR
	string vertex_list[MAX_SIZE];
*/


