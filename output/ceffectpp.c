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
	uint32_t* anon15;
	uint32_t dispatch17;
	uint64_t anon56;
	uint64_t anon82;
	uint8_t* anon87;
	uint8_t* anon88;
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
		uint24_t phi18;
		uint64_t phi26;
		uint64_t phi27;
		uint64_t phi28;
		uint8_t phi29;
		alloca1.field7 = 0;
		phi10 = 0;
		phi11 = 0;
		uint64_t phi12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		phi14 = 1;
		uint64_t anon16 = arg1 - 328;
		anon15 = (uint32_t*)anon16;
		*anon15 = 0;
		dispatch17 = 0;
		while (true)
		{
			uint64_t phi22;
			uint64_t anon25;
			uint32_t anon30;
			uint8_t* anon31;
			struct __sFILE* anon33;
			uint24_t anon34;
			uint32_t anon35;
			uint64_t phi_in36;
			uint64_t phi_in37;
			uint64_t* phi38;
			uint64_t phi39;
			uint64_t phi40;
			uint32_t phi41;
			uint64_t phi43;
			uint64_t phi44;
			uint64_t phi_in45;
			uint64_t phi_in46;
			uint64_t phi_in47;
			uint64_t* phi48;
			uint64_t phi49;
			uint64_t phi50;
			uint64_t phi51;
			uint64_t anon52;
			uint8_t anon53;
			uint64_t phi_in55;
			uint8_t* anon57;
			uint24_t phi58;
			if (dispatch17 == 0)
			{
				phi18 = phi10;
				uint64_t phi_in19 = phi12;
				uint64_t phi20 = phi_in21;
				phi22 = phi_in23;
				anon25 = phi14 << 3;
				struct x86_regs* anon24 = (struct x86_regs*)*(uint64_t*)(phi13 + anon25);
				_strcmp.47(anon24);
				phi26 = phi_in19;
				phi27 = phi20 & 0xff | 0x100;
				phi28 = phi22;
				phi29 = 1;
				anon30 = (__zext uint32_t)phi18 << 8 | (__zext uint32_t)phi11;
				if (anon30 == 0)
				{
					break;
				}
				else 
				{
					_strcmp.47(anon24);
					uint8_t* anon32 = (uint8_t*)*(uint64_t*)(phi13 + anon25);
					anon31 = _strrchr(anon32, 46);
					phi18 = (uint24_t)((uint32_t)(uint64_t)anon31 >> 8);
					if (anon31 != null)
					{
						anon33 = _fopen(anon32, (uint8_t*)0x100001c1c);
						anon35 = (uint32_t)(uint64_t)anon33;
						anon34 = (uint24_t)(anon35 >> 8);
						phi18 = anon34;
						if (anon33 != null)
						{
							alloca1.field4 = anon33;
							phi_in36 = 4294975648;
							phi_in37 = 1;
							phi38 = (uint64_t*)0x1000020a0;
						}
					}
				}
			}
			if (dispatch17 == 1 || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null)
			{
				phi39 = phi_in36;
				phi40 = phi_in37;
				_strcmp.47(*(struct x86_regs**)phi38);
				phi41 = anon35;
			}
			if (phi40 <= 1 && (dispatch17 == 1 || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null))
			{
				phi41 = 0;
				uint64_t anon42 = phi39 + 8;
				phi_in36 = anon42;
				phi_in37 = phi40 + 1;
				phi38 = (uint64_t*)anon42;
				dispatch17 = 1;
			}
			if (phi40 <= 1 && dispatch17 == 1 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 || dispatch17 == 1 && phi40 > 1 || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1)
			{
				phi43 = 0;
				phi44 = phi22;
				phi_in45 = 1;
				phi_in46 = phi22;
				phi_in47 = 4294975664;
				phi48 = (uint64_t*)0x1000020b0;
			}
			if (dispatch17 == 2 || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 || phi41 != 0 && dispatch17 == 1 && phi40 > 1 || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1)
			{
				phi49 = phi_in45;
				phi50 = phi_in46;
				phi51 = phi_in47;
				_strcmp.47(*(struct x86_regs**)phi48);
			}
			if (phi49 <= 1 && (dispatch17 == 2 || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 || phi41 != 0 && dispatch17 == 1 && phi40 > 1 || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1))
			{
				phi_in45 = phi49 + 1;
				anon53 = (__zext uint8_t)(anon35 == 0) ^ 1;
				anon52 = phi50 & 0xffffffffffffff00 | (__zext uint64_t)anon53;
				phi_in46 = anon52;
				uint64_t anon54 = phi51 + 8;
				phi_in47 = anon54;
				phi48 = (uint64_t*)anon54;
				dispatch17 = 2;
			}
			if (phi49 <= 1 && dispatch17 == 2 && anon53 == 0 || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 || phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 || anon30 != 0 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 || dispatch17 == 2 && phi49 > 1 || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 || phi41 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1)
			{
				phi43 = 2;
				phi44 = anon52;
			}
			if (phi49 <= 1 && dispatch17 == 2 && anon53 == 0 && anon35 == 0 || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 && anon35 == 0 || phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 && anon35 == 0 || anon30 != 0 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 && anon35 == 0 || dispatch17 == 2 && phi49 > 1 && anon35 == 0 || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 && anon35 == 0 || phi41 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 && anon35 == 0 || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1 && anon35 == 0 || phi40 <= 1 && dispatch17 == 1 && anon35 == 0 && phi41 == 0 || anon30 != 0 && phi40 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi41 == 0 || dispatch17 == 1 && phi40 > 1 && phi41 == 0 || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi41 == 0)
			{
				phi_in55 = phi44;
				anon56 = arg1 - 400;
				_store_path(4294971047, anon56, *(uint64_t*)(alloca1.field5 + anon25), phi43);
			}
			if (dispatch17 == 3 || phi49 <= 1 && dispatch17 == 2 && anon53 == 0 && anon35 == 0 || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 && anon35 == 0 || phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 && anon35 == 0 || anon30 != 0 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 && anon35 == 0 || dispatch17 == 2 && phi49 > 1 && anon35 == 0 || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 && anon35 == 0 || phi41 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 && anon35 == 0 || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1 && anon35 == 0 || phi40 <= 1 && dispatch17 == 1 && anon35 == 0 && phi41 == 0 || anon30 != 0 && phi40 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi41 == 0 || dispatch17 == 1 && phi40 > 1 && phi41 == 0 || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi41 == 0)
			{
				anon57 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
				phi58 = (uint24_t)((uint32_t)(uint64_t)anon57 >> 8);
			}
			if (anon57 != null && (dispatch17 == 3 || phi49 <= 1 && dispatch17 == 2 && anon53 == 0 && anon35 == 0 || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 && anon35 == 0 || phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 && anon35 == 0 || anon30 != 0 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 && anon35 == 0 || dispatch17 == 2 && phi49 > 1 && anon35 == 0 || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 && anon35 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 && anon35 == 0 || phi41 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 && anon35 == 0 || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1 && anon35 == 0 || phi40 <= 1 && dispatch17 == 1 && anon35 == 0 && phi41 == 0 || anon30 != 0 && phi40 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi41 == 0 || dispatch17 == 1 && phi40 > 1 && phi41 == 0 || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi41 == 0))
			{
				_process_line(4294971083, (uint64_t)&alloca1.field10, phi43);
				dispatch17 = 3;
			}
			if (anon35 != 0 && (phi49 <= 1 && dispatch17 == 2 && anon53 == 0 || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 || phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 || anon30 != 0 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 || dispatch17 == 2 && phi49 > 1 || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 || phi41 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1))
			{
				_strcmp.47((struct x86_regs*)0x100001cd8);
				phi58 = anon34;
				phi_in55 = anon52;
			}
			if (dispatch17 == 3 && anon57 == null || phi49 <= 1 && dispatch17 == 2 && anon53 == 0 && anon35 == 0 && anon57 == null || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 && anon35 == 0 && anon57 == null || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 && anon35 == 0 && anon57 == null || phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 && anon35 == 0 && anon57 == null || anon30 != 0 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 && anon35 == 0 && anon57 == null || dispatch17 == 2 && phi49 > 1 && anon35 == 0 && anon57 == null || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 && anon35 == 0 && anon57 == null || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 && anon35 == 0 && anon57 == null || phi41 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 && anon35 == 0 && anon57 == null || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1 && anon35 == 0 && anon57 == null || phi40 <= 1 && dispatch17 == 1 && anon35 == 0 && phi41 == 0 && anon57 == null || anon30 != 0 && phi40 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi41 == 0 && anon57 == null || dispatch17 == 1 && phi40 > 1 && phi41 == 0 && anon57 == null || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi41 == 0 && anon57 == null || phi49 <= 1 && anon35 != 0 && dispatch17 == 2 && anon53 == 0 || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 || phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 || anon30 != 0 && phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 || anon35 != 0 && dispatch17 == 2 && phi49 > 1 || phi40 <= 1 && phi41 != 0 && anon35 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 || phi41 != 0 && anon35 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 || anon30 != 0 && phi41 != 0 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1)
			{
				uint24_t phi_in59 = phi58;
				phi18 = phi_in59;
				phi13 = alloca1.field5;
				phi22 = phi_in55;
			}
			if (dispatch17 == 3 && anon57 == null || phi49 <= 1 && dispatch17 == 2 && anon53 == 0 && anon35 == 0 && anon57 == null || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 && anon35 == 0 && anon57 == null || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 && anon35 == 0 && anon57 == null || phi41 != 0 && phi49 <= 1 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 && anon35 == 0 && anon57 == null || anon30 != 0 && phi41 != 0 && phi49 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 && anon35 == 0 && anon57 == null || dispatch17 == 2 && phi49 > 1 && anon35 == 0 && anon57 == null || phi40 <= 1 && phi41 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 && anon35 == 0 && anon57 == null || anon30 != 0 && phi40 <= 1 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 && anon35 == 0 && anon57 == null || phi41 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 && anon35 == 0 && anon57 == null || anon30 != 0 && phi41 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1 && anon35 == 0 && anon57 == null || phi40 <= 1 && dispatch17 == 1 && anon35 == 0 && phi41 == 0 && anon57 == null || anon30 != 0 && phi40 <= 1 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi41 == 0 && anon57 == null || dispatch17 == 1 && phi40 > 1 && phi41 == 0 && anon57 == null || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi41 == 0 && anon57 == null || phi49 <= 1 && anon35 != 0 && dispatch17 == 2 && anon53 == 0 || phi40 <= 1 && phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 1 && anon35 == 0 && anon53 == 0 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && anon53 == 0 || phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 1 && phi40 > 1 && anon53 == 0 || anon30 != 0 && phi41 != 0 && phi49 <= 1 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && anon53 == 0 || anon35 != 0 && dispatch17 == 2 && phi49 > 1 || phi40 <= 1 && phi41 != 0 && anon35 != 0 && dispatch17 == 1 && anon35 == 0 && phi49 > 1 || anon30 != 0 && phi40 <= 1 && phi41 != 0 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && anon35 == 0 && phi49 > 1 || phi41 != 0 && anon35 != 0 && dispatch17 == 1 && phi40 > 1 && phi49 > 1 || anon30 != 0 && phi41 != 0 && anon35 != 0 && dispatch17 == 0 && anon31 != null && anon33 != null && phi40 > 1 && phi49 > 1 || anon30 != 0 && dispatch17 == 0 && anon31 != null && anon33 == null || anon30 != 0 && dispatch17 == 0 && anon31 == null)
			{
				uint64_t phi_in60 = phi22;
				phi26 = (__zext uint64_t)*anon2;
				phi27 = (__zext uint64_t)*anon15;
				phi28 = phi_in60;
				phi29 = (uint8_t)(*anon15 >> 8);
				break;
			}
		}
		phi10 = phi18;
		phi12 = phi26;
		uint64_t phi_in21 = phi27;
		uint64_t phi_in23 = phi28;
		phi11 = phi29;
		phi8 = anon16;
		phi9 = phi_in21;
	}
	uint64_t* anon62 = (uint64_t*)0x1000020c8;
	uint64_t anon61 = _table_count(4294971193, *anon62);
	alloca1.field5 = anon56;
	uint64_t* anon63 = (uint64_t*)phi8;
	uint64_t anon64 = anon61 & 0xffffffff;
	*anon63 = anon64;
	uint64_t* anon65 = (uint64_t*)(arg1 - 360);
	uint64_t anon66 = anon56 - ((anon64 << 3) + 15 & 0xffffffff0);
	*anon65 = anon66;
	uint64_t* anon68 = (uint64_t*)0x1000020d0;
	uint64_t anon67 = _table_count(4294971258, *anon68);
	uint64_t anon69 = anon67 & 0xffffffff;
	alloca1.field8 = anon69;
	uint64_t anon70 = anon66 - ((anon69 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon70;
	uint64_t* anon72 = (uint64_t*)0x1000020c0;
	uint64_t anon71 = _table_count(4294971306, *anon72);
	alloca1.field0 = (uint32_t)anon71;
	uint64_t anon73 = anon71 & 0xffffffff;
	alloca1.field1 = anon73;
	uint64_t anon74 = _table_count(4294971353, *anon72);
	alloca1.field2 = anon74 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon62);
	_table_dump_keys(4294971413, *anon68);
	_table_dump_keys(4294971428, *anon72);
	uint32_t(* anon75)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon66, *anon63, 8, anon75);
	_qsort((uint8_t*)anon70, alloca1.field8, 8, anon75);
	uint64_t anon76 = anon70 - ((anon73 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon76, alloca1.field1, 8, anon75);
	uint64_t anon77 = _table_count(4294971516, *anon72);
	uint32_t anon78 = (uint32_t)anon77;
	if ((anon78 >> 31 | (__zext uint32_t)(anon78 == 0)) == 0)
	{
		uint64_t phi_in79;
		uint64_t phi81;
		uint64_t phi83;
		uint64_t anon80 = anon77 << 32 >> 32;
		phi_in79 = anon80 + 1;
		anon82 = anon76 - ((anon74 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi81 = anon82 + anon80 * 24 - 8;
		do
		{
			phi83 = phi_in79;
			uint64_t anon84 = _table_find(4294971555, *anon72, *(uint64_t*)(anon76 + (phi83 << 3) - 16), 0);
			uint64_t anon85 = anon84 + 8;
			*(uint64_t*)(phi81 - 16) = **(uint64_t**)anon85;
			uint64_t* anon86 = (uint64_t*)anon85;
			*(uint64_t*)(phi81 - 8) = *(uint64_t*)(*anon86 + 8);
			*(uint64_t*)phi81 = *(uint64_t*)(*anon86 + 16);
			phi_in79 = phi83 - 1;
			phi81 = phi81 - 24;
		}
		while (phi83 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon87 = (uint8_t*)0x100001c53;
		_printf(anon87);
		_puts((uint8_t*)0x100001d30);
		anon88 = (uint8_t*)0x100001d60;
		_puts(anon88);
		_print_effect_definition(4294971695, *anon65, *anon63 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon76, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon87);
		_puts(anon88);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon82, alloca1.field2);
		_print_uniform_strings(4294971877, *anon65, *anon63);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon62, 0);
	_table_free(4294971936, *anon68, 0);
	_table_free(4294971955, *anon72, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
	phi14 = phi14 + 1;
	*anon15 = (__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11;
	dispatch17 = 0;
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
	uint64_t phi9;
	uint64_t phi11;
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
	uint64_t phi10 = 0;
	if (*anon6 == 0)
	{
		phi11 = arg1 + 8;
	}
	else 
	{
		while (true)
		{
			uint64_t anon12 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon12 + (phi10 << 3)));
			phi10 = phi10 + 1;
			phi11 = anon12;
		}
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi9 + 8));
	phi_in3 = phi8;
	phi_in4 = *(uint64_t*)(phi9 + 16);
	dispatch5 = 0;
	if (*(uint64_t*)(phi9 + 16) == 0)
	{
		uint32_t phi_in13 = (uint32_t)phi8;
		uint64_t phi_in14 = phi8 << 32 >> 29;
		phi_in3 = phi8;
		uint32_t phi15 = phi_in13;
		uint64_t phi16 = phi_in14;
		phi_in4 = 0;
		dispatch5 = 0;
		if (phi15 < *anon6)
		{
			uint32_t anon18 = phi15 + 1;
			uint64_t anon17 = (__zext uint64_t)anon18;
			phi8 = anon17;
			phi_in13 = anon18;
			phi_in14 = phi16 + 8;
			phi_in3 = anon17;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi16);
			dispatch5 = 0;
			dispatch5 = 1;
		}
	}
	_free.56(*(struct x86_regs**)phi11);
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
