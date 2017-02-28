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
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint32_t phi8;
		uint32_t anon10;
		uint32_t phi12;
		uint32_t phi13;
		uint64_t phi14;
		uint64_t phi15;
		uint64_t anon16;
		uint32_t phi17;
		uint32_t phi18;
		uint32_t phi19;
		uint32_t phi20;
		uint64_t phi_in21;
		uint64_t phi_in22;
		uint32_t phi_in23;
		int64_t anon27;
		int64_t anon28;
		uint64_t anon29;
		uint64_t anon30;
		uint32_t anon32;
		uint32_t anon33;
		uint64_t phi36;
		uint64_t phi37;
		uint32_t phi38;
		uint32_t phi39;
		uint32_t phi40;
		uint32_t phi41;
		uint32_t phi42;
		uint32_t anon44;
		uint32_t anon45;
		if (dispatch5 == 0)
		{
			uint32_t phi_in6 = phi3;
			uint64_t phi7 = phi_in4;
			phi8 = phi_in6;
			anon10 = (uint32_t)phi7 + 1;
			phi9 = anon10;
			if (anon10 == 0)
			{
				break;
			}
		}
		if (dispatch5 == 2 || anon10 != 0 && dispatch5 == 0)
		{
			uint32_t phi_in11 = phi1;
			phi12 = phi8;
			phi13 = phi_in11;
			phi14 = 0;
			anon16 = (__zext uint64_t)phi9;
			phi15 = anon16;
			phi17 = phi9;
			phi18 = phi9;
			phi19 = phi9;
			phi20 = 0;
		}
		if (dispatch5 == 1 || dispatch5 == 2 || anon10 != 0 && dispatch5 == 0)
		{
			phi_in21 = phi14;
			phi_in22 = phi15;
			phi_in23 = phi19;
		}
		if (dispatch5 == 3 || dispatch5 == 1 && phi19 > phi20 || dispatch5 == 2 && phi19 > phi20 || anon10 != 0 && dispatch5 == 0 && phi19 > phi20)
		{
			uint64_t phi24 = phi_in21;
			uint64_t phi25 = phi_in22;
			uint32_t phi26 = phi_in23;
			anon28 = (__sext int64_t)phi26 >> 60;
			anon29 = phi24 << 3;
			anon27 = (anon28 + phi25 & 7) - (anon28 & 7) + anon29 & 0xffffffff;
			phi_in21 = anon27;
			anon32 = (uint32_t)phi25;
			uint64_t anon31 = (anon32 > 4294967295 ? phi25 : phi25 + 7) << 32 >> 35;
			anon30 = anon31 & 0xffffffff;
			phi_in22 = anon30;
			anon33 = (uint32_t)anon31;
			phi_in23 = anon33;
			dispatch5 = 3;
		}
		uint32_t anon35 = (uint32_t)anon28;
		uint32_t anon34 = (anon35 + anon32 & 7) - (anon35 & 7) + (uint32_t)anon29;
		if (anon33 <= anon34 && (dispatch5 == 3 || dispatch5 == 1 && phi19 > phi20 || dispatch5 == 2 && phi19 > phi20 || anon10 != 0 && dispatch5 == 0 && phi19 > phi20))
		{
			phi36 = (__zext uint64_t)anon34;
			phi37 = anon30;
			phi38 = phi9;
			phi39 = phi9;
			phi40 = (__zext uint32_t)(anon33 == anon34) | (__zext uint32_t)((uint32_t)((anon34 > 4294967295 ? anon27 : (__zext uint64_t)(anon34 + 7)) << 32 >> 35) == anon33);
		}
		if (phi19 <= phi20 && (dispatch5 == 1 || dispatch5 == 2 || anon10 != 0 && dispatch5 == 0))
		{
			phi36 = phi14;
			phi37 = phi15;
			phi38 = phi17;
			phi39 = phi18;
			phi40 = phi13 << 8 | phi12 & 0xff;
		}
		if (phi19 <= phi20 && dispatch5 == 1 || phi19 <= phi20 && dispatch5 == 2 || anon10 != 0 && phi19 <= phi20 && dispatch5 == 0 || anon33 <= anon34 && dispatch5 == 3 || anon33 <= anon34 && dispatch5 == 1 && phi19 > phi20 || anon33 <= anon34 && dispatch5 == 2 && phi19 > phi20 || anon10 != 0 && anon33 <= anon34 && dispatch5 == 0 && phi19 > phi20)
		{
			phi14 = phi36;
			phi15 = phi37;
			phi41 = phi38;
			phi42 = phi39;
		}
		uint32_t anon43 = phi40 + 1;
		if (anon43 == phi39 && (phi19 <= phi20 && dispatch5 == 1 || phi19 <= phi20 && dispatch5 == 2 || anon10 != 0 && phi19 <= phi20 && dispatch5 == 0 || anon33 <= anon34 && dispatch5 == 3 || anon33 <= anon34 && dispatch5 == 1 && phi19 > phi20 || anon33 <= anon34 && dispatch5 == 2 && phi19 > phi20 || anon10 != 0 && anon33 <= anon34 && dispatch5 == 0 && phi19 > phi20))
		{
			anon44 = printf((uint8_t*)0x400644);
			anon45 = anon43 >> 8;
			phi1 = anon45;
			phi3 = phi39;
			phi_in4 = anon16;
			phi41 = phi9;
			phi42 = phi9;
			dispatch5 = 0;
		}
		if (phi19 <= phi20 && anon43 != phi39 && dispatch5 == 1 || phi19 <= phi20 && anon43 != phi39 && dispatch5 == 2 || anon10 != 0 && phi19 <= phi20 && anon43 != phi39 && dispatch5 == 0 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 3 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 1 && phi19 > phi20 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 2 && phi19 > phi20 || anon10 != 0 && anon33 <= anon34 && anon43 != phi39 && dispatch5 == 0 && phi19 > phi20 || phi19 <= phi20 && anon44 != 0 && dispatch5 == 1 && anon43 == phi39 || phi19 <= phi20 && anon44 != 0 && dispatch5 == 2 && anon43 == phi39 || anon10 != 0 && phi19 <= phi20 && anon44 != 0 && dispatch5 == 0 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 3 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 1 && phi19 > phi20 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 2 && phi19 > phi20 && anon43 == phi39 || anon10 != 0 && anon33 <= anon34 && anon44 != 0 && dispatch5 == 0 && phi19 > phi20 && anon43 == phi39)
		{
			phi17 = phi41;
			phi18 = phi42;
		}
		if ((uint32_t)((__sext int64_t)phi18 % (__sext int64_t)anon43) == 0)
		{
			if (phi19 <= phi20 && anon43 != phi39 && dispatch5 == 1 || phi19 <= phi20 && anon43 != phi39 && dispatch5 == 2 || anon10 != 0 && phi19 <= phi20 && anon43 != phi39 && dispatch5 == 0 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 3 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 1 && phi19 > phi20 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 2 && phi19 > phi20 || anon10 != 0 && anon33 <= anon34 && anon43 != phi39 && dispatch5 == 0 && phi19 > phi20 || phi19 <= phi20 && anon44 != 0 && dispatch5 == 1 && anon43 == phi39 || phi19 <= phi20 && anon44 != 0 && dispatch5 == 2 && anon43 == phi39 || anon10 != 0 && phi19 <= phi20 && anon44 != 0 && dispatch5 == 0 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 3 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 1 && phi19 > phi20 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 2 && phi19 > phi20 && anon43 == phi39 || anon10 != 0 && anon33 <= anon34 && anon44 != 0 && dispatch5 == 0 && phi19 > phi20 && anon43 == phi39)
			{
				phi1 = anon45;
				phi8 = anon43;
				uint32_t anon46 = phi17 + 1;
				phi9 = anon46;
				dispatch5 = 2;
				if (anon46 == 0)
				{
					break;
				}
			}
		}
		else if (phi19 <= phi20 && anon43 != phi39 && dispatch5 == 1 || phi19 <= phi20 && anon43 != phi39 && dispatch5 == 2 || anon10 != 0 && phi19 <= phi20 && anon43 != phi39 && dispatch5 == 0 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 3 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 1 && phi19 > phi20 || anon33 <= anon34 && anon43 != phi39 && dispatch5 == 2 && phi19 > phi20 || anon10 != 0 && anon33 <= anon34 && anon43 != phi39 && dispatch5 == 0 && phi19 > phi20 || phi19 <= phi20 && anon44 != 0 && dispatch5 == 1 && anon43 == phi39 || phi19 <= phi20 && anon44 != 0 && dispatch5 == 2 && anon43 == phi39 || anon10 != 0 && phi19 <= phi20 && anon44 != 0 && dispatch5 == 0 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 3 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 1 && phi19 > phi20 && anon43 == phi39 || anon33 <= anon34 && anon44 != 0 && dispatch5 == 2 && phi19 > phi20 && anon43 == phi39 || anon10 != 0 && anon33 <= anon34 && anon44 != 0 && dispatch5 == 0 && phi19 > phi20 && anon43 == phi39)
		{
			phi13 = anon45;
			phi12 = anon43;
			phi19 = (uint32_t)phi15;
			phi20 = (uint32_t)phi14;
			dispatch5 = 1;
		}
	}
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
