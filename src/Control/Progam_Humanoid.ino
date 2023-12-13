#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
#define DXL_BUS_SERIAL2 2  //Dynamixel on Serial2(USART2)  <-LN101,BT210
#define DXL_BUS_SERIAL3 3  //Dynamixel on Serial3(USART3)  <-OpenCM 485EXP

#define ID_NUM 3 
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
  berdiri();
  delay(3000);
}

void berdiri(){
   Dxl.setPosition(1, 512, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 512, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 512, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 50); //ID 4 lengan atas kiri
  
   Dxl.setPosition(5, 512, 50); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 512, 50); //ID 6 lengan bawah kiri
   delay(500);
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  
   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri
   //===================================================
   Dxl.setPosition(11, 672, 50); //ID 11 paha kanan  (-- mundur)
   Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 752, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 272, 50); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(17, 532, 50); //ID 17 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 492, 50); //ID 18 telapak kiri  (++ miring kiri)
   delay(500);
}

void lambai(){
    
   Dxl.setPosition(1, 852, 50); //ID 1 bahu kanan
   Dxl.setPosition(2, 512, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 822, 50); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 712, 200); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 512, 50); //ID 6 lengan bawah kiri
   delay(500);
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  
   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri
   //===================================================
   Dxl.setPosition(11, 672, 50); //ID 11 paha kanan  (-- mundur)
   Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 752, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 272, 50); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(17, 532, 50); //ID 17 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 492, 50); //ID 18 telapak kiri  (++ miring kiri)
   delay(500);
    }


void lambai2(){
     for(int i=1; i<=5; i++){
   Dxl.setPosition(5, 412, 200); //ID 5 lengan bawah kanan
    delay(800);
   
}
}
void hormat(){
   Dxl.setPosition(1, 672, 100); //ID 1 bahu kanan
   Dxl.setPosition(2, 512, 50); //ID 2 bahu kiri
   Dxl.setPosition(3, 722, 110); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 50); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 752, 70); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 512, 50); //ID 6 lengan bawah kiri
   delay(1000);
}

void squad(){
  //posisi awal
    for(int i=1; i<=5; i++){
   Dxl.setPosition(1, 842, 100); //ID 1 bahu kanan
   Dxl.setPosition(2, 182, 100); //ID 2 bahu kiri
   Dxl.setPosition(3, 512, 100); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 100); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 192, 100); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 832, 100); //ID 6 lengan bawah kiri
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  
   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri
   //==========================================================
   Dxl.setPosition(11, 712, 50); //ID 11 paha kanan  (-- mundur)
   Dxl.setPosition(12, 322, 50); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 802, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 222, 50); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(17, 532, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 492, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(1000);
   //posisi jongkok
   Dxl.setPosition(1, 842, 100); //ID 1 bahu kanan
   Dxl.setPosition(2, 182, 100); //ID 2 bahu kiri
   Dxl.setPosition(3, 512, 100); //ID 3 lengan atas kanan
   Dxl.setPosition(4, 512, 100); //ID 4 lengan atas kiri
   Dxl.setPosition(5, 192, 100); //ID 5 lengan bawah kanan
   Dxl.setPosition(6, 832, 100); //ID 6 lengan bawah kiri
   //==========================================================
   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  
   Dxl.setPosition(10,492, 50); //ID 10 pinggul kiri
   //==========================================================
   Dxl.setPosition(11, 752, 70); //ID 11 paha kanan  (-- mundur)
   Dxl.setPosition(12, 292, 70); //ID 12 paha kiri   (-- maju)
   Dxl.setPosition(13, 822, 70); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
   Dxl.setPosition(14, 202, 70); //ID 14 lutut kiri    (tidak boleh >512)
   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
   Dxl.setPosition(17, 532, 50); //ID 15 telapak kanan (++ miring kiri)
   Dxl.setPosition(18, 492, 50); //ID 16 telapak kiri  (++ miring kiri)
   delay(1000);
   //posisi berdiri
//   Dxl.setPosition(1, 512, 70); //ID 1 bahu kanan
//   Dxl.setPosition(2, 512, 70); //ID 2 bahu kiri
//   Dxl.setPosition(3, 512, 70); //ID 3 lengan atas kanan
//   Dxl.setPosition(4, 512, 70); //ID 4 lengan atas kiri
//   Dxl.setPosition(5, 512, 70); //ID 5 lengan bawah kanan
//   Dxl.setPosition(6, 512, 70); //ID 6 lengan bawah kiri
//   delay(500);
//   Dxl.setPosition(9, 532, 50); //ID 9 pinggul kanan  
//   Dxl.setPosition(10, 492, 50); //ID 10 pinggul kiri
//   //===================================================
//   Dxl.setPosition(11, 672, 50); //ID 11 paha kanan  (-- mundur)
//   Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju)
//   Dxl.setPosition(13, 752, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
//   Dxl.setPosition(14, 272, 50); //ID 14 lutut kiri    (tidak boleh >512)
//   Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
//   Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju)
//   Dxl.setPosition(17, 532, 50); //ID 17 telapak kanan (++ miring kiri)
//   Dxl.setPosition(18, 492, 50); //ID 18 telapak kiri  (++ miring kiri)
//   delay(2000);
    }
}


