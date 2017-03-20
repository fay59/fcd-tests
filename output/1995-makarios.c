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
	uint32_t phi_in1;
	uint32_t phi9;
	uint32_t anon10;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi_in5 = phi3;
		uint64_t phi6 = phi_in4;
		uint32_t phi_in7 = phi_in1;
		uint32_t phi_in8 = phi_in5;
		anon10 = (uint32_t)phi6 + 1;
		phi9 = anon10;
		if (anon10 != 0)
		{
			uint64_t phi36;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t phi39;
			uint32_t anon43;
			uint32_t anon44;
			uint32_t phi11 = phi9;
			uint32_t phi12 = phi_in7;
			uint32_t phi13 = phi_in8;
			uint64_t phi14 = 0;
			uint64_t anon16 = (__zext uint64_t)phi11;
			phi15 = anon16;
			uint32_t phi17 = phi11;
			uint32_t phi18 = phi11;
			uint32_t phi19 = 0;
			uint32_t phi_in20 = phi11;
			uint64_t phi_in21 = phi14;
			uint64_t phi_in22 = phi15;
			if (phi_in20 > phi19)
			{
				int64_t anon27;
				uint64_t anon28;
				uint64_t anon29;
				uint32_t anon31;
				uint32_t anon32;
				uint32_t anon33;
				do
				{
					uint64_t phi23 = phi_in21;
					uint64_t phi24 = phi_in22;
					uint32_t phi25 = phi_in20;
					anon27 = (__sext int64_t)phi25 >> 60;
					anon28 = phi23 << 3;
					int64_t anon26 = (anon27 + phi24 & 7) - (anon27 & 7) + anon28;
					phi_in21 = anon26 & 0xffffffff;
					anon31 = (uint32_t)phi24;
					uint64_t anon30 = (anon31 > 4294967295 ? phi24 : phi24 + 7) << 32 >> 35;
					anon29 = anon30 & 0xffffffff;
					phi_in22 = anon29;
					anon32 = (uint32_t)anon30;
					phi_in20 = anon32;
					anon33 = (uint32_t)anon26;
				}
				while (anon32 > anon33);
				uint32_t anon35 = (uint32_t)anon27;
				uint32_t anon34 = (anon35 + anon31 & 7) - (anon35 & 7) + (uint32_t)anon28;
				phi14 = (__zext uint64_t)anon34;
				phi36 = anon29;
				phi37 = phi11;
				phi38 = phi11;
				phi39 = (__zext uint32_t)(anon33 == anon32 | (uint32_t)((__zext uint64_t)(anon33 > 4294967295 ? anon34 : anon34 + 7) << 32 >> 35) == anon32);
			}
			else 
			{
				phi14 = phi14;
				phi36 = phi15;
				phi37 = phi17;
				phi38 = phi18;
				phi39 = phi12 << 8 | phi13 & 0xff;
			}
			uint64_t phi15 = phi36;
			uint32_t phi_in40 = phi37;
			uint32_t phi41 = phi38;
			uint32_t anon42 = phi39 + 1;
			if (anon42 == phi38)
			{
				anon43 = printf((uint8_t*)0x400644);
				anon44 = anon42 >> 8;
				phi_in1 = anon44;
				phi3 = phi38;
				phi_in4 = anon16;
				phi_in40 = phi11;
				phi41 = phi11;
			}
			if (anon42 != phi38 || anon43 != 0 && anon42 == phi38)
			{
				phi18 = phi41;
			}
			if ((uint32_t)((__sext int64_t)phi18 % (__sext int64_t)anon42) == 0)
			{
				if (anon42 != phi38 || anon43 != 0 && anon42 == phi38)
				{
					phi_in7 = anon44;
					phi_in8 = anon42;
					uint32_t anon45 = phi_in40 + 1;
					phi9 = anon45;
					if (anon45 == 0)
					{
						break;
					}
				}
			}
			else if (anon42 != phi38 || anon43 != 0 && anon42 == phi38)
			{
				phi12 = anon44;
				phi13 = anon42;
				phi17 = phi_in40;
				phi11 = (uint32_t)phi15;
				phi19 = (uint32_t)phi14;
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
