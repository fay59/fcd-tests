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
	uint32_t phi_in7;
	uint32_t anon8;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi4 = arg1;
	do
	{
		uint32_t phi5 = phi1;
		uint32_t phi6 = phi3;
		anon8 = (uint32_t)phi4 + 1;
		phi_in7 = anon8;
		if (anon8 != 0)
		{
			uint64_t phi15;
			uint64_t phi33;
			uint64_t phi_in36;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t phi39;
			uint32_t anon44;
			uint32_t anon45;
			uint32_t phi_in9 = phi5;
			uint32_t phi_in10 = phi6;
			uint32_t phi11 = phi_in7;
			uint32_t phi12 = phi_in9;
			uint32_t phi13 = phi_in10;
			uint64_t phi14 = 0;
			uint64_t anon16 = (__zext uint64_t)phi11;
			phi15 = anon16;
			uint32_t phi_in17 = phi11;
			uint32_t phi18 = phi11;
			uint32_t phi19 = 0;
			uint32_t phi_in20 = phi11;
			uint32_t phi_in21 = phi18;
			uint64_t phi22 = phi14;
			uint64_t phi23 = phi15;
			if (phi_in21 > phi19)
			{
				int64_t anon26;
				uint64_t anon27;
				uint64_t anon28;
				uint32_t anon30;
				uint32_t anon31;
				uint32_t anon32;
				do
				{
					uint32_t phi24 = phi_in21;
					anon26 = (__sext int64_t)phi24 >> 60;
					anon27 = phi22 << 3;
					int64_t anon25 = (anon26 + phi23 & 7) - (anon26 & 7) + anon27;
					phi22 = anon25 & 0xffffffff;
					anon30 = (uint32_t)phi23;
					uint64_t anon29 = (anon30 > 4294967295 ? phi23 : phi23 + 7) << 32 >> 35;
					anon28 = anon29 & 0xffffffff;
					phi23 = anon28;
					anon31 = (uint32_t)anon29;
					phi_in21 = anon31;
					anon32 = (uint32_t)anon25;
				}
				while (anon31 > anon32);
				uint32_t anon35 = (uint32_t)anon26;
				uint32_t anon34 = (anon35 + anon30 & 7) - (anon35 & 7) + (uint32_t)anon27;
				phi33 = (__zext uint64_t)anon34;
				phi_in36 = anon28;
				phi37 = phi11;
				phi38 = phi11;
				phi39 = (__zext uint32_t)(anon32 == anon31 | (uint32_t)((__zext uint64_t)(anon32 > 4294967295 ? anon34 : anon34 + 7) << 32 >> 35) == anon31);
			}
			else 
			{
				phi33 = phi14;
				phi_in36 = phi15;
				phi37 = phi_in20;
				phi38 = phi_in17;
				phi39 = phi12 << 8 | phi13 & 0xff;
			}
			phi14 = phi33;
			uint32_t phi_in40 = phi37;
			uint32_t phi41 = phi_in40;
			uint32_t phi42 = phi38;
			uint32_t anon43 = phi39 + 1;
			if (anon43 == phi38)
			{
				anon44 = printf((uint8_t*)0x400644);
				anon45 = anon43 >> 8;
				phi1 = anon45;
				phi3 = phi38;
				phi4 = anon16;
				phi41 = phi11;
				phi42 = phi11;
			}
			if (anon43 != phi38 || anon44 != 0)
			{
				phi11 = phi41;
				phi_in17 = phi42;
			}
			if ((uint32_t)((__sext int64_t)phi_in17 % (__sext int64_t)anon43) == 0)
			{
				if (anon43 != phi38 || anon44 != 0)
				{
					phi5 = anon45;
					phi6 = anon43;
					uint32_t anon46 = phi11 + 1;
					phi_in7 = anon46;
					if (anon46 == 0)
					{
						break;
					}
				}
			}
			else if (anon43 != phi38 || anon44 != 0)
			{
				phi12 = anon45;
				phi13 = anon43;
				phi15 = phi_in36;
				phi18 = (uint32_t)phi_in36;
				phi19 = (uint32_t)phi14;
			}
		}
	}
	while (anon8 != 0);
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
