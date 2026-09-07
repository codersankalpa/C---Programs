#include <iostream>

using namespace std;

int main() {
	const int maxVertices = 100;
	const int infinity = 1000000000;
	int vertices;
	int edges;

	cout << "Enter the number of vertices: ";
	cin >> vertices;
	cout << "Enter the number of edges: ";
	cin >> edges;

	if (vertices <= 0 || vertices > maxVertices || edges < 0) {
		cout << "Invalid graph size." << endl;
		return 1;
	}

	int graph[maxVertices][maxVertices];

	for (int i = 0; i < vertices; i++) {
		for (int j = 0; j < vertices; j++) {
			graph[i][j] = infinity;
		}
		graph[i][i] = 0;
	}

	cout << "Enter each edge as: source destination weight" << endl;
	for (int i = 0; i < edges; i++) {
		int source;
		int destination;
		int weight;
		cin >> source >> destination >> weight;

		if (source < 0 || source >= vertices || destination < 0 ||
			destination >= vertices || weight < 0) {
			cout << "Invalid edge." << endl;
			return 1;
		}

		graph[source][destination] = weight;
		graph[destination][source] = weight;
	}

	int key[maxVertices];
	int parent[maxVertices];
	bool included[maxVertices];

	for (int i = 0; i < vertices; i++) {
		key[i] = infinity;
		parent[i] = -1;
		included[i] = false;
	}

	key[0] = 0;

	for (int count = 0; count < vertices; count++) {
		int current = -1;

		for (int vertex = 0; vertex < vertices; vertex++) {
			if (!included[vertex] &&
				(current == -1 || key[vertex] < key[current])) {
				current = vertex;
			}
		}

		if (current == -1 || key[current] == infinity) {
			cout << "The graph is disconnected; an MST does not exist." << endl;
			return 0;
		}

		included[current] = true;

		for (int vertex = 0; vertex < vertices; vertex++) {
			if (!included[vertex] && graph[current][vertex] < key[vertex]) {
				key[vertex] = graph[current][vertex];
				parent[vertex] = current;
			}
		}
	}

	int totalWeight = 0;
	cout << "\nEdges in the Minimum Spanning Tree:\n";
	for (int vertex = 1; vertex < vertices; vertex++) {
		cout << parent[vertex] << " - " << vertex
			 << " : " << graph[parent[vertex]][vertex] << endl;
		totalWeight += graph[parent[vertex]][vertex];
	}

	cout << "Total weight of MST: " << totalWeight << endl;
	return 0;
}
