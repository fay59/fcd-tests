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
	uint64_t phi_in11;
	uint32_t dispatch9;
	uint32_t anon7;
	uint64_t phi_in16;
	uint64_t* phi_in12;
	uint64_t phi_in10;
	uint8_t* anon8;
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
		uint32_t anon19;
		uint64_t phi14;
		do
		{
			phi14 = phi_in10;
			uint64_t phi15 = phi_in16;
			uint64_t phi17 = phi_in11;
			uint64_t* phi18 = phi_in12;
			anon19 = _strcmp(*(uint8_t**)phi18, anon8);
			if (phi14 <= 1)
			{
				phi_in10 = phi14 + 1;
				uint8_t anon20 = (__zext uint8_t)(anon19 == 0) ^ 1;
				phi_in16 = phi15 & 0xffffffffffffff00 | (__zext uint64_t)anon20;
				uint64_t anon21 = phi17 + 8;
				phi_in11 = anon21;
				phi_in12 = (uint64_t*)anon21;
				if (anon20 == 0)
				{
					break;
				}
			}
		}
		while (phi14 <= 1);
		if (anon19 != 0)
		{
			_strcmp((uint8_t*)0x100001cd8, anon8);
		}
	}
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t* anon113;
	uint8_t* anon112;
	uint64_t anon70;
	uint64_t phi_in8;
	uint64_t phi_in9;
	uint64_t anon106;
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; struct __sFILE* field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
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
			uint32_t phi_in32;
			uint64_t anon24;
			uint64_t phi68;
			uint64_t phi_in31;
			uint64_t phi_in30;
			uint64_t phi_in28;
			uint64_t phi17;
			uint32_t phi_in27;
			uint64_t phi_in29;
			uint64_t phi_in19;
			uint64_t phi_in21;
			while (true)
			{
				uint64_t anon26;
				uint64_t anon62;
				uint32_t phi50;
				uint8_t* anon71;
				uint32_t anon65;
				uint64_t phi69;
				uint32_t phi_in66;
				uint32_t anon61;
				uint64_t phi58;
				uint64_t phi57;
				uint64_t phi_in55;
				uint64_t phi_in54;
				uint64_t phi_in52;
				uint64_t phi_in51;
				uint64_t phi_in53;
				uint64_t phi_in40;
				uint32_t phi_in48;
				uint64_t* phi_in56;
				uint64_t phi_in41;
				uint64_t phi_in39;
				uint64_t phi_in42;
				uint64_t phi_in67;
				uint64_t phi44;
				uint32_t phi_in38;
				struct __sFILE* anon36;
				uint8_t anon63;
				uint8_t* anon34;
				uint64_t phi20;
				uint32_t* anon23;
				uint64_t phi45;
				uint32_t anon33;
				uint32_t anon25;
				uint64_t* phi_in43;
				uint32_t anon47;
				uint64_t phi59;
				if (dispatch14 == 0)
				{
					uint64_t phi15 = phi_in10;
					uint64_t phi16 = phi_in11;
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
							phi_in30 = (__zext uint64_t)*anon23;
							phi_in31 = phi20;
							phi_in32 = *anon23 >> 8 & 0xff;
							break;
						}
						else 
						{
							anon34 = _strrchr(*(uint8_t**)(phi16 + anon26), 46);
							uint64_t phi_in35 = (uint64_t)anon34;
							if (anon34 != null)
							{
								anon36 = _fopen(*(uint8_t**)(phi16 + anon26), (uint8_t*)0x100001c1c);
								phi_in35 = (uint64_t)anon36;
							}
							if (anon34 == null || anon34 != null && anon36 == null)
							{
								uint64_t phi37 = phi_in35;
								phi_in38 = (uint32_t)phi37;
								phi_in39 = phi16;
								phi_in40 = phi20;
							}
							if (anon36 != null && anon34 != null)
							{
								alloca1.field4 = anon36;
								phi_in41 = 4294975648;
								phi_in42 = 1;
								phi_in43 = (uint64_t*)0x1000020a0;
							}
						}
					}
				}
				if (dispatch14 == 3 || anon25 != 0 && anon33 != 0 && anon36 != null && dispatch14 == 0 && anon34 != null)
				{
					phi44 = phi_in41;
					phi45 = phi_in42;
					uint64_t* phi46 = phi_in43;
					anon47 = _strcmp(*(uint8_t**)phi46, anon34);
					phi_in48 = anon47;
				}
				if (phi45 <= 1 && (dispatch14 == 3 || anon25 != 0 && anon33 != 0 && anon36 != null && dispatch14 == 0 && anon34 != null))
				{
					phi_in48 = 0;
					uint64_t anon49 = phi44 + 8;
					phi_in41 = anon49;
					phi_in42 = phi45 + 1;
					phi_in43 = (uint64_t*)anon49;
					dispatch14 = 3;
				}
				if (phi45 <= 1 && dispatch14 == 3 && anon47 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 || dispatch14 == 3 && phi45 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && dispatch14 == 0 && anon34 != null && phi45 > 1)
				{
					phi50 = phi_in48;
					phi_in51 = 0;
					phi_in52 = phi20;
					phi_in53 = 1;
					phi_in54 = phi20;
					phi_in55 = 4294975664;
					phi_in56 = (uint64_t*)0x1000020b0;
				}
				if (dispatch14 == 1 || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 || phi50 != 0 && dispatch14 == 3 && phi45 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1)
				{
					phi57 = phi_in53;
					phi58 = phi_in54;
					phi59 = phi_in55;
					uint64_t* phi60 = phi_in56;
					anon61 = _strcmp(*(uint8_t**)phi60, anon34);
				}
				if (phi57 <= 1 && (dispatch14 == 1 || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 || phi50 != 0 && dispatch14 == 3 && phi45 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1))
				{
					phi_in53 = phi57 + 1;
					anon63 = (__zext uint8_t)(anon61 == 0) ^ 1;
					anon62 = phi58 & 0xffffffffffffff00 | (__zext uint64_t)anon63;
					phi_in54 = anon62;
					uint64_t anon64 = phi59 + 8;
					phi_in55 = anon64;
					phi_in56 = (uint64_t*)anon64;
					dispatch14 = 1;
				}
				if (phi57 <= 1 && dispatch14 == 1 && anon63 == 0 || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 || phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 || dispatch14 == 1 && phi57 > 1 || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 || phi50 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1)
				{
					phi_in51 = 2;
					phi_in52 = anon62;
				}
				if (anon61 != 0 && (phi57 <= 1 && dispatch14 == 1 && anon63 == 0 || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 || phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 || dispatch14 == 1 && phi57 > 1 || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 || phi50 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1))
				{
					anon65 = _strcmp((uint8_t*)0x100001cd8, anon34);
					phi_in51 = 1;
					phi_in52 = anon62;
					phi_in66 = anon65;
					phi_in67 = anon62;
				}
				if (phi50 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon61 == 0 || phi50 != 0 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon65 == 0 || phi57 <= 1 && dispatch14 == 1 && anon63 == 0 && anon61 == 0 || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon65 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon65 == 0 || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon61 == 0 || phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon65 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi50 == 0 || anon61 != 0 && dispatch14 == 1 && phi57 > 1 && anon65 == 0 || dispatch14 == 3 && phi45 > 1 && phi50 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon65 == 0 || phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon61 == 0 || dispatch14 == 1 && phi57 > 1 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi50 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon61 == 0 || phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon65 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon65 == 0 || phi45 <= 1 && dispatch14 == 3 && anon47 == 0 && phi50 == 0 || phi57 <= 1 && anon61 != 0 && dispatch14 == 1 && anon63 == 0 && anon65 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon61 == 0 || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon65 == 0)
				{
					phi68 = phi_in51;
					phi69 = phi_in52;
					anon70 = arg1 - 400;
					_store_path(4294971047, anon70, *(uint64_t*)(alloca1.field5 + anon26), phi68);
				}
				if (anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon65 == 0 || dispatch14 == 2 || phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon61 == 0 || anon61 != 0 && dispatch14 == 1 && phi57 > 1 && anon65 == 0 || phi45 <= 1 && dispatch14 == 3 && anon47 == 0 && phi50 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon65 == 0 || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi50 == 0 || phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon65 == 0 || dispatch14 == 1 && phi57 > 1 && anon61 == 0 || dispatch14 == 3 && phi45 > 1 && phi50 == 0 || phi57 <= 1 && dispatch14 == 1 && anon63 == 0 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon61 == 0 || phi50 != 0 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon65 == 0 || phi50 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon61 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi50 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon65 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon61 == 0 || phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon65 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon61 == 0 || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon65 == 0 || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon61 == 0 || phi57 <= 1 && anon61 != 0 && dispatch14 == 1 && anon63 == 0 && anon65 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon65 == 0)
				{
					anon71 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
					phi_in66 = (uint32_t)(uint64_t)anon71;
					phi_in67 = phi69;
				}
				if (dispatch14 == 2 && anon71 == null || phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 1 && anon63 == 0 || phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi50 == 0 && anon71 == null || phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 || anon61 != 0 && dispatch14 == 1 && phi57 > 1 && anon65 == 0 && anon71 == null || phi57 <= 1 && dispatch14 == 1 && anon63 == 0 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 || phi50 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon61 == 0 && anon71 == null || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon61 == 0 && anon71 == null || phi50 != 0 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon61 == 0 && anon71 == null || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 || phi57 <= 1 && anon61 != 0 && dispatch14 == 1 && anon63 == 0 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon65 == 0 && anon71 == null || phi45 <= 1 && dispatch14 == 3 && anon47 == 0 && phi50 == 0 && anon71 == null || phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon61 == 0 && anon71 == null || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon61 == 0 && anon71 == null || phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon65 == 0 && anon71 == null || dispatch14 == 3 && phi45 > 1 && phi50 == 0 && anon71 == null || phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon65 == 0 && anon71 == null || dispatch14 == 1 && phi57 > 1 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon65 == 0 && anon71 == null || anon61 != 0 && anon65 != 0 && dispatch14 == 1 && phi57 > 1 || phi45 <= 1 && phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi50 == 0 && anon71 == null)
				{
					uint32_t phi72 = phi_in66;
					uint64_t phi73 = phi_in67;
					phi_in38 = phi72;
					phi_in39 = alloca1.field5;
					phi_in40 = phi73;
				}
				if (anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon65 == 0 && anon71 == null || anon61 != 0 && anon65 != 0 && dispatch14 == 1 && phi57 > 1 || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon65 == 0 && anon71 == null || dispatch14 == 1 && phi57 > 1 && anon61 == 0 && anon71 == null || phi45 <= 1 && dispatch14 == 3 && anon47 == 0 && phi50 == 0 && anon71 == null || dispatch14 == 3 && phi45 > 1 && phi50 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 || phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi50 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 == null || phi45 <= 1 && phi50 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi50 == 0 && anon71 == null || phi45 <= 1 && phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 || phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 || anon25 != 0 && anon33 != 0 && dispatch14 == 0 && anon34 != null && anon36 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && anon63 == 0 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 || phi50 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon61 == 0 && anon71 == null || dispatch14 == 2 && anon71 == null || phi57 <= 1 && dispatch14 == 1 && anon63 == 0 && anon61 == 0 && anon71 == null || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 || anon61 != 0 && dispatch14 == 1 && phi57 > 1 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi50 != 0 && dispatch14 == 0 && anon34 != null && phi45 > 1 && phi57 > 1 && anon61 == 0 && anon71 == null || phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 1 && anon63 == 0 || phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && phi57 > 1 && anon65 == 0 && anon71 == null || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon61 == 0 && anon71 == null || phi57 <= 1 && anon61 != 0 && dispatch14 == 1 && anon63 == 0 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && anon61 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && phi57 > 1 && anon65 == 0 && anon71 == null || phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 || phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && dispatch14 == 3 && anon47 == 0 && anon63 == 0 && anon65 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0 && anon61 == 0 && anon71 == null || phi50 != 0 && anon61 != 0 && dispatch14 == 3 && phi45 > 1 && phi57 > 1 && anon65 == 0 && anon71 == null || phi50 != 0 && phi57 <= 1 && dispatch14 == 3 && phi45 > 1 && anon63 == 0 && anon61 == 0 && anon71 == null || anon25 != 0 && anon33 != 0 && anon36 != null && phi45 <= 1 && phi50 != 0 && phi57 <= 1 && anon61 != 0 && anon65 != 0 && dispatch14 == 0 && anon34 != null && anon47 == 0 && anon63 == 0)
				{
					uint32_t phi74 = phi_in38;
					uint64_t phi75 = phi_in39;
					uint64_t phi76 = phi_in40;
					phi_in27 = phi74;
					phi_in28 = (__zext uint64_t)*anon2;
					phi_in29 = phi75;
					phi_in30 = (__zext uint64_t)*anon23;
					phi_in31 = phi76;
					phi_in32 = *anon23 >> 8;
					break;
				}
			}
			uint32_t phi77 = phi_in27;
			uint64_t phi78 = phi_in28;
			uint64_t phi79 = phi_in29;
			uint64_t phi80 = phi_in30;
			uint64_t phi81 = phi_in31;
			uint32_t phi82 = phi_in32;
			phi_in8 = anon24;
			phi_in9 = phi80;
			if ((uint32_t)phi17 + 1 != (uint32_t)phi78)
			{
				phi_in10 = phi78;
				phi_in11 = phi79;
				phi_in12 = phi17 + 1;
				phi_in19 = phi80;
				phi_in21 = phi81;
				phi_in13 = phi77 & 0xffffff00 | phi82 & 0xff;
				dispatch14 = 0;
			}
			_process_line(4294971083, (uint64_t)&alloca1.field10, phi68);
			dispatch14 = 2;
		}
	}
	uint64_t phi83 = phi_in8;
	uint64_t phi84 = phi_in9;
	uint64_t* anon86 = (uint64_t*)0x1000020c8;
	uint64_t anon85 = _table_count(4294971193, *anon86);
	alloca1.field5 = anon70;
	uint64_t* anon87 = (uint64_t*)phi83;
	uint64_t anon88 = anon85 & 0xffffffff;
	*anon87 = anon88;
	uint64_t* anon89 = (uint64_t*)(arg1 - 360);
	uint64_t anon90 = anon70 - ((anon88 << 3) + 15 & 0xffffffff0);
	*anon89 = anon90;
	uint64_t* anon92 = (uint64_t*)0x1000020d0;
	uint64_t anon91 = _table_count(4294971258, *anon92);
	uint64_t anon93 = anon91 & 0xffffffff;
	alloca1.field8 = anon93;
	uint64_t anon94 = anon90 - ((anon93 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon94;
	uint64_t* anon96 = (uint64_t*)0x1000020c0;
	uint64_t anon95 = _table_count(4294971306, *anon96);
	alloca1.field0 = (uint32_t)anon95;
	uint64_t anon97 = anon95 & 0xffffffff;
	alloca1.field1 = anon97;
	uint64_t anon98 = _table_count(4294971353, *anon96);
	alloca1.field2 = anon98 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon86);
	_table_dump_keys(4294971413, *anon92);
	_table_dump_keys(4294971428, *anon96);
	uint32_t(* anon99)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon90, *anon87, 8, anon99);
	_qsort((uint8_t*)anon94, alloca1.field8, 8, anon99);
	uint64_t anon100 = anon94 - ((anon97 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon100, alloca1.field1, 8, anon99);
	uint64_t anon101 = _table_count(4294971516, *anon96);
	uint32_t anon102 = (uint32_t)anon101;
	if ((anon102 >> 31 | (__zext uint32_t)(anon102 == 0)) == 0)
	{
		uint64_t phi_in105;
		uint64_t phi_in103;
		uint64_t phi107;
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
	if ((phi84 & 0x100) != 0)
	{
		anon112 = (uint8_t*)0x100001c53;
		_printf(anon112);
		_puts((uint8_t*)0x100001d30);
		anon113 = (uint8_t*)0x100001d60;
		_puts(anon113);
		_print_effect_definition(4294971695, *anon89, *anon87 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
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
		_print_uniform_strings(4294971877, *anon89, *anon87);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon86, 0);
	_table_free(4294971936, *anon92, 0);
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
	uint32_t* anon6;
	uint64_t phi2;
	uint64_t phi_in4;
	uint32_t dispatch5;
	uint64_t phi_in3;
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
	uint64_t phi_in19;
	uint32_t* anon6;
	if (arg2 != 0)
	{
		uint64_t phi_in4;
		uint64_t phi2;
		uint32_t dispatch5;
		uint64_t phi_in3;
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
			uint64_t phi_in10;
			uint64_t phi9;
			uint32_t phi_in11;
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
					dispatch5 = 0;
					dispatch5 = 1;
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
		uint64_t anon22;
		do
		{
			uint64_t phi20 = phi_in18;
			uint64_t anon21 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon21 + (phi20 << 3)));
			anon22 = phi20 + 1;
			phi_in18 = anon22;
			phi_in19 = anon21;
		}
		while (anon22 < (__zext uint64_t)*anon6);
	}
	uint64_t phi23 = phi_in19;
	_free(*(uint8_t**)phi23);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in17;
	uint32_t dispatch18;
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
		while (true)
		{
			uint64_t phi_in10;
			uint32_t phi_in7;
			uint64_t phi11;
			uint64_t* anon8;
			uint64_t anon9;
			uint64_t phi5;
			if (dispatch4 == 0)
			{
				phi5 = phi_in1;
				uint32_t phi6 = phi_in2;
				phi_in7 = phi6;
				anon8 = (uint64_t*)(arg1 + 8);
				anon9 = phi5 << 3;
				if (*(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0)
				{
					_printf((uint8_t*)0x100001da3);
					phi_in10 = *anon8 + anon9;
				}
			}
			if (dispatch4 == 1 || dispatch4 == 0 && *(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0)
			{
				phi11 = phi_in10;
			}
			if (*(uint64_t*)phi11 == 0 && (dispatch4 == 1 || dispatch4 == 0 && *(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0))
			{
				_puts((uint8_t*)0x100001db1);
				phi_in7 = *anon3;
			}
			uint32_t phi12 = phi_in7;
			uint64_t anon13 = phi5 + 1;
			phi_in1 = anon13;
			phi_in2 = phi12;
			dispatch4 = 0;
			if (anon13 >= (__zext uint64_t)phi12)
			{
				break;
			}
			_printf((uint8_t*)0x100001dac);
			phi_in10 = *(uint64_t*)phi11 + 16;
			dispatch4 = 1;
		}
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
	uint64_t phi3;
	uint32_t phi_in5;
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
