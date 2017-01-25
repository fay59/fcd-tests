#include "tests/bin/1996-schweikh3.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195949);
	}
	return;
}
void __assert_fail(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601238);
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601250);
}
void wait(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601268);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint64_t anon31;
	uint64_t phi_in22;
	uint64_t phi21;
	uint8_t* anon10;
	uint8_t* phi27;
	uint8_t* phi_in25;
	uint64_t* anon8;
	uint8_t* anon1;
	uint64_t* anon6;
	if (**(uint8_t**)(((arg2 << 32) - 4294967296 >> 29) + arg3) == 99)
	{
		anon1 = (uint8_t*)0x601290;
		*anon1 = 99;
	}
	struct _IO_FILE** anon2 = (struct _IO_FILE**)0x6012a0;
	setbuf(*anon2, null);
	uint32_t anon3 = fork();
	bool anon4 = anon3 == 255;
	if (anon4)
	{
		__assert_fail(4196900);
	}
	bool anon5 = anon3 == 0;
	if (anon5)
	{
		anon6 = (uint64_t*)0x6012b0;
		anon8 = (uint64_t*)0x601288;
		uint64_t anon7 = *anon6 | *anon8;
		*anon6 = anon7;
		uint64_t phi_in9 = anon7;
		if (*anon8 != 0)
		{
			uint64_t anon19;
			do
			{
				uint8_t* anon11;
				uint64_t phi_in15;
				uint8_t* anon13;
				uint8_t* phi_in12;
				uint64_t phi_in16;
				anon10 = (uint8_t*)0x400cf0;
				printf(anon10);
				if (*anon1 == 99)
				{
					anon11 = calloc(*anon6, 1);
					phi_in12 = anon11;
				}
				else 
				{
					anon13 = malloc(*anon6);
					phi_in12 = anon13;
				}
				if (anon11 != null && *anon1 == 99 || *anon1 != 99 && anon13 != null)
				{
					uint8_t* phi14 = phi_in12;
					puts((uint8_t*)0x400c67);
					free(phi14);
					phi_in15 = *anon6;
					phi_in16 = *anon8;
				}
				if (*anon1 == 99 && anon11 == null || *anon1 != 99 && anon13 == null)
				{
					puts((uint8_t*)0x400c6d);
					phi_in15 = *anon6 & (*anon8 ^ 0xffffffffffffffff);
					phi_in16 = *anon8;
				}
				uint64_t phi17 = phi_in15;
				uint64_t phi18 = phi_in16;
				anon19 = phi18 >> 1;
				*anon8 = anon19;
				uint64_t anon20 = anon19 | phi17;
				*anon6 = anon20;
				phi_in9 = anon20;
			}
			while (anon19 != 0);
		}
		phi21 = phi_in9;
		phi_in22 = phi21;
	}
	if (anon3 == 255 || anon5 && *anon1 == 99)
	{
		uint64_t phi23 = phi_in22;
		uint8_t* anon24 = calloc(phi23, 1);
		phi_in25 = anon24;
	}
	if (*anon1 != 99 && anon5)
	{
		*(uint64_t*)(arg1 - 72) = phi21;
		uint8_t* anon26 = malloc(phi21);
		phi_in25 = anon26;
	}
	if (anon3 == 255 || anon5 && *anon1 == 99 || *anon1 != 99 && anon5)
	{
		phi27 = phi_in25;
	}
	if (phi27 == null)
	{
		if (anon3 == 255 || anon5 && *anon1 == 99 || *anon1 != 99 && anon5)
		{
			__assert_fail(4197076);
			uint64_t anon30 = arg1 - 72;
			uint64_t anon29 = anon30 & 0xfffffffffffffff0;
			uint64_t anon28 = anon29 - 8;
			anon31 = (uint64_t)phi27;
			*(uint64_t*)anon28 = anon31;
			uint64_t anon32 = anon29 - 16;
			*(uint64_t*)anon32 = anon28;
			__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400770, __undefined, (uint8_t**)anon30, (void(*)())0x400bd0, (void(*)())0x400c40, (void(*)())0x4b, *(uint8_t**)anon32);
			llvm.trap();
		}
	}
	else if (anon3 == 255 || anon5 && *anon1 == 99 || *anon1 != 99 && anon5)
	{
		printf(anon10);
		_IO_putc(10, *anon2);
		*anon8 = 0;
		uint64_t phi_in33 = 0;
		if (*anon6 != 0)
		{
			uint64_t anon37;
			do
			{
				uint64_t phi34 = phi_in33;
				uint64_t anon35 = time(null);
				*(uint8_t*)(anon31 + phi34) = 7;
				printf((uint8_t*)0x400c84);
				uint64_t anon36 = time(null);
				difftime(anon36, anon35);
				(__asm "subsd xmm0, qword ptr [rip + 0x331]")();
				(__asm "ucomisd xmm0, qword ptr [rip + 0x331]")();
				anon37 = *anon8 + 1024;
				*anon8 = anon37;
				phi_in33 = anon37;
			}
			while (*anon6 > anon37);
		}
		free(phi27);
	}
	bool anon38 = anon3 == 255 || anon3 == 0;
	if (!anon38)
	{
		wait(4196544);
		puts((uint8_t*)0x400ce2);
	}
	if (!anon38 || phi27 != null && anon4 || phi27 != null && anon5 && *anon1 == 99 || *anon1 != 99 && phi27 != null && anon5)
	{
		return;
	}
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400770, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400bd0, (void(*)())0x400c40, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6012a8;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4197266);
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
	_init(4197379);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601000)(arg1 & 0xffffffff, arg2, arg3);
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
