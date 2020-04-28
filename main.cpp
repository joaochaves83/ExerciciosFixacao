#include <iostream>
#include <stdio.h>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
reiniciar:
float nota=0, peso=0, media=0, aux=0,qn=0, result=0;
char refazer;
setlocale(LC_ALL, "Portuguese");

cout << "\t" << "Programa para calculo da média!" << endl << endl;
cout << "\t" << "Instruções:" << endl;
cout << "\t" << "- As notas devem ser considerads de 0 a 10 e não de 10 a 100;" << endl;
cout << "\t" << "- Os pesos das notas também esta de 0 a 10 e não de 10 a 100;" << endl;
cout << "\t" << "- Quando digitar notas de valores não inteiros use ponto (.) e não vírgula (,);" << endl;

cout << "\t" << "- Exemplo: " << "Nota 10 ou 10.00 e PESO 2 ou 2.00 " << endl << endl;

cout << "Digite a quantidade de avaliações: ";
cin >> qn;
    for (int i=1;i<=qn;i++){
    cout << endl;
    cout << "Digite a nota " << i << ": ";
    cin >> nota;
    cout << "Digite o peso da nota " << i <<": ";
    cin >> peso;
    cout << endl;
    media=(nota*peso)/10;
    result=result+media;
    }

cout << endl;
cout << "A média é: " << result << endl;

    if (result>=9){
        cout << "\t" << "APROVADO COM LOUVOR!" << endl << endl;
        }else
            if (result>=6 && media<9){
                cout << "\t"<< "APROVADO!" << endl << endl;
            }else
                if (result>=4 && media<6){
                cout << "\t"<< "VAI PARA RECUPERAÇÃO!" << endl << endl;
                }else
                    if (result<4){
                        cout << "\t" << "REPROVADO!" << endl <<endl;
                    }

simnao:
cout << "\t" << "Deseja refazer os cálculos? (S) para SIM e (N) para NÂO:" << endl;
cin >> refazer;
    if (refazer=='S' || refazer=='s'){
    system("cls");
    system("pause");
    goto reiniciar;
    }else
        if (refazer=='n' || refazer =='N'){
        cout << "\t" << "Programa Finalizado!" << endl;
        system ("pause");
        system ("cls");
        return 0;
        }else
            if (refazer != 'n','N','s','S'){
            cout << "\t" << "Digite apenas (S) ou (N): " << endl;
            system("pause");
            system("cls");
            goto simnao;
            }
return 0;
}
