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
	uint64_t anon55;
	uint64_t anon82;
	uint8_t* anon85;
	uint8_t* anon86;
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
		uint24_t phi_in10 = 0;
		uint8_t phi11 = 0;
		uint64_t phi12 = arg2 & 0xffffffff;
		uint64_t phi13 = arg3;
		uint64_t phi_in14 = 1;
		uint64_t phi15 = __undefined;
		uint32_t phi16 = 0;
		do
		{
			uint64_t phi_in20;
			uint24_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			uint64_t phi28;
			uint8_t phi29;
			uint64_t phi17 = phi12;
			uint64_t phi18 = phi_in14;
			uint64_t phi19 = phi_in20;
			uint64_t anon22 = arg1 - 328;
			uint32_t* anon21 = (uint32_t*)anon22;
			*anon21 = phi16;
			uint64_t anon24 = phi18 << 3;
			struct x86_regs* anon23 = (struct x86_regs*)*(uint64_t*)(phi13 + anon24);
			_strcmp.47(anon23);
			if (((__zext uint32_t)phi_in10 << 8 | (__zext uint32_t)phi11) == 0)
			{
				phi25 = phi_in10;
				phi26 = phi13;
				phi27 = phi15 & 0xff | 0x100;
				phi28 = phi19;
				phi29 = 1;
			}
			else 
			{
				_strcmp.47(anon23);
				uint8_t* anon31 = (uint8_t*)*(uint64_t*)(phi13 + anon24);
				uint8_t* anon30 = _strrchr(anon31, 46);
				phi_in10 = 0;
				uint64_t phi32 = phi13;
				uint64_t phi33 = phi19;
				if (anon30 != null)
				{
					struct __sFILE* anon34 = _fopen(anon31, (uint8_t*)0x100001c1c);
					uint64_t anon37 = (uint64_t)anon34;
					uint32_t anon36 = (uint32_t)anon37;
					uint24_t anon35 = (uint24_t)(anon36 >> 8);
					phi_in10 = anon35;
					phi32 = phi13;
					phi33 = phi19;
					if (anon34 != null)
					{
						uint64_t anon38 = arg1 - 360;
						*(uint64_t*)anon38 = anon37;
						uint64_t phi_in39 = 4294975648;
						uint64_t phi40 = 1;
						uint64_t* phi41 = (uint64_t*)0x1000020a0;
						while (true)
						{
							uint64_t phi50;
							uint64_t anon51;
							uint64_t anon52;
							uint24_t phi53;
							uint64_t phi_in54;
							uint64_t phi42 = phi_in39;
							_strcmp.47(*(struct x86_regs**)phi41);
							uint32_t phi43 = anon36;
							if ((phi40 | 1) == 1)
							{
								phi43 = 0;
							}
							uint64_t phi44 = 0;
							uint64_t phi_in45 = phi19;
							uint64_t phi46 = 1;
							uint64_t phi47 = phi19;
							uint64_t phi_in48 = 4294975664;
							uint64_t* phi49 = (uint64_t*)0x1000020b0;
							if (phi43 != 0)
							{
								phi50 = phi_in48;
								_strcmp.47(*(struct x86_regs**)phi49);
								anon51 = phi46 | 1;
								if (anon51 == 1)
								{
									phi44 = 2;
									anon52 = phi47 & 0xffffffffffffff00 | (__zext uint64_t)(anon36 != 0);
									phi_in45 = anon52;
								}
								else 
								{
									phi44 = 2;
									phi_in45 = anon52;
									if (anon36 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi53 = anon35;
										phi_in54 = anon52;
									}
								}
							}
							if (phi43 == 0 || anon51 != 1 && phi43 != 0 && anon36 == 0 || phi43 != 0 && anon51 == 1 && anon36 == 0)
							{
								anon55 = arg1 - 400;
								_store_path(4294971047, anon55, *(uint64_t*)(alloca1.field5 + anon24), phi44);
								uint8_t* anon56 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon38);
								phi53 = 0;
								phi_in54 = phi_in45;
							}
							uint24_t phi_in57 = phi53;
							phi_in10 = phi_in57;
							phi32 = alloca1.field5;
							phi33 = phi_in54;
							_process_line(4294971083, (uint64_t)&alloca1.field10, phi44);
							phi46 = phi46 + 1;
							phi47 = anon52;
							uint64_t anon58 = phi50 + 8;
							phi_in48 = anon58;
							phi49 = (uint64_t*)anon58;
							break;
							uint64_t anon59 = phi42 + 8;
							phi_in39 = anon59;
							phi40 = phi40 + 1;
							phi41 = (uint64_t*)anon59;
						}
					}
				}
				phi26 = phi32;
				uint64_t phi_in60 = phi33;
				phi25 = phi_in10;
				phi17 = (__zext uint64_t)*anon2;
				phi27 = (__zext uint64_t)*anon21;
				phi28 = phi_in60;
				phi29 = (uint8_t)(*anon21 >> 8);
			}
			phi8 = anon22;
			phi9 = phi27;
			anon61 = (uint32_t)phi18 + 1;
			anon62 = (uint32_t)phi17;
			if (anon61 != anon62)
			{
				phi_in10 = phi25;
				phi11 = phi29;
				phi12 = phi17;
				phi13 = phi26;
				phi_in14 = phi18 + 1;
				phi15 = phi27;
				phi_in20 = phi28;
				phi16 = (__zext uint32_t)phi25 << 8 | (__zext uint32_t)phi29;
			}
		}
		while (anon61 != anon62);
	}
	uint64_t* anon64 = (uint64_t*)0x1000020c8;
	uint64_t anon63 = _table_count(4294971193, *anon64);
	alloca1.field5 = anon55;
	uint64_t* anon65 = (uint64_t*)phi8;
	uint64_t anon66 = anon63 & 0xffffffff;
	*anon65 = anon66;
	uint64_t anon67 = anon55 - ((anon66 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon67;
	uint64_t* anon69 = (uint64_t*)0x1000020d0;
	uint64_t anon68 = _table_count(4294971258, *anon69) & 0xffffffff;
	alloca1.field8 = anon68;
	uint64_t anon70 = anon67 - ((anon68 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon70;
	uint64_t* anon72 = (uint64_t*)0x1000020c0;
	uint64_t anon71 = _table_count(4294971306, *anon72);
	alloca1.field0 = (uint32_t)anon71;
	uint64_t anon73 = anon71 & 0xffffffff;
	alloca1.field1 = anon73;
	uint64_t anon74 = _table_count(4294971353, *anon72);
	alloca1.field2 = anon74 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon64, *anon64, anon67);
	_table_dump_keys(4294971413, *anon69, *anon69, anon70);
	uint64_t anon75 = anon70 - ((anon73 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon72, *anon72, anon75);
	uint32_t(* anon76)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon67, *anon65, 8, anon76);
	_qsort((uint8_t*)anon70, alloca1.field8, 8, anon76);
	_qsort((uint8_t*)anon75, alloca1.field1, 8, anon76);
	uint64_t anon77 = _table_count(4294971516, *anon72);
	uint32_t anon78 = (uint32_t)anon77;
	if ((anon78 >> 31 | (__zext uint32_t)(anon78 == 0)) == 0)
	{
		uint64_t phi_in79;
		uint64_t phi81;
		uint64_t phi83;
		uint64_t anon80 = anon77 << 32 >> 32;
		phi_in79 = anon80 + 1;
		anon82 = anon75 - ((anon74 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi81 = anon82 + anon80 * 24 - 8;
		do
		{
			phi83 = phi_in79;
			uint64_t anon84 = _table_find(4294971555, *anon72, *(uint64_t*)(anon75 + (phi83 << 3) - 16), 0) + 8;
			*(uint64_t*)(phi81 - 16) = **(uint64_t**)anon84;
			*(uint64_t*)(phi81 - 8) = *(uint64_t*)(*(uint64_t*)anon84 + 8);
			*(uint64_t*)phi81 = *(uint64_t*)(*(uint64_t*)anon84 + 16);
			phi_in79 = phi83 - 1;
			phi81 = phi81 - 24;
		}
		while (phi83 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon85 = (uint8_t*)0x100001c53;
		_printf(anon85);
		_puts((uint8_t*)0x100001d30);
		anon86 = (uint8_t*)0x100001d60;
		_puts(anon86);
		_print_effect_definition(4294971695, alloca1.field4, *anon65 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon75, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon85);
		_puts(anon86);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon82, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon65);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon64, 0);
	_table_free(4294971936, *anon69, 0);
	_table_free(4294971955, *anon72, *(uint64_t*)0x100002018);
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
		uint64_t phi_in13 = phi3;
		uint32_t phi_in14 = (uint32_t)phi3;
		uint64_t phi15 = phi3 << 32 >> 29;
		do
		{
			phi16 = phi_in14;
			phi3 = phi_in13;
			phi_in4 = 0;
			if (phi16 < *anon5)
			{
				uint32_t anon18 = phi16 + 1;
				uint64_t anon17 = (__zext uint64_t)anon18;
				phi3 = anon17;
				phi_in4 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15);
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi15) == 0)
				{
					phi_in13 = anon17;
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
	uint32_t phi2;
	uint64_t phi1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi2 = *anon3;
	if (*anon3 != 0)
	{
		while (true)
		{
			uint64_t phi6;
			uint64_t* anon4 = (uint64_t*)(arg1 + 8);
			uint64_t anon5 = phi1 << 3;
			if (*(uint64_t*)(*anon4 + anon5) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				phi6 = *anon4 + anon5;
				if (*(uint64_t*)phi6 == 0)
				{
					_puts((uint8_t*)0x100001db1);
					phi2 = *anon3;
				}
			}
			uint64_t anon7 = phi1 + 1;
			phi1 = anon7;
			_printf((uint8_t*)0x100001dac);
			phi6 = *(uint64_t*)phi6 + 16;
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
	uint32_t phi_in9;
	uint64_t phi16;
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
		phi_in9 = phi_in1;
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
			phi_in9 = anon10;
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
		uint64_t* phi14 = phi4;
		uint64_t phi15 = (__sext int64_t)phi7;
		phi16 = phi_in6;
		if (phi16 != 0)
		{
			uint64_t* anon19;
			*(uint64_t*)((phi15 << 3) + arg3) = *phi14;
			if (*(uint64_t*)(phi16 + 16) == 0)
			{
				uint64_t* phi18;
				uint32_t phi22;
				uint64_t phi_in17 = (__sext int64_t)phi_in9 << 3;
				anon19 = (uint64_t*)*(uint64_t*)(phi16 + 16);
				phi18 = anon19;
				do
				{
					uint32_t phi20 = phi_in13;
					uint64_t phi21 = phi_in17;
					phi22 = phi_in9;
					phi_in6 = 0;
					uint32_t anon23 = (uint32_t)phi15 + 1;
					phi7 = anon23;
					phi8 = phi20;
					phi_in9 = phi22;
					phi4 = phi18;
					if (phi22 < *(uint32_t*)(arg2 + 4))
					{
						phi_in6 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21);
						phi7 = anon23;
						uint32_t anon24 = phi20 + 1;
						phi8 = anon24;
						phi_in9 = anon24;
						uint64_t* anon25 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21);
						phi4 = anon25;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21) == 0)
						{
							phi_in13 = anon24;
							phi_in17 = phi21 + 8;
							phi_in9 = anon24;
							phi18 = anon25;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi22 < *(uint32_t*)(arg2 + 4));
			}
			else 
			{
				phi_in6 = *(uint64_t*)(phi16 + 16);
				phi14 = anon19;
				phi15 = phi15 + 1;
			}
		}
	}
	while (phi16 != 0);
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
