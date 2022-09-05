#include <Arduino.h>

#include <Variables.h>
#include <setup.h>
#include <PrintMsg.h>


float LeerTension();


void loop() {

  delay(500);
  

  while(1){

    tension = LeerTension();
    
  
      PrintValue(tension);
      delay(1000);

  
  }//end while(1)



}


float LeerTension(){

  float value;
  float medida=0.0;
  int iteraciones=100;
  float resolucion = 1023.0;
  
  

  for (int i = 0; i < iteraciones; i++)
  {
    value = analogRead(adc_bat);

    medida = value + medida;
    delay(5);

  }
  //medida = (medida / resolucion);
  medida =  (medida / iteraciones) * (1/resolucion);


  return medida;

}