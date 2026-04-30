# Arduino-Auto-Trash-Can

Hands-free trash can lid that opens automatically when a hand is detected.

## Description
An HC-SR04 ultrasonic sensor detects when a hand approaches within 20cm. A servo motor then opens the lid, holds it for 3 seconds, and closes it automatically. Enclosure CAD designed and cardboard prototyped, with 3D print pending.

## Components
- Arduino Uno
- 1x HC-SR04 Ultrasonic Sensor
- 1x SG90 Servo Motor
- Breadboard + jumper wires
- Cardboard enclosure (3D print pending)

## Wiring
| Component      | Arduino Pin |
|----------------|-------------|
| HC-SR04 Trig   | Pin 9       |
| HC-SR04 Echo   | Pin 10      |
| HC-SR04 VCC    | 5V          |
| HC-SR04 GND    | GND         |
| Servo Signal   | Pin 6       |
| Servo VCC      | 5V          |
| Servo GND      | GND         |

## Adjustable Parameters
| Variable           | Default | Description                  |
|--------------------|---------|------------------------------|
| `triggerDistance`  | 20cm    | Distance to trigger the lid  |
| `openAngle`        | 90°     | How far the lid opens        |
| `holdTime`         | 3000ms  | How long the lid stays open  |

## Skills Demonstrated
- Servo motor control with the `Servo` library
- Sensor-driven actuator control
- Modular function design
- Physical enclosure prototyping (CAD + cardboard)
