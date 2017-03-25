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
	uint64_t phi4 = arg1;
	do
	{
		uint32_t phi_in5 = phi1;
		uint32_t phi6 = phi3;
		uint32_t phi_in7 = phi_in5;
		anon9 = (uint32_t)phi4 + 1;
		phi8 = anon9;
		if (anon9 != 0)
		{
			uint64_t phi14;
			uint64_t phi32;
			uint32_t phi35;
			uint32_t phi36;
			uint32_t phi37;
			uint32_t anon42;
			uint32_t anon43;
			uint32_t phi10 = phi6;
			uint32_t phi_in11 = phi8;
			uint32_t phi12 = phi_in7;
			uint64_t phi13 = 0;
			uint64_t anon15 = (__zext uint64_t)phi_in11;
			phi14 = anon15;
			uint32_t phi_in16 = phi_in11;
			uint32_t phi17 = phi_in11;
			uint32_t phi_in18 = phi_in11;
			uint32_t phi19 = 0;
			uint32_t phi_in20 = phi17;
			uint64_t phi21 = phi13;
			uint64_t phi22 = phi14;
			if (phi_in18 > phi19)
			{
				int64_t anon25;
				uint64_t anon26;
				uint64_t anon27;
				uint32_t anon29;
				uint32_t anon30;
				uint32_t anon31;
				do
				{
					uint32_t phi23 = phi_in18;
					anon25 = (__sext int64_t)phi23 >> 60;
					anon26 = phi21 << 3;
					int64_t anon24 = (anon25 + phi22 & 7) - (anon25 & 7) + anon26;
					phi21 = anon24 & 0xffffffff;
					anon29 = (uint32_t)phi22;
					uint64_t anon28 = (anon29 > 4294967295 ? phi22 : phi22 + 7) << 32 >> 35;
					anon27 = anon28 & 0xffffffff;
					phi22 = anon27;
					anon30 = (uint32_t)anon28;
					phi_in18 = anon30;
					anon31 = (uint32_t)anon24;
				}
				while (anon30 > anon31);
				uint32_t anon34 = (uint32_t)anon25;
				uint32_t anon33 = (anon34 + anon29 & 7) - (anon34 & 7) + (uint32_t)anon26;
				phi32 = (__zext uint64_t)anon33;
				phi14 = anon27;
				phi35 = phi_in11;
				phi36 = phi_in11;
				phi37 = (__zext uint32_t)(anon31 == anon30 | (uint32_t)((__zext uint64_t)(anon31 > 4294967295 ? anon33 : anon33 + 7) << 32 >> 35) == anon30);
			}
			else 
			{
				phi32 = phi13;
				phi14 = phi14;
				phi35 = phi_in16;
				phi36 = phi_in20;
				phi37 = phi12 << 8 | phi10 & 0xff;
			}
			phi13 = phi32;
			uint32_t phi38 = phi35;
			uint32_t phi_in39 = phi36;
			uint32_t phi40 = phi_in39;
			uint32_t anon41 = phi37 + 1;
			if (anon41 == phi_in39)
			{
				anon42 = printf((uint8_t*)0x400644);
				anon43 = anon41 >> 8;
				phi1 = anon43;
				phi3 = phi_in39;
				phi4 = anon15;
				phi38 = phi_in11;
				phi40 = phi_in11;
			}
			if (anon41 != phi_in39 || anon42 != 0 && anon41 == phi_in39)
			{
				phi_in16 = phi38;
				phi17 = phi40;
			}
			if ((uint32_t)((__sext int64_t)phi17 % (__sext int64_t)anon41) == 0)
			{
				if (anon41 != phi_in39 || anon42 != 0 && anon41 == phi_in39)
				{
					phi_in7 = anon43;
					phi6 = anon41;
					uint32_t anon44 = phi_in16 + 1;
					phi8 = anon44;
					if (anon44 == 0)
					{
						break;
					}
				}
			}
			else if (anon41 != phi_in39 || anon42 != 0 && anon41 == phi_in39)
			{
				phi12 = anon43;
				phi10 = anon41;
				phi_in18 = (uint32_t)phi14;
				phi19 = (uint32_t)phi13;
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
