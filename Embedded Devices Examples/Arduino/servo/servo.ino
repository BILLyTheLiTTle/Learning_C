#define MAX_ANGLE 180 // degrees
#define MIN_ANGLE 0 // degrees
#define MAX_PULSE 2670 // us
#define MIN_PULSE 544 // us
#define PULSE_GAP 20000 // us

const int servo_pin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(servo_pin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  move_servo(180);
}

void move_servo(int value) {
  if (value < 181) {
    move_servo_by_angle(value);
  }
  else {
    move_servo_by_time(value);
  }
}

void move_servo_by_angle(int angle) {
  float proportion = angle / (MAX_ANGLE - MIN_ANGLE + 0.0f);
  int on_time = MIN_PULSE + (MAX_PULSE - MIN_PULSE) * proportion;
  move_servo_by_time(on_time);
}

void move_servo_by_time(int on_time_delay) {
  static bool print_enable = true;
  int off_time_delay = (PULSE_GAP - on_time_delay);
  digitalWrite(servo_pin, HIGH);
  delayMicroseconds(on_time_delay);
  digitalWrite(servo_pin, LOW);
  delayMicroseconds(off_time_delay);

  if (print_enable) {
    Serial.print("On time: ");
    Serial.println(on_time_delay, DEC);
    Serial.print("Off time: ");
    Serial.println(off_time_delay, DEC);
    Serial.println("");
  }
  print_enable = false;
}
