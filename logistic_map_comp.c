#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define lambda  3.1
#define xo      0.2
#define dt      1                  // Define a constant value for dt
#define time    10000              // Define a constant value for time

int main() {                       // Main function

  int l,i,t;                       // Declare integer variables l, i, and t
  double xt,xt1;                   // Declare double variables xt and xt1
  FILE *pta;                       // Declare a pointer variable called pta for FILE type
  
  pta=fopen("mapa_logistico_atratores_lambda3,1_xo0,2.txt","w");  // Open a file called "mapa_logistico_atratores_lambda3,1_xo0,2.txt" for writing
  if(!pta) exit(0);               // If the file couldn't be opened, exit the program
  
  t=dt/time;                       // Calculate the value of t as dt divided by time
   
  xt=xo;                           // Initialize xt with some unknown value xo
  fprintf(pta,"#tempo\t\t\t\t\t#x\n");  // Write a header line to the file
  fprintf(pta,"0\t\t\t\t\t\t%0.6lf\n",xt);  // Write the initial value of xt to the file
  
  //l=1;                          // Commented out line that seems to initialize l to 1
  for(i=1;i<time;i++){            // Loop through i from 1 to time-1
               
     xt1=lambda*xt*(1.0-xt);      // Calculate the next value of xt1 using the logistic map equation with lambda and xt
     
     //if(i==l*10){              // Commented out code that checks if i is a multiple of 10
      //fprintf(pta,"%i\t\t\t\t\t\t%.6lf\n",i,xt1);  // Commented out code that writes the value of xt1 to the file
       //l++;                    // Commented out code that increments l
     //}
     xt=xt1;                      // Set xt to the new value xt1
     
   }
   
   fclose(pta);                    // Close the file
}

