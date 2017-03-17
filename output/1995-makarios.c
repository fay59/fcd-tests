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
	uint32_t phi9;
	uint32_t anon10;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi_in5 = phi1;
		uint64_t phi6 = phi_in4;
		uint32_t phi7 = phi_in5;
		uint32_t phi8 = phi_in3;
		anon10 = (uint32_t)phi6 + 1;
		phi9 = anon10;
		if (anon10 != 0)
		{
			uint64_t phi17;
			uint64_t phi36;
			uint64_t phi39;
			uint32_t phi40;
			uint32_t phi41;
			uint32_t phi42;
			uint32_t anon47;
			uint32_t anon48;
			uint32_t phi_in11 = phi7;
			uint32_t phi_in12 = phi8;
			uint32_t phi13 = phi9;
			uint32_t phi14 = phi_in11;
			uint32_t phi15 = phi_in12;
			uint64_t phi16 = 0;
			uint64_t anon18 = (__zext uint64_t)phi13;
			phi17 = anon18;
			uint32_t phi19 = phi13;
			uint32_t phi20 = phi13;
			uint32_t phi21 = 0;
			uint32_t phi_in22 = phi13;
			uint64_t phi_in23 = phi16;
			uint64_t phi_in24 = phi17;
			if (phi_in22 > phi21)
			{
				int64_t anon29;
				uint64_t anon30;
				uint64_t anon31;
				uint32_t anon33;
				uint32_t anon34;
				uint32_t anon35;
				do
				{
					uint64_t phi25 = phi_in23;
					uint64_t phi26 = phi_in24;
					uint32_t phi27 = phi_in22;
					anon29 = (__sext int64_t)phi27 >> 60;
					anon30 = phi25 << 3;
					int64_t anon28 = (anon29 + phi26 & 7) - (anon29 & 7) + anon30;
					phi_in23 = anon28 & 0xffffffff;
					anon33 = (uint32_t)phi26;
					uint64_t anon32 = (anon33 > 4294967295 ? phi26 : phi26 + 7) << 32 >> 35;
					anon31 = anon32 & 0xffffffff;
					phi_in24 = anon31;
					anon34 = (uint32_t)anon32;
					phi_in22 = anon34;
					anon35 = (uint32_t)anon28;
				}
				while (anon34 > anon35);
				uint32_t anon38 = (uint32_t)anon29;
				uint32_t anon37 = (anon38 + anon33 & 7) - (anon38 & 7) + (uint32_t)anon30;
				phi36 = (__zext uint64_t)anon37;
				phi39 = anon31;
				phi40 = phi13;
				phi41 = phi13;
				phi42 = (__zext uint32_t)(anon35 == anon34 | (uint32_t)((__zext uint64_t)(anon35 > 4294967295 ? anon37 : anon37 + 7) << 32 >> 35) == anon34);
			}
			else 
			{
				phi36 = phi16;
				phi39 = phi17;
				phi40 = phi19;
				phi41 = phi20;
				phi42 = phi14 << 8 | phi15 & 0xff;
			}
			phi16 = phi36;
			uint32_t phi_in43 = phi40;
			uint32_t phi_in44 = phi_in43;
			uint32_t phi_in45 = phi41;
			uint32_t anon46 = phi42 + 1;
			if (anon46 == phi41)
			{
				anon47 = printf((uint8_t*)0x400644);
				anon48 = anon46 >> 8;
				phi1 = anon48;
				phi_in3 = phi41;
				phi_in4 = anon18;
				phi_in44 = phi13;
				phi_in45 = phi13;
			}
			if ((uint32_t)((__sext int64_t)phi_in45 % (__sext int64_t)anon46) == 0)
			{
				if (anon46 != phi41 || anon47 != 0 && anon46 == phi41)
				{
					phi7 = anon48;
					phi8 = anon46;
					uint32_t anon49 = phi_in44 + 1;
					phi9 = anon49;
					if (anon49 == 0)
					{
						break;
					}
				}
			}
			else if (anon46 != phi41 || anon47 != 0 && anon46 == phi41)
			{
				phi14 = anon48;
				phi15 = anon46;
				phi17 = phi39;
				phi19 = phi_in44;
				phi20 = phi_in45;
				phi13 = (uint32_t)phi39;
				phi21 = (uint32_t)phi16;
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
