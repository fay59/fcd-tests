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
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; struct _IO_FILE* field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi8;
	uint64_t phi9;
	uint24_t phi10;
	uint8_t phi11;
	uint64_t phi13;
	uint64_t phi14;
	uint32_t phi15;
	uint32_t dispatch16;
	uint64_t anon56;
	uint64_t phi_in61;
	uint64_t anon83;
	uint8_t* anon88;
	uint8_t* anon89;
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
		uint24_t phi17;
		uint64_t phi18;
		uint64_t anon24;
		uint64_t phi27;
		uint64_t phi28;
		uint8_t phi29;
		alloca1.field7 = 0;
		phi10 = 0;
		phi11 = 0;
		uint64_t phi12 = arg2 & 0xffffffff;
		phi13 = arg3;
		phi14 = 1;
		phi15 = 0;
		dispatch16 = 0;
		while (true)
		{
			uint64_t phi_in21;
			uint32_t* anon23;
			uint64_t anon26;
			uint32_t anon30;
			uint8_t* anon31;
			uint24_t phi_in33;
			uint64_t phi34;
			struct _IO_FILE* anon35;
			uint24_t anon36;
			uint32_t anon37;
			uint64_t phi_in38;
			uint64_t phi_in39;
			uint64_t* phi40;
			uint64_t phi41;
			uint64_t phi42;
			uint32_t phi43;
			uint64_t phi45;
			uint64_t phi_in46;
			uint64_t phi_in47;
			uint64_t phi_in48;
			uint64_t* phi49;
			uint64_t phi50;
			uint64_t phi51;
			uint64_t phi52;
			uint64_t anon53;
			uint8_t anon54;
			uint8_t* anon57;
			uint24_t phi58;
			uint64_t phi_in59;
			if (dispatch16 == 0)
			{
				phi17 = phi10;
				phi18 = phi12;
				uint64_t phi19 = phi_in20;
				phi_in21 = phi_in22;
				anon24 = arg1 - 328;
				anon23 = (uint32_t*)anon24;
				*anon23 = phi15;
				anon26 = phi14 << 3;
				struct x86_regs* anon25 = (struct x86_regs*)*(uint64_t*)(phi13 + anon26);
				_strcmp.47(anon25);
				phi27 = phi19 & 0xff | 0x100;
				phi28 = phi_in21;
				phi29 = 1;
				anon30 = (__zext uint32_t)phi17 << 8 | (__zext uint32_t)phi11;
				if (anon30 == 0)
				{
					break;
				}
				else 
				{
					_strcmp.47(anon25);
					uint8_t* anon32 = (uint8_t*)*(uint64_t*)(phi13 + anon26);
					anon31 = _strrchr(anon32, 46);
					phi_in33 = (uint24_t)((uint32_t)(uint64_t)anon31 >> 8);
					phi34 = phi_in21;
					if (anon31 != null)
					{
						anon35 = _fopen(anon32, (uint8_t*)0x100001c1c);
						anon37 = (uint32_t)(uint64_t)anon35;
						anon36 = (uint24_t)(anon37 >> 8);
						phi_in33 = anon36;
						phi34 = phi_in21;
						if (anon35 != null)
						{
							alloca1.field4 = anon35;
							phi_in38 = 4294975648;
							phi_in39 = 1;
							phi40 = (uint64_t*)0x1000020a0;
						}
					}
				}
			}
			if (dispatch16 == 1 || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null)
			{
				phi41 = phi_in38;
				phi42 = phi_in39;
				_strcmp.47(*(struct x86_regs**)phi40);
				phi43 = anon37;
			}
			if (phi42 <= 1 && (dispatch16 == 1 || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null))
			{
				phi43 = 0;
				uint64_t anon44 = phi41 + 8;
				phi_in38 = anon44;
				phi_in39 = phi42 + 1;
				phi40 = (uint64_t*)anon44;
				dispatch16 = 1;
			}
			if (phi42 <= 1 && dispatch16 == 1 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 || dispatch16 == 1 && phi42 > 1 || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1)
			{
				phi45 = 0;
				phi_in46 = phi_in21;
				phi_in47 = 1;
				phi_in48 = 4294975664;
				phi49 = (uint64_t*)0x1000020b0;
			}
			if (dispatch16 == 2 || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 || phi43 != 0 && dispatch16 == 1 && phi42 > 1 || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1)
			{
				phi50 = phi_in47;
				phi51 = phi_in21;
				phi52 = phi_in48;
				_strcmp.47(*(struct x86_regs**)phi49);
			}
			if (phi50 <= 1 && (dispatch16 == 2 || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 || phi43 != 0 && dispatch16 == 1 && phi42 > 1 || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1))
			{
				phi_in47 = phi50 + 1;
				anon54 = (__zext uint8_t)(anon37 == 0) ^ 1;
				anon53 = phi51 & 0xffffffffffffff00 | (__zext uint64_t)anon54;
				phi_in21 = anon53;
				uint64_t anon55 = phi52 + 8;
				phi_in48 = anon55;
				phi49 = (uint64_t*)anon55;
				dispatch16 = 2;
			}
			if (phi50 <= 1 && dispatch16 == 2 && anon54 == 0 || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 || phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 || anon30 != 0 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 || dispatch16 == 2 && phi50 > 1 || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 || phi43 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1)
			{
				phi45 = 2;
				phi_in46 = anon53;
			}
			if (phi50 <= 1 && dispatch16 == 2 && anon54 == 0 && anon37 == 0 || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 && anon37 == 0 || phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 && anon37 == 0 || anon30 != 0 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 && anon37 == 0 || dispatch16 == 2 && phi50 > 1 && anon37 == 0 || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 && anon37 == 0 || phi43 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 && anon37 == 0 || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1 && anon37 == 0 || phi42 <= 1 && dispatch16 == 1 && anon37 == 0 && phi43 == 0 || anon30 != 0 && phi42 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi43 == 0 || dispatch16 == 1 && phi42 > 1 && phi43 == 0 || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi43 == 0)
			{
				anon56 = arg1 - 400;
				_store_path(4294971047, anon56, *(uint64_t*)(alloca1.field5 + anon26), phi45);
			}
			if (dispatch16 == 3 || phi50 <= 1 && dispatch16 == 2 && anon54 == 0 && anon37 == 0 || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 && anon37 == 0 || phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 && anon37 == 0 || anon30 != 0 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 && anon37 == 0 || dispatch16 == 2 && phi50 > 1 && anon37 == 0 || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 && anon37 == 0 || phi43 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 && anon37 == 0 || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1 && anon37 == 0 || phi42 <= 1 && dispatch16 == 1 && anon37 == 0 && phi43 == 0 || anon30 != 0 && phi42 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi43 == 0 || dispatch16 == 1 && phi42 > 1 && phi43 == 0 || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi43 == 0)
			{
				anon57 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
				phi58 = (uint24_t)((uint32_t)(uint64_t)anon57 >> 8);
				phi_in59 = phi_in46;
			}
			if (anon57 != null && (dispatch16 == 3 || phi50 <= 1 && dispatch16 == 2 && anon54 == 0 && anon37 == 0 || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 && anon37 == 0 || phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 && anon37 == 0 || anon30 != 0 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 && anon37 == 0 || dispatch16 == 2 && phi50 > 1 && anon37 == 0 || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 && anon37 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 && anon37 == 0 || phi43 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 && anon37 == 0 || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1 && anon37 == 0 || phi42 <= 1 && dispatch16 == 1 && anon37 == 0 && phi43 == 0 || anon30 != 0 && phi42 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi43 == 0 || dispatch16 == 1 && phi42 > 1 && phi43 == 0 || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi43 == 0))
			{
				_process_line(4294971083, (uint64_t)&alloca1.field10, phi45);
				dispatch16 = 3;
			}
			if (anon37 != 0 && (phi50 <= 1 && dispatch16 == 2 && anon54 == 0 || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 || phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 || anon30 != 0 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 || dispatch16 == 2 && phi50 > 1 || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 || phi43 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1))
			{
				_strcmp.47((struct x86_regs*)0x100001cd8);
				phi58 = anon36;
				phi_in59 = anon53;
			}
			if (dispatch16 == 3 && anon57 == null || phi50 <= 1 && dispatch16 == 2 && anon54 == 0 && anon37 == 0 && anon57 == null || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 && anon37 == 0 && anon57 == null || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 && anon37 == 0 && anon57 == null || phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 && anon37 == 0 && anon57 == null || anon30 != 0 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 && anon37 == 0 && anon57 == null || dispatch16 == 2 && phi50 > 1 && anon37 == 0 && anon57 == null || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 && anon37 == 0 && anon57 == null || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 && anon37 == 0 && anon57 == null || phi43 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 && anon37 == 0 && anon57 == null || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1 && anon37 == 0 && anon57 == null || phi42 <= 1 && dispatch16 == 1 && anon37 == 0 && phi43 == 0 && anon57 == null || anon30 != 0 && phi42 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi43 == 0 && anon57 == null || dispatch16 == 1 && phi42 > 1 && phi43 == 0 && anon57 == null || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi43 == 0 && anon57 == null || phi50 <= 1 && anon37 != 0 && dispatch16 == 2 && anon54 == 0 || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 || phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 || anon30 != 0 && phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 || anon37 != 0 && dispatch16 == 2 && phi50 > 1 || phi42 <= 1 && phi43 != 0 && anon37 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 || phi43 != 0 && anon37 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 || anon30 != 0 && phi43 != 0 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1)
			{
				uint24_t phi_in60 = phi58;
				phi_in33 = phi_in60;
				phi13 = alloca1.field5;
				phi34 = phi_in59;
			}
			if (dispatch16 == 3 && anon57 == null || phi50 <= 1 && dispatch16 == 2 && anon54 == 0 && anon37 == 0 && anon57 == null || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 && anon37 == 0 && anon57 == null || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 && anon37 == 0 && anon57 == null || phi43 != 0 && phi50 <= 1 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 && anon37 == 0 && anon57 == null || anon30 != 0 && phi43 != 0 && phi50 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 && anon37 == 0 && anon57 == null || dispatch16 == 2 && phi50 > 1 && anon37 == 0 && anon57 == null || phi42 <= 1 && phi43 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 && anon37 == 0 && anon57 == null || anon30 != 0 && phi42 <= 1 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 && anon37 == 0 && anon57 == null || phi43 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 && anon37 == 0 && anon57 == null || anon30 != 0 && phi43 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1 && anon37 == 0 && anon57 == null || phi42 <= 1 && dispatch16 == 1 && anon37 == 0 && phi43 == 0 && anon57 == null || anon30 != 0 && phi42 <= 1 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi43 == 0 && anon57 == null || dispatch16 == 1 && phi42 > 1 && phi43 == 0 && anon57 == null || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi43 == 0 && anon57 == null || phi50 <= 1 && anon37 != 0 && dispatch16 == 2 && anon54 == 0 || phi42 <= 1 && phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 1 && anon37 == 0 && anon54 == 0 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && anon54 == 0 || phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 1 && phi42 > 1 && anon54 == 0 || anon30 != 0 && phi43 != 0 && phi50 <= 1 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && anon54 == 0 || anon37 != 0 && dispatch16 == 2 && phi50 > 1 || phi42 <= 1 && phi43 != 0 && anon37 != 0 && dispatch16 == 1 && anon37 == 0 && phi50 > 1 || anon30 != 0 && phi42 <= 1 && phi43 != 0 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && anon37 == 0 && phi50 > 1 || phi43 != 0 && anon37 != 0 && dispatch16 == 1 && phi42 > 1 && phi50 > 1 || anon30 != 0 && phi43 != 0 && anon37 != 0 && dispatch16 == 0 && anon31 != null && anon35 != null && phi42 > 1 && phi50 > 1 || anon30 != 0 && dispatch16 == 0 && anon31 != null && anon35 == null || anon30 != 0 && dispatch16 == 0 && anon31 == null)
			{
				phi28 = phi34;
				phi17 = phi_in33;
				phi18 = (__zext uint64_t)*anon2;
				phi27 = (__zext uint64_t)*anon23;
				phi29 = (uint8_t)(*anon23 >> 8);
				break;
			}
		}
		phi10 = phi17;
		phi12 = phi18;
		phi_in61 = phi13;
		uint64_t phi_in20 = phi27;
		uint64_t phi_in22 = phi28;
		phi11 = phi29;
		phi8 = anon24;
		phi9 = phi_in20;
	}
	uint64_t* anon63 = (uint64_t*)0x1000020c8;
	uint64_t anon62 = _table_count(4294971193, *anon63);
	alloca1.field5 = anon56;
	uint64_t* anon64 = (uint64_t*)phi8;
	uint64_t anon65 = anon62 & 0xffffffff;
	*anon64 = anon65;
	uint64_t* anon66 = (uint64_t*)(arg1 - 360);
	uint64_t anon67 = anon56 - ((anon65 << 3) + 15 & 0xffffffff0);
	*anon66 = anon67;
	uint64_t* anon69 = (uint64_t*)0x1000020d0;
	uint64_t anon68 = _table_count(4294971258, *anon69);
	uint64_t anon70 = anon68 & 0xffffffff;
	alloca1.field8 = anon70;
	uint64_t anon71 = anon67 - ((anon70 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon71;
	uint64_t* anon73 = (uint64_t*)0x1000020c0;
	uint64_t anon72 = _table_count(4294971306, *anon73);
	alloca1.field0 = (uint32_t)anon72;
	uint64_t anon74 = anon72 & 0xffffffff;
	alloca1.field1 = anon74;
	uint64_t anon75 = _table_count(4294971353, *anon73);
	alloca1.field2 = anon75 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon63);
	_table_dump_keys(4294971413, *anon69);
	_table_dump_keys(4294971428, *anon73);
	uint32_t(* anon76)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon67, *anon64, 8, anon76);
	_qsort((uint8_t*)anon71, alloca1.field8, 8, anon76);
	uint64_t anon77 = anon71 - ((anon74 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon77, alloca1.field1, 8, anon76);
	uint64_t anon78 = _table_count(4294971516, *anon73);
	uint32_t anon79 = (uint32_t)anon78;
	if ((anon79 >> 31 | (__zext uint32_t)(anon79 == 0)) == 0)
	{
		uint64_t phi_in80;
		uint64_t phi82;
		uint64_t phi84;
		uint64_t anon81 = anon78 << 32 >> 32;
		phi_in80 = anon81 + 1;
		anon83 = anon77 - ((anon75 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi82 = anon83 + anon81 * 24 - 8;
		do
		{
			phi84 = phi_in80;
			uint64_t anon85 = _table_find(4294971555, *anon73, *(uint64_t*)(anon77 + (phi84 << 3) - 16), 0);
			uint64_t anon86 = anon85 + 8;
			*(uint64_t*)(phi82 - 16) = **(uint64_t**)anon86;
			uint64_t* anon87 = (uint64_t*)anon86;
			*(uint64_t*)(phi82 - 8) = *(uint64_t*)(*anon87 + 8);
			*(uint64_t*)phi82 = *(uint64_t*)(*anon87 + 16);
			phi_in80 = phi84 - 1;
			phi82 = phi82 - 24;
		}
		while (phi84 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon88 = (uint8_t*)0x100001c53;
		_printf(anon88);
		_puts((uint8_t*)0x100001d30);
		anon89 = (uint8_t*)0x100001d60;
		_puts(anon89);
		_print_effect_definition(4294971695, *anon66, *anon64 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon77, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon88);
		_puts(anon89);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon83, alloca1.field2);
		_print_uniform_strings(4294971877, *anon66, *anon64);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon63, 0);
	_table_free(4294971936, *anon69, 0);
	_table_free(4294971955, *anon73, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
	phi13 = phi_in61;
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
	uint64_t phi_in3;
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
	phi_in4 = *(uint64_t*)(phi8 + 16);
	dispatch5 = 0;
	if (*(uint64_t*)(phi8 + 16) == 0)
	{
		uint32_t phi_in12 = (uint32_t)phi_in3;
		uint64_t phi_in13 = phi_in3 << 32 >> 29;
		uint32_t phi14 = phi_in12;
		uint64_t phi15 = phi_in13;
		phi_in4 = 0;
		dispatch5 = 0;
		if (phi14 < *anon6)
		{
			uint32_t anon17 = phi14 + 1;
			uint64_t anon16 = (__zext uint64_t)anon17;
			phi_in3 = anon16;
			phi_in12 = anon17;
			phi_in13 = phi15 + 8;
			phi_in3 = anon16;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15);
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
	uint64_t phi12;
	uint32_t dispatch13;
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
		uint32_t anon14;
		do
		{
			phi12 = phi_in9;
			_strcmp.47((struct x86_regs*)arg2);
			dispatch13 = 1;
			anon14 = (uint32_t)*anon10;
			if (anon14 != 0)
			{
				phi_in9 = *(uint64_t*)(phi12 + 16);
				dispatch13 = 0;
				if (*(uint64_t*)(phi12 + 16) == 0)
				{
					break;
				}
			}
		}
		while (anon14 != 0);
	}
	if (*(uint64_t*)(*anon10 + anon11) != 0 && dispatch13 == 0 || *(uint64_t*)(*anon10 + anon11) == 0)
	{
		phi12 = 0;
		if ((uint8_t)arg3 != 0)
		{
			uint8_t* anon15 = _strdup(anon5);
			uint8_t* anon16 = _malloc(24);
			*(uint64_t*)anon16 = (uint64_t)anon15;
			uint64_t anon17 = (uint64_t)anon16;
			*(uint64_t*)(anon17 + 8) = 0;
			*(uint64_t*)(anon17 + 16) = *(uint64_t*)(*anon10 + anon11);
			*(uint64_t*)(*anon10 + anon11) = anon17;
			uint32_t* anon18 = (uint32_t*)arg1;
			*anon18 = *anon18 + 1;
			phi12 = anon17;
		}
	}
	return phi12;
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
			uint64_t phi5;
			uint32_t phi6;
			uint64_t* anon7;
			uint64_t anon8;
			uint64_t phi9;
			if (dispatch4 == 0)
			{
				phi5 = phi_in1;
				phi6 = phi_in2;
				anon7 = (uint64_t*)(arg1 + 8);
				anon8 = phi5 << 3;
				if (*(uint64_t*)(*anon7 + (anon8 & 0x7fffffff8)) != 0)
				{
					_printf((uint8_t*)0x100001da3);
					phi9 = *anon7 + anon8;
				}
			}
			if (*(uint64_t*)phi9 == 0 && (dispatch4 == 1 || dispatch4 == 0 && *(uint64_t*)(*anon7 + (anon8 & 0x7fffffff8)) != 0))
			{
				_puts((uint8_t*)0x100001db1);
				phi6 = *anon3;
			}
			uint64_t anon10 = phi5 + 1;
			phi_in1 = anon10;
			phi_in2 = phi6;
			dispatch4 = 0;
			if (anon10 >= (__zext uint64_t)phi6)
			{
				break;
			}
			_printf((uint8_t*)0x100001dac);
			phi9 = *(uint64_t*)phi9 + 16;
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
