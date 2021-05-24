#include <Wire.h>
#define DEV_ADR 0x5c  // AM2320スレーブアドレス

uint8_t data[8];

void setup() {
  Wire.begin();            
  Serial.begin(115200);
}

void loop() {
  // AM2320センサーのウェイクアップ
  Wire.beginTransmission(DEV_ADR);
  Wire.endTransmission();

  // 湿度・温度データ取得要求
  Wire.beginTransmission(DEV_ADR);
  Wire.write(0x03);         // レジスタ読み取りコマンド
  Wire.write(0x00);         // 読み取り開始レジスタ番号
  Wire.write(0x04);         // 読み取りデータ数    
  Wire.endTransmission();

  // データの取得
  Wire.requestFrom(DEV_ADR,8); 
  if (Wire.available() >= 8) {
    for (uint8_t i=0; i<8; i++) {
      data[i] = Wire.read();
    }
    
    float rh = ((float)(data[2]*256+data[3]))/10; // 湿度
    float tp = ((float)(data[4]*256+data[5]))/10; // 温度
    
    // 湿度・温度の表示
    Serial.print("T=");
    Serial.print(tp);
    Serial.print("c");
    Serial.print(" H=");
    Serial.print(rh);
    Serial.println("%");
  }
  delay(1000);
}
