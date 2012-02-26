
#ifndef _FTL4S_VECTOR
#define _FTL4S_VECTOR 

namespace FTL4S{
   using namespace std; 
   class Vector : public vector<FTL4S_BASETYPE>{
      public: 
        void Add(FTL4S_BASETYPE);      
        void Add(int,...);
        Vector operator +(Vector&);
        Vector operator +(FTL4S_BASETYPE); 
        Vector operator +=(Vector&);
        Vector operator +=(FTL4S_BASETYPE); 
        Vector operator -(Vector&);
        Vector operator -(FTL4S_BASETYPE); 
        Vector operator -=(Vector&);
        Vector operator -=(FTL4S_BASETYPE); 
        Vector operator *(FTL4S_BASETYPE);        
        Vector operator *=(FTL4S_BASETYPE);
        Vector operator *(Vector&);
        Vector operator *=(Vector&);
        

   };

}

#endif
