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
		struct x86_regs* anon6 = (struct x86_regs*)anon4;
		_strcmp.47(anon6);
		uint64_t* phi_in7 = (uint64_t*)0x1000020c8;
		uint64_t anon9 = (uint64_t)anon4;
		uint32_t anon8 = (uint32_t)anon9;
		if (anon8 != 0)
		{
			_strcmp.47(anon6);
			phi_in7 = (uint64_t*)0x1000020d0;
		}
		if (anon8 == 0 || anon8 != 0 && ((anon9 | arg2) & 0xff) == 0)
		{
			uint64_t* phi10 = phi_in7;
			if (*phi10 != 0)
			{
				_strtok(null, anon5);
				uint8_t* anon11 = _strtok(null, anon5);
				if (anon11 != null)
				{
					uint64_t* anon23;
					uint64_t anon24;
					uint64_t phi25;
					uint32_t anon26;
					uint64_t phi_in12 = 0;
					uint64_t phi_in13 = (uint64_t)anon11;
					uint32_t phi_in14 = 0;
					uint8_t phi_in15 = *anon11;
					if (*anon11 != 0)
					{
						uint64_t anon19;
						uint32_t anon20;
						do
						{
							uint64_t phi16 = phi_in13;
							uint32_t phi17 = phi_in14;
							uint8_t phi18 = phi_in15;
							anon19 = phi16 + 1;
							phi_in13 = anon19;
							anon20 = phi17 * 31 + (__zext uint32_t)(phi18 & 0xf);
							phi_in14 = anon20;
							phi_in15 = *(uint8_t*)anon19;
						}
						while (*(uint8_t*)anon19 != 0);
						phi_in12 = (__zext uint64_t)(anon20 & 0xff);
					}
					do
					{
						uint64_t phi_in22;
						uint64_t phi21 = phi_in12;
						anon23 = (uint64_t*)(*phi10 + 8);
						anon24 = phi21 % (__zext uint64_t)*(uint32_t*)(*phi10 + 4) << 3;
						phi_in22 = *(uint64_t*)(*anon23 + anon24);
						if (*(uint64_t*)(*anon23 + anon24) != 0)
						{
							phi25 = phi_in22;
							_strcmp.47((struct x86_regs*)anon11);
							anon26 = (uint32_t)*anon23;
							if (anon26 == 0)
							{
								break;
							}
							else 
							{
								phi_in22 = *(uint64_t*)(phi25 + 16);
							}
						}
					}
					while (!(*(uint64_t*)(*anon23 + anon24) == 0 || *(uint64_t*)(*anon23 + anon24) != 0 && anon26 != 0 && *(uint64_t*)(phi25 + 16) == 0));
					uint8_t* anon27 = _strdup(anon11);
					uint8_t* anon28 = _malloc(24);
					*(uint64_t*)anon28 = (uint64_t)anon27;
					uint64_t anon29 = (uint64_t)anon28;
					*(uint64_t*)(anon29 + 8) = 0;
					*(uint64_t*)(anon29 + 16) = *(uint64_t*)(*anon23 + anon24);
					*(uint64_t*)(*anon23 + anon24) = anon29;
					uint32_t* anon30 = (uint32_t*)*phi10;
					*anon30 = *anon30 + 1;
				}
			}
		}
	}
	return;
}
void _type_from_ext(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi5;
	uint64_t phi_in7;
	uint64_t phi_in8;
	uint64_t* phi_in9;
	uint64_t phi11;
	uint64_t phi_in1 = 4294975648;
	uint64_t phi_in2 = 1;
	uint64_t* phi_in3 = (uint64_t*)0x1000020a0;
	do
	{
		uint64_t phi4 = phi_in1;
		phi5 = phi_in2;
		uint64_t* phi6 = phi_in3;
		_strcmp.47(*(struct x86_regs**)phi6);
		phi_in7 = 1;
		phi_in8 = 4294975664;
		phi_in9 = (uint64_t*)0x1000020b0;
		if (phi5 < 2)
		{
			uint64_t anon10 = phi4 + 8;
			phi_in1 = anon10;
			phi_in2 = phi5 + 1;
			phi_in3 = (uint64_t*)anon10;
		}
	}
	while (phi5 < 2);
	do
	{
		phi11 = phi_in7;
		uint64_t phi12 = phi_in8;
		uint64_t* phi13 = phi_in9;
		_strcmp.47(*(struct x86_regs**)phi13);
		if ((phi11 | 1) == 1)
		{
			phi_in7 = phi11 + 1;
			uint64_t anon14 = phi12 + 8;
			phi_in8 = anon14;
			phi_in9 = (uint64_t*)anon14;
		}
	}
	while ((phi11 | 1) == 1);
	_strcmp.47((struct x86_regs*)0x100001cd8);
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi_in8;
	uint64_t phi_in9;
	uint64_t anon70;
	uint64_t anon109;
	uint8_t* anon114;
	uint8_t* anon115;
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
		uint32_t anon85;
		uint32_t anon86;
		*(uint32_t*)(arg1 - 340) = 0;
		uint24_t phi_in10 = 0;
		uint8_t phi_in11 = 0;
		uint64_t phi_in12 = arg2 & 0xffffffff;
		uint64_t phi_in13 = arg3;
		uint64_t phi_in14 = 1;
		uint64_t phi_in15 = __undefined;
		uint32_t phi_in16 = 0;
		do
		{
			uint64_t phi_in24;
			uint24_t phi_in30;
			uint64_t phi_in31;
			uint64_t phi_in32;
			uint64_t phi_in33;
			uint64_t phi_in34;
			uint8_t phi_in35;
			uint24_t phi17 = phi_in10;
			uint8_t phi18 = phi_in11;
			uint64_t phi19 = phi_in12;
			uint64_t phi20 = phi_in13;
			uint64_t phi21 = phi_in14;
			uint64_t phi22 = phi_in15;
			uint64_t phi23 = phi_in24;
			uint32_t phi25 = phi_in16;
			uint64_t anon27 = arg1 - 328;
			uint32_t* anon26 = (uint32_t*)anon27;
			*anon26 = phi25;
			uint64_t anon29 = phi21 << 3;
			struct x86_regs* anon28 = (struct x86_regs*)*(uint64_t*)(phi20 + anon29);
			_strcmp.47(anon28);
			if (((__zext uint32_t)phi17 << 8 | (__zext uint32_t)phi18) == 0)
			{
				phi_in30 = phi17;
				phi_in31 = phi19;
				phi_in32 = phi20;
				phi_in33 = phi22 & 0xff | 0x100;
				phi_in34 = phi23;
				phi_in35 = 1;
			}
			else 
			{
				_strcmp.47(anon28);
				uint8_t* anon37 = (uint8_t*)*(uint64_t*)(phi20 + anon29);
				uint8_t* anon36 = _strrchr(anon37, 46);
				uint24_t phi_in38 = 0;
				uint64_t phi_in39 = phi20;
				uint64_t phi_in40 = phi23;
				if (anon36 != null)
				{
					struct __sFILE* anon41 = _fopen(anon37, (uint8_t*)0x100001c1c);
					uint64_t anon44 = (uint64_t)anon41;
					uint32_t anon43 = (uint32_t)anon44;
					uint24_t anon42 = (uint24_t)(anon43 >> 8);
					phi_in38 = anon42;
					phi_in39 = phi20;
					phi_in40 = phi23;
					if (anon41 != null)
					{
						uint64_t anon45 = arg1 - 360;
						*(uint64_t*)anon45 = anon44;
						uint64_t phi_in46 = 4294975648;
						uint64_t phi_in47 = 1;
						uint64_t* phi_in48 = (uint64_t*)0x1000020a0;
						while (true)
						{
							uint64_t phi60;
							uint64_t phi62;
							uint64_t anon64;
							uint64_t anon65;
							uint24_t phi_in66;
							uint64_t phi_in67;
							uint64_t phi68;
							uint64_t phi49 = phi_in46;
							uint64_t phi50 = phi_in47;
							uint64_t* phi51 = phi_in48;
							_strcmp.47(*(struct x86_regs**)phi51);
							uint32_t phi_in52 = anon43;
							if ((phi50 | 1) == 1)
							{
								phi_in52 = 0;
							}
							uint32_t phi53 = phi_in52;
							uint64_t phi_in54 = 0;
							uint64_t phi_in55 = phi23;
							uint64_t phi_in56 = 1;
							uint64_t phi_in57 = phi23;
							uint64_t phi_in58 = 4294975664;
							uint64_t* phi_in59 = (uint64_t*)0x1000020b0;
							if (phi53 != 0)
							{
								phi60 = phi_in56;
								uint64_t phi61 = phi_in57;
								phi62 = phi_in58;
								uint64_t* phi63 = phi_in59;
								_strcmp.47(*(struct x86_regs**)phi63);
								anon64 = phi60 | 1;
								if (anon64 == 1)
								{
									phi_in54 = 2;
									anon65 = phi61 & 0xffffffffffffff00 | (__zext uint64_t)(anon43 != 0);
									phi_in55 = anon65;
								}
								else 
								{
									phi_in54 = 2;
									phi_in55 = anon65;
									if (anon43 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi_in66 = anon42;
										phi_in67 = anon65;
									}
								}
							}
							if (phi53 == 0 || anon64 != 1 && phi53 != 0 && anon43 == 0 || phi53 != 0 && anon64 == 1 && anon43 == 0)
							{
								phi68 = phi_in54;
								uint64_t phi69 = phi_in55;
								anon70 = arg1 - 400;
								_store_path(4294971047, anon70, *(uint64_t*)(alloca1.field5 + anon29), phi68);
								uint8_t* anon71 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon45);
								phi_in66 = 0;
								phi_in67 = phi69;
							}
							uint24_t phi72 = phi_in66;
							uint64_t phi73 = phi_in67;
							phi_in38 = phi72;
							phi_in39 = alloca1.field5;
							phi_in40 = phi73;
							_process_line(4294971083, (uint64_t)&alloca1.field10, phi68);
							phi_in56 = phi60 + 1;
							phi_in57 = anon65;
							uint64_t anon74 = phi62 + 8;
							phi_in58 = anon74;
							phi_in59 = (uint64_t*)anon74;
							break;
							uint64_t anon75 = phi49 + 8;
							phi_in46 = anon75;
							phi_in47 = phi50 + 1;
							phi_in48 = (uint64_t*)anon75;
						}
					}
				}
				uint24_t phi76 = phi_in38;
				uint64_t phi77 = phi_in39;
				uint64_t phi78 = phi_in40;
				phi_in30 = phi76;
				phi_in31 = (__zext uint64_t)*anon2;
				phi_in32 = phi77;
				phi_in33 = (__zext uint64_t)*anon26;
				phi_in34 = phi78;
				phi_in35 = (uint8_t)(*anon26 >> 8);
			}
			uint24_t phi79 = phi_in30;
			uint64_t phi80 = phi_in31;
			uint64_t phi81 = phi_in32;
			uint64_t phi82 = phi_in33;
			uint64_t phi83 = phi_in34;
			uint8_t phi84 = phi_in35;
			phi_in8 = anon27;
			phi_in9 = phi82;
			anon85 = (uint32_t)phi21 + 1;
			anon86 = (uint32_t)phi80;
			if (anon85 != anon86)
			{
				phi_in10 = phi79;
				phi_in11 = phi84;
				phi_in12 = phi80;
				phi_in13 = phi81;
				phi_in14 = phi21 + 1;
				phi_in15 = phi82;
				phi_in24 = phi83;
				phi_in16 = (__zext uint32_t)phi79 << 8 | (__zext uint32_t)phi84;
			}
		}
		while (anon85 != anon86);
	}
	uint64_t phi87 = phi_in8;
	uint64_t phi88 = phi_in9;
	uint64_t* anon90 = (uint64_t*)0x1000020c8;
	uint64_t anon89 = _table_count(4294971193, *anon90);
	alloca1.field5 = anon70;
	uint64_t* anon91 = (uint64_t*)phi87;
	uint64_t anon92 = anon89 & 0xffffffff;
	*anon91 = anon92;
	uint64_t anon93 = anon70 - ((anon92 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon93;
	uint64_t* anon95 = (uint64_t*)0x1000020d0;
	uint64_t anon94 = _table_count(4294971258, *anon95);
	uint64_t anon96 = anon94 & 0xffffffff;
	alloca1.field8 = anon96;
	uint64_t anon97 = anon93 - ((anon96 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon97;
	uint64_t* anon99 = (uint64_t*)0x1000020c0;
	uint64_t anon98 = _table_count(4294971306, *anon99);
	alloca1.field0 = (uint32_t)anon98;
	uint64_t anon100 = anon98 & 0xffffffff;
	alloca1.field1 = anon100;
	uint64_t anon101 = _table_count(4294971353, *anon99);
	alloca1.field2 = anon101 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon90, *anon90, anon93);
	_table_dump_keys(4294971413, *anon95, *anon95, anon97);
	uint64_t anon102 = anon97 - ((anon100 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon99, *anon99, anon102);
	uint32_t(* anon103)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon93, *anon91, 8, anon103);
	_qsort((uint8_t*)anon97, alloca1.field8, 8, anon103);
	_qsort((uint8_t*)anon102, alloca1.field1, 8, anon103);
	uint64_t anon104 = _table_count(4294971516, *anon99);
	uint32_t anon105 = (uint32_t)anon104;
	if ((anon105 >> 31 | (__zext uint32_t)(anon105 == 0)) == 0)
	{
		uint64_t phi_in106;
		uint64_t phi_in108;
		uint64_t phi110;
		uint64_t anon107 = anon104 << 32 >> 32;
		phi_in106 = anon107 + 1;
		anon109 = anon102 - ((anon101 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi_in108 = anon109 + anon107 * 24 - 8;
		do
		{
			phi110 = phi_in106;
			uint64_t phi111 = phi_in108;
			uint64_t anon112 = _table_find(4294971555, *anon99, *(uint64_t*)(anon102 + (phi110 << 3) - 16), 0);
			uint64_t anon113 = anon112 + 8;
			*(uint64_t*)(phi111 - 16) = **(uint64_t**)anon113;
			*(uint64_t*)(phi111 - 8) = *(uint64_t*)(*(uint64_t*)anon113 + 8);
			*(uint64_t*)phi111 = *(uint64_t*)(*(uint64_t*)anon113 + 16);
			phi_in106 = phi110 - 1;
			phi_in108 = phi111 - 24;
		}
		while (phi110 > 2);
	}
	if ((phi88 & 0x100) != 0)
	{
		anon114 = (uint8_t*)0x100001c53;
		_printf(anon114);
		_puts((uint8_t*)0x100001d30);
		anon115 = (uint8_t*)0x100001d60;
		_puts(anon115);
		_print_effect_definition(4294971695, alloca1.field4, *anon91 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon102, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon114);
		_puts(anon115);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon109, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon91);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon90, 0);
	_table_free(4294971936, *anon95, 0);
	_table_free(4294971955, *anon99, *(uint64_t*)0x100002018);
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
		_free.56(*(struct x86_regs**)arg1);
		__indirect_jump(*(uint64_t*)0x100002040);
	}
}
void _list_prepend(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg2 + 16) = arg1;
	return;
}
void _strhash(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in1 = arg1;
	uint32_t phi_in2 = 0;
	uint8_t phi_in3 = *(uint8_t*)arg1;
	if (*(uint8_t*)arg1 != 0)
	{
		uint64_t anon7;
		do
		{
			uint64_t phi4 = phi_in1;
			uint32_t phi5 = phi_in2;
			uint8_t phi6 = phi_in3;
			anon7 = phi4 + 1;
			phi_in1 = anon7;
			phi_in2 = phi5 * 31 + (__zext uint32_t)phi6;
			phi_in3 = *(uint8_t*)anon7;
		}
		while (*(uint8_t*)anon7 != 0);
	}
	return;
}
uint64_t _table_new(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in2;
	uint8_t* anon1 = _malloc(24);
	uint64_t anon3 = (uint64_t)anon1;
	phi_in2 = anon3;
	if (anon1 != null)
	{
		*(uint32_t*)anon1 = 0;
		*(uint32_t*)(anon3 + 4) = (uint32_t)arg1;
		uint8_t* anon4 = _calloc(arg1 << 32 >> 32, 8);
		*(uint64_t*)(anon3 + 8) = (uint64_t)anon4;
		phi_in2 = anon3;
		if (anon4 == null)
		{
			_free.56((struct x86_regs*)anon1);
			phi_in2 = 0;
		}
	}
	uint64_t phi5 = phi_in2;
	return phi5;
}
void _table_apply(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi2;
	uint64_t phi_in3;
	uint64_t phi_in4;
	uint32_t* anon5;
	uint64_t phi8;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		phi_in3 = phi2;
		phi_in4 = 0;
		anon5 = (uint32_t*)(arg1 + 4);
		if (phi2 < (__zext uint64_t)*anon5)
		{
			uint64_t anon6 = phi2 + 1;
			phi_in1 = anon6;
			phi_in3 = anon6;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi2 < (__zext uint64_t)*anon5);
	do
	{
		uint64_t phi7 = phi_in3;
		phi8 = phi_in4;
		if (phi8 != 0)
		{
			((void(*)())arg2)();
			phi_in3 = phi7;
			phi_in4 = *(uint64_t*)(phi8 + 16);
			if (*(uint64_t*)(phi8 + 16) == 0)
			{
				uint32_t phi13;
				uint64_t phi_in9 = phi7;
				uint32_t phi_in10 = (uint32_t)phi7;
				uint64_t phi_in11 = phi7 << 32 >> 29;
				do
				{
					uint64_t phi12 = phi_in9;
					phi13 = phi_in10;
					uint64_t phi14 = phi_in11;
					phi_in3 = phi12;
					phi_in4 = 0;
					if (phi13 < *anon5)
					{
						uint32_t anon16 = phi13 + 1;
						uint64_t anon15 = (__zext uint64_t)anon16;
						phi_in3 = anon15;
						phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi14);
						if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi14) == 0)
						{
							phi_in9 = anon15;
							phi_in10 = anon16;
							phi_in11 = phi14 + 8;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi13 < *anon5);
			}
		}
	}
	while (phi8 != 0);
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
				if (*(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi6) == 0)
				{
					phi_in2 = anon7;
					phi_in4 = phi6 + 8;
				}
				else 
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
	uint32_t* anon5;
	uint64_t phi7;
	uint64_t phi8;
	uint64_t phi_in10;
	if (arg2 != 0)
	{
		uint64_t phi2;
		uint64_t phi_in1 = 0;
		do
		{
			phi2 = phi_in1;
			phi_in3 = phi2;
			phi_in4 = 0;
			anon5 = (uint32_t*)(arg1 + 4);
			if (phi2 < (__zext uint64_t)*anon5)
			{
				uint64_t anon6 = phi2 + 1;
				phi_in1 = anon6;
				phi_in3 = anon6;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3));
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi2 << 3)) != 0)
				{
					break;
				}
			}
		}
		while (phi2 < (__zext uint64_t)*anon5);
		phi7 = phi_in3;
		phi8 = phi_in4;
	}
	uint64_t phi_in9 = 0;
	if (*anon5 == 0)
	{
		phi_in10 = arg1 + 8;
	}
	else 
	{
		uint64_t anon13;
		do
		{
			uint64_t phi11 = phi_in9;
			uint64_t anon12 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon12 + (phi11 << 3)));
			anon13 = phi11 + 1;
			phi_in9 = anon13;
			phi_in10 = anon12;
		}
		while (anon13 < (__zext uint64_t)*anon5);
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi8 + 8));
	phi_in3 = phi7;
	phi_in4 = *(uint64_t*)(phi8 + 16);
	if (*(uint64_t*)(phi8 + 16) == 0)
	{
		uint32_t phi18;
		uint64_t phi_in14 = phi7;
		uint32_t phi_in15 = (uint32_t)phi7;
		uint64_t phi_in16 = phi7 << 32 >> 29;
		do
		{
			uint64_t phi17 = phi_in14;
			phi18 = phi_in15;
			uint64_t phi19 = phi_in16;
			phi_in3 = phi17;
			phi_in4 = 0;
			if (phi18 < *anon5)
			{
				uint32_t anon21 = phi18 + 1;
				uint64_t anon20 = (__zext uint64_t)anon21;
				phi_in3 = anon20;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi19);
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi19) == 0)
				{
					phi_in14 = anon20;
					phi_in15 = anon21;
					phi_in16 = phi19 + 8;
				}
				else 
				{
					break;
				}
			}
		}
		while (phi18 < *anon5);
	}
	uint64_t phi22 = phi_in10;
	_free.56(*(struct x86_regs**)phi22);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi_in4;
	uint64_t* anon13;
	uint64_t anon14;
	uint64_t phi15;
	uint64_t phi_in16;
	uint32_t anon17;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = arg2;
	uint32_t phi_in3 = 0;
	uint8_t* anon5 = (uint8_t*)arg2;
	phi_in4 = *anon5;
	if (*anon5 != 0)
	{
		uint64_t anon9;
		uint32_t anon10;
		do
		{
			uint64_t phi6 = phi_in2;
			uint32_t phi7 = phi_in3;
			uint8_t phi8 = phi_in4;
			anon9 = phi6 + 1;
			phi_in2 = anon9;
			anon10 = phi7 * 31 + (__zext uint32_t)phi8;
			phi_in3 = anon10;
			phi_in4 = *(uint8_t*)anon9;
		}
		while (*(uint8_t*)anon9 != 0);
		phi_in1 = (__zext uint64_t)anon10;
	}
	do
	{
		uint64_t phi_in12;
		uint64_t phi11 = phi_in1;
		anon13 = (uint64_t*)(arg1 + 8);
		anon14 = phi11 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi_in12 = *(uint64_t*)(*anon13 + anon14);
		if (*(uint64_t*)(*anon13 + anon14) != 0)
		{
			phi15 = phi_in12;
			_strcmp.47((struct x86_regs*)arg2);
			phi_in16 = phi15;
			anon17 = (uint32_t)*anon13;
			if (anon17 == 0)
			{
				break;
			}
			else 
			{
				phi_in12 = *(uint64_t*)(phi15 + 16);
			}
		}
	}
	while (!(*(uint64_t*)(*anon13 + anon14) == 0 || *(uint64_t*)(*anon13 + anon14) != 0 && anon17 != 0 && *(uint64_t*)(phi15 + 16) == 0));
	phi_in16 = 0;
	if ((uint8_t)arg3 != 0)
	{
		uint8_t* anon18 = _strdup(anon5);
		uint8_t* anon19 = _malloc(24);
		*(uint64_t*)anon19 = (uint64_t)anon18;
		uint64_t anon20 = (uint64_t)anon19;
		*(uint64_t*)(anon20 + 8) = 0;
		*(uint64_t*)(anon20 + 16) = *(uint64_t*)(*anon13 + anon14);
		*(uint64_t*)(*anon13 + anon14) = anon20;
		uint32_t* anon21 = (uint32_t*)arg1;
		*anon21 = *anon21 + 1;
		phi_in16 = anon20;
	}
	uint64_t phi22 = phi_in16;
	return phi22;
}
void _table_print(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in2;
	uint64_t phi_in1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi_in2 = *anon3;
	if (*anon3 != 0)
	{
		while (true)
		{
			uint64_t phi_in9;
			uint64_t phi10;
			uint64_t phi4 = phi_in1;
			uint32_t phi5 = phi_in2;
			uint32_t phi_in6 = phi5;
			uint64_t* anon7 = (uint64_t*)(arg1 + 8);
			uint64_t anon8 = phi4 << 3;
			if (*(uint64_t*)(*anon7 + anon8) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				phi_in9 = *anon7 + anon8;
				phi10 = phi_in9;
				if (*(uint64_t*)phi10 == 0)
				{
					_puts((uint8_t*)0x100001db1);
					phi_in6 = *anon3;
				}
			}
			uint32_t phi11 = phi_in6;
			uint64_t anon12 = phi4 + 1;
			phi_in1 = anon12;
			phi_in2 = phi11;
			_printf((uint8_t*)0x100001dac);
			phi_in9 = *(uint64_t*)phi10 + 16;
			break;
		}
	}
	return;
}
uint64_t _table_count(uint64_t arg0, uint64_t arg1)
{
	return (__zext uint64_t)*(uint32_t*)arg1;
}
void _table_dump_keys(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi6;
	uint64_t phi_in7;
	uint32_t phi_in8;
	uint32_t phi_in9;
	uint32_t phi_in10;
	uint64_t* phi_in11;
	uint64_t phi23;
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
		if (phi6 < (__zext uint64_t)*(uint32_t*)(arg2 + 4))
		{
			uint64_t anon13 = phi6 + 1;
			uint32_t anon12 = (uint32_t)anon13;
			phi_in1 = anon12;
			uint64_t* anon14 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi6 << 3));
			phi_in2 = anon14;
			phi_in3 = anon13;
			phi_in7 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi6 << 3));
			phi_in8 = 0;
			phi_in9 = anon12;
			phi_in10 = anon12;
			phi_in11 = anon14;
			if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi6 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi6 < (__zext uint64_t)*(uint32_t*)(arg2 + 4));
	do
	{
		uint64_t phi15 = phi_in7;
		uint32_t phi16 = phi_in8;
		uint32_t phi17 = phi_in9;
		uint32_t phi18 = phi_in10;
		uint64_t* phi19 = phi_in11;
		uint64_t phi_in20 = phi15;
		uint64_t* phi_in21 = phi19;
		uint64_t phi_in22 = (__sext int64_t)phi16;
		phi23 = phi_in20;
		uint64_t* phi24 = phi_in21;
		uint64_t phi25 = phi_in22;
		if (phi23 != 0)
		{
			uint64_t* anon30;
			*(uint64_t*)((phi25 << 3) + arg3) = *phi24;
			if (*(uint64_t*)(phi23 + 16) == 0)
			{
				uint64_t* phi_in29;
				uint32_t phi33;
				uint32_t phi_in26 = phi17;
				uint64_t phi_in27 = (__sext int64_t)phi18 << 3;
				uint32_t phi_in28 = phi18;
				anon30 = (uint64_t*)*(uint64_t*)(phi23 + 16);
				phi_in29 = anon30;
				do
				{
					uint32_t phi31 = phi_in26;
					uint64_t phi32 = phi_in27;
					phi33 = phi_in28;
					uint64_t* phi34 = phi_in29;
					phi_in7 = 0;
					uint32_t anon35 = (uint32_t)phi25 + 1;
					phi_in8 = anon35;
					phi_in9 = phi31;
					phi_in10 = phi33;
					phi_in11 = phi34;
					if (phi33 < *(uint32_t*)(arg2 + 4))
					{
						phi_in7 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi32);
						phi_in8 = anon35;
						uint32_t anon36 = phi31 + 1;
						phi_in9 = anon36;
						phi_in10 = anon36;
						uint64_t* anon37 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi32);
						phi_in11 = anon37;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi32) == 0)
						{
							phi_in26 = anon36;
							phi_in27 = phi32 + 8;
							phi_in28 = anon36;
							phi_in29 = anon37;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi33 < *(uint32_t*)(arg2 + 4));
			}
			else 
			{
				phi_in20 = *(uint64_t*)(phi23 + 16);
				phi_in21 = anon30;
				phi_in22 = phi25 + 1;
			}
		}
	}
	while (phi23 != 0);
	return;
}
void _print_filepaths(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001ec0);
	uint64_t phi_in1 = 0;
	uint32_t anon2 = (uint32_t)arg2;
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
	{
		uint32_t anon5;
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
			uint64_t anon4 = phi3 + 1;
			phi_in1 = anon4;
			anon5 = (uint32_t)anon4;
		}
		while (anon2 != anon5);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_effect_definition(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	uint64_t phi3;
	uint8_t* anon4;
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
	uint32_t anon9 = (uint32_t)phi3 - 1;
	phi_in1 = (__zext uint64_t)anon9;
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
