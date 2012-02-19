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

}
