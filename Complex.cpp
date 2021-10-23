#include <iostream>
#include <math.h>
#include "Complex.h"
using namespace std;



int main(int argc, char* argv[]){
  double r, i, fase;
  Complex c1(3,5);
  Complex c2(4,6);

  

  if(argc == 3){
    r=atof(argv[1]);
    i=atof(argv[2]);
    c1.setRe(r);
    c1.setIm(i);
  }

  if((c1.getRe()>=0) && (c1.getIm() >= 0) ){
    fase=c1.phase();
  }
  else{
    fase=c1.phase()+M_PI;
  }

  cout<<"c1 = ";
  c1.print();
  cout<<"Parte reale di c1: "<<c1.Re()<<endl;
  cout<<"Parte immaginaria di c1: "<<c1.Im()<<endl;
  cout<<"Modulo di c1: "<<c1.mag()<<endl;
  cout<<"Fase di c1 : "<<fase<< " (rad)\t"<<fase*180/M_PI <<" (grad)"<< endl;

  cout<<endl;

  cout<<"c1 = ";
  c1.print();

  cout<<"c2 = ";
  c2.print();
  
  cout<<endl;

  Complex c3=c1+c2;
  cout<<"c3 = c1 + c2 = ";
  c3.print();
  
  Complex c4=c1-c2;
  cout<<"c4 = c1 - c2 = ";
  c4.print();

  Complex c5=c1*c2;
  cout<<"c5 = c1 * c2 = ";
  c5.print();

  Complex c6=c1/c2;
  cout<<"c6 = c1 / c2 = ";
  c6.print();

  cout<<endl;

  Complex c7=c2;
  cout<<"c7 =  c2 = ";
  c7.print();

  Complex c8=c1;
  c8+=c2;
  cout<<"c8 = c1 += c2 = ";
  c8.print();

  Complex c9=c1;
  c9-=c2;
  cout<<"c9 = c1 -= c2 = ";
  c9.print();

  Complex c10=c1;
  c10*=c2;
  cout<<"c10 = c1 *= c2 = ";
  c10.print();

  Complex c11=c1;
  c11/=c2;
  cout<<"c11 = c1 /= c2 = ";
  c11.print();

  Complex c12=0.5*c1;
  cout<<"c12 = 0.5*c1 = ";
  c12.print();

  return 0;
}
