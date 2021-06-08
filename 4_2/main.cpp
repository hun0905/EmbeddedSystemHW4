/*#include"mbed.h"
#include "bbcar.h"
//BufferedSerial pc(USBTX,USBRX); //tx,rx
BufferedSerial uart(D1,D0); //tx,rx
Ticker servo_ticker;
PwmOut pin5(D5), pin6(D6);
BBCar car(pin5, pin6, servo_ticker);
int main(){
   uart.set_baud(9600);
   bool stop = false;
   while(1){
      if(uart.readable()){
            char recv[1];
            uart.read(recv, sizeof(recv));
            if(recv[0] == 's')
            {
               //car.stop();
               car.goStraight(100);
               ThisThread::sleep_for(200ms);
               car.stop();
               
            }
            /*else if(recv[0] == 'l')
            {
               
               car.turn(100,0.3);
               ThisThread::sleep_for(200ms);
               car.stop();
            }
            else if(recv[0] == 'r')
            {
               
               car.turn(100,-0.3);
               ThisThread::sleep_for(200ms);
              / car.stop();
            
      }
      
   }
}
*/

#include "mbed.h"
#include "bbcar.h"
#include "bbcar_rpc.h"
Ticker servo_ticker;
PwmOut pin5(D5), pin6(D6);
BufferedSerial xbee(D10, D9);
BBCar car(pin5, pin6, servo_ticker);
int main() {
   char buf[256], outbuf[256];
   FILE *devin = fdopen(&xbee, "r");
   FILE *devout = fdopen(&xbee, "w");
   while (1) {
      memset(buf, 0, 256);
      for( int i = 0; ; i++ ) {
         char recv = fgetc(devin);
         if(recv == '\n') {
            printf("\r\n");
            break;
         }
         buf[i] = fputc(recv, devout);
      }
   RPC::call(buf, outbuf);
   }
}