#include "tests/bin/1995-spinellis.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600b80 != 0)
	{
		__gmon_start__(4195501);
	}
	return;
}
void _IO_putc(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600ba8);
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600bb8);
}
void _IO_getc(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600bc0);
}
void main(uint64_t arg0)
{
	uint32_t anon6;
	uint64_t anon4;
	uint32_t phi_in2;
	do
	{
		uint32_t phi1 = phi_in2;
		_IO_getc(4195636);
		uint8_t* anon3 = strchr((uint8_t*)(*(uint64_t*)0x600bd8 & 0xffffffff), phi1);
		anon4 = (uint64_t)anon3;
		phi_in2 = (uint32_t)anon4 - (uint32_t)*(uint64_t*)0x600bd8;
	}
	while ((uint32_t)(anon4 - *(uint64_t*)0x600bd8) != 6);
	do
	{
		uint64_t anon5 = n(4195685);
		anon6 = (uint32_t)anon5;
		*(uint32_t*)0x600bf4 = anon6;
		if (anon6 != 36)
		{
			_IO_putc(4195678);
		}
	}
	while (anon6 != 36);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400520, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400780, (void(*)())0x4007f0, (void(*)())arg2, *(uint8_t**)anon1);
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
	_IO_getc(4195965);
	return;
}
uint64_t n(uint64_t arg0)
{
	_IO_getc(4196018);
	uint64_t* anon3 = (uint64_t*)0x600bd8;
	uint8_t* anon2 = (uint8_t*)(*anon3 & 0xffffffff);
	uint64_t anon1 = strlen(anon2);
	_IO_getc(4196053);
	uint32_t anon5 = (uint32_t)(uint64_t)&anon2[anon1] - (uint32_t)*anon3;
	uint8_t* anon4 = strchr((uint8_t*)(*anon3 & 0xffffffff), anon5);
	_IO_getc(4196099);
	uint64_t anon8 = (uint64_t)anon4 - *anon3;
	uint32_t anon7 = (uint32_t)(anon8 + (anon8 >> 31 & 1) << 32 >> 33) + anon5 * 3;
	uint8_t* anon6 = strchr((uint8_t*)(*anon3 & 0xffffffff), anon7);
	uint32_t phi_in9 = 32;
	uint64_t anon11 = (uint64_t)anon6 - *anon3;
	uint32_t anon10 = anon7 * 3 + (uint32_t)((anon11 >> 31 & 1) + anon11 << 32 >> 33);
	if (anon10 != 0)
	{
		phi_in9 = 10;
		if (anon10 != 1)
		{
			phi_in9 = 9;
			if (anon10 != 2)
			{
				uint32_t anon12 = anon10 + 94;
				phi_in9 = anon12;
				if (anon10 >= 33)
				{
					_IO_getc(4196178);
					uint8_t* anon13 = strchr((uint8_t*)(*anon3 & 0xffffffff), anon12);
					uint64_t anon14 = (uint64_t)anon13 - *anon3;
					phi_in9 = (uint32_t)(anon14 + (anon14 >> 31 & 1) << 32 >> 33) + anon10 + (anon10 << 1) - 64;
				}
			}
		}
	}
	uint32_t phi15 = phi_in9;
	return (__zext uint64_t)phi15;
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
