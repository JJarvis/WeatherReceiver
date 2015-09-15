#include <Bridge.h>
#include <Console.h>
#include <YunMessenger.h>
#include <ArduinoJson.h>


void setup() {

	// Create the structure to hold the data
	StaticJsonBuffer<200> jsonBuffer;
	JsonObject& root = jsonBuffer.createObject();

	// Fill in the different parameters
	root["winddir"] = "S";
	root["rainin"] = 0.0;

	// etc etc

	// finally serialize to a string
	char msg[512];
	array.printTo(msg, sizeof(msg));

	// send the message to the Linino
	Messenger.send("subscriber_1", msg);

}

void loop {

}
