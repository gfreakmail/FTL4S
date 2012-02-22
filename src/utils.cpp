#include<FTL4S.h>

namespace FTL4S{

  FTL4S_BASETYPE Utils::Fact( FTL4S_BASETYPE n)
  {
    
    FTL4S_BASETYPE ret=1; 
     
    if ( n < 0 )
       throw "Negative factorial?";
    
    while(n){
        ret *=n;
        n--;
    }
    return ret;
  }

  //n!/(r!(n-r))! 
 /* FTL4S_BASETYPE Utils::Comb(FTL4S_BASETYPE n, FTL4S_BASETYPE k){   
     return Fact(n)/(Fact(k)*Fact(n-k));
  }
 */

}
