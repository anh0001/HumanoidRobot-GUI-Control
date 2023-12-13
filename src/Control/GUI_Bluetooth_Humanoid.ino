#define DXL_BUS_SERIAL3 3
#define ID_NUM 1
Dynamixel Dxl(DXL_BUS_SERIAL3);
unsigned long previousTime = 0;
const long interval = 100;

void setup() {
  pinMode(D18, OUTPUT);
  pinMode(D19, OUTPUT);
  pinMode(D20, OUTPUT);
  Dxl.begin(3);
  Serial2.begin(9600);
}

void berdiri(){
  Dxl.setPosition(1, 512, 50); //ID 1 dynamixel moves to position 1
  Dxl.setPosition(2, 512, 50); //ID 1 dynamixel moves to position 1
  Dxl.setPosition(3, 562, 50); //tambah tinggi tambah melebar
  Dxl.setPosition(4, 462, 50); //tambah rendah tambah melebar
  Dxl.setPosition(5, 532, 50); //tambah tinggi tambah maju
  Dxl.setPosition(6, 492, 50); //tambah rendah tambah maju
  delay(500);
  Dxl.setPosition(15, 612, 50); //tambah tinggi tambah kedepan
  Dxl.setPosition(16, 412, 50); //tambah rendah tambah kedepan
  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk
  Dxl.setPosition(12, 352, 50); //tambah tinggi tambah mundur
  Dxl.setPosition(11, 672, 50); //tambah tinggi tambah maju
  delay(500);
  Dxl.setPosition(10, 502, 50); //tambah rendah tambah melebar
  Dxl.setPosition(9, 522, 50); //tambah tinggi tambah melebar
  delay(500);
  Dxl.setPosition(17, 522, 50); //ID 1 dynamixel moves to position 1
  Dxl.setPosition(18, 502, 50); //ID 1 dynamixel moves to position 1 
  delay(500);
  
  Serial2.println("ROLL:56.4,PITCH:37.2,YAW:63.4,98,277,1023,227,227,908,1023,512,4095,231,312,512");
  Serial2.println("ROLL:99.2,PITCH:90.3,YAW:57.5,255,344,4095,500,128,512,512,1023,512,220,512,1023");
  Serial2.println("ROLL:78.1,PITCH:65.3,YAW:34.9,100,999,1234,890,100,1023,512,1023,512,4095,1023,785");
}

void duduk(){
  delay(3000);
  Dxl.setPosition(13, 972, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 52, 50); //tambah rendah tambah nekuk(302)
  delay(500);
  Dxl.setPosition(11, 872, 50); //tambah tinggi tambah maju(672)
  Dxl.setPosition(12, 152, 50); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(15, 662, 50); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 362, 50); //tambah rendah tambah kedepan(412)
  Serial2.println("ROLL:78.1,PITCH:65.3,YAW:34.9,100,999,1234,890,100,1023,512,1023,512,4095,1023,785");
  Serial2.println("ROLL:56.4,PITCH:37.2,YAW:63.4,98,277,1023,227,227,908,1023,512,4095,231,312,512");
  Serial2.println("ROLL:99.2,PITCH:90.3,YAW:57.5,255,344,4095,500,128,512,512,1023,512,220,512,1023");
}

void jalan(){
  delay(250);
  Dxl.setPosition(13, 622, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(17, 572, 50); //makin tinggi maskin ke dalam(522)
  Dxl.setPosition(18, 552, 50); //makin rendah makin kedalam(502)
  Dxl.setPosition(15, 612, 50); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 412, 50); //tambah rendah tambah kedepan(412)
  delay(500);
  Dxl.setPosition(13, 622, 50); //tambah tinggi tambah nekuk(722) //wasting
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk(302) //wasting
  Dxl.setPosition(15, 412, 50); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 412, 50); //tambah rendah tambah kedepan(412)
  delay(500);
  //paha maju
  Dxl.setPosition(11, 702, 50); //tambah tinggi tambah maju(672)
  Dxl.setPosition(12, 352, 50); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(15, 512, 100); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 412, 100); //tambah rendah tambah kedepan(412)
  delay(500);
  //telapak normal
  Dxl.setPosition(17, 522, 50); //makin tinggi makin ke dalam(522)
  Dxl.setPosition(18, 502, 50); //makin rendah makin ke dalam(502)
  Dxl.setPosition(15, 532, 100); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 392, 100); //tambah rendah tambah kedepan(412)
  delay(500);
  //support
  Dxl.setPosition(11, 722, 25); //tambah tinggi tambah maju(672)
  Dxl.setPosition(12, 302, 25); //tambah tinggi tambah mundur(352)
  delay(1000);
  Dxl.setPosition(17, 472, 50); //makin tinggi makin ke dalam(522)
  Dxl.setPosition(18, 452, 50); //makin rendah makin ke dalam(502)
  Dxl.setPosition(15, 532, 150); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 552, 150); //tambah rendah tambah kedepan(412)
  delay(500);
  Dxl.setPosition(15, 532, 150); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 472, 150); //tambah rendah tambah kedepan(412)
  delay(500);
  Dxl.setPosition(13, 622, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 402, 100); //tambah rendah tambah nekuk(302)
  delay(500);
  //menapak
  Dxl.setPosition(17, 522, 50); //makin tinggi makin kedalam(522)
  Dxl.setPosition(18, 502, 50); //makin rendah makin kedalam(502)
  delay(250);
  Dxl.setPosition(11, 672, 50); //tambah tinggi tambah maju(672)
  Dxl.setPosition(12, 352, 50); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(13, 622, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 402, 50); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(15, 532, 100); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 502, 100); //tambah rendah tambah kedepan(412)
  Serial2.println("ROLL:78.1,PITCH:65.3,YAW:34.9,100,999,1234,890,100,1023,512,1023,512,4095,1023,785");
  Serial2.println("ROLL:56.4,PITCH:37.2,YAW:63.4,98,277,1023,227,227,908,1023,512,4095,231,312,512");
}

