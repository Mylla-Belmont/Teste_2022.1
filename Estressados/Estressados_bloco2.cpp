#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void inverter_inplace(vector<int>& fila) {
    for (int i = 0, j = (fila.size()-1); i < (fila.size()/2); i++, j--) {
        int aux{fila[i]};
        fila[i] = fila[j];
        fila[j] = aux;
    }
}

vector<int> inverter_com_copia(const vector<int>& fila) {
    vector<int> novo_vector {};
    for (int i = fila.size()-1; i >=0; i--)
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
    for (auto vetor : nome_vetor)
        cout << vetor << ", ";
    cout << endl;
}

int main() {
    /*  FILTER  */
    vector<int> clone = clonar({-51, 99, 1, -50, -1, -99});
    imprimir(clone);
    
    vector<int> lista_homens = pegar_homens({-51, 99, 1, -50, -1, -99}); 
    imprimir(lista_homens);
    
    vector<int> calmos = pegar_calmos({-51, 99, 1, -50, -1, -99});
    imprimir(calmos);
    
    vector<int> mulheres_calmas = pegar_mulheres_calmas({-51, 99, 1, -50, -1, -99});
    imprimir(mulheres_calmas);
                                    
    /*  ACESSO  */
    vector<int> inverso = inverter_com_copia({-51, 99, 1, -50, -1, -99});
    imprimir(inverso);
    
    vector<int> inverter {-51, 99, 1, -50, -1, -99};
    inverter_inplace(inverter);
    imprimir(inverter);
    
}