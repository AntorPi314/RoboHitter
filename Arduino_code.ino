int motor1a = 2;
int motor1b = 3;
int motor2a = 4;
int motor2b = 5;
int motor3a = 6;
int motor3b = 7;
int hitMotor4a = 8;
int hitMotor4b = 9;

void setup() {
  Serial.begin(9600);
  pinMode(motor1a, OUTPUT);
  pinMode(motor1b, OUTPUT);
  pinMode(motor2a, OUTPUT);
  pinMode(motor2b, OUTPUT);
  pinMode(motor3a, OUTPUT);
  pinMode(motor3b, OUTPUT);
  pinMode(hitMotor4a, OUTPUT);
  pinMode(hitMotor4b, OUTPUT);
  stopAllMotors();
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();
    if (command == '\n' || command == '\r') {
      return;
    }
    Serial.println(command);
    switch (command) {
      case 'F': moveForward(); break;
      case 'B': moveBackward(); break;
      case 'L': turnLeft(); break;
      case 'R': turnRight(); break;
      case 'S': stopAllMotors(); break;
      case '0': hitStop(); break;
      case '1': hitLeft(); break;
      case '2': hitRight(); break;
      default:
        Serial.println("Invalid command!");
        break;
    }
  }
}

void moveForward() {
  digitalWrite(motor1a, HIGH);
  digitalWrite(motor1b, LOW);
  digitalWrite(motor2a, HIGH);
  digitalWrite(motor2b, LOW);
  digitalWrite(motor3a, HIGH);
  digitalWrite(motor3b, LOW);
}

void moveBackward() {
  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, HIGH);
  digitalWrite(motor2a, LOW);
  digitalWrite(motor2b, HIGH);
  digitalWrite(motor3a, LOW);
  digitalWrite(motor3b, HIGH);
}

void turnLeft() {
  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, HIGH);
  digitalWrite(motor2a, HIGH);
  digitalWrite(motor2b, LOW);
  digitalWrite(motor3a, HIGH);
  digitalWrite(motor3b, LOW);
}

void turnRight() {
  digitalWrite(motor1a, HIGH);
  digitalWrite(motor1b, LOW);
  digitalWrite(motor2a, LOW);
  digitalWrite(motor2b, HIGH);
  digitalWrite(motor3a, HIGH);
  digitalWrite(motor3b, LOW);
}

void stopAllMotors() {
  digitalWrite(motor1a, LOW);
  digitalWrite(motor1b, LOW);
  digitalWrite(motor2a, LOW);
  digitalWrite(motor2b, LOW);
  digitalWrite(motor3a, LOW);
  digitalWrite(motor3b, LOW);
}

void hitLeft() {
  digitalWrite(hitMotor4a, HIGH);
  digitalWrite(hitMotor4b, LOW);
}

void hitRight() {
  digitalWrite(hitMotor4a, LOW);
  digitalWrite(hitMotor4b, HIGH);
}

void hitStop() {
  digitalWrite(hitMotor4a, LOW);
  digitalWrite(hitMotor4b, LOW);
}






