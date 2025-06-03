#define F_CPU 16000000UL
#include "motor.h"
#include "sensor.h"
#include <util/delay.h>

int main(void)
{
	motor_init();
	init_cam_bien_line();
	motor_stop();
	_delay_ms(1000);

	uint8_t huong_truoc_do = 0;

	while (1)
	{
		uint8_t line = doc_gia_tri_line();

		if (line == 0b010)
		{
			motor_forward();
			huong_truoc_do = 0;
		}
		else if (line == 0b110 || line == 0b100 || line == 0b111)
		{
			motor_turn_left();
			huong_truoc_do = 1;
		}
		else if (line == 0b011 || line == 0b001)
		{
			motor_turn_right();
			huong_truoc_do = 2;
		}
		else if (line == 0b000)
		{
			
			if (huong_truoc_do == 1)
			{
				motor_turn_left();
			}
			else if (huong_truoc_do == 2)
			{
				motor_turn_right();
			}
			else
			{
				motor_stop();
				motor_backward();
			}
		}

		_delay_ms(20);
	}
}