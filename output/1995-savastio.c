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
			uint64_t phi_in25;
			uint64_t phi_in26;
			uint64_t phi_in27;
			uint64_t phi_in28;
			phi15 = phi_in11;
			phi13 = phi_in12;
			uint16_t phi_in17 = phi16;
			uint64_t phi_in18 = phi15;
			uint64_t phi_in19 = *(uint64_t*)phi15;
			uint64_t phi20 = phi13;
			uint64_t phi_in21 = phi13;
			uint64_t phi22 = 0;
			uint16_t phi23 = phi_in17;
			uint64_t phi_in24 = 0;
			do
			{
				phi_in25 = phi_in18;
				phi_in26 = phi_in21;
				phi_in27 = phi22;
				phi_in28 = phi_in24;
				if (phi_in19 == 0 ^ phi23 == 65535)
				{
					uint64_t phi31;
					uint64_t phi32;
					uint64_t phi33;
					uint16_t anon29 = (uint16_t)phi_in27 + phi23 * (uint16_t)phi14;
					uint128_t anon30 = (__zext uint128_t)anon29 * 3777893186295716171 >> 75;
					*(uint16_t*)phi_in26 = anon29 + (uint16_t)anon30 * 55536;
					if (phi_in28 < 1000)
					{
						phi31 = phi_in25;
						phi32 = phi_in19;
						phi33 = phi20 + 2;
						phi_in21 = phi_in26 + 2;
						phi_in24 = phi_in28 + 1;
					}
					else 
					{
						uint64_t phi_in34;
						uint64_t* anon35 = (uint64_t*)phi_in25;
						phi_in34 = *anon35;
						uint64_t phi36 = phi_in19;
						if (*anon35 == 0)
						{
							uint8_t* anon38 = malloc(2016);
							uint64_t anon37 = (uint64_t)anon38;
							*anon35 = anon37;
							*(uint64_t*)anon38 = 0;
							*(uint64_t*)(anon37 + 8) = phi_in25;
							phi_in34 = anon37;
							phi36 = anon37;
						}
						phi31 = phi_in34;
						phi32 = *(uint64_t*)phi36;
						phi33 = phi36 + 16;
						phi_in21 = phi_in34 + 16;
						phi_in24 = 0;
					}
					phi_in18 = phi31;
					phi_in19 = phi32;
					phi20 = phi33;
					phi22 = (uint64_t)anon30;
					phi23 = *(uint16_t*)phi33;
				}
			}
			while (phi_in19 == 0 ^ phi23 == 65535);
			uint64_t phi_in39 = phi_in25;
			uint64_t phi40 = phi_in26;
			uint64_t phi_in41 = phi_in25;
			uint64_t phi42 = phi_in27;
			uint64_t phi43 = phi_in26;
			uint64_t phi44 = phi_in28;
			uint64_t phi45 = phi_in27 & 0xffff;
			if (phi_in27 != 0)
			{
				uint64_t phi55;
				do
				{
					uint64_t phi47;
					uint64_t phi_in48;
					uint64_t anon49;
					uint64_t phi50;
					uint128_t anon46 = (__zext uint128_t)phi45 * 3777893186295716171 >> 75;
					*(uint16_t*)phi43 = (uint16_t)phi42 + (uint16_t)anon46 * 55536;
					if (phi44 < 999)
					{
						phi47 = phi_in41;
						phi43 = phi43 + 2;
						anon49 = (uint64_t)anon46;
						phi_in48 = anon49;
						phi50 = phi44 + 1;
					}
					else 
					{
						uint64_t* anon51 = (uint64_t*)phi_in41;
						phi_in41 = *anon51;
						uint64_t phi52 = anon49;
						if (*anon51 == 0)
						{
							uint8_t* anon54 = malloc(2016);
							uint64_t anon53 = (uint64_t)anon54;
							*anon51 = anon53;
							*(uint64_t*)anon54 = 0;
							*(uint64_t*)(anon53 + 8) = phi_in41;
							phi_in41 = anon53;
							phi52 = anon49 & 0xffff;
						}
						phi_in48 = phi52;
						phi47 = phi_in41;
						phi43 = phi_in41 + 16;
						phi50 = 0;
					}
					phi_in39 = phi47;
					phi55 = phi_in48;
					phi40 = phi43;
					phi_in41 = phi_in39;
					phi42 = anon49;
					phi44 = phi50;
					phi45 = anon49;
				}
				while (phi55 != 0);
			}
			*(uint16_t*)phi40 = 65535;
			phi10 = phi_in39;
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
	uint64_t phi58 = 0;
	uint64_t phi59 = 0;
	uint64_t phi60 = 1;
	if (*(uint16_t*)(phi57 + 16) != 65535)
	{
		do
		{
			phi58 = 0;
			phi59 = phi60;
			if (*(uint16_t*)(phi57 + (phi60 << 1) + 16) != 65535)
			{
				phi58 = 0;
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
		while (*(uint16_t*)(phi57 + (phi60 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi_in61 = phi58;
		uint64_t anon63 = phi59 - 1;
		phi62 = anon63;
		uint64_t phi64 = phi_in61;
		phi58 = phi_in61;
		if (anon63 > -1)
		{
			uint64_t anon67;
			do
			{
				uint8_t* phi65 = (uint8_t*)0x400a44;
				uint64_t phi66 = 1;
				if (phi64 != 0)
				{
					phi65 = (uint8_t*)0x400a48;
					phi66 = 20;
					if (phi64 != ((uint64_t)((__zext uint128_t)phi64 * 970881267037344822 >> 64) - (phi64 >> 63)) * 19)
					{
						phi65 = (uint8_t*)0x400a49;
						phi66 = phi64 + 1;
					}
				}
				phi58 = phi66;
				printf(phi65);
				anon67 = phi62 - 1;
				phi62 = anon67;
				phi64 = phi58;
			}
			while (anon67 > -1);
		}
		phi57 = *(uint64_t*)(phi57 + 8);
		phi58 = phi58;
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
