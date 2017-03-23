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
	uint32_t phi10;
	uint32_t anon11;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi_in5 = phi1;
		uint32_t phi_in6 = phi3;
		uint64_t phi7 = phi_in4;
		uint32_t phi8 = phi_in5;
		uint32_t phi_in9 = phi_in6;
		anon11 = (uint32_t)phi7 + 1;
		phi10 = anon11;
		if (anon11 != 0)
		{
			uint64_t phi35;
			uint64_t phi38;
			uint32_t phi39;
			uint32_t phi40;
			uint32_t phi41;
			uint32_t anon45;
			uint32_t anon46;
			uint32_t phi_in12 = phi8;
			uint32_t phi13 = phi10;
			uint32_t phi14 = phi_in12;
			uint32_t phi15 = phi_in9;
			uint64_t phi16 = 0;
			uint64_t anon18 = (__zext uint64_t)phi13;
			phi17 = anon18;
			uint32_t phi19 = phi13;
			uint32_t phi_in20 = phi13;
			uint32_t phi21 = 0;
			uint64_t phi_in22 = phi16;
			uint64_t phi_in23 = phi17;
			if (phi_in20 > phi21)
			{
				int64_t anon28;
				uint64_t anon29;
				uint64_t anon30;
				uint32_t anon32;
				uint32_t anon33;
				uint32_t anon34;
				do
				{
					uint64_t phi24 = phi_in22;
					uint64_t phi25 = phi_in23;
					uint32_t phi26 = phi_in20;
					anon28 = (__sext int64_t)phi26 >> 60;
					anon29 = phi24 << 3;
					int64_t anon27 = (anon28 + phi25 & 7) - (anon28 & 7) + anon29;
					phi_in22 = anon27 & 0xffffffff;
					anon32 = (uint32_t)phi25;
					uint64_t anon31 = (anon32 > 4294967295 ? phi25 : phi25 + 7) << 32 >> 35;
					anon30 = anon31 & 0xffffffff;
					phi_in23 = anon30;
					anon33 = (uint32_t)anon31;
					phi_in20 = anon33;
					anon34 = (uint32_t)anon27;
				}
				while (anon33 > anon34);
				uint32_t anon37 = (uint32_t)anon28;
				uint32_t anon36 = (anon37 + anon32 & 7) - (anon37 & 7) + (uint32_t)anon29;
				phi35 = (__zext uint64_t)anon36;
				phi38 = anon30;
				phi39 = phi13;
				phi40 = phi13;
				phi41 = (__zext uint32_t)(anon34 == anon33 | (uint32_t)((__zext uint64_t)(anon34 > 4294967295 ? anon36 : anon36 + 7) << 32 >> 35) == anon33);
			}
			else 
			{
				phi35 = phi16;
				phi38 = phi17;
				phi39 = phi19;
				phi40 = phi13;
				phi41 = phi14 << 8 | phi15 & 0xff;
			}
			uint64_t phi17 = phi38;
			uint32_t phi42 = phi39;
			uint32_t phi43 = phi40;
			uint32_t anon44 = phi41 + 1;
			if (anon44 == phi40)
			{
				anon45 = printf((uint8_t*)0x400644);
				anon46 = anon44 >> 8;
				phi1 = anon46;
				phi3 = phi40;
				phi_in4 = anon18;
				phi42 = phi13;
				phi43 = phi13;
			}
			if (anon44 != phi40 || anon45 != 0 && anon44 == phi40)
			{
				phi19 = phi42;
				phi13 = phi43;
			}
			if ((uint32_t)((__sext int64_t)phi13 % (__sext int64_t)anon44) == 0)
			{
				if (anon44 != phi40 || anon45 != 0 && anon44 == phi40)
				{
					phi8 = anon46;
					phi_in9 = anon44;
					uint32_t anon47 = phi19 + 1;
					phi10 = anon47;
					if (anon47 == 0)
					{
						break;
					}
				}
			}
			else if (anon44 != phi40 || anon45 != 0 && anon44 == phi40)
			{
				phi14 = anon46;
				phi15 = anon44;
				phi16 = phi35;
				phi_in20 = (uint32_t)phi17;
				phi21 = (uint32_t)phi35;
			}
		}
	}
	while (anon11 != 0);
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
