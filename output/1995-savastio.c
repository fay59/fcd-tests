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
	uint64_t phi61;
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
		uint64_t anon55;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi14 = 2;
		uint64_t phi15 = anon6;
		uint16_t phi16 = 1;
		do
		{
			uint64_t anon25;
			uint8_t* anon26;
			uint64_t phi_in27;
			uint64_t phi_in28;
			uint64_t phi_in29;
			uint64_t phi_in30;
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
				anon26 = malloc(2016);
				anon25 = (uint64_t)anon26;
				*(uint64_t*)(anon25 + 8) = phi_in18;
				phi_in27 = phi19;
				phi_in28 = phi_in21;
				phi_in29 = phi22;
				phi_in30 = phi_in24;
				if (phi_in27 == 0 ^ phi23 == 65535)
				{
					uint64_t phi33;
					uint64_t phi34;
					uint64_t phi35;
					uint16_t anon31 = (uint16_t)phi_in29 + phi23 * (uint16_t)phi14;
					uint128_t anon32 = (__zext uint128_t)anon31 * 3777893186295716171 >> 75;
					*(uint16_t*)phi_in28 = anon31 + (uint16_t)anon32 * 55536;
					if (phi_in30 < 1000)
					{
						phi33 = *(uint64_t*)(anon25 + 8);
						phi34 = phi_in27;
						phi35 = phi20 + 2;
						phi_in21 = phi_in28 + 2;
						phi_in24 = phi_in30 + 1;
					}
					else 
					{
						uint64_t phi_in36;
						uint64_t* anon37 = (uint64_t*)*(uint64_t*)(anon25 + 8);
						phi_in36 = *anon37;
						uint64_t phi38 = phi_in27;
						if (*anon37 == 0)
						{
							uint8_t* anon40 = malloc(2016);
							uint64_t anon39 = (uint64_t)anon40;
							*anon37 = anon39;
							*(uint64_t*)anon40 = 0;
							*(uint64_t*)(anon39 + 8) = *(uint64_t*)(anon25 + 8);
							phi_in36 = anon39;
							phi38 = anon39;
						}
						phi33 = phi_in36;
						phi34 = *(uint64_t*)phi38;
						phi35 = phi38 + 16;
						phi_in21 = phi_in36 + 16;
						phi_in24 = 0;
					}
					phi_in18 = phi33;
					phi19 = phi34;
					phi20 = phi35;
					phi22 = (uint64_t)anon32;
					phi23 = *(uint16_t*)phi35;
				}
			}
			while (phi_in27 == 0 ^ phi23 == 65535);
			phi10 = *(uint64_t*)(anon25 + 8);
			uint64_t phi41 = phi_in28;
			uint64_t phi42 = phi_in29;
			uint64_t phi43 = phi_in28;
			uint64_t phi44 = phi_in30;
			uint64_t phi45 = phi_in29 & 0xffff;
			if (phi_in29 != 0)
			{
				uint64_t phi54;
				do
				{
					uint64_t phi_in48;
					uint64_t phi_in49;
					uint64_t phi_in50;
					uint64_t anon51;
					uint64_t phi_in46 = *(uint64_t*)(anon25 + 8);
					uint128_t anon47 = (__zext uint128_t)phi45 * 3777893186295716171 >> 75;
					*(uint16_t*)phi43 = (uint16_t)phi42 + (uint16_t)anon47 * 55536;
					if (phi44 < 999)
					{
						phi_in48 = phi_in46;
						phi_in49 = phi43 + 2;
						anon51 = (uint64_t)anon47;
						phi_in50 = anon51;
						phi_in30 = phi44 + 1;
					}
					else 
					{
						uint64_t phi52;
						uint64_t* anon53 = (uint64_t*)phi_in46;
						phi52 = *anon53;
						phi_in50 = anon51;
						if (*anon53 == 0)
						{
							*anon53 = anon25;
							*(uint64_t*)anon26 = 0;
							*(uint64_t*)(anon25 + 8) = phi_in46;
							phi52 = anon25;
							phi_in50 = anon51 & 0xffff;
						}
						phi_in46 = phi52;
						phi_in48 = phi_in46;
						phi_in49 = phi_in46 + 16;
						phi_in30 = 0;
					}
					phi54 = phi_in50;
					phi10 = phi_in48;
					phi41 = phi_in49;
					*(uint64_t*)(anon25 + 8) = phi_in48;
					phi42 = anon51;
					phi43 = phi_in49;
					phi44 = phi_in30;
					phi45 = anon51;
				}
				while (phi54 != 0);
			}
			*(uint16_t*)phi41 = 65535;
			anon55 = phi14 & 0xffff;
			if (anon4 > anon55)
			{
				phi_in11 = phi15;
				phi_in12 = phi13;
				phi14 = anon55 + 1;
				phi16 = 65535;
			}
		}
		while (anon4 > anon55);
	}
	uint64_t phi56 = phi10;
	uint64_t phi_in57 = 0;
	uint64_t phi58 = 0;
	uint64_t phi59 = 1;
	if (*(uint16_t*)(phi10 + 16) != 65535)
	{
		do
		{
			phi56 = phi10;
			phi_in57 = 0;
			phi58 = phi59;
			if (*(uint16_t*)(phi10 + (phi59 << 1) + 16) != 65535)
			{
				phi56 = phi10;
				phi_in57 = 0;
				phi58 = 1000;
				if (phi59 == 999)
				{
					break;
				}
				else 
				{
					phi59 = phi59 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi10 + (phi59 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi_in60 = phi_in57;
		uint64_t anon62 = phi58 - 1;
		phi61 = anon62;
		uint64_t phi63 = phi_in60;
		phi_in57 = phi_in60;
		if (anon62 > -1)
		{
			uint64_t anon65;
			do
			{
				uint8_t* phi64 = (uint8_t*)0x400a44;
				phi_in57 = 1;
				if (phi63 != 0)
				{
					phi64 = (uint8_t*)0x400a48;
					phi_in57 = 20;
					if (phi63 != ((uint64_t)((__zext uint128_t)phi63 * 970881267037344822 >> 64) - (phi63 >> 63)) * 19)
					{
						phi64 = (uint8_t*)0x400a49;
						phi_in57 = phi63 + 1;
					}
				}
				printf(phi64);
				anon65 = phi61 - 1;
				phi61 = anon65;
				phi63 = phi_in57;
				phi_in57 = phi_in57;
			}
			while (anon65 > -1);
		}
		phi56 = *(uint64_t*)(phi56 + 8);
		phi58 = 1000;
	}
	while (*(uint64_t*)(phi56 + 8) != 0);
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
