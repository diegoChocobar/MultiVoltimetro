#include <Arduino.h>


void PrintValue(float x){

    unsigned long unidad,decena,centena,mil,diezmil;

    x=x*constante;

      //debemos mostrar 4 numero con un punto decimal
      float xx = 0.0; //numero a redondear
      x = x*10.0;
      xx = round(x);

      diezmil = xx/10000;
      mil = (xx - diezmil*10000) / 1000;
      centena =(xx - diezmil*10000 - mil*1000) / 100;
      decena = (xx - diezmil*10000 - mil*1000 - centena*100) / 10;
      unidad = (xx - diezmil*10000 - mil*1000 - centena*100 - decena*10);


      lcd.home();lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("******TENSION:******");
      mostranumero(pos1_unidad,unidad);
      mostranumero(pos1_decena,decena);
      if(diezmil==0 && mil==0 && centena==0){}else{mostranumero(pos1_centena,centena);}
      if(diezmil==0 && mil==0){}else{mostranumero(pos1_mil,mil);} 
      //if(diezmil != 0){mostranumero(pos1_diezmil,diezmil);} 
      lcd.setCursor(13,2);
      lcd.print("*");
      lcd.setCursor(0, 3);
      lcd.print("********Volts*******");

  delay(50);

}
