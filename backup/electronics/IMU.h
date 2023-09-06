#ifndef IMU_H
#define IMU_H

class IMU {
public:
    IMU(int address); // Pass the MPU6050 I2C address as a parameter
    float AccX, AccY, AccZ;
    float GyroX, GyroY, GyroZ;
    void initialize();
    void readAcceleration();
    void readGyro();

private:
    int address;
    // Add other private members as needed
};

#endif