#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

// Define the initial value of x, time step, and maximum time for the simulation
#define xo       0.2
#define dt       1
#define time     1000

// Define the increment in lambda and the initial and final values for it
#define dlambda  0.0001 
#define lambda_i 0.0 
#define lambda_f 4.0

// Define the maximum number of points to be plotted for each lambda value
#define max_b    40

int main()
{
  int i,l;
  double lambda,xt,xt1;
  FILE *pta;
  
  // Open the output file for writing
  pta=fopen("mapa_bifurcacao.txt","w");
  if(!pta) exit(0); 
  
  // Loop over lambda values, incrementing by dlambda each time
  fprintf(pta,"#lambda\t\t\t\t\t#x_inf\n"); 
  for(lambda=lambda_i;lambda<=lambda_f;lambda+=dlambda){
      
      // Set initial value of x
      xt=xo;
      
      // Loop over time steps
      for(i=0;i<time;i++){
          
          // Calculate next value of x
   	      xt1=lambda*xt*(1.0-xt);
         
         // If we are near the end of the simulation, plot the last max_b points
         if(i>time-max_b){
           fprintf(pta,"%.6lf\t\t\t\t\t\t%.6lf\n",lambda,xt1);
         }
         
         // Update the value of x
         xt=xt1;
     }      
  }
  
  // Close the output file
  fclose(pta);
   
} 
 

