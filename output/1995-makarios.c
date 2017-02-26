#include "tests/bin/1995-makarios.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600980 != 0)
	{
		__gmon_start__(4195261);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x6009b0);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t phi_in1;
	uint32_t phi9;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	uint32_t dispatch5 = 0;
	while (true)
	{
		uint32_t phi_in6;
		uint32_t phi8;
		uint32_t anon10;
		uint32_t phi11;
		uint32_t phi12;
		uint32_t phi13;
		uint64_t phi14;
		uint64_t phi15;
		uint64_t anon16;
		uint32_t phi17;
		uint32_t phi18;
		uint32_t phi19;
		uint64_t phi_in20;
		uint64_t phi_in21;
		uint32_t phi_in22;
		int64_t anon26;
		int64_t anon27;
		uint64_t anon28;
		uint64_t anon29;
		uint32_t anon31;
		uint32_t anon32;
		uint64_t phi35;
		uint32_t phi36;
		uint32_t phi37;
		uint32_t phi38;
		uint32_t phi39;
		uint32_t anon41;
		uint32_t anon42;
		if (dispatch5 == 0)
		{
			phi_in6 = phi3;
			uint64_t phi7 = phi_in4;
			phi8 = phi_in1;
			anon10 = (uint32_t)phi7 + 1;
			phi9 = anon10;
			if (anon10 == 0)
			{
				break;
			}
		}
		if (dispatch5 == 2 || anon10 != 0 && dispatch5 == 0)
		{
			phi11 = phi8;
			phi12 = phi9;
			phi13 = phi_in6;
			phi14 = 0;
			anon16 = (__zext uint64_t)phi12;
			phi15 = anon16;
			phi17 = phi12;
			phi18 = phi12;
			phi19 = 0;
		}
		if (dispatch5 == 1 || dispatch5 == 2 || anon10 != 0 && dispatch5 == 0)
		{
			phi_in20 = phi14;
			phi_in21 = phi15;
			phi_in22 = phi18;
		}
		if (dispatch5 == 3 || dispatch5 == 1 && phi18 > phi19 || dispatch5 == 2 && phi18 > phi19 || anon10 != 0 && dispatch5 == 0 && phi18 > phi19)
		{
			uint64_t phi23 = phi_in20;
			uint64_t phi24 = phi_in21;
			uint32_t phi25 = phi_in22;
			anon27 = (__sext int64_t)phi25 >> 60;
			anon28 = phi23 << 3;
			anon26 = (anon27 + phi24 & 7) - (anon27 & 7) + anon28 & 0xffffffff;
			phi_in20 = anon26;
			anon31 = (uint32_t)phi24;
			uint64_t anon30 = (anon31 > 4294967295 ? phi24 : phi24 + 7) << 32 >> 35;
			anon29 = anon30 & 0xffffffff;
			phi_in21 = anon29;
			anon32 = (uint32_t)anon30;
			phi_in22 = anon32;
			dispatch5 = 3;
		}
		uint32_t anon34 = (uint32_t)anon27;
		uint32_t anon33 = (anon34 + anon31 & 7) - (anon34 & 7) + (uint32_t)anon28;
		if (anon32 <= anon33 && (dispatch5 == 3 || dispatch5 == 1 && phi18 > phi19 || dispatch5 == 2 && phi18 > phi19 || anon10 != 0 && dispatch5 == 0 && phi18 > phi19))
		{
			phi35 = (__zext uint64_t)anon33;
			phi15 = anon29;
			phi36 = phi12;
			phi3 = phi12;
			phi37 = (__zext uint32_t)(anon32 == anon33) | (__zext uint32_t)((uint32_t)((anon33 > 4294967295 ? anon26 : (__zext uint64_t)(anon33 + 7)) << 32 >> 35) == anon32);
		}
		if (phi18 <= phi19 && (dispatch5 == 1 || dispatch5 == 2 || anon10 != 0 && dispatch5 == 0))
		{
			phi35 = phi14;
			phi15 = phi15;
			phi36 = phi12;
			phi3 = phi17;
			phi37 = phi11 << 8 | phi13 & 0xff;
		}
		if (phi18 <= phi19 && dispatch5 == 1 || phi18 <= phi19 && dispatch5 == 2 || anon10 != 0 && phi18 <= phi19 && dispatch5 == 0 || anon32 <= anon33 && dispatch5 == 3 || anon32 <= anon33 && dispatch5 == 1 && phi18 > phi19 || anon32 <= anon33 && dispatch5 == 2 && phi18 > phi19 || anon10 != 0 && anon32 <= anon33 && dispatch5 == 0 && phi18 > phi19)
		{
			phi14 = phi35;
			phi38 = phi36;
			phi39 = phi3;
		}
		uint32_t anon40 = phi37 + 1;
		if (anon40 == phi3 && (phi18 <= phi19 && dispatch5 == 1 || phi18 <= phi19 && dispatch5 == 2 || anon10 != 0 && phi18 <= phi19 && dispatch5 == 0 || anon32 <= anon33 && dispatch5 == 3 || anon32 <= anon33 && dispatch5 == 1 && phi18 > phi19 || anon32 <= anon33 && dispatch5 == 2 && phi18 > phi19 || anon10 != 0 && anon32 <= anon33 && dispatch5 == 0 && phi18 > phi19))
		{
			anon41 = printf((uint8_t*)0x400644);
			anon42 = anon40 >> 8;
			phi_in1 = anon42;
			phi_in4 = anon16;
			phi38 = phi12;
			phi39 = phi12;
			dispatch5 = 0;
		}
		if (phi18 <= phi19 && anon40 != phi3 && dispatch5 == 1 || phi18 <= phi19 && anon40 != phi3 && dispatch5 == 2 || anon10 != 0 && phi18 <= phi19 && anon40 != phi3 && dispatch5 == 0 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 3 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 1 && phi18 > phi19 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 2 && phi18 > phi19 || anon10 != 0 && anon32 <= anon33 && anon40 != phi3 && dispatch5 == 0 && phi18 > phi19 || phi18 <= phi19 && anon41 != 0 && dispatch5 == 1 && anon40 == phi3 || phi18 <= phi19 && anon41 != 0 && dispatch5 == 2 && anon40 == phi3 || anon10 != 0 && phi18 <= phi19 && anon41 != 0 && dispatch5 == 0 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 3 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 1 && phi18 > phi19 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 2 && phi18 > phi19 && anon40 == phi3 || anon10 != 0 && anon32 <= anon33 && anon41 != 0 && dispatch5 == 0 && phi18 > phi19 && anon40 == phi3)
		{
			phi12 = phi38;
			phi17 = phi39;
		}
		if ((uint32_t)((__sext int64_t)phi17 % (__sext int64_t)anon40) == 0)
		{
			if (phi18 <= phi19 && anon40 != phi3 && dispatch5 == 1 || phi18 <= phi19 && anon40 != phi3 && dispatch5 == 2 || anon10 != 0 && phi18 <= phi19 && anon40 != phi3 && dispatch5 == 0 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 3 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 1 && phi18 > phi19 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 2 && phi18 > phi19 || anon10 != 0 && anon32 <= anon33 && anon40 != phi3 && dispatch5 == 0 && phi18 > phi19 || phi18 <= phi19 && anon41 != 0 && dispatch5 == 1 && anon40 == phi3 || phi18 <= phi19 && anon41 != 0 && dispatch5 == 2 && anon40 == phi3 || anon10 != 0 && phi18 <= phi19 && anon41 != 0 && dispatch5 == 0 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 3 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 1 && phi18 > phi19 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 2 && phi18 > phi19 && anon40 == phi3 || anon10 != 0 && anon32 <= anon33 && anon41 != 0 && dispatch5 == 0 && phi18 > phi19 && anon40 == phi3)
			{
				phi8 = anon42;
				phi_in6 = anon40;
				uint32_t anon43 = phi12 + 1;
				phi9 = anon43;
				dispatch5 = 2;
				if (anon43 == 0)
				{
					break;
				}
			}
		}
		else if (phi18 <= phi19 && anon40 != phi3 && dispatch5 == 1 || phi18 <= phi19 && anon40 != phi3 && dispatch5 == 2 || anon10 != 0 && phi18 <= phi19 && anon40 != phi3 && dispatch5 == 0 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 3 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 1 && phi18 > phi19 || anon32 <= anon33 && anon40 != phi3 && dispatch5 == 2 && phi18 > phi19 || anon10 != 0 && anon32 <= anon33 && anon40 != phi3 && dispatch5 == 0 && phi18 > phi19 || phi18 <= phi19 && anon41 != 0 && dispatch5 == 1 && anon40 == phi3 || phi18 <= phi19 && anon41 != 0 && dispatch5 == 2 && anon40 == phi3 || anon10 != 0 && phi18 <= phi19 && anon41 != 0 && dispatch5 == 0 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 3 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 1 && phi18 > phi19 && anon40 == phi3 || anon32 <= anon33 && anon41 != 0 && dispatch5 == 2 && phi18 > phi19 && anon40 == phi3 || anon10 != 0 && anon32 <= anon33 && anon41 != 0 && dispatch5 == 0 && phi18 > phi19 && anon40 == phi3)
		{
			phi11 = anon42;
			phi13 = anon40;
			phi18 = (uint32_t)phi15;
			phi19 = (uint32_t)phi14;
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
