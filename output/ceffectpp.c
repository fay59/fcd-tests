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
	uint64_t* phi_in12;
	uint64_t phi_in11;
	uint64_t phi_in10;
	uint8_t* anon8;
	uint32_t anon7;
	uint32_t dispatch9;
	uint64_t phi_in1 = 4294975648;
	uint64_t phi_in2 = 1;
	uint64_t* phi_in3 = (uint64_t*)0x1000020a0;
	do
	{
		uint64_t phi4 = phi_in1;
		uint64_t phi5 = phi_in2;
		uint64_t* phi6 = phi_in3;
		anon8 = (uint8_t*)arg1;
		anon7 = _strcmp(*(uint8_t**)phi6, anon8);
		dispatch9 = 1;
		if (anon7 != 0)
		{
			phi_in10 = 1;
			phi_in11 = 4294975664;
			phi_in12 = (uint64_t*)0x1000020b0;
			dispatch9 = 0;
			if (phi5 < 2)
			{
				uint64_t anon13 = phi4 + 8;
				phi_in1 = anon13;
				phi_in2 = phi5 + 1;
				phi_in3 = (uint64_t*)anon13;
			}
			else 
			{
				break;
			}
		}
	}
	while (anon7 != 0);
	if (dispatch9 == 0)
	{
		uint64_t phi14;
		uint32_t anon19;
		uint32_t dispatch20;
		do
		{
			uint64_t phi_in16;
			phi14 = phi_in10;
			uint64_t phi15 = phi_in16;
			uint64_t phi17 = phi_in11;
			uint64_t* phi18 = phi_in12;
			anon19 = _strcmp(*(uint8_t**)phi18, anon8);
			dispatch20 = 1;
			if ((phi14 | 1) == 1)
			{
				phi_in10 = phi14 + 1;
				phi_in16 = phi15 & 0xffffffffffffff00 | (__zext uint64_t)(anon19 == 0 ^ 1);
				uint64_t anon21 = phi17 + 8;
				phi_in11 = anon21;
				phi_in12 = (uint64_t*)anon21;
				dispatch20 = 0;
				if (anon19 == 0)
				{
					break;
				}
			}
		}
		while ((phi14 | 1) == 1);
		if (anon19 != 0 && dispatch20 == 1)
		{
			_strcmp((uint8_t*)0x100001cd8, anon8);
		}
	}
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t* anon114;
	uint8_t* anon113;
	uint64_t anon107;
	uint64_t phi86;
	uint64_t phi85;
	uint32_t phi82;
	uint64_t phi84;
	uint64_t anon71;
	uint64_t phi19;
	uint64_t phi83;
	uint32_t dispatch16;
	uint64_t phi_in9;
	uint64_t phi_in14;
	uint64_t phi_in11;
	uint64_t phi_in13;
	uint32_t phi87;
	uint64_t phi_in8;
	uint64_t phi_in12;
	uint32_t phi_in15;
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
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
		alloca1.field7 = 0;
		phi_in8 = (uint64_t)&alloca1.field9;
		phi_in9 = 0;
	}
	else 
	{
		uint64_t phi_in33;
		uint32_t phi_in34;
		uint64_t phi_in30;
		uint32_t phi_in29;
		uint64_t anon27;
		uint64_t phi_in31;
		uint64_t phi_in32;
		uint32_t* anon10 = (uint32_t*)(arg1 - 340);
		*anon10 = 0;
		phi_in11 = arg2 & 0xffffffff;
		phi_in12 = arg3;
		phi_in13 = 1;
		phi_in14 = 1;
		phi_in15 = 0;
		dispatch16 = 0;
		while (true)
		{
			uint64_t phi_in37;
			uint64_t phi60;
			uint64_t phi_in77;
			uint64_t phi59;
			uint64_t phi_in76;
			uint8_t* anon72;
			uint64_t phi70;
			uint32_t anon66;
			uint64_t anon64;
			uint64_t phi_in42;
			uint64_t phi45;
			uint32_t anon62;
			uint32_t phi_in75;
			uint64_t phi_in68;
			uint64_t phi58;
			uint64_t* phi_in57;
			uint64_t phi22;
			uint64_t phi_in55;
			uint64_t phi_in53;
			uint64_t anon40;
			uint32_t phi_in48;
			uint32_t anon47;
			uint8_t* anon36;
			uint64_t phi_in56;
			uint32_t anon28;
			uint32_t anon35;
			uint64_t* phi_in43;
			uint32_t* anon26;
			uint64_t phi69;
			uint64_t phi44;
			uint64_t phi_in41;
			uint64_t phi_in54;
			uint32_t phi51;
			uint64_t phi18;
			uint64_t phi_in52;
			struct __sFILE* anon38;
			uint32_t phi_in67;
			if (dispatch16 == 0)
			{
				uint64_t phi17 = phi_in11;
				phi18 = phi_in12;
				phi19 = phi_in13;
				uint64_t phi20 = phi_in21;
				phi22 = phi_in23;
				uint64_t phi24 = phi_in14;
				uint32_t phi25 = phi_in15;
				anon27 = arg1 - 328;
				anon26 = (uint32_t*)anon27;
				*anon26 = phi25;
				anon28 = _strcmp(*(uint8_t**)(phi18 + (phi24 << 3)), (uint8_t*)0x100001c16);
				phi_in29 = 0;
				phi_in30 = phi17;
				phi_in31 = phi18;
				phi_in32 = phi20 & 0xff | 0x100;
				phi_in33 = phi22;
				phi_in34 = 1;
				if (anon28 == 0)
				{
					break;
				}
				else 
				{
					anon35 = _strcmp(*(uint8_t**)(phi18 + (phi24 << 3)), (uint8_t*)0x100001c19);
					if (anon35 == 0)
					{
						*anon10 = 1;
						phi_in29 = 0;
						phi_in30 = phi17;
						phi_in31 = phi18;
						phi_in32 = (__zext uint64_t)*anon26;
						phi_in33 = phi22;
						phi_in34 = *anon26 >> 8;
						break;
					}
					else 
					{
						anon36 = _strrchr(*(uint8_t**)(phi18 + (phi24 << 3)), 46);
						phi_in37 = (uint64_t)anon36;
						if (anon36 != null)
						{
							anon38 = _fopen(*(uint8_t**)(phi18 + (phi24 << 3)), (uint8_t*)0x100001c1c);
							uint64_t anon39 = (uint64_t)anon38;
							phi_in37 = anon39;
							if (anon38 != null)
							{
								anon40 = arg1 - 360;
								*(uint64_t*)anon40 = anon39;
								phi_in41 = 4294975648;
								phi_in42 = 1;
								phi_in43 = (uint64_t*)0x1000020a0;
							}
						}
					}
				}
			}
			if (dispatch16 == 3 || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null)
			{
				phi44 = phi_in41;
				phi45 = phi_in42;
				uint64_t* phi46 = phi_in43;
				anon47 = _strcmp(*(uint8_t**)phi46, anon36);
				phi_in48 = anon47;
			}
			uint64_t anon49 = phi45 | 1;
			if (anon49 == 1 && (dispatch16 == 3 || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null))
			{
				phi_in48 = 0;
				uint64_t anon50 = phi44 + 8;
				phi_in41 = anon50;
				phi_in42 = phi45 + 1;
				phi_in43 = (uint64_t*)anon50;
				dispatch16 = 3;
			}
			if (dispatch16 == 3 && anon49 == 1 && anon47 == 0 || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 || anon49 != 1 && dispatch16 == 3 || anon28 != 0 && anon35 != 0 && anon49 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null)
			{
				phi51 = phi_in48;
				phi_in52 = 0;
				phi_in53 = phi22;
				phi_in54 = 1;
				phi_in55 = phi22;
				phi_in56 = 4294975664;
				phi_in57 = (uint64_t*)0x1000020b0;
			}
			if (dispatch16 == 1 || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 || anon49 != 1 && phi51 != 0 && dispatch16 == 3 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null)
			{
				phi58 = phi_in54;
				phi59 = phi_in55;
				phi60 = phi_in56;
				uint64_t* phi61 = phi_in57;
				anon62 = _strcmp(*(uint8_t**)phi61, anon36);
			}
			uint64_t anon63 = phi58 | 1;
			if (anon63 == 1)
			{
				if (dispatch16 == 1 || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 || anon49 != 1 && phi51 != 0 && dispatch16 == 3 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null)
				{
					phi_in52 = 2;
					anon64 = phi59 & 0xffffffffffffff00 | (__zext uint64_t)(anon62 == 0 ^ 1);
					phi_in53 = anon64;
					phi_in54 = phi58 + 1;
					phi_in55 = anon64;
					uint64_t anon65 = phi60 + 8;
					phi_in56 = anon65;
					phi_in57 = (uint64_t*)anon65;
					dispatch16 = 1;
				}
			}
			else 
			{
				if (dispatch16 == 1 || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 || anon49 != 1 && phi51 != 0 && dispatch16 == 3 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null)
				{
					phi_in52 = 2;
					phi_in53 = anon64;
				}
				if (anon62 != 0 && (dispatch16 == 1 || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 || anon49 != 1 && phi51 != 0 && dispatch16 == 3 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null))
				{
					anon66 = _strcmp((uint8_t*)0x100001cd8, anon36);
					phi_in52 = 1;
					phi_in53 = anon64;
					phi_in67 = anon66;
					phi_in68 = anon64;
				}
			}
			if (phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 || anon63 != 1 && anon62 != 0 && dispatch16 == 1 && anon66 == 0 || dispatch16 == 1 && anon63 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && phi51 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon66 == 0 || anon49 != 1 && phi51 != 0 && dispatch16 == 3 && anon63 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 || phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon66 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon66 == 0 || phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon62 == 0 || anon63 != 1 && dispatch16 == 1 && anon62 == 0 || anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon66 == 0 || anon49 != 1 && dispatch16 == 3 && phi51 == 0 || anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon62 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon63 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && phi51 == 0 || dispatch16 == 3 && anon49 == 1 && anon47 == 0 && phi51 == 0)
			{
				phi69 = phi_in52;
				phi70 = phi_in53;
				anon71 = arg1 - 400;
				_store_path(4294971047, anon71, *(uint64_t*)(alloca1.field5 + (phi19 << 3)), phi69);
			}
			if (anon49 != 1 && phi51 != 0 && dispatch16 == 3 && anon63 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon66 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon62 == 0 || phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon66 == 0 || anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon62 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon66 == 0 || dispatch16 == 3 && anon49 == 1 && anon47 == 0 && phi51 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon63 == 1 && anon62 == 0 || anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon66 == 0 || anon49 != 1 && dispatch16 == 3 && phi51 == 0 || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && phi51 == 0 || phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon62 == 0 || anon63 != 1 && anon62 != 0 && dispatch16 == 1 && anon66 == 0 || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 || dispatch16 == 2 || anon63 != 1 && dispatch16 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && phi51 == 0 || dispatch16 == 1 && anon63 == 1 && anon62 == 0)
			{
				anon72 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon40);
				phi_in67 = (uint32_t)(uint64_t)anon72;
				phi_in68 = phi70;
			}
			if (anon72 != null && (anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 || phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon66 == 0 || anon49 != 1 && phi51 != 0 && dispatch16 == 3 && anon63 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon66 == 0 || anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon66 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon63 == 1 && anon62 == 0 || anon63 != 1 && dispatch16 == 1 && anon62 == 0 || dispatch16 == 3 && anon49 == 1 && anon47 == 0 && phi51 == 0 || phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon66 == 0 || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && phi51 == 0 || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon62 == 0 || anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon62 == 0 || anon49 != 1 && dispatch16 == 3 && phi51 == 0 || dispatch16 == 2 || dispatch16 == 1 && anon63 == 1 && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon62 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && phi51 == 0 || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 || anon63 != 1 && anon62 != 0 && dispatch16 == 1 && anon66 == 0))
			{
				_process_line(4294971083, (uint64_t)&alloca1.field10, phi69);
				dispatch16 = 2;
			}
			if (phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon66 == 0 && anon72 == null || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 && anon72 == null || dispatch16 == 1 && anon63 == 1 && anon62 == 0 && anon72 == null || anon63 != 1 && anon62 != 0 && dispatch16 == 1 && anon66 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && anon49 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && phi51 == 0 && anon72 == null || anon49 != 1 && phi51 != 0 && dispatch16 == 3 && anon63 == 1 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon62 == 0 && anon72 == null || anon49 != 1 && dispatch16 == 3 && phi51 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon63 == 1 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && phi51 == 0 && anon72 == null || anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon62 == 0 && anon72 == null || anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 1 || dispatch16 == 3 && anon49 == 1 && anon47 == 0 && phi51 == 0 && anon72 == null || phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon66 == 0 && anon72 == null || phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 || anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon66 == 0 && anon72 == null || anon63 != 1 && dispatch16 == 1 && anon62 == 0 && anon72 == null || anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 3 || dispatch16 == 2 && anon72 == null || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon66 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null)
			{
				uint32_t phi73 = phi_in67;
				uint64_t phi74 = phi_in68;
				phi_in75 = phi73;
				phi_in76 = alloca1.field5;
				phi_in77 = phi74;
			}
			if (anon28 != 0 && anon35 != 0 && dispatch16 == 0 && (anon36 == null || anon36 != null && anon38 == null))
			{
				uint64_t phi78 = phi_in37;
				phi_in75 = (uint32_t)phi78;
				phi_in76 = phi18;
				phi_in77 = phi22;
			}
			if (anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon63 == 1 && anon62 == 0 && anon72 == null || anon63 != 1 && dispatch16 == 1 && anon62 == 0 && anon72 == null || anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon66 == 0 && anon72 == null || anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 1 || anon49 != 1 && phi51 != 0 && dispatch16 == 3 && anon63 == 1 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 == null || dispatch16 == 2 && anon72 == null || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon66 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && phi51 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && anon62 == 0 && anon72 == null || dispatch16 == 3 && anon49 == 1 && anon47 == 0 && phi51 == 0 && anon72 == null || phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon66 == 0 && anon72 == null || dispatch16 == 1 && anon63 == 1 && anon62 == 0 && anon72 == null || anon63 != 1 && anon62 != 0 && dispatch16 == 1 && anon66 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && anon49 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && phi51 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null || anon28 != 0 && anon35 != 0 && anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 0 && anon36 != null && anon38 != null && anon62 == 0 && anon72 == null || phi51 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon63 == 1 && anon62 == 0 && anon72 == null || anon49 != 1 && dispatch16 == 3 && phi51 == 0 && anon72 == null || anon49 != 1 && phi51 != 0 && anon63 != 1 && dispatch16 == 3 && anon62 == 0 && anon72 == null || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 && phi51 == 0 && anon72 == null || anon49 != 1 && phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 3 || anon28 != 0 && anon35 != 0 && phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 0 && anon36 != null && anon38 != null && anon49 == 1 && anon47 == 0 || anon28 != 0 && anon35 != 0 && dispatch16 == 0 && anon36 == null || phi51 != 0 && anon63 != 1 && anon62 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0 && anon66 == 0 && anon72 == null || phi51 != 0 && anon63 != 1 && anon62 != 0 && anon66 != 0 && dispatch16 == 3 && anon49 == 1 && anon47 == 0)
			{
				uint32_t phi79 = phi_in75;
				uint64_t phi80 = phi_in76;
				uint64_t phi81 = phi_in77;
				phi_in29 = phi79;
				phi_in30 = (__zext uint64_t)*anon2;
				phi_in31 = phi80;
				phi_in32 = (__zext uint64_t)*anon26;
				phi_in33 = phi81;
				phi_in34 = *anon26 >> 8;
				break;
			}
		}
		phi82 = phi_in29;
		phi83 = phi_in30;
		phi84 = phi_in31;
		phi85 = phi_in32;
		phi86 = phi_in33;
		phi87 = phi_in34;
		phi_in8 = anon27;
		phi_in9 = phi85;
	}
	uint64_t phi88 = phi_in8;
	uint64_t phi89 = phi_in9;
	uint64_t* anon91 = (uint64_t*)0x1000020c8;
	uint64_t anon90 = _table_count(4294971193, *anon91);
	alloca1.field5 = anon71;
	uint64_t* anon92 = (uint64_t*)phi88;
	*anon92 = anon90 & 0xffffffff;
	uint64_t anon93 = anon71 - ((anon90 << 3 & 0x7fffffff8) + 15 & 0xffffffff0);
	alloca1.field4 = anon93;
	uint64_t* anon95 = (uint64_t*)0x1000020d0;
	uint64_t anon94 = _table_count(4294971258, *anon95);
	alloca1.field8 = anon94 & 0xffffffff;
	uint64_t anon96 = anon93 - ((anon94 << 3 & 0x7fffffff8) + 15 & 0xffffffff0);
	alloca1.field3 = anon96;
	uint64_t* anon98 = (uint64_t*)0x1000020c0;
	uint64_t anon97 = _table_count(4294971306, *anon98);
	alloca1.field0 = (uint32_t)anon97;
	uint64_t anon99 = anon97 & 0xffffffff;
	alloca1.field1 = anon99;
	uint64_t anon100 = _table_count(4294971353, *anon98);
	alloca1.field2 = anon100 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon91, anon93);
	_table_dump_keys(4294971413, *anon95, anon96);
	uint64_t anon101 = anon96 - ((anon99 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon98, anon101);
	uint32_t(* anon102)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon93, *anon92, 8, anon102);
	_qsort((uint8_t*)anon96, alloca1.field8, 8, anon102);
	_qsort((uint8_t*)anon101, alloca1.field1, 8, anon102);
	uint64_t anon103 = _table_count(4294971516, *anon98);
	if ((uint32_t)anon103 >= 1)
	{
		uint64_t phi_in104;
		uint64_t phi_in106;
		uint64_t phi108;
		uint64_t anon105 = anon103 << 32 >> 32;
		phi_in104 = anon105 + 1;
		anon107 = anon101 - ((anon100 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi_in106 = anon107 + anon105 * 24 - 8;
		do
		{
			phi108 = phi_in104;
			uint64_t phi109 = phi_in106;
			uint64_t anon110 = _table_find(4294971555, *anon98, *(uint64_t*)(anon101 + (phi108 << 3) - 16), 0);
			uint64_t anon111 = anon110 + 8;
			*(uint64_t*)(phi109 - 16) = **(uint64_t**)anon111;
			uint64_t* anon112 = (uint64_t*)anon111;
			*(uint64_t*)(phi109 - 8) = *(uint64_t*)(*anon112 + 8);
			*(uint64_t*)phi109 = *(uint64_t*)(*anon112 + 16);
			phi_in104 = phi108 - 1;
			phi_in106 = phi109 - 24;
		}
		while (phi108 > 2);
	}
	if ((phi89 & 0x100) != 0)
	{
		anon113 = (uint8_t*)0x100001c53;
		_printf(anon113);
		_puts((uint8_t*)0x100001d30);
		anon114 = (uint8_t*)0x100001d60;
		_puts(anon114);
		_print_effect_definition(4294971695, alloca1.field4, *anon92 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon101, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon113);
		_puts(anon114);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon107, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon92);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon91, 0);
	_table_free(4294971936, *anon95, 0);
	_table_free(4294971955, *anon98, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
	phi_in11 = phi83;
	phi_in12 = phi84;
	uint64_t anon115 = phi19 + 1;
	phi_in13 = anon115;
	uint64_t phi_in21 = phi85;
	uint64_t phi_in23 = phi86;
	phi_in14 = anon115 & 0x1fffffffffffffff;
	phi_in15 = phi82 & 0xffffff00 | phi87 & 0xff;
	dispatch16 = 0;
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
		uint64_t phi9;
		uint64_t phi_in10;
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
	uint64_t phi9;
	uint64_t phi8;
	uint64_t phi_in11;
	uint32_t* anon6;
	uint32_t dispatch5;
	uint64_t phi_in4;
	uint64_t phi_in3;
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
		uint64_t anon14;
		do
		{
			uint64_t phi12 = phi_in10;
			uint64_t anon13 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon13 + (phi12 << 3)));
			anon14 = phi12 + 1;
			phi_in10 = anon14;
			phi_in11 = anon13;
		}
		while (anon14 < (__zext uint64_t)*anon6);
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi9 + 8));
	phi_in3 = phi8;
	phi_in4 = *(uint64_t*)(phi9 + 16);
	dispatch5 = 0;
	if (*(uint64_t*)(phi9 + 16) == 0)
	{
		uint64_t phi_in15 = phi8;
		uint32_t phi_in16 = (uint32_t)phi8;
		uint64_t phi_in17 = phi8 << 32 >> 29;
		uint64_t phi18 = phi_in15;
		uint32_t phi19 = phi_in16;
		uint64_t phi20 = phi_in17;
		phi_in3 = phi18;
		phi_in4 = 0;
		dispatch5 = 0;
		if (phi19 < *anon6)
		{
			uint32_t anon22 = phi19 + 1;
			uint64_t anon21 = (__zext uint64_t)anon22;
			phi_in15 = anon21;
			phi_in16 = anon22;
			phi_in17 = phi20 + 8;
			phi_in3 = anon21;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi20);
			dispatch5 = 1;
			dispatch5 = 0;
		}
	}
	uint64_t phi23 = phi_in11;
	_free(*(uint8_t**)phi23);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in17;
	uint64_t phi_in12;
	uint32_t dispatch18;
	uint8_t phi_in4;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = arg2;
	uint32_t phi_in3 = 0;
	uint8_t* anon5 = (uint8_t*)arg2;
	phi_in4 = *anon5;
	if (*anon5 != 0)
	{
		uint64_t anon10;
		do
		{
			uint64_t phi6 = phi_in2;
			uint32_t phi7 = phi_in3;
			uint8_t phi8 = phi_in4;
			uint32_t anon9 = phi7 * 31 + (__zext uint32_t)phi8;
			phi_in1 = (__zext uint64_t)anon9;
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
			uint32_t phi_in7;
			uint64_t phi5;
			while (true)
			{
				uint64_t phi11;
				uint64_t* anon8;
				uint64_t phi_in10;
				uint64_t anon9;
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
void _table_dump_keys(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in10;
	uint64_t phi6;
	uint32_t phi_in9;
	uint32_t phi_in8;
	uint32_t dispatch12;
	uint64_t phi_in7;
	uint64_t* phi_in11;
	uint32_t phi_in1 = 0;
	uint64_t* phi_in2 = null;
	uint64_t phi_in3 = 0;
	do
	{
		uint32_t phi4 = phi_in1;
		uint64_t* phi5 = phi_in2;
		phi6 = phi_in3;
		phi_in7 = 0;
		phi_in8 = 0;
		phi_in9 = phi4;
		phi_in10 = phi4;
		phi_in11 = phi5;
		dispatch12 = 0;
		if (phi6 < (__zext uint64_t)*(uint32_t*)(arg1 + 4))
		{
			uint64_t anon14 = phi6 + 1;
			uint32_t anon13 = (uint32_t)anon14;
			phi_in1 = anon13;
			uint64_t* anon15 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi6 << 3));
			phi_in2 = anon15;
			phi_in3 = anon14;
			phi_in7 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi6 << 3));
			phi_in8 = 0;
			phi_in9 = anon13;
			phi_in10 = anon13;
			phi_in11 = anon15;
			dispatch12 = 0;
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi6 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi6 < (__zext uint64_t)*(uint32_t*)(arg1 + 4));
	while (true)
	{
		uint64_t* phi_in31;
		uint32_t phi_in30;
		uint64_t phi26;
		uint64_t* phi25;
		uint64_t phi_in21;
		uint32_t phi19;
		uint32_t phi18;
		uint64_t phi_in29;
		uint64_t phi_in23;
		uint64_t* phi_in22;
		uint32_t phi_in28;
		uint64_t phi24;
		if (dispatch12 == 0)
		{
			uint64_t phi16 = phi_in7;
			uint32_t phi17 = phi_in8;
			phi18 = phi_in9;
			phi19 = phi_in10;
			uint64_t* phi20 = phi_in11;
			phi_in21 = phi16;
			phi_in22 = phi20;
			phi_in23 = (__sext int64_t)phi17;
		}
		if (dispatch12 == 2 || dispatch12 == 0)
		{
			phi24 = phi_in21;
			phi25 = phi_in22;
			phi26 = phi_in23;
			if (phi24 == 0)
			{
				break;
			}
		}
		if (phi24 != 0)
		{
			uint64_t* anon27;
			if (dispatch12 == 2 || dispatch12 == 0)
			{
				*(uint64_t*)((phi26 << 3) + arg2) = *phi25;
				phi_in21 = *(uint64_t*)(phi24 + 16);
				anon27 = (uint64_t*)*(uint64_t*)(phi24 + 16);
				phi_in22 = anon27;
				phi_in23 = phi26 + 1;
				dispatch12 = 2;
			}
			if (*(uint64_t*)(phi24 + 16) == 0 && (dispatch12 == 2 || dispatch12 == 0))
			{
				phi_in28 = phi18;
				phi_in29 = (__sext int64_t)phi19 << 3;
				phi_in30 = phi19;
				phi_in31 = anon27;
			}
		}
		if (dispatch12 == 1 || dispatch12 == 2 && phi24 != 0 && *(uint64_t*)(phi24 + 16) == 0 || dispatch12 == 0 && phi24 != 0 && *(uint64_t*)(phi24 + 16) == 0)
		{
			uint32_t phi32 = phi_in28;
			uint64_t phi33 = phi_in29;
			uint32_t phi34 = phi_in30;
			uint64_t* phi35 = phi_in31;
			phi_in7 = 0;
			uint32_t anon36 = (uint32_t)phi26 + 1;
			phi_in8 = anon36;
			phi_in9 = phi32;
			phi_in10 = phi34;
			phi_in11 = phi35;
			dispatch12 = 0;
			if (phi34 < *(uint32_t*)(arg1 + 4))
			{
				uint32_t anon37 = phi32 + 1;
				phi_in28 = anon37;
				phi_in29 = phi33 + 8;
				phi_in30 = anon37;
				uint64_t* anon38 = (uint64_t*)*(uint64_t*)(*phi25 + phi33);
				phi_in31 = anon38;
				phi_in7 = *(uint64_t*)(*phi25 + phi33);
				phi_in8 = anon36;
				phi_in9 = anon37;
				phi_in10 = anon37;
				phi_in11 = anon38;
				dispatch12 = 0;
				dispatch12 = 1;
			}
		}
	}
	return;
}
void _print_filepaths(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001ec0);
	uint64_t phi_in1 = 0;
	uint32_t anon2 = (uint32_t)arg2;
	if (anon2 >= 1)
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
	uint8_t* anon3;
	uint32_t phi_in4;
	uint64_t phi2;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi_in1 = arg2;
	if ((uint32_t)arg2 >= 1)
	{
		phi2 = phi_in1;
		anon3 = (uint8_t*)0x100001dd5;
		_printf(anon3);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon5 = (uint32_t)arg4;
	phi_in4 = anon5;
	if (anon5 >= 1)
	{
		uint32_t anon7;
		do
		{
			uint32_t phi6 = phi_in4;
			_printf(anon3);
			anon7 = phi6 - 1;
			phi_in4 = anon7;
		}
		while (anon7 != 0);
	}
	phi_in1 = (__zext uint64_t)((uint32_t)phi2 - 1);
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_effect_list(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001f40);
	if ((uint32_t)arg2 >= 1)
	{
		uint32_t anon3;
		uint64_t phi_in1 = arg2 & 0xffffffff;
		do
		{
			uint64_t phi2 = phi_in1;
			_printf((uint8_t*)0x100001e3a);
			anon3 = (uint32_t)phi2 - 1;
			if (anon3 != 0)
			{
				phi_in1 = (__zext uint64_t)anon3;
			}
		}
		while (anon3 != 0);
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
