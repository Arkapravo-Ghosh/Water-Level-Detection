int duration, distance;
int trigPin = 2;
int echoPin = 3;
int relayPin = 8;

void setup()
{
    // Serial.begin(9600);
    pinMode(relayPin, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    // put your setup code here, to run once:
}

void loop()
{
    long duration, distance;
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;
    // Serial.print(distance);
    // Serial.println("CM");
    delay(10);
    int limit = 20;
    if ((distance <= limit))
    {
        digitalWrite(relayPin, LOW);
    }
    else if (distance > limit)
    {
        digitalWrite(relayPin, HIGH);
    }
}