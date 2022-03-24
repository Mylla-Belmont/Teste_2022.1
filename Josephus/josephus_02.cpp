#include <iostream>

using namespace std;

void abordagem_2(int circulo[], int inicio, int size) {

}

int main() {
    int  inicio {0}, size {0};
    cout << "Digite o tamanho e o inicio:" << endl;
    cin >> size  >> inicio;
    int  circulo[size] {};

    for (int i {0}; i < size; i++)
        circulo[i] = i+1;
    
    abordagem_2(circulo, (inicio-1), size);
}