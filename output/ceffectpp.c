#include "tests/bin/ceffectpp.h"

void _store_path(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi3;
	uint8_t* anon2 = (uint8_t*)arg2;
	uint8_t* anon1 = (uint8_t*)(arg1 - 64 - (_strlen(anon2) + 15 & 0xfffffffffffffff0));
	_strcpy(anon1, anon2);
	*_strrchr(anon1, 46) = 0;
	uint64_t* anon4 = (uint64_t*)(_table_find(4294970183, *(uint64_t*)0x1000020c0, (uint64_t)_strrchr(anon1, 47) + 1, 1) + 8);
	phi3 = *anon4;
	if (*anon4 == 0)
	{
		uint64_t anon5 = (uint64_t)_calloc(3, 8);
		*anon4 = anon5;
		phi3 = anon5;
	}
	*(uint64_t*)(phi3 + (arg3 << 32 >> 29)) = arg2;
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
		if (anon8 == 0 || ((anon9 | arg2) & 0xff) == 0)
		{
			if (*phi7 != 0)
			{
				_strtok(null, anon5);
				uint8_t* anon10 = _strtok(null, anon5);
				if (anon10 != null)
				{
					uint8_t phi_in14;
					uint64_t phi11 = 0;
					uint64_t phi12 = (uint64_t)anon10;
					uint32_t phi13 = 0;
					uint8_t anon15 = *anon10;
					phi_in14 = anon15;
					if (anon15 != 0)
					{
						uint64_t anon17;
						uint32_t anon18;
						do
						{
							uint8_t phi16 = phi_in14;
							anon17 = phi12 + 1;
							phi12 = anon17;
							anon18 = phi13 * 31 + (__zext uint32_t)(phi16 & 0xf);
							phi13 = anon18;
							phi_in14 = *(uint8_t*)anon17;
						}
						while (*(uint8_t*)anon17 != 0);
						phi11 = (__zext uint64_t)(anon18 & 0xff);
					}
					while (true)
					{
						uint64_t phi19;
						uint32_t anon22;
						uint64_t* anon20 = (uint64_t*)(*phi7 + 8);
						uint64_t anon21 = phi11 % (__zext uint64_t)*(uint32_t*)(*phi7 + 4) << 3;
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
						if (*(uint64_t*)(*anon20 + anon21) == 0 || anon22 != 0 && *(uint64_t*)(phi19 + 16) == 0)
						{
							uint8_t* anon23 = _strdup(anon10);
							uint8_t* anon24 = _malloc(24);
							*(uint64_t*)anon24 = (uint64_t)anon23;
							uint64_t anon25 = (uint64_t)anon24;
							*(uint64_t*)(anon25 + 8) = 0;
							*(uint64_t*)(anon25 + 16) = *(uint64_t*)(*anon20 + anon21);
							*(uint64_t*)(*anon20 + anon21) = anon25;
							uint32_t* anon26 = (uint32_t*)*phi7;
							*anon26 = *anon26 + 1;
							break;
						}
					}
				}
			}
		}
	}
	return;
}
void _type_from_ext(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi4;
	uint64_t phi5;
	uint64_t* phi6;
	uint64_t phi1 = 4294975648;
	uint64_t phi2 = 1;
	uint64_t* phi3 = (uint64_t*)0x1000020a0;
	do
	{
		_strcmp.47(*(struct x86_regs**)phi3);
		phi4 = 1;
		phi5 = 4294975664;
		phi6 = (uint64_t*)0x1000020b0;
		if (phi2 < 2)
		{
			uint64_t anon7 = phi1 + 8;
			phi1 = anon7;
			phi2 = phi2 + 1;
			phi3 = (uint64_t*)anon7;
		}
	}
	while (phi2 < 2);
	do
	{
		_strcmp.47(*(struct x86_regs**)phi6);
		if ((phi4 | 1) == 1)
		{
			phi4 = phi4 + 1;
			uint64_t anon8 = phi5 + 8;
			phi5 = anon8;
			phi6 = (uint64_t*)anon8;
		}
	}
	while ((phi4 | 1) == 1);
	_strcmp.47((struct x86_regs*)0x100001cd8);
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi8;
	uint64_t phi9;
	uint64_t anon49;
	uint64_t anon73;
	uint8_t* anon75;
	uint8_t* anon76;
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
		uint32_t anon52;
		uint32_t anon53;
		*(uint32_t*)(arg1 - 340) = 0;
		uint24_t phi10 = 0;
		uint8_t phi11 = 0;
		uint64_t phi12 = arg2 & 0xffffffff;
		uint64_t phi_in13 = arg3;
		uint64_t phi14 = 1;
		uint64_t phi15 = __undefined;
		uint64_t anon17 = arg1 - 328;
		uint32_t* anon16 = (uint32_t*)anon17;
		*anon16 = 0;
		do
		{
			uint64_t phi_in22;
			uint64_t phi25;
			uint8_t phi26;
			uint24_t phi18 = phi10;
			uint64_t phi_in19 = phi12;
			uint64_t phi_in20 = phi_in13;
			uint64_t phi21 = phi_in22;
			uint64_t anon24 = phi14 << 3;
			struct x86_regs* anon23 = (struct x86_regs*)*(uint64_t*)(phi_in20 + anon24);
			_strcmp.47(anon23);
			if (((__zext uint32_t)phi18 << 8 | (__zext uint32_t)phi11) == 0)
			{
				phi12 = phi_in19;
				phi25 = phi_in20;
				phi15 = phi15 & 0xff | 0x100;
				phi26 = 1;
			}
			else 
			{
				_strcmp.47(anon23);
				uint8_t* anon28 = (uint8_t*)*(uint64_t*)(phi_in20 + anon24);
				uint8_t* anon27 = _strrchr(anon28, 46);
				phi18 = 0;
				phi_in13 = phi_in20;
				uint64_t phi29 = phi21;
				if (anon27 != null)
				{
					struct __sFILE* anon33 = _fopen(anon28, (uint8_t*)0x100001c1c);
					uint64_t anon32 = (uint64_t)anon33;
					uint32_t anon31 = (uint32_t)anon32;
					uint24_t anon30 = (uint24_t)(anon31 >> 8);
					phi18 = anon30;
					phi_in13 = phi_in20;
					phi29 = phi21;
					if (anon33 != null)
					{
						uint32_t phi38;
						uint24_t phi_in47;
						uint64_t anon34 = arg1 - 360;
						*(uint64_t*)anon34 = anon32;
						uint64_t phi35 = 4294975648;
						uint64_t phi36 = 1;
						uint64_t* phi37 = (uint64_t*)0x1000020a0;
						do
						{
							_strcmp.47(*(struct x86_regs**)phi37);
							phi38 = anon31;
							if ((phi36 | 1) == 1)
							{
								phi38 = 0;
								if (anon31 == 0)
								{
									break;
								}
								else 
								{
									uint64_t anon39 = phi35 + 8;
									phi35 = anon39;
									phi36 = phi36 + 1;
									phi37 = (uint64_t*)anon39;
								}
							}
						}
						while ((phi36 | 1) == 1);
						while (true)
						{
							uint64_t anon46;
							uint64_t phi40 = 0;
							uint64_t phi41 = phi21;
							uint64_t phi42 = 1;
							uint64_t phi43 = phi21;
							uint64_t phi44 = 4294975664;
							uint64_t* phi45 = (uint64_t*)0x1000020b0;
							if (phi38 != 0)
							{
								_strcmp.47(*(struct x86_regs**)phi45);
								if ((phi42 | 1) == 1)
								{
									phi40 = 2;
									anon46 = phi43 & 0xffffffffffffff00 | (__zext uint64_t)(anon31 != 0);
									phi41 = anon46;
								}
								else 
								{
									phi40 = 2;
									phi41 = anon46;
									if (anon31 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi_in47 = anon30;
										phi29 = anon46;
										break;
									}
								}
							}
							if (anon31 == 0 || phi38 == 0)
							{
								uint8_t* anon50;
								uint64_t phi_in48 = phi41;
								anon49 = arg1 - 400;
								_store_path(4294971047, anon49, *(uint64_t*)(alloca1.field5 + anon24), phi40);
								do
								{
									anon50 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon34);
									phi_in47 = 0;
									phi29 = phi_in48;
									if (anon50 != null)
									{
										_process_line(4294971083, (uint64_t)&alloca1.field10, phi40);
									}
								}
								while (anon50 != null);
								break;
							}
							if (phi38 != 0 && (phi42 | 1) == 1)
							{
								if (anon31 != 0)
								{
									phi42 = phi42 + 1;
									phi43 = anon46;
									uint64_t anon51 = phi44 + 8;
									phi44 = anon51;
									phi45 = (uint64_t*)anon51;
								}
							}
						}
						phi18 = phi_in47;
						phi_in13 = alloca1.field5;
					}
				}
				phi21 = phi29;
				phi12 = (__zext uint64_t)*anon2;
				phi25 = phi_in13;
				phi15 = (__zext uint64_t)*anon16;
				phi26 = (uint8_t)(*anon16 >> 8);
			}
			phi8 = anon17;
			phi9 = phi15;
			anon52 = (uint32_t)phi14 + 1;
			anon53 = (uint32_t)phi12;
			if (anon52 != anon53)
			{
				phi10 = phi18;
				phi11 = phi26;
				phi_in13 = phi25;
				phi14 = phi14 + 1;
				phi_in22 = phi21;
				*anon16 = (__zext uint32_t)phi18 << 8 | (__zext uint32_t)phi26;
			}
		}
		while (anon52 != anon53);
	}
	uint64_t* anon55 = (uint64_t*)0x1000020c8;
	uint64_t anon54 = _table_count(4294971193, *anon55);
	alloca1.field5 = anon49;
	uint64_t* anon56 = (uint64_t*)phi8;
	uint64_t anon57 = anon54 & 0xffffffff;
	*anon56 = anon57;
	uint64_t anon58 = anon49 - ((anon57 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon58;
	uint64_t* anon60 = (uint64_t*)0x1000020d0;
	uint64_t anon59 = _table_count(4294971258, *anon60) & 0xffffffff;
	alloca1.field8 = anon59;
	uint64_t anon61 = anon58 - ((anon59 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon61;
	uint64_t* anon63 = (uint64_t*)0x1000020c0;
	uint64_t anon62 = _table_count(4294971306, *anon63);
	alloca1.field0 = (uint32_t)anon62;
	uint64_t anon64 = anon62 & 0xffffffff;
	alloca1.field1 = anon64;
	uint64_t anon65 = _table_count(4294971353, *anon63);
	alloca1.field2 = anon65 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon55, *anon55, anon58);
	_table_dump_keys(4294971413, *anon60, *anon60, anon61);
	uint64_t anon66 = anon61 - ((anon64 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon63, *anon63, anon66);
	uint32_t(* anon67)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon58, *anon56, 8, anon67);
	_qsort((uint8_t*)anon61, alloca1.field8, 8, anon67);
	_qsort((uint8_t*)anon66, alloca1.field1, 8, anon67);
	uint64_t anon69 = _table_count(4294971516, *anon63);
	uint32_t anon68 = (uint32_t)anon69;
	if ((anon68 >> 31 | (__zext uint32_t)(anon68 == 0)) == 0)
	{
		uint64_t phi70;
		uint64_t phi72;
		uint64_t anon71 = anon69 << 32 >> 32;
		phi70 = anon71 + 1;
		anon73 = anon66 - ((anon65 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi72 = anon73 + anon71 * 24 - 8;
		do
		{
			uint64_t anon74 = _table_find(4294971555, *anon63, *(uint64_t*)(anon66 + (phi70 << 3) - 16), 0) + 8;
			*(uint64_t*)(phi72 - 16) = **(uint64_t**)anon74;
			*(uint64_t*)(phi72 - 8) = *(uint64_t*)(*(uint64_t*)anon74 + 8);
			*(uint64_t*)phi72 = *(uint64_t*)(*(uint64_t*)anon74 + 16);
			phi70 = phi70 - 1;
			phi72 = phi72 - 24;
		}
		while (phi70 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon75 = (uint8_t*)0x100001c53;
		_printf(anon75);
		_puts((uint8_t*)0x100001d30);
		anon76 = (uint8_t*)0x100001d60;
		_puts(anon76);
		_print_effect_definition(4294971695, alloca1.field4, *anon56 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon66, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon75);
		_puts(anon76);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon73, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon56);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon55, 0);
	_table_free(4294971936, *anon60, 0);
	_table_free(4294971955, *anon63, *(uint64_t*)0x100002018);
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
	uint64_t phi1 = arg1;
	uint32_t phi2 = 0;
	uint8_t phi3 = *(uint8_t*)arg1;
	if (*(uint8_t*)arg1 != 0)
	{
		uint64_t anon4;
		do
		{
			anon4 = phi1 + 1;
			phi1 = anon4;
			phi2 = phi2 * 31 + (__zext uint32_t)phi3;
			phi3 = *(uint8_t*)anon4;
		}
		while (*(uint8_t*)anon4 != 0);
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
	uint64_t phi_in2;
	uint64_t phi_in3;
	uint32_t* anon4;
	uint64_t phi6;
	uint64_t phi1 = 0;
	do
	{
		phi_in2 = phi1;
		phi_in3 = 0;
		anon4 = (uint32_t*)(arg1 + 4);
		if (phi1 < (__zext uint64_t)*anon4)
		{
			uint64_t anon5 = phi1 + 1;
			phi1 = anon5;
			phi_in2 = anon5;
			phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi1 << 3));
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi1 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi1 < (__zext uint64_t)*anon4);
	do
	{
		phi6 = phi_in3;
		if (phi6 != 0)
		{
			((void(*)())arg2)();
			phi_in3 = *(uint64_t*)(phi6 + 16);
			if (*(uint64_t*)(phi6 + 16) == 0)
			{
				uint64_t phi7 = phi_in2;
				uint32_t phi8 = (uint32_t)phi_in2;
				uint64_t phi9 = phi_in2 << 32 >> 29;
				do
				{
					phi_in2 = phi7;
					phi_in3 = 0;
					if (phi8 < *anon4)
					{
						uint32_t anon11 = phi8 + 1;
						uint64_t anon10 = (__zext uint64_t)anon11;
						phi_in2 = anon10;
						phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi9);
						if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi9) == 0)
						{
							phi7 = anon10;
							phi8 = anon11;
							phi9 = phi9 + 8;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi8 < *anon4);
			}
		}
	}
	while (phi6 != 0);
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
	if (*anon1 == 0 || *(uint64_t*)(*anon1 + 16) == 0)
	{
		uint32_t phi2;
		uint32_t* anon3 = (uint32_t*)(arg1 + 16);
		phi2 = *anon3;
		uint64_t phi4 = (__sext int64_t)*anon3 << 3;
		do
		{
			*anon1 = *(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi4);
			uint32_t anon5 = phi2 + 1;
			*anon3 = anon5;
			if (*(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi4) == 0)
			{
				phi2 = anon5;
				phi4 = phi4 + 8;
			}
		}
		while (phi2 < *(uint32_t*)(*(uint64_t*)arg1 + 4) && *(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi4) == 0);
	}
	return;
}
void _table_free(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t* anon4;
	uint64_t phi13;
	if (arg2 != 0)
	{
		uint64_t phi2;
		uint64_t phi_in3;
		uint64_t phi7;
		uint64_t phi1 = 0;
		do
		{
			phi2 = phi1;
			phi_in3 = 0;
			anon4 = (uint32_t*)(arg1 + 4);
			if (phi1 < (__zext uint64_t)*anon4)
			{
				uint64_t anon5 = phi1 + 1;
				phi1 = anon5;
				phi2 = anon5;
				phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi1 << 3));
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi1 << 3)) != 0)
				{
					break;
				}
			}
		}
		while (phi1 < (__zext uint64_t)*anon4);
		do
		{
			uint64_t phi_in6 = phi2;
			phi7 = phi_in3;
			if (phi7 != 0)
			{
				((void(*)(uint64_t))arg2)(*(uint64_t*)(phi7 + 8));
				phi2 = phi_in6;
				phi_in3 = *(uint64_t*)(phi7 + 16);
				if (*(uint64_t*)(phi7 + 16) == 0)
				{
					phi2 = phi_in6;
					uint32_t phi8 = (uint32_t)phi_in6;
					uint64_t phi9 = phi_in6 << 32 >> 29;
					do
					{
						phi_in3 = 0;
						if (phi8 < *anon4)
						{
							uint32_t anon11 = phi8 + 1;
							uint64_t anon10 = (__zext uint64_t)anon11;
							phi2 = anon10;
							phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi9);
							if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi9) == 0)
							{
								phi2 = anon10;
								phi8 = anon11;
								phi9 = phi9 + 8;
							}
							else 
							{
								break;
							}
						}
					}
					while (phi8 < *anon4);
				}
			}
		}
		while (phi7 != 0);
	}
	uint64_t phi12 = 0;
	if (*anon4 == 0)
	{
		phi13 = arg1 + 8;
	}
	else 
	{
		uint64_t anon15;
		do
		{
			uint64_t anon14 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon14 + (phi12 << 3)));
			anon15 = phi12 + 1;
			phi12 = anon15;
			phi13 = anon14;
		}
		while (anon15 < (__zext uint64_t)*anon4);
	}
	_free.56(*(struct x86_regs**)phi13);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi_in4;
	uint64_t phi12;
	uint64_t phi1 = 0;
	uint64_t phi2 = arg2;
	uint32_t phi3 = 0;
	uint8_t* anon5 = (uint8_t*)arg2;
	phi_in4 = *anon5;
	if (*anon5 != 0)
	{
		uint64_t anon7;
		uint32_t anon8;
		do
		{
			uint8_t phi6 = phi_in4;
			anon7 = phi2 + 1;
			phi2 = anon7;
			anon8 = phi3 * 31 + (__zext uint32_t)phi6;
			phi3 = anon8;
			phi_in4 = *(uint8_t*)anon7;
		}
		while (*(uint8_t*)anon7 != 0);
		phi1 = (__zext uint64_t)anon8;
	}
	while (true)
	{
		uint64_t phi9;
		uint32_t anon13;
		uint64_t* anon10 = (uint64_t*)(arg1 + 8);
		uint64_t anon11 = phi1 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi9 = *(uint64_t*)(*anon10 + anon11);
		if (*(uint64_t*)(*anon10 + anon11) != 0)
		{
			phi12 = phi9;
			_strcmp.47((struct x86_regs*)arg2);
			anon13 = (uint32_t)*anon10;
			if (anon13 == 0)
			{
				break;
			}
			else 
			{
				phi9 = *(uint64_t*)(phi12 + 16);
			}
		}
		if (*(uint64_t*)(*anon10 + anon11) == 0 || anon13 != 0 && *(uint64_t*)(phi12 + 16) == 0)
		{
			phi12 = 0;
			if ((uint8_t)arg3 != 0)
			{
				uint8_t* anon14 = _strdup(anon5);
				uint8_t* anon15 = _malloc(24);
				*(uint64_t*)anon15 = (uint64_t)anon14;
				uint64_t anon16 = (uint64_t)anon15;
				*(uint64_t*)(anon16 + 8) = 0;
				*(uint64_t*)(anon16 + 16) = *(uint64_t*)(*anon10 + anon11);
				*(uint64_t*)(*anon10 + anon11) = anon16;
				uint32_t* anon17 = (uint32_t*)arg1;
				*anon17 = *anon17 + 1;
				phi12 = anon16;
			}
			break;
		}
	}
	return phi12;
}
void _table_print(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in2;
	uint64_t phi1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi_in2 = *anon3;
	if (*anon3 != 0)
	{
		uint32_t phi4;
		uint64_t anon8;
		do
		{
			phi4 = phi_in2;
			uint64_t* anon5 = (uint64_t*)(arg1 + 8);
			uint64_t anon6 = phi1 << 3;
			if (*(uint64_t*)(*anon5 + anon6) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				uint64_t phi7 = *anon5 + anon6;
				while (*(uint64_t*)phi7 != 0)
				{
					_printf((uint8_t*)0x100001dac);
					phi7 = *(uint64_t*)phi7 + 16;
				}
				_puts((uint8_t*)0x100001db1);
				phi4 = *anon3;
			}
			anon8 = phi1 + 1;
			phi1 = anon8;
			phi_in2 = phi4;
		}
		while (anon8 < (__zext uint64_t)phi4);
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
	uint64_t phi6;
	uint32_t phi7;
	uint32_t phi_in8;
	uint64_t* phi_in9;
	uint64_t phi16;
	uint32_t phi1 = 0;
	uint64_t* phi2 = null;
	uint64_t phi3 = 0;
	do
	{
		phi4 = phi1;
		uint64_t* phi_in5 = phi2;
		phi6 = 0;
		phi7 = 0;
		phi_in8 = phi4;
		phi_in9 = phi_in5;
		if (phi3 < (__zext uint64_t)*(uint32_t*)(arg2 + 4))
		{
			uint64_t anon11 = phi3 + 1;
			uint32_t anon10 = (uint32_t)anon11;
			phi1 = anon10;
			uint64_t* anon12 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi3 << 3));
			phi2 = anon12;
			phi3 = anon11;
			phi6 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi3 << 3));
			phi7 = 0;
			phi_in8 = anon10;
			phi4 = anon10;
			phi_in9 = anon12;
			if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi3 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi3 < (__zext uint64_t)*(uint32_t*)(arg2 + 4));
	do
	{
		uint64_t phi_in13 = phi6;
		uint64_t* phi14 = phi_in9;
		uint64_t phi15 = (__sext int64_t)phi7;
		phi16 = phi_in13;
		if (phi16 != 0)
		{
			uint64_t* anon19;
			*(uint64_t*)((phi15 << 3) + arg3) = *phi14;
			if (*(uint64_t*)(phi16 + 16) == 0)
			{
				uint64_t* phi18;
				uint64_t phi_in17 = (__sext int64_t)phi4 << 3;
				anon19 = (uint64_t*)*(uint64_t*)(phi16 + 16);
				phi18 = anon19;
				do
				{
					uint32_t phi20 = phi_in8;
					uint64_t phi21 = phi_in17;
					phi6 = 0;
					uint32_t anon22 = (uint32_t)phi15 + 1;
					phi7 = anon22;
					phi_in8 = phi20;
					phi4 = phi4;
					phi_in9 = phi18;
					if (phi4 < *(uint32_t*)(arg2 + 4))
					{
						phi6 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21);
						phi7 = anon22;
						uint32_t anon23 = phi20 + 1;
						phi_in8 = anon23;
						phi4 = anon23;
						uint64_t* anon24 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21);
						phi_in9 = anon24;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21) == 0)
						{
							phi_in8 = anon23;
							phi_in17 = phi21 + 8;
							phi4 = anon23;
							phi18 = anon24;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi4 < *(uint32_t*)(arg2 + 4));
			}
			else 
			{
				phi_in13 = *(uint64_t*)(phi16 + 16);
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
	uint64_t phi1 = 0;
	uint32_t anon2 = (uint32_t)arg2;
	if (anon2 >= 1)
	{
		uint32_t anon4;
		do
		{
			if (*(uint64_t*)((phi1 << 3) + arg1) == 0)
			{
				_printf((uint8_t*)0x100001dc3);
			}
			else 
			{
				_printf((uint8_t*)0x100001dcc);
			}
			uint64_t anon3 = phi1 + 1;
			phi1 = anon3;
			anon4 = (uint32_t)anon3;
		}
		while (anon2 != anon4);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_effect_definition(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	uint8_t* anon2;
	uint32_t phi4;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi1 = arg2;
	if ((uint32_t)arg2 >= 1)
	{
		uint32_t anon3;
		do
		{
			anon2 = (uint8_t*)0x100001dd5;
			_printf(anon2);
			anon3 = (uint32_t)phi1 - 1;
			if (anon3 != 0)
			{
				phi1 = (__zext uint64_t)anon3;
			}
		}
		while (anon3 != 0);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon5 = (uint32_t)arg4;
	phi4 = anon5;
	if (anon5 >= 1)
	{
		uint32_t anon6;
		do
		{
			_printf(anon2);
			anon6 = phi4 - 1;
			phi4 = anon6;
		}
		while (anon6 != 0);
	}
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_effect_list(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001f40);
	if ((uint32_t)arg2 >= 1)
	{
		uint32_t anon2;
		uint64_t phi1 = arg2 & 0xffffffff;
		do
		{
			_printf((uint8_t*)0x100001e3a);
			anon2 = (uint32_t)phi1 - 1;
			if (anon2 != 0)
			{
				phi1 = (__zext uint64_t)anon2;
			}
		}
		while (anon2 != 0);
	}
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_uniform_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e62);
	uint64_t phi1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon2;
		do
		{
			_printf((uint8_t*)0x100001e84);
			anon2 = phi1 + 1;
			phi1 = anon2;
		}
		while (anon2 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_attribute_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e8e);
	uint64_t phi1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon2;
		do
		{
			_printf((uint8_t*)0x100001e84);
			anon2 = phi1 + 1;
			phi1 = anon2;
		}
		while (anon2 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
