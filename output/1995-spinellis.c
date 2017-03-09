#include "tests/bin/1995-spinellis.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600b80 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	uint8_t* anon2;
	uint32_t anon4;
	do
	{
		uint32_t anon1 = _IO_getc(*(struct _IO_FILE**)0x600be8);
		anon2 = strchr((uint8_t*)(*(uint64_t*)0x600bd8 & 0xffffffff), anon1);
	}
	while ((uint32_t)(uint64_t)anon2 - (uint32_t)*(uint64_t*)0x600bd8 != 6);
	do
	{
		uint64_t anon3 = n(4195685);
		anon4 = (uint32_t)anon3;
		*(uint32_t*)0x600bf4 = anon4;
		if (anon4 != 36)
		{
			_IO_putc(anon4, *(struct _IO_FILE**)0x600be0);
		}
	}
	while (anon4 != 36);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400520, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400780, (void(*)())0x4007f0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600bf0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4195890);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void b(uint64_t arg0)
{
	_IO_getc(*(struct _IO_FILE**)0x600be8);
	return;
}
uint64_t n(uint64_t arg0)
{
	struct _IO_FILE** anon2 = (struct _IO_FILE**)0x600be8;
	uint32_t anon1 = _IO_getc(*anon2);
	uint64_t* anon4 = (uint64_t*)0x600bd8;
	uint8_t* anon3 = strchr((uint8_t*)(*anon4 & 0xffffffff), anon1);
	uint32_t anon5 = _IO_getc(*anon2);
	uint8_t* anon6 = strchr((uint8_t*)(*anon4 & 0xffffffff), anon5);
	uint32_t anon7 = _IO_getc(*anon2);
	uint8_t* anon8 = strchr((uint8_t*)(*anon4 & 0xffffffff), anon7);
	uint32_t phi9 = 32;
	uint64_t anon11 = (uint64_t)anon6 - *anon4;
	uint64_t anon12 = (uint64_t)anon8 - *anon4;
	uint32_t anon10 = (uint32_t)((anon11 + (anon11 >> 31 & 1) << 32 >> 33) + ((uint64_t)anon3 - *anon4) * 3) * 3 + (uint32_t)((anon12 >> 31 & 1) + anon12 << 32 >> 33);
	if (!(anon10 == 0 || anon10 == 1 || anon10 == 2))
	{
		phi9 = anon10 + 94;
		if (anon10 >= 33)
		{
			uint32_t anon13 = _IO_getc(*anon2);
			uint8_t* anon14 = strchr((uint8_t*)(*anon4 & 0xffffffff), anon13);
			uint64_t anon15 = (uint64_t)anon14 - *anon4;
			phi9 = (uint32_t)(anon15 + (anon15 >> 31 & 1) << 32 >> 33) + anon10 + (anon10 << 1) - 64;
		}
	}
	if (anon10 == 2)
	{
		phi9 = 9;
	}
	if (anon10 == 1)
	{
		phi9 = 10;
	}
	return (__zext uint64_t)phi9;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196275);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600998)(arg1 & 0xffffffff, arg2, arg3);
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
