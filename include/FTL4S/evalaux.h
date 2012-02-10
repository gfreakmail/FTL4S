#ifndef _FTL4S_EVALAUX
#define _FTL4S_EVALAUX 

namespace FTL4S{

 using namespace std;
 class EvalAux{
    
    public:

      void SetExpr(char *);
      void SetExpr(const char*);    
      void SetExpr(string);
      double Eval(char **, double*);
      double Evalx(double); 
      void Call( void(*)(double),double,double,double);  
      EvalAux(char *);
      EvalAux(string);
      EvalAux(const char*);
      
    private:
      void GetVars(void);
      void *pEvaluator;     
      char *cExpr;
      int  iVarNumb; 
      char **pVarNames;  
 };

}
#endif
