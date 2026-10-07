#include <Arduino.h>

long readUltrasonicDistance(int triggerPin, int echoPin)
{
    pinMode(triggerPin, OUTPUT);

    // Clear the trigger
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);

    // Send a 10-microsecond pulse
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);

    pinMode(echoPin, INPUT);

    // Read the echo time
    return pulseIn(echoPin, HIGH);
}

void setup()
{
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}

void loop()
{
    if (0.01723 * readUltrasonicDistance(2, 3) < 50)
    {
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        tone(10, 1000, 500);
    }
    else
    {
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        noTone(10);
    }

    delay(500);
}
