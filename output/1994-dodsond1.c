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
	uint32_t anon63;
	l(4195589);
	uint32_t phi_in1 = 60;
	uint32_t dispatch2 = 0;
	do
	{
		uint32_t phi3;
		uint64_t anon44;
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
			uint32_t phi_in18;
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
			uint64_t phi_in36;
			uint32_t phi39;
			uint32_t anon45;
			uint32_t anon46;
			uint64_t anon47;
			uint32_t anon49;
			uint32_t anon51;
			uint32_t anon53;
			uint64_t phi54;
			uint64_t phi_in55;
			uint64_t phi56;
			uint64_t phi_in57;
			uint64_t phi58;
			uint64_t anon59;
			uint32_t phi_in60;
			uint32_t anon62;
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
					phi_in18 = 1;
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
				phi_in18 = 1;
			}
			if (dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
			{
				phi34 = phi_in17;
				phi_in35 = 1;
				phi_in36 = 1;
			}
			if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
			{
				uint64_t phi37 = phi_in15;
				uint64_t phi38 = phi_in16;
				phi39 = phi_in35;
				uint32_t phi40 = phi_in18;
				uint64_t phi41 = phi_in36;
				uint64_t anon42 = m.constprop.1(4195713, (__zext uint64_t)phi40, phi41);
				uint64_t anon43 = random();
				anon45 = (uint32_t)anon42 + (uint32_t)anon43 + ((uint32_t)((anon43 & 0xffffffff) / 6) - (uint32_t)(anon43 << 32 >> 32 >> 31)) * 4294967290;
				anon46 = (uint32_t)phi38;
				anon44 = anon45 > anon46 ? phi34 : phi37;
				phi_in15 = anon44;
				anon47 = anon45 > anon46 ? (__zext uint64_t)anon45 : phi38;
				phi_in16 = anon47;
				uint32_t anon48 = phi39 + 1;
				phi_in35 = anon48;
				anon49 = (uint32_t)phi34;
				phi_in18 = anon49;
				phi_in36 = (__zext uint64_t)anon48;
				dispatch2 = 3;
			}
			if (phi39 == 8)
			{
				if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
				{
					phi_in15 = anon44;
					phi_in16 = anon47;
					uint32_t anon50 = anon49 + 1;
					phi_in17 = (__zext uint64_t)anon50;
					phi_in18 = anon50;
					dispatch2 = 4;
				}
				if (anon49 == 8)
				{
					anon51 = anon45 > anon46 ? anon45 : anon46;
					if ((dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9) && anon51 == 0)
					{
						break;
					}
					if (anon51 != 0)
					{
						if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9)
						{
							uint64_t anon52 = m.constprop.1(4196072, anon44 & 0xffffffff, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
							anon53 = (uint32_t)anon52;
							if (anon53 == 0)
							{
								break;
							}
						}
						if (anon53 != 0 && (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 || dispatch2 == 13 && anon33 == 9 || dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon22 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 || anon13 != 0 && anon22 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9))
						{
							putchar(10);
							phi54 = 65;
							phi_in55 = 6297448;
						}
					}
				}
			}
			if (dispatch2 == 6 || anon53 != 0 && dispatch2 == 3 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 4 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 13 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0)
			{
				phi56 = phi_in55;
				putchar((uint32_t)phi54);
				phi_in57 = phi56;
			}
			if (dispatch2 == 5 || dispatch2 == 6 || anon53 != 0 && dispatch2 == 3 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 4 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 13 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0)
			{
				phi58 = phi_in57;
				printf(anon28);
				phi_in57 = phi58 + 4;
				dispatch2 = 5;
			}
			if (phi56 + 28 == phi58)
			{
				if (dispatch2 == 5 || dispatch2 == 6 || anon53 != 0 && dispatch2 == 3 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 4 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 13 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0)
				{
					putchar(10);
					phi54 = phi54 + 1 & 0xffffffff;
					anon59 = phi56 + 40;
					phi_in55 = anon59;
					dispatch2 = 6;
				}
				if (anon59 == 6297768 && (dispatch2 == 5 || dispatch2 == 6 || anon53 != 0 && dispatch2 == 3 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 4 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 13 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon53 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon22 != 0 && anon53 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0))
				{
					putchar(32);
					phi_in60 = 1;
				}
			}
			if (dispatch2 == 7 || dispatch2 == 5 && phi56 + 28 == phi58 && anon59 == 6297768 || dispatch2 == 6 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 3 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 4 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 13 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon22 != 0 && anon53 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon22 != 0 && anon53 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon22 != 0 && anon53 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768)
			{
				uint32_t phi61 = phi_in60;
				printf(anon32);
				anon62 = phi61 + 1;
				phi_in60 = anon62;
				dispatch2 = 7;
			}
			if (anon62 == 9 && (dispatch2 == 7 || dispatch2 == 5 && phi56 + 28 == phi58 && anon59 == 6297768 || dispatch2 == 6 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 3 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 4 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && anon13 == 0 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 13 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 11 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon53 != 0 && dispatch2 == 12 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon22 != 0 && anon53 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon22 != 0 && anon53 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon22 != 0 && anon53 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 1 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 2 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768 || anon13 != 0 && anon22 != 0 && anon53 != 0 && dispatch2 == 0 && anon14 == 9 && phi8 == 8 && ((__zext uint8_t)(anon19 != 72) & (__zext uint8_t)(anon19 - 65 > 6)) == 0 && ((__zext uint8_t)(anon20 != 56) & (__zext uint8_t)(anon20 - 49 > 6)) == 0 && phi25 + 28 == phi27 && anon29 == 6297768 && anon33 == 9 && phi39 == 8 && anon49 == 8 && anon51 != 0 && phi56 + 28 == phi58 && anon59 == 6297768))
			{
				putchar(10);
				break;
			}
		}
		anon63 = phi3 - 1;
		phi_in1 = anon63;
		uint64_t phi_in5 = anon44;
		dispatch2 = 0;
	}
	while (anon63 != 0);
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
	uint32_t phi12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t anon16;
	uint64_t phi20;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi10;
		uint32_t phi11;
		*anon1 = 1;
		uint32_t phi5 = 1;
		uint32_t phi6 = 1;
		uint64_t phi_in7 = 0;
		dispatch8 = 0;
		do
		{
			while (true)
			{
				uint32_t phi_in9;
				uint32_t phi_in15;
				int64_t anon17;
				int64_t anon18;
				uint32_t phi23;
				uint64_t phi24;
				if (dispatch8 == 0)
				{
					phi_in9 = phi6;
					phi10 = phi_in7;
					phi11 = phi5;
					phi6 = phi_in9;
					if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
					{
						phi12 = 1;
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
					phi_in15 = phi12;
					phi11 = phi5;
					phi6 = phi_in9;
					anon17 = (__sext int64_t)*(uint32_t*)(phi10 + 6296832);
					anon18 = (__sext int64_t)*(uint32_t*)(phi10 + 6296896);
					anon16 = phi14 + (anon17 + anon18 * 10 << 2);
					if (!(*(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 255 || *(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 1))
					{
						break;
					}
				}
				bool anon19 = *(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 1;
				if (anon19 && (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295))
				{
					uint32_t anon22 = (uint32_t)phi13;
					int64_t anon21 = (__sext int64_t)(*(uint32_t*)(phi10 + 6296832) * anon22) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi10 + 6296896) * anon22) + anon4) * 10 << 2;
					phi20 = anon21 + 6297408;
					phi23 = phi_in9;
					phi24 = anon21 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon19 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295 && anon19)
				{
					uint32_t phi25 = phi_in15;
					*(uint32_t*)phi20 = 0;
					uint32_t anon26 = phi23 + *(uint32_t*)phi24;
					phi11 = anon26;
					phi6 = anon26;
					uint32_t anon27 = phi25 - 1;
					phi_in15 = anon27;
					int64_t anon28 = (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296896)) * 10 << 2;
					phi20 = phi20 + anon28;
					phi23 = anon26;
					phi24 = phi24 + anon28;
					dispatch8 = 2;
					if (anon27 == 0)
					{
						break;
					}
				}
			}
			phi5 = phi11;
			phi_in7 = phi10 + 4;
			dispatch8 = 0;
		}
		while (phi10 != 28);
		if (phi11 == 1)
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
	phi12 = (uint32_t)phi13 + 1;
	phi13 = phi13 + 1 & 0xffffffff;
	phi14 = anon16;
	dispatch8 = 1;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t dispatch8;
	uint32_t phi12;
	uint64_t phi13;
	uint64_t phi14;
	uint64_t anon16;
	uint64_t phi20;
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
			while (true)
			{
				uint32_t phi_in9;
				uint32_t phi_in15;
				int64_t anon17;
				int64_t anon18;
				uint32_t phi23;
				uint64_t phi24;
				if (dispatch8 == 0)
				{
					phi_in9 = phi6;
					phi10 = phi_in7;
					phi11 = phi5;
					phi6 = phi_in9;
					if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1)
					{
						phi12 = 1;
						phi13 = 1;
						phi14 = (((__zext uint64_t)*(uint32_t*)(phi10 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi10 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1)
				{
					phi_in15 = phi12;
					phi11 = phi5;
					phi6 = phi_in9;
					anon17 = (__sext int64_t)*(uint32_t*)(phi10 + 6296832);
					anon18 = (__sext int64_t)*(uint32_t*)(phi10 + 6296896);
					anon16 = phi14 + (anon17 + anon18 * 10 << 2);
					if (!(*(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 1 || *(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 255))
					{
						break;
					}
				}
				bool anon19 = *(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 255;
				if (anon19 && (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1))
				{
					uint32_t anon22 = (uint32_t)phi13;
					int64_t anon21 = (__sext int64_t)(*(uint32_t*)(phi10 + 6296832) * anon22) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi10 + 6296896) * anon22) + anon4) * 10 << 2;
					phi20 = anon21 + 6297408;
					phi23 = phi_in9;
					phi24 = anon21 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon19 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1 && anon19)
				{
					uint32_t phi25 = phi_in15;
					*(uint32_t*)phi20 = 0;
					uint32_t anon26 = phi23 + *(uint32_t*)phi24;
					phi11 = anon26;
					phi6 = anon26;
					uint32_t anon27 = phi25 - 1;
					phi_in15 = anon27;
					int64_t anon28 = (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi10 + 6296896)) * 10 << 2;
					phi20 = phi20 + anon28;
					phi23 = anon26;
					phi24 = phi24 + anon28;
					dispatch8 = 2;
					if (anon27 == 0)
					{
						break;
					}
				}
			}
			phi5 = phi11;
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
	phi12 = (uint32_t)phi13 + 1;
	phi13 = phi13 + 1 & 0xffffffff;
	phi14 = anon16;
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
