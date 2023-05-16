// incluir bibliotecas
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

 // abertura do codigo 
int main() {
   // variáveis
    int sala1, sala2, sala3, sala4, sala5, sala6;
    sala1 = 35;
    sala2 = 4;
    sala3 = 22;
    sala4= 20;
    sala5 = 36;
    sala6 = 30;
    
    //calculo da media do numero de alunos
    float media = (sala1 + sala2 + sala3 + sala4 + sala5 + sala6) / 6;
    cout << "A média de alunos é igual a " << media << endl;
    
    //condicionais para determinar a sala q possui mais alunos que a média
    if (sala1 >= media){
        //retorno na interface do usuário
        cout << "A sala 1 possui mais alunos que a média das salas" << endl;
    }
    if (sala2 >= media){
        cout << "A sala 2 possui mais alunos que a média das salas" << endl;
    }
    if (sala3 >= media){
        cout << "A sala 3 possui mais alunos que a média das salas"<< endl;
    }  
    if (sala4 >= media){
        cout << "A sala 4 possui mais alunos que a média das salas" << endl; 
    }    
    if (sala5 >= media){
        cout << "A sala 5 possui mais alunos que a média das salas" << endl;
    }    
    if (sala6 >= media){
        cout << "A sala 6 possui mais alunos que a média das salas" << endl;        
    }
          
    return 0;
}
