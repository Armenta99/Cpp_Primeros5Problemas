/*
Alumno: Armenta Peña José Francisco
No. Control: 18212146
Organización: Instituto Tecnológico de Tijuana
Materia: Lenguajez de Interfaz
Programa C++
*/


/*11. Introducir un conjunto de 25 números. Determinar la cntidad de números positivos y negativos del conjunto.*/

#include <iostream>
using namespace std;



int main()
{
    int numero = 0, Cont_Pos = 0, Cont_Neg = 0; 
    

    for (int x = 0; x < 25; x++) 
    {
       // cout << "Numero " << (x+1) <<":\n";
        cin >> numero;
        if(numero>=0)
        Cont_Pos++;
        else
        Cont_Neg++;
        
        
    }


    cout << "Numeros negativos = "<< Cont_Neg << endl;
    cout << "Numeros positivos = "<< Cont_Pos << endl;

    return 0;
}
