#include <iostream>
#include <math.h>

using namespace std;

/*15. Imprimir la tabla de sumar hasta 12 + 12 */
 




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