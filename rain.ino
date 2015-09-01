unsigned int start_ms;
unsigned int tip_count;
double rainfall_rate;

void setup()
{
  Serial.begin(9600);
  start_time = millis();
  tip_count = 0;
}


void loop()
{
	tip_count = get_tip_cout();
	
	if (millis() - start_time) > 60000 {
		rainfall_rate = (double)(tip_count - start_tip_count) * 180.0 ;
		start_time = millis();
		tip_count = 0;
	}
		
  
}
