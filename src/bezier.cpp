#include<FTL4S.h>
#include<sstream>
#include<iostream>

namespace FTL4S{
  
Bezier::Bezier(Vector& x ,Vector& y){
 
   if (x.size() != y.size()) 
     throw "Vector dimensions must agree."; 
   func = new EvalAux( _Bezier(x.size()));   

}






const 
EvalAux Bezier::_Bezier(int n){

  std::stringstream str;
  for (int i=0; i != n; i++){
     str << Utils::Comb(n,i);
     str << "*t^" << i;
     str << "*(1-t)^(" << (n-i);
     str << ")*p+";
  }

  str << "0";

  return *(new EvalAux(str.str()));
}

}//namespace end







