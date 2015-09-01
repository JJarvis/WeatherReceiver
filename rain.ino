
unsigned int start_time;
unsigned int num_tips;
unsigned int start_tip_count;
unsigned int current_tip_count;
unsigned int num_tips;

double rainfall_rate;

void setup()
{
  Serial.begin(9600);
  start_time = millis();
  num_tips = 0;
}


void loop()
{
	if tip_count == 0 {
		start_tip_count = current_tip_count;
		num_tips = 0;
	}
	else {
		num_tips = current_tip_count - start_tip_count;
	}
	
	if (millis() - start_time) > 60000 {
		rainfall_rate = (double)(num_tips) * 180.0 ;
		start_time = millis();
		num_tips = 0;
	}
		
  
}
