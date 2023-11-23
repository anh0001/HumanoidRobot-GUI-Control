#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP

#define ID_NUM 3

char Cmd;
    //ID 1 bahu kanan
    //ID 2 bahu kiri
    //ID 3 lengan atas kanan
    //ID 4 lengan atas kiri
    //ID 5 lengan bawah kanan
    //ID 6 lengan bawah kiri
    //ID 9 pinggul kanan  
    //ID 10 pinggul kiri
    //ID 11 paha kanan
    //ID 12 paha kiri
    //ID 13 lutut kanan
    //ID 14 lutut kiri
    //ID 15 tumit kanan
    //ID 16 tumit kiri
    //ID 17 telapak kanan
    //ID 18 telapak kiri

Dynamixel Dxl(DXL_BUS_SERIAL3);

void setup() {
  // Initialize the dynamixel bus:
  // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps  
  Dxl.begin(3);  
  for (int i = 1; i<=20; i++) {
  Dxl.jointMode(i);  
  }
}

void berdiriCoba(){
   delay(500);
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  (++ kanan)
   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri (++ kanan)
   //===========================================================
//   Dxl.setPosition(11, 652, 50); //ID 11 paha kanan  (++ maju)
//   Dxl.setPosition(12, 372, 50); //ID 12 paha kiri   (-- maju)
//   Dxl.setPosition(13, 822, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
//   Dxl.setPosition(14, 202, 50); //ID 14 lutut kiri    (tidak boleh >512)
//   Dxl.setPosition(15, 682, 50); //ID 15 tumit kanan  (++ maju)
//   Dxl.setPosition(16, 342, 50); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(11, 672, 50); //ID 11 paha kanan  (++ maju)
   Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 752, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 272, 50); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
   //===========================================================
   Dxl.setPosition(17, 532, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 492, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(500);
   Dxl.setPosition(1, 512, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 512, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 542, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 472, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 512, 50); //ID 5 lengan bawah kanan (maks 212)
   Dxl.setPosition(6, 512, 50); //ID 6 lengan bawah kiri (maks 812)      
}

void gerakA(){
  Dxl.setPosition(1, 812, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 212, 50); //ID 2 bahu kiri
  Dxl.setPosition(3, 812, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 212, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 512, 150); //ID 5 lengan bawah kanan (maks 212)
   Dxl.setPosition(6, 512, 150); //ID 6 lengan bawah kiri (maks 812)
   Dxl.setPosition(5, 312, 150); //ID 5 lengan bawah kanan (maks 212)
   Dxl.setPosition(6, 712, 150); //ID 6 lengan bawah kiri (maks 812)
  delay(2000);
  Dxl.setPosition(5, 712, 150); //ID 5 lengan bawah kanan (maks 212)
   Dxl.setPosition(6, 312, 150); //ID 6 lengan bawah kiri (maks 812)
 delay(2000);
}


//void berdiriBahu(){
//   Dxl.setPosition(1, 812, 50); //ID 1 bahu kanan (812, lurus ke depan)
//   Dxl.setPosition(2, 212, 50); //ID 2 bahu kiri (212, lurus ke depan)
//   Dxl.setPosition(3, 512, 50); //ID 3 lengan atas kanan
//   Dxl.setPosition(4, 512, 50); //ID 4 lengan atas kiri
//   Dxl.setPosition(5, 212, 50); //ID 5 lengan bawah kanan
//   Dxl.setPosition(6, 812, 50); //ID 6 lengan bawah kiri 
//   delay(500);
//   Dxl.setPosition(9, 512, 50); //ID 9 pinggul kanan  
//   Dxl.setPosition(10, 512, 50); //ID 10 pinggul kiri
//   Dxl.setPosition(11, 512, 100); //ID 11 paha kanan  (-- mundur)
//   Dxl.setPosition(12, 512, 100); //ID 12 paha kiri   (-- maju)
//   Dxl.setPosition(13, 512, 200); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
//   Dxl.setPosition(14, 512, 200); //ID 14 lutut kiri    (tidak boleh >512)
//   Dxl.setPosition(15, 512, 200); //ID 15 tumit kanan  (++ maju)
//   Dxl.setPosition(16, 512, 200); //ID 16 tumit kiri    (-- maju)
//   Dxl.setPosition(17, 512, 50); //ID 15 telapak kanan (++ miring kiri)
//   Dxl.setPosition(18, 512, 50); //ID 16 telapak kiri  (++ miring kiri)
//}
//
void berdiri(){
   Dxl.setPosition(1, 812, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 212, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 512, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 212, 50); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 812, 50); //ID 6 lengan bawah kiri 
   delay(500);
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  (++ kanan)
   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri (++ kanan)
   //===========================================================
   Dxl.setPosition(11, 672, 50); //ID 11 paha kanan  (++ maju)
   Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 752, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 272, 50); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
   //===========================================================
   Dxl.setPosition(17, 532, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 492, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(500);
}

