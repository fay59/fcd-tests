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
	uint64_t phi58;
	uint64_t phi1 = 0;
	uint8_t phi2 = 9;
	do
	{
		anon3 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon3);
		if (phi1 < 13)
		{
			anon4 = phi1 + 1;
			phi1 = anon4;
			phi2 = *(uint8_t*)(phi1 + 4196946);
		}
	}
	while (phi1 < 13);
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
	uint64_t phi10 = anon6;
	if (anon4 >= 2)
	{
		uint64_t anon52;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi14 = 2;
		uint64_t phi15 = anon6;
		uint16_t phi16 = 1;
		do
		{
			uint64_t anon24;
			uint64_t phi26;
			uint64_t phi27;
			uint64_t phi28;
			uint64_t phi_in29;
			phi15 = phi_in11;
			phi13 = phi_in12;
			uint16_t phi17 = phi16;
			uint64_t phi_in18 = phi15;
			uint64_t phi19 = *(uint64_t*)phi15;
			uint64_t phi20 = phi13;
			uint64_t phi_in21 = phi13;
			uint64_t phi22 = 0;
			uint64_t phi_in23 = 0;
			do
			{
				uint8_t* anon25 = malloc(2016);
				anon24 = (uint64_t)anon25;
				*(uint64_t*)(anon24 + 8) = phi_in18;
				phi26 = phi19;
				phi27 = phi_in21;
				phi28 = phi22;
				phi_in29 = phi_in23;
				if (phi26 == 0 ^ phi17 == 65535)
				{
					uint64_t phi32;
					uint64_t phi_in33;
					uint16_t anon30 = (uint16_t)phi28 + phi17 * (uint16_t)phi14;
					uint128_t anon31 = (__zext uint128_t)anon30 * 3777893186295716171 >> 75;
					*(uint16_t*)phi27 = anon30 + (uint16_t)anon31 * 55536;
					if (phi_in29 < 1000)
					{
						phi_in18 = *(uint64_t*)(anon24 + 8);
						phi32 = phi26;
						phi_in33 = phi20 + 2;
						phi_in21 = phi27 + 2;
						phi_in23 = phi_in29 + 1;
					}
					else 
					{
						uint64_t phi_in34;
						uint64_t* anon35 = (uint64_t*)*(uint64_t*)(anon24 + 8);
						phi_in34 = *anon35;
						if (*anon35 == 0)
						{
							*anon35 = anon24;
							*(uint64_t*)anon25 = 0;
							phi_in34 = anon24;
							phi26 = anon24;
						}
						phi_in18 = phi_in34;
						phi32 = *(uint64_t*)phi26;
						phi_in33 = phi26 + 16;
						phi_in21 = phi_in34 + 16;
						phi_in23 = 0;
					}
					phi19 = phi32;
					phi20 = phi_in33;
					phi22 = (uint64_t)anon31;
					phi17 = *(uint16_t*)phi_in33;
				}
			}
			while (phi26 == 0 ^ phi17 == 65535);
			uint64_t phi36 = *(uint64_t*)(anon24 + 8);
			uint64_t phi37 = *(uint64_t*)(anon24 + 8);
			uint64_t phi38 = phi27;
			uint64_t phi39 = phi_in29;
			uint64_t phi40 = phi28 & 0xffff;
			if (phi28 != 0)
			{
				uint64_t phi51;
				do
				{
					uint64_t phi44;
					uint64_t phi_in45;
					uint64_t phi_in46;
					uint64_t anon47;
					uint64_t phi48;
					uint8_t* anon42 = malloc(2016);
					uint64_t anon41 = (uint64_t)anon42;
					*(uint64_t*)(anon41 + 8) = phi37;
					uint128_t anon43 = (__zext uint128_t)phi40 * 3777893186295716171 >> 75;
					*(uint16_t*)phi38 = (uint16_t)phi28 + (uint16_t)anon43 * 55536;
					if (phi39 < 999)
					{
						phi44 = *(uint64_t*)(anon41 + 8);
						phi_in45 = phi38 + 2;
						anon47 = (uint64_t)anon43;
						phi_in46 = anon47;
						phi48 = phi39 + 1;
					}
					else 
					{
						uint64_t phi49;
						uint64_t* anon50 = (uint64_t*)*(uint64_t*)(anon41 + 8);
						phi49 = *anon50;
						phi_in46 = anon47;
						if (*anon50 == 0)
						{
							*anon50 = anon41;
							*(uint64_t*)anon42 = 0;
							phi49 = anon41;
							phi_in46 = anon47 & 0xffff;
						}
						phi44 = phi49;
						phi_in45 = phi44 + 16;
						phi48 = 0;
					}
					phi36 = phi44;
					phi51 = phi_in46;
					phi27 = phi_in45;
					phi37 = phi36;
					phi28 = anon47;
					phi38 = phi_in45;
					phi39 = phi48;
					phi40 = anon47;
				}
				while (phi51 != 0);
			}
			phi10 = phi36;
			*(uint16_t*)phi27 = 65535;
			anon52 = phi14 & 0xffff;
			if (anon4 > anon52)
			{
				phi_in11 = phi15;
				phi_in12 = phi13;
				phi14 = anon52 + 1;
				phi16 = 65535;
			}
		}
		while (anon4 > anon52);
	}
	uint64_t phi53 = phi10;
	uint64_t phi54 = 0;
	uint64_t phi55 = 0;
	uint64_t phi56 = 1;
	if (*(uint16_t*)(phi53 + 16) != 65535)
	{
		do
		{
			phi54 = 0;
			phi55 = phi56;
			if (*(uint16_t*)(phi53 + (phi56 << 1) + 16) != 65535)
			{
				phi54 = 0;
				phi55 = 1000;
				if (phi56 == 999)
				{
					break;
				}
				else 
				{
					phi56 = phi56 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi53 + (phi56 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi57 = phi54;
		uint64_t anon59 = phi55 - 1;
		phi58 = anon59;
		uint64_t phi60 = phi57;
		if (anon59 > -1)
		{
			uint64_t anon63;
			do
			{
				uint8_t* phi61 = (uint8_t*)0x400a44;
				uint64_t phi62 = 1;
				if (phi60 != 0)
				{
					phi61 = (uint8_t*)0x400a48;
					phi62 = 20;
					if (phi60 != ((uint64_t)((__zext uint128_t)phi60 * 970881267037344822 >> 64) - (phi60 >> 63)) * 19)
					{
						phi61 = (uint8_t*)0x400a49;
						phi62 = phi60 + 1;
					}
				}
				phi57 = phi62;
				printf(phi61);
				anon63 = phi58 - 1;
				phi58 = anon63;
				phi60 = phi57;
			}
			while (anon63 > -1);
		}
		phi53 = *(uint64_t*)(phi53 + 8);
		phi54 = phi57;
		phi55 = 1000;
	}
	while (*(uint64_t*)(phi53 + 8) != 0);
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
