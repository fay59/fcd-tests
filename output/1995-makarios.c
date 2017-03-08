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
		uint32_t phi5 = phi1;
		uint32_t phi6 = phi3;
		uint64_t phi7 = phi_in4;
		anon9 = (uint32_t)phi7 + 1;
		phi8 = anon9;
		if (anon9 != 0)
		{
			uint64_t phi16;
			uint64_t phi36;
			uint64_t phi37;
			uint32_t phi_in38;
			uint32_t phi39;
			uint32_t phi40;
			uint32_t anon43;
			uint32_t anon44;
			uint32_t phi_in10 = phi5;
			uint32_t phi_in11 = phi6;
			uint32_t phi12 = phi8;
			uint32_t phi13 = phi_in10;
			uint32_t phi14 = phi_in11;
			uint64_t phi15 = 0;
			uint64_t anon17 = (__zext uint64_t)phi12;
			phi16 = anon17;
			uint32_t phi18 = phi12;
			uint32_t phi19 = phi12;
			uint32_t phi20 = 0;
			uint32_t phi_in21 = phi12;
			uint64_t phi_in22 = phi15;
			uint64_t phi_in23 = phi16;
			if (phi_in21 > phi20)
			{
				int64_t anon27;
				uint64_t anon30;
				uint32_t anon33;
				uint32_t anon34;
				do
				{
					uint64_t phi24 = phi_in22;
					uint64_t phi25 = phi_in23;
					uint32_t phi26 = phi_in21;
					int64_t anon28 = (__sext int64_t)phi26 >> 60;
					uint64_t anon29 = phi24 << 3;
					anon27 = (anon28 + phi25 & 7) - (anon28 & 7) + anon29 & 0xffffffff;
					phi_in22 = anon27;
					uint32_t anon32 = (uint32_t)phi25;
					uint64_t anon31 = (anon32 > 4294967295 ? phi25 : phi25 + 7) << 32 >> 35;
					anon30 = anon31 & 0xffffffff;
					phi_in23 = anon30;
					anon33 = (uint32_t)anon31;
					phi_in21 = anon33;
					uint32_t anon35 = (uint32_t)anon28;
					anon34 = (anon35 + anon32 & 7) - (anon35 & 7) + (uint32_t)anon29;
				}
				while (anon33 > anon34);
				phi36 = (__zext uint64_t)anon34;
				phi37 = anon30;
				phi_in38 = phi12;
				phi39 = phi12;
				phi40 = (__zext uint32_t)(anon33 == anon34) | (__zext uint32_t)((uint32_t)((anon34 > 4294967295 ? anon27 : (__zext uint64_t)(anon34 + 7)) << 32 >> 35) == anon33);
			}
			else 
			{
				phi36 = phi15;
				phi37 = phi16;
				phi_in38 = phi18;
				phi39 = phi19;
				phi40 = phi13 << 8 | phi14 & 0xff;
			}
			phi18 = phi_in38;
			uint32_t phi41 = phi39;
			uint32_t anon42 = phi40 + 1;
			if (anon42 == phi39)
			{
				anon43 = printf((uint8_t*)0x400644);
				anon44 = anon42 >> 8;
				phi1 = anon44;
				phi3 = phi39;
				phi_in4 = anon17;
				phi18 = phi12;
				phi41 = phi12;
			}
			if (anon42 != phi39 || anon43 != 0 && anon42 == phi39)
			{
				phi19 = phi41;
			}
			if ((uint32_t)((__sext int64_t)phi19 % (__sext int64_t)anon42) == 0)
			{
				if (anon42 != phi39 || anon43 != 0 && anon42 == phi39)
				{
					phi5 = anon44;
					phi6 = anon42;
					uint32_t anon45 = phi18 + 1;
					phi8 = anon45;
					if (anon45 == 0)
					{
						break;
					}
				}
			}
			else if (anon42 != phi39 || anon43 != 0 && anon42 == phi39)
			{
				phi13 = anon44;
				phi14 = anon42;
				phi15 = phi36;
				phi16 = phi37;
				phi12 = (uint32_t)phi37;
				phi20 = (uint32_t)phi36;
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
	llvm.trap();
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
