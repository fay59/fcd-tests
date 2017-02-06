#include "tests/bin/1994-shapiro.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600a58 != 0)
	{
		__gmon_start__(4195501);
	}
	return;
}
void _IO_putc(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600a78);
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600a88);
}
void _IO_getc(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600a90);
}
void fopen(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600a98);
}
void main(uint64_t arg0)
{
	fopen(4195653);
	uint64_t phi_in1 = 0;
	uint32_t dispatch2 = 0;
	while (true)
	{
		uint64_t phi_in4;
		if (dispatch2 == 0)
		{
			uint64_t phi3 = phi_in1;
			_IO_getc(4195672);
			phi_in4 = phi3;
		}
		if (dispatch2 == 1 || dispatch2 == 0)
		{
			uint64_t phi5 = phi_in4;
			if ((uint32_t)phi5 == 1)
			{
				_IO_putc(4195753);
				phi_in1 = phi5 & 0xffffffffffffff00;
				dispatch2 = 0;
			}
			else 
			{
				_IO_getc(4195706);
				phi_in4 = 1;
				dispatch2 = 1;
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400530, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4006b0, (void(*)())0x400720, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600ac8;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195954);
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
	_init(4196067);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600870)(arg1 & 0xffffffff, arg2, arg3);
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
