/**
Escribe un programa que permita al usuario ingresar un año y determine si ese año es bisiesto.
 Un año es bisiesto si es divisible entre 4,pero no entre 100, excepto si es divisible entre 400.
**/
#include <iostream>


using namespace std;


int main()
{
 int opcion;
 int aniousuario;
 float numerousuario;
 int i;
 int resultado;
 int limite;
 cout<<"----BIENVENIDO----"<<endl;
 cout<<"ingrese su opcion:"<<endl;
 cout<<"1.Anio bisiesto\n2.Multiplicacion inversa\n3.Fizzbuzz\n4.Salir"<<endl;
 cin>>opcion;
  switch(opcion)
   {
   case 1:
          cout<<"ingrese un anio:"<<endl;
          cin >>aniousuario;

          if((aniousuario%4==0 && aniousuario%100!=0 ) || aniousuario %400==0)
          {
           cout <<"es bisiesto"<<endl;
          }
          else if ((aniousuario%4!=0 && aniousuario%100==0 )||aniousuario %400!=0)
                  {
                  cout<<"no es bisiesto"<<endl;
                 }

          break;
   case 2:
         cout<<"ingrese un numero entero:"<<endl;
         cin>>numerousuario;
            for(int i = 10; i >= 1; i--) {
          int resultado=numerousuario*i;
           cout<<numerousuario<<"*"<<i<<"="<<resultado<<endl;
         }
          break;
   case 3:
           cout << "Introduce un límite mayor a 15: ";
    cin >> limite;

    if (limite <= 15) {
        cout << "El limite debe ser mayor a 15. Inténtalo de nuevo." << endl;
        return 1;
    }
  for (int i = 1; i <= limite; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz";
        } else if (i % 3 == 0) {
            cout << "Fizz";
        } else if (i % 5 == 0) {
            cout << "Buzz";
        } else {
            cout << i;
        }
        cout << endl;
    }
          break;
   case 4:
          cout<<"chau"<<endl;
          cout<<"saliendo"<<endl;
          cout<<"gracias por nada"<<endl;
          break;
   }

    return 0;
}
