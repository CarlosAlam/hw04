/*
Author:   Juan Pueblo
Date:     today
Version:  1.0

  Homework 04
  Media de tres variables
	
*/


#include <iostream>

int main ()
{
  int a=0, b=0, c=0, mint=0;
  double x=0, y=0, z=0, mdou=0;
  char chara, charb, charc, mchar;

  std::cout<<"\nEste programa calcula la media de tres tipos de datos dados por el usuario "<<std::endl;
  std::cout<<"\nEscribe tres enteros: \n"; 
  std::cin>>a; std::cin>>b; std::cin>>c;
  std::cout<<"\nEscriba tres numeros double: \n";
  std::cin>>x; std::cin>>y; std::cin>>z;
  std::cout<<"\nEscriba tres caracter: \n";
  std::cin>>chara; std::cin>>charb; std::cin>>charc;
   
   mint=(a+b+c)/3;
   mdou=(x+y+z)/3;
   mchar=(chara+charb+charc)/3;

  std::cout<<"\nLa media de los int es: "<<mint <<std::endl;
  std::cout<<"\nLa media de los double es: "<<mdou <<std::endl;
  std::cout<<"\nLa media de los char es: "<<mchar <<std::endl;
  
  return 0;
}
