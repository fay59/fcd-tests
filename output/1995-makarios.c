#include "tests/bin/1995-makarios.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600980 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi1;
	uint32_t anon10;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi9;
		uint32_t phi_in5 = phi1;
		uint64_t phi6 = phi_in4;
		uint32_t phi7 = phi_in5;
		uint32_t phi8 = phi_in3;
		anon10 = (uint32_t)phi6 + 1;
		phi9 = anon10;
		if (anon10 != 0)
		{
			uint64_t phi16;
			uint64_t phi35;
			uint64_t phi38;
			uint32_t phi39;
			uint32_t phi40;
			uint32_t phi41;
			uint32_t anon47;
			uint32_t anon48;
			uint32_t phi_in11 = phi7;
			uint32_t phi_in12 = phi8;
			uint32_t phi13 = phi_in11;
			uint32_t phi14 = phi_in12;
			uint64_t phi15 = 0;
			uint64_t anon17 = (__zext uint64_t)phi9;
			phi16 = anon17;
			uint32_t phi18 = phi9;
			uint32_t phi19 = phi9;
			uint32_t phi_in20 = phi9;
			uint32_t phi21 = 0;
			uint32_t phi_in22 = phi9;
			uint64_t phi_in23 = phi15;
			uint64_t phi_in24 = phi16;
			if (phi_in20 > phi21)
			{
				uint32_t anon34;
				uint32_t anon42;
				do
				{
					uint64_t phi25 = phi_in23;
					uint64_t phi26 = phi_in24;
					uint32_t phi27 = phi_in20;
					int64_t anon29 = (__sext int64_t)phi27 >> 60;
					uint64_t anon30 = phi25 << 3;
					int64_t anon28 = (anon29 + phi26 & 7) - (anon29 & 7) + anon30;
					phi_in23 = anon28 & 0xffffffff;
					uint32_t anon33 = (uint32_t)phi26;
					uint64_t anon32 = (anon33 > 4294967295 ? phi26 : phi26 + 7) << 32 >> 35;
					uint64_t anon31 = anon32 & 0xffffffff;
					phi_in24 = anon31;
					anon34 = (uint32_t)anon32;
					phi_in20 = anon34;
					uint32_t anon37 = (uint32_t)anon29;
					uint32_t anon36 = (anon37 + anon33 & 7) - (anon37 & 7) + (uint32_t)anon30;
					phi35 = (__zext uint64_t)anon36;
					phi38 = anon31;
					phi39 = phi_in22;
					phi40 = phi_in22;
					anon42 = (uint32_t)anon28;
					phi41 = (__zext uint32_t)(anon34 == anon42 | (uint32_t)((__zext uint64_t)(anon42 > 4294967295 ? anon36 : anon36 + 7) << 32 >> 35) == anon34);
				}
				while (anon34 > anon42);
			}
			else 
			{
				phi35 = phi15;
				phi38 = phi16;
				phi39 = phi18;
				phi40 = phi19;
				phi41 = phi13 << 8 | phi14 & 0xff;
			}
			phi15 = phi35;
			uint32_t phi_in43 = phi39;
			uint32_t phi44 = phi_in22;
			uint32_t phi_in45 = phi_in43;
			phi19 = phi40;
			uint32_t anon46 = phi41 + 1;
			if (anon46 == phi40)
			{
				anon47 = printf((uint8_t*)0x400644);
				anon48 = anon46 >> 8;
				phi1 = anon48;
				phi_in3 = phi40;
				phi_in4 = anon17;
				phi44 = phi9;
				phi_in45 = phi9;
				phi19 = phi9;
			}
			if (anon46 != phi40 || anon47 != 0 && anon46 == phi40)
			{
				phi9 = phi44;
			}
			if ((uint32_t)((__sext int64_t)phi19 % (__sext int64_t)anon46) == 0)
			{
				if (anon46 != phi40 || anon47 != 0 && anon46 == phi40)
				{
					phi7 = anon48;
					phi8 = anon46;
					uint32_t anon49 = phi_in45 + 1;
					phi9 = anon49;
					if (anon49 == 0)
					{
						break;
					}
				}
			}
			else if (anon46 != phi40 || anon47 != 0 && anon46 == phi40)
			{
				phi13 = anon48;
				phi14 = anon46;
				phi16 = phi38;
				phi18 = phi_in45;
				phi_in20 = (uint32_t)phi38;
				phi21 = (uint32_t)phi15;
			}
		}
	}
	while (anon10 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400410, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4005c0, (void(*)())0x400630, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6009c8;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195714);
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
	_init(4195827);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600798)(arg1 & 0xffffffff, arg2, arg3);
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
