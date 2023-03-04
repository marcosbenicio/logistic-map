#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define lambda  0.9  // the logistic map parameter
#define xo      0.01 // initial condition for x
#define dt      1    // time step
#define time    10000 // number of time steps

int main()
{
  int i,t;
  double xt,xt1;   // current and next state of x
  FILE *pta;       // file pointer to output data to file
  
  pta=fopen("mapa_logistico_atratores_lambda0,9_xo0,01.txt","w");  // open file for writing data
  if(!pta) exit(0); // check if the file was opened successfully, otherwise exit
  
   
  xt=xo;  // set initial condition
  fprintf(pta,"#x(t)\t\t\t\t\t\t#x(t+1)\n"); // header of the file
  fprintf(pta,"%.6lf\t\t\t\t\t\t0\n",xt);   // write initial condition
  for(i=0;i<time;i++){   // iterate through time steps
               
     xt1=lambda*xt*(1.0-xt); // calculate the next state of x using the logistic map equation
     
     fprintf(pta,"%.6lf\t\t\t\t\t\t%.6lf\n",xt,xt1); // write current and next states to file
     fprintf(pta,"%0.6lf\t\t\t\t\t\t%0.6lf\n",xt1,xt1); // write next state twice to plot a vertical line
     xt=xt1;  // update current state of x
     
   }
   
   
   fclose(pta);  // close file
  
} 




