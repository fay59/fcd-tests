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
	uint32_t anon9;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi8;
		uint32_t phi5 = phi3;
		uint64_t phi6 = phi_in4;
		uint32_t phi_in7 = phi_in1;
		anon9 = (uint32_t)phi6 + 1;
		phi8 = anon9;
		if (anon9 != 0)
		{
			uint64_t phi34;
			uint64_t phi35;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t anon40;
			uint32_t anon41;
			uint32_t phi_in10 = phi5;
			uint32_t phi11 = phi_in7;
			uint32_t phi12 = phi_in10;
			uint64_t phi13 = 0;
			uint64_t anon15 = (__zext uint64_t)phi8;
			phi14 = anon15;
			uint32_t phi16 = phi8;
			uint32_t phi17 = phi8;
			uint32_t phi18 = 0;
			uint32_t phi_in19 = phi17;
			uint64_t phi_in20 = phi13;
			uint64_t phi_in21 = phi14;
			if (phi_in19 > phi18)
			{
				int64_t anon25;
				uint64_t anon28;
				uint32_t anon31;
				uint32_t anon32;
				do
				{
					uint64_t phi22 = phi_in20;
					uint64_t phi23 = phi_in21;
					uint32_t phi24 = phi_in19;
					int64_t anon26 = (__sext int64_t)phi24 >> 60;
					uint64_t anon27 = phi22 << 3;
					anon25 = (anon26 + phi23 & 7) - (anon26 & 7) + anon27 & 0xffffffff;
					phi_in20 = anon25;
					uint32_t anon30 = (uint32_t)phi23;
					uint64_t anon29 = (anon30 > 4294967295 ? phi23 : phi23 + 7) << 32 >> 35;
					anon28 = anon29 & 0xffffffff;
					phi_in21 = anon28;
					anon31 = (uint32_t)anon29;
					phi_in19 = anon31;
					uint32_t anon33 = (uint32_t)anon26;
					anon32 = (anon33 + anon30 & 7) - (anon33 & 7) + (uint32_t)anon27;
				}
				while (anon31 > anon32);
				phi34 = (__zext uint64_t)anon32;
				phi35 = anon28;
				phi36 = phi8;
				phi37 = phi8;
				phi38 = (__zext uint32_t)(anon31 == anon32) | (__zext uint32_t)((uint32_t)((anon32 > 4294967295 ? anon25 : (__zext uint64_t)(anon32 + 7)) << 32 >> 35) == anon31);
			}
			else 
			{
				phi34 = phi13;
				phi35 = phi14;
				phi36 = phi16;
				phi37 = phi8;
				phi38 = phi11 << 8 | phi12 & 0xff;
			}
			phi13 = phi34;
			uint64_t phi14 = phi35;
			phi8 = phi37;
			uint32_t anon39 = phi38 + 1;
			if (anon39 == phi37)
			{
				anon40 = printf((uint8_t*)0x400644);
				anon41 = anon39 >> 8;
				phi_in1 = anon41;
				phi3 = phi37;
				phi_in4 = anon15;
				phi36 = phi8;
			}
			if (anon39 != phi37 || anon40 != 0 && anon39 == phi37)
			{
				phi16 = phi36;
			}
			if ((uint32_t)((__sext int64_t)phi8 % (__sext int64_t)anon39) == 0)
			{
				if (anon39 != phi37 || anon40 != 0 && anon39 == phi37)
				{
					phi_in7 = anon41;
					phi5 = anon39;
					uint32_t anon42 = phi16 + 1;
					phi8 = anon42;
					if (anon42 == 0)
					{
						break;
					}
				}
			}
			else if (anon39 != phi37 || anon40 != 0 && anon39 == phi37)
			{
				phi11 = anon41;
				phi12 = anon39;
				phi17 = (uint32_t)phi14;
				phi18 = (uint32_t)phi13;
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
