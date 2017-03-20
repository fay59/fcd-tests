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
		if ((anon8 == 0 || anon8 != 0 && ((anon9 | arg2) & 0xff) == 0) && *phi7 != 0)
		{
			_strtok(null, anon5);
			uint8_t* anon10 = _strtok(null, anon5);
			if (anon10 != null)
			{
				uint64_t phi11 = 0;
				uint64_t phi_in12 = (uint64_t)anon10;
				uint32_t phi_in13 = 0;
				uint8_t phi_in14 = *anon10;
				if (*anon10 != 0)
				{
					uint64_t anon18;
					uint32_t anon19;
					do
					{
						uint64_t phi15 = phi_in12;
						uint32_t phi16 = phi_in13;
						uint8_t phi17 = phi_in14;
						anon18 = phi15 + 1;
						phi_in12 = anon18;
						anon19 = phi16 * 31 + (__zext uint32_t)(phi17 & 0xf);
						phi_in13 = anon19;
						phi_in14 = *(uint8_t*)anon18;
					}
					while (*(uint8_t*)anon18 != 0);
					phi11 = (__zext uint64_t)(anon19 & 0xff);
				}
				while (true)
				{
					uint64_t phi_in20;
					uint64_t phi23;
					uint32_t anon24;
					uint64_t* anon21 = (uint64_t*)(*phi7 + 8);
					uint64_t anon22 = phi11 % (__zext uint64_t)*(uint32_t*)(*phi7 + 4) << 3;
					phi_in20 = *(uint64_t*)(*anon21 + anon22);
					if (*(uint64_t*)(*anon21 + anon22) != 0)
					{
						phi23 = phi_in20;
						_strcmp.47((struct x86_regs*)anon10);
						anon24 = (uint32_t)*anon21;
						if (anon24 == 0)
						{
							break;
						}
						else 
						{
							phi_in20 = *(uint64_t*)(phi23 + 16);
						}
					}
					if (*(uint64_t*)(*anon21 + anon22) == 0 || anon24 != 0 && *(uint64_t*)(*anon21 + anon22) != 0 && *(uint64_t*)(phi23 + 16) == 0)
					{
						uint8_t* anon25 = _strdup(anon10);
						uint8_t* anon26 = _malloc(24);
						*(uint64_t*)anon26 = (uint64_t)anon25;
						uint64_t anon27 = (uint64_t)anon26;
						*(uint64_t*)(anon27 + 8) = 0;
						*(uint64_t*)(anon27 + 16) = *(uint64_t*)(*anon21 + anon22);
						*(uint64_t*)(*anon21 + anon22) = anon27;
						uint32_t* anon28 = (uint32_t*)*phi7;
						*anon28 = *anon28 + 1;
						break;
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
	uint64_t phi2 = 1;
	uint64_t* phi3 = (uint64_t*)0x1000020a0;
	while (true)
	{
		uint64_t phi4 = phi_in1;
		_strcmp.47(*(struct x86_regs**)phi3);
		uint64_t phi_in5 = 1;
		uint64_t phi_in6 = 4294975664;
		uint64_t* phi7 = (uint64_t*)0x1000020b0;
		if (phi2 < 2)
		{
			uint64_t anon8 = phi4 + 8;
			phi_in1 = anon8;
			phi2 = phi2 + 1;
			phi3 = (uint64_t*)anon8;
		}
		else 
		{
			uint64_t phi9;
			do
			{
				phi9 = phi_in5;
				uint64_t phi10 = phi_in6;
				_strcmp.47(*(struct x86_regs**)phi7);
				if ((phi9 | 1) == 1)
				{
					phi_in5 = phi9 + 1;
					uint64_t anon11 = phi10 + 8;
					phi_in6 = anon11;
					phi7 = (uint64_t*)anon11;
				}
			}
			while ((phi9 | 1) == 1);
			break;
		}
	}
	_strcmp.47((struct x86_regs*)0x100001cd8);
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi8;
	uint64_t phi9;
	uint64_t anon57;
	uint64_t anon83;
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
		alloca1.field7 = 0;
		phi8 = (uint64_t)&alloca1.field9;
		phi9 = 0;
	}
	else 
	{
		uint32_t anon61;
		uint32_t anon62;
		*(uint32_t*)(arg1 - 340) = 0;
		uint24_t phi10 = 0;
		uint8_t phi11 = 0;
		uint64_t phi12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		uint64_t phi_in14 = 1;
		uint64_t phi15 = __undefined;
		uint64_t anon17 = arg1 - 328;
		uint32_t* anon16 = (uint32_t*)anon17;
		*anon16 = 0;
		do
		{
			uint64_t phi_in22;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			uint64_t phi28;
			uint8_t phi29;
			uint24_t phi_in18 = phi10;
			uint64_t phi_in19 = phi12;
			uint64_t phi20 = phi_in14;
			uint64_t phi21 = phi_in22;
			uint64_t anon24 = phi20 << 3;
			struct x86_regs* anon23 = (struct x86_regs*)*(uint64_t*)(phi13 + anon24);
			_strcmp.47(anon23);
			if (((__zext uint32_t)phi_in18 << 8 | (__zext uint32_t)phi11) == 0)
			{
				phi10 = phi_in18;
				phi25 = phi_in19;
				phi26 = phi13;
				phi27 = phi15 & 0xff | 0x100;
				phi28 = phi21;
				phi29 = 1;
			}
			else 
			{
				_strcmp.47(anon23);
				uint8_t* anon31 = (uint8_t*)*(uint64_t*)(phi13 + anon24);
				uint8_t* anon30 = _strrchr(anon31, 46);
				uint24_t phi32 = 0;
				uint64_t phi_in33 = phi13;
				uint64_t phi34 = phi21;
				if (anon30 != null)
				{
					struct __sFILE* anon35 = _fopen(anon31, (uint8_t*)0x100001c1c);
					uint64_t anon38 = (uint64_t)anon35;
					uint32_t anon37 = (uint32_t)anon38;
					uint24_t anon36 = (uint24_t)(anon37 >> 8);
					phi32 = anon36;
					phi_in33 = phi13;
					phi34 = phi21;
					if (anon35 != null)
					{
						uint64_t anon39 = arg1 - 360;
						*(uint64_t*)anon39 = anon38;
						uint64_t phi_in40 = 4294975648;
						uint64_t phi41 = 1;
						uint64_t* phi42 = (uint64_t*)0x1000020a0;
						while (true)
						{
							uint64_t phi51;
							uint64_t anon52;
							uint64_t anon53;
							uint24_t phi_in54;
							uint64_t phi55;
							uint64_t phi43 = phi_in40;
							_strcmp.47(*(struct x86_regs**)phi42);
							uint32_t phi44 = anon37;
							if ((phi41 | 1) == 1)
							{
								phi44 = 0;
							}
							uint64_t phi45 = 0;
							uint64_t phi46 = phi21;
							uint64_t phi47 = 1;
							uint64_t phi48 = phi21;
							uint64_t phi_in49 = 4294975664;
							uint64_t* phi50 = (uint64_t*)0x1000020b0;
							if (phi44 != 0)
							{
								phi51 = phi_in49;
								_strcmp.47(*(struct x86_regs**)phi50);
								anon52 = phi47 | 1;
								if (anon52 == 1)
								{
									phi45 = 2;
									anon53 = phi48 & 0xffffffffffffff00 | (__zext uint64_t)(anon37 != 0);
									phi46 = anon53;
								}
								else 
								{
									phi45 = 2;
									phi46 = anon53;
									if (anon37 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi_in54 = anon36;
										phi55 = anon53;
									}
								}
							}
							if (phi44 == 0 || anon52 != 1 && phi44 != 0 && anon37 == 0 || phi44 != 0 && anon52 == 1 && anon37 == 0)
							{
								uint64_t phi_in56 = phi46;
								anon57 = arg1 - 400;
								_store_path(4294971047, anon57, *(uint64_t*)(alloca1.field5 + anon24), phi45);
								uint8_t* anon58 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon39);
								phi_in54 = 0;
								phi55 = phi_in56;
							}
							phi34 = phi55;
							phi32 = phi_in54;
							phi_in33 = alloca1.field5;
							_process_line(4294971083, (uint64_t)&alloca1.field10, phi45);
							phi47 = phi47 + 1;
							phi48 = anon53;
							uint64_t anon59 = phi51 + 8;
							phi_in49 = anon59;
							phi50 = (uint64_t*)anon59;
							break;
							uint64_t anon60 = phi43 + 8;
							phi_in40 = anon60;
							phi41 = phi41 + 1;
							phi42 = (uint64_t*)anon60;
						}
					}
				}
				phi_in18 = phi32;
				phi28 = phi34;
				phi10 = phi_in18;
				phi25 = (__zext uint64_t)*anon2;
				phi26 = phi_in33;
				phi27 = (__zext uint64_t)*anon16;
				phi29 = (uint8_t)(*anon16 >> 8);
			}
			phi8 = anon17;
			phi9 = phi27;
			anon61 = (uint32_t)phi20 + 1;
			anon62 = (uint32_t)phi25;
			if (anon61 != anon62)
			{
				phi11 = phi29;
				phi12 = phi25;
				phi13 = phi26;
				phi_in14 = phi20 + 1;
				phi15 = phi27;
				phi_in22 = phi28;
				*anon16 = (__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi29;
			}
		}
		while (anon61 != anon62);
	}
	uint64_t* anon64 = (uint64_t*)0x1000020c8;
	uint64_t anon63 = _table_count(4294971193, *anon64);
	alloca1.field5 = anon57;
	uint64_t* anon65 = (uint64_t*)phi8;
	uint64_t anon66 = anon63 & 0xffffffff;
	*anon65 = anon66;
	uint64_t anon67 = anon57 - ((anon66 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon67;
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
	_table_dump_keys(4294971398, *anon64, *anon64, anon67);
	_table_dump_keys(4294971413, *anon69, *anon69, anon71);
	uint64_t anon76 = anon71 - ((anon74 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon73, *anon73, anon76);
	uint32_t(* anon77)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon67, *anon65, 8, anon77);
	_qsort((uint8_t*)anon71, alloca1.field8, 8, anon77);
	_qsort((uint8_t*)anon76, alloca1.field1, 8, anon77);
	uint64_t anon78 = _table_count(4294971516, *anon73);
	uint32_t anon79 = (uint32_t)anon78;
	if ((anon79 >> 31 | (__zext uint32_t)(anon79 == 0)) == 0)
	{
		uint64_t phi_in80;
		uint64_t phi82;
		uint64_t phi84;
		uint64_t anon81 = anon78 << 32 >> 32;
		phi_in80 = anon81 + 1;
		anon83 = anon76 - ((anon75 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi82 = anon83 + anon81 * 24 - 8;
		do
		{
			phi84 = phi_in80;
			uint64_t anon85 = _table_find(4294971555, *anon73, *(uint64_t*)(anon76 + (phi84 << 3) - 16), 0);
			uint64_t anon86 = anon85 + 8;
			*(uint64_t*)(phi82 - 16) = **(uint64_t**)anon86;
			*(uint64_t*)(phi82 - 8) = *(uint64_t*)(*(uint64_t*)anon86 + 8);
			*(uint64_t*)phi82 = *(uint64_t*)(*(uint64_t*)anon86 + 16);
			phi_in80 = phi84 - 1;
			phi82 = phi82 - 24;
		}
		while (phi84 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon87 = (uint8_t*)0x100001c53;
		_printf(anon87);
		_puts((uint8_t*)0x100001d30);
		anon88 = (uint8_t*)0x100001d60;
		_puts(anon88);
		_print_effect_definition(4294971695, alloca1.field4, *anon65 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
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
		_print_filepaths(4294971858, anon83, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon65);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon64, 0);
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
	uint32_t phi2 = 0;
	uint8_t phi3 = *(uint8_t*)arg1;
	if (*(uint8_t*)arg1 != 0)
	{
		uint64_t anon5;
		do
		{
			uint64_t phi4 = phi_in1;
			anon5 = phi4 + 1;
			phi_in1 = anon5;
			phi2 = phi2 * 31 + (__zext uint32_t)phi3;
			phi3 = *(uint8_t*)anon5;
		}
		while (*(uint8_t*)anon5 != 0);
	}
	return;
}
uint64_t _table_new(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi2;
	uint8_t* anon1 = _malloc(24);
	uint64_t anon3 = (uint64_t)anon1;
	phi2 = anon3;
	if (anon1 != null)
	{
		*(uint32_t*)anon1 = 0;
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
	uint64_t phi3;
	uint64_t phi_in4;
	uint32_t* anon5;
	uint64_t phi7;
	uint64_t phi_in1 = 0;
	do
	{
		phi2 = phi_in1;
		phi3 = phi2;
		phi_in4 = 0;
		anon5 = (uint32_t*)(arg1 + 4);
		if (phi2 < (__zext uint64_t)*anon5)
		{
			uint64_t anon6 = phi2 + 1;
			phi_in1 = anon6;
			phi3 = anon6;
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
		phi7 = phi_in4;
		if (phi7 != 0)
		{
			((void(*)())arg2)();
			phi3 = phi3;
			phi_in4 = *(uint64_t*)(phi7 + 16);
			if (*(uint64_t*)(phi7 + 16) == 0)
			{
				uint32_t phi10;
				phi3 = phi3;
				uint32_t phi_in8 = (uint32_t)phi3;
				uint64_t phi9 = phi3 << 32 >> 29;
				do
				{
					phi10 = phi_in8;
					phi_in4 = 0;
					if (phi10 < *anon5)
					{
						uint32_t anon12 = phi10 + 1;
						uint64_t anon11 = (__zext uint64_t)anon12;
						phi3 = anon11;
						phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi9);
						if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi9) == 0)
						{
							phi3 = anon11;
							phi_in8 = anon12;
							phi9 = phi9 + 8;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi10 < *anon5);
			}
		}
	}
	while (phi7 != 0);
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
		uint64_t phi4 = (__sext int64_t)*anon3 << 3;
		do
		{
			phi5 = phi_in2;
			if (phi5 < *(uint32_t*)(*(uint64_t*)arg1 + 4))
			{
				*anon1 = *(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi4);
				uint32_t anon6 = phi5 + 1;
				*anon3 = anon6;
				if (*(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi4) == 0)
				{
					phi_in2 = anon6;
					phi4 = phi4 + 8;
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
		phi10 = arg1 + 8;
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
			phi10 = anon12;
		}
		while (anon13 < (__zext uint64_t)*anon5);
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi8 + 8));
	phi_in3 = phi7;
	phi_in4 = *(uint64_t*)(phi8 + 16);
	if (*(uint64_t*)(phi8 + 16) == 0)
	{
		uint32_t phi16;
		uint32_t phi_in14 = (uint32_t)phi7;
		uint64_t phi15 = phi7 << 32 >> 29;
		do
		{
			phi_in3 = phi7;
			phi16 = phi_in14;
			phi_in4 = 0;
			if (phi16 < *anon5)
			{
				uint32_t anon18 = phi16 + 1;
				uint64_t anon17 = (__zext uint64_t)anon18;
				phi_in3 = anon17;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15);
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15) == 0)
				{
					phi7 = anon17;
					phi_in14 = anon18;
					phi15 = phi15 + 8;
				}
				else 
				{
					break;
				}
			}
		}
		while (phi16 < *anon5);
	}
	_free.56(*(struct x86_regs**)phi10);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi_in4;
	uint64_t phi15;
	uint64_t phi1 = 0;
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
		phi1 = (__zext uint64_t)anon10;
	}
	while (true)
	{
		uint64_t phi_in11;
		uint64_t phi14;
		uint32_t anon16;
		uint64_t* anon12 = (uint64_t*)(arg1 + 8);
		uint64_t anon13 = phi1 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi_in11 = *(uint64_t*)(*anon12 + anon13);
		if (*(uint64_t*)(*anon12 + anon13) != 0)
		{
			phi14 = phi_in11;
			_strcmp.47((struct x86_regs*)arg2);
			phi15 = phi14;
			anon16 = (uint32_t)*anon12;
			if (anon16 == 0)
			{
				break;
			}
			else 
			{
				phi_in11 = *(uint64_t*)(phi14 + 16);
			}
		}
		if (*(uint64_t*)(*anon12 + anon13) == 0 || anon16 != 0 && *(uint64_t*)(*anon12 + anon13) != 0 && *(uint64_t*)(phi14 + 16) == 0)
		{
			phi15 = 0;
			if ((uint8_t)arg3 != 0)
			{
				uint8_t* anon17 = _strdup(anon5);
				uint8_t* anon18 = _malloc(24);
				*(uint64_t*)anon18 = (uint64_t)anon17;
				uint64_t anon19 = (uint64_t)anon18;
				*(uint64_t*)(anon19 + 8) = 0;
				*(uint64_t*)(anon19 + 16) = *(uint64_t*)(*anon12 + anon13);
				*(uint64_t*)(*anon12 + anon13) = anon19;
				uint32_t* anon20 = (uint32_t*)arg1;
				*anon20 = *anon20 + 1;
				phi15 = anon19;
			}
			break;
		}
	}
	return phi15;
}
void _table_print(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi2;
	uint64_t phi1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi2 = *anon3;
	if (*anon3 != 0)
	{
		while (true)
		{
			uint64_t phi8;
			uint32_t phi_in4 = phi2;
			uint32_t phi5 = phi_in4;
			uint64_t* anon6 = (uint64_t*)(arg1 + 8);
			uint64_t anon7 = phi1 << 3;
			if (*(uint64_t*)(*anon6 + anon7) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				phi8 = *anon6 + anon7;
				if (*(uint64_t*)phi8 == 0)
				{
					_puts((uint8_t*)0x100001db1);
					phi5 = *anon3;
				}
			}
			uint64_t anon9 = phi1 + 1;
			phi1 = anon9;
			phi2 = phi5;
			_printf((uint8_t*)0x100001dac);
			phi8 = *(uint64_t*)phi8 + 16;
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
	uint32_t phi4;
	uint64_t* phi_in5;
	uint64_t phi6;
	uint64_t phi7;
	uint32_t phi8;
	uint32_t phi_in9;
	uint64_t phi17;
	uint32_t phi1 = 0;
	uint64_t* phi2 = null;
	uint64_t phi_in3 = 0;
	do
	{
		phi4 = phi1;
		phi_in5 = phi2;
		phi6 = phi_in3;
		phi7 = 0;
		phi8 = 0;
		phi_in9 = phi4;
		if (phi6 < (__zext uint64_t)*(uint32_t*)(arg2 + 4))
		{
			uint64_t anon11 = phi6 + 1;
			uint32_t anon10 = (uint32_t)anon11;
			phi1 = anon10;
			uint64_t* anon12 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi6 << 3));
			phi2 = anon12;
			phi_in3 = anon11;
			phi7 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi6 << 3));
			phi8 = 0;
			phi_in9 = anon10;
			phi4 = anon10;
			phi_in5 = anon12;
			if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi6 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi6 < (__zext uint64_t)*(uint32_t*)(arg2 + 4));
	do
	{
		uint64_t phi_in13 = phi7;
		uint32_t phi_in14 = phi4;
		uint64_t* phi15 = phi_in5;
		uint64_t phi16 = (__sext int64_t)phi8;
		phi17 = phi_in13;
		if (phi17 != 0)
		{
			uint64_t* anon20;
			*(uint64_t*)((phi16 << 3) + arg3) = *phi15;
			if (*(uint64_t*)(phi17 + 16) == 0)
			{
				uint64_t* phi19;
				uint32_t phi23;
				uint64_t phi_in18 = (__sext int64_t)phi_in14 << 3;
				anon20 = (uint64_t*)*(uint64_t*)(phi17 + 16);
				phi19 = anon20;
				do
				{
					uint32_t phi21 = phi_in9;
					uint64_t phi22 = phi_in18;
					phi23 = phi_in14;
					phi7 = 0;
					uint32_t anon24 = (uint32_t)phi16 + 1;
					phi8 = anon24;
					phi_in9 = phi21;
					phi4 = phi23;
					phi_in5 = phi19;
					if (phi23 < *(uint32_t*)(arg2 + 4))
					{
						phi7 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22);
						phi8 = anon24;
						uint32_t anon25 = phi21 + 1;
						phi_in9 = anon25;
						phi4 = anon25;
						uint64_t* anon26 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22);
						phi_in5 = anon26;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22) == 0)
						{
							phi_in9 = anon25;
							phi_in18 = phi22 + 8;
							phi_in14 = anon25;
							phi19 = anon26;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi23 < *(uint32_t*)(arg2 + 4));
			}
			else 
			{
				phi_in13 = *(uint64_t*)(phi17 + 16);
				phi15 = anon20;
				phi16 = phi16 + 1;
			}
		}
	}
	while (phi17 != 0);
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
	uint32_t anon8 = (uint32_t)phi1 - 1;
	phi1 = (__zext uint64_t)anon8;
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
