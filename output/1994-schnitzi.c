#include "tests/bin/1994-schnitzi.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bb0 != 0)
	{
		__gmon_start__(4195549);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600be8);
}
void gets(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600bf0);
}
void main(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0; uint8_t field1[512]; uint32_t field2; uint8_t field3[420]; uint64_t field4; } alloca1;
	uint64_t anon14;
	uint32_t* anon16;
	uint32_t phi_in18;
	uint32_t* anon10;
	alloca1.field4 = arg0;
	struct _IO_FILE** anon3 = (struct _IO_FILE**)0x600c18;
	uint64_t anon2 = ftell(*anon3);
	alloca1.field2 = (uint32_t)anon2;
	gets(4195737);
	uint32_t dispatch4 = 0;
	if (anon2 != 0)
	{
		uint64_t anon17;
		do
		{
			uint16_t anon8;
			uint64_t anon7;
			while (true)
			{
				uint64_t phi_in5;
				if (dispatch4 == 0)
				{
					phi_in5 = (uint64_t)&alloca1.field1;
				}
				uint64_t phi6 = phi_in5;
				anon7 = phi6 + 4;
				phi_in5 = anon7;
				dispatch4 = 1;
				uint16_t anon9 = (uint16_t)*(uint32_t*)(phi6 & 0xffffffff);
				anon8 = anon9 - 257 & (anon9 ^ 0x8080) & 0x8080;
				if (anon8 != 0)
				{
					break;
				}
			}
			anon10 = (uint32_t*)0x600c2c;
			uint32_t anon11 = *anon10 + 1;
			*anon10 = anon11;
			uint8_t anon13 = (uint8_t)anon8;
			struct { uint8_t field0; bool field1; } anon12 = llvm.uadd.with.overflow.i8(anon13, anon13);
			anon14 = arg1 - 960;
			uint32_t anon15 = (uint32_t)anon7 - 3 - (__zext uint32_t)anon12.field1 - (uint32_t)arg1 - 944;
			*(uint32_t*)(anon14 + ((__sext int64_t)*anon10 << 2) + 128) = anon15;
			anon16 = (uint32_t*)0x600c28;
			*anon16 = anon15;
			anon17 = ftell(*anon3);
			*(uint32_t*)(anon14 + ((__zext uint64_t)anon11 << 32 >> 30) + 528) = (uint32_t)anon17;
			gets(4195880);
			dispatch4 = 0;
		}
		while (anon17 != 0);
	}
	uint32_t* anon19 = (uint32_t*)0x600c24;
	phi_in18 = *anon19;
	uint32_t dispatch20 = 0;
	if (*anon19 < *anon16)
	{
		uint32_t anon31;
		do
		{
			while (true)
			{
				uint32_t phi_in23;
				uint32_t* anon22;
				uint32_t phi_in24;
				if (dispatch20 == 0)
				{
					uint32_t phi21 = phi_in18;
					anon22 = (uint32_t*)0x600c30;
					*anon22 = 0;
					phi_in23 = phi21;
					phi_in24 = 0;
					if (*anon10 < 1)
					{
						break;
					}
				}
				if (dispatch20 == 1 || *anon10 >= 1 && dispatch20 == 0)
				{
					uint32_t phi25 = phi_in23;
					uint32_t phi26 = phi_in24;
					alloca1.field0 = 32;
					uint32_t phi_in27 = 32;
					int64_t anon28 = (__sext int64_t)phi26 << 2;
					if (phi25 < *(uint32_t*)(anon14 + anon28 + 128))
					{
						fseek(*anon3, (__sext int64_t)(phi25 + *(uint32_t*)(anon14 + anon28 + 528)), 0);
						scanf((uint8_t*)0x400884);
						phi_in27 = (__sext int32_t)alloca1.field0;
					}
					uint32_t phi29 = phi_in27;
					putchar(phi29);
					uint32_t anon30 = *anon22 + 1;
					*anon22 = anon30;
					phi_in23 = anon30;
					phi_in24 = anon30;
					dispatch20 = 1;
					if (*anon10 <= anon30)
					{
						break;
					}
				}
			}
			putchar(10);
			anon31 = *anon19 + 1;
			*anon19 = anon31;
			phi_in18 = anon31;
			dispatch20 = 0;
		}
		while (*anon16 > anon31);
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
