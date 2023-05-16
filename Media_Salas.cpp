#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    // Write C++ code here
    int sala1, sala2, sala3, sala4, sala5, sala6;

    cout << "Insira o nº de alunos da Sala 1: " << endl;
    cin >> sala1;
    
    cout << "Insira o nº de alunos da Sala 2: " << endl;
    cin >> sala2;
    
    cout << "Insira o nº de alunos da Sala 3: " << endl;
    cin >> sala3;
    
    cout << "Insira o nº de alunos da Sala 4: " << endl;
    cin >> sala4;
    
    cout << "Insira o nº de alunos da Sala 5: " << endl;
    cin >> sala5;
    
    cout << "Insira o nº de alunos da Sala 6: " << endl;
    cin >> sala6;

    float media = (sala1 + sala2 + sala3 + sala4 + sala5 + sala6) / 6;
    cout << "A média de alunos é igual a " << media << endl;

    if (sala1 > sala2 & sala1 > sala3 & sala1 > sala4 & sala1 > sala5 & sala1 > sala6)
    cout << "A sala 1 possui o maior número de alunos" << endl;
    
    else if (sala2 > sala1 & sala2 > sala3 & sala2 > sala4 & sala2 > sala5 & sala2 > sala6)
    cout << "A sala 2 possui o maior número de alunos" << endl;
    
    else if (sala3 > sala1 & sala3 > sala2 & sala3 > sala4 & sala3 > sala5 & sala3 > sala6)
    cout << "A sala 3 possui o maior número de alunos" << endl;
    
    else if (sala4 > sala1 & sala4 > sala2 & sala4 > sala3 & sala4 > sala5 & sala4 > sala6)
    cout << "A sala 4 possui o maior número de alunos" << endl;
    
    else if (sala5 > sala1 & sala5 > sala2 & sala5 > sala3 & sala5 > sala4 & sala5 > sala6)
    cout << "A sala 5 possui o maior número de alunos" << endl;
    
    else 
    cout << "A sala 6 possui o maior número de alunos" << endl;

 if (sala1 < sala2 & sala1 < sala3 & sala1 < sala4 & sala1 < sala5 & sala1 < sala6)
    cout << "A sala 1 possui o menor número de alunos" << endl;
    
    else if (sala2 < sala1 & sala2 < sala3 & sala2 < sala4 & sala2 < sala5 & sala2 < sala6)
    cout << "A sala 2 possui o menor número de alunos" << endl;
    
    else if (sala3 < sala1 & sala3 < sala2 & sala3 < sala4 & sala3 < sala5 & sala3 < sala6)
    cout << "A sala 3 possui o menor número de alunos" << endl;
    
    else if (sala4 < sala1 & sala4 < sala2 & sala4 < sala3 & sala4 < sala5 & sala4 < sala6)
    cout << "A sala 4 possui o menor número de alunos" << endl;
    
    else if (sala5 < sala1 & sala5 < sala2 & sala5 < sala3 & sala5 < sala4 & sala5 < sala6)
    cout << "A sala 5 possui o menor número de alunos" << endl;
    
    else 
    cout << "A sala 6 possui o menor número de alunos" << endl;

    return 0;
}
