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
	uint64_t phi59;
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
		uint64_t anon53;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi14 = 2;
		phi_in11 = anon6;
		uint16_t phi15 = 1;
		do
		{
			uint64_t phi_in24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			phi_in11 = phi_in11;
			phi13 = phi_in12;
			uint16_t phi_in16 = phi15;
			uint64_t phi_in17 = phi_in11;
			uint64_t phi18 = *(uint64_t*)phi_in11;
			uint64_t phi19 = phi13;
			uint64_t phi_in20 = phi13;
			uint64_t phi_in21 = 0;
			uint16_t phi22 = phi_in16;
			uint64_t phi_in23 = 0;
			do
			{
				phi_in24 = phi_in17;
				phi25 = phi18;
				phi26 = phi_in20;
				phi27 = phi_in23;
				if (phi25 == 0 ^ phi22 == 65535)
				{
					uint64_t phi30;
					uint64_t phi31;
					uint64_t phi32;
					uint16_t anon28 = (uint16_t)phi_in21 + phi22 * (uint16_t)phi14;
					uint128_t anon29 = (__zext uint128_t)anon28 * 3777893186295716171 >> 75;
					*(uint16_t*)phi26 = anon28 + (uint16_t)anon29 * 55536;
					if (phi27 < 1000)
					{
						phi_in17 = phi_in24;
						phi30 = phi25;
						phi19 = phi19 + 2;
						phi31 = phi26 + 2;
						phi32 = phi27 + 1;
					}
					else 
					{
						uint64_t phi33;
						uint64_t* anon34 = (uint64_t*)phi_in24;
						phi33 = *anon34;
						if (*anon34 == 0)
						{
							uint8_t* anon36 = malloc(2016);
							uint64_t anon35 = (uint64_t)anon36;
							*anon34 = anon35;
							*(uint64_t*)anon36 = 0;
							*(uint64_t*)(anon35 + 8) = phi_in24;
							phi33 = anon35;
							phi25 = anon35;
						}
						phi_in17 = phi33;
						phi30 = *(uint64_t*)phi25;
						phi19 = phi25 + 16;
						phi31 = phi_in17 + 16;
						phi32 = 0;
					}
					phi18 = phi30;
					phi_in20 = phi31;
					phi_in21 = (uint64_t)anon29;
					phi22 = *(uint16_t*)phi19;
					phi_in23 = phi32;
				}
			}
			while (phi25 == 0 ^ phi22 == 65535);
			uint64_t phi37 = phi_in24;
			uint64_t phi38 = phi26;
			uint64_t phi39 = phi_in24;
			uint64_t phi40 = phi_in21;
			uint64_t phi41 = phi_in21 & 0xffff;
			if (phi_in21 != 0)
			{
				uint64_t phi52;
				do
				{
					uint64_t phi45;
					uint64_t phi46;
					uint64_t phi_in47;
					uint64_t anon48;
					uint64_t phi_in49;
					uint8_t* anon43 = malloc(2016);
					uint64_t anon42 = (uint64_t)anon43;
					*(uint64_t*)(anon42 + 8) = phi39;
					uint128_t anon44 = (__zext uint128_t)phi41 * 3777893186295716171 >> 75;
					*(uint16_t*)phi26 = (uint16_t)phi40 + (uint16_t)anon44 * 55536;
					if (phi27 < 999)
					{
						phi45 = *(uint64_t*)(anon42 + 8);
						phi46 = phi26 + 2;
						anon48 = (uint64_t)anon44;
						phi_in47 = anon48;
						phi_in49 = phi27 + 1;
					}
					else 
					{
						uint64_t* anon50 = (uint64_t*)*(uint64_t*)(anon42 + 8);
						phi45 = *anon50;
						uint64_t phi51 = anon48;
						if (*anon50 == 0)
						{
							*anon50 = anon42;
							*(uint64_t*)anon43 = 0;
							phi45 = anon42;
							phi51 = anon48 & 0xffff;
						}
						phi_in47 = phi51;
						phi46 = phi45 + 16;
						phi_in49 = 0;
					}
					phi37 = phi45;
					phi38 = phi46;
					phi52 = phi_in47;
					phi39 = phi37;
					phi40 = anon48;
					phi26 = phi38;
					phi27 = phi_in49;
					phi41 = anon48;
				}
				while (phi52 != 0);
			}
			phi10 = phi37;
			*(uint16_t*)phi38 = 65535;
			anon53 = phi14 & 0xffff;
			if (anon4 > anon53)
			{
				phi_in12 = phi13;
				phi14 = anon53 + 1;
				phi15 = 65535;
			}
		}
		while (anon4 > anon53);
	}
	uint64_t phi54 = phi10;
	uint64_t phi55 = 0;
	uint64_t phi56 = 0;
	uint64_t phi57 = 1;
	if (*(uint16_t*)(phi54 + 16) != 65535)
	{
		do
		{
			phi55 = 0;
			phi56 = phi57;
			if (*(uint16_t*)(phi54 + (phi57 << 1) + 16) != 65535)
			{
				phi55 = 0;
				phi56 = 1000;
				if (phi57 == 999)
				{
					break;
				}
				else 
				{
					phi57 = phi57 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi54 + (phi57 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi_in58 = phi55;
		uint64_t anon60 = phi56 - 1;
		phi59 = anon60;
		uint64_t phi61 = phi_in58;
		phi55 = phi_in58;
		if (anon60 > -1)
		{
			uint64_t anon64;
			do
			{
				uint8_t* phi62 = (uint8_t*)0x400a44;
				uint64_t phi63 = 1;
				if (phi61 != 0)
				{
					phi62 = (uint8_t*)0x400a48;
					phi63 = 20;
					if (phi61 != ((uint64_t)((__zext uint128_t)phi61 * 970881267037344822 >> 64) - (phi61 >> 63)) * 19)
					{
						phi62 = (uint8_t*)0x400a49;
						phi63 = phi61 + 1;
					}
				}
				phi_in58 = phi63;
				printf(phi62);
				anon64 = phi59 - 1;
				phi59 = anon64;
				phi61 = phi_in58;
				phi55 = phi_in58;
			}
			while (anon64 > -1);
		}
		phi54 = *(uint64_t*)(phi54 + 8);
		phi56 = 1000;
	}
	while (*(uint64_t*)(phi54 + 8) != 0);
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
