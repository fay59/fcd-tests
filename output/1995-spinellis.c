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
	uint32_t anon2;
	uint32_t anon3;
	do
	{
		uint8_t* anon1 = strchr((uint8_t*)(*(uint64_t*)0x600bd8 & 0xffffffff), _IO_getc(*(struct _IO_FILE**)0x600be8));
		anon2 = (uint32_t)(uint64_t)anon1 - (uint32_t)*(uint64_t*)0x600bd8;
	}
	while (anon2 != 6);
	do
	{
		anon3 = (uint32_t)n(4195685);
		*(uint32_t*)0x600bf4 = anon3;
		if (anon3 != 36)
		{
			_IO_putc(anon3, *(struct _IO_FILE**)0x600be0);
		}
	}
	while (anon3 != 36);
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
	uint64_t* anon2 = (uint64_t*)0x600bd8;
	struct _IO_FILE** anon3 = (struct _IO_FILE**)0x600be8;
	uint8_t* anon1 = strchr((uint8_t*)(*anon2 & 0xffffffff), _IO_getc(*anon3));
	uint8_t* anon4 = strchr((uint8_t*)(*anon2 & 0xffffffff), _IO_getc(*anon3));
	uint8_t* anon5 = strchr((uint8_t*)(*anon2 & 0xffffffff), _IO_getc(*anon3));
	uint32_t phi_in6 = 32;
	uint64_t anon8 = (uint64_t)anon4 - *anon2;
	uint64_t anon9 = (uint64_t)anon5 - *anon2;
	uint32_t anon7 = (uint32_t)((anon8 + (anon8 >> 31 & 1) << 32 >> 33) + ((uint64_t)anon1 - *anon2) * 3) * 3 + (uint32_t)((anon9 >> 31 & 1) + anon9 << 32 >> 33);
	if (!(anon7 == 0 || anon7 == 1 || anon7 == 2))
	{
		if (anon7 < 33)
		{
			phi_in6 = anon7 + 94;
		}
		else 
		{
			uint64_t anon10 = (uint64_t)strchr((uint8_t*)(*anon2 & 0xffffffff), _IO_getc(*anon3)) - *anon2;
			phi_in6 = (uint32_t)(anon10 + (anon10 >> 31 & 1) << 32 >> 33) + anon7 + (anon7 << 1) - 64;
		}
	}
	if (anon7 == 2)
	{
		phi_in6 = 9;
	}
	if (anon7 == 1)
	{
		phi_in6 = 10;
	}
	return (__zext uint64_t)phi_in6;
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
