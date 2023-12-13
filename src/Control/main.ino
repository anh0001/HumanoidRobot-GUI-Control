
#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP`

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
  Dxl.begin(3);  
  for (int i = 1; i<=20; i++) {
  Dxl.jointMode(i);  
  }
}

void initial(){
   delay(500);
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  (++ kanan)
   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri (++ kanan)
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


void slebew(){
   delay(500);
   Dxl.setPosition(15, 632, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 512, 50); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  (++ kanan)
   Dxl.setPosition(10, 512, 50); //ID 10 pinggul kiri (++ kanan)
   Dxl.setPosition(11, 692, 50); //ID 11 paha kanan  (++ maju)
   Dxl.setPosition(12, 512, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 752, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 512, 50); //ID 14 lutut kiri    (tidak boleh >512)
   
   //===========================================================
   Dxl.setPosition(17, 492, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 472, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(500);
   Dxl.setPosition(1, 512, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 512, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 812, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 212, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 792, 50); //ID 5 lengan bawah kanan (maks 212)
   Dxl.setPosition(6, 792, 50); //ID 6 lengan bawah kiri (maks 812)      
}

void haloDek(){
  //===================================================
  Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  (++ kanan)
   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri (++ kanan)
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
   //==================================================================
  Dxl.setPosition(1, 812, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 212, 50); //ID 2 bahu kiri
  Dxl.setPosition(3, 812, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 212, 50); //ID 4 lengan atas kiri
//   Dxl.setPosition(5, 512, 150); //ID 5 lengan bawah kanan (maks 212)
//   Dxl.setPosition(6, 512, 150); //ID 6 lengan bawah kiri (maks 812)
}

void haloDada2(){
  for(int i=1; i<=5; i++){
     Dxl.setPosition(5, 312, 150); //ID 5 lengan bawah kanan (maks 212)
     Dxl.setPosition(6, 712, 150); //ID 6 lengan bawah kiri (maks 812)
     delay(1000);
     Dxl.setPosition(5, 712, 150); //ID 5 lengan bawah kanan (maks 212)
     Dxl.setPosition(6, 312, 150); //ID 6 lengan bawah kiri (maks 812)
     delay(1000);
   }
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
  Dxl.setPosition(3, 542, 250); //ID 3 lengan atas kanan
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
  Dxl.setPosition(4, 472, 50); //ID 4 lengan atas kiri
  Dxl.setPosition(6, 812, 250); //ID 5 lengan bawah kanan (maks 212)
  delay(1000);
  Dxl.setPosition(2, 612, 250); //ID 1 bahu kanan
  Dxl.setPosition(6, 412, 250); //ID 5 lengan bawah kanan (maks 212)
}

void loop() {
  initial();
//=========================================================
//komunikasi serial//
//=========================================================
  while(SerialUSB.available()){
    Cmd = SerialUSB.read();
    if(Cmd == 'w' || Cmd == 'W'){
      haloDek();
      delay(3000);
      haloDada2();
      delay(2000);
    }else if(Cmd == 'd' || Cmd == 'D'){
        kuda2();
        delay(500);
        pukulA();
        delay(500);
        kuda2();
    }else if(Cmd == 'a' || Cmd == 'A'){
        kuda2();
        delay(500);
        pukulB();
        delay(500);
        kuda2();
    }else if(Cmd == 's' || Cmd == 'S')
        slebew();
        delay(2000);
  }
//=========================================================
//komunikasi serial//
//=========================================================
}
