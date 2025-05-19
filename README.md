# 🗑️ Smart Dustbin – Wet and Dry Waste Separator using Arduino
This project is a Smart Garbage Dustbin that automatically detects and classifies waste as wet or dry, using a Soil Moisture Sensor and an Ultrasonic Sensor. Based on the type of waste, it opens the respective bin using Servo Motors. It aims to promote automated waste segregation and cleanliness using basic Arduino-based IoT technology.

![dustbin image](https://github.com/user-attachments/assets/6f0ff1cf-38b4-43f3-b48d-8c711e768b04)


# 🔧 Components Used
Arduino Uno

Soil Moisture Sensor

Ultrasonic Sensor (HC-SR04)

2x Servo Motors

Breadboard

Jumper Wires

USB Cable / 9V Battery (Power supply)

![Components](https://github.com/user-attachments/assets/85af20b2-de4a-49c6-891b-5c514a14baf7)

# 🔌 Working Principle
Waste Detection:
The Ultrasonic Sensor detects if an object (waste) is placed near the dustbin by measuring distance.

Waste Classification:
Once detected, the Soil Moisture Sensor checks for moisture:

Wet Waste: Moisture value above a threshold

Dry Waste: Moisture value below a threshold

Smart Lid Control:
Based on moisture value:

Servo Motor 1 opens the Wet Waste bin

Servo Motor 2 opens the Dry Waste bin

Serial Monitor Display:
Moisture values and bin type (Wet/Dry) are shown on the Arduino IDE Serial Monitor for reference and debugging.

# 🧪 TinkerCAD Simulation
A TinkerCAD circuit has been designed to simulate and test the working before hardware implementation.

All sensor and servo connections are mapped to Arduino pins accordingly.

![TinkerCAD Diagram](https://github.com/user-attachments/assets/9f30b6f8-8b0f-4c95-a44c-72281516e212)

Schematic Diagram- 

![Smart Dustbin ](https://github.com/user-attachments/assets/2290d4e8-2b52-4cb5-8fed-2750813a8fc6)

# 🖼️ Project Video
Components	Smart Dustbin Design	TinkerCAD Circuit



https://github.com/user-attachments/assets/e85ea1b2-4640-4a18-bb08-575f5641a6eb


# 📈 Future Improvements
Add an LCD or OLED display to show real-time data

Add IoT features (e.g., Blynk/ThingSpeak) to monitor bin fill level

Add automatic garbage compactor or IR sensor for hand detection

# 🧑‍💻 Developed by
Sanskar Tiwari  
Rohan Tatar  
Kanishka Salgude  
Vrushali Patil  
Saamiya Patel  
Shambhavi Patil  
Aarshia Wani  
Vedika Thorat  
