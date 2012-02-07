#include <FTL4S.h>

namespace FTL4S{

EvalAux::EvalAux(char *b){
 
  pEvaluator=evaluator_create(b);
  cExpr=b;

}

EvalAux::EvalAux(const char *b){

  pEvaluator=evaluator_create(const_cast<char *>(b));
  cExpr=const_cast<char *>(b);

}


EvalAux::EvalAux(string s){

  cExpr = const_cast<char*>(s.c_str());
  pEvaluator = evaluator_create(cExpr);

}

double EvalAux::Eval(char **n, double *v){

   return evaluator_evaluate(pEvaluator,1,n,v);

}

double EvalAux::Evalx(double v){

   return evaluator_evaluate_x(pEvaluator,v);

}

void EvalAux::Call(void (func)(double v), double st, double intv, double end){
   
  for( ; st < (end+intv) ; st += intv )
     func(Evalx(st));    

}
 
}//close FTL4S namespace
