#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();
  
  if (mpu.testConnection()) {
    Serial.println("MPU6050 connected successfully!");
  } else {
    Serial.println("MPU6050 connection failed!");
  }
}

void loop() {
  int16_t ax, ay, az, gx, gy, gz;
  int16_t rawTemp;
  
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  rawTemp = mpu.getTemperature();
  
  float temp = (rawTemp / 340.0) + 36.53;

  Serial.print("aX:"); Serial.print(ax);
  Serial.print(" aY:"); Serial.print(ay);
  Serial.print(" aZ:"); Serial.print(az);
  Serial.print(" gX:"); Serial.print(gx);
  Serial.print(" gY:"); Serial.print(gy);
  Serial.print(" gZ:"); Serial.print(gz);
  Serial.print(" temp:"); Serial.println(temp, 1);
  
  delay(100);
}
