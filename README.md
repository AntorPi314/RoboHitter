# RoboHitter

RoboHitter is an Arduino-based robotic vehicle that moves and hits objects using Bluetooth control. It is powered by an Arduino Uno R3, an L298N motor driver, and a Bluetooth module HC-06. The robot can move forward, backward, turn left, turn right, and activate a hitting mechanism.

![screenshot](https://github.com/AntorPi314/RoboHitter/blob/main/Pics/s00.png)


# Video
[![Watch the video](https://github.com/AntorPi314/RoboHitter/blob/main/Video/v1_thumb.png)](https://www.youtube.com/shorts/2nyqIp0Sl9k)


## Features
- Wireless control via Bluetooth (HC-06)
- Moves in all directions (Forward, Backward, Left, Right)
- Hitting mechanism with two-directional movement
- Powered by a 18650 battery
- Controlled via serial commands

## Components Required
| Component                  | Quantity |
|----------------------------|----------|
| Arduino Uno R3            | 1        |
| L298N Motor Driver        | 1        |
| Arduino Bluetooth Module HC-06 | 1  |
| 18650 Battery             | 1        |
| Jumper Wires              | As needed |
| Wheels                    | 4        |
| 12V DC Motor              | 1        |
| 6V DC Motors              | 2        |

![screenshot](https://github.com/AntorPi314/RoboHitter/blob/main/Requirement/c00.png)

## Wiring Diagram
Connect the components as follows:
- **Motors** connected to L298N motor driver
- **Bluetooth Module HC-06** TX to RX (Arduino) and RX to TX (Arduino)
- **18650 Battery** as the power source
- **L298N outputs** connected to respective motor control pins on Arduino

## Arduino Pin Configuration
| Arduino Pin | Component |
|-------------|-----------|
| 2, 3       | Motor 1 (Wheel) |
| 4, 5       | Motor 2 (Wheel) |
| 6, 7       | Motor 3 (Wheel) |
| 8, 9       | Hitting Mechanism |

## Bluetooth Commands
| Command | Action |
|---------|--------|
| F       | Move Forward |
| B       | Move Backward |
| L       | Turn Left |
| R       | Turn Right |
| S       | Stop All Motors |
| 0       | Stop Hitting Mechanism |
| 1       | Hit Left |
| 2       | Hit Right |

## Installation & Usage
1. Upload the `RoboHitter` Arduino code to the Arduino Uno R3.
2. Connect to the HC-06 Bluetooth module using a mobile app like "Bluetooth Serial Terminal."
3. Send the respective commands to control the robot.
4. Ensure the 18650 battery is properly connected for power.

## License
This project is open-source and available under the MIT License.

## Author
**[Antor]**


