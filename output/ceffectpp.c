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
	uint64_t phi_in12;
	uint64_t phi14;
	uint32_t* anon15;
	uint8_t phi28;
	uint64_t anon55;
	uint64_t phi_in62;
	uint64_t anon84;
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
		*(uint32_t*)(arg1 - 340) = 0;
		phi8 = (uint64_t)&alloca1.field9;
		phi9 = 0;
	}
	else 
	{
		alloca1.field7 = 0;
		phi10 = 0;
		phi11 = 0;
		phi_in12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		phi14 = 1;
		uint64_t anon16 = arg1 - 328;
		anon15 = (uint32_t*)anon16;
		*anon15 = 0;
		uint64_t phi17 = phi13;
		uint64_t phi18 = phi_in19;
		uint64_t phi_in20 = phi_in21;
		uint64_t anon23 = phi14 << 3;
		struct x86_regs* anon22 = (struct x86_regs*)*(uint64_t*)(phi17 + anon23);
		_strcmp.47(anon22);
		uint24_t phi24 = phi10;
		uint64_t phi25 = phi_in12;
		uint64_t phi26 = phi18 & 0xff | 0x100;
		uint64_t phi27 = phi_in20;
		phi28 = 1;
		if (((__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi11) != 0)
		{
			_strcmp.47(anon22);
			uint8_t* anon30 = (uint8_t*)*(uint64_t*)(phi17 + anon23);
			uint8_t* anon29 = _strrchr(anon30, 46);
			uint24_t phi31 = (uint24_t)((uint32_t)(uint64_t)anon29 >> 8);
			uint64_t phi32 = phi17;
			uint64_t phi33 = phi_in20;
			if (anon29 != null)
			{
				struct __sFILE* anon34 = _fopen(anon30, (uint8_t*)0x100001c1c);
				uint32_t anon36 = (uint32_t)(uint64_t)anon34;
				uint24_t anon35 = (uint24_t)(anon36 >> 8);
				phi31 = anon35;
				phi32 = phi17;
				phi33 = phi_in20;
				if (anon34 != null)
				{
					uint64_t phi41;
					uint32_t phi42;
					uint64_t anon52;
					uint24_t phi57;
					uint64_t phi58;
					alloca1.field4 = anon34;
					uint64_t phi_in37 = 4294975648;
					uint64_t phi_in38 = 1;
					uint64_t* phi39 = (uint64_t*)0x1000020a0;
					do
					{
						uint64_t phi40 = phi_in37;
						phi41 = phi_in38;
						_strcmp.47(*(struct x86_regs**)phi39);
						phi42 = anon36;
						if (phi41 <= 1)
						{
							phi42 = 0;
							uint64_t anon43 = phi40 + 8;
							phi_in37 = anon43;
							phi_in38 = phi41 + 1;
							phi39 = (uint64_t*)anon43;
							if (anon36 == 0)
							{
								break;
							}
						}
					}
					while (phi41 <= 1);
					uint64_t phi44 = 0;
					uint64_t phi_in45 = phi_in20;
					uint64_t phi_in46 = 1;
					uint64_t phi_in47 = 4294975664;
					uint64_t* phi48 = (uint64_t*)0x1000020b0;
					if (phi42 != 0)
					{
						uint64_t phi49;
						do
						{
							phi49 = phi_in46;
							uint64_t phi50 = phi_in20;
							uint64_t phi51 = phi_in47;
							_strcmp.47(*(struct x86_regs**)phi48);
							if (phi49 <= 1)
							{
								phi_in46 = phi49 + 1;
								uint8_t anon53 = (__zext uint8_t)(anon36 == 0) ^ 1;
								anon52 = phi50 & 0xffffffffffffff00 | (__zext uint64_t)anon53;
								phi_in20 = anon52;
								uint64_t anon54 = phi51 + 8;
								phi_in47 = anon54;
								phi48 = (uint64_t*)anon54;
								if (anon53 == 0)
								{
									break;
								}
							}
						}
						while (phi49 <= 1);
						phi44 = 2;
						phi_in45 = anon52;
					}
					if (phi42 != 0 && anon36 == 0 || phi42 == 0)
					{
						uint8_t* anon56;
						anon55 = arg1 - 400;
						_store_path(4294971047, anon55, *(uint64_t*)(alloca1.field5 + anon23), phi44);
						do
						{
							anon56 = _fgets(&alloca1.field10[0], 256, alloca1.field4);
							phi57 = (uint24_t)((uint32_t)(uint64_t)anon56 >> 8);
							phi58 = phi_in45;
							if (anon56 != null)
							{
								_process_line(4294971083, (uint64_t)&alloca1.field10, phi44);
							}
						}
						while (anon56 != null);
					}
					if (anon36 != 0 && phi42 != 0)
					{
						_strcmp.47((struct x86_regs*)0x100001cd8);
						phi57 = anon35;
						phi58 = anon52;
					}
					uint24_t phi_in59 = phi57;
					uint64_t phi_in60 = phi58;
					phi31 = phi_in59;
					phi32 = alloca1.field5;
					phi33 = phi_in60;
				}
			}
			uint24_t phi_in61 = phi31;
			phi17 = phi32;
			phi27 = phi33;
			phi24 = phi_in61;
			phi25 = (__zext uint64_t)*anon2;
			phi26 = (__zext uint64_t)*anon15;
			phi28 = (uint8_t)(*anon15 >> 8);
		}
		phi10 = phi24;
		phi_in62 = phi25;
		phi13 = phi17;
		uint64_t phi_in19 = phi26;
		uint64_t phi_in21 = phi27;
		phi8 = anon16;
		phi9 = phi_in19;
	}
	uint64_t* anon64 = (uint64_t*)0x1000020c8;
	uint64_t anon63 = _table_count(4294971193, *anon64);
	alloca1.field5 = anon55;
	uint64_t* anon65 = (uint64_t*)phi8;
	uint64_t anon66 = anon63 & 0xffffffff;
	*anon65 = anon66;
	uint64_t* anon67 = (uint64_t*)(arg1 - 360);
	uint64_t anon68 = anon55 - ((anon66 << 3) + 15 & 0xffffffff0);
	*anon67 = anon68;
	uint64_t* anon70 = (uint64_t*)0x1000020d0;
	uint64_t anon69 = _table_count(4294971258, *anon70);
	uint64_t anon71 = anon69 & 0xffffffff;
	alloca1.field8 = anon71;
	uint64_t anon72 = anon68 - ((anon71 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon72;
	uint64_t* anon74 = (uint64_t*)0x1000020c0;
	uint64_t anon73 = _table_count(4294971306, *anon74);
	alloca1.field0 = (uint32_t)anon73;
	uint64_t anon75 = anon73 & 0xffffffff;
	alloca1.field1 = anon75;
	uint64_t anon76 = _table_count(4294971353, *anon74);
	alloca1.field2 = anon76 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon64);
	_table_dump_keys(4294971413, *anon70);
	_table_dump_keys(4294971428, *anon74);
	uint32_t(* anon77)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon68, *anon65, 8, anon77);
	_qsort((uint8_t*)anon72, alloca1.field8, 8, anon77);
	uint64_t anon78 = anon72 - ((anon75 << 3) + 15 & 0xffffffff0);
	_qsort((uint8_t*)anon78, alloca1.field1, 8, anon77);
	uint64_t anon79 = _table_count(4294971516, *anon74);
	uint32_t anon80 = (uint32_t)anon79;
	if ((anon80 >> 31 | (__zext uint32_t)(anon80 == 0)) == 0)
	{
		uint64_t phi_in81;
		uint64_t phi83;
		uint64_t phi85;
		uint64_t anon82 = anon79 << 32 >> 32;
		phi_in81 = anon82 + 1;
		anon84 = anon78 - ((anon76 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi83 = anon84 + anon82 * 24 - 8;
		do
		{
			phi85 = phi_in81;
			uint64_t anon86 = _table_find(4294971555, *anon74, *(uint64_t*)(anon78 + (phi85 << 3) - 16), 0);
			uint64_t anon87 = anon86 + 8;
			*(uint64_t*)(phi83 - 16) = **(uint64_t**)anon87;
			uint64_t* anon88 = (uint64_t*)anon87;
			*(uint64_t*)(phi83 - 8) = *(uint64_t*)(*anon88 + 8);
			*(uint64_t*)phi83 = *(uint64_t*)(*anon88 + 16);
			phi_in81 = phi85 - 1;
			phi83 = phi83 - 24;
		}
		while (phi85 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon89 = (uint8_t*)0x100001c53;
		_printf(anon89);
		_puts((uint8_t*)0x100001d30);
		anon90 = (uint8_t*)0x100001d60;
		_puts(anon90);
		_print_effect_definition(4294971695, *anon67, *anon65 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
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
		_print_filepaths(4294971858, anon84, alloca1.field2);
		_print_uniform_strings(4294971877, *anon67, *anon65);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon64, 0);
	_table_free(4294971936, *anon70, 0);
	_table_free(4294971955, *anon74, *(uint64_t*)0x100002018);
	if (**anon4 == alloca1.field11)
	{
		return;
	}
	else 
	{
		___stack_chk_fail();
	}
	phi11 = phi28;
	phi_in12 = phi_in62;
	phi14 = phi14 + 1;
	*anon15 = (__zext uint32_t)phi10 << 8 | (__zext uint32_t)phi28;
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
				uint32_t phi11;
				uint64_t phi8 = phi3;
				uint32_t phi_in9 = (uint32_t)phi3;
				uint64_t phi_in10 = phi3 << 32 >> 29;
				do
				{
					phi11 = phi_in9;
					uint64_t phi12 = phi_in10;
					phi3 = phi8;
					phi_in4 = 0;
					if (phi11 < *anon5)
					{
						uint32_t anon14 = phi11 + 1;
						uint64_t anon13 = (__zext uint64_t)anon14;
						phi8 = anon13;
						phi_in9 = anon14;
						phi_in10 = phi12 + 8;
						phi3 = anon13;
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
