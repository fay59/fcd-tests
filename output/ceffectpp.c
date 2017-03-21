#include "tests/bin/ceffectpp.h"

void _store_path(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi4;
	uint8_t* anon2 = (uint8_t*)arg2;
	uint8_t* anon1 = (uint8_t*)(arg1 - 64 - (_strlen(anon2) + 15 & 0xfffffffffffffff0));
	_strcpy(anon1, anon2);
	uint8_t anon3 = *_strrchr(anon1, 46);
	anon3 = 0;
	uint64_t* anon5 = (uint64_t*)(_table_find(4294970183, *(uint64_t*)0x1000020c0, (uint64_t)_strrchr(anon1, 47) + 1, 1) + 8);
	phi4 = *anon5;
	if (*anon5 == 0)
	{
		uint64_t anon6 = (uint64_t)_calloc(3, 8);
		*anon5 = anon6;
		phi4 = anon6;
	}
	*(uint64_t*)(phi4 + (arg3 << 32 >> 29)) = arg2;
	return;
}
void _process_line(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint8_t* anon2 = (uint8_t*)arg1;
	uint8_t* anon1 = _strstr(anon2, (uint8_t*)0x100001c00);
	if (anon1 != null)
	{
		uint8_t anon3 = *anon1;
		anon3 = 0;
	}
	uint8_t* anon4 = _strstr(anon2, (uint8_t*)0x100001c03);
	if (anon4 != null)
	{
		uint8_t anon5 = *anon4;
		anon5 = 0;
	}
	uint8_t* anon7 = (uint8_t*)0x100001c06;
	uint8_t* anon6 = _strtok(anon2, anon7);
	if (anon6 != null)
	{
		struct x86_regs* anon8 = (struct x86_regs*)anon6;
		_strcmp.47(anon8);
		uint64_t* phi9 = (uint64_t*)0x1000020c8;
		uint64_t anon11 = (uint64_t)anon6;
		uint32_t anon10 = (uint32_t)anon11;
		if (anon10 != 0)
		{
			_strcmp.47(anon8);
			phi9 = (uint64_t*)0x1000020d0;
		}
		if ((anon10 == 0 || anon10 != 0 && ((anon11 | arg2) & 0xff) == 0) && *phi9 != 0)
		{
			_strtok(null, anon7);
			uint8_t* anon12 = _strtok(null, anon7);
			if (anon12 != null)
			{
				uint8_t phi_in16;
				uint64_t phi13 = 0;
				uint64_t phi_in14 = (uint64_t)anon12;
				uint32_t phi_in15 = 0;
				uint8_t anon17 = *anon12;
				phi_in16 = anon17;
				if (anon17 != 0)
				{
					uint64_t anon21;
					uint32_t anon22;
					do
					{
						uint64_t phi18 = phi_in14;
						uint32_t phi19 = phi_in15;
						uint8_t phi20 = phi_in16;
						anon21 = phi18 + 1;
						phi_in14 = anon21;
						anon22 = phi19 * 31 + (__zext uint32_t)(phi20 & 0xf);
						phi_in15 = anon22;
						phi_in16 = *(uint8_t*)anon21;
					}
					while (*(uint8_t*)anon21 != 0);
					phi13 = (__zext uint64_t)(anon22 & 0xff);
				}
				while (true)
				{
					uint64_t phi_in23;
					uint64_t phi26;
					uint32_t anon27;
					uint64_t* anon24 = (uint64_t*)(*phi9 + 8);
					uint64_t anon25 = phi13 % (__zext uint64_t)*(uint32_t*)(*phi9 + 4) << 3;
					phi_in23 = *(uint64_t*)(*anon24 + anon25);
					if (*(uint64_t*)(*anon24 + anon25) != 0)
					{
						phi26 = phi_in23;
						_strcmp.47((struct x86_regs*)anon12);
						anon27 = (uint32_t)*anon24;
						if (anon27 == 0)
						{
							break;
						}
						else 
						{
							phi_in23 = *(uint64_t*)(phi26 + 16);
						}
					}
					if (*(uint64_t*)(*anon24 + anon25) == 0 || anon27 != 0 && *(uint64_t*)(*anon24 + anon25) != 0 && *(uint64_t*)(phi26 + 16) == 0)
					{
						uint8_t* anon28 = _strdup(anon12);
						uint8_t* anon29 = _malloc(24);
						*(uint64_t*)anon29 = (uint64_t)anon28;
						uint64_t anon30 = (uint64_t)anon29;
						*(uint64_t*)(anon30 + 8) = 0;
						*(uint64_t*)(anon30 + 16) = *(uint64_t*)(*anon24 + anon25);
						*(uint64_t*)(*anon24 + anon25) = anon30;
						uint32_t* anon31 = (uint32_t*)*phi9;
						*anon31 = *anon31 + 1;
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
	uint64_t anon53;
	uint64_t anon79;
	uint8_t* anon82;
	uint8_t* anon83;
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
		uint32_t anon58;
		uint32_t anon59;
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
			uint64_t phi_in23;
			uint64_t phi26;
			uint64_t phi27;
			uint24_t phi18 = phi10;
			uint64_t phi_in19 = phi12;
			uint64_t phi_in20 = phi13;
			uint64_t phi21 = phi_in14;
			uint64_t phi22 = phi_in23;
			uint64_t anon25 = phi21 << 3;
			struct x86_regs* anon24 = (struct x86_regs*)*(uint64_t*)(phi_in20 + anon25);
			_strcmp.47(anon24);
			if (((__zext uint32_t)phi18 << 8 | (__zext uint32_t)phi11) == 0)
			{
				phi26 = phi_in19;
				phi9 = phi15 & 0xff | 0x100;
				phi27 = phi22;
				phi11 = 1;
			}
			else 
			{
				_strcmp.47(anon24);
				uint8_t* anon29 = (uint8_t*)*(uint64_t*)(phi_in20 + anon25);
				uint8_t* anon28 = _strrchr(anon29, 46);
				uint24_t phi_in30 = 0;
				if (anon28 != null)
				{
					struct __sFILE* anon34 = _fopen(anon29, (uint8_t*)0x100001c1c);
					uint64_t anon33 = (uint64_t)anon34;
					uint32_t anon32 = (uint32_t)anon33;
					uint24_t anon31 = (uint24_t)(anon32 >> 8);
					phi_in30 = anon31;
					if (anon34 != null)
					{
						uint64_t anon35 = arg1 - 360;
						*(uint64_t*)anon35 = anon33;
						uint64_t phi_in36 = 4294975648;
						uint64_t phi37 = 1;
						uint64_t* phi38 = (uint64_t*)0x1000020a0;
						while (true)
						{
							uint64_t phi47;
							uint64_t anon48;
							uint64_t anon49;
							uint24_t phi50;
							uint64_t phi51;
							uint64_t phi39 = phi_in36;
							_strcmp.47(*(struct x86_regs**)phi38);
							uint32_t phi40 = anon32;
							if ((phi37 | 1) == 1)
							{
								phi40 = 0;
							}
							uint64_t phi41 = 0;
							uint64_t phi42 = phi22;
							uint64_t phi43 = 1;
							uint64_t phi44 = phi22;
							uint64_t phi_in45 = 4294975664;
							uint64_t* phi46 = (uint64_t*)0x1000020b0;
							if (phi40 != 0)
							{
								phi47 = phi_in45;
								_strcmp.47(*(struct x86_regs**)phi46);
								anon48 = phi43 | 1;
								if (anon48 == 1)
								{
									phi41 = 2;
									anon49 = phi44 & 0xffffffffffffff00 | (__zext uint64_t)(anon32 != 0);
									phi42 = anon49;
								}
								else 
								{
									phi41 = 2;
									phi42 = anon49;
									if (anon32 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi50 = anon31;
										phi51 = anon49;
									}
								}
							}
							if (phi40 == 0 || anon48 != 1 && phi40 != 0 && anon32 == 0 || phi40 != 0 && anon48 == 1 && anon32 == 0)
							{
								uint64_t phi_in52 = phi42;
								anon53 = arg1 - 400;
								_store_path(4294971047, anon53, *(uint64_t*)(alloca1.field5 + anon25), phi41);
								uint8_t* anon54 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon35);
								phi50 = 0;
								phi51 = phi_in52;
							}
							phi_in30 = phi50;
							phi22 = phi51;
							phi_in20 = alloca1.field5;
							_process_line(4294971083, (uint64_t)&alloca1.field10, phi41);
							phi43 = phi43 + 1;
							phi44 = anon49;
							uint64_t anon55 = phi47 + 8;
							phi_in45 = anon55;
							phi46 = (uint64_t*)anon55;
							break;
							uint64_t anon56 = phi39 + 8;
							phi_in36 = anon56;
							phi37 = phi37 + 1;
							phi38 = (uint64_t*)anon56;
						}
					}
				}
				uint64_t phi_in57 = phi22;
				phi18 = phi_in30;
				phi26 = (__zext uint64_t)*anon2;
				phi9 = (__zext uint64_t)*anon16;
				phi27 = phi_in57;
				phi11 = (uint8_t)(*anon16 >> 8);
			}
			phi8 = anon17;
			anon58 = (uint32_t)phi21 + 1;
			anon59 = (uint32_t)phi26;
			if (anon58 != anon59)
			{
				phi10 = phi18;
				phi12 = phi26;
				phi13 = phi_in20;
				phi_in14 = phi21 + 1;
				phi15 = phi9;
				phi_in23 = phi27;
				*anon16 = (__zext uint32_t)phi18 << 8 | (__zext uint32_t)phi11;
			}
		}
		while (anon58 != anon59);
	}
	uint64_t* anon61 = (uint64_t*)0x1000020c8;
	uint64_t anon60 = _table_count(4294971193, *anon61);
	alloca1.field5 = anon53;
	uint64_t* anon62 = (uint64_t*)phi8;
	uint64_t anon63 = anon60 & 0xffffffff;
	*anon62 = anon63;
	uint64_t anon64 = anon53 - ((anon63 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon64;
	uint64_t* anon66 = (uint64_t*)0x1000020d0;
	uint64_t anon65 = _table_count(4294971258, *anon66) & 0xffffffff;
	alloca1.field8 = anon65;
	uint64_t anon67 = anon64 - ((anon65 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon67;
	uint64_t* anon69 = (uint64_t*)0x1000020c0;
	uint64_t anon68 = _table_count(4294971306, *anon69);
	alloca1.field0 = (uint32_t)anon68;
	uint64_t anon70 = anon68 & 0xffffffff;
	alloca1.field1 = anon70;
	uint64_t anon71 = _table_count(4294971353, *anon69);
	alloca1.field2 = anon71 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon61, *anon61, anon64);
	_table_dump_keys(4294971413, *anon66, *anon66, anon67);
	uint64_t anon72 = anon67 - ((anon70 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon69, *anon69, anon72);
	uint32_t(* anon73)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon64, *anon62, 8, anon73);
	_qsort((uint8_t*)anon67, alloca1.field8, 8, anon73);
	_qsort((uint8_t*)anon72, alloca1.field1, 8, anon73);
	uint64_t anon75 = _table_count(4294971516, *anon69);
	uint32_t anon74 = (uint32_t)anon75;
	if ((anon74 >> 31 | (__zext uint32_t)(anon74 == 0)) == 0)
	{
		uint64_t phi_in76;
		uint64_t phi78;
		uint64_t phi80;
		uint64_t anon77 = anon75 << 32 >> 32;
		phi_in76 = anon77 + 1;
		anon79 = anon72 - ((anon71 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi78 = anon79 + anon77 * 24 - 8;
		do
		{
			phi80 = phi_in76;
			uint64_t anon81 = _table_find(4294971555, *anon69, *(uint64_t*)(anon72 + (phi80 << 3) - 16), 0) + 8;
			*(uint64_t*)(phi78 - 16) = **(uint64_t**)anon81;
			*(uint64_t*)(phi78 - 8) = *(uint64_t*)(*(uint64_t*)anon81 + 8);
			*(uint64_t*)phi78 = *(uint64_t*)(*(uint64_t*)anon81 + 16);
			phi_in76 = phi80 - 1;
			phi78 = phi78 - 24;
		}
		while (phi80 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon82 = (uint8_t*)0x100001c53;
		_printf(anon82);
		_puts((uint8_t*)0x100001d30);
		anon83 = (uint8_t*)0x100001d60;
		_puts(anon83);
		_print_effect_definition(4294971695, alloca1.field4, *anon62 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon72, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon82);
		_puts(anon83);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon79, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon62);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon61, 0);
	_table_free(4294971936, *anon66, 0);
	_table_free(4294971955, *anon69, *(uint64_t*)0x100002018);
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
	uint64_t phi1;
	uint8_t* anon3 = _malloc(24);
	uint64_t anon2 = (uint64_t)anon3;
	phi1 = anon2;
	if (anon3 != null)
	{
		*(uint32_t*)anon3 = 0;
		*(uint32_t*)(anon2 + 4) = (uint32_t)arg1;
		uint8_t* anon4 = _calloc(arg1 << 32 >> 32, 8);
		*(uint64_t*)(anon2 + 8) = (uint64_t)anon4;
		phi1 = anon2;
		if (anon4 == null)
		{
			_free.56((struct x86_regs*)anon3);
			phi1 = 0;
		}
	}
	return phi1;
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
				uint64_t phi10 = phi3 << 32 >> 29;
				do
				{
					phi11 = phi_in9;
					phi3 = phi8;
					phi_in4 = 0;
					if (phi11 < *anon5)
					{
						uint32_t anon13 = phi11 + 1;
						uint64_t anon12 = (__zext uint64_t)anon13;
						phi3 = anon12;
						phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi10);
						if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi10) == 0)
						{
							phi8 = anon12;
							phi_in9 = anon13;
							phi10 = phi10 + 8;
						}
						else 
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
		uint64_t phi15 = phi3 << 32 >> 29;
		do
		{
			phi3 = phi13;
			phi16 = phi_in14;
			phi_in4 = 0;
			if (phi16 < *anon5)
			{
				uint32_t anon18 = phi16 + 1;
				uint64_t anon17 = (__zext uint64_t)anon18;
				phi3 = anon17;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15);
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15) == 0)
				{
					phi13 = anon17;
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
	_free.56(*(struct x86_regs**)phi9);
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
	uint32_t phi_in2;
	uint64_t phi1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi_in2 = *anon3;
	if (*anon3 != 0)
	{
		while (true)
		{
			uint64_t phi7;
			uint32_t phi4 = phi_in2;
			uint64_t* anon5 = (uint64_t*)(arg1 + 8);
			uint64_t anon6 = phi1 << 3;
			if (*(uint64_t*)(*anon5 + anon6) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				phi7 = *anon5 + anon6;
				if (*(uint64_t*)phi7 == 0)
				{
					_puts((uint8_t*)0x100001db1);
					phi4 = *anon3;
				}
			}
			uint64_t anon8 = phi1 + 1;
			phi1 = anon8;
			phi_in2 = phi4;
			_printf((uint8_t*)0x100001dac);
			phi7 = *(uint64_t*)phi7 + 16;
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
	uint64_t* phi4;
	uint64_t phi5;
	uint64_t phi_in6;
	uint32_t phi7;
	uint32_t phi8;
	uint32_t phi9;
	uint64_t phi17;
	uint32_t phi_in1 = 0;
	uint64_t* phi2 = null;
	uint64_t phi_in3 = 0;
	do
	{
		phi4 = phi2;
		phi5 = phi_in3;
		phi_in6 = 0;
		phi7 = 0;
		phi8 = phi_in1;
		phi9 = phi_in1;
		if (phi5 < (__zext uint64_t)*(uint32_t*)(arg2 + 4))
		{
			uint64_t anon11 = phi5 + 1;
			uint32_t anon10 = (uint32_t)anon11;
			phi_in1 = anon10;
			uint64_t* anon12 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi5 << 3));
			phi2 = anon12;
			phi_in3 = anon11;
			phi_in6 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi5 << 3));
			phi7 = 0;
			phi8 = anon10;
			phi9 = anon10;
			phi4 = anon12;
			if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi5 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi5 < (__zext uint64_t)*(uint32_t*)(arg2 + 4));
	do
	{
		uint32_t phi_in13 = phi8;
		uint32_t phi_in14 = phi9;
		uint64_t* phi15 = phi4;
		uint64_t phi16 = (__sext int64_t)phi7;
		phi17 = phi_in6;
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
					uint32_t phi21 = phi_in13;
					uint64_t phi22 = phi_in18;
					phi23 = phi_in14;
					phi_in6 = 0;
					uint32_t anon24 = (uint32_t)phi16 + 1;
					phi7 = anon24;
					phi8 = phi21;
					phi9 = phi23;
					phi4 = phi19;
					if (phi23 < *(uint32_t*)(arg2 + 4))
					{
						phi_in6 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22);
						phi7 = anon24;
						uint32_t anon25 = phi21 + 1;
						phi8 = anon25;
						phi9 = anon25;
						uint64_t* anon26 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22);
						phi4 = anon26;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi22) == 0)
						{
							phi_in13 = anon25;
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
				phi_in6 = *(uint64_t*)(phi17 + 16);
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
