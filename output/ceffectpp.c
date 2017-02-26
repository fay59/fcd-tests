#include "tests/bin/ceffectpp.h"

void _store_path(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi7;
	uint8_t* anon2 = (uint8_t*)arg2;
	uint64_t anon1 = _strlen(anon2);
	uint8_t* anon3 = (uint8_t*)(arg1 - 64 - (anon1 + 15 & 0xfffffffffffffff0));
	_strcpy(anon3, anon2);
	uint8_t* anon4 = _strrchr(anon3, 46);
	*anon4 = 0;
	uint8_t* anon5 = _strrchr(anon3, 47);
	uint64_t anon6 = _table_find(4294970183, *(uint64_t*)0x1000020c0, (uint64_t)anon5 + 1, 1);
	uint64_t* anon8 = (uint64_t*)(anon6 + 8);
	phi7 = *anon8;
	if (*anon8 == 0)
	{
		uint8_t* anon9 = _calloc(3, 8);
		uint64_t anon10 = (uint64_t)anon9;
		*anon8 = anon10;
		phi7 = anon10;
	}
	*(uint64_t*)(phi7 + (arg3 << 32 >> 29)) = arg2;
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
		struct x86_regs* anon6 = (struct x86_regs*)anon4;
		_strcmp.47(anon6);
		uint64_t* phi7 = (uint64_t*)0x1000020c8;
		uint64_t anon9 = (uint64_t)anon4;
		uint32_t anon8 = (uint32_t)anon9;
		if (anon8 != 0)
		{
			_strcmp.47(anon6);
			phi7 = (uint64_t*)0x1000020d0;
		}
		if ((anon8 != 0 && (uint32_t)(anon9 | arg2) == 0 || anon8 == 0) && *phi7 != 0)
		{
			_strtok(null, anon5);
			uint8_t* anon10 = _strtok(null, anon5);
			if (anon10 != null)
			{
				uint64_t phi_in18;
				uint32_t dispatch22;
				uint64_t phi11 = 0;
				uint64_t phi_in12 = (uint64_t)anon10;
				uint32_t phi13 = 0;
				uint8_t phi14 = *anon10;
				if (*anon10 != 0)
				{
					uint64_t anon17;
					do
					{
						uint64_t phi15 = phi_in12;
						uint32_t anon16 = phi13 * 31 + (__zext uint32_t)phi14;
						phi11 = (__zext uint64_t)anon16;
						anon17 = phi15 + 1;
						phi_in12 = anon17;
						phi13 = anon16;
						phi14 = *(uint8_t*)anon17;
					}
					while (*(uint8_t*)anon17 != 0);
				}
				uint64_t* anon19 = (uint64_t*)(*phi7 + 8);
				uint64_t anon20 = phi11 % (__zext uint64_t)*(uint32_t*)(*phi7 + 4) << 3;
				phi_in18 = *(uint64_t*)(*anon19 + anon20);
				if (*(uint64_t*)(*anon19 + anon20) != 0)
				{
					uint32_t anon23;
					do
					{
						uint64_t phi21 = phi_in18;
						_strcmp.47((struct x86_regs*)anon10);
						dispatch22 = 1;
						anon23 = (uint32_t)*anon19;
						if (anon23 != 0)
						{
							phi_in18 = *(uint64_t*)(phi21 + 16);
							dispatch22 = 0;
							if (*(uint64_t*)(phi21 + 16) == 0)
							{
								break;
							}
						}
					}
					while (anon23 != 0);
				}
				if (*(uint64_t*)(*anon19 + anon20) != 0 && dispatch22 == 0 || *(uint64_t*)(*anon19 + anon20) == 0)
				{
					uint8_t* anon24 = _strdup(anon10);
					uint8_t* anon25 = _malloc(24);
					*(uint64_t*)anon25 = (uint64_t)anon24;
					uint64_t anon26 = (uint64_t)anon25;
					*(uint64_t*)(anon26 + 8) = 0;
					*(uint64_t*)(anon26 + 16) = *(uint64_t*)(*anon19 + anon20);
					*(uint64_t*)(*anon19 + anon20) = anon26;
					uint32_t* anon27 = (uint32_t*)*phi7;
					*anon27 = *anon27 + 1;
				}
			}
		}
	}
	return;
}
void _type_from_ext(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi5;
	uint64_t phi_in6;
	uint64_t phi_in7;
	uint64_t* phi8;
	uint64_t phi10;
	uint64_t phi_in1 = 4294975648;
	uint64_t phi_in2 = 1;
	uint64_t* phi3 = (uint64_t*)0x1000020a0;
	do
	{
		uint64_t phi4 = phi_in1;
		phi5 = phi_in2;
		_strcmp.47(*(struct x86_regs**)phi3);
		phi_in6 = 1;
		phi_in7 = 4294975664;
		phi8 = (uint64_t*)0x1000020b0;
		if (phi5 < 2)
		{
			uint64_t anon9 = phi4 + 8;
			phi_in1 = anon9;
			phi_in2 = phi5 + 1;
			phi3 = (uint64_t*)anon9;
		}
	}
	while (phi5 < 2);
	do
	{
		uint64_t phi_in12;
		phi10 = phi_in6;
		uint64_t phi11 = phi_in12;
		uint64_t phi13 = phi_in7;
		_strcmp.47(*(struct x86_regs**)phi8);
		if (phi10 <= 1)
		{
			phi_in6 = phi10 + 1;
			phi_in12 = phi11 & 0xffffffffffffff00 | 1;
			uint64_t anon14 = phi13 + 8;
			phi_in7 = anon14;
			phi8 = (uint64_t*)anon14;
		}
	}
	while (phi10 <= 1);
	_strcmp.47((struct x86_regs*)0x100001cd8);
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; struct __sFILE* field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi8;
	uint64_t phi9;
	uint24_t phi10;
	uint8_t phi11;
	uint64_t phi14;
	uint32_t phi15;
	uint32_t dispatch16;
	uint64_t anon58;
	uint64_t anon85;
	uint8_t* anon90;
	uint8_t* anon91;
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
		phi8 = (uint64_t)&alloca1.field9;
		phi9 = 0;
	}
	else 
	{
		uint64_t anon22;
		uint24_t phi25;
		uint64_t phi26;
		uint64_t phi27;
		uint64_t phi28;
		uint64_t phi29;
		uint8_t phi30;
		alloca1.field7 = 0;
		phi10 = 0;
		phi11 = 0;
		uint64_t phi_in12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		phi14 = 1;
		phi15 = 0;
		dispatch16 = 0;
		while (true)
		{
			uint64_t phi_in19;
			uint32_t* anon21;
			uint64_t anon24;
			uint32_t anon31;
			uint8_t* anon32;
			uint24_t phi_in34;
			uint64_t phi_in35;
			uint64_t phi36;
			struct __sFILE* anon37;
			uint24_t anon38;
			uint32_t anon39;
			uint64_t phi_in40;
			uint64_t phi_in41;
			uint64_t* phi42;
			uint64_t phi43;
			uint64_t phi44;
			uint32_t phi45;
			uint64_t phi47;
			uint64_t phi_in48;
			uint64_t phi_in49;
			uint64_t phi_in50;
			uint64_t* phi51;
			uint64_t phi52;
			uint64_t phi53;
			uint64_t phi54;
			uint64_t anon55;
			uint8_t anon56;
			uint8_t* anon59;
			uint24_t phi60;
			uint64_t phi_in61;
			if (dispatch16 == 0)
			{
				uint64_t phi17 = phi_in18;
				phi_in19 = phi_in20;
				anon22 = arg1 - 328;
				anon21 = (uint32_t*)anon22;
				*anon21 = phi15;
				anon24 = phi14 << 3;
				struct x86_regs* anon23 = (struct x86_regs*)*(uint64_t*)(phi13 + anon24);
				_strcmp.47(anon23);
				phi25 = phi10;
				phi26 = phi_in12;
				phi27 = phi13;
				phi28 = phi17 & 0xff | 0x100;
				phi29 = phi_in19;
				phi30 = 1;
				anon31 = (__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11;
				if (anon31 == 0)
				{
					break;
				}
				else 
				{
					_strcmp.47(anon23);
					uint8_t* anon33 = (uint8_t*)*(uint64_t*)(phi13 + anon24);
					anon32 = _strrchr(anon33, 46);
					phi_in34 = (uint24_t)((uint32_t)(uint64_t)anon32 >> 8);
					phi_in35 = phi13;
					phi36 = phi_in19;
					if (anon32 != null)
					{
						anon37 = _fopen(anon33, (uint8_t*)0x100001c1c);
						anon39 = (uint32_t)(uint64_t)anon37;
						anon38 = (uint24_t)(anon39 >> 8);
						phi_in34 = anon38;
						phi_in35 = phi13;
						phi36 = phi_in19;
						if (anon37 != null)
						{
							alloca1.field4 = anon37;
							phi_in40 = 4294975648;
							phi_in41 = 1;
							phi42 = (uint64_t*)0x1000020a0;
						}
					}
				}
			}
			if (dispatch16 == 1 || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null)
			{
				phi43 = phi_in40;
				phi44 = phi_in41;
				_strcmp.47(*(struct x86_regs**)phi42);
				phi45 = anon39;
			}
			if (phi44 <= 1 && (dispatch16 == 1 || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null))
			{
				phi45 = 0;
				uint64_t anon46 = phi43 + 8;
				phi_in40 = anon46;
				phi_in41 = phi44 + 1;
				phi42 = (uint64_t*)anon46;
				dispatch16 = 1;
			}
			if (phi44 <= 1 && dispatch16 == 1 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 || dispatch16 == 1 && phi44 > 1 || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1)
			{
				phi47 = 0;
				phi_in48 = phi_in19;
				phi_in49 = 1;
				phi_in50 = 4294975664;
				phi51 = (uint64_t*)0x1000020b0;
			}
			if (dispatch16 == 2 || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 || phi45 != 0 && dispatch16 == 1 && phi44 > 1 || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1)
			{
				phi52 = phi_in49;
				phi53 = phi_in19;
				phi54 = phi_in50;
				_strcmp.47(*(struct x86_regs**)phi51);
			}
			if (phi52 <= 1 && (dispatch16 == 2 || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 || phi45 != 0 && dispatch16 == 1 && phi44 > 1 || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1))
			{
				phi_in49 = phi52 + 1;
				anon56 = (__zext uint8_t)(anon39 == 0) ^ 1;
				anon55 = phi53 & 0xffffffffffffff00 | (__zext uint64_t)anon56;
				phi_in19 = anon55;
				uint64_t anon57 = phi54 + 8;
				phi_in50 = anon57;
				phi51 = (uint64_t*)anon57;
				dispatch16 = 2;
			}
			if (phi52 <= 1 && dispatch16 == 2 && anon56 == 0 || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 || phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 || anon31 != 0 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 || dispatch16 == 2 && phi52 > 1 || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 || phi45 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1)
			{
				phi47 = 2;
				phi_in48 = anon55;
			}
			if (phi52 <= 1 && dispatch16 == 2 && anon56 == 0 && anon39 == 0 || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 && anon39 == 0 || phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 && anon39 == 0 || anon31 != 0 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 && anon39 == 0 || dispatch16 == 2 && phi52 > 1 && anon39 == 0 || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 && anon39 == 0 || phi45 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 && anon39 == 0 || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1 && anon39 == 0 || phi44 <= 1 && dispatch16 == 1 && anon39 == 0 && phi45 == 0 || anon31 != 0 && phi44 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi45 == 0 || dispatch16 == 1 && phi44 > 1 && phi45 == 0 || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi45 == 0)
			{
				anon58 = arg1 - 400;
				_store_path(4294971047, anon58, *(uint64_t*)(alloca1.field5 + anon24), phi47);
			}
			if (dispatch16 == 3 || phi52 <= 1 && dispatch16 == 2 && anon56 == 0 && anon39 == 0 || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 && anon39 == 0 || phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 && anon39 == 0 || anon31 != 0 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 && anon39 == 0 || dispatch16 == 2 && phi52 > 1 && anon39 == 0 || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 && anon39 == 0 || phi45 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 && anon39 == 0 || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1 && anon39 == 0 || phi44 <= 1 && dispatch16 == 1 && anon39 == 0 && phi45 == 0 || anon31 != 0 && phi44 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi45 == 0 || dispatch16 == 1 && phi44 > 1 && phi45 == 0 || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi45 == 0)
			{
				anon59 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
				phi60 = (uint24_t)((uint32_t)(uint64_t)anon59 >> 8);
				phi_in61 = phi_in48;
			}
			if (anon59 != null && (dispatch16 == 3 || phi52 <= 1 && dispatch16 == 2 && anon56 == 0 && anon39 == 0 || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 && anon39 == 0 || phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 && anon39 == 0 || anon31 != 0 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 && anon39 == 0 || dispatch16 == 2 && phi52 > 1 && anon39 == 0 || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 && anon39 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 && anon39 == 0 || phi45 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 && anon39 == 0 || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1 && anon39 == 0 || phi44 <= 1 && dispatch16 == 1 && anon39 == 0 && phi45 == 0 || anon31 != 0 && phi44 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi45 == 0 || dispatch16 == 1 && phi44 > 1 && phi45 == 0 || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi45 == 0))
			{
				_process_line(4294971083, (uint64_t)&alloca1.field10, phi47);
				dispatch16 = 3;
			}
			if (anon39 != 0 && (phi52 <= 1 && dispatch16 == 2 && anon56 == 0 || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 || phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 || anon31 != 0 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 || dispatch16 == 2 && phi52 > 1 || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 || phi45 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1))
			{
				_strcmp.47((struct x86_regs*)0x100001cd8);
				phi60 = anon38;
				phi_in61 = anon55;
			}
			if (dispatch16 == 3 && anon59 == null || phi52 <= 1 && dispatch16 == 2 && anon56 == 0 && anon39 == 0 && anon59 == null || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 && anon39 == 0 && anon59 == null || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 && anon39 == 0 && anon59 == null || phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 && anon39 == 0 && anon59 == null || anon31 != 0 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 && anon39 == 0 && anon59 == null || dispatch16 == 2 && phi52 > 1 && anon39 == 0 && anon59 == null || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 && anon39 == 0 && anon59 == null || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 && anon39 == 0 && anon59 == null || phi45 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 && anon39 == 0 && anon59 == null || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1 && anon39 == 0 && anon59 == null || phi44 <= 1 && dispatch16 == 1 && anon39 == 0 && phi45 == 0 && anon59 == null || anon31 != 0 && phi44 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi45 == 0 && anon59 == null || dispatch16 == 1 && phi44 > 1 && phi45 == 0 && anon59 == null || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi45 == 0 && anon59 == null || phi52 <= 1 && anon39 != 0 && dispatch16 == 2 && anon56 == 0 || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 || phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 || anon31 != 0 && phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 || anon39 != 0 && dispatch16 == 2 && phi52 > 1 || phi44 <= 1 && phi45 != 0 && anon39 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 || phi45 != 0 && anon39 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 || anon31 != 0 && phi45 != 0 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1)
			{
				uint24_t phi_in62 = phi60;
				phi_in34 = phi_in62;
				phi_in35 = alloca1.field5;
				phi36 = phi_in61;
			}
			if (dispatch16 == 3 && anon59 == null || phi52 <= 1 && dispatch16 == 2 && anon56 == 0 && anon39 == 0 && anon59 == null || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 && anon39 == 0 && anon59 == null || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 && anon39 == 0 && anon59 == null || phi45 != 0 && phi52 <= 1 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 && anon39 == 0 && anon59 == null || anon31 != 0 && phi45 != 0 && phi52 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 && anon39 == 0 && anon59 == null || dispatch16 == 2 && phi52 > 1 && anon39 == 0 && anon59 == null || phi44 <= 1 && phi45 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 && anon39 == 0 && anon59 == null || anon31 != 0 && phi44 <= 1 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 && anon39 == 0 && anon59 == null || phi45 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 && anon39 == 0 && anon59 == null || anon31 != 0 && phi45 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1 && anon39 == 0 && anon59 == null || phi44 <= 1 && dispatch16 == 1 && anon39 == 0 && phi45 == 0 && anon59 == null || anon31 != 0 && phi44 <= 1 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi45 == 0 && anon59 == null || dispatch16 == 1 && phi44 > 1 && phi45 == 0 && anon59 == null || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi45 == 0 && anon59 == null || phi52 <= 1 && anon39 != 0 && dispatch16 == 2 && anon56 == 0 || phi44 <= 1 && phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 1 && anon39 == 0 && anon56 == 0 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && anon56 == 0 || phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 1 && phi44 > 1 && anon56 == 0 || anon31 != 0 && phi45 != 0 && phi52 <= 1 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && anon56 == 0 || anon39 != 0 && dispatch16 == 2 && phi52 > 1 || phi44 <= 1 && phi45 != 0 && anon39 != 0 && dispatch16 == 1 && anon39 == 0 && phi52 > 1 || anon31 != 0 && phi44 <= 1 && phi45 != 0 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && anon39 == 0 && phi52 > 1 || phi45 != 0 && anon39 != 0 && dispatch16 == 1 && phi44 > 1 && phi52 > 1 || anon31 != 0 && phi45 != 0 && anon39 != 0 && dispatch16 == 0 && anon32 != null && anon37 != null && phi44 > 1 && phi52 > 1 || anon31 != 0 && dispatch16 == 0 && anon32 != null && anon37 == null || anon31 != 0 && dispatch16 == 0 && anon32 == null)
			{
				uint64_t phi_in63 = phi36;
				phi25 = phi_in34;
				phi26 = (__zext uint64_t)*anon2;
				phi27 = phi_in35;
				phi28 = (__zext uint64_t)*anon21;
				phi29 = phi_in63;
				phi30 = (uint8_t)(*anon21 >> 8);
				break;
			}
		}
		phi10 = phi25;
		phi_in12 = phi26;
		phi13 = phi27;
		uint64_t phi_in18 = phi28;
		uint64_t phi_in20 = phi29;
		phi11 = phi30;
		phi8 = anon22;
		phi9 = phi_in18;
	}
	uint64_t* anon65 = (uint64_t*)0x1000020c8;
	uint64_t anon64 = _table_count(4294971193, *anon65);
	alloca1.field5 = anon58;
	uint64_t* anon66 = (uint64_t*)phi8;
	uint64_t anon67 = anon64 & 0xffffffff;
	*anon66 = anon67;
	uint64_t* anon68 = (uint64_t*)(arg1 - 360);
	uint64_t anon69 = anon58 - ((anon67 << 3) + 15 & 0xffffffff0);
	*anon68 = anon69;
	uint64_t* anon71 = (uint64_t*)0x1000020d0;
	uint64_t anon70 = _table_count(4294971258, *anon71);
	uint64_t anon72 = anon70 & 0xffffffff;
	alloca1.field8 = anon72;
	uint64_t anon73 = anon69 - ((anon72 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon73;
	uint64_t* anon75 = (uint64_t*)0x1000020c0;
	uint64_t anon74 = _table_count(4294971306, *anon75);
	alloca1.field0 = (uint32_t)anon74;
	uint64_t anon76 = anon74 & 0xffffffff;
	alloca1.field1 = anon76;
	uint64_t anon77 = _table_count(4294971353, *anon75);
	alloca1.field2 = anon77 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon65);
	_table_dump_keys(4294971413, *anon71);
	_table_dump_keys(4294971428, *anon75);
	uint32_t(* anon78)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon69, *anon66, 8, anon78);
	_qsort((uint8_t*)anon73, alloca1.field8, 8, anon78);
	uint64_t anon79 = anon73 - ((anon76 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon79, alloca1.field1, 8, anon78);
	uint64_t anon80 = _table_count(4294971516, *anon75);
	uint32_t anon81 = (uint32_t)anon80;
	if ((anon81 >> 31 | (__zext uint32_t)(anon81 == 0)) == 0)
	{
		uint64_t phi_in82;
		uint64_t phi84;
		uint64_t phi86;
		uint64_t anon83 = anon80 << 32 >> 32;
		phi_in82 = anon83 + 1;
		anon85 = anon79 - ((anon77 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi84 = anon85 + anon83 * 24 - 8;
		do
		{
			phi86 = phi_in82;
			uint64_t anon87 = _table_find(4294971555, *anon75, *(uint64_t*)(anon79 + (phi86 << 3) - 16), 0);
			uint64_t anon88 = anon87 + 8;
			*(uint64_t*)(phi84 - 16) = **(uint64_t**)anon88;
			uint64_t* anon89 = (uint64_t*)anon88;
			*(uint64_t*)(phi84 - 8) = *(uint64_t*)(*anon89 + 8);
			*(uint64_t*)phi84 = *(uint64_t*)(*anon89 + 16);
			phi_in82 = phi86 - 1;
			phi84 = phi84 - 24;
		}
		while (phi86 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon90 = (uint8_t*)0x100001c53;
		_printf(anon90);
		_puts((uint8_t*)0x100001d30);
		anon91 = (uint8_t*)0x100001d60;
		_puts(anon91);
		_print_effect_definition(4294971695, *anon68, *anon66 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon79, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon90);
		_puts(anon91);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon85, alloca1.field2);
		_print_uniform_strings(4294971877, *anon68, *anon66);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon65, 0);
	_table_free(4294971936, *anon71, 0);
	_table_free(4294971955, *anon75, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
	phi14 = phi14 + 1;
	phi15 = (__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11;
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
		_free.56(*(struct x86_regs**)arg1);
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
	uint64_t phi2 = 0;
	if (anon1 != null)
	{
		*(uint32_t*)anon1 = 0;
		uint64_t anon3 = (uint64_t)anon1;
		*(uint32_t*)(anon3 + 4) = (uint32_t)arg1;
		uint8_t* anon4 = _calloc(arg1 << 32 >> 32, 8);
		*(uint64_t*)(anon3 + 8) = (uint64_t)anon4;
		phi2 = anon3;
		if (anon4 == null)
		{
			_free.56((struct x86_regs*)anon1);
			phi2 = 0;
		}
	}
	return phi2;
}
void _table_apply(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi2;
	uint64_t phi_in3;
	uint64_t phi_in4;
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
		uint64_t phi8;
		uint64_t phi9;
		uint32_t phi_in10;
		uint64_t phi_in11;
		if (dispatch5 == 0)
		{
			phi8 = phi_in3;
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
					phi_in10 = (uint32_t)phi8;
					phi_in11 = phi8 << 32 >> 29;
				}
			}
		}
		if (dispatch5 == 1 || phi9 != 0 && dispatch5 == 0 && *(uint64_t*)(phi9 + 16) == 0)
		{
			uint32_t phi12 = phi_in10;
			uint64_t phi13 = phi_in11;
			phi_in3 = phi8;
			phi_in4 = 0;
			dispatch5 = 0;
			if (phi12 < *anon6)
			{
				uint32_t anon15 = phi12 + 1;
				uint64_t anon14 = (__zext uint64_t)anon15;
				phi8 = anon14;
				phi_in10 = anon15;
				phi_in11 = phi13 + 8;
				phi_in3 = anon14;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi13);
				dispatch5 = 0;
				dispatch5 = 1;
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
	uint64_t phi3;
	uint64_t phi_in4;
	uint32_t dispatch5;
	uint32_t* anon6;
	uint64_t phi8;
	uint64_t phi10;
	if (arg2 != 0)
	{
		uint64_t phi2;
		uint64_t phi_in1 = 0;
		do
		{
			phi2 = phi_in1;
			phi3 = phi2;
			phi_in4 = 0;
			dispatch5 = 0;
			anon6 = (uint32_t*)(arg1 + 4);
			if (phi2 < (__zext uint64_t)*anon6)
			{
				uint64_t anon7 = phi2 + 1;
				phi_in1 = anon7;
				phi3 = anon7;
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
			phi8 = phi_in4;
		}
	}
	uint64_t phi9 = 0;
	if (*anon6 == 0)
	{
		phi10 = arg1 + 8;
	}
	else 
	{
		while (true)
		{
			uint64_t anon11 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon11 + (phi9 << 3)));
			phi9 = phi9 + 1;
			phi10 = anon11;
		}
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi8 + 8));
	phi3 = phi3;
	phi_in4 = *(uint64_t*)(phi8 + 16);
	dispatch5 = 0;
	if (*(uint64_t*)(phi8 + 16) == 0)
	{
		uint64_t phi12 = phi3;
		uint32_t phi_in13 = (uint32_t)phi3;
		uint64_t phi_in14 = phi3 << 32 >> 29;
		phi3 = phi12;
		uint32_t phi15 = phi_in13;
		uint64_t phi16 = phi_in14;
		phi_in4 = 0;
		dispatch5 = 0;
		if (phi15 < *anon6)
		{
			uint32_t anon18 = phi15 + 1;
			uint64_t anon17 = (__zext uint64_t)anon18;
			phi12 = anon17;
			phi_in13 = anon18;
			phi_in14 = phi16 + 8;
			phi3 = anon17;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi16);
			dispatch5 = 0;
			dispatch5 = 1;
		}
	}
	_free.56(*(struct x86_regs**)phi10);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi4;
	uint64_t phi_in9;
	uint64_t phi13;
	uint32_t dispatch14;
	uint64_t phi1 = 0;
	uint64_t phi_in2 = arg2;
	uint32_t phi3 = 0;
	uint8_t* anon5 = (uint8_t*)arg2;
	phi4 = *anon5;
	if (*anon5 != 0)
	{
		uint64_t anon8;
		do
		{
			uint64_t phi6 = phi_in2;
			uint32_t anon7 = phi3 * 31 + (__zext uint32_t)phi4;
			phi1 = (__zext uint64_t)anon7;
			anon8 = phi6 + 1;
			phi_in2 = anon8;
			phi3 = anon7;
			phi4 = *(uint8_t*)anon8;
		}
		while (*(uint8_t*)anon8 != 0);
	}
	uint64_t* anon10 = (uint64_t*)(arg1 + 8);
	uint64_t anon11 = phi1 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
	phi_in9 = *(uint64_t*)(*anon10 + anon11);
	if (*(uint64_t*)(*anon10 + anon11) != 0)
	{
		uint32_t anon15;
		do
		{
			uint64_t phi12 = phi_in9;
			_strcmp.47((struct x86_regs*)arg2);
			phi13 = phi12;
			dispatch14 = 1;
			anon15 = (uint32_t)*anon10;
			if (anon15 != 0)
			{
				phi_in9 = *(uint64_t*)(phi12 + 16);
				dispatch14 = 0;
				if (*(uint64_t*)(phi12 + 16) == 0)
				{
					break;
				}
			}
		}
		while (anon15 != 0);
	}
	if (*(uint64_t*)(*anon10 + anon11) != 0 && dispatch14 == 0 || *(uint64_t*)(*anon10 + anon11) == 0)
	{
		phi13 = 0;
		if ((uint8_t)arg3 != 0)
		{
			uint8_t* anon16 = _strdup(anon5);
			uint8_t* anon17 = _malloc(24);
			*(uint64_t*)anon17 = (uint64_t)anon16;
			uint64_t anon18 = (uint64_t)anon17;
			*(uint64_t*)(anon18 + 8) = 0;
			*(uint64_t*)(anon18 + 16) = *(uint64_t*)(*anon10 + anon11);
			*(uint64_t*)(*anon10 + anon11) = anon18;
			uint32_t* anon19 = (uint32_t*)arg1;
			*anon19 = *anon19 + 1;
			phi13 = anon18;
		}
	}
	return phi13;
}
void _table_print(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi2;
	uint64_t phi_in1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi2 = *anon3;
	uint32_t dispatch4 = 0;
	if (*anon3 != 0)
	{
		while (true)
		{
			uint64_t phi5;
			uint32_t phi7;
			uint64_t* anon8;
			uint64_t anon9;
			uint64_t phi10;
			if (dispatch4 == 0)
			{
				phi5 = phi_in1;
				uint32_t phi_in6 = phi2;
				phi7 = phi_in6;
				anon8 = (uint64_t*)(arg1 + 8);
				anon9 = phi5 << 3;
				if (*(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0)
				{
					_printf((uint8_t*)0x100001da3);
					phi10 = *anon8 + anon9;
				}
			}
			if (*(uint64_t*)phi10 == 0 && (dispatch4 == 1 || dispatch4 == 0 && *(uint64_t*)(*anon8 + (anon9 & 0x7fffffff8)) != 0))
			{
				_puts((uint8_t*)0x100001db1);
				phi7 = *anon3;
			}
			uint64_t anon11 = phi5 + 1;
			phi_in1 = anon11;
			phi2 = phi7;
			dispatch4 = 0;
			if (anon11 >= (__zext uint64_t)phi7)
			{
				break;
			}
			_printf((uint8_t*)0x100001dac);
			phi10 = *(uint64_t*)phi10 + 16;
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
	uint64_t phi2;
	uint64_t phi3;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		phi3 = 0;
		if (phi2 < (__zext uint64_t)*(uint32_t*)(arg1 + 4))
		{
			phi_in1 = phi2 + 1;
			phi3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi2 < (__zext uint64_t)*(uint32_t*)(arg1 + 4));
	if (phi3 == 0)
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
	uint8_t* anon3;
	uint32_t phi_in4;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi1 = arg2;
	uint32_t anon2 = (uint32_t)arg2;
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
	{
		anon3 = (uint8_t*)0x100001dd5;
		_printf(anon3);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon5 = (uint32_t)arg4;
	phi_in4 = anon5;
	if ((anon5 >> 31 | (__zext uint32_t)(anon5 == 0)) == 0)
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
	phi1 = (__zext uint64_t)((uint32_t)phi1 - 1);
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
