/*
Alumno: Armenta Peña José Francisco
No. Control: 18212146
Organización: Instituto Tecnológico de Tijuana
Materia: Lenguajez de Interfaz
Programa C++
*/

/*15. Imprimir la tabla de sumar hasta 12 + 12 */
 

#include <iostream>
#include <math.h>

using namespace std;





int main() 
{
    

    for(int x = 1; x<=12;x++)
    {
        for(int y = 1; y<=12;y++)
        cout << x <<" + "<<y << " = "<< (x+y)<<endl;
        
        cout <<endl;
        
    }
   
    return 0;
}
