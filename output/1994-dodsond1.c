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
	uint32_t anon74;
	l(4195589);
	uint32_t phi_in1 = 60;
	uint32_t dispatch2 = 0;
	do
	{
		uint64_t anon54;
		uint32_t phi3;
		while (true)
		{
			uint32_t anon73;
			uint32_t phi_in71;
			uint64_t anon70;
			uint64_t phi69;
			uint64_t phi66;
			uint64_t phi_in65;
			uint64_t phi_in64;
			uint32_t anon63;
			uint32_t anon59;
			uint64_t anon57;
			uint32_t anon56;
			uint32_t anon55;
			uint32_t phi_in44;
			uint64_t phi39;
			uint64_t phi67;
			uint32_t anon36;
			uint32_t phi_in33;
			uint64_t phi_in41;
			uint64_t anon32;
			uint32_t phi_in20;
			uint64_t phi30;
			uint64_t phi_in29;
			uint64_t phi_in42;
			uint32_t phi_in43;
			uint32_t anon24;
			uint8_t* anon35;
			uint64_t phi28;
			uint32_t phi_in7;
			uint64_t phi_in45;
			uint64_t phi_in26;
			uint32_t anon21;
			uint64_t phi27;
			uint32_t anon61;
			uint32_t anon15;
			uint64_t phi_in19;
			uint32_t phi48;
			uint8_t* anon31;
			uint32_t anon16;
			uint32_t phi_in11;
			uint32_t anon22;
			uint64_t phi_in68;
			uint32_t phi_in10;
			uint64_t phi_in25;
			uint32_t phi8;
			uint64_t phi_in18;
			uint32_t phi_in6;
			uint64_t phi_in17;
			uint64_t anon53;
			uint64_t phi4;
			if (dispatch2 == 0)
			{
				phi3 = phi_in1;
				phi4 = phi_in5;
				phi_in6 = 1;
				phi_in7 = 0;
			}
			if (dispatch2 == 1 || dispatch2 == 0)
			{
				phi8 = phi_in6;
				uint32_t phi9 = phi_in7;
				phi_in10 = phi9;
				phi_in11 = 1;
			}
			if (dispatch2 == 13 || dispatch2 == 1 || dispatch2 == 0)
			{
				uint32_t phi12 = phi_in10;
				uint32_t phi13 = phi_in11;
				uint64_t anon14 = m.constprop.0(4195644, (__zext uint64_t)phi8, (__zext uint64_t)phi13);
				anon15 = phi12 + (uint32_t)anon14;
				phi_in10 = anon15;
				anon16 = phi13 + 1;
				phi_in11 = anon16;
				dispatch2 = 13;
			}
			if (anon16 == 9)
			{
				if (dispatch2 == 13 || dispatch2 == 1 || dispatch2 == 0)
				{
					phi_in6 = phi8 + 1;
					phi_in7 = anon15;
					dispatch2 = 1;
				}
				if (phi8 == 8 && (dispatch2 == 13 || dispatch2 == 1 || dispatch2 == 0))
				{
					phi_in17 = phi4;
					phi_in18 = 0;
					phi_in19 = 1;
					phi_in20 = 1;
				}
			}
			if (dispatch2 == 8 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8)
			{
				printf((uint8_t*)0x400f81);
			}
			if (dispatch2 == 12 || dispatch2 == 8 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8)
			{
				anon21 = getchar();
				dispatch2 = 12;
			}
			if (dispatch2 == 7 || dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0)
			{
				anon22 = getchar();
				dispatch2 = 7;
			}
			if (((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0)
			{
				uint64_t anon23;
				if (dispatch2 == 7 || dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0)
				{
					anon23 = m.constprop.0(4195848, (__zext uint64_t)(anon21 - 64), (__zext uint64_t)(anon22 - 48));
					dispatch2 = 8;
				}
				anon24 = (uint32_t)anon23;
				if (anon24 != 0 && (dispatch2 == 7 || dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0))
				{
					putchar(10);
					phi_in25 = 65;
					phi_in26 = 6297448;
				}
			}
			if (dispatch2 == 11 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0)
			{
				phi27 = phi_in25;
				phi28 = phi_in26;
				putchar((uint32_t)phi27);
				phi_in29 = phi28;
			}
			if (dispatch2 == 9 || dispatch2 == 11 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0)
			{
				phi30 = phi_in29;
				anon31 = (uint8_t*)0x400f79;
				printf(anon31);
				phi_in29 = phi30 + 4;
				dispatch2 = 9;
			}
			if (phi28 + 28 == phi30)
			{
				if (dispatch2 == 9 || dispatch2 == 11 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0)
				{
					putchar(10);
					phi_in25 = phi27 + 1 & 0xffffffff;
					anon32 = phi28 + 40;
					phi_in26 = anon32;
					dispatch2 = 11;
				}
				if (anon32 == 6297768 && (dispatch2 == 9 || dispatch2 == 11 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0))
				{
					putchar(32);
					phi_in33 = 1;
				}
			}
			if (dispatch2 == 10 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768)
			{
				uint32_t phi34 = phi_in33;
				anon35 = (uint8_t*)0x400f7d;
				printf(anon35);
				anon36 = phi34 + 1;
				phi_in33 = anon36;
				dispatch2 = 10;
			}
			if (anon36 == 9 && (dispatch2 == 10 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768))
			{
				putchar(10);
				phi_in17 = phi4;
				phi_in18 = 0;
				phi_in19 = 1;
				phi_in20 = 1;
			}
			if (dispatch2 == 2 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 10 && anon36 == 9 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
			{
				uint64_t phi37 = phi_in17;
				uint64_t phi38 = phi_in18;
				phi39 = phi_in19;
				uint32_t phi40 = phi_in20;
				phi_in41 = phi37;
				phi_in42 = phi38;
				phi_in43 = 1;
				phi_in44 = phi40;
				phi_in45 = 1;
			}
			if (dispatch2 == 6 || dispatch2 == 2 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 10 && anon36 == 9 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
			{
				uint64_t phi46 = phi_in41;
				uint64_t phi47 = phi_in42;
				phi48 = phi_in43;
				uint32_t phi49 = phi_in44;
				uint64_t phi50 = phi_in45;
				uint64_t anon51 = m.constprop.1(4195713, (__zext uint64_t)phi49, phi50);
				uint64_t anon52 = random();
				anon55 = (uint32_t)anon51 + (uint32_t)anon52 + ((uint32_t)((anon52 & 0xffffffff) * 715827883 >> 32) - (uint32_t)(anon52 << 32 >> 32 >> 31)) * 4294967290;
				anon56 = (uint32_t)phi47;
				anon54 = anon55 > anon56 ? phi39 : phi46;
				anon53 = anon54 & 0xffffffff;
				phi_in41 = anon53;
				anon57 = anon55 > anon56 ? (__zext uint64_t)anon55 : phi47;
				phi_in42 = anon57;
				uint32_t anon58 = phi48 + 1;
				phi_in43 = anon58;
				anon59 = (uint32_t)phi39;
				phi_in44 = anon59;
				phi_in45 = (__zext uint64_t)anon58;
				dispatch2 = 6;
			}
			if (phi48 == 8)
			{
				if (dispatch2 == 6 || dispatch2 == 2 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 10 && anon36 == 9 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
				{
					phi_in17 = anon54;
					phi_in18 = anon57;
					uint32_t anon60 = anon59 + 1;
					phi_in19 = (__zext uint64_t)anon60;
					phi_in20 = anon60;
					dispatch2 = 2;
				}
				if (anon59 == 8)
				{
					anon61 = anon55 > anon56 ? anon55 : anon56;
					if ((dispatch2 == 6 || dispatch2 == 2 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 10 && anon36 == 9 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9) && anon61 == 0)
					{
						break;
					}
					if (anon61 != 0)
					{
						if (dispatch2 == 6 || dispatch2 == 2 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 10 && anon36 == 9 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
						{
							uint64_t anon62 = m.constprop.1(4196072, anon53, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
							anon63 = (uint32_t)anon62;
							if (anon63 == 0)
							{
								break;
							}
						}
						if (anon63 != 0 && (dispatch2 == 6 || dispatch2 == 2 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 10 && anon36 == 9 || dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9))
						{
							putchar(10);
							phi_in64 = 65;
							phi_in65 = 6297448;
						}
					}
				}
			}
			if (dispatch2 == 4 || anon63 != 0 && dispatch2 == 6 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 2 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 10 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0)
			{
				phi66 = phi_in64;
				phi67 = phi_in65;
				putchar((uint32_t)phi66);
				phi_in68 = phi67;
			}
			if (dispatch2 == 5 || dispatch2 == 4 || anon63 != 0 && dispatch2 == 6 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 2 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 10 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0)
			{
				phi69 = phi_in68;
				printf(anon31);
				phi_in68 = phi69 + 4;
				dispatch2 = 5;
			}
			if (phi67 + 28 == phi69)
			{
				if (dispatch2 == 5 || dispatch2 == 4 || anon63 != 0 && dispatch2 == 6 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 2 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 10 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0)
				{
					putchar(10);
					phi_in64 = phi66 + 1 & 0xffffffff;
					anon70 = phi67 + 40;
					phi_in65 = anon70;
					dispatch2 = 4;
				}
				if (anon70 == 6297768 && (dispatch2 == 5 || dispatch2 == 4 || anon63 != 0 && dispatch2 == 6 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 2 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 10 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon63 != 0 && dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon24 != 0 && anon63 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0))
				{
					putchar(32);
					phi_in71 = 1;
				}
			}
			if (anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon24 != 0 && anon63 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon24 != 0 && anon63 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 10 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || dispatch2 == 5 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || dispatch2 == 4 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 2 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 6 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || dispatch2 == 3 || anon24 != 0 && anon63 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768)
			{
				uint32_t phi72 = phi_in71;
				printf(anon35);
				anon73 = phi72 + 1;
				phi_in71 = anon73;
				dispatch2 = 3;
			}
			if (anon73 == 9 && (anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon24 != 0 && anon63 != 0 && dispatch2 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 10 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || dispatch2 == 5 && phi67 + 28 == phi69 && anon70 == 6297768 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 9 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || dispatch2 == 4 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 11 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 6 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon15 != 0 && anon24 != 0 && anon63 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 2 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon24 != 0 && anon63 != 0 && dispatch2 == 7 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon24 != 0 && anon63 != 0 && dispatch2 == 12 && ((__zext uint8_t)(anon21 != 72) & (__zext uint8_t)(anon21 - 65 > 6)) == 0 && ((__zext uint8_t)(anon22 != 56) & (__zext uint8_t)(anon22 - 49 > 6)) == 0 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || anon63 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768 || dispatch2 == 3 || anon63 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi48 == 8 && anon59 == 8 && anon61 != 0 && phi67 + 28 == phi69 && anon70 == 6297768))
			{
				putchar(10);
				break;
			}
		}
		anon74 = phi3 - 1;
		phi_in1 = anon74;
		uint64_t phi_in5 = anon54;
		dispatch2 = 0;
	}
	while (anon74 != 0);
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
	uint64_t phi_in25;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint32_t phi37;
		uint64_t phi11;
		*anon1 = 1;
		uint32_t phi_in5 = 1;
		uint32_t phi_in6 = 1;
		uint64_t phi_in7 = 0;
		uint32_t dispatch8 = 0;
		do
		{
			uint32_t phi_in12;
			uint32_t phi_in13;
			while (true)
			{
				uint32_t phi_in28;
				uint32_t phi_in24;
				uint64_t anon20;
				uint32_t phi9;
				uint64_t phi18;
				int64_t anon21;
				uint32_t phi17;
				uint32_t phi_in14;
				uint32_t phi10;
				uint64_t phi_in15;
				uint64_t phi_in29;
				int64_t anon22;
				uint64_t phi_in16;
				if (dispatch8 == 0)
				{
					phi9 = phi_in5;
					phi10 = phi_in6;
					phi11 = phi_in7;
					phi_in12 = phi9;
					phi_in13 = phi10;
					if (*(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 4294967295)
					{
						phi_in14 = 1;
						phi_in15 = 1;
						phi_in16 = (((__zext uint64_t)*(uint32_t*)(phi11 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi11 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 2 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 4294967295)
				{
					phi17 = phi_in14;
					phi18 = phi_in15;
					uint64_t phi19 = phi_in16;
					phi_in12 = phi9;
					phi_in13 = phi10;
					anon21 = (__sext int64_t)*(uint32_t*)(phi11 + 6296832);
					anon22 = (__sext int64_t)*(uint32_t*)(phi11 + 6296896);
					anon20 = phi19 + (anon21 + anon22 * 10 << 2);
					if (!(*(uint32_t*)(anon20 + (0 - anon21 << 2) + ((0 - anon22 << 2) - anon22 << 3)) == 255 || *(uint32_t*)(anon20 + (0 - anon21 << 2) + ((0 - anon22 << 2) - anon22 << 3)) == 1))
					{
						break;
					}
				}
				if ((*(uint32_t*)(anon20 + (0 - anon21 << 2) + ((0 - anon22 << 2) - anon22 << 3)) == 255) && (dispatch8 == 2 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 4294967295))
				{
					phi_in14 = (uint32_t)phi18 + 1;
					phi_in15 = phi18 + 1 & 0xffffffff;
					phi_in16 = anon20;
					dispatch8 = 2;
				}
				bool anon23 = *(uint32_t*)(anon20 + (0 - anon21 << 2) + ((0 - anon22 << 2) - anon22 << 3)) == 1;
				if (anon23 && (dispatch8 == 2 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 4294967295))
				{
					phi_in24 = phi17;
					uint32_t anon27 = (uint32_t)phi18;
					int64_t anon26 = (__sext int64_t)(*(uint32_t*)(phi11 + 6296832) * anon27) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi11 + 6296896) * anon27) + anon4) * 10 << 2;
					phi_in25 = anon26 + 6297408;
					phi_in28 = phi10;
					phi_in29 = anon26 + 6296960;
				}
				if (dispatch8 == 1 || dispatch8 == 2 && anon23 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 4294967295 && anon23)
				{
					uint32_t phi30 = phi_in24;
					uint64_t phi31 = phi_in25;
					uint32_t phi32 = phi_in28;
					uint64_t phi33 = phi_in29;
					*(uint32_t*)phi31 = 0;
					uint32_t anon34 = phi32 + *(uint32_t*)phi33;
					phi_in12 = anon34;
					phi_in13 = anon34;
					uint32_t anon35 = phi30 - 1;
					phi_in24 = anon35;
					int64_t anon36 = (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296896)) * 10 << 2;
					phi_in25 = phi31 + anon36;
					phi_in28 = anon34;
					phi_in29 = phi33 + anon36;
					dispatch8 = 1;
					if (anon35 == 0)
					{
						break;
					}
				}
			}
			phi37 = phi_in12;
			uint32_t phi38 = phi_in13;
			phi_in5 = phi37;
			phi_in6 = phi38;
			phi_in7 = phi11 + 4;
			dispatch8 = 0;
		}
		while (phi11 != 28);
		if (phi37 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi37;
		}
	}
	else 
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t anon20;
	uint64_t phi18;
	uint64_t phi_in15;
	uint32_t phi_in14;
	uint64_t phi_in16;
	uint32_t dispatch8;
	uint64_t phi_in25;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi11;
		uint32_t phi37;
		*anon1 = 4294967295;
		uint32_t phi_in5 = 4294967295;
		uint32_t phi_in6 = 4294967295;
		uint64_t phi_in7 = 0;
		dispatch8 = 0;
		do
		{
			uint32_t phi_in13;
			uint32_t phi_in12;
			while (true)
			{
				uint64_t phi_in29;
				uint32_t phi_in28;
				int64_t anon21;
				uint32_t phi_in24;
				int64_t anon22;
				uint32_t phi17;
				uint32_t phi10;
				uint32_t phi9;
				if (dispatch8 == 0)
				{
					phi9 = phi_in5;
					phi10 = phi_in6;
					phi11 = phi_in7;
					phi_in12 = phi9;
					phi_in13 = phi10;
					if (*(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 1)
					{
						phi_in14 = 1;
						phi_in15 = 1;
						phi_in16 = (((__zext uint64_t)*(uint32_t*)(phi11 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi11 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 1)
				{
					phi17 = phi_in14;
					phi18 = phi_in15;
					uint64_t phi19 = phi_in16;
					phi_in12 = phi9;
					phi_in13 = phi10;
					anon21 = (__sext int64_t)*(uint32_t*)(phi11 + 6296832);
					anon22 = (__sext int64_t)*(uint32_t*)(phi11 + 6296896);
					anon20 = phi19 + (anon21 + anon22 * 10 << 2);
					if (!(*(uint32_t*)(anon20 + (0 - anon21 << 2) + ((0 - anon22 << 2) - anon22 << 3)) == 1 || *(uint32_t*)(anon20 + (0 - anon21 << 2) + ((0 - anon22 << 2) - anon22 << 3)) == 255))
					{
						break;
					}
				}
				bool anon23 = *(uint32_t*)(anon20 + (0 - anon21 << 2) + ((0 - anon22 << 2) - anon22 << 3)) == 255;
				if (anon23 && (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 1))
				{
					phi_in24 = phi17;
					uint32_t anon27 = (uint32_t)phi18;
					int64_t anon26 = (__sext int64_t)(*(uint32_t*)(phi11 + 6296832) * anon27) + anon3 + ((__sext int64_t)(*(uint32_t*)(phi11 + 6296896) * anon27) + anon4) * 10 << 2;
					phi_in25 = anon26 + 6297408;
					phi_in28 = phi10;
					phi_in29 = anon26 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon23 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)(*(uint32_t*)(phi11 + 6296832) + (uint32_t)arg2) + (__sext int64_t)(*(uint32_t*)(phi11 + 6296896) + (uint32_t)arg1) * 10 << 2) + 6297408) == 1 && anon23)
				{
					uint32_t phi30 = phi_in24;
					uint64_t phi31 = phi_in25;
					uint32_t phi32 = phi_in28;
					uint64_t phi33 = phi_in29;
					*(uint32_t*)phi31 = 0;
					uint32_t anon34 = phi32 + *(uint32_t*)phi33;
					phi_in12 = anon34;
					phi_in13 = anon34;
					uint32_t anon35 = phi30 - 1;
					phi_in24 = anon35;
					int64_t anon36 = (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296896)) * 10 << 2;
					phi_in25 = phi31 + anon36;
					phi_in28 = anon34;
					phi_in29 = phi33 + anon36;
					dispatch8 = 2;
					if (anon35 == 0)
					{
						break;
					}
				}
			}
			phi37 = phi_in12;
			uint32_t phi38 = phi_in13;
			phi_in5 = phi37;
			phi_in6 = phi38;
			phi_in7 = phi11 + 4;
			dispatch8 = 0;
		}
		while (phi11 != 28);
		if (phi37 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi37;
		}
	}
	else 
	{
		return 0;
	}
	phi_in14 = (uint32_t)phi18 + 1;
	phi_in15 = phi18 + 1 & 0xffffffff;
	phi_in16 = anon20;
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
	uint64_t anon8;
	uint32_t anon11;
	putchar(10);
	uint64_t phi_in1 = 65;
	uint64_t phi_in2 = 6297448;
	uint32_t dispatch3 = 0;
	do
	{
		uint64_t phi5;
		uint64_t phi4;
		while (true)
		{
			uint64_t phi_in6;
			if (dispatch3 == 0)
			{
				phi4 = phi_in1;
				phi5 = phi_in2;
				putchar((uint32_t)phi4);
				phi_in6 = phi5;
			}
			uint64_t phi7 = phi_in6;
			printf((uint8_t*)0x400f79);
			phi_in6 = phi7 + 4;
			dispatch3 = 1;
			if (phi7 == phi5 + 28)
			{
				break;
			}
		}
		putchar(10);
		phi_in1 = phi4 + 1 & 0xffffffff;
		anon8 = phi5 + 40;
		phi_in2 = anon8;
		dispatch3 = 0;
	}
	while (anon8 != 6297768);
	putchar(32);
	uint32_t phi_in9 = 1;
	do
	{
		uint32_t phi10 = phi_in9;
		printf((uint8_t*)0x400f7d);
		anon11 = phi10 + 1;
		phi_in9 = anon11;
	}
	while (anon11 != 9);
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
