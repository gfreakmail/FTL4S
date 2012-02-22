#ifndef _FTL4S_UTILS
#define _FTL4S_UTILS

namespace FTL4S{
 
 class Utils{
    public:
    static FTL4S_BASETYPE Fact(FTL4S_BASETYPE);
    static FTL4S_BASETYPE Comb(FTL4S_BASETYPE n,FTL4S_BASETYPE k){
        return Fact(n)/(Fact(k)*Fact(n-k));
    }
  };


}

#endif
