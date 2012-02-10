#ifndef _FTL4S_INTERPOLY
#define _FT4S_INTERPOLY  

namespace FTL4S{

  using namespace std;

  class InterPoly{
      
      public:

          void genLagrangePoly(void);
          string getInterPolyStr(void);
          FTL4S_BASETYPE Eval(FTL4S_BASETYPE);
          void setDomain(vector<FTL4S_BASETYPE>);
          void setRange(vector<FTL4S_BASETYPE>);
          InterPoly(vector<FTL4S_BASETYPE> d, vector<FTL4S_BASETYPE> r): vDomain(d),vRange(r){} ;
          InterPoly(FTL4S_BASETYPE* ,FTL4S_BASETYPE *,FTL4S_BASETYPE*,FTL4S_BASETYPE*);
      private:
          string sInterPoly;
          EvalAux *mAux;
          vector<FTL4S_BASETYPE> vRange,vDomain; //domain an range values
         // EvalAux mEval;
          
  };

}
#endif
