#include "tests/bin/1994-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601470 != 0)
	{
		__gmon_start__(4195437);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x6014b0);
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t anon66;
	l(4195589);
	uint32_t phi_in1 = 60;
	uint32_t dispatch2 = 0;
	do
	{
		uint32_t phi3;
		uint64_t anon47;
		while (true)
		{
			uint64_t phi4;
			uint32_t phi_in6;
			uint32_t phi7;
			uint32_t phi8;
			uint32_t phi_in9;
			uint32_t phi_in10;
			uint32_t anon14;
			uint32_t anon15;
			uint64_t phi_in16;
			uint64_t phi17;
			uint64_t phi_in18;
			uint32_t phi19;
			uint32_t anon20;
			uint32_t anon21;
			uint32_t anon23;
			uint64_t phi24;
			uint64_t phi_in25;
			uint64_t phi26;
			uint64_t phi_in27;
			uint64_t phi28;
			uint8_t* anon29;
			uint64_t anon30;
			uint32_t phi_in31;
			uint8_t* anon33;
			uint32_t anon34;
			uint64_t phi_in35;
			uint64_t phi36;
			uint32_t phi_in37;
			uint32_t phi_in38;
			uint64_t phi_in39;
			uint32_t phi42;
			uint32_t anon48;
			uint32_t anon49;
			uint64_t anon50;
			uint32_t anon52;
			uint32_t anon54;
			uint32_t anon56;
			uint64_t phi57;
			uint64_t phi_in58;
			uint64_t phi59;
			uint64_t phi_in60;
			uint64_t phi61;
			uint64_t anon62;
			uint32_t phi_in63;
			uint32_t anon65;
			if (dispatch2 == 0)
			{
				phi3 = phi_in1;
				phi4 = phi_in5;
				phi_in6 = 1;
				phi7 = 0;
			}
			if (dispatch2 == 2 || dispatch2 == 0)
			{
				phi8 = phi_in6;
				phi_in9 = phi7;
				phi_in10 = 1;
			}
			if (dispatch2 == 1 || dispatch2 == 2 || dispatch2 == 0)
			{
				uint32_t phi11 = phi_in9;
				uint32_t phi12 = phi_in10;
				uint64_t anon13 = m.constprop.0(4195644, (__zext uint64_t)phi8, (__zext uint64_t)phi12);
				anon14 = phi11 + (uint32_t)anon13;
				phi_in9 = anon14;
				anon15 = phi12 + 1;
				phi_in10 = anon15;
				dispatch2 = 1;
			}
			if (anon15 == 9)
			{
				if (dispatch2 == 1 || dispatch2 == 2 || dispatch2 == 0)
				{
					phi_in6 = phi8 + 1;
					phi7 = anon14;
					dispatch2 = 2;
				}
				if (phi8 == 8 && (dispatch2 == 1 || dispatch2 == 2 || dispatch2 == 0))
				{
					phi_in16 = phi4;
					phi17 = 0;
					phi_in18 = 1;
					phi19 = 1;
				}
			}
			if (dispatch2 == 10 || anon14 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 || anon14 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 || anon14 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8)
			{
				printf((uint8_t*)0x400f81);
			}
			if (dispatch2 == 8 || dispatch2 == 10 || anon14 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 || anon14 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 || anon14 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8)
			{
				anon20 = getchar();
				dispatch2 = 8;
			}
			if (dispatch2 == 9 || dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0)
			{
				anon21 = getchar();
				dispatch2 = 9;
			}
			if (((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0)
			{
				uint64_t anon22;
				if (dispatch2 == 9 || dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0)
				{
					anon22 = m.constprop.0(4195848, (__zext uint64_t)(anon20 - 64), (__zext uint64_t)(anon21 - 48));
					dispatch2 = 10;
				}
				anon23 = (uint32_t)anon22;
				if (anon23 != 0 && (dispatch2 == 9 || dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 || anon14 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0))
				{
					putchar(10);
					phi24 = 65;
					phi_in25 = 6297448;
				}
			}
			if (dispatch2 == 12 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0)
			{
				phi26 = phi_in25;
				putchar((uint32_t)phi24);
				phi_in27 = phi26;
			}
			if (dispatch2 == 11 || dispatch2 == 12 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0)
			{
				phi28 = phi_in27;
				anon29 = (uint8_t*)0x400f79;
				printf(anon29);
				phi_in27 = phi28 + 4;
				dispatch2 = 11;
			}
			if (phi26 + 28 == phi28)
			{
				if (dispatch2 == 11 || dispatch2 == 12 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0)
				{
					putchar(10);
					phi24 = phi24 + 1 & 0xffffffff;
					anon30 = phi26 + 40;
					phi_in25 = anon30;
					dispatch2 = 12;
				}
				if (anon30 == 6297768 && (dispatch2 == 11 || dispatch2 == 12 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0))
				{
					putchar(32);
					phi_in31 = 1;
				}
			}
			if (dispatch2 == 13 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768)
			{
				uint32_t phi32 = phi_in31;
				anon33 = (uint8_t*)0x400f7d;
				printf(anon33);
				anon34 = phi32 + 1;
				phi_in31 = anon34;
				dispatch2 = 13;
			}
			if (anon34 == 9 && (dispatch2 == 13 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768))
			{
				putchar(10);
				phi_in16 = phi4;
				phi17 = 0;
				phi_in18 = 1;
				phi19 = 1;
			}
			if (dispatch2 == 4 || dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 13 && anon34 == 9 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9)
			{
				phi_in35 = phi17;
				phi36 = phi_in18;
				phi_in37 = phi19;
				phi_in38 = 1;
				phi_in39 = 1;
			}
			if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 13 && anon34 == 9 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9)
			{
				uint64_t phi40 = phi_in16;
				uint64_t phi41 = phi_in35;
				phi42 = phi_in38;
				uint32_t phi43 = phi_in37;
				uint64_t phi44 = phi_in39;
				uint64_t anon45 = m.constprop.1(4195713, (__zext uint64_t)phi43, phi44);
				uint64_t anon46 = random();
				anon48 = (uint32_t)anon45 + (uint32_t)anon46 + ((uint32_t)((anon46 & 0xffffffff) / 6) - (uint32_t)(anon46 << 32 >> 32 >> 31)) * 4294967290;
				anon49 = (uint32_t)phi41;
				anon47 = anon48 > anon49 ? phi36 : phi40;
				phi_in16 = anon47;
				anon50 = anon48 > anon49 ? (__zext uint64_t)anon48 : phi41;
				phi_in35 = anon50;
				uint32_t anon51 = phi42 + 1;
				phi_in38 = anon51;
				anon52 = (uint32_t)phi36;
				phi_in37 = anon52;
				phi_in39 = (__zext uint64_t)anon51;
				dispatch2 = 3;
			}
			if (phi42 == 8)
			{
				if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 13 && anon34 == 9 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9)
				{
					phi_in16 = anon47;
					phi17 = anon50;
					uint32_t anon53 = anon52 + 1;
					phi_in18 = (__zext uint64_t)anon53;
					phi19 = anon53;
					dispatch2 = 4;
				}
				if (anon52 == 8)
				{
					anon54 = anon48 > anon49 ? anon48 : anon49;
					if ((dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 13 && anon34 == 9 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9) && anon54 == 0)
					{
						break;
					}
					if (anon54 != 0)
					{
						if (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 13 && anon34 == 9 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9)
						{
							uint64_t anon55 = m.constprop.1(4196072, anon47 & 0xffffffff, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
							anon56 = (uint32_t)anon55;
							if (anon56 == 0)
							{
								break;
							}
						}
						if (anon56 != 0 && (dispatch2 == 3 || dispatch2 == 4 || dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 || dispatch2 == 13 && anon34 == 9 || dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon23 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 || anon14 != 0 && anon23 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9))
						{
							putchar(10);
							phi57 = 65;
							phi_in58 = 6297448;
						}
					}
				}
			}
			if (dispatch2 == 6 || anon56 != 0 && dispatch2 == 3 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 4 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 13 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0)
			{
				phi59 = phi_in58;
				putchar((uint32_t)phi57);
				phi_in60 = phi59;
			}
			if (dispatch2 == 5 || dispatch2 == 6 || anon56 != 0 && dispatch2 == 3 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 4 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 13 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0)
			{
				phi61 = phi_in60;
				printf(anon29);
				phi_in60 = phi61 + 4;
				dispatch2 = 5;
			}
			if (phi59 + 28 == phi61)
			{
				if (dispatch2 == 5 || dispatch2 == 6 || anon56 != 0 && dispatch2 == 3 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 4 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 13 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0)
				{
					putchar(10);
					phi57 = phi57 + 1 & 0xffffffff;
					anon62 = phi59 + 40;
					phi_in58 = anon62;
					dispatch2 = 6;
				}
				if (anon62 == 6297768 && (dispatch2 == 5 || dispatch2 == 6 || anon56 != 0 && dispatch2 == 3 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 4 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 13 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon56 != 0 && dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon23 != 0 && anon56 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0))
				{
					putchar(32);
					phi_in63 = 1;
				}
			}
			if (dispatch2 == 7 || dispatch2 == 5 && phi59 + 28 == phi61 && anon62 == 6297768 || dispatch2 == 6 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 3 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 4 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 13 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon23 != 0 && anon56 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon23 != 0 && anon56 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon23 != 0 && anon56 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768)
			{
				uint32_t phi64 = phi_in63;
				printf(anon33);
				anon65 = phi64 + 1;
				phi_in63 = anon65;
				dispatch2 = 7;
			}
			if (anon65 == 9 && (dispatch2 == 7 || dispatch2 == 5 && phi59 + 28 == phi61 && anon62 == 6297768 || dispatch2 == 6 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 3 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 4 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && anon14 == 0 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 13 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 11 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon56 != 0 && dispatch2 == 12 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon23 != 0 && anon56 != 0 && dispatch2 == 9 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon23 != 0 && anon56 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon23 != 0 && anon56 != 0 && dispatch2 == 10 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 1 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 2 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768 || anon14 != 0 && anon23 != 0 && anon56 != 0 && dispatch2 == 0 && anon15 == 9 && phi8 == 8 && ((__zext uint8_t)(anon20 != 72) & (__zext uint8_t)(anon20 - 65 > 6)) == 0 && ((__zext uint8_t)(anon21 != 56) & (__zext uint8_t)(anon21 - 49 > 6)) == 0 && phi26 + 28 == phi28 && anon30 == 6297768 && anon34 == 9 && phi42 == 8 && anon52 == 8 && anon54 != 0 && phi59 + 28 == phi61 && anon62 == 6297768))
			{
				putchar(10);
				break;
			}
		}
		anon66 = phi3 - 1;
		phi_in1 = anon66;
		uint64_t phi_in5 = anon47;
		dispatch2 = 0;
	}
	while (anon66 != 0);
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
	uint32_t phi_in13;
	uint64_t phi14;
	uint64_t phi15;
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
			uint32_t phi12;
			while (true)
			{
				uint32_t phi_in9;
				int64_t anon17;
				int64_t anon18;
				uint32_t phi23;
				uint64_t phi24;
				if (dispatch8 == 0)
				{
					phi_in9 = phi6;
					phi10 = phi_in7;
					phi11 = phi5;
					phi12 = phi_in9;
					if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
					{
						phi_in13 = 1;
						phi14 = 1;
						phi15 = (((__zext uint64_t)*(uint32_t*)(phi10 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi10 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
				{
					phi11 = phi5;
					phi12 = phi_in9;
					anon17 = (__sext int64_t)*(uint32_t*)(phi10 + 6296832);
					anon18 = (__sext int64_t)*(uint32_t*)(phi10 + 6296896);
					anon16 = phi15 + (anon17 + anon18 * 10 << 2);
					if (!(*(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 255 || *(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 1))
					{
						break;
					}
				}
				bool anon19 = *(uint32_t*)(anon16 + (0 - anon17 << 2) + ((0 - anon18 << 2) - anon18 << 3)) == 1;
				if (anon19 && (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295))
				{
					uint32_t anon22 = (uint32_t)phi14;
					int64_t anon21 = (__sext int64_t)(*(uint32_t*)(phi10 + 6296832) * anon22) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi10 + 6296896) * anon22) + anon4) * 10 << 2;
					phi20 = anon21 + 6297408;
					phi23 = phi_in9;
					phi24 = anon21 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon19 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 4294967295 && anon19)
				{
					uint32_t phi25 = phi_in13;
					*(uint32_t*)phi20 = 0;
					uint32_t anon26 = phi23 + *(uint32_t*)phi24;
					phi11 = anon26;
					phi12 = anon26;
					uint32_t anon27 = phi25 - 1;
					phi_in13 = anon27;
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
			phi6 = phi12;
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
	phi_in13 = (uint32_t)phi14 + 1;
	phi14 = phi14 + 1 & 0xffffffff;
	phi15 = anon16;
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
		uint32_t phi9;
		uint64_t phi10;
		*anon1 = 4294967295;
		uint32_t phi5 = 4294967295;
		uint32_t phi_in6 = 4294967295;
		uint64_t phi_in7 = 0;
		dispatch8 = 0;
		do
		{
			uint32_t phi_in11;
			while (true)
			{
				uint32_t phi_in15;
				int64_t anon17;
				int64_t anon18;
				uint32_t phi23;
				uint64_t phi24;
				if (dispatch8 == 0)
				{
					phi9 = phi5;
					phi10 = phi_in7;
					phi_in11 = phi_in6;
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
					phi_in11 = phi_in6;
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
					phi23 = phi_in6;
					phi24 = anon21 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon19 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi10 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi10 + 6296896)) * 10 << 2) + 6297408) == 1 && anon19)
				{
					uint32_t phi25 = phi_in15;
					*(uint32_t*)phi20 = 0;
					uint32_t anon26 = phi23 + *(uint32_t*)phi24;
					phi9 = anon26;
					phi_in11 = anon26;
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
			phi5 = phi9;
			phi_in6 = phi_in11;
			phi_in7 = phi10 + 4;
			dispatch8 = 0;
		}
		while (phi10 != 28);
		if (phi9 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi9;
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