void samping(){
  delay(1000);
  Dxl.setPosition(13, 622, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(17, 572, 50); //makin tinggi maskin ke dalam(522)
  Dxl.setPosition(18, 552, 50); //makin rendah makin kedalam(502)
  delay(500);
  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk(302)
  delay(500);

  //paha melebar
  Dxl.setPosition(9, 542, 30); //tambah tinggi tambah melebar(522)
  Dxl.setPosition(10, 482, 30); //tambah rendah tambah melebar(502)
  Dxl.setPosition(17, 542, 50); //makin tinggi maskin ke dalam(522)
  delay(500);
  Dxl.setPosition(18, 482, 50); //makin rendah makin kedalam(502)
  delay(1000);
  
  //support kanan
  Dxl.setPosition(12, 452, 150); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(14, 702, 150); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(16, 862, 150); //tambah rendah tambah kedepan(412)
  Dxl.setPosition(17, 472, 100); //makin tinggi maskin ke dalam(522)
  Dxl.setPosition(18, 452, 100); //makin rendah makin kedalam(502)
  delay(1000);
  Dxl.setPosition(12, 352, 150); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(14, 302, 150); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(16, 412, 150); //tambah rendah tambah kedepan(412)
  delay(1000);
  
  //menapak
  Dxl.setPosition(9, 522, 30); //tambah tinggi tambah melebar(522)
  Dxl.setPosition(10, 502, 30); //tambah rendah tambah melebar(502)
  delay(500);
  Dxl.setPosition(17, 522, 50); //makin tinggi maskin ke dalam(522)
  Dxl.setPosition(18, 502, 50); //makin rendah makin kedalam(502)
  delay(2000);
  Serial2.println("ROLL:56.4,PITCH:37.2,YAW:63.4,98,277,1023,227,227,908,1023,512,4095,231,312,512");
  Serial2.println("ROLL:99.2,PITCH:90.3,YAW:57.5,255,344,4095,500,128,512,512,1023,512,220,512,1023");
  Serial2.println("ROLL:180.0,PITCH:90.9,YAW:90.1,512,785,512,4095,512,512,1023,512,512,512,213,915");
}
void kanan(){
  Dxl.setPosition(13, 792, 50); //tambah tinggi tambah nekuk
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk
  Dxl.setPosition(12, 352, 50); //tambah tinggi tambah mundur
  Dxl.setPosition(11, 722, 50); //tambah tinggi tambah maju
  Serial2.println("ROLL:99.2,PITCH:90.3,YAW:57.5,255,344,4095,500,128,512,512,1023,512,220,512,1023");
}
void kiri(){
  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk
  Dxl.setPosition(14, 232, 50); //tambah rendah tambah nekuk
  Dxl.setPosition(12, 302, 50); //tambah tinggi tambah mundur
  Dxl.setPosition(11, 672, 50); //tambah tinggi tambah maju
  Serial2.println("ROLL:67.1,PITCH:45.8,YAW:12.0,129,2095,1456,1023,255,1023,1023,222,512,1023,2906,512");

}

void tendang(){
  delay(1000);
  Dxl.setPosition(13, 622, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(17, 572, 50); //makin tinggi maskin ke dalam(522)
  Dxl.setPosition(18, 552, 50); //makin rendah makin kedalam(502)
  delay(500);
  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 302, 50); //tambah rendah tambah nekuk(302)
  delay(500);

  //paha melebar
  Dxl.setPosition(9, 542, 30); //tambah tinggi tambah melebar(522)
  Dxl.setPosition(10, 482, 30); //tambah rendah tambah melebar(502)
  Dxl.setPosition(17, 542, 50); //makin tinggi maskin ke dalam(522)
  delay(500);
  Dxl.setPosition(18, 482, 50); //makin rendah makin kedalam(502)
  delay(1000);
  
  //support kanan
  Dxl.setPosition(12, 472, 175); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(14, 502, 175); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(16, 622, 175); //tambah rendah tambah kedepan(412)
  Dxl.setPosition(17, 472, 120); //makin tinggi maskin ke dalam(522)
  Dxl.setPosition(18, 452, 120); //makin rendah makin kedalam(502)
  delay(1000);
  Dxl.setPosition(12, 352, 150); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(14, 302, 150); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(16, 412, 150); //tambah rendah tambah kedepan(412)
  delay(2000);
////setup
//  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk(722)
//  Dxl.setPosition(14, 402, 50); //tambah rendah tambah nekuk(302)
//  Dxl.setPosition(17, 472, 50); //makin tinggi maskin ke dalam(522)
//  Dxl.setPosition(18, 452, 50); //makin rendah makin kedalam(502)
//  Dxl.setPosition(15, 612, 50); ////tambah tinggi tambah kedepan(612)
//  Dxl.setPosition(16, 412, 50); //tambah rendah tambah kedepan(412)
////  delay(500);
//  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk(722) //wasting
//  Dxl.setPosition(14, 402, 50); //tambah rendah tambah nekuk(302) //wasting
////  Dxl.setPosition(15, 412, 50); ////tambah tinggi tambah kedepan(612)
//  Dxl.setPosition(16, 412, 50); //tambah rendah tambah kedepan(412)
  //kick kanan
  Dxl.setPosition(3, 632, 50); //semakin tinggi semakin melebar(532)
  Dxl.setPosition(4, 432, 50); //semakin rendah semakin melebar(532)
  Dxl.setPosition(5, 532, 50); //semakin tinggi semakin nekuk ke dalam(532)
  Dxl.setPosition(6, 532, 50); //semakin rendah semakin nekuk ke dalam(532) 
  Dxl.setPosition(11, 672, 50); //tambah tinggi tambah maju(672)
  Dxl.setPosition(12, 472, 50); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 102, 100); //tambah rendah tambah nekuk(302)
  Dxl.setPosition(15, 612, 100); ////tambah tinggi tambah kedepan(612)
  Dxl.setPosition(16, 512, 100); //tambah rendah tambah kedepan(412)
  delay(2000); 
  Dxl.setPosition(12, 252, 250); //tambah tinggi tambah mundur(352)
  Dxl.setPosition(13, 722, 50); //tambah tinggi tambah nekuk(722)
  Dxl.setPosition(14, 352, 600); //tambah rendah tambah nekuk(302)
  delay(1000);
  Serial2.println("ROLL:180.0,PITCH:90.9,YAW:90.1,512,785,512,4095,512,512,1023,512,512,512,213,915");
  Serial2.println("ROLL:56.4,PITCH:37.2,YAW:63.4,98,277,1023,227,227,908,1023,512,4095,231,312,512");
  Serial2.println("ROLL:99.2,PITCH:90.3,YAW:57.5,255,344,4095,500,128,512,512,1023,512,220,512,1023");
  
}


void loop() {
//  unsigned long currentTime = millis();
//  if (currentTime - previousTime >= interval) {
//    previousTime = currentTime;
//  }

  if (Serial2.available() > 0) {
    char data = Serial2.read();
    Serial2.print(data);
    if (data == 'F') {
      digitalWrite(D18, LOW);
      berdiri();
    }
    if (data == 'L') {
      tendang();
      berdiri();
    }
    if (data == 'R') {
      samping();
      berdiri();
    }
    if (data == 'B') {
      digitalWrite(D20, LOW);
      duduk();
    }
    if (data == 'H') {
      for(int i=0;i<5;i++){
      jalan();
      }
      digitalWrite(D19, LOW);
      berdiri();
    }
    
    if (data == 'M') {
      for(int i=0;i<15;i++){
      digitalWrite(D20, LOW);
      kanan();
      delay(200);
      kiri();
      delay(200);
      }
      berdiri();
    }
    if (data == 'S') {
      digitalWrite(D18, HIGH);
      digitalWrite(D19, HIGH);
      digitalWrite(D20, HIGH);
    }
  }
  
}

