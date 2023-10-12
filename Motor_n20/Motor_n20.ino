#include <my_rp_4wd.h>
#include<Wire.h>
#include <EEPROM.h>
#define EEPROM_ADDR 0x50

unsigned long last_time = millis();
int sensor_maxs[] = {567, 601, 603, 800, 623, 633};
int sensor_mins[] = {650, 200, 109, 200, 150, 140};

bool none_set_f = false;

void setup()
  {
    Serial.begin(9600);
    sensor_set();
    mydisplay_background(black);
    mydisplay("MY-PIPER", 20, 50 ,2, white);
    
    servo(23, 90);
    
    _sw();

  fw_none( 50, 50, 700, 'l');
  set_f(3);
  tr(90, 240);
  set_b(3);
  fw( 60, 60, 500, 'l');
  //set_f(1);
  tr(90, 220);
  set_b(3);
  fw( 60, 60, 150, 'n');
  tr(90, 210);
  fw( 60, 60, 200, 'l');
  //set_f(1);
  tl( 90, 230);
  set_b(3); 
  fw( 60, 60, 400, 'l');
  mission();
  set_f(1);
  bw( 60, 60, 50, 'n');
  tl( 90, 250);
  set_b(4);
  fw_none( 40, 40, 1100, 'l');
  //set_f(1);
  tl( 90, 250);
  set_b(3);
  fw_none( 40, 40, 500, 'l');
  //set_f(1);
  tr(90, 220);
  set_b(4);
  fw( 60, 60, 300, 'l');
  mission();
  set_f(3);
  bw( 60, 60, 200, 'l');
  set_b(3);
  tr(90, 220);
  set_b(3);
  fw_none( 60, 60, 900, 'l');
  //set_f(1);
  tr( 90, 220);
  set_b(3);
  fw_none( 60, 60, 500, 'l');
  //set_f(1);
  tr(90, 210);
  fw( 50, 50, 200, 'l');
  //set_f(1);
  tr(90, 240);
  set_b(3);
  fw( 60, 60, 150, 'n');
  tl(90, 240);
  fw( 60, 60, 100, 'l');
  //set_f(1);
  tl(90, 265);
  set_b(3);
  fw( 60, 60, 500, 'l');
  //set_f(1);
  tl(90, 250);
  set_b(4);
  fw( 60, 60, 700, 'l');

/*
  fw_none( 50, 50, 1800, 'l');
  set_f(3);
  tr(90, 240);
  set_b(3);
  fw( 60, 60, 500, 'l');
  //set_f(1);
  tr(90, 220);
  set_b(3);
  fw( 60, 60, 150, 'n');
  tr(90, 210);
  fw( 60, 60, 200, 'l');
  //set_f(1);
  tl( 90, 240);
  set_b(3);
  fw( 60, 60, 400, 'l');
  delay(200);
  set_f(1);
  bw( 60, 60, 50, 'n');
  tl( 90, 250);
  set_b(4);
  fw_none( 40, 40, 1100, 'l');
  //set_f(1);
  tl( 90, 250);
  set_b(3);
  fw_none( 40, 40, 500, 'l');
  //set_f(1);
  tr(90, 220);
  set_b(4);
  fw( 90, 90, 400, 'l');
  //set_f(1);
  tr(90, 220);
  set_b(2);
  fw( 60, 60, 100, 'n');
  tl(90, 240);
  set_b(2);
  fw( 60, 60, 400, 'l');
  delay(200);
  set_f(4);
  bw( 65, 60, 500, 'l');
  set_b(1);
  tr(90, 240);
  fw( 60, 60, 250, 'n');
  tr(90, 250);
  fw( 60, 60, 100, 'l');
  delay(200);
  set_f(2);
  bw( 60, 60, 500, 'l');
  set_b(1);
  tl(90, 240);
  set_b(2);
  fw( 40, 40, 200, 'l');
  bw( 40, 50, 200, 'l');
  set_b(1);
  tr(90, 240);
  set_b(3);
  fw( 60, 60, 650, 'n');
  tl(90, 250);
  fw( 60, 60, 100, 'l');
  set_f(3);
  tr(90, 240);
  set_b(3);
  fw( 60, 60, 700, 'l');
  delay(200);
  bw( 70, 60, 700, 'l');
  delay(100);
  set_b(2);
  tr(90, 240);
  set_b(4);
  fw( 60, 75, 700, 'l');
  //set_f(1);
  tl(90, 265);
  set_b(4);
  fw( 60, 60, 500, 'l');
  //set_f(1);
  tl(90, 265);
  set_b(4);
  fw_none( 60, 60, 900, 'l');
  //set_f(1);
  tr( 90, 220);
  set_b(3);
  fw_none( 60, 60, 500, 'l');
  //set_f(1);
  tr(90, 240);
  fw( 50, 50, 200, 'l');
  //set_f(1);
  tr(90, 240);
  set_b(3);
  fw( 60, 60, 150, 'n');
  tl(90, 240);
  fw( 60, 60, 100, 'l');
  //set_f(1);
  tl(90, 265);
  set_b(3);
  fw( 60, 60, 700, 'l');
  //set_f(1);
  tl(90, 250);
  set_b(4);
  
  fw_none( 50, 50, 400, 'n');
  fw( 60, 60, 500, 'l');
*/
  }
void loop()
  {
    Serial.println(md_sensors(3));
  }
