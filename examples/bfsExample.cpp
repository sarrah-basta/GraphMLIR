//====- bfs.cpp - Example of graph-opt tool ========================//
//
// The graph.bfs operation will be compiled into an object file with the
// graph-opt tool.
// This file will be linked with the object file to generate the executable
// file.
//
//===----------------------------------------------------------------------===//

#include <Interface/graph.h>
#include <Interface/memref.h>
#include <Interface/Container.h>
#include <Interface/GraphContainer.h>
#include <vector>
#include <iostream>

int main() {
  
  	Graph<float, 2> sample_graph(graph::detail::GRAPH_ADJ_LIST_UNDIRECTED_WEIGHTED, 4);	
	 
	sample_graph.addEdge(0,2,3);
	sample_graph.addEdge(1,2,3);
	sample_graph.addEdge(2,3,3);
	sample_graph.addEdge(3,2,4);
	
	auto memref = sample_graph.graph_to_MemRef_descriptor();
	
	//this will print the linear 2d matrix in 2d form.
	sample_graph.printGraph();
}
