
#include <SPI.h>
#define DROVERPIN 27
#define IO_RESETPIN 29
#define CSPIN 4
#define OSKPIN 39
#define PR0PIN 41
#define PR1PIN 43
#define IO_UPDATEPIN  45
#define PR2PIN 47
#define SYNC_CLKPIN 49
#define MASTER_RESETPIN 51
#define PLL_LOCKPIN 53

void setup() {
  // put your setup code here, to run once:
  pinMode(DROVERPIN, INPUT);
  pinMode(IO_RESETPIN, OUTPUT);
  pinMode(OSKPIN, OUTPUT);
  pinMode(PR0PIN, OUTPUT);
  pinMode(PR1PIN, OUTPUT);
  pinMode(IO_UPDATEPIN, OUTPUT);
  pinMode(PR2PIN, OUTPUT);
  pinMode(SYNC_CLKPIN,INPUT);
  pinMode(MASTER_RESETPIN,OUTPUT);
  pinMode(PLL_LOCKPIN, INPUT);
  
  digitalWrite(MASTER_RESETPIN,HIGH);
  digitalWrite(MASTER_RESETPIN,LOW);
  digitalWrite(PR0PIN,LOW);
  digitalWrite(PR1PIN,LOW);
  digitalWrite(PR2PIN,LOW);
  digitalWrite(IO_RESETPIN,LOW);
  digitalWrite(OSKPIN,HIGH);
  
  
  
   SPI.begin(CSPIN);
  SPI.setClockDivider(CSPIN,8);
  SPI.setDataMode(CSPIN,SPI_MODE0);
  SPI.setBitOrder(CSPIN,MSBFIRST);
  
  SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
   SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x80,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x00,SPI_LAST);
  
  
  delay(20);
  digitalWrite(IO_UPDATEPIN,LOW);
  delay(80);
  digitalWrite(IO_UPDATEPIN,HIGH);
  delay(80);
  digitalWrite(IO_UPDATEPIN,LOW);
  delay(20);
  
  
  
  
  
  
  
  
  SPI.begin(CSPIN);
  SPI.setClockDivider(CSPIN,8);
  SPI.setDataMode(CSPIN,SPI_MODE0);
  SPI.setBitOrder(CSPIN,MSBFIRST);
  
  SPI.transfer(CSPIN,0x01,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x01,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x40,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x08,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x20,SPI_LAST);
 // SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
//  SPI.transfer(CSPIN,0x10,SPI_LAST);
  
  delay(20);
  digitalWrite(IO_UPDATEPIN,LOW);
  delay(80);
  digitalWrite(IO_UPDATEPIN,HIGH);
  delay(80);
  digitalWrite(IO_UPDATEPIN,LOW);
  delay(20);
  
  SPI.begin(CSPIN);
  SPI.setClockDivider(CSPIN,8);
  SPI.setDataMode(CSPIN,SPI_MODE0);
  SPI.setBitOrder(CSPIN,MSBFIRST);
  SPI.transfer(CSPIN,0x02,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x05,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x20,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x41,SPI_CONTINUE);
  SPI.transfer(CSPIN,0xC8,SPI_LAST);
  
  digitalWrite(IO_UPDATEPIN,LOW);
  delay(80);
  digitalWrite(IO_UPDATEPIN,HIGH);
  delay(80);
  digitalWrite(IO_UPDATEPIN,LOW);
  
  SPI.begin(CSPIN);
  SPI.setClockDivider(CSPIN,8);
  SPI.setDataMode(CSPIN,SPI_MODE0);
  SPI.setBitOrder(CSPIN,MSBFIRST);
  SPI.transfer(CSPIN,0x03,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x7F,SPI_LAST);
  
  digitalWrite(IO_UPDATEPIN,LOW);
  delay(80);
  digitalWrite(IO_UPDATEPIN,HIGH);
  delay(80);
  digitalWrite(IO_UPDATEPIN,LOW);
  
  
  
  
  
  SPI.begin(CSPIN);
  SPI.setClockDivider(CSPIN,8);
  SPI.setDataMode(CSPIN,SPI_MODE0);
  SPI.setBitOrder(CSPIN,MSBFIRST);
  SPI.transfer(CSPIN,0x0E,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x3F,SPI_CONTINUE);
  SPI.transfer(CSPIN,0xFF,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x00,SPI_CONTINUE);
  SPI.transfer(CSPIN,0x0C,SPI_CONTINUE);
  SPI.transfer(CSPIN,0xCC,SPI_CONTINUE);
  SPI.transfer(CSPIN,0xCC,SPI_CONTINUE);
  SPI.transfer(CSPIN,0xCD,SPI_LAST);
  
  digitalWrite(IO_UPDATEPIN,LOW);
  delay(80);
  digitalWrite(IO_UPDATEPIN,HIGH);
  delay(80);
  digitalWrite(IO_UPDATEPIN,LOW);
  
}

void loop() {
digitalWrite(OSKPIN, 0);
delay(1000);
digitalWrite(OSKPIN, 1);
delay(1000);
}
