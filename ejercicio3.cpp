#include <iostream>
#include <cstdlib> //sacar numeros random
 
using namespace std;
int main ()

{
    int a, b ;
    b= 1 + rand()%3;
        cout << " Ingrese un opcion " << "\n";
        cout << " 1) piedra " << " \n" ;
        cout << " 2) papel " << " \n" ;
        cout << " 3) tijera " <<  "\n ";
        cin >> a;


   if( a == b)
        cout << " Empate " << "\n";

    else if ( (a== 1 && b == 3) || ( a== 2 && b== 1) || (a== 3 && b== 2))
    {
        cout << " Usted ha ganado felicidades (haber cuando se gana la loteria)" << "\n";
    }

    else 
    {
        cout << " Ihhh una maquina sin vida te gano ,pobrecito" << "\n";
    }
        


        

  

}

