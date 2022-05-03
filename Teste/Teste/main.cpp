#include <iostream>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main() {
    int contador = 1;
    int decimal;
    int binario [11];
    do{

    int opcao;
    setlocale (LC_ALL, "portuguese");
    cout << "  " << endl;
    cout << "----------------------" << endl;
    cout << "**CALCULADORA DE CONVERSÃO**" << endl;
    cout << "----------------------" << endl;
    cout << "  " << endl;
    cout << "Escolha uma opção  " << endl;
    cout << "  " << endl;
    cout << "1 - Decimal para Binário" << endl;
    cout << "  " << endl;
    cout << "2 - Binário para Decimal" << endl;
    cout << "  " << endl;
    cout << "0 - Sair" << endl;
    cout << "  " << endl;
    cin >> opcao;
    system("clear||cls");

    if (opcao == 1) {
        cout << " " << endl;
        cout << "Você escolheu DECIMAL PARA BINARIO" << endl;
        cout << " " << endl;
        cout << "Digite um número em DECIMAL:   " << endl;
        cin >> decimal;
        cout << " " << endl;
        cout << "O Numero digitado foi: " << decimal << endl;
            for (int cont = 10 ; cont > -1; cont--) {
                if (decimal % 2 == 0) {
                    binario[cont] = 0;
                }else{
                binario[cont] = 1;
                }
                decimal = decimal / 2;

            }
            cout << " " << endl;
            cout << ("EM BINARIO FICA: ");
            for (int i = 0; i < 11; i++) {
                cout << binario [i];
            }
            cout << " " << endl;

    }else{
        if (opcao == 2) {
            int binario;
            int decimal = 0;
            cout << "  " << endl;
            cout << "Voce escolheu BINARIO PARA DECIMAL" << endl;
            cout << "  " << endl;
            cout << "Digite um numero em binario: " << endl;
            cin >> binario;
            cout << " " << endl;
            cout << "O Numero digitado foi: " << binario << endl;
            cout << " " << endl
            ;
            int i = 0;
            cout << ("EM DECIMAL FICA: ");
            for (int i = 0; i < 11 ; i++) {
                decimal = decimal + pow(2, i)*(binario%10);
                binario = binario / 10;
            }cout << decimal << endl;


        }else{
            if (opcao == 0) {
                cout << "  " << endl;
                cout << "Saindo...  " << endl;
                contador = opcao;


            }else{
            cout << "  " << endl;
            cout << "Você digitou uma opção inválida, tente novamente." << endl;
            }
            }
        }
    }while (contador > 0);
}
