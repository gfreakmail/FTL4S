#include<FTL4S.h>
#include<sstream>
#include<iostream>

namespace FTL4S{
  
Bezier::Bezier(Vector& x ,Vector& y){

   if (x.size() != y.size()) 
     throw "Vector dimensions must agree.";

   Fz = NULL;
   Fx = new EvalAux(_Bezier(x));
   Fy = new EvalAux(_Bezier(y)); 
   
}

 
EvalAux Bezier::_Bezier(Vector& v) const{

  std::stringstream str;
  int n=v.size();
  for (int i=0; i < n; i++){
     str << Utils::Comb(n,i);
     str << "*x^(" << i;
     str << ")*(1-x)^(" << (n-i-1);
     str << ")*";
     str << v[i] << "+";
  }
  str << "0";  
  std::cout << str.str() << std::endl;
  return *(new EvalAux(str.str()));
}

void  Bezier::EvalFunc( FTL4S_BASETYPE st, void (*func)(FTL4S_BASETYPE,FTL4S_BASETYPE)){
  
  if ( st == 0.0 || st < 0.0 || st > 1.0 ) 
     throw "Invalid increment size";

  for(FTL4S_BASETYPE i=0; i < 1; i+=st)
     func(Fx->Evalx(i),Fy->Evalx(i));


}

void  Bezier::EvalFunc( FTL4S_BASETYPE st, void (*func)(FTL4S_BASETYPE,FTL4S_BASETYPE,FTL4S_BASETYPE)){
  
  if ( st == 0.0 || st < 0.0 || st > 1.0 ) 
     throw "Invalid increment size";

  for(FTL4S_BASETYPE i=0;i < 1; i+=st)
     func(Fx->Evalx(i),Fy->Evalx(i),Fz->Evalx(i));


}




}//namespace end







