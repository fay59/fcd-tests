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
	uint64_t phi63;
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
		uint64_t anon57;
		uint64_t phi_in11 = anon8;
		uint64_t phi_in12 = anon8 + 16;
		uint64_t phi13 = anon9;
		uint64_t phi14 = 2;
		uint64_t phi15 = anon6;
		uint16_t phi_in16 = 1;
		do
		{
			uint64_t anon24;
			uint64_t phi_in26;
			uint64_t phi27;
			uint64_t phi_in28;
			uint64_t phi_in29;
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
				uint8_t* anon25 = malloc(2016);
				anon24 = (uint64_t)anon25;
				*(uint64_t*)(anon24 + 8) = phi_in17;
				phi_in26 = phi18;
				phi27 = phi_in20;
				phi_in28 = phi21;
				phi_in29 = phi_in23;
				if (phi_in26 == 0 ^ phi22 == 65535)
				{
					uint64_t phi32;
					uint64_t phi_in33;
					uint64_t phi34;
					uint16_t anon30 = (uint16_t)phi_in28 + phi22 * (uint16_t)phi14;
					uint128_t anon31 = (__zext uint128_t)anon30 * 3777893186295716171 >> 75;
					*(uint16_t*)phi27 = anon30 + (uint16_t)anon31 * 55536;
					if (phi_in29 < 1000)
					{
						phi32 = *(uint64_t*)(anon24 + 8);
						phi18 = phi_in26;
						phi_in33 = phi19 + 2;
						phi34 = phi27 + 2;
						phi_in23 = phi_in29 + 1;
					}
					else 
					{
						uint64_t phi_in35;
						uint64_t* anon36 = (uint64_t*)*(uint64_t*)(anon24 + 8);
						phi_in35 = *anon36;
						uint64_t phi37 = phi_in26;
						if (*anon36 == 0)
						{
							*anon36 = anon24;
							*(uint64_t*)anon25 = 0;
							phi_in35 = anon24;
							phi37 = anon24;
						}
						phi32 = phi_in35;
						phi18 = *(uint64_t*)phi37;
						phi_in33 = phi37 + 16;
						phi34 = phi_in35 + 16;
						phi_in23 = 0;
					}
					phi_in17 = phi32;
					phi19 = phi_in33;
					phi_in20 = phi34;
					phi21 = (uint64_t)anon31;
					phi22 = *(uint16_t*)phi_in33;
				}
			}
			while (phi_in26 == 0 ^ phi22 == 65535);
			uint64_t phi38 = *(uint64_t*)(anon24 + 8);
			uint64_t phi39 = *(uint64_t*)(anon24 + 8);
			uint64_t phi40 = phi_in28;
			uint64_t phi41 = phi27;
			uint64_t phi42 = phi_in29;
			uint64_t phi43 = phi_in28 & 0xffff;
			if (phi_in28 != 0)
			{
				uint64_t phi56;
				do
				{
					uint64_t phi47;
					uint64_t phi48;
					uint64_t phi_in49;
					uint64_t anon50;
					uint64_t phi51;
					uint8_t* anon45 = malloc(2016);
					uint64_t anon44 = (uint64_t)anon45;
					*(uint64_t*)(anon44 + 8) = phi39;
					uint128_t anon46 = (__zext uint128_t)phi43 * 3777893186295716171 >> 75;
					*(uint16_t*)phi41 = (uint16_t)phi40 + (uint16_t)anon46 * 55536;
					if (phi42 < 999)
					{
						phi47 = *(uint64_t*)(anon44 + 8);
						phi48 = phi41 + 2;
						anon50 = (uint64_t)anon46;
						phi_in49 = anon50;
						phi51 = phi42 + 1;
					}
					else 
					{
						uint64_t phi52;
						uint64_t* anon53 = (uint64_t*)*(uint64_t*)(anon44 + 8);
						phi52 = *anon53;
						uint64_t phi54 = anon50;
						if (*anon53 == 0)
						{
							*anon53 = anon44;
							*(uint64_t*)anon45 = 0;
							phi52 = anon44;
							phi54 = anon50 & 0xffff;
						}
						uint64_t phi_in55 = phi52;
						phi_in49 = phi54;
						phi47 = phi_in55;
						phi48 = phi_in55 + 16;
						phi51 = 0;
					}
					phi38 = phi47;
					phi27 = phi48;
					phi56 = phi_in49;
					phi39 = phi38;
					phi40 = anon50;
					phi41 = phi27;
					phi42 = phi51;
					phi43 = anon50;
				}
				while (phi56 != 0);
			}
			phi10 = phi38;
			*(uint16_t*)phi27 = 65535;
			anon57 = phi14 & 0xffff;
			if (anon4 > anon57)
			{
				phi_in11 = phi15;
				phi_in12 = phi13;
				phi14 = anon57 + 1;
				phi_in16 = 65535;
			}
		}
		while (anon4 > anon57);
	}
	uint64_t phi58 = phi10;
	uint64_t phi_in59 = 0;
	uint64_t phi60 = 0;
	uint64_t phi61 = 1;
	if (*(uint16_t*)(phi58 + 16) != 65535)
	{
		do
		{
			phi_in59 = 0;
			phi60 = phi61;
			if (*(uint16_t*)(phi58 + (phi61 << 1) + 16) != 65535)
			{
				phi_in59 = 0;
				phi60 = 1000;
				if (phi61 == 999)
				{
					break;
				}
				else 
				{
					phi61 = phi61 + 1;
				}
			}
		}
		while (*(uint16_t*)(phi58 + (phi61 << 1) + 16) != 65535);
	}
	do
	{
		uint64_t phi62 = phi_in59;
		uint64_t anon64 = phi60 - 1;
		phi63 = anon64;
		uint64_t phi65 = phi62;
		if (anon64 > -1)
		{
			uint64_t anon67;
			do
			{
				uint8_t* phi66 = (uint8_t*)0x400a44;
				phi_in59 = 1;
				if (phi65 != 0)
				{
					phi66 = (uint8_t*)0x400a48;
					phi_in59 = 20;
					if (phi65 != ((uint64_t)((__zext uint128_t)phi65 * 970881267037344822 >> 64) - (phi65 >> 63)) * 19)
					{
						phi66 = (uint8_t*)0x400a49;
						phi_in59 = phi65 + 1;
					}
				}
				printf(phi66);
				anon67 = phi63 - 1;
				phi63 = anon67;
				phi65 = phi_in59;
				phi62 = phi_in59;
			}
			while (anon67 > -1);
		}
		phi58 = *(uint64_t*)(phi58 + 8);
		phi_in59 = phi62;
		phi60 = 1000;
	}
	while (*(uint64_t*)(phi58 + 8) != 0);
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
