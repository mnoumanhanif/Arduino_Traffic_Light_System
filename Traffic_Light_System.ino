//Declaring the Variables
int LED_1 = 2;
int LED_2 = 4;
int LED_3 = 6;

int DELAY_LED_1 = 3000;
int DELAY_LED_2 = 1500;
int DELAY_LED_3 = 3000;
int DELAY_LED_4 = 1500;

// Basic functions to Operate
void setup()
{
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
}

//Loop Structure
void loop()
{
  l1();
  delay(DELAY_LED_1);
  l2();
  delay(DELAY_LED_2);
  l3();
  delay(DELAY_LED_3);
  l4();
  delay(DELAY_LED_4);

}

//Loop Start
void l1()
{

  digitalWrite(LED_1, HIGH);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
}

void l2()
{

  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
}
void l3()
{
 
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
}
void l4()
{
 
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, HIGH);
  digitalWrite(LED_3, LOW);
}
