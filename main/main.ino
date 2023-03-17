int trigPin = 3;
int echoPin = 2;
int relayPin = 8;
int limit = 20;

void setup()
{
    pinMode(relayPin, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop()
{
    long duration, distance;
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;
    delay(10);
    if ((distance <= limit))
    {
        digitalWrite(relayPin, LOW);
    }
    else if (distance > limit)
    {
        digitalWrite(relayPin, HIGH);
    }
}