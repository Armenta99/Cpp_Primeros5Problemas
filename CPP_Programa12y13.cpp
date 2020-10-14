/*
Alumno: Armenta Peña José Francisco
No. Control: 18212146
Organización: Instituto Tecnológico de Tijuana
Materia: Lenguajez de Interfaz
Programa C++
*/


//Combine 2 problemas ya que ambos ocupaban identificar un número en un conjunto de números.


#include <iostream>
using namespace std;


/*
12. Encontrar el entero positivo mayor en una lista de quince enteros,
algunos de los cuales son impares
13. Determinar el segundo entero más grande en un conjunto de quince enteros positicos 
sumintrados como datos 
*/



int main()
{
    int Arreglo[15];

    //****Ingreso de datos
    for(int x=0; x<15; x++) 
    {
        cin>> Arreglo[x];
    }
    
    
    //****Imprimimos el array
    cout << "Arreglo: " << endl;
    for(int x=0; x<15; x++) 
    {
        cout << Arreglo[x]<<" ";
    }
    cout <<endl;


    //****Ordenamiento de mayor a menor.
    int temporal = 0;
    for(int x=0; x<15; x++) 
    { 
        for(int y=0; y<14; y++) 
        {
            if(Arreglo[y] < Arreglo[y+1])
            {
                temporal = Arreglo[y];
                Arreglo[y] = Arreglo[y+1];
                Arreglo[y+1] = temporal;
                
            }
        }
    }
    
    
    //****Imprimimos el array pero ahora ordenado
    cout << "Arreglo ordenado de mayor a menor " <<endl;
    
    for(int x=0; x<15; x++) 
    {
        cout << Arreglo[x]<<" ";
 
    }
    cout <<endl;
    
    
    //****Al estar ordenado el arreglo es posible mostrar los dos valores más grandes
    cout << "Numero mayor = "<<Arreglo[0]<<endl;
    
    
    
    //****Para el segundo numero más grande, es necesario comprobar que no sea el mismo que el mayor.
    int i = 1;
    bool bandera = true;
    
    
    
    //Coloco una bandera que me ayudara a salir del ciclo.
    while(bandera)
    {
        //Compara si el número de la posicion  es el mismo que el de la 0
        //Si son iguales continua viendo el siguiente numero, si no termina y muestra el numero.
        if(Arreglo[i] == Arreglo[0])
        {
            //Si ya se compararon todos los registros quiere decir que todo es igual,
            //asi que no hay segundo número como tal.
            if(i < 14)  
            i++;
            else 
            {
                cout << "Todos los números son iguales. Por lo tanto el ";
                i = 0;
                bandera = false;
    
            }
        }
        else 
        bandera = false;
    }
      
    cout << "Segundo numero mayor es = "<<Arreglo[i] <<endl;
    return 0;
}