void kuda2(){
   delay(500);
   Dxl.setPosition(9, 562, 50); //ID 9 pinggul kanan  (++ kanan)
   Dxl.setPosition(10, 462, 50); //ID 10 pinggul kiri (++ kanan)
   //===========================================================
   Dxl.setPosition(11, 672, 50); //ID 11 paha kanan  (++ maju)
   Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 752, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 272, 50); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
   //===========================================================
   Dxl.setPosition(17, 562, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 462, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(500);
   Dxl.setPosition(1, 412, 250); //ID 1 bahu kanan
   Dxl.setPosition(2, 612, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 542, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 472, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 612, 250); //ID 5 lengan bawah kanan (maks 212)
   Dxl.setPosition(6, 412, 50); //ID 6 lengan bawah kiri (maks 812)      
}

void pukulA(){
//  Dxl.setPosition(1, 412, 250); //ID 1 bahu kanan
//  Dxl.setPosition(5, 612, 250); //ID 5 lengan bawah kanan (maks 212)
//  delay(100);
  Dxl.setPosition(1, 812, 250); //ID 1 bahu kanan
  Dxl.setPosition(5, 312, 250); //ID 5 lengan bawah kanan (maks 212)
  delay(1000);
  Dxl.setPosition(1, 412, 250); //ID 1 bahu kanan
  Dxl.setPosition(5, 612, 250); //ID 5 lengan bawah kanan (maks 212)
}

void pukulB(){
//  Dxl.setPosition(1, 412, 250); //ID 1 bahu kanan
//  Dxl.setPosition(5, 612, 250); //ID 5 lengan bawah kanan (maks 212)
//  delay(100);
  Dxl.setPosition(2, 212, 250); //ID 1 bahu kanan
  Dxl.setPosition(6, 812, 250); //ID 5 lengan bawah kanan (maks 212)
  delay(1000);
  Dxl.setPosition(2, 612, 250); //ID 1 bahu kanan
  Dxl.setPosition(6, 412, 250); //ID 5 lengan bawah kanan (maks 212)
}

void kananA(){
   Dxl.setPosition(1, 512, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 512, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 512, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 512, 50); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 512, 50); //ID 6 lengan bawah kiri 
   delay(500);
   Dxl.setPosition(9, 512, 50); //ID 9 pinggul kanan  
   Dxl.setPosition(10, 512, 50); //ID 10 pinggul kiri
   
   Dxl.setPosition(11, 662, 100); //ID 11 paha kanan  (++ maju) (+50)
   Dxl.setPosition(12, 412, 100); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 712, 200); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 362, 200); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 582, 200); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 422, 200); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(17, 512, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 512, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(500);
}

void kiriA(){
   Dxl.setPosition(1, 512, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 512, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 512, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 512, 50); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 512, 50); //ID 6 lengan bawah kiri 
   delay(500);
   Dxl.setPosition(9, 512, 50); //ID 9 pinggul kanan  
   Dxl.setPosition(10, 512, 50); //ID 10 pinggul kiri
   Dxl.setPosition(11, 612, 50); //ID 11 paha kanan  (-- mundur)
   Dxl.setPosition(12, 412, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 662, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 362, 50); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 582, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 442, 50); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(17, 512, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 512, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(500);
}

void loop() {
  berdiriCoba();
  delay(1000);
  gerakA();
  delay(2000);
  berdiriCoba();
  delay(3000);
  pukulA();
  delay(2000);
  pukulB();
//  if(SerialUSB.available()){
//    Cmd = SerialUSB.read();
//    if(Cmd == 'A'){
//      berdiriCoba();
//      for(int i=0; i<5; i++){
//        gerakA();
//      }
//      berdiriCoba();
//    }else if(Cmd == 'B'){
//        kuda2();
//        delay(500);
//        pukulA();
//        delay(500);
//        kuda2();
//    }else if(Cmd == 'C'){
//        kuda2();
//        delay(500);
//        pukulB();
//        delay(500);
//        kuda2();
//    } 
//  }
}
