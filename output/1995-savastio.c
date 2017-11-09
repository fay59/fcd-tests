#include "tests/bin/1995-savastio.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600da8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	struct _IO_FILE** anon3;
	uint64_t anon4;
	uint64_t phi_in47;
	uint64_t phi_in1 = 0;
	uint8_t phi_in2 = 9;
	do
	{
		anon3 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi_in2 ^ 0x4c), *anon3);
		if (phi_in1 < 13)
		{
			anon4 = phi_in1 + 1;
			phi_in1 = anon4;
			phi_in2 = *(uint8_t*)(phi_in1 + 4196946);
		}
	}
	while (phi_in1 < 13);
	scanf((uint8_t*)0x400a4e);
	uint8_t* anon5 = malloc(2016);
	*(uint64_t*)anon5 = 0;
	uint64_t anon6 = (uint64_t)anon5;
	*(uint64_t*)(anon6 + 8) = 0;
	uint8_t* anon7 = malloc(2016);
	*(uint64_t*)anon7 = 0;
	uint64_t anon8 = (uint64_t)anon7;
	*(uint64_t*)(anon8 + 8) = 0;
	uint64_t anon9 = anon6 + 16;
	*(uint16_t*)anon9 = 1;
	*(uint16_t*)(anon6 + 18) = 65535;
	uint64_t phi_in10 = anon6;
	if (anon4 >= 2)
	{
		uint64_t anon43;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi_in14 = 2;
		uint64_t phi15 = anon6;
		uint16_t phi_in16 = 1;
		do
		{
			uint64_t phi_in23;
			uint64_t phi24;
			phi15 = phi_in11;
			phi13 = phi_in12;
			uint64_t phi_in17 = phi15;
			uint64_t phi_in18 = *(uint64_t*)phi15;
			uint64_t phi_in19 = phi13;
			uint64_t phi_in20 = phi13;
			uint64_t phi_in21 = 0;
			uint64_t phi_in22 = 0;
			do
			{
				phi_in10 = phi_in17;
				phi_in23 = phi_in20;
				phi24 = phi_in22;
				if (phi_in18 == 0 ^ phi_in16 == 65535)
				{
					uint64_t phi_in27;
					uint64_t phi_in28;
					uint64_t phi_in29;
					uint64_t phi_in30;
					uint16_t anon25 = (uint16_t)phi_in21 + phi_in16 * (uint16_t)phi_in14;
					uint128_t anon26 = (__zext uint128_t)anon25 * 3777893186295716171 >> 75;
					*(uint16_t*)phi_in23 = anon25 + (uint16_t)anon26 * 55536;
					if (phi24 < 1000)
					{
						phi_in27 = phi_in10;
						phi_in28 = phi_in19 + 2;
						phi_in29 = phi_in23 + 2;
						phi_in30 = phi24 + 1;
					}
					else 
					{
						uint64_t* anon31 = (uint64_t*)phi_in10;
						phi_in27 = *anon31;
						if (*anon31 == 0)
						{
							uint8_t* anon33 = malloc(2016);
							uint64_t anon32 = (uint64_t)anon33;
							*anon31 = anon32;
							*(uint64_t*)anon33 = 0;
							phi_in27 = anon32;
							phi_in18 = anon32;
						}
						phi_in18 = *(uint64_t*)phi_in18;
						phi_in28 = phi_in18 + 16;
						phi_in29 = phi_in27 + 16;
						phi_in30 = 0;
					}
					phi_in17 = phi_in27;
					phi_in19 = phi_in28;
					phi_in20 = phi_in29;
					phi_in21 = (uint64_t)anon26;
					phi_in16 = *(uint16_t*)phi_in28;
					phi_in22 = phi_in30;
				}
			}
			while (phi_in18 == 0 ^ phi_in16 == 65535);
			uint64_t phi_in34 = phi_in21 & 0xffff;
			if (phi_in21 != 0)
			{
				uint64_t phi42;
				do
				{
					uint64_t phi_in36;
					uint64_t anon37;
					uint64_t phi_in38;
					uint128_t anon35 = (__zext uint128_t)phi_in34 * 3777893186295716171 >> 75;
					*(uint16_t*)phi_in23 = (uint16_t)phi_in21 + (uint16_t)anon35 * 55536;
					if (phi24 < 999)
					{
						phi_in23 = phi_in23 + 2;
						anon37 = (uint64_t)anon35;
						phi_in36 = anon37;
						phi_in38 = phi24 + 1;
					}
					else 
					{
						uint64_t* anon39 = (uint64_t*)phi_in10;
						phi_in10 = *anon39;
						phi_in36 = anon37;
						if (*anon39 == 0)
						{
							uint8_t* anon41 = malloc(2016);
							uint64_t anon40 = (uint64_t)anon41;
							*anon39 = anon40;
							*(uint64_t*)anon41 = 0;
							phi_in10 = anon40;
							phi_in36 = anon37 & 0xffff;
						}
						phi_in23 = phi_in10 + 16;
						phi_in38 = 0;
					}
					phi42 = phi_in36;
					phi_in21 = anon37;
					phi24 = phi_in38;
					phi_in34 = anon37;
				}
				while (phi42 != 0);
			}
			*(uint16_t*)phi_in23 = 65535;
			anon43 = phi_in14 & 0xffff;
			if (anon4 > anon43)
			{
				phi_in11 = phi15;
				phi_in12 = phi13;
				phi_in14 = anon43 + 1;
				phi_in16 = 65535;
			}
		}
		while (anon4 > anon43);
	}
	uint64_t phi_in44 = 0;
	uint64_t phi_in45 = 0;
	uint64_t phi_in46 = 1;
	if (*(uint16_t*)(phi_in10 + 16) != 65535)
	{
		do
		{
			phi_in44 = 0;
			phi_in45 = phi_in46;
			if (*(uint16_t*)(phi_in10 + (phi_in46 << 1) + 16) != 65535)
			{
				phi_in44 = 0;
				phi_in45 = 1000;
				if (phi_in46 == 999)
				{
					break;
				}
				else 
				{
					phi_in46 = phi_in46 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi_in10 + (phi_in46 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t anon48 = phi_in45 - 1;
		phi_in47 = anon48;
		if (anon48 > -1)
		{
			uint64_t anon50;
			do
			{
				uint8_t* phi_in49 = (uint8_t*)0x400a44;
				phi_in44 = 1;
				if (phi_in44 != 0)
				{
					phi_in49 = (uint8_t*)0x400a48;
					phi_in44 = 20;
					if (phi_in44 != ((uint64_t)((__zext uint128_t)phi_in44 * 970881267037344822 >> 64) - (phi_in44 >> 63)) * 19)
					{
						phi_in49 = (uint8_t*)0x400a49;
						phi_in44 = phi_in44 + 1;
					}
				}
				printf(phi_in49);
				anon50 = phi_in47 - 1;
				phi_in47 = anon50;
			}
			while (anon50 > -1);
		}
		phi_in10 = *(uint64_t*)(phi_in10 + 8);
		phi_in45 = 1000;
	}
	while (*(uint64_t*)(phi_in10 + 8) != 0);
	_IO_putc(10, *anon3);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400530, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4009c0, (void(*)())0x400a30, (void(*)())arg2, *(uint8_t**)anon1);
	__builtin_trap();
}
void deregister_tm_clones(uint64_t arg0)
{
	return;
}
void register_tm_clones(uint64_t arg0)
{
	return;
}
void __do_global_dtors_aux(uint64_t arg0)
{
	uint8_t* anon1 = (uint8_t*)0x600e18;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196738);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196851);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600bc0)(arg1 & 0xffffffff, arg2, arg3);
	return;
}
void __libc_csu_fini(uint64_t arg0)
{
	return;
}
void _fini(uint64_t arg0)
{
	return;
}
