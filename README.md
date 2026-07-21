# Automated-Watering-System
This was a project that was completed in January of 2026. The goal of this project was to design a system that detects moisture inside of plant soil and waters it if it doesn't meet an intended minimum, a water pump activates to maintain it at it's minimum value of moisture. This involved various testing of different moistures in soil to find the intended value necessary, testing individual components to ensure that it could be incorporated into different circuits, testing circuits with multimeters to ensure voltages and currents were at intended values, and analyzing documented arduino schemas to design breadboard circuits. A contact level sensor is also incorporated to prevent the pump from operating when the reservoir is empty, protecting the system from dry-run damage.

Analog sensor readings were monitored through the Arduino Serial Monitor to validate sensor performance and fine-tune calibration values. An I2C LCD was implemented to provide real-time feedback on soil condition and reservoir status, while an LED indicator displayed the system's operating state.

Through the development of this project, we gained practical experience in embedded systems programming, circuit design, and hardware integration. We learned how to interface analog and digital sensors with an Arduino microcontroller, develop control logic to automate system behavior, and integrate multiple components, including a soil moisture sensor, water level sensor, DC pump, motor driver, and I2C LCD.

The project also strengthened our troubleshooting and debugging skills by requiring systematic testing of individual components, verification of circuit voltages and currents using a digital multimeter, and calibration of sensor thresholds through experimental data collection. Additionally, we developed an understanding of designing reliable and safe embedded systems by implementing dry-run protection for the pump, validating system performance under various operating conditions, and documenting the engineering design and testing process.

https://sites.google.com/view/arduinoautomatedwatersystem/home

