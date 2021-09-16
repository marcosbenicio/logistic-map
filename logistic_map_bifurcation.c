#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define xo       0.2
#define dt       1
#define time     1000
#define dlambda  0.0001 
#define lambda_i 0.0 
#define lambda_f 4.0
#define max_b    40
int main()
{
  int i,l;
  double lambda,xt,xt1;
  FILE *pta;
  
  pta=fopen("mapa_bifurcacao.txt","w");
  if(!pta) exit(0); 
  
  
  fprintf(pta,"#lambda\t\t\t\t\t#x_inf\n"); 
  for(lambda=lambda_i;lambda<=lambda_f;lambda+=dlambda){

      xt=xo;
      for(i=0;i<time;i++){              
   	     xt1=lambda*xt*(1.0-xt);

         if(i>time-max_b){
           fprintf(pta,"%.6lf\t\t\t\t\t\t%.6lf\n",lambda,xt1);
         }
         
         xt=xt1;
     }      
  }
  fclose(pta);
   
}   

