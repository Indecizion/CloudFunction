int led = D6;
int led2 = D7;

void myHandler(const char *event, const char *data)
 {
    if (strcmp(data,"wave")==0) 
    {
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
    }
}

void myHandler2(const char *event, const char *data)
{
    if (strcmp(data,"pat")==0) 
    {
        digitalWrite(led, HIGH);
        digitalWrite(led2, LOW);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led, HIGH);
        digitalWrite(led2, LOW);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(led2, HIGH);
        delay(500);
        digitalWrite(led, HIGH);
        digitalWrite(led2, LOW);
        delay(500);
        digitalWrite(led, LOW);
        digitalWrite(led2, HIGH);
    }
    
 }

void setup()
{
  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
    myHandler("Deakin_RIOT_SIT210_Photon_Buddy", "wave");
    delay(2000);
    myHandler2("Deakin_RIOT_SIT210_Photon_Buddy", "pat");
    delay(2000);
}

