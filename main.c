#include <18F4550.h>
#fuses HS,NOWDT
#use delay(crystal=20000000)
#use fast_io(b)

/*------variables globales------*/
int variable1;
float variable2;
/*------Fin variables globales------*/


void funcion(){
   /*--- variables internas -----*/

   //aqui escribo una secuencia de tareas
}

int conta=0;
void main(){
   /*--- variables internas -----*/
   Set_tris_b(0b00000000);
   output_b(0b00000000);
   while(true)
   {
      output_b(conta);
      delay_ms(1000);
      conta++;
      if(conta==8) conta=0;
   }

}