void jalanA(){
  //setup
    delay(250);
  Dxl.setPosition(13, 622, 50); //ID 13 lutut kanan   (++ mundur), tidak boleh <512
  Dxl.setPosition(14, 302, 50); //ID 14 lutut kiri    (++ mundur), (tidak boleh >512) 
  Dxl.setPosition(17, 572, 50); //ID 17 telapak kanan (++ miring kiri) 
  Dxl.setPosition(18, 552, 50); //ID 18 telapak kiri  (++ miring kiri) 
  Dxl.setPosition(15, 612, 50); //ID 15 tumit kanan  (++ maju)
  Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri   (-- maju)
  delay(500);
  Dxl.setPosition(13, 622, 50); //ID 13 lutut kanan   (++ mundur), (tidak boleh >512)
  Dxl.setPosition(14, 302, 50); //ID 14 lutut kiri    (++ mundur), (tidak boleh >512)
  Dxl.setPosition(15, 412, 50); //ID 15 tumit kanan   (++ maju)
  Dxl.setPosition(16, 412, 50); //ID 16 tumit kiri    (-- maju) 
  delay(500);
  //paha kanan maju
  Dxl.setPosition(11, 702, 50); //ID 11 paha kanan  (-- mundur) 
  Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju) 
  Dxl.setPosition(15, 512, 100); //ID 15 tumit kanan   (++ maju)
  Dxl.setPosition(16, 412, 100); //ID 16 tumit kiri    (-- maju)
  delay(500);
  //menapak kanan normal
  Dxl.setPosition(17, 522, 50); //ID 17 telapak kanan (++ miring kiri)
  Dxl.setPosition(18, 502, 50); //ID 18 telapak kiri  (++ miring kiri)
  Dxl.setPosition(15, 532, 100); //ID 15 tumit kanan   (++ maju)
  Dxl.setPosition(16, 392, 100); //ID 16 tumit kiri    (-- maju) 
  delay(500);
  //keseimbangan
  Dxl.setPosition(11, 722, 25); //ID 11 paha kanan  (-- mundur) 
  Dxl.setPosition(12, 302, 25); //ID 12 paha kiri   (-- maju)
  delay(800);
  Dxl.setPosition(17, 472, 50); //ID 17 telapak kanan (++ miring kiri) 
  Dxl.setPosition(18, 432, 50); //ID 18 telapak kiri  (++ miring kiri) 
  Dxl.setPosition(15, 532, 150); //ID 15 tumit kanan   (++ maju)
  Dxl.setPosition(16, 492, 150); //ID 16 tumit kiri    (-- maju) 
  delay(500);
  Dxl.setPosition(15, 532, 150); //ID 15 tumit kanan   (++ maju) 
  Dxl.setPosition(16, 492, 150); //ID 16 tumit kiri    (-- maju) 
  delay(500);
  Dxl.setPosition(13, 622, 50); //ID 13 lutut kanan    (++ mundur), (tidak boleh >512)
  Dxl.setPosition(14, 402, 100); //ID 14 lutut kiri    (++ mundur), (tidak boleh >512)
  delay(500);
  //menapak kaki kiri
  Dxl.setPosition(17, 532, 50); //ID 17 telapak kanan (++ miring kiri) 
  Dxl.setPosition(18, 492, 50); //ID 18 telapak kiri  (++ miring kiri) 
  delay(500);
  Dxl.setPosition(11, 672, 50); //ID 11 paha kanan  (-- mundur) 
  Dxl.setPosition(12, 352, 50); //ID 12 paha kiri   (-- maju) 
  Dxl.setPosition(13, 622, 50); //ID 13 lutut kanan    (++ mundur), (tidak boleh >512)
  Dxl.setPosition(14, 402, 50); //ID 14 lutut kiri     (++ mundur), (tidak boleh >512)
  Dxl.setPosition(15, 532, 100); //ID 15 tumit kanan   (++ maju)
  Dxl.setPosition(16, 502, 100); //ID 16 tumit kiri    (-- maju)
}

void loop() 
{
    berdiri();
    delay(500); 
//  char led = 0;
//  squad();
//  delay(1000);
//  lambai();
//  delay(200);
//  lambai2();
//  delay(200);
//  jalanA();
//  delay(1000);
  if (SerialUSB.available())
  {
  
  
    char Cmd = SerialUSB.read();
    if(Cmd == 'B'){
      berdiri();
      delay(3000);
 
    }else if(Cmd == 'H'){
        hormat();
        delay(1000);
        berdiri();
        
    }else if(Cmd == 'S'){
        squad();
        delay(2000);
        berdiri();
   
    }else if(Cmd == 'J'){
        jalanA();
        delay(250);
        berdiri();
        
     }else if(Cmd == 'L'){
        lambai();
        delay(1000);
        lambai2();
        delay(1000);
        berdiri();    
    }
  }
}
