#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

#define lambda  3.569 // define a constant named lambda and give it the value of 3.569
#define xo      0.2   // define a constant named xo and give it the value of 0.2
#define dt      1     // define a constant named dt and give it the value of 1
#define time    10000 // define a constant named time and give it the value of 10000

int main()
{
  int l,i,t;
  double xt,xt1;
  FILE *pta; // define a pointer to a file

  pta=fopen("mapa_logistico_lambda3,569_xo0,2.txt","w"); // open a file named "mapa_logistico_lambda3,569_xo0,2.txt" to write into it
  if(!pta) exit(0); // if there was an error opening the file, exit the program

  t=dt/time; // calculate the time step

  xt=xo; // set the initial value of x to xo
  fprintf(pta,"#tempo\t\t\t\t\t#x\n"); // write the headers to the file
  fprintf(pta,"0\t\t\t\t\t\t%0.6lf\n",xt); // write the initial values to the file
  //l=1; // this variable is not used
  for(i=1;i<time;i++){
     xt1=lambda*xt*(1.0-xt); // calculate the next value of x

     //if(i==l*10){ // this condition is commented out
      
       fprintf(pta,"%i\t\t\t\t\t\t%.6lf\n",i,xt1); // write the current time and x value to the file
       //l++; // this variable is not used
     //}
     xt=xt1; // set the current value of x to the next value

   }

   fclose(pta); // close the file

   return 0; // exit the program
}





