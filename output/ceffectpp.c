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
	uint64_t phi_in15;
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
			uint32_t anon18;
			uint64_t phi13;
			do
			{
				phi13 = phi_in10;
				uint64_t phi14 = phi_in15;
				uint64_t phi16 = phi_in11;
				uint64_t* phi17 = phi_in12;
				anon18 = _strcmp(*(uint8_t**)phi17, anon8);
				if (phi13 <= 1)
				{
					phi_in10 = phi13 + 1;
					uint8_t anon19 = (__zext uint8_t)(anon18 == 0) ^ 1;
					phi_in15 = phi14 & 0xffffffffffffff00 | (__zext uint64_t)anon19;
					uint64_t anon20 = phi16 + 8;
					phi_in11 = anon20;
					phi_in12 = (uint64_t*)anon20;
					if (anon19 == 0)
					{
						break;
					}
				}
			}
			while (phi13 <= 1);
			if (anon18 != 0)
			{
				_strcmp((uint8_t*)0x100001cd8, anon8);
			}
		}
		break;
		uint64_t anon21 = phi4 + 8;
		phi_in1 = anon21;
		phi_in2 = phi5 + 1;
		phi_in3 = (uint64_t*)anon21;
	}
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t* anon113;
	uint64_t anon106;
	uint64_t anon71;
	uint64_t phi_in8;
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; struct __sFILE* field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint8_t* anon112;
	uint64_t phi_in9;
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
		uint64_t phi_in13 = 1;
		uint32_t phi_in14 = 0;
		uint32_t dispatch15 = 0;
		while (true)
		{
			uint64_t phi69;
			uint64_t phi_in20;
			uint64_t phi_in22;
			uint64_t phi_in32;
			uint64_t phi18;
			uint64_t phi_in31;
			uint64_t phi_in30;
			uint64_t anon26;
			uint32_t phi_in33;
			uint64_t phi_in29;
			uint32_t phi_in28;
			while (true)
			{
				uint32_t phi_in39;
				uint64_t phi70;
				uint64_t phi58;
				uint64_t phi_in40;
				uint8_t* anon72;
				uint32_t phi_in67;
				uint8_t anon64;
				uint32_t anon62;
				uint64_t phi60;
				uint64_t phi_in53;
				uint32_t anon48;
				struct __sFILE* anon37;
				uint64_t phi46;
				uint64_t phi_in52;
				uint64_t phi_in43;
				uint64_t phi59;
				uint64_t phi_in42;
				uint8_t* anon35;
				uint32_t anon27;
				uint64_t phi21;
				uint32_t anon34;
				uint32_t anon66;
				uint64_t phi_in68;
				uint32_t* anon25;
				uint64_t phi_in54;
				uint64_t phi_in41;
				uint64_t phi45;
				uint64_t anon63;
				uint32_t phi_in49;
				uint64_t phi_in55;
				uint32_t phi51;
				uint64_t phi_in56;
				uint64_t* phi_in44;
				uint64_t* phi_in57;
				if (dispatch15 == 0)
				{
					uint64_t phi16 = phi_in10;
					uint64_t phi17 = phi_in11;
					phi18 = phi_in12;
					uint64_t phi19 = phi_in20;
					phi21 = phi_in22;
					uint64_t phi23 = phi_in13;
					uint32_t phi24 = phi_in14;
					anon26 = arg1 - 328;
					anon25 = (uint32_t*)anon26;
					*anon25 = phi24;
					anon27 = _strcmp(*(uint8_t**)(phi17 + (phi23 << 3)), (uint8_t*)0x100001c16);
					phi_in28 = 0;
					phi_in29 = phi16;
					phi_in30 = phi17;
					phi_in31 = phi19 & 0xff | 0x100;
					phi_in32 = phi21;
					phi_in33 = 1;
					if (anon27 == 0)
					{
						break;
					}
					else 
					{
						anon34 = _strcmp(*(uint8_t**)(phi17 + (phi23 << 3)), (uint8_t*)0x100001c19);
						if (anon34 == 0)
						{
							alloca1.field7 = 1;
							phi_in28 = 0;
							phi_in29 = phi16;
							phi_in30 = phi17;
							phi_in31 = (__zext uint64_t)*anon25;
							phi_in32 = phi21;
							phi_in33 = *anon25 >> 8;
							break;
						}
						else 
						{
							anon35 = _strrchr(*(uint8_t**)(phi17 + (phi23 << 3)), 46);
							uint64_t phi_in36 = (uint64_t)anon35;
							if (anon35 != null)
							{
								anon37 = _fopen(*(uint8_t**)(phi17 + (phi23 << 3)), (uint8_t*)0x100001c1c);
								phi_in36 = (uint64_t)anon37;
							}
							if (anon35 == null || anon35 != null && anon37 == null)
							{
								uint64_t phi38 = phi_in36;
								phi_in39 = (uint32_t)phi38;
								phi_in40 = phi17;
								phi_in41 = phi21;
							}
							if (anon37 != null && anon35 != null)
							{
								alloca1.field4 = anon37;
								phi_in42 = 4294975648;
								phi_in43 = 1;
								phi_in44 = (uint64_t*)0x1000020a0;
							}
						}
					}
				}
				if (dispatch15 == 3 || anon27 != 0 && anon34 != 0 && anon37 != null && dispatch15 == 0 && anon35 != null)
				{
					phi45 = phi_in42;
					phi46 = phi_in43;
					uint64_t* phi47 = phi_in44;
					anon48 = _strcmp(*(uint8_t**)phi47, anon35);
					phi_in49 = anon48;
				}
				if (phi46 <= 1 && (dispatch15 == 3 || anon27 != 0 && anon34 != 0 && anon37 != null && dispatch15 == 0 && anon35 != null))
				{
					phi_in49 = 0;
					uint64_t anon50 = phi45 + 8;
					phi_in42 = anon50;
					phi_in43 = phi46 + 1;
					phi_in44 = (uint64_t*)anon50;
					dispatch15 = 3;
				}
				if (phi46 <= 1 && dispatch15 == 3 && anon48 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 || dispatch15 == 3 && phi46 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && dispatch15 == 0 && anon35 != null && phi46 > 1)
				{
					phi51 = phi_in49;
					phi_in52 = 0;
					phi_in53 = phi21;
					phi_in54 = 1;
					phi_in55 = phi21;
					phi_in56 = 4294975664;
					phi_in57 = (uint64_t*)0x1000020b0;
				}
				if (dispatch15 == 2 || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 || phi51 != 0 && dispatch15 == 3 && phi46 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1)
				{
					phi58 = phi_in54;
					phi59 = phi_in55;
					phi60 = phi_in56;
					uint64_t* phi61 = phi_in57;
					anon62 = _strcmp(*(uint8_t**)phi61, anon35);
				}
				if (phi58 <= 1 && (dispatch15 == 2 || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 || phi51 != 0 && dispatch15 == 3 && phi46 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1))
				{
					phi_in54 = phi58 + 1;
					anon64 = (__zext uint8_t)(anon62 == 0) ^ 1;
					anon63 = phi59 & 0xffffffffffffff00 | (__zext uint64_t)anon64;
					phi_in55 = anon63;
					uint64_t anon65 = phi60 + 8;
					phi_in56 = anon65;
					phi_in57 = (uint64_t*)anon65;
					dispatch15 = 2;
				}
				if (phi58 <= 1 && dispatch15 == 2 && anon64 == 0 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 || phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 || dispatch15 == 2 && phi58 > 1 || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 || phi51 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1)
				{
					phi_in52 = 2;
					phi_in53 = anon63;
				}
				if (anon62 != 0 && (phi58 <= 1 && dispatch15 == 2 && anon64 == 0 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 || phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 || dispatch15 == 2 && phi58 > 1 || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 || phi51 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1))
				{
					anon66 = _strcmp((uint8_t*)0x100001cd8, anon35);
					phi_in52 = 1;
					phi_in53 = anon63;
					phi_in67 = anon66;
					phi_in68 = anon63;
				}
				if (anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon62 == 0 || phi51 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon62 == 0 || phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon66 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon66 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon62 == 0 || phi58 <= 1 && anon62 != 0 && dispatch15 == 2 && anon64 == 0 && anon66 == 0 || phi51 != 0 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon66 == 0 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon66 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon66 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon62 == 0 || phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon62 == 0 || phi46 <= 1 && dispatch15 == 3 && anon48 == 0 && phi51 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon66 == 0 || dispatch15 == 3 && phi46 > 1 && phi51 == 0 || phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon66 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi51 == 0 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi51 == 0 || dispatch15 == 2 && phi58 > 1 && anon62 == 0 || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon62 == 0 || phi58 <= 1 && dispatch15 == 2 && anon64 == 0 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon66 == 0 || anon62 != 0 && dispatch15 == 2 && phi58 > 1 && anon66 == 0)
				{
					phi69 = phi_in52;
					phi70 = phi_in53;
					anon71 = arg1 - 400;
					_store_path(4294971047, anon71, *(uint64_t*)(alloca1.field5 + (phi18 << 3)), phi69);
				}
				if (phi51 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon66 == 0 || phi58 <= 1 && dispatch15 == 2 && anon64 == 0 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon62 == 0 || phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon66 == 0 || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon66 == 0 || anon62 != 0 && dispatch15 == 2 && phi58 > 1 && anon66 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi51 == 0 || dispatch15 == 2 && phi58 > 1 && anon62 == 0 || dispatch15 == 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi51 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon66 == 0 || phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon62 == 0 || dispatch15 == 3 && phi46 > 1 && phi51 == 0 || phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon66 == 0 || phi46 <= 1 && dispatch15 == 3 && anon48 == 0 && phi51 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon62 == 0 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon66 == 0 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon66 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon62 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon62 == 0 || phi51 != 0 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon66 == 0 || phi58 <= 1 && anon62 != 0 && dispatch15 == 2 && anon64 == 0 && anon66 == 0)
				{
					anon72 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
					phi_in67 = (uint32_t)(uint64_t)anon72;
					phi_in68 = phi70;
				}
				if (anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon62 == 0 && anon72 == null || phi51 != 0 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon66 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon66 == 0 && anon72 == null || phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon62 == 0 && anon72 == null || phi46 <= 1 && dispatch15 == 3 && anon48 == 0 && phi51 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon62 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon62 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 || phi58 <= 1 && anon62 != 0 && dispatch15 == 2 && anon64 == 0 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon66 == 0 && anon72 == null || phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon62 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon66 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon62 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 || anon62 != 0 && dispatch15 == 2 && phi58 > 1 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi51 == 0 && anon72 == null || phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 2 && anon64 == 0 || phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 || dispatch15 == 2 && phi58 > 1 && anon62 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon66 == 0 && anon72 == null || phi51 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon62 == 0 && anon72 == null || phi58 <= 1 && dispatch15 == 2 && anon64 == 0 && anon62 == 0 && anon72 == null || phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon66 == 0 && anon72 == null || anon62 != 0 && anon66 != 0 && dispatch15 == 2 && phi58 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon62 == 0 && anon72 == null || dispatch15 == 1 && anon72 == null || phi46 <= 1 && phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi51 == 0 && anon72 == null || dispatch15 == 3 && phi46 > 1 && phi51 == 0 && anon72 == null)
				{
					uint32_t phi73 = phi_in67;
					uint64_t phi74 = phi_in68;
					phi_in39 = phi73;
					phi_in40 = alloca1.field5;
					phi_in41 = phi74;
				}
				if (phi46 <= 1 && dispatch15 == 3 && anon48 == 0 && phi51 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 || phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon62 == 0 && anon72 == null || anon62 != 0 && anon66 != 0 && dispatch15 == 2 && phi58 > 1 || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon62 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon66 == 0 && anon72 == null || dispatch15 == 3 && phi46 > 1 && phi51 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon62 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 || phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 && anon66 == 0 && anon72 == null || dispatch15 == 2 && phi58 > 1 && anon62 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && dispatch15 == 0 && anon35 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && anon64 == 0 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && dispatch15 == 0 && anon35 != null && anon37 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi51 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 || phi51 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon62 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && phi58 > 1 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 || phi58 <= 1 && dispatch15 == 2 && anon64 == 0 && anon62 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 || dispatch15 == 1 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon62 == 0 && anon72 == null || phi51 != 0 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 || anon62 != 0 && dispatch15 == 2 && phi58 > 1 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi51 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon62 == 0 && anon72 == null || phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 2 && anon64 == 0 || phi58 <= 1 && anon62 != 0 && dispatch15 == 2 && anon64 == 0 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 || phi51 != 0 && anon62 != 0 && dispatch15 == 3 && phi46 > 1 && phi58 > 1 && anon66 == 0 && anon72 == null || phi51 != 0 && phi58 <= 1 && anon62 != 0 && anon66 != 0 && dispatch15 == 3 && phi46 > 1 && anon64 == 0 || anon27 != 0 && anon34 != 0 && anon37 != null && phi51 != 0 && dispatch15 == 0 && anon35 != null && phi46 > 1 && phi58 > 1 && anon62 == 0 && anon72 == null || phi46 <= 1 && phi51 != 0 && phi58 <= 1 && anon62 != 0 && dispatch15 == 3 && anon48 == 0 && anon64 == 0 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && anon62 != 0 && dispatch15 == 0 && anon35 != null && anon48 == 0 && phi58 > 1 && anon66 == 0 && anon72 == null || anon27 != 0 && anon34 != 0 && anon37 != null && phi46 <= 1 && phi51 != 0 && phi58 <= 1 && dispatch15 == 0 && anon35 != null && anon48 == 0 && anon64 == 0 && anon62 == 0 && anon72 == null)
				{
					uint32_t phi75 = phi_in39;
					uint64_t phi76 = phi_in40;
					uint64_t phi77 = phi_in41;
					phi_in28 = phi75;
					phi_in29 = (__zext uint64_t)*anon2;
					phi_in30 = phi76;
					phi_in31 = (__zext uint64_t)*anon25;
					phi_in32 = phi77;
					phi_in33 = *anon25 >> 8;
					break;
				}
			}
			uint32_t phi78 = phi_in28;
			uint64_t phi79 = phi_in29;
			uint64_t phi80 = phi_in30;
			uint64_t phi81 = phi_in31;
			uint64_t phi82 = phi_in32;
			uint32_t phi83 = phi_in33;
			phi_in8 = anon26;
			phi_in9 = phi81;
			uint64_t anon84 = phi18 + 1;
			if ((uint32_t)anon84 != (uint32_t)phi79)
			{
				phi_in10 = phi79;
				phi_in11 = phi80;
				phi_in12 = anon84;
				phi_in20 = phi81;
				phi_in22 = phi82;
				phi_in13 = anon84 & 0x1fffffffffffffff;
				phi_in14 = phi78 & 0xffffff00 | phi83 & 0xff;
				dispatch15 = 0;
			}
			_process_line(4294971083, (uint64_t)&alloca1.field10, phi69);
			dispatch15 = 1;
		}
	}
	uint64_t phi85 = phi_in8;
	uint64_t phi86 = phi_in9;
	uint64_t* anon88 = (uint64_t*)0x1000020c8;
	uint64_t anon87 = _table_count(4294971193, *anon88);
	alloca1.field5 = anon71;
	uint64_t* anon89 = (uint64_t*)phi85;
	*anon89 = anon87 & 0xffffffff;
	uint64_t* anon90 = (uint64_t*)(arg1 - 360);
	uint64_t anon91 = anon71 - ((anon87 << 3 & 0x7fffffff8) + 15 & 0xffffffff0);
	*anon90 = anon91;
	uint64_t* anon93 = (uint64_t*)0x1000020d0;
	uint64_t anon92 = _table_count(4294971258, *anon93);
	alloca1.field8 = anon92 & 0xffffffff;
	uint64_t anon94 = anon91 - ((anon92 << 3 & 0x7fffffff8) + 15 & 0xffffffff0);
	alloca1.field3 = anon94;
	uint64_t* anon96 = (uint64_t*)0x1000020c0;
	uint64_t anon95 = _table_count(4294971306, *anon96);
	alloca1.field0 = (uint32_t)anon95;
	uint64_t anon97 = anon95 & 0xffffffff;
	alloca1.field1 = anon97;
	uint64_t anon98 = _table_count(4294971353, *anon96);
	alloca1.field2 = anon98 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon88);
	_table_dump_keys(4294971413, *anon93);
	_table_dump_keys(4294971428, *anon96);
	uint32_t(* anon99)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon91, *anon89, 8, anon99);
	_qsort((uint8_t*)anon94, alloca1.field8, 8, anon99);
	uint64_t anon100 = anon94 - ((anon97 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon100, alloca1.field1, 8, anon99);
	uint64_t anon101 = _table_count(4294971516, *anon96);
	uint32_t anon102 = (uint32_t)anon101;
	if ((anon102 >> 31 | (__zext uint32_t)(anon102 == 0)) == 0)
	{
		uint64_t phi107;
		uint64_t phi_in105;
		uint64_t phi_in103;
		uint64_t anon104 = anon101 << 32 >> 32;
		phi_in103 = anon104 + 1;
		anon106 = anon100 - ((anon98 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi_in105 = anon106 + anon104 * 24 - 8;
		do
		{
			phi107 = phi_in103;
			uint64_t phi108 = phi_in105;
			uint64_t anon109 = _table_find(4294971555, *anon96, *(uint64_t*)(anon100 + (phi107 << 3) - 16), 0);
			uint64_t anon110 = anon109 + 8;
			*(uint64_t*)(phi108 - 16) = **(uint64_t**)anon110;
			uint64_t* anon111 = (uint64_t*)anon110;
			*(uint64_t*)(phi108 - 8) = *(uint64_t*)(*anon111 + 8);
			*(uint64_t*)phi108 = *(uint64_t*)(*anon111 + 16);
			phi_in103 = phi107 - 1;
			phi_in105 = phi108 - 24;
		}
		while (phi107 > 2);
	}
	if ((phi86 & 0x100) != 0)
	{
		anon112 = (uint8_t*)0x100001c53;
		_printf(anon112);
		_puts((uint8_t*)0x100001d30);
		anon113 = (uint8_t*)0x100001d60;
		_puts(anon113);
		_print_effect_definition(4294971695, *anon90, *anon89 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon100, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon112);
		_puts(anon113);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon106, alloca1.field2);
		_print_uniform_strings(4294971877, *anon90, *anon89);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon88, 0);
	_table_free(4294971936, *anon93, 0);
	_table_free(4294971955, *anon96, *(uint64_t*)0x100002018);
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
	uint32_t dispatch5;
	uint64_t phi_in4;
	uint32_t* anon6;
	uint64_t phi_in3;
	uint64_t phi2;
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
		uint32_t phi_in2;
		uint32_t phi5;
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
	uint64_t phi_in11;
	uint64_t phi_in4;
	uint64_t phi9;
	uint64_t phi8;
	uint32_t dispatch5;
	uint64_t phi_in3;
	uint32_t* anon6;
	if (arg2 != 0)
	{
		uint64_t phi2;
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
		if (dispatch5 == 0)
		{
			phi8 = phi_in3;
			phi9 = phi_in4;
		}
	}
	uint64_t phi_in10 = 0;
	if (*anon6 == 0)
	{
		phi_in11 = arg1 + 8;
	}
	else 
	{
		while (true)
		{
			uint64_t phi12 = phi_in10;
			uint64_t anon13 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon13 + (phi12 << 3)));
			phi_in10 = phi12 + 1;
			phi_in11 = anon13;
		}
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi9 + 8));
	phi_in3 = phi8;
	phi_in4 = *(uint64_t*)(phi9 + 16);
	dispatch5 = 0;
	if (*(uint64_t*)(phi9 + 16) == 0)
	{
		uint64_t phi_in14 = phi8;
		uint32_t phi_in15 = (uint32_t)phi8;
		uint64_t phi_in16 = phi8 << 32 >> 29;
		uint64_t phi17 = phi_in14;
		uint32_t phi18 = phi_in15;
		uint64_t phi19 = phi_in16;
		phi_in3 = phi17;
		phi_in4 = 0;
		dispatch5 = 0;
		if (phi18 < *anon6)
		{
			uint32_t anon21 = phi18 + 1;
			uint64_t anon20 = (__zext uint64_t)anon21;
			phi_in14 = anon20;
			phi_in15 = anon21;
			phi_in16 = phi19 + 8;
			phi_in3 = anon20;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi19);
			dispatch5 = 0;
			dispatch5 = 1;
		}
	}
	uint64_t phi22 = phi_in11;
	_free(*(uint8_t**)phi22);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint32_t dispatch18;
	uint64_t phi_in17;
	uint64_t phi_in12;
	uint8_t phi_in4;
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
		uint32_t phi12;
		uint64_t anon13;
		do
		{
			uint32_t phi_in7;
			uint64_t phi5;
			while (true)
			{
				uint64_t anon9;
				uint64_t* anon8;
				uint64_t phi11;
				uint64_t phi_in10;
				if (dispatch4 == 0)
				{
					phi5 = phi_in1;
					uint32_t phi6 = phi_in2;
					phi_in7 = phi6;
					anon8 = (uint64_t*)(arg1 + 8);
					anon9 = phi5 << 3;
					if (*(uint64_t*)(*anon8 + anon9) == 0)
					{
						break;
					}
					else 
					{
						_printf((uint8_t*)0x100001da3);
						phi_in10 = *anon8 + anon9;
					}
				}
				if (dispatch4 == 1 || *(uint64_t*)(*anon8 + anon9) != 0 && dispatch4 == 0)
				{
					phi11 = phi_in10;
				}
				if (*(uint64_t*)phi11 == 0)
				{
					if (dispatch4 == 1 || *(uint64_t*)(*anon8 + anon9) != 0 && dispatch4 == 0)
					{
						_puts((uint8_t*)0x100001db1);
						phi_in7 = *anon3;
						break;
					}
				}
				else if (dispatch4 == 1 || *(uint64_t*)(*anon8 + anon9) != 0 && dispatch4 == 0)
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
	uint8_t* anon4;
	uint64_t phi3;
	uint32_t phi_in5;
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
