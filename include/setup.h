#include <Arduino.h>
#include <PrintNumber.h>


void SaludoInicial(void);

void setup() {

   pinMode(output_led, OUTPUT);
   pinMode(output_rele, OUTPUT);

  ////////////////////////////////////CONFIGURACION DEL LCD ////////////////////////////////////////////////////
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    lcd.init();      //Inicializa o LCD
    lcd.display();         //Enciende el muestreo de las Letras
    lcd.setBacklight(1); //Enciende la luz de fondo (0:off;1:on)

    //Associa cada segmento criado, a um número
    lcd.createChar(0,LT);
    lcd.createChar(1,UB);
    lcd.createChar(2,RT);
    lcd.createChar(3,LL);
    lcd.createChar(4,LB);
    lcd.createChar(5,LR);
    lcd.createChar(6,UMB);
    lcd.createChar(7,LMB);
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////


    SaludoInicial();

}


void SaludoInicial(){

    delay(100);
    lcd.setCursor(0, 0);
    lcd.print("***CDC Elctronics***");
    lcd.print("Multi-Voltimetro  v2");
    lcd.print("INICIO DE MEDICIONES");
    lcd.print("********************");

    delay(2000);


}