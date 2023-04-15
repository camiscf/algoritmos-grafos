/* 
    Uma matriz de adjacencias é uma matriz de booleanos em que as colunas e as linhas são os vértices 
e vai dizer se aquela aresta existe ou não. O bom de se usar MA é que operações de consultar, remover e adicionar arestas são O(1), mas operações de encontrar vizinhos são O(n) e contar as arestas são O(n²). 
Outro ponto negativo é que, uma matriz n x n ocupa muita memoria e as operações de inEdge ou outEdge são custosas. 
*/ 
#include <iostream> 

using namespace std;

class Graph{
    bool** adjMatrix;
    int numVertices;

    Graph(int numVertices){
        // inicializa o grafo
        this->numVertices = numVertices;
        adjMatrix - new bool*[numVertices];

        //agora precisa criar a matriz
        for(int i = 0; i < numVertices; i++){
            adjMatrix[i] = new bool[numVertices];
            for(int j = 0; j  < numVertices; j++){
                adjMatrix[j] = new bool[numVertices];
            }
        }
    }
};

int main(void){
    printf("criei");
}