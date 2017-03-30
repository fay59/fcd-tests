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
	uint64_t phi62;
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
		uint64_t anon56;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi14 = 2;
		uint64_t phi15 = anon6;
		uint16_t phi16 = 1;
		do
		{
			uint64_t phi_in24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t phi27;
			uint64_t phi_in28;
			phi15 = phi_in11;
			phi13 = phi_in12;
			uint16_t phi17 = phi16;
			uint64_t phi_in18 = phi15;
			uint64_t phi_in19 = *(uint64_t*)phi15;
			uint64_t phi20 = phi13;
			uint64_t phi_in21 = phi13;
			uint64_t phi22 = 0;
			uint64_t phi_in23 = 0;
			do
			{
				phi_in24 = phi_in18;
				phi25 = phi_in19;
				phi26 = phi_in21;
				phi27 = phi22;
				phi_in28 = phi_in23;
				if (phi25 == 0 ^ phi17 == 65535)
				{
					uint64_t phi31;
					uint64_t phi_in32;
					uint64_t phi33;
					uint64_t phi34;
					uint16_t anon29 = (uint16_t)phi27 + phi17 * (uint16_t)phi14;
					uint128_t anon30 = (__zext uint128_t)anon29 * 3777893186295716171 >> 75;
					*(uint16_t*)phi26 = anon29 + (uint16_t)anon30 * 55536;
					if (phi_in28 < 1000)
					{
						phi31 = phi_in24;
						phi_in32 = phi20 + 2;
						phi33 = phi26 + 2;
						phi34 = phi_in28 + 1;
					}
					else 
					{
						uint64_t phi35;
						uint64_t* anon36 = (uint64_t*)phi_in24;
						phi35 = *anon36;
						uint64_t phi37 = phi25;
						if (*anon36 == 0)
						{
							uint8_t* anon39 = malloc(2016);
							uint64_t anon38 = (uint64_t)anon39;
							*anon36 = anon38;
							*(uint64_t*)anon39 = 0;
							*(uint64_t*)(anon38 + 8) = phi_in24;
							phi35 = anon38;
							phi37 = anon38;
						}
						phi31 = phi35;
						phi25 = *(uint64_t*)phi37;
						phi_in32 = phi37 + 16;
						phi33 = phi31 + 16;
						phi34 = 0;
					}
					phi_in18 = phi31;
					phi_in19 = phi25;
					phi20 = phi_in32;
					phi_in21 = phi33;
					phi22 = (uint64_t)anon30;
					phi17 = *(uint16_t*)phi_in32;
					phi_in23 = phi34;
				}
			}
			while (phi25 == 0 ^ phi17 == 65535);
			uint64_t phi40 = phi_in24;
			uint8_t* anon42 = malloc(2016);
			uint64_t anon41 = (uint64_t)anon42;
			*(uint64_t*)(anon41 + 8) = phi_in24;
			uint64_t phi43 = phi26;
			uint64_t phi44 = phi_in28;
			uint64_t phi45 = phi27 & 0xffff;
			if (phi27 != 0)
			{
				uint64_t phi55;
				do
				{
					uint64_t phi_in48;
					uint64_t phi49;
					uint64_t phi_in50;
					uint64_t anon51;
					uint64_t phi52;
					uint64_t phi_in46 = *(uint64_t*)(anon41 + 8);
					uint128_t anon47 = (__zext uint128_t)phi45 * 3777893186295716171 >> 75;
					*(uint16_t*)phi43 = (uint16_t)phi27 + (uint16_t)anon47 * 55536;
					if (phi44 < 999)
					{
						phi_in48 = phi_in46;
						phi49 = phi43 + 2;
						anon51 = (uint64_t)anon47;
						phi_in50 = anon51;
						phi52 = phi44 + 1;
					}
					else 
					{
						uint64_t* anon53 = (uint64_t*)phi_in46;
						phi_in46 = *anon53;
						uint64_t phi54 = anon51;
						if (*anon53 == 0)
						{
							*anon53 = anon41;
							*(uint64_t*)anon42 = 0;
							*(uint64_t*)(anon41 + 8) = phi_in46;
							phi_in46 = anon41;
							phi54 = anon51 & 0xffff;
						}
						phi_in50 = phi54;
						phi_in48 = phi_in46;
						phi49 = phi_in46 + 16;
						phi52 = 0;
					}
					phi26 = phi49;
					phi55 = phi_in50;
					phi40 = phi_in48;
					*(uint64_t*)(anon41 + 8) = phi_in48;
					phi27 = anon51;
					phi43 = phi26;
					phi44 = phi52;
					phi45 = anon51;
				}
				while (phi55 != 0);
			}
			phi10 = phi40;
			*(uint16_t*)phi26 = 65535;
			anon56 = phi14 & 0xffff;
			if (anon4 > anon56)
			{
				phi_in11 = phi15;
				phi_in12 = phi13;
				phi14 = anon56 + 1;
				phi16 = 65535;
			}
		}
		while (anon4 > anon56);
	}
	uint64_t phi57 = phi10;
	uint64_t phi_in58 = 0;
	uint64_t phi59 = 0;
	uint64_t phi60 = 1;
	if (*(uint16_t*)(phi10 + 16) != 65535)
	{
		do
		{
			phi57 = phi10;
			phi_in58 = 0;
			phi59 = phi60;
			if (*(uint16_t*)(phi10 + (phi60 << 1) + 16) != 65535)
			{
				phi57 = phi10;
				phi_in58 = 0;
				phi59 = 1000;
				if (phi60 == 999)
				{
					break;
				}
				else 
				{
					phi60 = phi60 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi10 + (phi60 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi61 = phi_in58;
		uint64_t anon63 = phi59 - 1;
		phi62 = anon63;
		uint64_t phi_in64 = phi61;
		if (anon63 > -1)
		{
			uint64_t anon67;
			do
			{
				uint8_t* phi65 = (uint8_t*)0x400a44;
				uint64_t phi66 = 1;
				if (phi61 != 0)
				{
					phi65 = (uint8_t*)0x400a48;
					phi66 = 20;
					if (phi61 != ((uint64_t)((__zext uint128_t)phi61 * 970881267037344822 >> 64) - (phi61 >> 63)) * 19)
					{
						phi65 = (uint8_t*)0x400a49;
						phi66 = phi61 + 1;
					}
				}
				phi_in58 = phi66;
				printf(phi65);
				anon67 = phi62 - 1;
				phi62 = anon67;
				phi61 = phi_in58;
				phi_in64 = phi_in58;
			}
			while (anon67 > -1);
		}
		phi57 = *(uint64_t*)(phi57 + 8);
		phi_in58 = phi_in64;
		phi59 = 1000;
	}
	while (*(uint64_t*)(phi57 + 8) != 0);
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
