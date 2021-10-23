#include <iostream>
#include <math.h>
#include "Complex.h"
using namespace std;

//constructors
Complex::Complex(double a, double b){
  re=a;
  im=b;
}

Complex::~Complex(){
}

Complex Complex::operator+(const Complex& rhs) const{
  double re_=re+rhs.re;
  double im_=im+rhs.im;
  return Complex(re_, im_);
}

Complex Complex::operator-(const Complex& rhs) const{
  double re_=re-rhs.re;
  double im_=im-rhs.im;
  return Complex(re_, im_);
}

Complex Complex::operator*(const Complex& rhs) const{
  double re_=re*rhs.re-im*rhs.im;
  double im_=re*rhs.im+im*rhs.re;
  return Complex(re_, im_);
}

Complex Complex::operator/(const Complex& rhs) const{
  if((rhs.re != 0) && (rhs.im !=0)){
    double re_=(re*rhs.re+im*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
    double im_=(im*rhs.re-re*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
    return Complex(re_, im_);
  }
  else{
    cout<<"NON POSSO DIVIDERE PER 0!"<<endl;
  }
}

const Complex& Complex::operator=(const Complex& rhs){
  double re_=rhs.re;
  double im_=rhs.im;
  return *this;
}

const Complex& Complex::operator+=(const Complex& rhs){
  re=re+rhs.re;
  im=im+rhs.im;
  return *this;
}

const Complex& Complex::operator-=(const Complex& rhs){
  re=re-rhs.re;
  im=im-rhs.im;
  return *this;
}

const Complex& Complex::operator*=(const Complex& rhs){
  double tmp;
  tmp=re;
  re=re*rhs.re-im*rhs.im;
  im=tmp*rhs.im+im*rhs.re;
  return *this;
}

const Complex& Complex::operator/=(const Complex& rhs){
  double tmp;
  if((rhs.re != 0) && (rhs.im !=0)){
    tmp=re;
    re=(re*rhs.re+im*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
    im=(im*rhs.re-tmp*rhs.im)/(rhs.re*rhs.re+rhs.im*rhs.im);
    return *this;
  }
  else{
    cout<<"NON POSSO DIVIDERE PER 0!"<<endl;
  }
}

//global function
Complex operator*(const double& lhs, const Complex& rhs){
  return Complex(lhs*rhs.getRe(), lhs*rhs.getIm());
}


//getters
double Complex::getRe() const {return re;}
double Complex::getIm() const {return im;}

//setters
void Complex::setRe(double c){re=c;}
void Complex::setIm(double d){im=d;}

void Complex::print(){
  if(im>=0){
    cout<<re<<" + i"<<im<<endl;
  }
  if(im<0){
    cout<<re<<" - i"<<-im<<endl;
  }
}


double Complex::Re(){return re;}
double Complex::Im(){return im;}
double Complex::mag(){return sqrt(re*re+im*im);}
double Complex::r(){return sqrt(re*re+im*im);}
double Complex::phase(){
  if((re == 0) && (im==0)){return 0;}
  else{return atan(im/re);}
}
double Complex::phi(){
  if((re == 0) && (im==0)){return 0;}
  else{return atan(im/re);}
}
/////////////////////////////////////////////////////////


