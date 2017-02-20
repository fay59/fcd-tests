#include "tests/bin/ceffectpp.h"

void _store_path(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in7;
	uint8_t* anon2 = (uint8_t*)arg2;
	uint64_t anon1 = _strlen(anon2);
	uint8_t* anon3 = (uint8_t*)(arg1 - 64 - (anon1 + 15 & 0xfffffffffffffff0));
	_strcpy(anon3, anon2);
	uint8_t* anon4 = _strrchr(anon3, 46);
	*anon4 = 0;
	uint8_t* anon5 = _strrchr(anon3, 47);
	uint64_t anon6 = _table_find(4294970183, *(uint64_t*)0x1000020c0, (uint64_t)anon5 + 1, 1);
	uint64_t* anon8 = (uint64_t*)(anon6 + 8);
	phi_in7 = *anon8;
	if (*anon8 == 0)
	{
		uint8_t* anon9 = _calloc(3, 8);
		uint64_t anon10 = (uint64_t)anon9;
		*anon8 = anon10;
		phi_in7 = anon10;
	}
	uint64_t phi11 = phi_in7;
	*(uint64_t*)(phi11 + (arg3 << 32 >> 29)) = arg2;
	return;
}
void _process_line(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint8_t* anon2 = (uint8_t*)arg1;
	uint8_t* anon1 = _strstr(anon2, (uint8_t*)0x100001c00);
	if (anon1 != null)
	{
		*anon1 = 0;
	}
	uint8_t* anon3 = _strstr(anon2, (uint8_t*)0x100001c03);
	if (anon3 != null)
	{
		*anon3 = 0;
	}
	uint8_t* anon5 = (uint8_t*)0x100001c06;
	uint8_t* anon4 = _strtok(anon2, anon5);
	if (anon4 != null)
	{
		uint32_t anon8;
		uint32_t anon6 = _strcmp(anon4, (uint8_t*)0x100001c0b);
		uint64_t* phi_in7 = (uint64_t*)0x1000020c8;
		if (anon6 != 0)
		{
			anon8 = _strcmp(anon4, (uint8_t*)0x100001c13);
			phi_in7 = (uint64_t*)0x1000020d0;
		}
		if (anon6 == 0 || anon6 != 0 && ((uint32_t)arg2 | anon8) == 0)
		{
			uint64_t* phi9 = phi_in7;
			if (*phi9 != 0)
			{
				_strtok(null, anon5);
				uint8_t* anon10 = _strtok(null, anon5);
				if (anon10 != null)
				{
					uint32_t dispatch26;
					uint64_t phi_in21;
					uint64_t phi_in11 = 0;
					uint64_t phi_in12 = (uint64_t)anon10;
					uint32_t phi_in13 = 0;
					uint8_t phi_in14 = *anon10;
					if (*anon10 != 0)
					{
						uint64_t anon19;
						do
						{
							uint64_t phi15 = phi_in12;
							uint32_t phi16 = phi_in13;
							uint8_t phi17 = phi_in14;
							uint32_t anon18 = phi16 * 31 + (__zext uint32_t)phi17;
							phi_in11 = (__zext uint64_t)anon18;
							anon19 = phi15 + 1;
							phi_in12 = anon19;
							phi_in13 = anon18;
							phi_in14 = *(uint8_t*)anon19;
						}
						while (*(uint8_t*)anon19 != 0);
					}
					uint64_t phi20 = phi_in11;
					uint64_t* anon22 = (uint64_t*)(*phi9 + 8);
					uint64_t anon23 = phi20 % (__zext uint64_t)*(uint32_t*)(*phi9 + 4) << 3;
					phi_in21 = *(uint64_t*)(*anon22 + anon23);
					if (*(uint64_t*)(*anon22 + anon23) != 0)
					{
						uint32_t anon25;
						do
						{
							uint64_t phi24 = phi_in21;
							anon25 = _strcmp(anon10, *(uint8_t**)phi24);
							dispatch26 = 1;
							if (anon25 != 0)
							{
								phi_in21 = *(uint64_t*)(phi24 + 16);
								dispatch26 = 0;
								if (*(uint64_t*)(phi24 + 16) == 0)
								{
									break;
								}
							}
						}
						while (anon25 != 0);
					}
					if (*(uint64_t*)(*anon22 + anon23) != 0 && dispatch26 == 0 || *(uint64_t*)(*anon22 + anon23) == 0)
					{
						uint8_t* anon27 = _strdup(anon10);
						uint8_t* anon28 = _malloc(24);
						*(uint64_t*)anon28 = (uint64_t)anon27;
						uint64_t anon29 = (uint64_t)anon28;
						*(uint64_t*)(anon29 + 8) = 0;
						*(uint64_t*)(anon29 + 16) = *(uint64_t*)(*anon22 + anon23);
						*(uint64_t*)(*anon22 + anon23) = anon29;
						uint32_t* anon30 = (uint32_t*)*phi9;
						*anon30 = *anon30 + 1;
					}
				}
			}
		}
	}
	return;
}
void _type_from_ext(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in1 = 4294975648;
	uint64_t phi_in2 = 1;
	uint64_t* phi_in3 = (uint64_t*)0x1000020a0;
	while (true)
	{
		uint64_t* phi_in12;
		uint64_t phi_in11;
		uint64_t phi_in10;
		uint64_t phi4 = phi_in1;
		uint64_t phi5 = phi_in2;
		uint64_t* phi6 = phi_in3;
		uint8_t* anon8 = (uint8_t*)arg1;
		uint32_t anon7 = _strcmp(*(uint8_t**)phi6, anon8);
		uint32_t dispatch9 = 1;
		if (anon7 != 0)
		{
			phi_in10 = 1;
			phi_in11 = 4294975664;
			phi_in12 = (uint64_t*)0x1000020b0;
			dispatch9 = 0;
		}
		if (dispatch9 == 0)
		{
			uint64_t phi13;
			do
			{
				uint64_t phi_in15;
				phi13 = phi_in10;
				uint64_t phi14 = phi_in15;
				uint64_t phi16 = phi_in11;
				uint64_t* phi17 = phi_in12;
				uint32_t anon18 = _strcmp(*(uint8_t**)phi17, anon8);
				if (phi13 <= 1)
				{
					phi_in10 = phi13 + 1;
					phi_in15 = phi14 & 0xffffffffffffff00 | (__zext uint64_t)(anon18 != 0);
					uint64_t anon19 = phi16 + 8;
					phi_in11 = anon19;
					phi_in12 = (uint64_t*)anon19;
					if (anon18 == 0)
					{
						break;
					}
				}
			}
			while (phi13 <= 1);
		}
		break;
		uint64_t anon20 = phi4 + 8;
		phi_in1 = anon20;
		phi_in2 = phi5 + 1;
		phi_in3 = (uint64_t*)anon20;
	}
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t* anon117;
	uint64_t anon110;
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; struct _IO_FILE* field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi_in9;
	uint64_t phi_in8;
	uint8_t* anon116;
	uint64_t anon67;
	alloca1.field13 = arg0;
	alloca1.field5 = arg3;
	uint32_t* anon2 = (uint32_t*)&alloca1.field8;
	uint32_t anon3 = (uint32_t)arg2;
	*anon2 = anon3;
	uint64_t** anon4 = (uint64_t**)0x100002010;
	alloca1.field11 = **anon4;
	uint64_t anon5 = _table_new(4294970704, 17);
	*(uint32_t*)0x1000020c8 = (uint32_t)anon5;
	*(uint32_t*)0x1000020cc = (uint32_t)(anon5 >> 32);
	uint64_t anon6 = _table_new(4294970721, 17);
	*(uint32_t*)0x1000020d0 = (uint32_t)anon6;
	*(uint32_t*)0x1000020d4 = (uint32_t)(anon6 >> 32);
	uint64_t anon7 = _table_new(4294970738, 17);
	*(uint32_t*)0x1000020c0 = (uint32_t)anon7;
	*(uint32_t*)0x1000020c4 = (uint32_t)(anon7 >> 32);
	if (anon3 < 2)
	{
		*(uint32_t*)(arg1 - 340) = 0;
		phi_in8 = (uint64_t)&alloca1.field9;
		phi_in9 = 0;
	}
	else 
	{
		alloca1.field7 = 0;
		uint64_t phi_in10 = arg2 & 0xffffffff;
		uint64_t phi_in11 = arg3;
		uint64_t phi_in12 = 1;
		uint32_t phi_in13 = 0;
		uint32_t dispatch14 = 0;
		while (true)
		{
			uint64_t phi_in31;
			uint64_t phi_in30;
			uint64_t phi_in29;
			uint64_t phi_in28;
			uint64_t anon24;
			uint64_t phi_in19;
			uint64_t phi17;
			uint32_t phi_in32;
			uint64_t phi_in21;
			uint32_t phi_in27;
			while (true)
			{
				uint32_t phi_in45;
				uint64_t* phi_in40;
				uint32_t anon33;
				uint32_t anon25;
				uint64_t* phi_in53;
				uint64_t anon26;
				uint32_t anon44;
				uint64_t phi_in64;
				uint32_t phi_in35;
				uint64_t phi_in39;
				uint32_t* anon23;
				uint64_t phi_in38;
				uint8_t* anon34;
				uint64_t phi_in36;
				uint64_t phi56;
				uint64_t phi42;
				struct _IO_FILE* anon37;
				uint64_t phi55;
				uint32_t phi47;
				uint64_t phi_in50;
				uint64_t phi41;
				uint64_t phi_in48;
				uint8_t anon60;
				uint64_t phi_in49;
				uint32_t anon62;
				uint64_t phi_in51;
				uint8_t* anon68;
				uint64_t phi_in52;
				uint64_t phi20;
				uint64_t phi54;
				uint32_t anon58;
				uint64_t anon59;
				uint32_t phi_in63;
				uint64_t phi65;
				uint64_t phi66;
				uint64_t phi_in72;
				uint32_t phi_in71;
				uint64_t phi_in74;
				uint32_t phi_in73;
				uint64_t phi16;
				if (dispatch14 == 0)
				{
					uint64_t phi15 = phi_in10;
					phi16 = phi_in11;
					phi17 = phi_in12;
					uint64_t phi18 = phi_in19;
					phi20 = phi_in21;
					uint32_t phi22 = phi_in13;
					anon24 = arg1 - 328;
					anon23 = (uint32_t*)anon24;
					*anon23 = phi22;
					anon26 = phi17 << 3;
					anon25 = _strcmp(*(uint8_t**)(phi16 + anon26), (uint8_t*)0x100001c16);
					phi_in27 = 0;
					phi_in28 = phi15;
					phi_in29 = phi16;
					phi_in30 = phi18 & 0xff | 0x100;
					phi_in31 = phi20;
					phi_in32 = 1;
					if (anon25 == 0)
					{
						break;
					}
					else 
					{
						anon33 = _strcmp(*(uint8_t**)(phi16 + anon26), (uint8_t*)0x100001c19);
						if (anon33 == 0)
						{
							alloca1.field7 = 1;
							phi_in27 = 0;
							phi_in28 = phi15;
							phi_in29 = phi16;
							phi_in30 = (__zext uint64_t)phi22;
							phi_in31 = phi20;
							phi_in32 = phi22 >> 8 & 0xff;
							break;
						}
						else 
						{
							anon34 = _strrchr(*(uint8_t**)(phi16 + anon26), 46);
							phi_in35 = phi22;
							phi_in36 = (uint64_t)anon34;
							if (anon34 != null)
							{
								anon37 = _fopen(*(uint8_t**)(phi16 + anon26), (uint8_t*)0x100001c1c);
								if (anon37 != null)
								{
									alloca1.field4 = anon37;
									phi_in38 = 4294975648;
									phi_in39 = 1;
									phi_in40 = (uint64_t*)0x1000020a0;
								}
							}
						}
					}
				}
				if (dispatch14 == 3 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null)
				{
					phi41 = phi_in38;
					phi42 = phi_in39;
					uint64_t* phi43 = phi_in40;
					anon44 = _strcmp(*(uint8_t**)phi43, anon34);
					phi_in45 = anon44;
				}
				if (phi42 <= 1 && (dispatch14 == 3 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null))
				{
					phi_in45 = 0;
					uint64_t anon46 = phi41 + 8;
					phi_in38 = anon46;
					phi_in39 = phi42 + 1;
					phi_in40 = (uint64_t*)anon46;
					dispatch14 = 3;
				}
				if (phi42 <= 1 && dispatch14 == 3 && anon44 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 || dispatch14 == 3 && phi42 > 1 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1)
				{
					phi47 = phi_in45;
					phi_in48 = 0;
					phi_in49 = phi20;
					phi_in50 = 1;
					phi_in51 = phi20;
					phi_in52 = 4294975664;
					phi_in53 = (uint64_t*)0x1000020b0;
				}
				if (dispatch14 == 1 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 || phi47 != 0 && dispatch14 == 3 && phi42 > 1 || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1)
				{
					phi54 = phi_in50;
					phi55 = phi_in51;
					phi56 = phi_in52;
					uint64_t* phi57 = phi_in53;
					anon58 = _strcmp(*(uint8_t**)phi57, anon34);
				}
				if (phi54 <= 1 && (dispatch14 == 1 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 || phi47 != 0 && dispatch14 == 3 && phi42 > 1 || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1))
				{
					phi_in50 = phi54 + 1;
					anon60 = (__zext uint8_t)(anon58 == 0) ^ 1;
					anon59 = phi55 & 0xffffffffffffff00 | (__zext uint64_t)anon60;
					phi_in51 = anon59;
					uint64_t anon61 = phi56 + 8;
					phi_in52 = anon61;
					phi_in53 = (uint64_t*)anon61;
					dispatch14 = 1;
				}
				if (phi54 <= 1 && dispatch14 == 1 && anon60 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 || phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 || dispatch14 == 1 && phi54 > 1 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 || phi47 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1)
				{
					phi_in48 = 2;
					phi_in49 = anon59;
				}
				if (anon58 != 0 && (phi54 <= 1 && dispatch14 == 1 && anon60 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 || phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 || dispatch14 == 1 && phi54 > 1 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 || phi47 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1))
				{
					anon62 = _strcmp((uint8_t*)0x100001cd8, anon34);
					phi_in48 = 1;
					phi_in49 = anon59;
					phi_in63 = anon62;
					phi_in64 = anon59;
				}
				if (anon58 != 0 && dispatch14 == 1 && phi54 > 1 && anon62 == 0 || phi54 <= 1 && dispatch14 == 1 && anon60 == 0 && anon58 == 0 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon58 == 0 || phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon62 == 0 || dispatch14 == 1 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon58 == 0 || dispatch14 == 3 && phi42 > 1 && phi47 == 0 || phi47 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon58 == 0 || phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi47 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon58 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon62 == 0 || phi54 <= 1 && anon58 != 0 && dispatch14 == 1 && anon60 == 0 && anon62 == 0 || phi42 <= 1 && dispatch14 == 3 && anon44 == 0 && phi47 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi47 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon62 == 0 || phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon58 == 0 || phi47 != 0 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon62 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon62 == 0)
				{
					phi65 = phi_in48;
					phi66 = phi_in49;
					anon67 = arg1 - 400;
					_store_path(4294971047, anon67, *(uint64_t*)(alloca1.field5 + anon26), phi65);
				}
				if (phi47 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon58 == 0 || phi47 != 0 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon62 == 0 || phi54 <= 1 && dispatch14 == 1 && anon60 == 0 && anon58 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon62 == 0 || phi54 <= 1 && anon58 != 0 && dispatch14 == 1 && anon60 == 0 && anon62 == 0 || dispatch14 == 2 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon58 == 0 || phi42 <= 1 && dispatch14 == 3 && anon44 == 0 && phi47 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi47 == 0 || phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon58 == 0 || phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon62 == 0 || dispatch14 == 1 && phi54 > 1 && anon58 == 0 || dispatch14 == 3 && phi42 > 1 && phi47 == 0 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi47 == 0 || phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon62 == 0 || anon58 != 0 && dispatch14 == 1 && phi54 > 1 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon58 == 0)
				{
					anon68 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
					phi_in63 = (uint32_t)(uint64_t)anon68;
					phi_in64 = phi66;
				}
				if (anon25 != 0 && anon33 != 0 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 || phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon58 == 0 && anon68 == null || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon62 == 0 && anon68 == null || phi54 <= 1 && dispatch14 == 1 && anon60 == 0 && anon58 == 0 && anon68 == null || phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 || anon58 != 0 && anon62 != 0 && dispatch14 == 1 && phi54 > 1 || phi47 != 0 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon58 == 0 && anon68 == null || dispatch14 == 2 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 || phi42 <= 1 && phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon62 == 0 && anon68 == null || phi54 <= 1 && anon58 != 0 && dispatch14 == 1 && anon60 == 0 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 || phi47 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon58 == 0 && anon68 == null || phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon62 == 0 && anon68 == null || phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 || phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 1 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 || anon58 != 0 && dispatch14 == 1 && phi54 > 1 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi47 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon62 == 0 && anon68 == null || dispatch14 == 3 && phi42 > 1 && phi47 == 0 && anon68 == null || dispatch14 == 1 && phi54 > 1 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi47 == 0 && anon68 == null || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon58 == 0 && anon68 == null || phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon62 == 0 && anon68 == null || phi42 <= 1 && dispatch14 == 3 && anon44 == 0 && phi47 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon62 == 0 && anon68 == null)
				{
					uint32_t phi69 = phi_in63;
					uint64_t phi70 = phi_in64;
					phi_in71 = phi69;
					phi_in72 = alloca1.field5;
					phi_in73 = *anon23;
					phi_in74 = phi70;
				}
				if (anon68 != null && (phi54 <= 1 && anon58 != 0 && dispatch14 == 1 && anon60 == 0 && anon62 == 0 || phi47 != 0 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon62 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon58 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon58 == 0 || phi47 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon58 == 0 || phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon62 == 0 || dispatch14 == 2 || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon62 == 0 || phi54 <= 1 && dispatch14 == 1 && anon60 == 0 && anon58 == 0 || dispatch14 == 1 && phi54 > 1 && anon58 == 0 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi47 == 0 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon58 == 0 || anon58 != 0 && dispatch14 == 1 && phi54 > 1 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon62 == 0 || phi42 <= 1 && dispatch14 == 3 && anon44 == 0 && phi47 == 0 || phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon58 == 0 || dispatch14 == 3 && phi42 > 1 && phi47 == 0 || phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon62 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon58 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi47 == 0))
				{
					_process_line(4294971083, (uint64_t)&alloca1.field10, phi65);
					dispatch14 = 2;
				}
				if (anon25 != 0 && anon33 != 0 && dispatch14 == 0)
				{
					if (anon34 != null && anon37 == null)
					{
						phi_in35 = *anon23;
						phi_in36 = (uint64_t)anon37;
					}
					if (anon34 == null || anon34 != null && anon37 == null)
					{
						uint32_t phi75 = phi_in35;
						uint64_t phi76 = phi_in36;
						phi_in71 = (uint32_t)phi76;
						phi_in72 = phi16;
						phi_in73 = phi75;
						phi_in74 = phi20;
					}
				}
				if (phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon58 == 0 && anon68 == null || phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon62 == 0 && anon68 == null || phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 1 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon58 == 0 && anon68 == null || phi47 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon58 == 0 && anon68 == null || anon58 != 0 && dispatch14 == 1 && phi54 > 1 && anon62 == 0 && anon68 == null || phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi47 == 0 && anon68 == null || phi47 != 0 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 && anon62 == 0 && anon68 == null || phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 || phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && phi42 > 1 && phi54 > 1 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon58 == 0 && anon68 == null || phi54 <= 1 && anon58 != 0 && dispatch14 == 1 && anon60 == 0 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && anon60 == 0 && anon62 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon58 == 0 && anon68 == null || anon58 != 0 && anon62 != 0 && dispatch14 == 1 && phi54 > 1 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 == null || phi42 <= 1 && dispatch14 == 3 && anon44 == 0 && phi47 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon37 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 || anon25 != 0 && anon33 != 0 && phi47 != 0 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && phi54 > 1 && anon62 == 0 && anon68 == null || dispatch14 == 2 && anon68 == null || phi54 <= 1 && dispatch14 == 1 && anon60 == 0 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi54 > 1 || dispatch14 == 3 && phi42 > 1 && phi47 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 0 && anon34 != null && anon37 != null && phi42 > 1 && anon60 == 0 && anon62 == 0 && anon68 == null || phi42 <= 1 && phi47 != 0 && phi54 <= 1 && dispatch14 == 3 && anon44 == 0 && anon60 == 0 && anon58 == 0 && anon68 == null || phi47 != 0 && phi54 <= 1 && anon58 != 0 && dispatch14 == 3 && phi42 > 1 && anon60 == 0 && anon62 == 0 && anon68 == null || dispatch14 == 1 && phi54 > 1 && anon58 == 0 && anon68 == null || anon25 != 0 && anon33 != 0 && phi42 <= 1 && dispatch14 == 0 && anon34 != null && anon37 != null && anon44 == 0 && phi47 == 0 && anon68 == null || phi42 <= 1 && phi47 != 0 && anon58 != 0 && anon62 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 || phi42 <= 1 && phi47 != 0 && dispatch14 == 3 && anon44 == 0 && phi54 > 1 && anon58 == 0 && anon68 == null)
				{
					uint32_t phi77 = phi_in71;
					uint64_t phi78 = phi_in72;
					uint32_t phi79 = phi_in73;
					uint64_t phi80 = phi_in74;
					phi_in27 = phi77;
					phi_in28 = (__zext uint64_t)*anon2;
					phi_in29 = phi78;
					phi_in30 = (__zext uint64_t)phi79;
					phi_in31 = phi80;
					phi_in32 = phi79 >> 8;
					break;
				}
			}
			uint32_t phi81 = phi_in27;
			uint64_t phi82 = phi_in28;
			uint64_t phi83 = phi_in29;
			uint64_t phi84 = phi_in30;
			uint64_t phi85 = phi_in31;
			uint32_t phi86 = phi_in32;
			phi_in8 = anon24;
			phi_in9 = phi84;
			if ((uint32_t)phi17 + 1 != (uint32_t)phi82)
			{
				phi_in10 = phi82;
				phi_in11 = phi83;
				phi_in12 = phi17 + 1;
				phi_in19 = phi84;
				phi_in21 = phi85;
				phi_in13 = phi81 & 0xffffff00 | phi86 & 0xff;
				dispatch14 = 0;
			}
		}
	}
	uint64_t phi87 = phi_in8;
	uint64_t phi88 = phi_in9;
	uint64_t* anon90 = (uint64_t*)0x1000020c8;
	uint64_t anon89 = _table_count(4294971193, *anon90);
	alloca1.field5 = anon67;
	uint64_t* anon91 = (uint64_t*)phi87;
	uint64_t anon92 = anon89 & 0xffffffff;
	*anon91 = anon92;
	uint64_t* anon93 = (uint64_t*)(arg1 - 360);
	uint64_t anon94 = anon67 - ((anon92 << 3) + 15 & 0xffffffff0);
	*anon93 = anon94;
	uint64_t* anon96 = (uint64_t*)0x1000020d0;
	uint64_t anon95 = _table_count(4294971258, *anon96);
	uint64_t anon97 = anon95 & 0xffffffff;
	alloca1.field8 = anon97;
	uint64_t anon98 = anon94 - ((anon97 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon98;
	uint64_t* anon100 = (uint64_t*)0x1000020c0;
	uint64_t anon99 = _table_count(4294971306, *anon100);
	alloca1.field0 = (uint32_t)anon99;
	uint64_t anon101 = anon99 & 0xffffffff;
	alloca1.field1 = anon101;
	uint64_t anon102 = _table_count(4294971353, *anon100);
	alloca1.field2 = anon102 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon90);
	_table_dump_keys(4294971413, *anon96);
	_table_dump_keys(4294971428, *anon100);
	uint32_t(* anon103)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon94, *anon91, 8, anon103);
	_qsort((uint8_t*)anon98, alloca1.field8, 8, anon103);
	uint64_t anon104 = anon98 - ((anon101 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon104, alloca1.field1, 8, anon103);
	uint64_t anon105 = _table_count(4294971516, *anon100);
	uint32_t anon106 = (uint32_t)anon105;
	if ((anon106 >> 31 | (__zext uint32_t)(anon106 == 0)) == 0)
	{
		uint64_t phi111;
		uint64_t phi_in107;
		uint64_t phi_in109;
		uint64_t anon108 = anon105 << 32 >> 32;
		phi_in107 = anon108 + 1;
		anon110 = anon104 - ((anon102 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi_in109 = anon110 + anon108 * 24 - 8;
		do
		{
			phi111 = phi_in107;
			uint64_t phi112 = phi_in109;
			uint64_t anon113 = _table_find(4294971555, *anon100, *(uint64_t*)(anon104 + (phi111 << 3) - 16), 0);
			uint64_t anon114 = anon113 + 8;
			*(uint64_t*)(phi112 - 16) = **(uint64_t**)anon114;
			uint64_t* anon115 = (uint64_t*)anon114;
			*(uint64_t*)(phi112 - 8) = *(uint64_t*)(*anon115 + 8);
			*(uint64_t*)phi112 = *(uint64_t*)(*anon115 + 16);
			phi_in107 = phi111 - 1;
			phi_in109 = phi112 - 24;
		}
		while (phi111 > 2);
	}
	if ((phi88 & 0x100) != 0)
	{
		anon116 = (uint8_t*)0x100001c53;
		_printf(anon116);
		_puts((uint8_t*)0x100001d30);
		anon117 = (uint8_t*)0x100001d60;
		_puts(anon117);
		_print_effect_definition(4294971695, *anon93, *anon91 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon104, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon116);
		_puts(anon117);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon110, alloca1.field2);
		_print_uniform_strings(4294971877, *anon93, *anon91);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon90, 0);
	_table_free(4294971936, *anon96, 0);
	_table_free(4294971955, *anon100, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
}
void _listnode_new(uint64_t arg0, uint64_t arg1)
{
	uint8_t* anon1 = _malloc(24);
	*(uint64_t*)anon1 = arg1;
	uint64_t anon2 = (uint64_t)anon1;
	*(uint64_t*)(anon2 + 16) = 0;
	*(uint64_t*)(anon2 + 8) = 0;
	return;
}
void _list_free(uint64_t arg0, uint64_t arg1)
{
	if (arg1 == 0)
	{
		return;
	}
	else 
	{
		_list_free(4294972103, *(uint64_t*)(arg1 + 16));
		_free(*(uint8_t**)arg1);
		__indirect_jump(*(uint64_t*)0x100002040);
	}
}
void _list_prepend(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg2 + 16) = arg1;
	return;
}
void _strhash(uint64_t arg0)
{
	llvm.trap();
}
uint64_t _table_new(uint64_t arg0, uint64_t arg1)
{
	uint8_t* anon1 = _malloc(24);
	uint64_t phi_in2 = 0;
	if (anon1 != null)
	{
		*(uint32_t*)anon1 = 0;
		uint64_t anon3 = (uint64_t)anon1;
		*(uint32_t*)(anon3 + 4) = (uint32_t)arg1;
		uint8_t* anon4 = _calloc(arg1 << 32 >> 32, 8);
		*(uint64_t*)(anon3 + 8) = (uint64_t)anon4;
		phi_in2 = anon3;
		if (anon4 == null)
		{
			_free(anon1);
			phi_in2 = 0;
		}
	}
	uint64_t phi5 = phi_in2;
	return phi5;
}
void _table_apply(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in4;
	uint64_t phi_in3;
	uint64_t phi2;
	uint32_t dispatch5;
	uint32_t* anon6;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		phi_in3 = phi2;
		phi_in4 = 0;
		dispatch5 = 0;
		anon6 = (uint32_t*)(arg1 + 4);
		if (phi2 < (__zext uint64_t)*anon6)
		{
			uint64_t anon7 = phi2 + 1;
			phi_in1 = anon7;
			phi_in3 = anon7;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
			dispatch5 = 0;
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi2 < (__zext uint64_t)*anon6);
	while (true)
	{
		uint64_t phi_in12;
		uint32_t phi_in11;
		uint64_t phi_in10;
		uint64_t phi9;
		if (dispatch5 == 0)
		{
			uint64_t phi8 = phi_in3;
			phi9 = phi_in4;
			if (phi9 == 0)
			{
				break;
			}
			else 
			{
				((void(*)())arg2)();
				phi_in3 = phi8;
				phi_in4 = *(uint64_t*)(phi9 + 16);
				dispatch5 = 0;
				if (*(uint64_t*)(phi9 + 16) == 0)
				{
					phi_in10 = phi8;
					phi_in11 = (uint32_t)phi8;
					phi_in12 = phi8 << 32 >> 29;
				}
			}
		}
		if (dispatch5 == 1 || phi9 != 0 && dispatch5 == 0 && *(uint64_t*)(phi9 + 16) == 0)
		{
			uint64_t phi13 = phi_in10;
			uint32_t phi14 = phi_in11;
			uint64_t phi15 = phi_in12;
			phi_in3 = phi13;
			phi_in4 = 0;
			dispatch5 = 0;
			if (phi14 < *anon6)
			{
				uint32_t anon17 = phi14 + 1;
				uint64_t anon16 = (__zext uint64_t)anon17;
				phi_in10 = anon16;
				phi_in11 = anon17;
				phi_in12 = phi15 + 8;
				phi_in3 = anon16;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15);
				dispatch5 = 1;
				dispatch5 = 0;
			}
		}
	}
	return;
}
void _table_itr(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)arg1 = arg2;
	*(uint64_t*)(arg1 + 8) = 0;
	*(uint32_t*)(arg1 + 16) = 0;
	return;
}
void _table_next(uint64_t arg0, uint64_t arg1)
{
	uint64_t* anon1 = (uint64_t*)(arg1 + 8);
	if (*anon1 != 0)
	{
		*anon1 = *(uint64_t*)(*anon1 + 16);
	}
	if (*anon1 == 0 || *anon1 != 0 && *(uint64_t*)(*anon1 + 16) == 0)
	{
		uint32_t phi5;
		uint32_t phi_in2;
		uint32_t* anon3 = (uint32_t*)(arg1 + 16);
		phi_in2 = *anon3;
		uint64_t phi_in4 = (__sext int64_t)*anon3 << 3;
		do
		{
			phi5 = phi_in2;
			uint64_t phi6 = phi_in4;
			if (phi5 < *(uint32_t*)(*(uint64_t*)arg1 + 4))
			{
				*anon1 = *(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi6);
				uint32_t anon7 = phi5 + 1;
				*anon3 = anon7;
				phi_in2 = anon7;
				phi_in4 = phi6 + 8;
				if (*(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi6) != 0)
				{
					break;
				}
			}
		}
		while (phi5 < *(uint32_t*)(*(uint64_t*)arg1 + 4));
	}
	return;
}
void _table_free(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in19;
	uint32_t* anon6;
	if (arg2 != 0)
	{
		uint64_t phi_in4;
		uint64_t phi_in3;
		uint64_t phi2;
		uint32_t dispatch5;
		uint64_t phi_in1 = 0;
		do
		{
			phi2 = phi_in1;
			phi_in3 = phi2;
			phi_in4 = 0;
			dispatch5 = 0;
			anon6 = (uint32_t*)(arg1 + 4);
			if (phi2 < (__zext uint64_t)*anon6)
			{
				uint64_t anon7 = phi2 + 1;
				phi_in1 = anon7;
				phi_in3 = anon7;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
				dispatch5 = 0;
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
				{
					break;
				}
			}
		}
		while (phi2 < (__zext uint64_t)*anon6);
		while (true)
		{
			uint32_t phi_in11;
			uint64_t phi_in12;
			uint64_t phi_in10;
			uint64_t phi9;
			if (dispatch5 == 0)
			{
				uint64_t phi8 = phi_in3;
				phi9 = phi_in4;
				if (phi9 == 0)
				{
					break;
				}
				else 
				{
					((void(*)(uint64_t))arg2)(*(uint64_t*)(phi9 + 8));
					phi_in3 = phi8;
					phi_in4 = *(uint64_t*)(phi9 + 16);
					dispatch5 = 0;
					if (*(uint64_t*)(phi9 + 16) == 0)
					{
						phi_in10 = phi8;
						phi_in11 = (uint32_t)phi8;
						phi_in12 = phi8 << 32 >> 29;
					}
				}
			}
			if (dispatch5 == 1 || phi9 != 0 && dispatch5 == 0 && *(uint64_t*)(phi9 + 16) == 0)
			{
				uint64_t phi13 = phi_in10;
				uint32_t phi14 = phi_in11;
				uint64_t phi15 = phi_in12;
				phi_in3 = phi13;
				phi_in4 = 0;
				dispatch5 = 0;
				if (phi14 < *anon6)
				{
					uint32_t anon17 = phi14 + 1;
					uint64_t anon16 = (__zext uint64_t)anon17;
					phi_in10 = anon16;
					phi_in11 = anon17;
					phi_in12 = phi15 + 8;
					phi_in3 = anon16;
					phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15);
					dispatch5 = 1;
					dispatch5 = 0;
				}
			}
		}
	}
	uint64_t phi_in18 = 0;
	if (*anon6 == 0)
	{
		phi_in19 = arg1 + 8;
	}
	else 
	{
		while (true)
		{
			uint64_t phi20 = phi_in18;
			uint64_t anon21 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon21 + (phi20 << 3)));
			phi_in18 = phi20 + 1;
			phi_in19 = anon21;
		}
	}
	uint64_t phi22 = phi_in19;
	_free(*(uint8_t**)phi22);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in12;
	uint8_t phi_in4;
	uint64_t phi_in17;
	uint32_t dispatch18;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = arg2;
	uint64_t phi_in3 = 0;
	uint8_t* anon5 = (uint8_t*)arg2;
	phi_in4 = *anon5;
	if (*anon5 != 0)
	{
		uint64_t anon10;
		do
		{
			uint64_t phi6 = phi_in2;
			uint64_t phi7 = phi_in3;
			uint8_t phi8 = phi_in4;
			uint64_t anon9 = phi7 * 31 + (__zext uint64_t)phi8 & 0xffffffff;
			phi_in1 = anon9;
			anon10 = phi6 + 1;
			phi_in2 = anon10;
			phi_in3 = anon9;
			phi_in4 = *(uint8_t*)anon10;
		}
		while (*(uint8_t*)anon10 != 0);
	}
	uint64_t phi11 = phi_in1;
	uint64_t* anon13 = (uint64_t*)(arg1 + 8);
	uint64_t anon14 = phi11 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
	phi_in12 = *(uint64_t*)(*anon13 + anon14);
	if (*(uint64_t*)(*anon13 + anon14) != 0)
	{
		uint32_t anon16;
		do
		{
			uint64_t phi15 = phi_in12;
			anon16 = _strcmp(anon5, *(uint8_t**)phi15);
			phi_in17 = phi15;
			dispatch18 = 1;
			if (anon16 != 0)
			{
				phi_in12 = *(uint64_t*)(phi15 + 16);
				dispatch18 = 0;
				if (*(uint64_t*)(phi15 + 16) == 0)
				{
					break;
				}
			}
		}
		while (anon16 != 0);
	}
	if (*(uint64_t*)(*anon13 + anon14) != 0 && dispatch18 == 0 || *(uint64_t*)(*anon13 + anon14) == 0)
	{
		phi_in17 = 0;
		if ((uint8_t)arg3 != 0)
		{
			uint8_t* anon19 = _strdup(anon5);
			uint8_t* anon20 = _malloc(24);
			*(uint64_t*)anon20 = (uint64_t)anon19;
			uint64_t anon21 = (uint64_t)anon20;
			*(uint64_t*)(anon21 + 8) = 0;
			*(uint64_t*)(anon21 + 16) = *(uint64_t*)(*anon13 + anon14);
			*(uint64_t*)(*anon13 + anon14) = anon21;
			uint32_t* anon22 = (uint32_t*)arg1;
			*anon22 = *anon22 + 1;
			phi_in17 = anon21;
		}
	}
	uint64_t phi23 = phi_in17;
	return phi23;
}
void _table_print(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in2;
	uint64_t phi_in1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi_in2 = *anon3;
	uint32_t dispatch4 = 0;
	if (*anon3 != 0)
	{
		uint64_t anon13;
		uint32_t phi12;
		do
		{
			uint64_t phi5;
			uint32_t phi_in7;
			while (true)
			{
				uint64_t phi11;
				uint64_t* anon8;
				uint64_t anon9;
				uint64_t phi_in10;
				if (dispatch4 == 0)
				{
					phi5 = phi_in1;
					uint32_t phi6 = phi_in2;
					phi_in7 = phi6;
					anon8 = (uint64_t*)(arg1 + 8);
					anon9 = phi5 << 3;
					if (*(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) == 0)
					{
						break;
					}
					else 
					{
						_printf((uint8_t*)0x100001da3);
						phi_in10 = *anon8 + anon9;
					}
				}
				if (dispatch4 == 1 || *(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0 && dispatch4 == 0)
				{
					phi11 = phi_in10;
				}
				if (*(uint64_t*)phi11 == 0)
				{
					if (dispatch4 == 1 || *(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0 && dispatch4 == 0)
					{
						_puts((uint8_t*)0x100001db1);
						phi_in7 = *anon3;
						break;
					}
				}
				else if (dispatch4 == 1 || *(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0 && dispatch4 == 0)
				{
					_printf((uint8_t*)0x100001dac);
					phi_in10 = *(uint64_t*)phi11 + 16;
					dispatch4 = 1;
				}
			}
			phi12 = phi_in7;
			anon13 = phi5 + 1;
			phi_in1 = anon13;
			phi_in2 = phi12;
			dispatch4 = 0;
		}
		while (anon13 < (__zext uint64_t)phi12);
	}
	return;
}
uint64_t _table_count(uint64_t arg0, uint64_t arg1)
{
	return (__zext uint64_t)*(uint32_t*)arg1;
}
void _table_dump_keys(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in3;
	uint64_t phi2;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		phi_in3 = 0;
		if (phi2 < (__zext uint64_t)*(uint32_t*)(arg1 + 4))
		{
			phi_in1 = phi2 + 1;
			phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi2 < (__zext uint64_t)*(uint32_t*)(arg1 + 4));
	uint64_t phi4 = phi_in3;
	if (phi4 == 0)
	{
		return;
	}
	else 
	{
		llvm.trap();
	}
}
void _print_filepaths(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001ec0);
	uint64_t phi_in1 = 0;
	uint32_t anon2 = (uint32_t)arg2;
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
	{
		uint64_t anon4;
		do
		{
			uint64_t phi3 = phi_in1;
			if (*(uint64_t*)((phi3 << 3) + arg1) == 0)
			{
				_printf((uint8_t*)0x100001dc3);
			}
			else 
			{
				_printf((uint8_t*)0x100001dcc);
			}
			anon4 = phi3 + 1;
			phi_in1 = anon4;
		}
		while (anon2 != (uint32_t)anon4);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_effect_definition(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	uint32_t phi_in5;
	uint64_t phi3;
	uint8_t* anon4;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi_in1 = arg2;
	uint32_t anon2 = (uint32_t)arg2;
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
	{
		phi3 = phi_in1;
		anon4 = (uint8_t*)0x100001dd5;
		_printf(anon4);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon6 = (uint32_t)arg4;
	phi_in5 = anon6;
	if ((anon6 >> 31 | (__zext uint32_t)(anon6 == 0)) == 0)
	{
		uint32_t anon8;
		do
		{
			uint32_t phi7 = phi_in5;
			_printf(anon4);
			anon8 = phi7 - 1;
			phi_in5 = anon8;
		}
		while (anon8 != 0);
	}
	phi_in1 = (__zext uint64_t)((uint32_t)phi3 - 1);
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_effect_list(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001f40);
	uint32_t anon1 = (uint32_t)arg2;
	if ((anon1 >> 31 | (__zext uint32_t)(anon1 == 0)) == 0)
	{
		uint32_t anon4;
		uint64_t phi_in2 = arg2 & 0xffffffff;
		do
		{
			uint64_t phi3 = phi_in2;
			_printf((uint8_t*)0x100001e3a);
			anon4 = (uint32_t)phi3 - 1;
			if (anon4 != 0)
			{
				phi_in2 = (__zext uint64_t)anon4;
			}
		}
		while (anon4 != 0);
	}
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_uniform_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e62);
	uint64_t phi_in1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon3;
		do
		{
			uint64_t phi2 = phi_in1;
			_printf((uint8_t*)0x100001e84);
			anon3 = phi2 + 1;
			phi_in1 = anon3;
		}
		while (anon3 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_attribute_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e8e);
	uint64_t phi_in1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon3;
		do
		{
			uint64_t phi2 = phi_in1;
			_printf((uint8_t*)0x100001e84);
			anon3 = phi2 + 1;
			phi_in1 = anon3;
		}
		while (anon3 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
