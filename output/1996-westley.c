#include "tests/bin/1996-westley.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6009c8 != 0)
	{
		__gmon_start__(4195373);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600a00);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t anon4;
	uint64_t** anon1 = (uint64_t**)arg2;
	time(*anon1);
	uint64_t phi_in2 = arg1;
	do
	{
		uint64_t phi3 = phi_in2;
		anon4 = phi3 + (phi3 >> 31 & 1) << 32 >> 33;
		if (anon4 != 0)
		{
			struct tm* anon5 = localtime(*anon1);
			*(uint8_t*)(*(uint64_t*)(arg2 + 32) + (__sext int64_t)*(uint8_t*)(*(uint64_t*)((anon4 << 3) + arg2) + (__sext int64_t)*(uint32_t*)(((uint64_t)anon5 << 32 >> 32) + (anon4 << 2)))) = *(uint8_t*)(*(uint64_t*)(arg2 + 24) + (anon4 & 0xffffffff));
			phi_in2 = anon4;
		}
	}
	while (anon4 != 0);
	__indirect_jump(*(uint64_t*)0x6009f0);
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004a0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400610, (void(*)())0x400680, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600a20;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195794);
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
	_init(4195907);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6007e0)(arg1 & 0xffffffff, arg2, arg3);
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
