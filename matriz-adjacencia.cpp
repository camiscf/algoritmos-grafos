/* 
    Uma matriz de adjacencias é uma matriz de booleanos em que as colunas e as linhas são os vértices 
e vai dizer se aquela aresta existe ou não. O bom de se usar MA é que operações de consultar, remover e adicionar arestas são O(1), mas operações de encontrar vizinhos são O(n) e contar as arestas são O(n²). 
Outro ponto negativo é que, uma matriz n x n ocupa muita memoria e as operações de inEdge ou outEdge são custosas. 
*/ 

#include <iostream>
using namespace std;

class Graph {
   private:
  bool** adjMatrix;
  int numVertices;

   public:
  // Inicializa a matriz
  Graph(int numVertices) {
    this->numVertices = numVertices;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++) {
      adjMatrix[i] = new bool[numVertices];
      for (int j = 0; j < numVertices; j++)
        adjMatrix[i][j] = false;
    }
  }

  // Add arestas
  void addEdge(int i, int j) {
    adjMatrix[i][j] = true;
    adjMatrix[j][i] = true;
  }

  // Remove arestas
  void removeEdge(int i, int j) {
    adjMatrix[i][j] = false;
    adjMatrix[j][i] = false;
  }


  // Print
  void print() {
    for (int i = 0; i < numVertices; i++) {
      cout << i << " : ";
      for (int j = 0; j < numVertices; j++)
        cout << adjMatrix[i][j] << " ";
      cout << "\n";
    }
  }

  //encontrar todos os vizinhos
  void findNeighbors(int row){
    cout << "vizinhos do vertice " << row << " : ";
    if(int j = row){
        for(int i = 0; i < numVertices; i++){
            cout << adjMatrix[j][i] << " ";
        }
        cout << "\n";
    }
  }

  void countEdges(){
    int totalEdges = 0;
    for (int i = 0; i < numVertices; i++) {
      for (int j = 0; j < numVertices; j++)
        if (adjMatrix[i][j] == true){
            totalEdges++;
        }
    }
    cout << "total de arestas:" << totalEdges/2 << "\n";
  }

  ~Graph() {
    for (int i = 0; i < numVertices; i++)
      delete[] adjMatrix[i];
    delete[] adjMatrix;
  }
};

int main() {
  Graph g(5);

  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(2, 3);
  g.addEdge(3, 1);
  g.addEdge(3, 4);
  g.addEdge(4, 1);
  
  //printf("aqui");
  g.print();
  g.findNeighbors(2);
  g.countEdges();
}