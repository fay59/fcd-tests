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
	uint64_t phi66;
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
		uint64_t anon60;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi14 = 2;
		uint64_t phi15 = anon6;
		uint16_t phi_in16 = 1;
		do
		{
			uint64_t phi24;
			uint64_t phi25;
			uint64_t phi_in26;
			uint64_t phi27;
			uint64_t phi_in28;
			phi15 = phi_in11;
			phi13 = phi_in12;
			uint64_t phi_in17 = phi15;
			uint64_t phi18 = *(uint64_t*)phi15;
			uint64_t phi19 = phi13;
			uint64_t phi_in20 = phi13;
			uint64_t phi21 = 0;
			uint16_t phi22 = phi_in16;
			uint64_t phi_in23 = 0;
			do
			{
				phi24 = phi_in17;
				phi25 = phi18;
				phi_in26 = phi_in20;
				phi27 = phi21;
				phi_in28 = phi_in23;
				if (phi25 == 0 ^ phi22 == 65535)
				{
					uint64_t phi31;
					uint64_t phi_in32;
					uint64_t phi33;
					uint64_t phi34;
					uint16_t anon29 = (uint16_t)phi27 + phi22 * (uint16_t)phi14;
					uint128_t anon30 = (__zext uint128_t)anon29 * 3777893186295716171 >> 75;
					*(uint16_t*)phi_in26 = anon29 + (uint16_t)anon30 * 55536;
					if (phi_in28 < 1000)
					{
						phi31 = phi24;
						phi_in32 = phi19 + 2;
						phi33 = phi_in26 + 2;
						phi34 = phi_in28 + 1;
					}
					else 
					{
						uint64_t phi_in35;
						uint64_t* anon36 = (uint64_t*)phi24;
						phi_in35 = *anon36;
						uint64_t phi37 = phi25;
						if (*anon36 == 0)
						{
							uint8_t* anon39 = malloc(2016);
							uint64_t anon38 = (uint64_t)anon39;
							*anon36 = anon38;
							*(uint64_t*)anon39 = 0;
							*(uint64_t*)(anon38 + 8) = phi24;
							phi_in35 = anon38;
							phi37 = anon38;
						}
						phi31 = phi_in35;
						phi25 = *(uint64_t*)phi37;
						phi_in32 = phi37 + 16;
						phi33 = phi_in35 + 16;
						phi34 = 0;
					}
					phi_in17 = phi31;
					phi18 = phi25;
					phi19 = phi_in32;
					phi_in20 = phi33;
					phi21 = (uint64_t)anon30;
					phi22 = *(uint16_t*)phi_in32;
					phi_in23 = phi34;
				}
			}
			while (phi25 == 0 ^ phi22 == 65535);
			uint64_t phi40 = phi24;
			uint64_t phi41 = phi_in26;
			uint64_t phi42 = phi_in26;
			uint64_t phi43 = phi_in28;
			uint64_t phi44 = phi27 & 0xffff;
			if (phi27 != 0)
			{
				uint64_t phi58;
				do
				{
					uint64_t phi47;
					uint64_t phi_in48;
					uint64_t phi_in49;
					uint64_t anon50;
					uint64_t phi51;
					uint64_t phi_in45 = phi24;
					uint128_t anon46 = (__zext uint128_t)phi44 * 3777893186295716171 >> 75;
					*(uint16_t*)phi42 = (uint16_t)phi27 + (uint16_t)anon46 * 55536;
					if (phi43 < 999)
					{
						phi47 = phi_in45;
						phi_in48 = phi42 + 2;
						anon50 = (uint64_t)anon46;
						phi_in49 = anon50;
						phi51 = phi43 + 1;
					}
					else 
					{
						uint64_t phi52;
						uint64_t* anon53 = (uint64_t*)phi_in45;
						phi52 = *anon53;
						uint64_t phi54 = anon50;
						if (*anon53 == 0)
						{
							uint8_t* anon56 = malloc(2016);
							uint64_t anon55 = (uint64_t)anon56;
							*anon53 = anon55;
							*(uint64_t*)anon56 = 0;
							*(uint64_t*)(anon55 + 8) = phi_in45;
							phi52 = anon55;
							phi54 = anon50 & 0xffff;
						}
						phi_in45 = phi52;
						phi_in49 = phi54;
						phi47 = phi_in45;
						phi_in48 = phi_in45 + 16;
						phi51 = 0;
					}
					uint64_t phi_in57 = phi47;
					phi58 = phi_in49;
					phi40 = phi_in57;
					phi41 = phi_in48;
					phi24 = phi_in57;
					phi27 = anon50;
					phi42 = phi_in48;
					phi43 = phi51;
					phi44 = anon50;
				}
				while (phi58 != 0);
			}
			uint64_t phi_in59 = phi40;
			*(uint16_t*)phi41 = 65535;
			phi10 = phi_in59;
			anon60 = phi14 & 0xffff;
			if (anon4 > anon60)
			{
				phi_in11 = phi15;
				phi_in12 = phi13;
				phi14 = anon60 + 1;
				phi_in16 = 65535;
			}
		}
		while (anon4 > anon60);
	}
	uint64_t phi61 = phi10;
	uint64_t phi_in62 = 0;
	uint64_t phi63 = 0;
	uint64_t phi64 = 1;
	if (*(uint16_t*)(phi10 + 16) != 65535)
	{
		do
		{
			phi61 = phi10;
			phi_in62 = 0;
			phi63 = phi64;
			if (*(uint16_t*)(phi10 + (phi64 << 1) + 16) != 65535)
			{
				phi61 = phi10;
				phi_in62 = 0;
				phi63 = 1000;
				if (phi64 == 999)
				{
					break;
				}
				else 
				{
					phi64 = phi64 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi10 + (phi64 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi_in65 = phi_in62;
		uint64_t anon67 = phi63 - 1;
		phi66 = anon67;
		uint64_t phi68 = phi_in65;
		if (anon67 > -1)
		{
			uint64_t anon71;
			do
			{
				uint8_t* phi69 = (uint8_t*)0x400a44;
				uint64_t phi_in70 = 1;
				if (phi68 != 0)
				{
					phi69 = (uint8_t*)0x400a48;
					phi_in70 = 20;
					if (phi68 != ((uint64_t)((__zext uint128_t)phi68 * 970881267037344822 >> 64) - (phi68 >> 63)) * 19)
					{
						phi69 = (uint8_t*)0x400a49;
						phi_in70 = phi68 + 1;
					}
				}
				printf(phi69);
				anon71 = phi66 - 1;
				phi66 = anon71;
				phi68 = phi_in70;
				phi_in65 = phi_in70;
			}
			while (anon71 > -1);
		}
		phi61 = *(uint64_t*)(phi61 + 8);
		phi_in62 = phi_in65;
		phi63 = 1000;
	}
	while (*(uint64_t*)(phi61 + 8) != 0);
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
