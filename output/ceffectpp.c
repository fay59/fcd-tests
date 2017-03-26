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
		if (anon8 == 0 || anon8 != 0 && ((anon9 | arg2) & 0xff) == 0)
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
						if (*(uint64_t*)(*anon20 + anon21) == 0 || anon22 != 0 && *(uint64_t*)(*anon20 + anon21) != 0 && *(uint64_t*)(phi19 + 16) == 0)
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
	uint64_t anon52;
	uint64_t anon77;
	uint8_t* anon79;
	uint8_t* anon80;
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
		uint32_t anon56;
		uint32_t anon57;
		*(uint32_t*)(arg1 - 340) = 0;
		uint24_t phi_in10 = 0;
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
			uint64_t phi_in20;
			uint24_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			uint64_t phi_in18 = phi12;
			alloca1.field5 = phi_in13;
			uint64_t phi_in19 = phi_in20;
			uint64_t anon22 = phi14 << 3;
			struct x86_regs* anon21 = (struct x86_regs*)*(uint64_t*)(alloca1.field5 + anon22);
			_strcmp.47(anon21);
			if (((__zext uint32_t)phi_in10 << 8 | (__zext uint32_t)phi11) == 0)
			{
				phi23 = phi_in10;
				phi24 = phi_in18;
				phi25 = alloca1.field5;
				phi26 = phi15 & 0xff | 0x100;
				phi27 = phi_in19;
				phi11 = 1;
			}
			else 
			{
				_strcmp.47(anon21);
				uint8_t* anon29 = (uint8_t*)*(uint64_t*)(alloca1.field5 + anon22);
				uint8_t* anon28 = _strrchr(anon29, 46);
				phi_in10 = 0;
				phi_in13 = alloca1.field5;
				uint64_t phi30 = phi_in19;
				if (anon28 != null)
				{
					struct __sFILE* anon34 = _fopen(anon29, (uint8_t*)0x100001c1c);
					uint64_t anon33 = (uint64_t)anon34;
					uint32_t anon32 = (uint32_t)anon33;
					uint24_t anon31 = (uint24_t)(anon32 >> 8);
					phi_in10 = anon31;
					phi_in13 = alloca1.field5;
					phi30 = phi_in19;
					if (anon34 != null)
					{
						uint32_t phi39;
						uint24_t phi49;
						uint64_t phi50;
						uint64_t anon35 = arg1 - 360;
						*(uint64_t*)anon35 = anon33;
						uint64_t phi36 = 4294975648;
						uint64_t phi37 = 1;
						uint64_t* phi38 = (uint64_t*)0x1000020a0;
						do
						{
							_strcmp.47(*(struct x86_regs**)phi38);
							phi39 = anon32;
							if ((phi37 | 1) == 1)
							{
								phi39 = 0;
								if (anon32 == 0)
								{
									break;
								}
								else 
								{
									uint64_t anon40 = phi36 + 8;
									phi36 = anon40;
									phi37 = phi37 + 1;
									phi38 = (uint64_t*)anon40;
								}
							}
						}
						while ((phi37 | 1) == 1);
						while (true)
						{
							uint64_t anon47;
							uint64_t anon48;
							uint64_t phi41 = 0;
							uint64_t phi42 = phi_in19;
							uint64_t phi43 = 1;
							uint64_t phi44 = phi_in19;
							uint64_t phi45 = 4294975664;
							uint64_t* phi46 = (uint64_t*)0x1000020b0;
							if (phi39 != 0)
							{
								_strcmp.47(*(struct x86_regs**)phi46);
								anon47 = phi43 | 1;
								if (anon47 == 1)
								{
									phi41 = 2;
									anon48 = phi44 & 0xffffffffffffff00 | (__zext uint64_t)(anon32 != 0);
									phi42 = anon48;
								}
								else 
								{
									phi41 = 2;
									phi42 = anon48;
									if (anon32 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi49 = anon31;
										phi50 = anon48;
										break;
									}
								}
							}
							if (phi39 == 0 || anon47 != 1 && phi39 != 0 && anon32 == 0 || phi39 != 0 && anon47 == 1 && anon32 == 0)
							{
								uint8_t* anon53;
								uint64_t phi_in51 = phi42;
								anon52 = arg1 - 400;
								_store_path(4294971047, anon52, *(uint64_t*)(alloca1.field5 + anon22), phi41);
								do
								{
									anon53 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon35);
									phi49 = 0;
									phi50 = phi_in51;
									if (anon53 != null)
									{
										_process_line(4294971083, (uint64_t)&alloca1.field10, phi41);
									}
								}
								while (anon53 != null);
								break;
							}
							if (phi39 != 0 && anon47 == 1)
							{
								if (anon32 != 0)
								{
									phi43 = phi43 + 1;
									phi44 = anon48;
									uint64_t anon54 = phi45 + 8;
									phi45 = anon54;
									phi46 = (uint64_t*)anon54;
								}
							}
						}
						phi_in10 = phi49;
						phi_in19 = phi50;
						phi_in13 = alloca1.field5;
						phi30 = phi_in19;
					}
				}
				phi27 = phi30;
				phi23 = phi_in10;
				phi24 = (__zext uint64_t)*anon2;
				phi25 = phi_in13;
				phi26 = (__zext uint64_t)*anon16;
				phi11 = (uint8_t)(*anon16 >> 8);
			}
			uint64_t phi_in55 = phi26;
			phi8 = anon17;
			phi9 = phi_in55;
			anon56 = (uint32_t)phi14 + 1;
			anon57 = (uint32_t)phi24;
			if (anon56 != anon57)
			{
				phi_in10 = phi23;
				phi12 = phi24;
				phi_in13 = phi25;
				phi14 = phi14 + 1;
				phi15 = phi_in55;
				phi_in20 = phi27;
				*anon16 = (__zext uint32_t)phi23 << 8 | (__zext uint32_t)phi11;
			}
		}
		while (anon56 != anon57);
	}
	uint64_t* anon59 = (uint64_t*)0x1000020c8;
	uint64_t anon58 = _table_count(4294971193, *anon59);
	alloca1.field5 = anon52;
	uint64_t* anon60 = (uint64_t*)phi8;
	uint64_t anon61 = anon58 & 0xffffffff;
	*anon60 = anon61;
	uint64_t anon62 = anon52 - ((anon61 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon62;
	uint64_t* anon64 = (uint64_t*)0x1000020d0;
	uint64_t anon63 = _table_count(4294971258, *anon64) & 0xffffffff;
	alloca1.field8 = anon63;
	uint64_t anon65 = anon62 - ((anon63 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon65;
	uint64_t* anon67 = (uint64_t*)0x1000020c0;
	uint64_t anon66 = _table_count(4294971306, *anon67);
	alloca1.field0 = (uint32_t)anon66;
	uint64_t anon68 = anon66 & 0xffffffff;
	alloca1.field1 = anon68;
	uint64_t anon69 = _table_count(4294971353, *anon67);
	alloca1.field2 = anon69 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon59, *anon59, anon62);
	_table_dump_keys(4294971413, *anon64, *anon64, anon65);
	uint64_t anon70 = anon65 - ((anon68 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon67, *anon67, anon70);
	uint32_t(* anon71)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon62, *anon60, 8, anon71);
	_qsort((uint8_t*)anon65, alloca1.field8, 8, anon71);
	_qsort((uint8_t*)anon70, alloca1.field1, 8, anon71);
	uint64_t anon73 = _table_count(4294971516, *anon67);
	uint32_t anon72 = (uint32_t)anon73;
	if ((anon72 >> 31 | (__zext uint32_t)(anon72 == 0)) == 0)
	{
		uint64_t phi74;
		uint64_t phi76;
		uint64_t anon75 = anon73 << 32 >> 32;
		phi74 = anon75 + 1;
		anon77 = anon70 - ((anon69 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi76 = anon77 + anon75 * 24 - 8;
		do
		{
			uint64_t anon78 = _table_find(4294971555, *anon67, *(uint64_t*)(anon70 + (phi74 << 3) - 16), 0) + 8;
			*(uint64_t*)(phi76 - 16) = **(uint64_t**)anon78;
			*(uint64_t*)(phi76 - 8) = *(uint64_t*)(*(uint64_t*)anon78 + 8);
			*(uint64_t*)phi76 = *(uint64_t*)(*(uint64_t*)anon78 + 16);
			phi74 = phi74 - 1;
			phi76 = phi76 - 24;
		}
		while (phi74 > 2);
	}
	if ((phi9 & 0x100) != 0)
	{
		anon79 = (uint8_t*)0x100001c53;
		_printf(anon79);
		_puts((uint8_t*)0x100001d30);
		anon80 = (uint8_t*)0x100001d60;
		_puts(anon80);
		_print_effect_definition(4294971695, alloca1.field4, *anon60 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon70, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon79);
		_puts(anon80);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon77, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon60);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon59, 0);
	_table_free(4294971936, *anon64, 0);
	_table_free(4294971955, *anon67, *(uint64_t*)0x100002018);
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
	if (*anon1 == 0 || *anon1 != 0 && *(uint64_t*)(*anon1 + 16) == 0)
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
	uint64_t phi14;
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
					uint64_t phi8 = phi_in6;
					uint32_t phi9 = (uint32_t)phi_in6;
					uint64_t phi10 = phi_in6 << 32 >> 29;
					do
					{
						phi2 = phi8;
						phi_in3 = 0;
						if (phi9 < *anon4)
						{
							uint32_t anon12 = phi9 + 1;
							uint64_t anon11 = (__zext uint64_t)anon12;
							phi2 = anon11;
							phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi10);
							if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi10) == 0)
							{
								phi8 = anon11;
								phi9 = anon12;
								phi10 = phi10 + 8;
							}
							else 
							{
								break;
							}
						}
					}
					while (phi9 < *anon4);
				}
			}
		}
		while (phi7 != 0);
	}
	uint64_t phi13 = 0;
	if (*anon4 == 0)
	{
		phi14 = arg1 + 8;
	}
	else 
	{
		uint64_t anon16;
		do
		{
			uint64_t anon15 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon15 + (phi13 << 3)));
			anon16 = phi13 + 1;
			phi13 = anon16;
			phi14 = anon15;
		}
		while (anon16 < (__zext uint64_t)*anon4);
	}
	_free.56(*(struct x86_regs**)phi14);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi_in4;
	uint64_t phi13;
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
		uint64_t phi_in12;
		uint32_t anon14;
		uint64_t* anon10 = (uint64_t*)(arg1 + 8);
		uint64_t anon11 = phi1 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi9 = *(uint64_t*)(*anon10 + anon11);
		if (*(uint64_t*)(*anon10 + anon11) != 0)
		{
			phi_in12 = phi9;
			_strcmp.47((struct x86_regs*)arg2);
			phi13 = phi_in12;
			anon14 = (uint32_t)*anon10;
			if (anon14 == 0)
			{
				break;
			}
			else 
			{
				phi9 = *(uint64_t*)(phi_in12 + 16);
			}
		}
		if (*(uint64_t*)(*anon10 + anon11) == 0 || anon14 != 0 && *(uint64_t*)(*anon10 + anon11) != 0 && *(uint64_t*)(phi_in12 + 16) == 0)
		{
			phi13 = 0;
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
				phi13 = anon17;
			}
			break;
		}
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
		uint32_t phi5;
		uint64_t anon9;
		do
		{
			uint32_t phi_in4 = phi2;
			phi5 = phi_in4;
			uint64_t* anon6 = (uint64_t*)(arg1 + 8);
			uint64_t anon7 = phi1 << 3;
			if (*(uint64_t*)(*anon6 + anon7) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				uint64_t phi8 = *anon6 + anon7;
				while (*(uint64_t*)phi8 != 0)
				{
					_printf((uint8_t*)0x100001dac);
					phi8 = *(uint64_t*)phi8 + 16;
				}
				_puts((uint8_t*)0x100001db1);
				phi5 = *anon3;
			}
			anon9 = phi1 + 1;
			phi1 = anon9;
			phi2 = phi5;
		}
		while (anon9 < (__zext uint64_t)phi5);
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
	uint64_t phi_in5;
	uint32_t phi6;
	uint32_t phi7;
	uint32_t phi8;
	uint64_t phi16;
	uint32_t phi_in1 = 0;
	uint64_t* phi2 = null;
	uint64_t phi3 = 0;
	do
	{
		phi4 = phi2;
		phi_in5 = 0;
		phi6 = 0;
		phi7 = phi_in1;
		phi8 = phi_in1;
		if (phi3 < (__zext uint64_t)*(uint32_t*)(arg2 + 4))
		{
			uint64_t anon10 = phi3 + 1;
			uint32_t anon9 = (uint32_t)anon10;
			phi_in1 = anon9;
			uint64_t* anon11 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi3 << 3));
			phi2 = anon11;
			phi3 = anon10;
			phi_in5 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi3 << 3));
			phi6 = 0;
			phi7 = anon9;
			phi8 = anon9;
			phi4 = anon11;
			if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi3 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi3 < (__zext uint64_t)*(uint32_t*)(arg2 + 4));
	do
	{
		uint32_t phi_in12 = phi7;
		uint32_t phi13 = phi8;
		uint64_t* phi14 = phi4;
		uint64_t phi15 = (__sext int64_t)phi6;
		phi16 = phi_in5;
		if (phi16 != 0)
		{
			uint64_t* anon19;
			*(uint64_t*)((phi15 << 3) + arg3) = *phi14;
			if (*(uint64_t*)(phi16 + 16) == 0)
			{
				uint64_t* phi18;
				uint64_t phi_in17 = (__sext int64_t)phi13 << 3;
				anon19 = (uint64_t*)*(uint64_t*)(phi16 + 16);
				phi18 = anon19;
				do
				{
					uint32_t phi20 = phi_in12;
					uint64_t phi21 = phi_in17;
					phi_in5 = 0;
					uint32_t anon22 = (uint32_t)phi15 + 1;
					phi6 = anon22;
					phi7 = phi20;
					phi8 = phi13;
					phi4 = phi18;
					if (phi13 < *(uint32_t*)(arg2 + 4))
					{
						phi_in5 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21);
						phi6 = anon22;
						uint32_t anon23 = phi20 + 1;
						phi7 = anon23;
						phi8 = anon23;
						uint64_t* anon24 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21);
						phi4 = anon24;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi21) == 0)
						{
							phi_in12 = anon23;
							phi_in17 = phi21 + 8;
							phi13 = anon23;
							phi18 = anon24;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi13 < *(uint32_t*)(arg2 + 4));
			}
			else 
			{
				phi_in5 = *(uint64_t*)(phi16 + 16);
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
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
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
	uint8_t* anon3;
	uint32_t phi5;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi1 = arg2;
	uint32_t anon2 = (uint32_t)arg2;
	if ((anon2 >> 31 | (__zext uint32_t)(anon2 == 0)) == 0)
	{
		uint32_t anon4;
		do
		{
			anon3 = (uint8_t*)0x100001dd5;
			_printf(anon3);
			anon4 = (uint32_t)phi1 - 1;
			if (anon4 != 0)
			{
				phi1 = (__zext uint64_t)anon4;
			}
		}
		while (anon4 != 0);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon6 = (uint32_t)arg4;
	phi5 = anon6;
	if ((anon6 >> 31 | (__zext uint32_t)(anon6 == 0)) == 0)
	{
		uint32_t anon7;
		do
		{
			_printf(anon3);
			anon7 = phi5 - 1;
			phi5 = anon7;
		}
		while (anon7 != 0);
	}
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_effect_list(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001f40);
	uint32_t anon1 = (uint32_t)arg2;
	if ((anon1 >> 31 | (__zext uint32_t)(anon1 == 0)) == 0)
	{
		uint32_t anon3;
		uint64_t phi2 = arg2 & 0xffffffff;
		do
		{
			_printf((uint8_t*)0x100001e3a);
			anon3 = (uint32_t)phi2 - 1;
			if (anon3 != 0)
			{
				phi2 = (__zext uint64_t)anon3;
			}
		}
		while (anon3 != 0);
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
