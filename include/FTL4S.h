#include<vector>
#include<matheval.h>
#include<string>
#include<string>
#include<exception>
#define FTL4S_BASETYPE double
#define AR_PASS(x) x,(x+sizeof(x)/sizeof(FTL4S_BASETYPE))
#define destroy(x) if(x) delete x
#include<FTL4S/utils.h>
#include<FTL4S/vector.h>
#include<FTL4S/evalaux.h>
#include<FTL4S/interpoly.h>
#include<FTL4S/bezier.h>
