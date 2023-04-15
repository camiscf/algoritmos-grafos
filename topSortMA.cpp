// ordenação topologica usando MA onde a entrada é o número de vértices e as arestas (origem, destino)
#include <bits/stdc++.h> 

#define N 1000

using namespace std;

int main(void){
    int n, m; cin >> n >> m;
    map<char, map<char, bool>> adj;
    map<char, int> ge;

    // montando a matriz de adjacências e adicionando o grau de entrada do vértice de destino
    for (int i=0;i<m;i++) {
        char x, y; cin >> x >> y;
        adj[x][y] = true;
        ge[y]++;
    }

    for (auto p : adj) {
        // monta os pares
        char x = p.first;
        map<char, bool> mp = p.second;

        for (auto q : mp) {
            char y = q.first;
            bool a = q.second;

            printf("adj[%c][%c] = %d\n", x, y, a);
        }
    }

    for (auto p : ge) {
        printf("ge[%c] = %d\n", p.first, p.second);
    }

    return 0;
}