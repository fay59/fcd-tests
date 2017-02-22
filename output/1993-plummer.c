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
	uint64_t anon3 = arg1 << 32;
	uint64_t anon2 = *(uint64_t*)((anon3 >> 29) - 8 + arg2) - 1;
	*anon1 = anon2;
	*(uint8_t*)anon2 = 13;
	**(uint8_t**)(arg2 + 16) = 0;
	uint32_t dispatch4 = 0;
	while (true)
	{
		uint8_t phi_in12;
		uint64_t* anon8;
		uint64_t anon9;
		uint64_t* anon6;
		uint64_t phi_in5;
		if (dispatch4 == 0)
		{
			anon6 = (uint64_t*)(arg2 + 8);
			phi_in5 = *anon6;
		}
		if (dispatch4 == 2 || dispatch4 == 0)
		{
			uint64_t phi7 = phi_in5;
			printf((uint8_t*)phi7);
			anon8 = (uint64_t*)0x6009b0;
			anon9 = *anon1 - 1;
			*anon8 = anon9;
			phi_in5 = *anon6;
			dispatch4 = 2;
		}
		if (anon9 >= *anon6 && (dispatch4 == 2 || dispatch4 == 0))
		{
			uint8_t* anon10 = (uint8_t*)anon9;
			uint8_t anon11 = *anon10 + 1;
			*anon10 = anon11;
			phi_in12 = anon11;
		}
		if (dispatch4 == 1 || anon9 >= *anon6 && dispatch4 == 2 || anon9 >= *anon6 && dispatch4 == 0)
		{
			uint8_t phi13 = phi_in12;
			dispatch4 = 0;
			if ((__sext int32_t)phi13 > (uint32_t)((__sext int64_t)**(uint8_t**)0x6009a8 + (arg1 << 1)) * (uint32_t)arg1)
			{
				*anon8 = *anon8 - 1;
				uint8_t anon14 = (uint8_t)((__zext uint64_t)((uint8_t)arg1 + **(uint8_t**)0x6009a8) * (anon3 >> 32));
				*(uint8_t*)*anon8 = anon14;
				phi_in5 = *anon6;
				dispatch4 = 2;
				if (*anon6 <= *anon8)
				{
					uint8_t anon15 = anon14 + 1;
					*(uint8_t*)*anon8 = anon15;
					phi_in12 = anon15;
					dispatch4 = 1;
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
