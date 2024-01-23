#ifndef LIPOMETER_H_
#define LIPOMETER_H_
#include <Arduino.h>

#define LIPOMETER_5S_V1 0  //

Class LipoMeter{
  public:
  void setHardware(uint8_t version);
  void setAddress(uint8_t address);
  void init();  //initialize lipometer
  
  private:
  
}



#endif
