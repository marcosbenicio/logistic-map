#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define lambda  3.569
#define xo      0.2
#define dt      1
#define time    10000

int main()
{
  int l,i,t;
  double xt,xt1;
  FILE *pta;
  
  pta=fopen("mapa_logistico_lambda3,569_xo0,2.txt","w");
  if(!pta) exit(0); 
  
  t=dt/time; 
   
  xt=xo;
  fprintf(pta,"#tempo\t\t\t\t\t#x\n");
  fprintf(pta,"0\t\t\t\t\t\t%0.6lf\n",xt);
  //l=1; 
  for(i=1;i<time;i++){
               
     xt1=lambda*xt*(1.0-xt);
     
     //if(i==l*10){
      
       fprintf(pta,"%i\t\t\t\t\t\t%.6lf\n",i,xt1);
       //l++;
     //}
     xt=xt1;
     
     
   }
   
   
   fclose(pta);
   
}   





