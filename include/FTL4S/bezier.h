#ifndef _FTL4S_BEZIER
#define _FTL4S_BEZIER

namespace FTL4S{
   using namespace std;   
   class Bezier {
      
    public:
      Bezier(Vector&, Vector&);
      Bezier(Vector&, Vector&, Vector&);  
      Eval(FTL4S_BASETYPE);
      static const EvalAux _Bezier(int);    

      private:
        EvalAux  *func; //evaluators 
           
   };

}

#endif
