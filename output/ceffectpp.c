#include "tests/bin/ceffectpp.h"

void _store_path(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in3;
	uint8_t* anon2 = (uint8_t*)arg2;
	uint8_t* anon1 = (uint8_t*)(arg1 - 64 - (_strlen(anon2) + 15 & 0xfffffffffffffff0));
	_strcpy(anon1, anon2);
	*_strrchr(anon1, 46) = 0;
	uint64_t* anon4 = (uint64_t*)(_table_find(4294970183, *(uint64_t*)0x1000020c0, (uint64_t)_strrchr(anon1, 47) + 1, 1) + 8);
	phi_in3 = *anon4;
	if (*anon4 == 0)
	{
		uint64_t anon5 = (uint64_t)_calloc(3, 8);
		*anon4 = anon5;
		phi_in3 = anon5;
	}
	*(uint64_t*)(phi_in3 + (arg3 << 32 >> 29)) = arg2;
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
		if (anon8 == 0 || ((anon9 | arg2) & 0xff) == 0)
		{
			if (*phi_in7 != 0)
			{
				_strtok(null, anon5);
				uint8_t* anon10 = _strtok(null, anon5);
				if (anon10 != null)
				{
					uint8_t phi_in14;
					uint64_t phi_in11 = 0;
					uint64_t phi_in12 = (uint64_t)anon10;
					uint32_t phi_in13 = 0;
					uint8_t anon15 = *anon10;
					phi_in14 = anon15;
					if (anon15 != 0)
					{
						uint64_t anon17;
						uint32_t anon18;
						do
						{
							uint8_t phi16 = phi_in14;
							anon17 = phi_in12 + 1;
							phi_in12 = anon17;
							anon18 = phi_in13 * 31 + (__zext uint32_t)(phi16 & 0xf);
							phi_in13 = anon18;
							phi_in14 = *(uint8_t*)anon17;
						}
						while (*(uint8_t*)anon17 != 0);
						phi_in11 = (__zext uint64_t)(anon18 & 0xff);
					}
					while (true)
					{
						uint64_t phi_in19;
						uint32_t anon22;
						uint64_t* anon20 = (uint64_t*)(*phi_in7 + 8);
						uint64_t anon21 = phi_in11 % (__zext uint64_t)*(uint32_t*)(*phi_in7 + 4) << 3;
						phi_in19 = *(uint64_t*)(*anon20 + anon21);
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
								phi_in19 = *(uint64_t*)(phi_in19 + 16);
							}
						}
						if (*(uint64_t*)(*anon20 + anon21) == 0 || anon22 != 0 && *(uint64_t*)(phi_in19 + 16) == 0)
						{
							uint8_t* anon23 = _strdup(anon10);
							uint8_t* anon24 = _malloc(24);
							*(uint64_t*)anon24 = (uint64_t)anon23;
							uint64_t anon25 = (uint64_t)anon24;
							*(uint64_t*)(anon25 + 8) = 0;
							*(uint64_t*)(anon25 + 16) = *(uint64_t*)(*anon20 + anon21);
							*(uint64_t*)(*anon20 + anon21) = anon25;
							uint32_t* anon26 = (uint32_t*)*phi_in7;
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
	uint64_t phi_in4;
	uint64_t phi_in5;
	uint64_t* phi_in6;
	uint64_t phi_in1 = 4294975648;
	uint64_t phi_in2 = 1;
	uint64_t* phi_in3 = (uint64_t*)0x1000020a0;
	do
	{
		_strcmp.47(*(struct x86_regs**)phi_in3);
		phi_in4 = 1;
		phi_in5 = 4294975664;
		phi_in6 = (uint64_t*)0x1000020b0;
		if (phi_in2 < 2)
		{
			uint64_t anon7 = phi_in1 + 8;
			phi_in1 = anon7;
			phi_in2 = phi_in2 + 1;
			phi_in3 = (uint64_t*)anon7;
		}
	}
	while (phi_in2 < 2);
	do
	{
		_strcmp.47(*(struct x86_regs**)phi_in6);
		if ((phi_in4 | 1) == 1)
		{
			phi_in4 = phi_in4 + 1;
			uint64_t anon8 = phi_in5 + 8;
			phi_in5 = anon8;
			phi_in6 = (uint64_t*)anon8;
		}
	}
	while ((phi_in4 | 1) == 1);
	_strcmp.47((struct x86_regs*)0x100001cd8);
	return;
}
void _main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	struct { uint32_t field0; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[4]; uint32_t field7; uint64_t field8; uint8_t field9[8]; uint8_t field10[256]; uint64_t field11; uint8_t field12[48]; uint64_t field13; } alloca1;
	uint64_t phi_in8;
	uint64_t phi_in9;
	uint64_t anon38;
	uint64_t anon64;
	uint8_t* anon66;
	uint8_t* anon67;
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
		uint32_t anon43;
		uint32_t anon44;
		*(uint32_t*)(arg1 - 340) = 0;
		uint24_t phi_in10 = 0;
		uint8_t phi_in11 = 0;
		uint64_t phi_in12 = arg2 & 0xffffffff;
		alloca1.field5 = arg3;
		uint64_t phi_in13 = 1;
		uint64_t phi_in14 = __undefined;
		uint32_t phi_in15 = 0;
		do
		{
			uint8_t phi_in18;
			uint64_t anon42;
			uint64_t anon17 = phi_in13 << 3;
			struct x86_regs* anon16 = (struct x86_regs*)*(uint64_t*)(alloca1.field5 + anon17);
			_strcmp.47(anon16);
			if (((__zext uint32_t)phi_in10 << 8 | (__zext uint32_t)phi_in11) == 0)
			{
				phi_in9 = phi_in14 & 0xff | 0x100;
				phi_in18 = 1;
			}
			else 
			{
				_strcmp.47(anon16);
				uint8_t* anon20 = (uint8_t*)*(uint64_t*)(alloca1.field5 + anon17);
				uint8_t* anon19 = _strrchr(anon20, 46);
				phi_in10 = 0;
				if (anon19 != null)
				{
					struct __sFILE* anon24 = _fopen(anon20, (uint8_t*)0x100001c1c);
					uint64_t anon23 = (uint64_t)anon24;
					uint32_t anon22 = (uint32_t)anon23;
					uint24_t anon21 = (uint24_t)(anon22 >> 8);
					phi_in10 = anon21;
					if (anon24 != null)
					{
						uint32_t phi_in29;
						uint64_t anon25 = arg1 - 360;
						*(uint64_t*)anon25 = anon23;
						uint64_t phi_in26 = 4294975648;
						uint64_t phi_in27 = 1;
						uint64_t* phi_in28 = (uint64_t*)0x1000020a0;
						do
						{
							_strcmp.47(*(struct x86_regs**)phi_in28);
							phi_in29 = anon22;
							if ((phi_in27 | 1) == 1)
							{
								phi_in29 = 0;
								if (anon22 == 0)
								{
									break;
								}
								else 
								{
									uint64_t anon30 = phi_in26 + 8;
									phi_in26 = anon30;
									phi_in27 = phi_in27 + 1;
									phi_in28 = (uint64_t*)anon30;
								}
							}
						}
						while ((phi_in27 | 1) == 1);
						while (true)
						{
							uint64_t phi_in34;
							uint64_t anon37;
							uint64_t phi_in31 = 0;
							uint64_t phi_in32 = 1;
							uint64_t phi_in33 = phi_in34;
							uint64_t phi_in35 = 4294975664;
							uint64_t* phi_in36 = (uint64_t*)0x1000020b0;
							if (phi_in29 != 0)
							{
								_strcmp.47(*(struct x86_regs**)phi_in36);
								if ((phi_in32 | 1) == 1)
								{
									phi_in31 = 2;
									anon37 = phi_in33 & 0xffffffffffffff00 | (__zext uint64_t)(anon22 != 0);
									phi_in34 = anon37;
								}
								else 
								{
									phi_in31 = 2;
									phi_in34 = anon37;
									if (anon22 != 0)
									{
										_strcmp.47((struct x86_regs*)0x100001cd8);
										phi_in10 = anon21;
										phi_in34 = anon37;
										break;
									}
								}
							}
							if (anon22 == 0 || phi_in29 == 0)
							{
								uint8_t* anon39;
								anon38 = arg1 - 400;
								_store_path(4294971047, anon38, *(uint64_t*)(alloca1.field5 + anon17), phi_in31);
								do
								{
									anon39 = _fgets(&alloca1.field10[0], 256, *(struct __sFILE**)anon25);
									phi_in10 = 0;
									if (anon39 != null)
									{
										_process_line(4294971083, (uint64_t)&alloca1.field10, phi_in31);
									}
								}
								while (anon39 != null);
								break;
							}
							if (anon22 != 0 && phi_in29 != 0 && (phi_in32 | 1) == 1)
							{
								phi_in32 = phi_in32 + 1;
								phi_in33 = anon37;
								uint64_t anon40 = phi_in35 + 8;
								phi_in35 = anon40;
								phi_in36 = (uint64_t*)anon40;
							}
						}
					}
				}
				phi_in12 = (__zext uint64_t)*anon2;
				anon42 = arg1 - 328;
				uint32_t* anon41 = (uint32_t*)anon42;
				phi_in9 = (__zext uint64_t)*anon41;
				phi_in18 = (uint8_t)(*anon41 >> 8);
			}
			phi_in8 = anon42;
			anon43 = (uint32_t)phi_in13 + 1;
			anon44 = (uint32_t)phi_in12;
			if (anon43 != anon44)
			{
				phi_in11 = phi_in18;
				phi_in13 = phi_in13 + 1;
				phi_in14 = phi_in9;
				phi_in15 = (__zext uint32_t)phi_in10 << 8 | (__zext uint32_t)phi_in18;
			}
		}
		while (anon43 != anon44);
	}
	uint64_t* anon46 = (uint64_t*)0x1000020c8;
	uint64_t anon45 = _table_count(4294971193, *anon46);
	alloca1.field5 = anon38;
	uint64_t* anon47 = (uint64_t*)phi_in8;
	uint64_t anon48 = anon45 & 0xffffffff;
	*anon47 = anon48;
	uint64_t anon49 = anon38 - ((anon48 << 3) + 15 & 0xffffffff0);
	alloca1.field4 = anon49;
	uint64_t* anon51 = (uint64_t*)0x1000020d0;
	uint64_t anon50 = _table_count(4294971258, *anon51) & 0xffffffff;
	alloca1.field8 = anon50;
	uint64_t anon52 = anon49 - ((anon50 << 3) + 15 & 0xffffffff0);
	alloca1.field3 = anon52;
	uint64_t* anon54 = (uint64_t*)0x1000020c0;
	uint64_t anon53 = _table_count(4294971306, *anon54);
	alloca1.field0 = (uint32_t)anon53;
	uint64_t anon55 = anon53 & 0xffffffff;
	alloca1.field1 = anon55;
	uint64_t anon56 = _table_count(4294971353, *anon54);
	alloca1.field2 = anon56 * 3 & 0xffffffff;
	_table_dump_keys(4294971398, *anon46, *anon46, anon49);
	_table_dump_keys(4294971413, *anon51, *anon51, anon52);
	uint64_t anon57 = anon52 - ((anon55 << 3) + 15 & 0xffffffff0);
	_table_dump_keys(4294971428, *anon54, *anon54, anon57);
	uint32_t(* anon58)(uint8_t*, uint8_t*) = (uint32_t(*)(uint8_t*, uint8_t*))0x100000ac0;
	_qsort((uint8_t*)anon49, *anon47, 8, anon58);
	_qsort((uint8_t*)anon52, alloca1.field8, 8, anon58);
	_qsort((uint8_t*)anon57, alloca1.field1, 8, anon58);
	uint64_t anon60 = _table_count(4294971516, *anon54);
	uint32_t anon59 = (uint32_t)anon60;
	if ((anon59 >> 31 | (__zext uint32_t)(anon59 == 0)) == 0)
	{
		uint64_t phi_in61;
		uint64_t phi_in63;
		uint64_t anon62 = anon60 << 32 >> 32;
		phi_in61 = anon62 + 1;
		anon64 = anon57 - ((anon56 * 24 & 0x7fffffff8) + 15 & 0xffffffff0);
		phi_in63 = anon64 + anon62 * 24 - 8;
		do
		{
			uint64_t anon65 = _table_find(4294971555, *anon54, *(uint64_t*)(anon57 + (phi_in61 << 3) - 16), 0) + 8;
			*(uint64_t*)(phi_in63 - 16) = **(uint64_t**)anon65;
			*(uint64_t*)(phi_in63 - 8) = *(uint64_t*)(*(uint64_t*)anon65 + 8);
			*(uint64_t*)phi_in63 = *(uint64_t*)(*(uint64_t*)anon65 + 16);
			phi_in61 = phi_in61 - 1;
			phi_in63 = phi_in63 - 24;
		}
		while (phi_in61 > 2);
	}
	if ((phi_in9 & 0x100) != 0)
	{
		anon66 = (uint8_t*)0x100001c53;
		_printf(anon66);
		_puts((uint8_t*)0x100001d30);
		anon67 = (uint8_t*)0x100001d60;
		_puts(anon67);
		_print_effect_definition(4294971695, alloca1.field4, *anon47 & 0xffffffff, alloca1.field3, alloca1.field8 & 0xffffffff);
		_print_effect_list(4294971709, anon57, (__zext uint64_t)alloca1.field0);
		_puts((uint8_t*)0x100001d80);
		_printf((uint8_t*)0x100001c56);
		_printf((uint8_t*)0x100001c79);
		_printf((uint8_t*)0x100001c9e);
		_puts((uint8_t*)0x100001d9c);
	}
	if ((*(uint32_t*)(arg1 - 340) & 1) != 0)
	{
		_printf(anon66);
		_puts(anon67);
		_puts((uint8_t*)0x100001ce0);
		_print_filepaths(4294971858, anon64, alloca1.field2);
		_print_uniform_strings(4294971877, alloca1.field4, *anon47);
		_print_attribute_strings(4294971896, alloca1.field3, alloca1.field8);
		_puts((uint8_t*)0x100001d00);
	}
	_table_free(4294971922, *anon46, 0);
	_table_free(4294971936, *anon51, 0);
	_table_free(4294971955, *anon54, *(uint64_t*)0x100002018);
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
		uint64_t anon4;
		do
		{
			anon4 = phi_in1 + 1;
			phi_in1 = anon4;
			phi_in2 = phi_in2 * 31 + (__zext uint32_t)phi_in3;
			phi_in3 = *(uint8_t*)anon4;
		}
		while (*(uint8_t*)anon4 != 0);
	}
	return;
}
uint64_t _table_new(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in1;
	uint8_t* anon3 = _malloc(24);
	uint64_t anon2 = (uint64_t)anon3;
	phi_in1 = anon2;
	if (anon3 != null)
	{
		*(uint32_t*)anon3 = 0;
		*(uint32_t*)(anon2 + 4) = (uint32_t)arg1;
		uint8_t* anon4 = _calloc(arg1 << 32 >> 32, 8);
		*(uint64_t*)(anon2 + 8) = (uint64_t)anon4;
		phi_in1 = anon2;
		if (anon4 == null)
		{
			_free.56((struct x86_regs*)anon3);
			phi_in1 = 0;
		}
	}
	return phi_in1;
}
void _table_apply(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in2;
	uint64_t phi_in3;
	uint32_t* anon4;
	uint64_t phi6;
	uint64_t phi_in1 = 0;
	do
	{
		phi_in2 = phi_in1;
		phi_in3 = 0;
		anon4 = (uint32_t*)(arg1 + 4);
		if (phi_in1 < (__zext uint64_t)*anon4)
		{
			uint64_t anon5 = phi_in1 + 1;
			phi_in1 = anon5;
			phi_in2 = anon5;
			phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi_in1 << 3));
			if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi_in1 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi_in1 < (__zext uint64_t)*anon4);
	do
	{
		phi6 = phi_in3;
		if (phi6 != 0)
		{
			((void(*)())arg2)();
			phi_in3 = *(uint64_t*)(phi6 + 16);
			if (*(uint64_t*)(phi6 + 16) == 0)
			{
				uint32_t phi_in7 = (uint32_t)phi_in2;
				uint64_t phi_in8 = phi_in2 << 32 >> 29;
				do
				{
					phi_in3 = 0;
					if (phi_in7 < *anon4)
					{
						uint32_t anon10 = phi_in7 + 1;
						uint64_t anon9 = (__zext uint64_t)anon10;
						phi_in2 = anon9;
						phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi_in8);
						if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi_in8) == 0)
						{
							phi_in2 = anon9;
							phi_in7 = anon10;
							phi_in8 = phi_in8 + 8;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi_in7 < *anon4);
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
		uint32_t phi_in2;
		uint32_t* anon3 = (uint32_t*)(arg1 + 16);
		phi_in2 = *anon3;
		uint64_t phi_in4 = (__sext int64_t)*anon3 << 3;
		do
		{
			*anon1 = *(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi_in4);
			uint32_t anon5 = phi_in2 + 1;
			*anon3 = anon5;
			if (*(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi_in4) == 0)
			{
				phi_in2 = anon5;
				phi_in4 = phi_in4 + 8;
			}
		}
		while (phi_in2 < *(uint32_t*)(*(uint64_t*)arg1 + 4) && *(uint64_t*)(*(uint64_t*)(*(uint64_t*)arg1 + 8) + phi_in4) == 0);
	}
	return;
}
void _table_free(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t* anon4;
	uint64_t phi_in12;
	if (arg2 != 0)
	{
		uint64_t phi2;
		uint64_t phi_in3;
		uint64_t phi6;
		uint64_t phi_in1 = 0;
		do
		{
			phi2 = phi_in1;
			phi_in3 = 0;
			anon4 = (uint32_t*)(arg1 + 4);
			if (phi_in1 < (__zext uint64_t)*anon4)
			{
				uint64_t anon5 = phi_in1 + 1;
				phi_in1 = anon5;
				phi2 = anon5;
				phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi_in1 << 3));
				if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + (phi_in1 << 3)) != 0)
				{
					break;
				}
			}
		}
		while (phi_in1 < (__zext uint64_t)*anon4);
		do
		{
			phi6 = phi_in3;
			if (phi6 != 0)
			{
				((void(*)(uint64_t))arg2)(*(uint64_t*)(phi6 + 8));
				phi_in3 = *(uint64_t*)(phi6 + 16);
				if (*(uint64_t*)(phi6 + 16) == 0)
				{
					uint32_t phi_in7 = (uint32_t)phi2;
					uint64_t phi_in8 = phi2 << 32 >> 29;
					do
					{
						phi_in3 = 0;
						if (phi_in7 < *anon4)
						{
							uint32_t anon10 = phi_in7 + 1;
							uint64_t anon9 = (__zext uint64_t)anon10;
							phi2 = anon9;
							phi_in3 = *(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi_in8);
							if (*(uint64_t*)(*(uint64_t*)(arg1 + 8) + phi_in8) == 0)
							{
								phi2 = anon9;
								phi_in7 = anon10;
								phi_in8 = phi_in8 + 8;
							}
							else 
							{
								break;
							}
						}
					}
					while (phi_in7 < *anon4);
				}
			}
		}
		while (phi6 != 0);
	}
	uint64_t phi_in11 = 0;
	if (*anon4 == 0)
	{
		phi_in12 = arg1 + 8;
	}
	else 
	{
		uint64_t anon14;
		do
		{
			uint64_t anon13 = arg1 + 8;
			_list_free(4294972813, *(uint64_t*)(*(uint64_t*)anon13 + (phi_in11 << 3)));
			anon14 = phi_in11 + 1;
			phi_in11 = anon14;
			phi_in12 = anon13;
		}
		while (anon14 < (__zext uint64_t)*anon4);
	}
	_free.56(*(struct x86_regs**)phi_in12);
	__indirect_jump(*(uint64_t*)0x100002040);
}
uint64_t _table_find(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint8_t phi_in4;
	uint64_t phi_in9;
	uint64_t phi_in1 = 0;
	uint64_t phi_in2 = arg2;
	uint32_t phi_in3 = 0;
	uint8_t* anon5 = (uint8_t*)arg2;
	phi_in4 = *anon5;
	if (*anon5 != 0)
	{
		uint64_t anon7;
		uint32_t anon8;
		do
		{
			uint8_t phi6 = phi_in4;
			anon7 = phi_in2 + 1;
			phi_in2 = anon7;
			anon8 = phi_in3 * 31 + (__zext uint32_t)phi6;
			phi_in3 = anon8;
			phi_in4 = *(uint8_t*)anon7;
		}
		while (*(uint8_t*)anon7 != 0);
		phi_in1 = (__zext uint64_t)anon8;
	}
	while (true)
	{
		uint32_t anon12;
		uint64_t* anon10 = (uint64_t*)(arg1 + 8);
		uint64_t anon11 = phi_in1 % (__zext uint64_t)*(uint32_t*)(arg1 + 4) << 3;
		phi_in9 = *(uint64_t*)(*anon10 + anon11);
		if (*(uint64_t*)(*anon10 + anon11) != 0)
		{
			_strcmp.47((struct x86_regs*)arg2);
			anon12 = (uint32_t)*anon10;
			if (anon12 == 0)
			{
				break;
			}
			else 
			{
				phi_in9 = *(uint64_t*)(phi_in9 + 16);
			}
		}
		if (*(uint64_t*)(*anon10 + anon11) == 0 || anon12 != 0 && *(uint64_t*)(phi_in9 + 16) == 0)
		{
			phi_in9 = 0;
			if ((uint8_t)arg3 != 0)
			{
				uint8_t* anon13 = _strdup(anon5);
				uint8_t* anon14 = _malloc(24);
				*(uint64_t*)anon14 = (uint64_t)anon13;
				uint64_t anon15 = (uint64_t)anon14;
				*(uint64_t*)(anon15 + 8) = 0;
				*(uint64_t*)(anon15 + 16) = *(uint64_t*)(*anon10 + anon11);
				*(uint64_t*)(*anon10 + anon11) = anon15;
				uint32_t* anon16 = (uint32_t*)arg1;
				*anon16 = *anon16 + 1;
				phi_in9 = anon15;
			}
			break;
		}
	}
	return phi_in9;
}
void _table_print(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in2;
	uint64_t phi_in1 = 0;
	uint32_t* anon3 = (uint32_t*)(arg1 + 4);
	phi_in2 = *anon3;
	if (*anon3 != 0)
	{
		uint64_t anon7;
		do
		{
			uint64_t* anon4 = (uint64_t*)(arg1 + 8);
			uint64_t anon5 = phi_in1 << 3;
			if (*(uint64_t*)(*anon4 + anon5) != 0)
			{
				_printf((uint8_t*)0x100001da3);
				uint64_t phi_in6 = *anon4 + anon5;
				while (*(uint64_t*)phi_in6 != 0)
				{
					_printf((uint8_t*)0x100001dac);
					phi_in6 = *(uint64_t*)phi_in6 + 16;
				}
				_puts((uint8_t*)0x100001db1);
				phi_in2 = *anon3;
			}
			anon7 = phi_in1 + 1;
			phi_in1 = anon7;
		}
		while (anon7 < (__zext uint64_t)phi_in2);
	}
	return;
}
uint64_t _table_count(uint64_t arg0, uint64_t arg1)
{
	return (__zext uint64_t)*(uint32_t*)arg1;
}
void _table_dump_keys(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t phi_in4;
	uint32_t phi_in5;
	uint64_t phi10;
	uint32_t phi_in1 = 0;
	uint64_t* phi_in2 = null;
	uint64_t phi_in3 = 0;
	do
	{
		phi_in4 = 0;
		phi_in5 = 0;
		if (phi_in3 < (__zext uint64_t)*(uint32_t*)(arg2 + 4))
		{
			uint64_t anon7 = phi_in3 + 1;
			uint32_t anon6 = (uint32_t)anon7;
			phi_in1 = anon6;
			uint64_t* anon8 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi_in3 << 3));
			phi_in2 = anon8;
			phi_in3 = anon7;
			phi_in4 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi_in3 << 3));
			phi_in5 = 0;
			phi_in1 = anon6;
			phi_in1 = anon6;
			phi_in2 = anon8;
			if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + (phi_in3 << 3)) != 0)
			{
				break;
			}
		}
	}
	while (phi_in3 < (__zext uint64_t)*(uint32_t*)(arg2 + 4));
	do
	{
		uint64_t phi_in9 = (__sext int64_t)phi_in5;
		phi10 = phi_in4;
		if (phi10 != 0)
		{
			uint64_t* anon13;
			*(uint64_t*)((phi_in9 << 3) + arg3) = *phi_in2;
			if (*(uint64_t*)(phi10 + 16) == 0)
			{
				uint64_t* phi_in12;
				uint64_t phi_in11 = (__sext int64_t)phi_in1 << 3;
				anon13 = (uint64_t*)*(uint64_t*)(phi10 + 16);
				phi_in12 = anon13;
				do
				{
					uint32_t phi14 = phi_in1;
					uint64_t phi15 = phi_in11;
					phi_in4 = 0;
					uint32_t anon16 = (uint32_t)phi_in9 + 1;
					phi_in5 = anon16;
					phi_in1 = phi14;
					phi_in2 = phi_in12;
					if (phi_in1 < *(uint32_t*)(arg2 + 4))
					{
						phi_in4 = *(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi15);
						phi_in5 = anon16;
						uint32_t anon17 = phi14 + 1;
						phi_in1 = anon17;
						phi_in1 = anon17;
						uint64_t* anon18 = (uint64_t*)*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi15);
						phi_in2 = anon18;
						if (*(uint64_t*)(*(uint64_t*)(arg2 + 8) + phi15) == 0)
						{
							phi_in1 = anon17;
							phi_in11 = phi15 + 8;
							phi_in1 = anon17;
							phi_in12 = anon18;
						}
						else 
						{
							break;
						}
					}
				}
				while (phi_in1 < *(uint32_t*)(arg2 + 4));
			}
			else 
			{
				phi_in4 = *(uint64_t*)(phi10 + 16);
				phi_in2 = anon13;
				phi_in9 = phi_in9 + 1;
			}
		}
	}
	while (phi10 != 0);
	return;
}
void _print_filepaths(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_puts((uint8_t*)0x100001ec0);
	uint64_t phi_in1 = 0;
	uint32_t anon2 = (uint32_t)arg2;
	if (anon2 >= 1)
	{
		uint32_t anon4;
		do
		{
			if (*(uint64_t*)((phi_in1 << 3) + arg1) == 0)
			{
				_printf((uint8_t*)0x100001dc3);
			}
			else 
			{
				_printf((uint8_t*)0x100001dcc);
			}
			uint64_t anon3 = phi_in1 + 1;
			phi_in1 = anon3;
			anon4 = (uint32_t)anon3;
		}
		while (anon2 != anon4);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_effect_definition(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	uint8_t* anon2;
	uint32_t phi_in4;
	_puts((uint8_t*)0x100001ef0);
	uint64_t phi_in1 = arg2;
	if ((uint32_t)arg2 >= 1)
	{
		uint32_t anon3;
		do
		{
			anon2 = (uint8_t*)0x100001dd5;
			_printf(anon2);
			anon3 = (uint32_t)phi_in1 - 1;
			if (anon3 != 0)
			{
				phi_in1 = (__zext uint64_t)anon3;
			}
		}
		while (anon3 != 0);
	}
	_printf((uint8_t*)0x100001de3);
	uint32_t anon5 = (uint32_t)arg4;
	phi_in4 = anon5;
	if (anon5 >= 1)
	{
		uint32_t anon6;
		do
		{
			_printf(anon2);
			anon6 = phi_in4 - 1;
			phi_in4 = anon6;
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
		uint64_t phi_in1 = arg2 & 0xffffffff;
		do
		{
			_printf((uint8_t*)0x100001e3a);
			anon2 = (uint32_t)phi_in1 - 1;
			if (anon2 != 0)
			{
				phi_in1 = (__zext uint64_t)anon2;
			}
		}
		while (anon2 != 0);
	}
	__indirect_jump(*(uint64_t*)0x100002050);
}
void _print_uniform_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e62);
	uint64_t phi_in1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon2;
		do
		{
			_printf((uint8_t*)0x100001e84);
			anon2 = phi_in1 + 1;
			phi_in1 = anon2;
		}
		while (anon2 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
void _print_attribute_strings(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	_printf((uint8_t*)0x100001e8e);
	uint64_t phi_in1 = 0;
	if (arg2 != 0)
	{
		uint64_t anon2;
		do
		{
			_printf((uint8_t*)0x100001e84);
			anon2 = phi_in1 + 1;
			phi_in1 = anon2;
		}
		while (anon2 != arg2);
	}
	__indirect_jump(*(uint64_t*)0x100002058);
}
