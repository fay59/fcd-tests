#include "tests/bin/1994-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bb0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0; uint8_t field1[512]; uint32_t field2; uint8_t field3[420]; uint64_t field4; } alloca1;
	uint32_t* anon7;
	uint64_t anon9;
	uint32_t* anon13;
	uint32_t phi_in15;
	alloca1.field4 = arg0;
	struct _IO_FILE** anon2 = (struct _IO_FILE**)0x600c18;
	alloca1.field2 = (uint32_t)ftell(*anon2);
	if (gets(&alloca1.field1[0]) != null)
	{
		uint8_t* anon14;
		do
		{
			uint64_t anon4;
			uint16_t anon5;
			uint64_t phi3 = (uint64_t)&alloca1.field1;
			do
			{
				anon4 = (phi3 & 0xffffffff) + 4;
				phi3 = anon4;
				uint16_t anon6 = (uint16_t)*(uint32_t*)phi3;
				anon5 = anon6 - 257 & (anon6 ^ 0x8080) & 0x8080;
			}
			while (anon5 == 0);
			anon7 = (uint32_t*)0x600c2c;
			uint32_t anon8 = *anon7 + 1;
			*anon7 = anon8;
			anon9 = arg1 - 960;
			uint8_t anon11 = (uint8_t)anon5;
			uint32_t anon12 = (uint32_t)arg1 - 944;
			uint32_t anon10 = (uint32_t)anon4 - 3 - (__zext uint32_t)llvm.uadd.with.overflow.i8(anon11, anon11).field1 - anon12;
			*(uint32_t*)(anon9 + ((__sext int64_t)*anon7 << 2) + 128) = anon10;
			anon13 = (uint32_t*)0x600c28;
			*anon13 = anon10;
			*(uint32_t*)(anon9 + ((__sext int64_t)anon8 << 2) + 528) = (uint32_t)ftell(*anon2);
			anon14 = gets((uint8_t*)(__zext uint64_t)anon12);
		}
		while (anon14 != null);
	}
	uint32_t* anon16 = (uint32_t*)0x600c24;
	phi_in15 = *anon16;
	if (*anon16 < *anon13)
	{
		uint32_t anon23;
		do
		{
			uint32_t* anon17 = (uint32_t*)0x600c30;
			*anon17 = 0;
			uint32_t phi18 = phi_in15;
			uint32_t phi19 = 0;
			if ((*anon7 >> 31 | (__zext uint32_t)(*anon7 == 0)) == 0)
			{
				uint32_t anon22;
				do
				{
					alloca1.field0 = 32;
					uint32_t phi20 = 32;
					int64_t anon21 = (__sext int64_t)phi19 << 2;
					if (phi18 < *(uint32_t*)(anon9 + anon21 + 128))
					{
						fseek(*anon2, (__sext int64_t)(phi18 + *(uint32_t*)(anon9 + anon21 + 528)), 0);
						scanf((uint8_t*)0x400884);
						phi20 = (__sext int32_t)alloca1.field0;
					}
					putchar(phi20);
					anon22 = *anon17 + 1;
					*anon17 = anon22;
					phi18 = anon22;
					phi19 = anon22;
				}
				while (*anon7 > anon22);
			}
			putchar(10);
			anon23 = *anon16 + 1;
			*anon16 = anon23;
			phi_in15 = anon23;
		}
		while (*anon13 > anon23);
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400570, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400800, (void(*)())0x400870, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600c20;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196290);
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
	_init(4196403);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6009c8)(arg1 & 0xffffffff, arg2, arg3);
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
