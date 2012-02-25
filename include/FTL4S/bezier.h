#ifndef _FTL4S_BEZIER
#define _FTL4S_BEZIER

namespace FTL4S {
   using namespace std;   
   class Bezier{
      
    public:
      Bezier(Vector&, Vector&);
      Bezier(Vector&, Vector&, Vector&);  
      //FTL4S_BASETYPE Eval(FTL4S_BASETYPE);
      EvalAux _Bezier(Vector &) const;    
      void EvalFunc( FTL4S_BASETYPE , void(*)(FTL4S_BASETYPE,FTL4S_BASETYPE));
      void EvalFunc( FTL4S_BASETYPE , void(*)(FTL4S_BASETYPE,FTL4S_BASETYPE,FTL4S_BASETYPE));

     private:
       EvalAux *Fx,*Fy,*Fz;
          
   };
 

}

#endif
