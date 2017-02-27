#include "tests/bin/1994-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601470 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t anon64;
	l(4195589);
	uint32_t phi_in1 = 60;
	uint32_t dispatch2 = 0;
	do
	{
		uint32_t phi3;
		uint64_t anon45;
		while (true)
		{
			uint64_t phi4;
			uint32_t phi_in6;
			uint32_t phi_in7;
			uint32_t phi8;
			uint32_t phi_in9;
			uint32_t anon13;
			uint32_t anon14;
			uint64_t phi_in15;
			uint64_t phi_in16;
			uint64_t phi_in17;
			uint32_t phi18;
			uint32_t anon19;
			uint32_t anon20;
			uint32_t anon22;
			uint64_t phi23;
			uint64_t phi_in24;
			uint64_t phi25;
			uint64_t phi_in26;
			uint64_t phi27;
			uint8_t* anon28;
			uint64_t anon29;
			uint32_t phi_in30;
			uint8_t* anon32;
			uint32_t anon33;
			uint64_t phi34;
			uint32_t phi_in35;
			uint32_t phi_in36;
			uint64_t phi_in37;
			uint32_t phi40;
			uint32_t anon46;
			uint32_t anon47;
			uint64_t anon48;
			uint32_t anon50;
			uint32_t anon52;
			uint32_t anon54;
			uint64_t phi55;
			uint64_t phi_in56;
			uint64_t phi57;
			uint64_t phi_in58;
			uint64_t phi59;
			uint64_t anon60;
			uint32_t phi_in61;
			uint32_t anon63;
			if (dispatch2 == 0)
			{
				phi3 = phi_in1;
				phi4 = phi_in5;
				phi_in6 = 1;
				phi_in7 = 0;
			}
			if (dispatch2 == 2 || dispatch2 == 0)
			{
				phi8 = phi_in6;
				phi_in9 = 1;
			}
			if (dispatch2 == 1 || dispatch2 == 2 || dispatch2 == 0)
			{
				uint32_t phi10 = phi_in7;
				uint32_t phi11 = phi_in9;
				uint64_t anon12 = m.constprop.0(4195644, (__zext uint64_t)phi8, (__zext uint64_t)phi11);
				anon13 = phi10 + (uint32_t)anon12;
				phi_in7 = anon13;
				anon14 = phi11 + 1;
				phi_in9 = anon14;
				dispatch2 = 1;
			}
			if (anon14 == 9)
			{
				if (dispatch2 == 1 || dispatch2 == 2 || dispatch2 == 0)
				{
					phi_in6 = phi8 + 1;
					phi_in7 = anon13;
					dispatch2 = 2;
				}
				if (phi8 == 8 && (dispatch2 == 1 || dispatch2 == 2 || dispatch2 == 0))
				{
					phi_in15 = phi4;
					phi_in16 = 0;
					phi_in17 = 1;
					phi18 = 1;
				}
			}
			if (dispatch2 == 10 || anon13 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 || anon13 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 || anon13 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8)
			{
				printf((uint8_t*)0x400f81);
			}
			if (dispatch2 == 8 || dispatch2 == 10 || anon13 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 || anon13 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 || anon13 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8)
			{
				anon19 = getchar();
				dispatch2 = 8;
			}
			if (dispatch2 == 9 || dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0)
			{
				anon20 = getchar();
				dispatch2 = 9;
			}
			if (((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0)
			{
				uint64_t anon21;
				if (dispatch2 == 9 || dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0)
				{
					anon21 = m.constprop.0(4195848, (__zext uint64_t)(anon19 - 64), (__zext uint64_t)(anon20 - 48));
					dispatch2 = 10;
				}
				anon22 = (uint32_t)anon21;
				if (anon22 != 0 && (dispatch2 == 9 || dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 || anon13 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0))
				{
					putchar(10);
					phi23 = 65;
					phi_in24 = 6297448;
				}
			}
			if (dispatch2 == 12 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0)
			{
				phi25 = phi_in24;
				putchar((uint32_t)phi23);
				phi_in26 = phi25;
			}
			if (dispatch2 == 11 || dispatch2 == 12 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0)
			{
				phi27 = phi_in26;
				anon28 = (uint8_t*)0x400f79;
				printf(anon28);
				phi_in26 = phi27 + 4;
				dispatch2 = 11;
			}
			if (phi25 + 28 == phi27)
			{
				if (dispatch2 == 11 || dispatch2 == 12 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0)
				{
					putchar(10);
					phi23 = phi23 + 1 & 0xffffffff;
					anon29 = phi25 + 40;
					phi_in24 = anon29;
					dispatch2 = 12;
				}
				if (anon29 == 6297768 && (dispatch2 == 11 || dispatch2 == 12 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0))
				{
					putchar(32);
					phi_in30 = 1;
				}
			}
			if (dispatch2 == 13 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768)
			{
				uint32_t phi31 = phi_in30;
				anon32 = (uint8_t*)0x400f7d;
				printf(anon32);
				anon33 = phi31 + 1;
				phi_in30 = anon33;
				dispatch2 = 13;
			}
			if (anon33 == 9 && (dispatch2 == 13 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768))
			{
				putchar(10);
				phi_in15 = phi4;
				phi_in16 = 0;
				phi_in17 = 1;
				phi18 = 1;
			}
			if (dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
			{
				phi34 = phi_in17;
				phi_in35 = phi18;
				phi_in36 = 1;
				phi_in37 = 1;
			}
			if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
			{
				uint64_t phi38 = phi_in15;
				uint64_t phi39 = phi_in16;
				phi40 = phi_in36;
				uint32_t phi41 = phi_in35;
				uint64_t phi42 = phi_in37;
				uint64_t anon43 = m.constprop.1(4195713, (__zext uint64_t)phi41, phi42);
				uint64_t anon44 = random();
				anon46 = (uint32_t)anon43 + (uint32_t)anon44 + ((uint32_t)((anon44 & 0xffffffff) / 6) - (uint32_t)(anon44 << 32 >> 32 >> 31)) * 4294967290;
				anon47 = (uint32_t)phi39;
				anon45 = anon46 > anon47 ? phi34 : phi38;
				phi_in15 = anon45;
				anon48 = anon46 > anon47 ? (__zext uint64_t)anon46 : phi39;
				phi_in16 = anon48;
				uint32_t anon49 = phi40 + 1;
				phi_in36 = anon49;
				anon50 = (uint32_t)phi34;
				phi_in35 = anon50;
				phi_in37 = (__zext uint64_t)anon49;
				dispatch2 = 3;
			}
			if (phi40 == 8)
			{
				if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
				{
					phi_in15 = anon45;
					phi_in16 = anon48;
					uint32_t anon51 = anon50 + 1;
					phi_in17 = (__zext uint64_t)anon51;
					phi18 = anon51;
					dispatch2 = 4;
				}
				if (anon50 == 8)
				{
					anon52 = anon46 > anon47 ? anon46 : anon47;
					if ((dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9) && anon52 == 0)
					{
						break;
					}
					if (anon52 != 0)
					{
						if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
						{
							uint64_t anon53 = m.constprop.1(4196072, anon45 & 0xffffffff, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
							anon54 = (uint32_t)anon53;
							if (anon54 == 0)
							{
								break;
							}
						}
						if (anon54 != 0 && (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9))
						{
							putchar(10);
							phi55 = 65;
							phi_in56 = 6297448;
						}
					}
				}
			}
			if (dispatch2 == 6 || anon54 != 0 && dispatch2 == 3 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 4 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 13 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0)
			{
				phi57 = phi_in56;
				putchar((uint32_t)phi55);
				phi_in58 = phi57;
			}
			if (dispatch2 == 5 || dispatch2 == 6 || anon54 != 0 && dispatch2 == 3 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 4 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 13 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0)
			{
				phi59 = phi_in58;
				printf(anon28);
				phi_in58 = phi59 + 4;
				dispatch2 = 5;
			}
			if (phi57 + 28 == phi59)
			{
				if (dispatch2 == 5 || dispatch2 == 6 || anon54 != 0 && dispatch2 == 3 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 4 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 13 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0)
				{
					putchar(10);
					phi55 = phi55 + 1 & 0xffffffff;
					anon60 = phi57 + 40;
					phi_in56 = anon60;
					dispatch2 = 6;
				}
				if (anon60 == 6297768 && (dispatch2 == 5 || dispatch2 == 6 || anon54 != 0 && dispatch2 == 3 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 4 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 13 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon54 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon22 != 0 && anon54 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0))
				{
					putchar(32);
					phi_in61 = 1;
				}
			}
			if (dispatch2 == 7 || dispatch2 == 5 && phi57 + 28 == phi59 && anon60 == 6297768 || dispatch2 == 6 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 3 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 4 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 13 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon22 != 0 && anon54 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon22 != 0 && anon54 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon22 != 0 && anon54 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768)
			{
				uint32_t phi62 = phi_in61;
				printf(anon32);
				anon63 = phi62 + 1;
				phi_in61 = anon63;
				dispatch2 = 7;
			}
			if (anon63 == 9 && (dispatch2 == 7 || dispatch2 == 5 && phi57 + 28 == phi59 && anon60 == 6297768 || dispatch2 == 6 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 3 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 4 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 13 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon54 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon22 != 0 && anon54 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon22 != 0 && anon54 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon22 != 0 && anon54 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768 || anon13 != 0 && anon22 != 0 && anon54 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi40 == 8 && anon50 == 8 && anon52 != 0 && phi57 + 28 == phi59 && anon60 == 6297768))
			{
				putchar(10);
				break;
			}
		}
		anon64 = phi3 - 1;
		phi_in1 = anon64;
		uint64_t phi_in5 = anon45;
		dispatch2 = 0;
	}
	while (anon64 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004f0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ef0, (void(*)())0x400f60, (void(*)())arg2, *(uint8_t**)anon1);
	llvm.trap();
}
void deregister_tm_clones(uint64_t arg0)
{
	return;
}
void register_tm_clones(uint64_t arg0)
{
	return;
}
void __do_global_dtors_aux(uint64_t arg0)
{
	uint8_t* anon1 = (uint8_t*)0x6018d0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196434);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t m.constprop.0(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t dispatch8;
	uint32_t phi_in12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t anon15;
	uint64_t phi19;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi10;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi6 = 1;
		uint64_t phi_in7 = 0;
		dispatch8 = 0;
		do
		{
			uint32_t phi11;
			while (true)
			{
				uint32_t phi_in9;
				int64_t anon16;
				int64_t anon17;
				uint32_t phi22;
				uint64_t phi23;
				if (dispatch8 == 0)
				{
					phi_in9 = phi6;
					phi10 = phi_in7;
					phi5 = phi5;
					phi11 = phi_in9;
					if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
					{
						phi_in12 = 1;
						phi13 = 1;
						phi14 = (((__zext uint64_t)*(uint32_t*)(phi10 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi10 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
				{
					phi5 = phi5;
					phi11 = phi_in9;
					anon16 = (__sext int64_t)*(uint32_t*)(phi10 + 6296832);
					anon17 = (__sext int64_t)*(uint32_t*)(phi10 + 6296896);
					anon15 = phi14 + (anon16 + anon17 * 10 << 2);
					if (!(*(uint32_t*)(anon15 + (0 - anon16 << 2) + ((0 - anon17 << 2) - anon17 << 3)) == 255 || *(uint32_t*)(anon15 + (0 - anon16 << 2) + ((0 - anon17 << 2) - anon17 << 3)) == 1))
					{
						break;
					}
				}
				bool anon18 = *(uint32_t*)(anon15 + (0 - anon16 << 2) + ((0 - anon17 << 2) - anon17 << 3)) == 1;
				if (anon18 && (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295))
				{
					uint32_t anon21 = (uint32_t)phi13;
					int64_t anon20 = (__sext int64_t)(*(uint32_t*)(phi10 + 6296832) * anon21) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi10 + 6296896) * anon21) + anon4) * 10 << 2;
					phi19 = anon20 + 6297408;
					phi22 = phi_in9;
					phi23 = anon20 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon18 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295 && anon18)
				{
					uint32_t phi24 = phi_in12;
					*(uint32_t*)phi19 = 0;
					uint32_t anon25 = phi22 + *(uint32_t*)phi23;
					phi5 = anon25;
					phi11 = anon25;
					uint32_t anon26 = phi24 - 1;
					phi_in12 = anon26;
					int64_t anon27 = (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296896)) * 10 << 2;
					phi19 = phi19 + anon27;
					phi22 = anon25;
					phi23 = phi23 + anon27;
					dispatch8 = 2;
					if (anon26 == 0)
					{
						break;
					}
				}
			}
			phi6 = phi11;
			phi_in7 = phi10 + 4;
			dispatch8 = 0;
		}
		while (phi10 != 28);
		if (phi5 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi5;
		}
	}
	else 
	{
		return 0;
	}
	phi_in12 = (uint32_t)phi13 + 1;
	phi13 = phi13 + 1 & 0xffffffff;
	phi14 = anon15;
	dispatch8 = 1;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t dispatch8;
	uint32_t phi13;
	uint64_t phi14;
	uint64_t phi15;
	uint64_t anon17;
	uint64_t phi21;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi10;
		uint32_t phi11;
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi6 = 4294967295;
		uint64_t phi_in7 = 0;
		dispatch8 = 0;
		do
		{
			uint32_t phi12;
			while (true)
			{
				uint32_t phi9;
				uint32_t phi_in16;
				int64_t anon18;
				int64_t anon19;
				uint64_t phi24;
				if (dispatch8 == 0)
				{
					phi9 = phi6;
					phi10 = phi_in7;
					phi11 = phi5;
					phi12 = phi9;
					if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1)
					{
						phi13 = 1;
						phi14 = 1;
						phi15 = (((__zext uint64_t)*(uint32_t*)(phi10 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi10 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1)
				{
					phi_in16 = phi13;
					phi11 = phi5;
					phi12 = phi9;
					anon18 = (__sext int64_t)*(uint32_t*)(phi10 + 6296832);
					anon19 = (__sext int64_t)*(uint32_t*)(phi10 + 6296896);
					anon17 = phi15 + (anon18 + anon19 * 10 << 2);
					if (!(*(uint32_t*)(anon17 + (0 - anon18 << 2) + ((0 - anon19 << 2) - anon19 << 3)) == 1 || *(uint32_t*)(anon17 + (0 - anon18 << 2) + ((0 - anon19 << 2) - anon19 << 3)) == 255))
					{
						break;
					}
				}
				bool anon20 = *(uint32_t*)(anon17 + (0 - anon18 << 2) + ((0 - anon19 << 2) - anon19 << 3)) == 255;
				if (anon20 && (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1))
				{
					uint32_t anon23 = (uint32_t)phi14;
					int64_t anon22 = (__sext int64_t)(*(uint32_t*)(phi10 + 6296832) * anon23) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi10 + 6296896) * anon23) + anon4) * 10 << 2;
					phi21 = anon22 + 6297408;
					phi24 = anon22 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon20 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1 && anon20)
				{
					uint32_t phi25 = phi_in16;
					*(uint32_t*)phi21 = 0;
					uint32_t anon26 = phi9 + *(uint32_t*)phi24;
					phi11 = anon26;
					phi12 = anon26;
					uint32_t anon27 = phi25 - 1;
					phi_in16 = anon27;
					int64_t anon28 = (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296896)) * 10 << 2;
					phi21 = phi21 + anon28;
					phi9 = anon26;
					phi24 = phi24 + anon28;
					dispatch8 = 2;
					if (anon27 == 0)
					{
						break;
					}
				}
			}
			phi5 = phi11;
			phi6 = phi12;
			phi_in7 = phi10 + 4;
			dispatch8 = 0;
		}
		while (phi10 != 28);
		if (phi11 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi11;
		}
	}
	else 
	{
		return 0;
	}
	phi13 = (uint32_t)phi14 + 1;
	phi14 = phi14 + 1 & 0xffffffff;
	phi15 = anon17;
	dispatch8 = 1;
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		uint64_t phi3;
		do
		{
			phi3 = phi_in1;
			phi_in1 = phi3 + 4;
		}
		while (phi3 != 28);
		*anon2 = 0;
		return;
	}
	else 
	{
		return;
	}
}
void l(uint64_t arg0)
{
	uint64_t anon7;
	uint32_t anon10;
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi_in2 = 6297448;
	uint32_t dispatch3 = 0;
	do
	{
		uint64_t phi4;
		while (true)
		{
			uint64_t phi_in5;
			if (dispatch3 == 0)
			{
				phi4 = phi_in2;
				putchar((uint32_t)phi1);
				phi_in5 = phi4;
			}
			uint64_t phi6 = phi_in5;
			printf((uint8_t*)0x400f79);
			phi_in5 = phi6 + 4;
			dispatch3 = 1;
			if (phi6 == phi4 + 28)
			{
				break;
			}
		}
		putchar(10);
		phi1 = phi1 + 1 & 0xffffffff;
		anon7 = phi4 + 40;
		phi_in2 = anon7;
		dispatch3 = 0;
	}
	while (anon7 != 6297768);
	putchar(32);
	uint32_t phi_in8 = 1;
	do
	{
		uint32_t phi9 = phi_in8;
		printf((uint8_t*)0x400f7d);
		anon10 = phi9 + 1;
		phi_in8 = anon10;
	}
	while (anon10 != 9);
	__indirect_jump(*(uint64_t*)0x601490);
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4198179);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601288)(arg1 & 0xffffffff, arg2, arg3);
	return;
}
void __libc_csu_fini(uint64_t arg0)
{
	return;
}
void _fini(uint64_t arg0)
{
	return;
}
