#include <Arduino.h>

#include <Variables.h>
#include <setup.h>
#include <PrintMsg.h>


float LeerTension();


void loop() {

  delay(500);
  

  while(1){

    tension = LeerTension();
    
    
      digitalWrite(output_rele, HIGH); 
      PrintValue(tension);
      delay(1000);

    
    
  
  }//end while(1)



}


float LeerTension(){

  float value;
  float medida=0.0;
  int iteraciones=75;
  float resolucion = 1023.0;
  float constante = 20;        //esta constante esta asociada con el divisor resistivo (13.2k/R = 5)
  //float tension_diodo = 0.65;

  for (int i = 0; i < iteraciones; i++)
  {
    value = analogRead(adc_bat);

    medida = value + medida;
    delay(10);

  }
  
  medida =  (medida / iteraciones) * (1/resolucion) * constante;

  //medida = medida + tension_diodo;

  return medida;

}