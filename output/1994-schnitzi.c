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
	uint32_t* anon10;
	uint64_t anon14;
	uint32_t* anon17;
	uint32_t phi20;
	alloca1.field4 = arg0;
	struct _IO_FILE** anon3 = (struct _IO_FILE**)0x600c18;
	uint64_t anon2 = ftell(*anon3);
	alloca1.field2 = (uint32_t)anon2;
	uint8_t* anon4 = gets(&alloca1.field1[0]);
	if (anon4 != null)
	{
		uint8_t* anon19;
		do
		{
			uint64_t anon7;
			uint16_t anon8;
			uint64_t phi_in5 = (uint64_t)&alloca1.field1;
			do
			{
				uint64_t phi6 = phi_in5;
				anon7 = (phi6 & 0xffffffff) + 4;
				phi_in5 = anon7;
				uint16_t anon9 = (uint16_t)*(uint32_t*)phi6;
				anon8 = anon9 - 257 & (anon9 ^ 0x8080) & 0x8080;
			}
			while (anon8 == 0);
			anon10 = (uint32_t*)0x600c2c;
			uint32_t anon11 = *anon10 + 1;
			*anon10 = anon11;
			uint8_t anon13 = (uint8_t)anon8;
			struct { uint8_t field0; bool field1; } anon12 = llvm.uadd.with.overflow.i8(anon13, anon13);
			anon14 = arg1 - 960;
			uint32_t anon16 = (uint32_t)arg1 - 944;
			uint32_t anon15 = (uint32_t)anon7 - 3 - (__zext uint32_t)anon12.field1 - anon16;
			*(uint32_t*)(anon14 + ((__sext int64_t)*anon10 << 2) + 128) = anon15;
			anon17 = (uint32_t*)0x600c28;
			*anon17 = anon15;
			uint64_t anon18 = ftell(*anon3);
			*(uint32_t*)(anon14 + ((__sext int64_t)anon11 << 2) + 528) = (uint32_t)anon18;
			anon19 = gets((uint8_t*)(__zext uint64_t)anon16);
		}
		while (anon19 != null);
	}
	uint32_t* anon21 = (uint32_t*)0x600c24;
	phi20 = *anon21;
	if (*anon21 < *anon17)
	{
		uint32_t anon28;
		do
		{
			uint32_t phi22 = phi20;
			uint32_t* anon23 = (uint32_t*)0x600c30;
			*anon23 = 0;
			uint32_t phi24 = 0;
			if ((*anon10 >> 31 | (__zext uint32_t)(*anon10 == 0)) == 0)
			{
				uint32_t anon27;
				do
				{
					alloca1.field0 = 32;
					uint32_t phi25 = 32;
					int64_t anon26 = (__sext int64_t)phi24 << 2;
					if (phi22 < *(uint32_t*)(anon14 + anon26 + 128))
					{
						fseek(*anon3, (__sext int64_t)(phi22 + *(uint32_t*)(anon14 + anon26 + 528)), 0);
						scanf((uint8_t*)0x400884);
						phi25 = (__sext int32_t)alloca1.field0;
					}
					putchar(phi25);
					anon27 = *anon23 + 1;
					*anon23 = anon27;
					phi22 = anon27;
					phi24 = anon27;
				}
				while (*anon10 > anon27);
			}
			putchar(10);
			anon28 = *anon21 + 1;
			*anon21 = anon28;
			phi20 = anon28;
		}
		while (*anon17 > anon28);
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
