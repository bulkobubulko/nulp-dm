#include <iostream>
#include <vector>

using namespace std;


int cn; //число вершин
vector< vector<int> > ady; //матриця суміжності

// Повертає матрицю суміжності мінімального дерева
    vector< vector<int> > Grafo :: kruskal(){
    vector< vector<int> > adyacencia = this->ady;
    vector< vector<int> > arbol(cn);
    vector<int> pertenece(cn); // позначає, чи належить дереву вершина
    
    for(int i = 0; i < cn; i++){
        arbol[i] = vector<int> (cn, INF);
        pertenece[i] = i;
    }

    int nodoA;
    int nodoB;
    int arcos = 1;
    while(arcos < cn){
        // Знайти найлегше ребро, що не утворює циклів і зберегти вершини і вагу.
        int min = INF;
        for(int i = 0; i < cn; i++)
            for(int j = 0; j < cn; j++)
                if(min > adyacencia[i][j] && pertenece[i] != pertenece[j] && adyacencia[i][j] != 0){
                    min = adyacencia[i][j];
                    nodoA = i;
                    nodoB = j;
                }
        
        // Якщо вершини не належать до одного дерева, додаємо ребро між ними до дерева.
        if(pertenece[nodoA] != pertenece[nodoB]){
            arbol[nodoA][nodoB] = min;
            arbol[nodoB][nodoA] = min;

            // Усі вершини дерева nodoB зараз належать до дерева nodoA.
            int temp = pertenece[nodoB];
            pertenece[nodoB] = pertenece[nodoA];
            for(int k = 0; k < cn; k++)
                if(pertenece[k] == temp)
                    pertenece[k] = pertenece[nodoA];
            
            arcos++;
        }
    }
    return arbol;
}

