#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define lambda  0.9
#define xo      0.01
#define dt      1
#define time    10000

int main()
{
  int i,t;
  double xt,xt1;
  FILE *pta;
  
  pta=fopen("mapa_logistico_atratores_lambda0,9_xo0,01.txt","w");
  if(!pta) exit(0); 
  
   
  xt=xo;
  fprintf(pta,"#x(t)\t\t\t\t\t\t#x(t+1)\n");
  fprintf(pta,"%.6lf\t\t\t\t\t\t0\n",xt);
  for(i=0;i<time;i++){
     
               
     xt1=lambda*xt*(1.0-xt);
     
     fprintf(pta,"%.6lf\t\t\t\t\t\t%.6lf\n",xt,xt1);
     fprintf(pta,"%0.6lf\t\t\t\t\t\t%0.6lf\n",xt1,xt1);
     xt=xt1;
     
     
     
   }
   
   
   fclose(pta);
   
}   



