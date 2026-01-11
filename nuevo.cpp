#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radio, area;
    const double PI = 3.14159;

    cout << "--- CALCULADORA GEOMETRICA v1.0 ---" << endl;
    
    // Parte 1: Calcular Area
    cout << "Introduce el radio del circulo: ";
    cin >> radio;
    
    area = PI * pow(radio, 2);
    cout << "El area del circulo es: " << area << endl;

    // Parte 2: Calcular Radio (Demostracion de raiz como potencia)
    cout << "\nCalculando el radio a la inversa..." << endl;
    cout << "El radio expresado como raiz es: (Area / PI)^(1/2)" << endl;
    
    double resultadoRadio = pow((area / PI), 0.5);
    cout << "El valor del radio es: " << resultadoRadio << endl;

    return 0;
}