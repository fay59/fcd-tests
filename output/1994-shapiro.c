#include "tests/bin/1994-shapiro.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600a58 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	struct _IO_FILE* anon1 = fopen((uint8_t*)0x400736, (uint8_t*)0x400734);
	uint64_t phi2 = 0;
	uint32_t dispatch3 = 0;
	while (true)
	{
		uint64_t phi_in4;
		uint32_t anon6;
		uint64_t phi7;
		uint32_t phi8;
		if (dispatch3 == 0)
		{
			phi_in4 = phi_in4;
			uint64_t phi_in5 = phi2;
			anon6 = _IO_getc(anon1);
			phi7 = phi_in5;
			phi8 = anon6;
			if (anon6 == 255)
			{
				break;
			}
		}
		if (dispatch3 == 1 || anon6 != 255 && dispatch3 == 0)
		{
			phi2 = phi7;
			dispatch3 = 0;
		}
		uint32_t anon9 = phi8 - 74;
		if (((__zext uint8_t)(phi8 != 89) & (__zext uint8_t)(anon9 > 14)) == 0)
		{
			if ((uint32_t)phi7 == 1)
			{
				if (dispatch3 == 1 || anon6 != 255 && dispatch3 == 0)
				{
					_IO_putc(anon9 << 4 | (uint32_t)phi_in4 - 74, *(struct _IO_FILE**)0x600ac0);
					phi_in4 = phi_in4 & 0xffffffff;
					phi2 = phi7 & 0xffffffffffffff00;
					dispatch3 = 0;
				}
			}
			else if (dispatch3 == 1 || anon6 != 255 && dispatch3 == 0)
			{
				uint32_t anon10 = _IO_getc(anon1);
				phi_in4 = (__zext uint64_t)phi8;
				phi7 = 1;
				phi8 = anon10;
				dispatch3 = 1;
				if (anon10 == 255)
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
