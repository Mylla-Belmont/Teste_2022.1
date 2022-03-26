#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;

int sortear(const vector<int>& fila) {
    srand((unsigned) time(0));
    int size {(int) fila.size()}, randomNumber {0};
    randomNumber = (rand() % size);
    return fila[randomNumber];
}

void inverter_inplace(vector<int>& fila) {
    int size {(int) fila.size()};
    for (int i = 0, j = (size-1); i < (size/2); i++, j--) {
        int aux{fila[i]};
        fila[i] = fila[j];
        fila[j] = aux;
    }
}

vector<int> inverter_com_copia(const vector<int>& fila) {
    vector<int> novo_vector {};
    int size {(int) fila.size()};
    for (int i = size-1; i >=0; i--)
        novo_vector.push_back(fila[i]);
    return novo_vector;
}

vector<int> pegar_mulheres_calmas(const vector<int>& fila) {
    vector<int> novo_vector {};
    for (auto vet : fila)
        if (vet < 0 && abs (vet) < 10)
            novo_vector.push_back(vet);
    return novo_vector;
}

vector<int> pegar_calmos(const vector<int>& fila) {
    vector<int> novo_vector {};
    for (auto vet : fila)
        if (abs (vet) < 10)
            novo_vector.push_back(vet);
    return novo_vector;
}

vector<int> pegar_homens(const vector<int>& fila) {
    vector<int> novo_vector {};
    for (auto vet : fila)
        if (vet > 0)
            novo_vector.push_back(vet);
    return novo_vector;
}

vector<int> clonar(const vector<int>& fila) {
    vector<int> novo_vector {};
    for (auto vet : fila)
        novo_vector.push_back(vet);
    return novo_vector;
}

void imprimir(vector<int> nome_vetor){
    cout << "[";
    for (auto vetor : nome_vetor)
        cout << vetor << ", ";
    cout << "]" << endl;
}

int main() {
    /*  FILTER  */
    imprimir(clonar({-51, 99, 1, -50, -1, -99}));
    imprimir(pegar_homens({-51, 99, 1, -50, -1, -99}));
    imprimir(pegar_calmos({-51, 99, 1, -50, -1, -99}));
    imprimir(pegar_mulheres_calmas({-51, 99, 1, -50, -1, -99}));                            
    /*  ACESSO  */
    imprimir(inverter_com_copia({-51, 99, 1, -50, -1, -99}));
    vector<int> inverter {-51, 99, 1, -50, -1, -99};
    inverter_inplace(inverter);
    imprimir(inverter);
    cout << sortear({-51, 99, 1, -50, -1, -99}) << endl;
}