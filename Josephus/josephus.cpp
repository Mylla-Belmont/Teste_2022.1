#include <iostream>

using namespace std;

void imprimir_vetor(int circulo[], int size, int escolhido) {
    cout << "[";
    for (int i {0}; i < size; i++) {
        if (circulo[i] != 0)
            cout << " " << circulo[i];
        if (i == escolhido)
            cout << ">";
    }
    cout << " ]" << endl;
}

int procurar_vivo (int circulo[], int escolhido, int size) {
    int next = (escolhido + 1) % size;
    while(circulo[next] == 0)
        next = (next + 1) % size;
    return next;
}

void abordagem_1(int circulo[], int escolhido, int size) {
    for (int i {0}; i < size; i++) {
        imprimir_vetor(circulo, size, escolhido);
        int next = procurar_vivo(circulo, escolhido, size);
        circulo[next] = 0;
        escolhido = procurar_vivo(circulo, next, size);
    }
}

int main() {
    int  escolhido {0}, size {0};
    cout << "Digite o tamanho e o escolhido:" << endl;
    cin >> size  >> escolhido;
    int  circulo[size] {};

    for (int i {0}; i < size; i++)
        circulo[i] = i+1;
    
    abordagem_1(circulo, (escolhido-1), size);
}