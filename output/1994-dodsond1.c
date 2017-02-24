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
	uint32_t anon73;
	l(4195589);
	uint32_t phi_in1 = 60;
	uint32_t dispatch2 = 0;
	do
	{
		uint64_t phi56;
		uint32_t phi3;
		while (true)
		{
			uint32_t anon72;
			uint32_t phi_in70;
			uint64_t phi66;
			uint64_t phi_in64;
			uint32_t anon62;
			uint32_t anon59;
			uint64_t phi_in63;
			uint32_t phi47;
			uint64_t phi_in67;
			uint32_t phi_in44;
			uint32_t phi_in43;
			uint64_t phi39;
			uint32_t phi_in7;
			uint32_t anon36;
			uint64_t phi68;
			uint32_t anon16;
			uint64_t phi_in29;
			uint64_t phi28;
			uint64_t phi27;
			uint64_t phi_in25;
			uint32_t anon21;
			uint64_t phi_in17;
			uint8_t* anon31;
			uint64_t phi_in26;
			uint64_t phi_in18;
			uint64_t phi_in19;
			uint64_t phi57;
			uint32_t phi_in33;
			uint64_t anon32;
			uint64_t phi30;
			uint32_t anon24;
			uint64_t phi65;
			uint64_t phi_in41;
			uint32_t phi58;
			uint32_t anon22;
			uint64_t phi_in42;
			uint32_t anon15;
			uint32_t phi_in11;
			uint32_t phi_in20;
			uint32_t phi_in6;
			uint32_t phi8;
			uint8_t* anon35;
			uint64_t phi4;
			uint64_t anon69;
			uint32_t phi_in10;
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
			if (dispatch2 == 11 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8)
			{
				printf((uint8_t*)0x400f81);
			}
			if (dispatch2 == 12 || dispatch2 == 11 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8)
			{
				anon21 = getchar();
				dispatch2 = 12;
			}
			if (dispatch2 == 2 || dispatch2 == 12 && anon21 - 65 < 8 || dispatch2 == 11 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8)
			{
				anon22 = getchar();
				dispatch2 = 2;
			}
			if (anon22 - 49 < 8)
			{
				uint64_t anon23;
				if (dispatch2 == 2 || dispatch2 == 12 && anon21 - 65 < 8 || dispatch2 == 11 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8)
				{
					anon23 = m.constprop.0(4195848, (__zext uint64_t)(anon21 - 64), (__zext uint64_t)(anon22 - 48));
					dispatch2 = 11;
				}
				anon24 = (uint32_t)anon23;
				if (anon24 != 0 && (dispatch2 == 2 || dispatch2 == 12 && anon21 - 65 < 8 || dispatch2 == 11 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 || anon15 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8))
				{
					putchar(10);
					phi_in25 = 65;
					phi_in26 = 6297448;
				}
			}
			if (dispatch2 == 3 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8)
			{
				phi27 = phi_in25;
				phi28 = phi_in26;
				putchar((uint32_t)phi27);
				phi_in29 = phi28;
			}
			if (dispatch2 == 10 || dispatch2 == 3 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8)
			{
				phi30 = phi_in29;
				anon31 = (uint8_t*)0x400f79;
				printf(anon31);
				phi_in29 = phi30 + 4;
				dispatch2 = 10;
			}
			if (phi28 + 28 == phi30)
			{
				if (dispatch2 == 10 || dispatch2 == 3 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8)
				{
					putchar(10);
					phi_in25 = phi27 + 1 & 0xffffffff;
					anon32 = phi28 + 40;
					phi_in26 = anon32;
					dispatch2 = 3;
				}
				if (anon32 == 6297768 && (dispatch2 == 10 || dispatch2 == 3 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8))
				{
					putchar(32);
					phi_in33 = 1;
				}
			}
			if (dispatch2 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768)
			{
				uint32_t phi34 = phi_in33;
				anon35 = (uint8_t*)0x400f7d;
				printf(anon35);
				anon36 = phi34 + 1;
				phi_in33 = anon36;
				dispatch2 = 9;
			}
			if (anon36 == 9 && (dispatch2 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768))
			{
				putchar(10);
				phi_in17 = phi4;
				phi_in18 = 0;
				phi_in19 = 1;
				phi_in20 = 1;
			}
			if (dispatch2 == 7 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 9 && anon36 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
			{
				uint64_t phi37 = phi_in17;
				uint64_t phi38 = phi_in18;
				phi39 = phi_in19;
				uint32_t phi40 = phi_in20;
				phi_in41 = phi37;
				phi_in42 = phi38;
				phi_in43 = 1;
				phi_in44 = phi40;
			}
			if (dispatch2 == 8 || dispatch2 == 7 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 9 && anon36 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
			{
				uint32_t phi_in53;
				uint64_t phi45 = phi_in41;
				uint64_t phi46 = phi_in42;
				phi47 = phi_in43;
				uint32_t phi48 = phi_in44;
				uint64_t anon49 = m.constprop.1(4195713, (__zext uint64_t)phi48, (__zext uint64_t)phi47);
				uint64_t anon50 = random();
				uint64_t phi_in51 = phi45;
				uint64_t phi_in52 = phi46;
				uint32_t anon54 = (uint32_t)phi46;
				phi_in53 = anon54;
				uint32_t anon55 = (uint32_t)anon49 + (uint32_t)anon50 + ((uint32_t)((anon50 & 0xffffffff) / 6) - (uint32_t)(anon50 << 32 >> 32 >> 31)) * 4294967290;
				if (anon55 > anon54)
				{
					*(uint32_t*)(arg1 - 72) = phi47;
					phi_in51 = phi39;
					phi_in52 = (__zext uint64_t)anon55;
					phi_in53 = anon55;
				}
				phi56 = phi_in51;
				phi57 = phi_in52;
				phi58 = phi_in53;
				phi_in41 = phi56;
				phi_in42 = phi57;
				phi_in43 = phi47 + 1;
				anon59 = (uint32_t)phi39;
				phi_in44 = anon59;
				dispatch2 = 8;
			}
			if (phi47 == 8)
			{
				if (dispatch2 == 8 || dispatch2 == 7 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 9 && anon36 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
				{
					phi_in17 = phi56;
					phi_in18 = phi57;
					uint32_t anon60 = anon59 + 1;
					phi_in19 = (__zext uint64_t)anon60;
					phi_in20 = anon60;
					dispatch2 = 7;
				}
				if (anon59 == 8)
				{
					if ((dispatch2 == 8 || dispatch2 == 7 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 9 && anon36 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9) && phi58 == 0)
					{
						break;
					}
					if (phi58 != 0)
					{
						if (dispatch2 == 8 || dispatch2 == 7 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 9 && anon36 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9)
						{
							uint64_t anon61 = m.constprop.1(4196072, phi56 & 0xffffffff, 0);
							anon62 = (uint32_t)anon61;
							if (anon62 == 0)
							{
								break;
							}
						}
						if (anon62 != 0 && (dispatch2 == 8 || dispatch2 == 7 || dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 || dispatch2 == 9 && anon36 == 9 || dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon24 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 || anon15 != 0 && anon24 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9))
						{
							putchar(10);
							phi_in63 = 65;
							phi_in64 = 6297448;
						}
					}
				}
			}
			if (dispatch2 == 4 || anon62 != 0 && dispatch2 == 8 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 7 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 9 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0)
			{
				phi65 = phi_in63;
				phi66 = phi_in64;
				putchar((uint32_t)phi65);
				phi_in67 = phi66;
			}
			if (dispatch2 == 6 || dispatch2 == 4 || anon62 != 0 && dispatch2 == 8 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 7 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 9 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0)
			{
				phi68 = phi_in67;
				printf(anon31);
				phi_in67 = phi68 + 4;
				dispatch2 = 6;
			}
			if (phi66 + 28 == phi68)
			{
				if (dispatch2 == 6 || dispatch2 == 4 || anon62 != 0 && dispatch2 == 8 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 7 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 9 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0)
				{
					putchar(10);
					phi_in63 = phi65 + 1 & 0xffffffff;
					anon69 = phi66 + 40;
					phi_in64 = anon69;
					dispatch2 = 4;
				}
				if (anon69 == 6297768 && (dispatch2 == 6 || dispatch2 == 4 || anon62 != 0 && dispatch2 == 8 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 7 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 9 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon62 != 0 && dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon24 != 0 && anon62 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0))
				{
					putchar(32);
					phi_in70 = 1;
				}
			}
			if (anon24 != 0 && anon62 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 8 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 7 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon24 != 0 && anon62 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || dispatch2 == 6 && phi66 + 28 == phi68 && anon69 == 6297768 || dispatch2 == 4 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || dispatch2 == 5 || anon24 != 0 && anon62 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 9 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768)
			{
				uint32_t phi71 = phi_in70;
				printf(anon35);
				anon72 = phi71 + 1;
				phi_in70 = anon72;
				dispatch2 = 5;
			}
			if (anon72 == 9 && (dispatch2 == 6 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 10 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 9 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 8 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 3 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || dispatch2 == 4 && phi66 + 28 == phi68 && anon69 == 6297768 || anon24 != 0 && anon62 != 0 && dispatch2 == 12 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 13 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 7 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon24 != 0 && anon62 != 0 && dispatch2 == 2 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon15 != 0 && anon24 != 0 && anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || dispatch2 == 5 || anon62 != 0 && dispatch2 == 0 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon24 != 0 && anon62 != 0 && dispatch2 == 11 && anon21 - 65 < 8 && anon22 - 49 < 8 && phi28 + 28 == phi30 && anon32 == 6297768 && anon36 == 9 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768 || anon62 != 0 && dispatch2 == 1 && anon16 == 9 && phi8 == 8 && anon15 == 0 && phi47 == 8 && anon59 == 8 && phi58 != 0 && phi66 + 28 == phi68 && anon69 == 6297768))
			{
				putchar(10);
				break;
			}
		}
		anon73 = phi3 - 1;
		phi_in1 = anon73;
		uint64_t phi_in5 = phi56;
		dispatch2 = 0;
	}
	while (anon73 != 0);
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
	uint64_t phi_in28;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint32_t phi39;
		uint64_t phi11;
		*anon1 = 1;
		uint32_t phi_in5 = 1;
		uint32_t phi_in6 = 1;
		uint64_t phi_in7 = 0;
		uint32_t dispatch8 = 0;
		do
		{
			uint32_t phi_in13;
			uint32_t phi_in12;
			while (true)
			{
				uint64_t phi_in31;
				uint32_t phi_in27;
				uint64_t phi19;
				int64_t anon24;
				uint64_t phi20;
				uint64_t phi_in17;
				uint32_t phi18;
				uint64_t phi_in15;
				uint32_t phi_in14;
				int64_t anon23;
				uint32_t phi10;
				uint32_t phi9;
				uint64_t anon22;
				uint32_t phi_in30;
				uint64_t phi_in16;
				if (dispatch8 == 0)
				{
					phi9 = phi_in5;
					phi10 = phi_in6;
					phi11 = phi_in7;
					phi_in12 = phi9;
					phi_in13 = phi10;
					if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
					{
						phi_in14 = 1;
						phi_in15 = 1;
						phi_in16 = 1;
						phi_in17 = (((__zext uint64_t)*(uint32_t*)(phi11 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi11 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 2 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
				{
					phi18 = phi_in14;
					phi19 = phi_in15;
					phi20 = phi_in16;
					uint64_t phi21 = phi_in17;
					phi_in12 = phi9;
					phi_in13 = phi10;
					anon23 = (__sext int64_t)*(uint32_t*)(phi11 + 6296832);
					anon24 = (__sext int64_t)*(uint32_t*)(phi11 + 6296896);
					anon22 = phi21 + (anon23 + anon24 * 10 << 2);
					if (!(*(uint32_t*)(anon22 + (0 - anon23 << 2) + ((0 - anon24 << 2) - anon24 << 3)) == 255 || *(uint32_t*)(anon22 + (0 - anon23 << 2) + ((0 - anon24 << 2) - anon24 << 3)) == 1))
					{
						break;
					}
				}
				if ((*(uint32_t*)(anon22 + (0 - anon23 << 2) + ((0 - anon24 << 2) - anon24 << 3)) == 255) && (dispatch8 == 2 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 4294967295))
				{
					phi_in14 = (uint32_t)phi19 + 1;
					uint64_t anon25 = phi19 + 1;
					phi_in15 = anon25 & 0xffffffff;
					phi_in16 = anon25;
					phi_in17 = anon22;
					dispatch8 = 2;
				}
				bool anon26 = *(uint32_t*)(anon22 + (0 - anon23 << 2) + ((0 - anon24 << 2) - anon24 << 3)) == 1;
				if (anon26 && (dispatch8 == 2 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 4294967295))
				{
					phi_in27 = phi18;
					int64_t anon29 = (__sext int64_t)((uint32_t)phi20 * *(uint32_t*)(phi11 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi19 * *(uint32_t*)(phi11 + 6296896)) + anon4) * 10 << 2;
					phi_in28 = anon29 + 6297408;
					phi_in30 = phi10;
					phi_in31 = anon29 + 6296960;
				}
				if (dispatch8 == 1 || dispatch8 == 2 && anon26 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 4294967295 && anon26)
				{
					uint32_t phi32 = phi_in27;
					uint64_t phi33 = phi_in28;
					uint32_t phi34 = phi_in30;
					uint64_t phi35 = phi_in31;
					*(uint32_t*)phi33 = 0;
					uint32_t anon36 = phi34 + *(uint32_t*)phi35;
					phi_in12 = anon36;
					phi_in13 = anon36;
					uint32_t anon37 = phi32 - 1;
					phi_in27 = anon37;
					int64_t anon38 = (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296896)) * 10 << 2;
					phi_in28 = phi33 + anon38;
					phi_in30 = anon36;
					phi_in31 = phi35 + anon38;
					dispatch8 = 1;
					if (anon37 == 0)
					{
						break;
					}
				}
			}
			phi39 = phi_in12;
			uint32_t phi40 = phi_in13;
			phi_in5 = phi39;
			phi_in6 = phi40;
			phi_in7 = phi11 + 4;
			dispatch8 = 0;
		}
		while (phi11 != 28);
		if (phi39 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi39;
		}
	}
	else 
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in27;
	uint64_t anon22;
	uint64_t phi19;
	uint32_t phi_in14;
	uint64_t phi_in17;
	uint64_t phi_in16;
	uint64_t phi_in15;
	uint32_t dispatch8;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint32_t phi38;
		uint64_t phi11;
		*anon1 = 4294967295;
		uint32_t phi_in5 = 4294967295;
		uint32_t phi_in6 = 4294967295;
		uint64_t phi_in7 = 0;
		dispatch8 = 0;
		do
		{
			uint32_t phi_in12;
			uint32_t phi_in13;
			while (true)
			{
				uint64_t phi_in30;
				uint32_t phi_in29;
				uint32_t phi_in26;
				int64_t anon24;
				int64_t anon23;
				uint32_t phi18;
				uint32_t phi10;
				uint64_t phi20;
				uint32_t phi9;
				if (dispatch8 == 0)
				{
					phi9 = phi_in5;
					phi10 = phi_in6;
					phi11 = phi_in7;
					phi_in12 = phi9;
					phi_in13 = phi10;
					if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 1)
					{
						phi_in14 = 1;
						phi_in15 = 1;
						phi_in16 = 1;
						phi_in17 = (((__zext uint64_t)*(uint32_t*)(phi11 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi11 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
					}
					else 
					{
						break;
					}
				}
				if (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 1)
				{
					phi18 = phi_in14;
					phi19 = phi_in15;
					phi20 = phi_in16;
					uint64_t phi21 = phi_in17;
					phi_in12 = phi9;
					phi_in13 = phi10;
					anon23 = (__sext int64_t)*(uint32_t*)(phi11 + 6296832);
					anon24 = (__sext int64_t)*(uint32_t*)(phi11 + 6296896);
					anon22 = phi21 + (anon23 + anon24 * 10 << 2);
					if (!(*(uint32_t*)(anon22 + (0 - anon23 << 2) + ((0 - anon24 << 2) - anon24 << 3)) == 1 || *(uint32_t*)(anon22 + (0 - anon23 << 2) + ((0 - anon24 << 2) - anon24 << 3)) == 255))
					{
						break;
					}
				}
				bool anon25 = *(uint32_t*)(anon22 + (0 - anon23 << 2) + ((0 - anon24 << 2) - anon24 << 3)) == 255;
				if (anon25 && (dispatch8 == 1 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 1))
				{
					phi_in26 = phi18;
					int64_t anon28 = (__sext int64_t)((uint32_t)phi20 * *(uint32_t*)(phi11 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi19 * *(uint32_t*)(phi11 + 6296896)) + anon4) * 10 << 2;
					phi_in27 = anon28 + 6297408;
					phi_in29 = phi10;
					phi_in30 = anon28 + 6296960;
				}
				if (dispatch8 == 2 || dispatch8 == 1 && anon25 || dispatch8 == 0 && *(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi11 + 6296896)) * 10 << 2) + 6297408) == 1 && anon25)
				{
					uint32_t phi31 = phi_in26;
					uint64_t phi32 = phi_in27;
					uint32_t phi33 = phi_in29;
					uint64_t phi34 = phi_in30;
					*(uint32_t*)phi32 = 0;
					uint32_t anon35 = phi33 + *(uint32_t*)phi34;
					phi_in12 = anon35;
					phi_in13 = anon35;
					uint32_t anon36 = phi31 - 1;
					phi_in26 = anon36;
					int64_t anon37 = (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296832)) + (__sext int64_t)(0 - *(uint32_t*)(phi11 + 6296896)) * 10 << 2;
					phi_in27 = phi32 + anon37;
					phi_in29 = anon35;
					phi_in30 = phi34 + anon37;
					dispatch8 = 2;
					if (anon36 == 0)
					{
						break;
					}
				}
			}
			phi38 = phi_in12;
			uint32_t phi39 = phi_in13;
			phi_in5 = phi38;
			phi_in6 = phi39;
			phi_in7 = phi11 + 4;
			dispatch8 = 0;
		}
		while (phi11 != 28);
		if (phi38 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return (__zext uint64_t)phi38;
		}
	}
	else 
	{
		return 0;
	}
	phi_in14 = (uint32_t)phi19 + 1;
	uint64_t anon40 = phi19 + 1;
	phi_in15 = anon40 & 0xffffffff;
	phi_in16 = anon40;
	phi_in17 = anon22;
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
		uint64_t phi4;
		uint64_t phi5;
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
