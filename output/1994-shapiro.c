#include "tests/bin/1994-shapiro.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600a58 != 0)
	{
		__gmon_start__(4195501);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600a88);
}
void main(uint64_t arg0)
{
	struct _IO_FILE* anon1 = fopen((uint8_t*)0x400736, (uint8_t*)0x400734);
	uint64_t phi_in2 = 0;
	uint32_t dispatch3 = 0;
	while (true)
	{
		uint64_t phi11;
		uint64_t phi_in9;
		uint32_t anon7;
		uint32_t phi13;
		uint64_t phi_in8;
		uint64_t phi_in5;
		uint64_t phi12;
		uint32_t phi_in10;
		if (dispatch3 == 0)
		{
			uint64_t phi4 = phi_in5;
			uint64_t phi6 = phi_in2;
			anon7 = _IO_getc(anon1);
			phi_in8 = phi4;
			phi_in9 = phi6;
			phi_in10 = anon7;
			if (anon7 == 255)
			{
				break;
			}
		}
		if (dispatch3 == 1 || anon7 != 255 && dispatch3 == 0)
		{
			phi11 = phi_in8;
			phi12 = phi_in9;
			phi13 = phi_in10;
			phi_in5 = phi11;
			phi_in2 = phi12;
			dispatch3 = 0;
		}
		uint32_t anon14 = phi13 - 74;
		if (((__zext uint8_t)(phi13 != 89) & (__zext uint8_t)(anon14 > 14)) == 0)
		{
			if ((uint32_t)phi12 == 1)
			{
				if (dispatch3 == 1 || anon7 != 255 && dispatch3 == 0)
				{
					_IO_putc(anon14 << 4 | (uint32_t)phi11 - 74, *(struct _IO_FILE**)0x600ac0);
					phi_in5 = phi11 & 0xffffffff;
					phi_in2 = phi12 & 0xffffffffffffff00;
					dispatch3 = 0;
				}
			}
			else if (dispatch3 == 1 || anon7 != 255 && dispatch3 == 0)
			{
				uint32_t anon15 = _IO_getc(anon1);
				phi_in8 = (__zext uint64_t)phi13;
				phi_in9 = 1;
				phi_in10 = anon15;
				dispatch3 = 1;
				if (anon15 == 255)
				{
					break;
				}
			}
		}
	}
	exit(0);
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
