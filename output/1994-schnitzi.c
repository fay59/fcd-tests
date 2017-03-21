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
	uint32_t* anon8;
	uint64_t anon10;
	uint32_t* anon15;
	uint32_t phi17;
	alloca1.field4 = arg0;
	struct _IO_FILE** anon2 = (struct _IO_FILE**)0x600c18;
	alloca1.field2 = (uint32_t)ftell(*anon2);
	if (gets(&alloca1.field1[0]) != null)
	{
		uint8_t* anon16;
		do
		{
			uint64_t anon5;
			uint16_t anon6;
			uint64_t phi_in3 = (uint64_t)&alloca1.field1;
			do
			{
				uint64_t phi4 = phi_in3;
				anon5 = (phi4 & 0xffffffff) + 4;
				phi_in3 = anon5;
				uint16_t anon7 = (uint16_t)*(uint32_t*)phi4;
				anon6 = anon7 - 257 & (anon7 ^ 0x8080) & 0x8080;
			}
			while (anon6 == 0);
			anon8 = (uint32_t*)0x600c2c;
			uint32_t anon9 = *anon8 + 1;
			*anon8 = anon9;
			anon10 = arg1 - 960;
			uint8_t anon13 = (uint8_t)anon6;
			bool anon12 = llvm.uadd.with.overflow.i8(anon13, anon13).field1;
			uint32_t anon14 = (uint32_t)arg1 - 944;
			uint32_t anon11 = (uint32_t)anon5 - 3 - (__zext uint32_t)anon12 - anon14;
			*(uint32_t*)(anon10 + ((__sext int64_t)*anon8 << 2) + 128) = anon11;
			anon15 = (uint32_t*)0x600c28;
			*anon15 = anon11;
			*(uint32_t*)(anon10 + ((__sext int64_t)anon9 << 2) + 528) = (uint32_t)ftell(*anon2);
			anon16 = gets((uint8_t*)(__zext uint64_t)anon14);
		}
		while (anon16 != null);
	}
	uint32_t* anon18 = (uint32_t*)0x600c24;
	phi17 = *anon18;
	if (*anon18 < *anon15)
	{
		uint32_t anon25;
		do
		{
			uint32_t phi19 = phi17;
			uint32_t* anon20 = (uint32_t*)0x600c30;
			*anon20 = 0;
			uint32_t phi21 = 0;
			if ((*anon8 >> 31 | (__zext uint32_t)(*anon8 == 0)) == 0)
			{
				uint32_t anon24;
				do
				{
					alloca1.field0 = 32;
					uint32_t phi22 = 32;
					int64_t anon23 = (__sext int64_t)phi21 << 2;
					if (phi19 < *(uint32_t*)(anon10 + anon23 + 128))
					{
						fseek(*anon2, (__sext int64_t)(phi19 + *(uint32_t*)(anon10 + anon23 + 528)), 0);
						scanf((uint8_t*)0x400884);
						phi22 = (__sext int32_t)alloca1.field0;
					}
					putchar(phi22);
					anon24 = *anon20 + 1;
					*anon20 = anon24;
					phi19 = anon24;
					phi21 = anon24;
				}
				while (*anon8 > anon24);
			}
			putchar(10);
			anon25 = *anon18 + 1;
			*anon18 = anon25;
			phi17 = anon25;
		}
		while (*anon15 > anon25);
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
