#include<FTL4S.h>

namespace FTL4S{
  
  void Vector::Add(FTL4S_BASETYPE e){
       push_back(e);       
  } 
 
  Vector Vector::operator+(Vector &v){
       Vector ret;

       if (v.size() != size())
          throw "Vector dimensions must agree";
      
       for(int i=0; i!= size(); i++)
           ret.Add( at(i) +v[i]);
       
       return *this;
       
  }

  Vector Vector::operator+(FTL4S_BASETYPE v){
       Vector ret;
      
       for(int i=0; i!= size(); i++)
           ret.Add(at(i) + v );
       
       return *this;
       
  }

  Vector Vector::operator+=(Vector &v){

       if (v.size() != size())
          throw "Vector dimensions must agree";
      
       for(int i=0; i!= size(); i++)
	   at(i)=at(i)+v[i];

       return *this;
       
  }


  Vector Vector::operator+=(FTL4S_BASETYPE v){

      
       for(int i=0; i!= size(); i++)
	   at(i)=at(i)+v;

       return *this;
       
  }


  
  Vector Vector::operator-(Vector &v){
       Vector ret;

       if (v.size() != size())
          throw "Vector dimensions must agree";
      
       for(int i=0; i!= v.size(); i++)
           ret.Add( at(i) -v[i]);
       
       return *this;
       
  }

  Vector Vector::operator-(FTL4S_BASETYPE v){
       Vector ret;
      
       for(int i=0; i!= size(); i++)
           ret.Add(at(i) - v );
       
       return *this;
       
  }

  Vector Vector::operator-=(Vector &v){

       if (v.size() != size())
          throw "Vector dimensions must agree";
      
       for(int i=0; i!= size(); i++)
	   at(i)=at(i)-v[i];
       return *this;
       
  }

  Vector Vector::operator*(FTL4S_BASETYPE v){
       Vector ret;
      
       for(int i=0; i!= size(); i++)
           ret.Add(at(i) * v );
       
       return *this;
       
  }

  Vector Vector::operator*=(Vector &v){

       if (v.size() != size())
          throw "Vector dimensions must agree";
      
       for(int i=0; i!= size(); i++)
	   at(i)=at(i)*v[i];
       return *this;
       
  }

  Vector Vector::operator*=(FTL4S_BASETYPE v){

       for(int i=0; i!= size(); i++)
	   at(i)=at(i)*v;
       return *this;
       
  }


}
