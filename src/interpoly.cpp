#include <FTL4S.h>
#include <sstream>

namespace FTL4S{
 
  InterPoly::InterPoly(FTL4S_BASETYPE *d,FTL4S_BASETYPE *ds, FTL4S_BASETYPE *r, FTL4S_BASETYPE *rs  ){
    vDomain=vector<FTL4S_BASETYPE>(d,ds);    
    vRange=vector<FTL4S_BASETYPE>(r,rs);
  }
 
  void InterPoly::genLagrangePoly(void){
 
      stringstream str;

      if (vRange.size() != vDomain.size())
         throw "The number of elements in the range and domain is different";
   
      if (vRange.size() < 2 )
         throw "Are you kidding me? do you wanna interpolate just less than 2 values?";

      for (int j=0; j != vRange.size(); j++){
          str << vRange[j] << "*"; 
          for (int i=0; i < vRange.size(); i++){
              if ( j!=i ){
                  str << "(x" << (vDomain[i] < 0 ? "+" : "-");
                  str << (vDomain[i] < 0 ? -vDomain[i] : vDomain[i]) << ")/"<< "("<< vDomain[j];
                  str <<  (vDomain[i] < 0 ? "+" : "-") ;
                  str <<  (vDomain[i] < 0 ? -vDomain[i] : vDomain[i]) <<")"; 
                  if ( (i+1) < vRange.size()) 
                    str<<"*";
              }
          }
          if ((j+1) < vRange.size() ) str << "+";
        }
        str << "1";
        sInterPoly = str.str();
        mAux = new EvalAux(str.str());
  }

  string InterPoly::getInterPolyStr(void){
      return sInterPoly;
  }

  FTL4S_BASETYPE InterPoly::Eval(FTL4S_BASETYPE v){
      return mAux->Evalx(v); 
  }
}
