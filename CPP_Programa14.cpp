/*
Alumno: Armenta Peña José Francisco
No. Control: 18212146
Organización: Instituto Tecnológico de Tijuana
Materia: Lenguajez de Interfaz
Programa C++
*/

/*14. Determinar cuál cantidad es mayor: 3pow(75) o 2pow(100) */


#include <iostream>
#include <math.h>

using namespace std;




int main() {
    
   
    cout << "3^75 es: " << pow(3,75) <<endl;
    cout << "2^100 es: " << pow(2,100) <<endl;


    if(pow(3,75)>pow(2,100))
            cout <<"3^75 es mayor a 2^100\n";
    else
            cout <<"2^100 es mayor a 3^75\n";
    

    return 0;
}
