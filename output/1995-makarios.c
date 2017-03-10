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
		uint32_t phi_in8 = phi_in5;
		uint32_t phi_in9 = phi_in6;
		anon11 = (uint32_t)phi7 + 1;
		phi10 = anon11;
		if (anon11 != 0)
		{
			uint64_t phi16;
			uint64_t phi35;
			uint32_t phi38;
			uint32_t phi39;
			uint32_t anon46;
			uint32_t anon47;
			uint32_t phi12 = phi10;
			uint32_t phi13 = phi_in8;
			uint32_t phi14 = phi_in9;
			uint64_t phi15 = 0;
			uint64_t anon17 = (__zext uint64_t)phi12;
			phi16 = anon17;
			uint32_t phi18 = phi12;
			uint32_t phi19 = phi12;
			uint32_t phi_in20 = phi12;
			uint32_t phi21 = 0;
			uint32_t phi_in22 = phi18;
			uint64_t phi_in23 = phi15;
			uint64_t phi_in24 = phi16;
			if (phi_in20 > phi21)
			{
				uint32_t anon34;
				uint32_t anon40;
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
					phi16 = anon31;
					phi38 = phi_in22;
					phi3 = phi_in22;
					anon40 = (uint32_t)anon28;
					phi39 = (__zext uint32_t)(anon34 == anon40 | (uint32_t)((__zext uint64_t)(anon40 > 4294967295 ? anon36 : anon36 + 7) << 32 >> 35) == anon34);
				}
				while (anon34 > anon40);
			}
			else 
			{
				phi35 = phi15;
				phi16 = phi16;
				phi38 = phi19;
				phi3 = phi12;
				phi39 = phi13 << 8 | phi14 & 0xff;
			}
			phi15 = phi35;
			uint32_t phi_in41 = phi38;
			uint32_t phi_in42 = phi_in22;
			uint32_t phi43 = phi_in41;
			uint32_t phi44 = phi3;
			uint32_t anon45 = phi39 + 1;
			if (anon45 == phi3)
			{
				anon46 = printf((uint8_t*)0x400644);
				anon47 = anon45 >> 8;
				phi1 = anon47;
				phi_in4 = anon17;
				phi_in42 = phi12;
				phi43 = phi12;
				phi44 = phi12;
			}
			if (anon45 != phi3 || anon46 != 0 && anon45 == phi3)
			{
				phi19 = phi43;
				phi12 = phi44;
			}
			if ((uint32_t)((__sext int64_t)phi12 % (__sext int64_t)anon45) == 0)
			{
				if (anon45 != phi3 || anon46 != 0 && anon45 == phi3)
				{
					phi_in8 = anon47;
					phi_in9 = anon45;
					uint32_t anon48 = phi19 + 1;
					phi10 = anon48;
					if (anon48 == 0)
					{
						break;
					}
				}
			}
			else if (anon45 != phi3 || anon46 != 0 && anon45 == phi3)
			{
				phi13 = anon47;
				phi14 = anon45;
				phi18 = phi_in42;
				phi_in20 = (uint32_t)phi16;
				phi21 = (uint32_t)phi15;
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
