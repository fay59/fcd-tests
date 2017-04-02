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
	uint32_t anon6;
	uint32_t anon2 = (uint32_t)arg2;
	phi_in1 = anon2 >> 8;
	uint32_t phi_in3 = anon2;
	uint64_t phi_in4 = arg1;
	do
	{
		uint32_t phi_in5;
		anon6 = (uint32_t)phi_in4 + 1;
		phi_in5 = anon6;
		if (anon6 != 0)
		{
			uint64_t phi_in8;
			uint32_t phi_in24;
			uint32_t anon26;
			uint32_t anon27;
			uint64_t phi_in7 = 0;
			uint64_t anon9 = (__zext uint64_t)phi_in5;
			phi_in8 = anon9;
			uint32_t phi_in10 = 0;
			uint64_t phi_in11 = phi_in7;
			uint64_t phi_in12 = phi_in8;
			if (phi_in5 > phi_in10)
			{
				int64_t anon15;
				uint64_t anon16;
				uint64_t anon17;
				uint32_t anon19;
				uint32_t anon20;
				uint32_t anon21;
				do
				{
					uint32_t phi13 = phi_in5;
					anon15 = (__sext int64_t)phi13 >> 60;
					anon16 = phi_in11 << 3;
					int64_t anon14 = (anon15 + phi_in12 & 7) - (anon15 & 7) + anon16;
					phi_in11 = anon14 & 0xffffffff;
					anon19 = (uint32_t)phi_in12;
					uint64_t anon18 = (anon19 > 4294967295 ? phi_in12 : phi_in12 + 7) << 32 >> 35;
					anon17 = anon18 & 0xffffffff;
					phi_in12 = anon17;
					anon20 = (uint32_t)anon18;
					phi_in5 = anon20;
					anon21 = (uint32_t)anon14;
				}
				while (anon20 > anon21);
				uint32_t anon23 = (uint32_t)anon15;
				uint32_t anon22 = (anon23 + anon19 & 7) - (anon23 & 7) + (uint32_t)anon16;
				phi_in7 = (__zext uint64_t)anon22;
				phi_in8 = anon17;
				phi_in24 = (__zext uint32_t)(anon21 == anon20 | (uint32_t)((__zext uint64_t)(anon21 > 4294967295 ? anon22 : anon22 + 7) << 32 >> 35) == anon20);
			}
			else 
			{
				phi_in24 = phi_in1 << 8 | phi_in3 & 0xff;
			}
			uint32_t anon25 = phi_in24 + 1;
			if (anon25 == phi_in5)
			{
				anon26 = printf((uint8_t*)0x400644);
				anon27 = anon25 >> 8;
				phi_in1 = anon27;
				phi_in3 = phi_in5;
				phi_in4 = anon9;
			}
			if ((uint32_t)((__sext int64_t)phi_in5 % (__sext int64_t)anon25) == 0)
			{
				if (anon25 != phi_in5 || anon26 != 0)
				{
					phi_in1 = anon27;
					phi_in3 = anon25;
					uint32_t anon28 = phi_in5 + 1;
					phi_in5 = anon28;
					if (anon28 == 0)
					{
						break;
					}
				}
			}
			else if (anon25 != phi_in5 || anon26 != 0)
			{
				phi_in1 = anon27;
				phi_in3 = anon25;
				phi_in5 = (uint32_t)phi_in8;
				phi_in10 = (uint32_t)phi_in7;
			}
		}
	}
	while (anon6 != 0);
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
