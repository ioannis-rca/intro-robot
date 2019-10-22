
//Define the pins for all the inputs/outputs
//PWM defines must be on PWM pins
#define PWMA 5
#define AIN1 2
#define AIN2 4
#define PWMB 6
#define BIN1 7
#define BIN2 8
#define STBY 9



void setup() 
{
  //Set all the pin as outputs.
  pinMode(PWMA,OUTPUT);
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(PWMB,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);
  pinMode(STBY,OUTPUT);
}


void loop() 
{
 
 
  startUp();
  goForward();
  delay(2000);
  brake();
  delay(1000);
  rotateRight();
  delay(1000);
  goForward();
  delay(1000);
  rotateLeft();
  delay(1000);
  goBackward();
  delay(1000);
  
  }


void goForward()
{
  digitalWrite (AIN1,HIGH);
  digitalWrite (AIN2,LOW);
  analogWrite  (PWMA,192);
  digitalWrite (BIN1,HIGH);
  digitalWrite (BIN2,LOW);
  analogWrite  (PWMB,192); 
}


void goBackward()
{
  digitalWrite (AIN1,LOW);
  digitalWrite (AIN2,HIGH);
  analogWrite  (PWMA,192);
  digitalWrite (BIN1,LOW);
  digitalWrite (BIN2,HIGH);
  analogWrite  (PWMB,192); 
}


void rotateRight()
{
  digitalWrite (AIN1,HIGH);
  digitalWrite (AIN2,LOW);
  analogWrite  (PWMA,192);
  digitalWrite (BIN1,LOW);
  digitalWrite (BIN2,HIGH);
  analogWrite  (PWMB,192); 
}


void rotateLeft()
{
  digitalWrite (AIN1,LOW);
  digitalWrite (AIN2,HIGH);
  analogWrite  (PWMA,192);
  digitalWrite (BIN1,HIGH);
  digitalWrite (BIN2,LOW);
  analogWrite  (PWMB,192); 
}




void brake()
{
  digitalWrite (AIN1,HIGH);
  digitalWrite (AIN2,HIGH);
  analogWrite(PWMA,192);
  digitalWrite (BIN1,HIGH);
  digitalWrite (BIN2,HIGH);
  analogWrite(PWMB,192);
}


void startUp()
{
  digitalWrite(STBY,HIGH);
}

void shutDown()
{
  digitalWrite(STBY,LOW);
}

