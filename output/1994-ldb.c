#include "tests/bin/1994-ldb.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600a68 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	uint32_t phi4;
	do
	{
		while (true)
		{
			uint32_t* anon3;
			uint32_t* anon1 = (uint32_t*)0x600d34;
			if (*anon1 == 0)
			{
				*anon1 = 1;
				anon3 = (uint32_t*)0x600d38;
				uint64_t anon2 = time((uint64_t*)(__zext uint64_t)*anon3);
				srand((uint32_t)anon2);
				phi4 = *anon1;
				break;
			}
			else 
			{
				uint32_t anon5 = rand();
				uint32_t anon6 = *anon1 + 1;
				*anon1 = anon6;
				uint64_t phi7 = 6294568;
				if ((uint32_t)((__sext int64_t)anon5 % (__sext int64_t)*anon1) == 0)
				{
					phi7 = ((__sext int64_t)anon6 << 2) + 6294336;
				}
				uint8_t* anon8 = gets((uint8_t*)phi7);
				if ((uint32_t)(uint64_t)anon8 == 0)
				{
					uint32_t anon9 = puts((uint8_t*)(((__sext int64_t)*anon3 << 2) + 6294336));
					phi4 = anon9 & *anon3;
					break;
				}
			}
		}
	}
	while (phi4 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400520, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4006d0, (void(*)())0x400740, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600b00;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195986);
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
	_init(4196099);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600880)(arg1 & 0xffffffff, arg2, arg3);
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
