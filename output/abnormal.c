#include "tests/bin/abnormal.h"

void func_4001fb(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi12;
	uint64_t phi_in1 = 10;
	uint64_t phi_in2 = 5;
	uint64_t phi_in3 = 5;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	dispatch5 = 1;
	do
	{
		while (dispatch5 != 1)
		{
			uint64_t phi_in8;
			uint64_t phi6;
			if (dispatch5 == 0)
			{
				phi6 = phi_in1;
				uint64_t phi7 = phi_in2;
				phi_in8 = phi7;
			}
			if (dispatch5 == 2 || dispatch5 == 0)
			{
				uint64_t phi9 = phi_in8;
				phi_in8 = 4;
				uint64_t anon10 = phi9 * phi6;
				phi_in3 = anon10;
				phi_in4 = phi6;
				dispatch5 = 2;
				if (anon10 != 4)
				{
					break;
				}
			}
		}
		uint64_t phi11 = phi_in3;
		phi12 = phi_in4;
		if (phi12 >= 1)
		{
			phi_in1 = phi12 - 1;
			phi_in2 = phi11;
			dispatch5 = 0;
			if (phi12 == 21)
			{
				break;
			}
		}
	}
	while (phi12 >= 1);
	return;
}
