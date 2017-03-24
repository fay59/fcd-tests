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
	uint32_t phi6;
	uint32_t anon7;
	uint32_t anon2 = (uint32_t)arg2;
	phi1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi4 = arg1;
	do
	{
		uint32_t phi_in5 = phi_in3;
		anon7 = (uint32_t)phi4 + 1;
		phi6 = anon7;
		if (anon7 != 0)
		{
			uint64_t phi13;
			uint64_t phi32;
			uint32_t phi35;
			uint32_t phi_in36;
			uint32_t phi37;
			uint32_t anon41;
			uint32_t anon42;
			uint32_t phi_in8 = phi1;
			uint32_t phi_in9 = phi6;
			uint32_t phi10 = phi_in8;
			uint32_t phi11 = phi_in5;
			uint64_t phi12 = 0;
			uint64_t anon14 = (__zext uint64_t)phi_in9;
			phi13 = anon14;
			uint32_t phi_in15 = phi_in9;
			uint32_t phi16 = phi_in9;
			uint32_t phi17 = phi_in9;
			uint32_t phi18 = 0;
			uint32_t phi_in19 = phi16;
			uint32_t phi_in20 = phi17;
			uint64_t phi21 = phi12;
			uint64_t phi22 = phi13;
			if (phi_in20 > phi18)
			{
				int64_t anon25;
				uint64_t anon26;
				uint64_t anon27;
				uint32_t anon29;
				uint32_t anon30;
				uint32_t anon31;
				do
				{
					uint32_t phi23 = phi_in20;
					anon25 = (__sext int64_t)phi23 >> 60;
					anon26 = phi21 << 3;
					int64_t anon24 = (anon25 + phi22 & 7) - (anon25 & 7) + anon26;
					phi21 = anon24 & 0xffffffff;
					anon29 = (uint32_t)phi22;
					uint64_t anon28 = (anon29 > 4294967295 ? phi22 : phi22 + 7) << 32 >> 35;
					anon27 = anon28 & 0xffffffff;
					phi22 = anon27;
					anon30 = (uint32_t)anon28;
					phi_in20 = anon30;
					anon31 = (uint32_t)anon24;
				}
				while (anon30 > anon31);
				uint32_t anon34 = (uint32_t)anon25;
				uint32_t anon33 = (anon34 + anon29 & 7) - (anon34 & 7) + (uint32_t)anon26;
				phi32 = (__zext uint64_t)anon33;
				phi13 = anon27;
				phi35 = phi_in9;
				phi_in36 = phi_in9;
				phi37 = (__zext uint32_t)(anon31 == anon30 | (uint32_t)((__zext uint64_t)(anon31 > 4294967295 ? anon33 : anon33 + 7) << 32 >> 35) == anon30);
			}
			else 
			{
				phi32 = phi12;
				phi13 = phi13;
				phi35 = phi_in15;
				phi_in36 = phi_in19;
				phi37 = phi10 << 8 | phi11 & 0xff;
			}
			phi12 = phi32;
			uint32_t phi38 = phi35;
			uint32_t phi39 = phi_in36;
			uint32_t anon40 = phi37 + 1;
			if (anon40 == phi_in36)
			{
				anon41 = printf((uint8_t*)0x400644);
				anon42 = anon40 >> 8;
				phi1 = anon42;
				phi_in3 = phi_in36;
				phi4 = anon14;
				phi38 = phi_in9;
				phi39 = phi_in9;
			}
			if (anon40 != phi_in36 || anon41 != 0 && anon40 == phi_in36)
			{
				phi_in15 = phi38;
				phi16 = phi39;
			}
			if ((uint32_t)((__sext int64_t)phi16 % (__sext int64_t)anon40) == 0)
			{
				if (anon40 != phi_in36 || anon41 != 0 && anon40 == phi_in36)
				{
					phi1 = anon42;
					phi_in5 = anon40;
					uint32_t anon43 = phi_in15 + 1;
					phi6 = anon43;
					if (anon43 == 0)
					{
						break;
					}
				}
			}
			else if (anon40 != phi_in36 || anon41 != 0 && anon40 == phi_in36)
			{
				phi10 = anon42;
				phi11 = anon40;
				phi17 = (uint32_t)phi13;
				phi18 = (uint32_t)phi12;
			}
		}
	}
	while (anon7 != 0);
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
