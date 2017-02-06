#include "tests/bin/1993-plummer.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600958 != 0)
	{
		__gmon_start__(4195261);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600988);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t* anon1 = (uint64_t*)0x6009a8;
	uint64_t anon2 = *(uint64_t*)((arg1 << 32 >> 29) - 8 + arg2) - 1;
	*anon1 = anon2;
	*(uint8_t*)anon2 = 13;
	**(uint8_t**)(arg2 + 16) = 0;
	uint32_t dispatch3 = 0;
	while (true)
	{
		uint8_t phi_in11;
		uint64_t* anon5;
		uint64_t phi_in4;
		uint64_t anon8;
		uint64_t* anon7;
		if (dispatch3 == 0)
		{
			anon5 = (uint64_t*)(arg2 + 8);
			phi_in4 = *anon5;
		}
		if (dispatch3 == 1 || dispatch3 == 0)
		{
			uint64_t phi6 = phi_in4;
			printf((uint8_t*)phi6);
			anon7 = (uint64_t*)0x6009b0;
			anon8 = *anon1 - 1;
			*anon7 = anon8;
			phi_in4 = *anon5;
			dispatch3 = 1;
		}
		if (anon8 >= *anon5 && (dispatch3 == 1 || dispatch3 == 0))
		{
			uint8_t* anon9 = (uint8_t*)anon8;
			uint8_t anon10 = *anon9 + 1;
			*anon9 = anon10;
			phi_in11 = anon10;
		}
		if (dispatch3 == 2 || anon8 >= *anon5 && dispatch3 == 1 || anon8 >= *anon5 && dispatch3 == 0)
		{
			uint8_t phi12 = phi_in11;
			dispatch3 = 0;
			if ((__sext int32_t)phi12 > (uint32_t)((__sext int64_t)**(uint8_t**)0x6009a8 + (arg1 << 1)) * (uint32_t)arg1)
			{
				*anon7 = *anon7 - 1;
				uint8_t anon14 = (uint8_t)arg1;
				uint8_t anon13 = (anon14 + **(uint8_t**)0x6009a8) * anon14;
				*(uint8_t*)*anon7 = anon13;
				phi_in4 = *anon5;
				dispatch3 = 1;
				if (*anon5 <= *anon7)
				{
					uint8_t anon15 = anon13 + 1;
					*(uint8_t*)*anon7 = anon15;
					phi_in11 = anon15;
					dispatch3 = 2;
				}
			}
		}
	}
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
	uint8_t* anon1 = (uint8_t*)0x6009a0;
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
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600770)(arg1 & 0xffffffff, arg2, arg3);
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
