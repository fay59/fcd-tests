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
				uint64_t phi19;
				uint64_t* anon20;
				uint64_t anon21;
				uint32_t anon22;
				uint64_t phi_in11 = 0;
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
						phi_in11 = (__zext uint64_t)anon16;
						anon17 = phi15 + 1;
						phi_in12 = anon17;
						phi13 = anon16;
						phi14 = *(uint8_t*)anon17;
					}
					while (*(uint8_t*)anon17 != 0);
				}
				do
				{
					uint64_t phi18 = phi_in11;
					anon20 = (uint64_t*)(*phi7 + 8);
					anon21 = phi18 % (__zext uint64_t)*(uint32_t*)(*phi7 + 4) << 3;
					phi19 = *(uint64_t*)(*anon20 + anon21);
					if (*(uint64_t*)(*anon20 + anon21) != 0)
					{
						_strcmp.47((struct x86_regs*)anon10);
						anon22 = (uint32_t)*anon20;
						if (anon22 == 0)
						{
							break;
						}
						else 
						{
							phi19 = *(uint64_t*)(phi19 + 16);
						}
					}
				}
				while (!(*(uint64_t*)(*anon20 + anon21) == 0 || *(uint64_t*)(*anon20 + anon21) != 0 && anon22 != 0 && *(uint64_t*)(phi19 + 16) == 0));
				uint8_t* anon23 = _strdup(anon10);
				uint8_t* anon24 = _malloc(24);
				*(uint64_t*)anon24 = (uint64_t)anon23;
				uint64_t anon25 = (uint64_t)anon24;
				*(uint64_t*)(anon25 + 8) = 0;
				*(uint64_t*)(anon25 + 16) = *(uint64_t*)(*anon20 + anon21);
				*(uint64_t*)(*anon20 + anon21) = anon25;
				uint32_t* anon26 = (uint32_t*)*phi7;
				*anon26 = *anon26 + 1;
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
		phi10 = phi_in6;
		uint64_t phi11 = phi_in7;
		_strcmp.47(*(struct x86_regs**)phi8);
		if ((phi10 | 1) == 1)
		{
			phi_in6 = phi10 + 1;
			uint64_t anon12 = phi11 + 8;
			phi_in7 = anon12;
			phi8 = (uint64_t*)anon12;
		}
	}
	while ((phi10 | 1) == 1);
	_strcmp.47((struct x86_regs*)0x100001cd8);
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi8;
	uint64_t phi9;
	uint24_t phi10;
	uint8_t phi11;
	uint64_t phi14;
	uint32_t* anon15;
	uint64_t phi44;
	uint64_t anon58;
	uint64_t anon79;
	uint8_t* anon84;
	uint8_t* anon85;
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
		*(uint32_t*)(arg1 - 340) = 0;
		phi10 = 0;
		phi11 = 0;
		uint64_t phi12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		phi14 = 1;
		uint64_t anon16 = arg1 - 328;
		anon15 = (uint32_t*)anon16;
		*anon15 = 0;
		uint64_t phi_in17 = phi12;
		uint64_t phi18 = phi13;
		uint64_t phi19 = phi_in20;
		uint64_t phi21 = phi_in22;
		uint64_t anon24 = phi14 << 3;
		struct x86_regs* anon23 = (struct x86_regs*)*(uint64_t*)(phi18 + anon24);
		_strcmp.47(anon23);
		phi10 = phi10;
		uint64_t phi25 = phi_in17;
		phi9 = phi19 & 0xff | 0x100;
		uint8_t phi26 = 1;
		if (((__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11) != 0)
		{
			_strcmp.47(anon23);
			uint8_t* anon28 = (uint8_t*)*(uint64_t*)(phi18 + anon24);
			uint8_t* anon27 = _strrchr(anon28, 46);
			uint24_t phi_in29 = (uint24_t)((uint32_t)(uint64_t)anon27 >> 8);
			uint64_t phi_in30 = phi21;
			if (anon27 != null)
			{
				struct __sFILE* anon31 = _fopen(anon28, (uint8_t*)0x100001c1c);
				uint64_t anon34 = (uint64_t)anon31;
				uint32_t anon33 = (uint32_t)anon34;
				uint24_t anon32 = (uint24_t)(anon33 >> 8);
				phi_in29 = anon32;
				phi_in30 = phi21;
				if (anon31 != null)
				{
					uint64_t phi40;
					uint32_t phi_in41;
					uint32_t phi43;
					uint64_t phi45;
					uint64_t anon52;
					uint24_t phi_in55;
					uint64_t phi_in56;
					uint64_t anon35 = arg1 - 360;
					*(uint64_t*)anon35 = anon34;
					uint64_t phi_in36 = 4294975648;
					uint64_t phi_in37 = 1;
					uint64_t* phi38 = (uint64_t*)0x1000020a0;
					do
					{
						uint64_t phi39 = phi_in36;
						phi40 = phi_in37;
						_strcmp.47(*(struct x86_regs**)phi38);
						phi_in41 = anon33;
						if ((phi40 | 1) == 1)
						{
							phi_in41 = 0;
							uint64_t anon42 = phi39 + 8;
							phi_in36 = anon42;
							phi_in37 = phi40 + 1;
							phi38 = (uint64_t*)anon42;
							if (anon33 == 0)
							{
								break;
							}
						}
					}
					while ((phi40 | 1) == 1);
					do
					{
						phi43 = phi_in41;
						phi44 = 0;
						phi45 = phi21;
						uint64_t phi46 = 1;
						uint64_t phi_in47 = phi21;
						uint64_t phi_in48 = 4294975664;
						uint64_t* phi49 = (uint64_t*)0x1000020b0;
						if (phi43 != 0)
						{
							uint64_t anon53;
							uint64_t phi50 = phi_in47;
							uint64_t phi51 = phi_in48;
							_strcmp.47(*(struct x86_regs**)phi49);
							anon52 = phi46 | 1;
							if (anon52 == 1)
							{
								phi44 = 2;
								anon53 = phi50 & 0xffffffffffffff00 | (__zext uint64_t)(anon33 != 0);
								phi45 = anon53;
								phi46 = phi46 + 1;
								phi_in47 = anon53;
								uint64_t anon54 = phi51 + 8;
								phi_in48 = anon54;
								phi49 = (uint64_t*)anon54;
							}
							else 
							{
								phi44 = 2;
								phi45 = anon53;
								if (anon33 != 0)
								{
									_strcmp.47((struct x86_regs*)0x100001cd8);
									phi_in55 = anon32;
									phi_in56 = anon53;
									break;
								}
							}
						}
					}
					while (!(phi43 != 0 && anon52 != 1 && anon33 == 0 || phi43 == 0 || phi43 != 0 && anon52 == 1 && anon33 == 0));
					uint64_t phi_in57 = phi45;
					anon58 = arg1 - 400;
					_store_path(4294971047, anon58, *(uint64_t*)(alloca1.field5 + anon24), phi44);
					uint8_t* anon59 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon35);
					phi_in55 = (uint24_t)((uint32_t)(uint64_t)anon59 >> 8);
					phi_in56 = phi_in57;
					phi_in29 = phi_in55;
					phi18 = alloca1.field5;
					phi_in30 = phi_in56;
				}
			}
			phi10 = phi_in29;
			phi25 = (__zext uint64_t)*anon2;
			phi9 = (__zext uint64_t)*anon15;
			phi21 = phi_in30;
			phi26 = (uint8_t)(*anon15 >> 8);
		}
		phi12 = phi25;
		phi13 = phi18;
		uint64_t phi_in22 = phi21;
		phi11 = phi26;
		phi8 = anon16;
	}
	uint64_t* anon61 = (uint64_t*)0x1000020c8;
	uint64_t anon60 = _table_count(4294971193, *anon61);
	alloca1.field5 = anon58;
	uint64_t* anon62 = (uint64_t*)phi8;
	uint64_t anon63 = anon60 & 0xffffffff;
	*anon62 = anon63;
	uint64_t anon64 = anon58 - ((anon63 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon64;
	uint64_t* anon66 = (uint64_t*)0x1000020d0;
	uint64_t anon65 = _table_count(4294971258, *anon66);
	uint64_t anon67 = anon65 & 0xffffffff;
	alloca1.field8 = anon67;
	uint64_t anon68 = anon64 - ((anon67 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon68;
	uint64_t* anon70 = (uint64_t*)0x1000020c0;
	uint64_t anon69 = _table_count(4294971306, *anon70);
	alloca1.field0 = (uint32_t)anon69;
	uint64_t anon71 = anon69 & 0xffffffff;
	alloca1.field1 = anon71;
	uint64_t anon72 = _table_count(4294971353, *anon70);
	alloca1.field2 = anon72 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon61, anon64);
	_table_dump_keys(4294971413, *anon66, anon68);
	uint64_t anon73 = anon68 - ((anon71 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon70, anon73);
	uint32_t(* anon74)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon64, *anon62, 8, anon74);
	_qsort((uint8_t*)anon68, alloca1.field8, 8, anon74);
	_qsort((uint8_t*)anon73, alloca1.field1, 8, anon74);
	uint64_t anon75 = _table_count(4294971516, *anon70);
	if ((uint32_t)anon75 >= 1)
	{
		uint64_t phi_in76;
		uint64_t phi78;
		uint64_t phi80;
		uint64_t anon77 = anon75 << 32 >> 32;
		phi_in76 = anon77 + 1;
		anon79 = anon73 - ((anon72 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi78 = anon79 + anon77 * 24 - 8;
		do
		{
			phi80 = phi_in76;
			uint64_t anon81 = _table_find(4294971555, *anon70, *(uint64_t*)(anon73 + (phi80 << 3) - 16), 0);
			uint64_t anon82 = anon81 + 8;
			*(uint64_t*)(phi78 - 16) = **(uint64_t**)anon82;
			uint64_t* anon83 = (uint64_t*)anon82;
			*(uint64_t*)(phi78 - 8) = *(uint64_t*)(*anon83 + 8);
			*(uint64_t*)phi78 = *(uint64_t*)(*anon83 + 16);
			phi_in76 = phi80 - 1;
			phi78 = phi78 - 24;
		}
		while (phi80 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon84 = (uint8_t*)0x100001c53;
		_printf(anon84);
		_puts((uint8_t*)0x100001d30);
		anon85 = (uint8_t*)0x100001d60;
		_puts(anon85);
		_print_effect_definition(4294971695, alloca1.field4, *anon62 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon73, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon84);
		_puts(anon85);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon79, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon62);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon61, 0);
	_table_free(4294971936, *anon66, 0);
	_table_free(4294971955, *anon70, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
	phi14 = phi14 + 1;
	uint64_t phi_in20 = phi9;
	*anon15 = (__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11;
	_process_line(4294971083, (uint64_t)&alloca1.field10, phi44);
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
	__builtin_trap();
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
				uint32_t phi11;
				uint32_t phi_in9 = (uint32_t)phi7;
				uint64_t phi_in10 = phi7 << 32 >> 29;
				do
				{
					phi11 = phi_in9;
					uint64_t phi12 = phi_in10;
					phi_in3 = phi7;
					phi_in4 = 0;
					if (phi11 < *anon5)
					{
						uint32_t anon14 = phi11 + 1;
						uint64_t anon13 = (__zext uint64_t)anon14;
						phi7 = anon13;
						phi_in9 = anon14;
						phi_in10 = phi12 + 8;
						phi_in3 = anon13;
						phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi12);
						if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi12) != 0)
						{
							break;
						}
					}
				}
				while (phi11 < *anon5);
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
	uint32_t* anon5;
	uint64_t phi7;
	uint64_t phi9;
	if (arg2 != 0)
	{
		uint64_t phi2;
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
		phi7 = phi_in4;
	}
	uint64_t phi_in8 = 0;
	if (*anon5 == 0)
	{
		phi9 = arg1 + 8;
	}
	else 
	{
		uint64_t anon12;
		do
		{
			uint64_t phi10 = phi_in8;
			uint64_t anon11 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon11 + (phi10 << 3)));
			anon12 = phi10 + 1;
			phi_in8 = anon12;
			phi9 = anon11;
		}
		while (anon12 < (__zext uint64_t)*anon5);
	}
	((void(*)(uint64_t))arg2)(*(uint64_t*)(phi7 + 8));
	phi3 = phi3;
	phi_in4 = *(uint64_t*)(phi7 + 16);
	if (*(uint64_t*)(phi7 + 16) == 0)
	{
		uint32_t phi16;
		uint64_t phi13 = phi3;
		uint32_t phi_in14 = (uint32_t)phi3;
		uint64_t phi_in15 = phi3 << 32 >> 29;
		do
		{
			phi3 = phi13;
			phi16 = phi_in14;
			uint64_t phi17 = phi_in15;
			phi_in4 = 0;
			if (phi16 < *anon5)
			{
				uint32_t anon19 = phi16 + 1;
				uint64_t anon18 = (__zext uint64_t)anon19;
				phi13 = anon18;
				phi_in14 = anon19;
				phi_in15 = phi17 + 8;
				phi3 = anon18;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi17);
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi17) != 0)
				{
					break;
				}
			}
		}
		while (phi16 < *anon5);
	}
	_free.56(*(struct x86_regs**)phi9);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi4;
	uint64_t phi10;
	uint64_t* anon11;
	uint64_t anon12;
	uint64_t phi13;
	uint32_t anon14;
	uint64_t phi_in1 = 0;
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
			phi_in1 = (__zext uint64_t)anon7;
			anon8 = phi6 + 1;
			phi_in2 = anon8;
			phi3 = anon7;
			phi4 = *(uint8_t*)anon8;
		}
		while (*(uint8_t*)anon8 != 0);
	}
	do
	{
		uint64_t phi9 = phi_in1;
		anon11 = (uint64_t*)(arg1 + 8);
		anon12 = phi9 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi10 = *(uint64_t*)(*anon11 + anon12);
		if (*(uint64_t*)(*anon11 + anon12) != 0)
		{
			_strcmp.47((struct x86_regs*)arg2);
			phi13 = phi10;
			anon14 = (uint32_t)*anon11;
			if (anon14 == 0)
			{
				break;
			}
			else 
			{
				phi10 = *(uint64_t*)(phi10 + 16);
			}
		}
	}
	while (!(*(uint64_t*)(*anon11 + anon12) == 0 || *(uint64_t*)(*anon11 + anon12) != 0 && anon14 != 0 && *(uint64_t*)(phi10 + 16) == 0));
	phi13 = 0;
	if ((uint8_t)arg3 != 0)
	{
		uint8_t* anon15 = _strdup(anon5);
		uint8_t* anon16 = _malloc(24);
		*(uint64_t*)anon16 = (uint64_t)anon15;
		uint64_t anon17 = (uint64_t)anon16;
		*(uint64_t*)(anon17 + 8) = 0;
		*(uint64_t*)(anon17 + 16) = *(uint64_t*)(*anon11 + anon12);
		*(uint64_t*)(*anon11 + anon12) = anon17;
		uint32_t* anon18 = (uint32_t*)arg1;
		*anon18 = *anon18 + 1;
		phi13 = anon17;
	}
	return phi13;
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
			if (*(uint64_t*)(*anon6 + (anon7 & 0x7fffffff8)) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				phi8 = *anon6 + anon7;
				if (*(uint64_t*)phi8 == 0)
				{
					_puts((uint8_t*)0x100001db1);
					phi5 = *anon3;
				}
			}
			phi1 = phi1 + 1;
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
void _table_dump_keys(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi4;
	uint64_t phi5;
	uint64_t phi6;
	uint32_t phi7;
	uint32_t phi8;
	uint64_t* phi9;
	uint64_t phi18;
	uint32_t phi1 = 0;
	uint64_t* phi_in2 = null;
	uint64_t phi_in3 = 0;
	do
	{
		phi4 = phi1;
		phi5 = phi_in3;
		phi6 = 0;
		phi7 = 0;
		phi8 = phi4;
		phi9 = phi_in2;
		if (phi5 < (__zext uint64_t)*(uint32_t*)(arg1 + 4))
		{
			uint64_t anon11 = phi5 + 1;
			uint32_t anon10 = (uint32_t)anon11;
			phi1 = anon10;
			uint64_t* anon12 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi5 << 3));
			phi_in2 = anon12;
			phi_in3 = anon11;
			phi6 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi5 << 3));
			phi7 = 0;
			phi8 = anon10;
			phi4 = anon10;
			phi9 = anon12;
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi5 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi5 < (__zext uint64_t)*(uint32_t*)(arg1 + 4));
	do
	{
		uint64_t phi_in13 = phi6;
		uint32_t phi_in14 = phi8;
		uint32_t phi_in15 = phi4;
		uint64_t* phi_in16 = phi9;
		uint64_t phi_in17 = (__sext int64_t)phi7;
		phi18 = phi_in13;
		uint64_t* phi19 = phi_in16;
		uint64_t phi20 = phi_in17;
		if (phi18 != 0)
		{
			*(uint64_t*)((phi20 << 3) + arg2) = *phi19;
			phi_in13 = *(uint64_t*)(phi18 + 16);
			uint64_t* anon21 = (uint64_t*)*(uint64_t*)(phi18 + 16);
			phi_in16 = anon21;
			phi_in17 = phi20 + 1;
			if (*(uint64_t*)(phi18 + 16) == 0)
			{
				uint32_t phi26;
				uint64_t phi_in22 = (__sext int64_t)phi_in15 << 3;
				uint64_t* phi23 = anon21;
				do
				{
					uint32_t phi24 = phi_in14;
					uint64_t phi25 = phi_in22;
					phi26 = phi_in15;
					phi6 = 0;
					uint32_t anon27 = (uint32_t)phi20 + 1;
					phi7 = anon27;
					phi8 = phi24;
					phi4 = phi26;
					phi9 = phi23;
					if (phi26 < *(uint32_t*)(arg1 + 4))
					{
						uint32_t anon28 = phi24 + 1;
						phi_in14 = anon28;
						phi_in22 = phi25 + 8;
						phi_in15 = anon28;
						uint64_t* anon29 = (uint64_t*)*(uint64_t*)(*phi19 + phi25);
						phi23 = anon29;
						phi6 = *(uint64_t*)(*phi19 + phi25);
						phi7 = anon27;
						phi8 = anon28;
						phi4 = anon28;
						phi9 = anon29;
						if (*(uint64_t*)(*phi19 + phi25) != 0)
						{
							break;
						}
					}
				}
				while (phi26 < *(uint32_t*)(arg1 + 4));
			}
		}
	}
	while (phi18 != 0);
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
	uint8_t* anon2;
	uint32_t phi_in3;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi1 = arg2;
	if ((uint32_t)arg2 >= 1)
	{
		anon2 = (uint8_t*)0x100001dd5;
		_printf(anon2);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon4 = (uint32_t)arg4;
	phi_in3 = anon4;
	if (anon4 >= 1)
	{
		uint32_t anon6;
		do
		{
			uint32_t phi5 = phi_in3;
			_printf(anon2);
			anon6 = phi5 - 1;
			phi_in3 = anon6;
		}
		while (anon6 != 0);
	}
	phi1 = (__zext uint64_t)((uint32_t)phi1 - 1);
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
