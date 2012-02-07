#include<FTL4S.h>
#include<iostream>

using namespace std;
using namespace FTL4S;

inline void miafuncio(double v){
    cout << v << endl;
}


int main(void){
  
  /*FTL4S_BASETYPE x[]={1.0, 2.0,3.0,4.0, 5.0, 6.0,8.0}; 
  FTL4S_BASETYPE y[]={0.5, 0.75, 0.95,1.32, 1.56, 1.72,2};
  FTL4S::InterPoly i(AR_PASS(x),AR_PASS(y));

  try{
    i.genLagrangePoly();
    EvalAux eval(i.getInterPolyStr());
    for(double v=1.0; v < 8.0; v+=0.001){cout<< "f("<< v << ")=" << eval.Evalx(v) << endl;}
  }
  catch (const char *e){
      cout << e << endl;
  }*/

  EvalAux eval(string("3*x"));
  cout.precision(20);
  eval.Call(miafuncio,0,.001,10);
}
