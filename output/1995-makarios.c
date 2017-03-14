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
	uint32_t phi7;
	uint32_t anon8;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint64_t phi5 = phi_in4;
		uint32_t phi6 = phi_in1;
		anon8 = (uint32_t)phi5 + 1;
		phi7 = anon8;
		if (anon8 != 0)
		{
			uint64_t phi13;
			uint64_t phi34;
			uint64_t phi37;
			uint32_t phi_in38;
			uint32_t phi39;
			uint32_t phi40;
			uint32_t anon45;
			uint32_t anon46;
			uint32_t phi_in9 = phi6;
			uint32_t phi10 = phi3;
			uint32_t phi11 = phi_in9;
			uint64_t phi12 = 0;
			uint64_t anon14 = (__zext uint64_t)phi7;
			phi13 = anon14;
			uint32_t phi15 = phi7;
			uint32_t phi16 = phi7;
			uint32_t phi17 = phi7;
			uint32_t phi18 = phi7;
			uint32_t phi19 = 0;
			uint32_t phi_in20 = phi15;
			uint32_t phi_in21 = phi18;
			uint64_t phi_in22 = phi12;
			uint64_t phi_in23 = phi13;
			if (phi_in21 > phi19)
			{
				uint32_t anon33;
				uint32_t anon41;
				do
				{
					uint64_t phi24 = phi_in22;
					uint64_t phi25 = phi_in23;
					uint32_t phi26 = phi_in21;
					int64_t anon28 = (__sext int64_t)phi26 >> 60;
					uint64_t anon29 = phi24 << 3;
					int64_t anon27 = (anon28 + phi25 & 7) - (anon28 & 7) + anon29;
					phi_in22 = anon27 & 0xffffffff;
					uint32_t anon32 = (uint32_t)phi25;
					uint64_t anon31 = (anon32 > 4294967295 ? phi25 : phi25 + 7) << 32 >> 35;
					uint64_t anon30 = anon31 & 0xffffffff;
					phi_in23 = anon30;
					anon33 = (uint32_t)anon31;
					phi_in21 = anon33;
					uint32_t anon36 = (uint32_t)anon28;
					uint32_t anon35 = (anon36 + anon32 & 7) - (anon36 & 7) + (uint32_t)anon29;
					phi34 = (__zext uint64_t)anon35;
					phi37 = anon30;
					phi_in38 = phi_in20;
					phi39 = phi_in20;
					anon41 = (uint32_t)anon27;
					phi40 = (__zext uint32_t)(anon33 == anon41 | (uint32_t)((__zext uint64_t)(anon41 > 4294967295 ? anon35 : anon35 + 7) << 32 >> 35) == anon33);
				}
				while (anon33 > anon41);
			}
			else 
			{
				phi34 = phi12;
				phi37 = phi13;
				phi_in38 = phi16;
				phi39 = phi17;
				phi40 = phi11 << 8 | phi10 & 0xff;
			}
			phi12 = phi34;
			uint32_t phi_in42 = phi_in20;
			uint32_t phi_in43 = phi_in38;
			phi17 = phi39;
			uint32_t anon44 = phi40 + 1;
			if (anon44 == phi39)
			{
				anon45 = printf((uint8_t*)0x400644);
				anon46 = anon44 >> 8;
				phi_in1 = anon46;
				phi3 = phi39;
				phi_in4 = anon14;
				phi_in42 = phi7;
				phi_in43 = phi7;
				phi17 = phi7;
			}
			if ((uint32_t)((__sext int64_t)phi17 % (__sext int64_t)anon44) == 0)
			{
				if (anon44 != phi39 || anon45 != 0 && anon44 == phi39)
				{
					phi6 = anon46;
					phi3 = anon44;
					uint32_t anon47 = phi_in43 + 1;
					phi7 = anon47;
					if (anon47 == 0)
					{
						break;
					}
				}
			}
			else if (anon44 != phi39 || anon45 != 0 && anon44 == phi39)
			{
				phi11 = anon46;
				phi10 = anon44;
				phi13 = phi37;
				phi15 = phi_in42;
				phi16 = phi_in43;
				phi18 = (uint32_t)phi37;
				phi19 = (uint32_t)phi12;
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
