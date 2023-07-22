#include <iostream>

int multiplicar(int a, int b) {
    int resultado = 0;
    while (b > 0) {
        resultado += a;
        b--;
    }  
}

int resta(int a, int b) {
    int resultado = 0;
    while (a > b) {
        b++;
        value++;
    }  
    return value;
}

int div (int a, int b) {
    int value = 0;
    while (a >= b) {
        a -= b;
        value++;
    }  
    return value;
}

int verify_primo(int a) {
    int value = 0;
    int i = 1;
    while (i <= a) {
        if (a % i == 0) {
            value++;
        }
        i++;
    }  
    return value;
}

int primo(int a){
    bool primo = true;
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            primo = false;
            break;
        }
    }
}

int primo(int a){
    bool primo = true;
    for(int i = 2; i < a/2 && primo; i++){
        if(a % i == 0){
            primo = false;
            break;
        }
    }
}

int main() {
    std::cout << multiplicar(3, 5) << std::endl;
    std::cout << multiplicar(2, 4) << std::endl;
    std::cout << multiplicar(1, 6) << std::endl;
    std::cout << multiplicar(0, 7) << std::endl;
    std::cout << multiplicar(9, 9) << std::endl;
    std::cout << multiplicar(8, 2) << std::endl;
    
    return 0;
}