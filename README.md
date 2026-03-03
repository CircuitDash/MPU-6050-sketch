# MPU-6050 Arduino Sketch

Read accelerometer, gyroscope, and temperature data from the MPU-6050 sensor using Arduino.

## Requirements
- Arduino Uno (or compatible)
- MPU-6050 sensor module
- MPU6050 library (install via Arduino IDE Library Manager)

## Wiring
| MPU-6050 | Arduino |
|----------|---------|
| VCC      | 5V      |
| GND      | GND     |
| SCL      | A5      |
| SDA      | A4      |

## Output
Data is streamed via Serial at 9600 baud in the format:
`aX:value aY:value aZ:value gX:value gY:value gZ:value temp:value`

---
🎯 Want a professional real-time dashboard for this data? Check out [CircuitDash on Gumroad](your-gumroad-link)
