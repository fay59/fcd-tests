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
				uint64_t phi21;
				uint64_t* anon22;
				uint64_t anon23;
				uint32_t anon24;
				uint64_t phi_in11 = 0;
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
					phi_in11 = (__zext uint64_t)(anon19 & 0xff);
				}
				do
				{
					uint64_t phi20 = phi_in11;
					anon22 = (uint64_t*)(*phi7 + 8);
					anon23 = phi20 % (__zext uint64_t)*(uint32_t*)(*phi7 + 4) << 3;
					phi21 = *(uint64_t*)(*anon22 + anon23);
					if (*(uint64_t*)(*anon22 + anon23) != 0)
					{
						_strcmp.47((struct x86_regs*)anon10);
						anon24 = (uint32_t)*anon22;
						if (anon24 == 0)
						{
							break;
						}
						else 
						{
							phi21 = *(uint64_t*)(phi21 + 16);
						}
					}
				}
				while (!(*(uint64_t*)(*anon22 + anon23) == 0 || *(uint64_t*)(*anon22 + anon23) != 0 && anon24 != 0 && *(uint64_t*)(phi21 + 16) == 0));
				uint8_t* anon25 = _strdup(anon10);
				uint8_t* anon26 = _malloc(24);
				*(uint64_t*)anon26 = (uint64_t)anon25;
				uint64_t anon27 = (uint64_t)anon26;
				*(uint64_t*)(anon27 + 8) = 0;
				*(uint64_t*)(anon27 + 16) = *(uint64_t*)(*anon22 + anon23);
				*(uint64_t*)(*anon22 + anon23) = anon27;
				uint32_t* anon28 = (uint32_t*)*phi7;
				*anon28 = *anon28 + 1;
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
	uint64_t anon59;
	uint64_t anon85;
	uint8_t* anon89;
	uint8_t* anon90;
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
		uint32_t anon63;
		uint32_t anon64;
		*(uint32_t*)(arg1 - 340) = 0;
		uint24_t phi10 = 0;
		uint8_t phi11 = 0;
		uint64_t phi12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		uint64_t phi_in14 = 1;
		uint32_t phi15 = 0;
		do
		{
			uint64_t phi_in20;
			uint64_t phi_in22;
			uint64_t phi27;
			uint64_t phi28;
			uint64_t phi29;
			uint64_t phi30;
			uint8_t phi31;
			uint24_t phi16 = phi10;
			uint64_t phi_in17 = phi12;
			uint64_t phi18 = phi_in14;
			uint64_t phi19 = phi_in20;
			uint64_t phi21 = phi_in22;
			uint64_t anon24 = arg1 - 328;
			uint32_t* anon23 = (uint32_t*)anon24;
			*anon23 = phi15;
			uint64_t anon26 = phi18 << 3;
			struct x86_regs* anon25 = (struct x86_regs*)*(uint64_t*)(phi13 + anon26);
			_strcmp.47(anon25);
			if (((__zext uint32_t)phi16 << 8 | (__zext uint32_t)phi11) == 0)
			{
				phi27 = phi_in17;
				phi28 = phi13;
				phi29 = phi19 & 0xff | 0x100;
				phi30 = phi21;
				phi31 = 1;
			}
			else 
			{
				_strcmp.47(anon25);
				uint8_t* anon33 = (uint8_t*)*(uint64_t*)(phi13 + anon26);
				uint8_t* anon32 = _strrchr(anon33, 46);
				uint24_t phi34 = 0;
				uint64_t phi35 = phi13;
				uint64_t phi36 = phi21;
				if (anon32 != null)
				{
					struct __sFILE* anon37 = _fopen(anon33, (uint8_t*)0x100001c1c);
					uint64_t anon40 = (uint64_t)anon37;
					uint32_t anon39 = (uint32_t)anon40;
					uint24_t anon38 = (uint24_t)(anon39 >> 8);
					phi34 = anon38;
					phi35 = phi13;
					phi36 = phi21;
					if (anon37 != null)
					{
						uint64_t anon41 = arg1 - 360;
						*(uint64_t*)anon41 = anon40;
						uint64_t phi_in42 = 4294975648;
						uint64_t phi43 = 1;
						uint64_t* phi44 = (uint64_t*)0x1000020a0;
						while (true)
						{
							uint64_t phi53;
							uint64_t anon54;
							uint64_t anon55;
							uint24_t phi56;
							uint64_t phi_in57;
							uint64_t phi45 = phi_in42;
							_strcmp.47(*(struct x86_regs**)phi44);
							uint32_t phi46 = anon39;
							if ((phi43 | 1) == 1)
							{
								phi46 = 0;
							}
							uint64_t phi47 = 0;
							uint64_t phi48 = phi21;
							uint64_t phi49 = 1;
							uint64_t phi50 = phi21;
							uint64_t phi_in51 = 4294975664;
							uint64_t* phi52 = (uint64_t*)0x1000020b0;
							if (phi46 != 0)
							{
								phi53 = phi_in51;
								_strcmp.47(*(struct x86_regs**)phi52);
								anon54 = phi49 | 1;
								if (anon54 == 1)
								{
									phi47 = 2;
									anon55 = phi50 & 0xffffffffffffff00 | (__zext uint64_t)(anon39 != 0);
									phi48 = anon55;
								}
								else 
								{
									phi47 = 2;
									phi48 = anon55;
									if (anon39 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi56 = anon38;
										phi_in57 = anon55;
									}
								}
							}
							if (phi46 == 0 || anon54 != 1 && phi46 != 0 && anon39 == 0 || phi46 != 0 && anon54 == 1 && anon39 == 0)
							{
								uint64_t phi_in58 = phi48;
								anon59 = arg1 - 400;
								_store_path(4294971047, anon59, *(uint64_t*)(alloca1.field5 + anon26), phi47);
								_fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon41);
								phi56 = 0;
								phi_in57 = phi_in58;
							}
							phi34 = phi56;
							phi35 = alloca1.field5;
							phi36 = phi_in57;
							_process_line(4294971083, (uint64_t)&alloca1.field10, phi47);
							phi49 = phi49 + 1;
							phi50 = anon55;
							uint64_t anon60 = phi53 + 8;
							phi_in51 = anon60;
							phi52 = (uint64_t*)anon60;
							break;
							uint64_t anon61 = phi45 + 8;
							phi_in42 = anon61;
							phi43 = phi43 + 1;
							phi44 = (uint64_t*)anon61;
						}
					}
				}
				phi16 = phi34;
				uint64_t phi_in62 = phi35;
				phi30 = phi36;
				phi27 = (__zext uint64_t)*anon2;
				phi28 = phi_in62;
				phi29 = (__zext uint64_t)*anon23;
				phi31 = (uint8_t)(*anon23 >> 8);
			}
			phi9 = phi29;
			phi8 = anon24;
			anon63 = (uint32_t)phi18 + 1;
			anon64 = (uint32_t)phi27;
			if (anon63 != anon64)
			{
				phi10 = phi16;
				phi11 = phi31;
				phi12 = phi27;
				phi13 = phi28;
				phi_in14 = phi18 + 1;
				phi_in20 = phi9;
				phi_in22 = phi30;
				phi15 = (__zext uint32_t)phi16 << 8 | (__zext uint32_t)phi31;
			}
		}
		while (anon63 != anon64);
	}
	uint64_t* anon66 = (uint64_t*)0x1000020c8;
	uint64_t anon65 = _table_count(4294971193, *anon66);
	alloca1.field5 = anon59;
	uint64_t* anon67 = (uint64_t*)phi8;
	uint64_t anon68 = anon65 & 0xffffffff;
	*anon67 = anon68;
	uint64_t anon69 = anon59 - ((anon68 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon69;
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
	_table_dump_keys(4294971398, *anon66, *anon66, anon69);
	_table_dump_keys(4294971413, *anon71, *anon71, anon73);
	uint64_t anon78 = anon73 - ((anon76 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon75, *anon75, anon78);
	uint32_t(* anon79)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon69, *anon67, 8, anon79);
	_qsort((uint8_t*)anon73, alloca1.field8, 8, anon79);
	_qsort((uint8_t*)anon78, alloca1.field1, 8, anon79);
	uint64_t anon80 = _table_count(4294971516, *anon75);
	uint32_t anon81 = (uint32_t)anon80;
	if ((anon81 >> 31 | (__zext uint32_t)(anon81 == 0)) == 0)
	{
		uint64_t phi_in82;
		uint64_t phi84;
		uint64_t phi86;
		uint64_t anon83 = anon80 << 32 >> 32;
		phi_in82 = anon83 + 1;
		anon85 = anon78 - ((anon77 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi84 = anon85 + anon83 * 24 - 8;
		do
		{
			phi86 = phi_in82;
			uint64_t anon87 = _table_find(4294971555, *anon75, *(uint64_t*)(anon78 + (phi86 << 3) - 16), 0);
			uint64_t anon88 = anon87 + 8;
			*(uint64_t*)(phi84 - 16) = **(uint64_t**)anon88;
			*(uint64_t*)(phi84 - 8) = *(uint64_t*)(*(uint64_t*)anon88 + 8);
			*(uint64_t*)phi84 = *(uint64_t*)(*(uint64_t*)anon88 + 16);
			phi_in82 = phi86 - 1;
			phi84 = phi84 - 24;
		}
		while (phi86 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon89 = (uint8_t*)0x100001c53;
		_printf(anon89);
		_puts((uint8_t*)0x100001d30);
		anon90 = (uint8_t*)0x100001d60;
		_puts(anon90);
		_print_effect_definition(4294971695, alloca1.field4, *anon67 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon78, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon89);
		_puts(anon90);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon85, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon67);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon66, 0);
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
	uint64_t phi12;
	uint64_t* anon13;
	uint64_t anon14;
	uint64_t phi15;
	uint32_t anon16;
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
		uint64_t phi11 = phi_in1;
		anon13 = (uint64_t*)(arg1 + 8);
		anon14 = phi11 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi12 = *(uint64_t*)(*anon13 + anon14);
		if (*(uint64_t*)(*anon13 + anon14) != 0)
		{
			_strcmp.47((struct x86_regs*)arg2);
			phi15 = phi12;
			anon16 = (uint32_t)*anon13;
			if (anon16 == 0)
			{
				break;
			}
			else 
			{
				phi12 = *(uint64_t*)(phi12 + 16);
			}
		}
	}
	while (!(*(uint64_t*)(*anon13 + anon14) == 0 || *(uint64_t*)(*anon13 + anon14) != 0 && anon16 != 0 && *(uint64_t*)(phi12 + 16) == 0));
	phi15 = 0;
	if ((uint8_t)arg3 != 0)
	{
		uint8_t* anon17 = _strdup(anon5);
		uint8_t* anon18 = _malloc(24);
		*(uint64_t*)anon18 = (uint64_t)anon17;
		uint64_t anon19 = (uint64_t)anon18;
		*(uint64_t*)(anon19 + 8) = 0;
		*(uint64_t*)(anon19 + 16) = *(uint64_t*)(*anon13 + anon14);
		*(uint64_t*)(*anon13 + anon14) = anon19;
		uint32_t* anon20 = (uint32_t*)arg1;
		*anon20 = *anon20 + 1;
		phi15 = anon19;
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
void _table_dump_keys(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint32_t phi4;
	uint64_t phi5;
	uint64_t phi6;
	uint32_t phi7;
	uint32_t phi_in8;
	uint64_t phi17;
	uint32_t phi1 = 0;
	uint64_t* phi2 = null;
	uint64_t phi_in3 = 0;
	do
	{
		phi4 = phi1;
		phi5 = phi_in3;
		phi6 = 0;
		phi7 = 0;
		phi_in8 = phi4;
		if (phi5 < (__zext uint64_t)*(uint32_t*)(arg2 + 4))
		{
			uint64_t anon10 = phi5 + 1;
			uint32_t anon9 = (uint32_t)anon10;
			phi1 = anon9;
			uint64_t* anon11 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi5 << 3));
			phi2 = anon11;
			phi_in3 = anon10;
			phi6 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi5 << 3));
			phi7 = 0;
			phi_in8 = anon9;
			phi4 = anon9;
			phi2 = anon11;
			if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi5 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi5 < (__zext uint64_t)*(uint32_t*)(arg2 + 4));
	do
	{
		uint64_t phi_in12 = phi6;
		uint32_t phi_in13 = phi4;
		uint64_t* phi_in14 = phi2;
		uint64_t* phi15 = phi_in14;
		uint64_t phi16 = (__sext int64_t)phi7;
		phi17 = phi_in12;
		if (phi17 != 0)
		{
			uint64_t* anon20;
			*(uint64_t*)((phi16 << 3) + arg3) = *phi15;
			if (*(uint64_t*)(phi17 + 16) == 0)
			{
				uint64_t* phi19;
				uint32_t phi23;
				uint64_t phi_in18 = (__sext int64_t)phi_in13 << 3;
				anon20 = (uint64_t*)*(uint64_t*)(phi17 + 16);
				phi19 = anon20;
				do
				{
					uint32_t phi21 = phi_in8;
					uint64_t phi22 = phi_in18;
					phi23 = phi_in13;
					phi6 = 0;
					uint32_t anon24 = (uint32_t)phi16 + 1;
					phi7 = anon24;
					phi_in8 = phi21;
					phi4 = phi23;
					phi2 = phi19;
					if (phi23 < *(uint32_t*)(arg2 + 4))
					{
						phi6 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22);
						phi7 = anon24;
						uint32_t anon25 = phi21 + 1;
						phi_in8 = anon25;
						phi4 = anon25;
						uint64_t* anon26 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22);
						phi2 = anon26;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22) == 0)
						{
							phi_in8 = anon25;
							phi_in18 = phi22 + 8;
							phi_in13 = anon25;
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
				phi_in12 = *(uint64_t*)(phi17 + 16);
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
