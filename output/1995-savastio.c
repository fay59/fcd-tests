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
	uint64_t phi64;
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
		uint64_t anon58;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi14 = 2;
		uint64_t phi15 = anon6;
		uint16_t phi16 = 1;
		do
		{
			uint64_t phi_in25;
			uint64_t phi26;
			uint64_t phi_in27;
			uint64_t phi_in28;
			uint64_t phi_in29;
			phi15 = phi_in11;
			phi13 = phi_in12;
			uint16_t phi_in17 = phi16;
			uint64_t phi_in18 = phi15;
			uint64_t phi19 = *(uint64_t*)phi15;
			uint64_t phi20 = phi13;
			uint64_t phi_in21 = phi13;
			uint64_t phi22 = 0;
			uint16_t phi23 = phi_in17;
			uint64_t phi_in24 = 0;
			do
			{
				phi_in25 = phi_in18;
				phi26 = phi19;
				phi_in27 = phi_in21;
				phi_in28 = phi22;
				phi_in29 = phi_in24;
				if (phi26 == 0 ^ phi23 == 65535)
				{
					uint64_t phi32;
					uint64_t phi33;
					uint64_t phi34;
					uint64_t phi35;
					uint16_t anon30 = (uint16_t)phi_in28 + phi23 * (uint16_t)phi14;
					uint128_t anon31 = (__zext uint128_t)anon30 * 3777893186295716171 >> 75;
					*(uint16_t*)phi_in27 = anon30 + (uint16_t)anon31 * 55536;
					if (phi_in29 < 1000)
					{
						phi_in18 = phi_in25;
						phi32 = phi26;
						phi33 = phi20 + 2;
						phi34 = phi_in27 + 2;
						phi35 = phi_in29 + 1;
					}
					else 
					{
						uint64_t phi36;
						uint64_t* anon37 = (uint64_t*)phi_in25;
						phi36 = *anon37;
						if (*anon37 == 0)
						{
							uint8_t* anon39 = malloc(2016);
							uint64_t anon38 = (uint64_t)anon39;
							*anon37 = anon38;
							*(uint64_t*)anon39 = 0;
							*(uint64_t*)(anon38 + 8) = phi_in25;
							phi36 = anon38;
							phi26 = anon38;
						}
						uint64_t phi_in40 = phi36;
						phi_in18 = phi_in40;
						phi32 = *(uint64_t*)phi26;
						phi33 = phi26 + 16;
						phi34 = phi_in40 + 16;
						phi35 = 0;
					}
					phi19 = phi32;
					phi20 = phi33;
					phi_in21 = phi34;
					phi22 = (uint64_t)anon31;
					phi23 = *(uint16_t*)phi33;
					phi_in24 = phi35;
				}
			}
			while (phi26 == 0 ^ phi23 == 65535);
			uint64_t phi41 = phi_in25;
			uint64_t phi42 = phi_in27;
			uint8_t* anon44 = malloc(2016);
			uint64_t anon43 = (uint64_t)anon44;
			*(uint64_t*)(anon43 + 8) = phi_in25;
			uint64_t phi45 = phi_in28;
			uint64_t phi46 = phi_in27;
			uint64_t phi47 = phi_in29;
			uint64_t phi48 = phi_in28 & 0xffff;
			if (phi_in28 != 0)
			{
				uint64_t phi57;
				do
				{
					uint64_t phi_in50;
					uint64_t phi_in51;
					uint64_t anon52;
					uint64_t phi53;
					uint128_t anon49 = (__zext uint128_t)phi48 * 3777893186295716171 >> 75;
					*(uint16_t*)phi46 = (uint16_t)phi45 + (uint16_t)anon49 * 55536;
					if (phi47 < 999)
					{
						phi_in25 = *(uint64_t*)(anon43 + 8);
						phi_in50 = phi46 + 2;
						anon52 = (uint64_t)anon49;
						phi_in51 = anon52;
						phi53 = phi47 + 1;
					}
					else 
					{
						uint64_t phi_in54;
						uint64_t* anon55 = (uint64_t*)*(uint64_t*)(anon43 + 8);
						phi_in54 = *anon55;
						uint64_t phi56 = anon52;
						if (*anon55 == 0)
						{
							*anon55 = anon43;
							*(uint64_t*)anon44 = 0;
							phi_in54 = anon43;
							phi56 = anon52 & 0xffff;
						}
						phi_in51 = phi56;
						phi_in25 = phi_in54;
						phi_in50 = phi_in54 + 16;
						phi53 = 0;
					}
					phi57 = phi_in51;
					phi41 = phi_in25;
					phi42 = phi_in50;
					*(uint64_t*)(anon43 + 8) = phi_in25;
					phi45 = anon52;
					phi46 = phi_in50;
					phi47 = phi53;
					phi48 = anon52;
				}
				while (phi57 != 0);
			}
			phi10 = phi41;
			*(uint16_t*)phi42 = 65535;
			anon58 = phi14 & 0xffff;
			if (anon4 > anon58)
			{
				phi_in11 = phi15;
				phi_in12 = phi13;
				phi14 = anon58 + 1;
				phi16 = 65535;
			}
		}
		while (anon4 > anon58);
	}
	uint64_t phi59 = phi10;
	uint64_t phi60 = 0;
	uint64_t phi61 = 0;
	uint64_t phi62 = 1;
	if (*(uint16_t*)(phi10 + 16) != 65535)
	{
		do
		{
			phi59 = phi10;
			phi60 = 0;
			phi61 = phi62;
			if (*(uint16_t*)(phi10 + (phi62 << 1) + 16) != 65535)
			{
				phi59 = phi10;
				phi60 = 0;
				phi61 = 1000;
				if (phi62 == 999)
				{
					break;
				}
				else 
				{
					phi62 = phi62 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi10 + (phi62 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi63 = phi60;
		uint64_t anon65 = phi61 - 1;
		phi64 = anon65;
		uint64_t phi66 = phi63;
		if (anon65 > -1)
		{
			uint64_t anon69;
			do
			{
				uint8_t* phi67 = (uint8_t*)0x400a44;
				uint64_t phi68 = 1;
				if (phi66 != 0)
				{
					phi67 = (uint8_t*)0x400a48;
					phi68 = 20;
					if (phi66 != ((uint64_t)((__zext uint128_t)phi66 * 970881267037344822 >> 64) - (phi66 >> 63)) * 19)
					{
						phi67 = (uint8_t*)0x400a49;
						phi68 = phi66 + 1;
					}
				}
				phi63 = phi68;
				printf(phi67);
				anon69 = phi64 - 1;
				phi64 = anon69;
				phi66 = phi63;
			}
			while (anon69 > -1);
		}
		phi59 = *(uint64_t*)(phi59 + 8);
		phi60 = phi63;
		phi61 = 1000;
	}
	while (*(uint64_t*)(phi59 + 8) != 0);
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
