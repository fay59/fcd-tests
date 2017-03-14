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
	uint32_t phi8;
	uint32_t anon9;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi_in5 = phi3;
		uint64_t phi6 = phi_in4;
		uint32_t phi7 = phi_in5;
		anon9 = (uint32_t)phi6 + 1;
		phi8 = anon9;
		if (anon9 != 0)
		{
			uint64_t phi16;
			uint64_t phi35;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t anon41;
			uint32_t anon42;
			uint32_t phi_in10 = phi1;
			uint32_t phi_in11 = phi7;
			uint32_t phi12 = phi8;
			uint32_t phi13 = phi_in10;
			uint32_t phi14 = phi_in11;
			uint64_t phi15 = 0;
			uint64_t anon17 = (__zext uint64_t)phi12;
			phi16 = anon17;
			uint32_t phi18 = phi12;
			uint32_t phi_in19 = phi12;
			uint32_t phi20 = 0;
			uint64_t phi_in21 = phi15;
			uint64_t phi_in22 = phi16;
			if (phi_in19 > phi20)
			{
				int64_t anon26;
				uint64_t anon29;
				uint32_t anon32;
				uint32_t anon33;
				do
				{
					uint64_t phi23 = phi_in21;
					uint64_t phi24 = phi_in22;
					uint32_t phi25 = phi_in19;
					int64_t anon27 = (__sext int64_t)phi25 >> 60;
					uint64_t anon28 = phi23 << 3;
					anon26 = (anon27 + phi24 & 7) - (anon27 & 7) + anon28 & 0xffffffff;
					phi_in21 = anon26;
					uint32_t anon31 = (uint32_t)phi24;
					uint64_t anon30 = (anon31 > 4294967295 ? phi24 : phi24 + 7) << 32 >> 35;
					anon29 = anon30 & 0xffffffff;
					phi_in22 = anon29;
					anon32 = (uint32_t)anon30;
					phi_in19 = anon32;
					uint32_t anon34 = (uint32_t)anon27;
					anon33 = (anon34 + anon31 & 7) - (anon34 & 7) + (uint32_t)anon28;
				}
				while (anon32 > anon33);
				phi35 = (__zext uint64_t)anon33;
				phi16 = anon29;
				phi36 = phi12;
				phi3 = phi12;
				phi37 = (__zext uint32_t)(anon32 == anon33) | (__zext uint32_t)((uint32_t)((anon33 > 4294967295 ? anon26 : (__zext uint64_t)(anon33 + 7)) << 32 >> 35) == anon32);
			}
			else 
			{
				phi35 = phi15;
				phi16 = phi16;
				phi36 = phi18;
				phi3 = phi12;
				phi37 = phi13 << 8 | phi14 & 0xff;
			}
			uint32_t phi38 = phi36;
			uint32_t phi39 = phi3;
			uint32_t anon40 = phi37 + 1;
			if (anon40 == phi3)
			{
				anon41 = printf((uint8_t*)0x400644);
				anon42 = anon40 >> 8;
				phi1 = anon42;
				phi_in4 = anon17;
				phi38 = phi12;
				phi39 = phi12;
			}
			if (anon40 != phi3 || anon41 != 0 && anon40 == phi3)
			{
				phi18 = phi38;
				phi12 = phi39;
			}
			if ((uint32_t)((__sext int64_t)phi12 % (__sext int64_t)anon40) == 0)
			{
				if (anon40 != phi3 || anon41 != 0 && anon40 == phi3)
				{
					phi1 = anon42;
					phi7 = anon40;
					uint32_t anon43 = phi18 + 1;
					phi8 = anon43;
					if (anon43 == 0)
					{
						break;
					}
				}
			}
			else if (anon40 != phi3 || anon41 != 0 && anon40 == phi3)
			{
				phi13 = anon42;
				phi14 = anon40;
				phi15 = phi35;
				phi_in19 = (uint32_t)phi16;
				phi20 = (uint32_t)phi35;
			}
		}
	}
	while (anon9 != 0);
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
