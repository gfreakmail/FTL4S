#include<FTL4S.h>
#include<gl/gl.h>
#include<gl/glut.h>
#include<iostream>
#include<cmath>
using namespace std;
using namespace FTL4S;


Vector x,y;
Bezier *b;
FTL4S_BASETYPE p1=1.30,p2=4.4;

void init(){
   glClearColor(0.0,0.0,0.0,0.0);

}


void makecurve(FTL4S_BASETYPE i, FTL4S_BASETYPE j){
    glVertex3f(i,j,0.0); 
}

void paint(){
   glClear( GL_COLOR_BUFFER_BIT ); 
   glColor3f(1.0,1.0,1.0);
   glBegin( GL_LINE_STRIP);
     b->EvalFunc(0.01,makecurve);
     p1-=.01;
     p2+=.01;
     x[1]=cos(p2);
     x[2]=cos(p1);
     y[1]=sin(p2);
     y[2]=sin(p1);
     y[3]=tan(p1);       
     delete b;
     b = new Bezier(x,y);  
   glEnd();
   glFlush();
   glutSwapBuffers();
   
}


int main(int argc, char **argv){
   
   glutInit(&argc,argv);

try {   
   x.Add(-0.5);
   x.Add(cos(p2));
   x.Add(0.0);
   x.Add(0.9);
   x.Add(cos(p1)); 
   x.Add(0.5);

//   x.Add(4  ,-0.5,cos(p2),0.1,cos(p1),0.5);
   //std::cout << x.size();      
   y.Add(0.0);
   y.Add(sin(p2));
   y.Add(0.9);
   y.Add(-0.9);
   y.Add(sin(p1));
   y.Add(0.0);

   b = new Bezier(x,y);
   glutCreateWindow("Prueba bezier");
   glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGBA); 
   init();
   glutDisplayFunc(paint);   
   glutIdleFunc(paint); 
   //cout << Utils::Comb(20,4);
//   cout << b.GetExpr() << endl;
   glutMainLoop();
} catch (const char *e){
  std::cout << e;
}

   return 0;



} 
