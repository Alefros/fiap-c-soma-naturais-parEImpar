#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int controle=0, totalPar=0, totalImpar=0;


  for(controle=1;controle<=20000000;controle=controle+1)
  {
        if(controle%2==0){
            totalPar=totalPar+controle;
        }
        if(controle%2!=0){
            totalImpar=totalImpar+controle;
        }
}
 printf("impar total e : %d \npar total e : %d\n"  ,totalImpar,  totalPar);


  system("PAUSE");
  return 0;
}

