#include "tests/bin/1996-schweikh3.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195949);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601250);
}
void wait(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601268);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint8_t* phi26;
	uint8_t* anon1;
	uint8_t* anon4;
	uint8_t* anon5;
	if (**(uint8_t**)(((arg1 << 32) - 4294967296 >> 29) + arg2) == 99)
	{
		anon1 = (uint8_t*)0x601290;
		*anon1 = 99;
	}
	struct _IO_FILE** anon2 = (struct _IO_FILE**)0x6012a0;
	setbuf(*anon2, null);
	uint32_t anon3 = fork();
	if (anon3 == 255)
	{
		anon4 = (uint8_t*)0x400c54;
		anon5 = (uint8_t*)0x400d18;
		__assert_fail((uint8_t*)0x400c7d, anon4, 58, anon5);
	}
	bool anon6 = anon3 == 0;
	if (anon6)
	{
		uint8_t* phi_in24;
		uint8_t* anon11;
		uint64_t* anon7 = (uint64_t*)0x6012b0;
		uint64_t* anon9 = (uint64_t*)0x601288;
		uint64_t anon8 = *anon7 | *anon9;
		*anon7 = anon8;
		uint64_t phi_in10 = anon8;
		if (*anon9 != 0)
		{
			uint64_t anon20;
			do
			{
				uint64_t phi_in17;
				uint8_t* anon14;
				uint8_t* phi_in13;
				uint8_t* anon12;
				uint64_t phi_in16;
				anon11 = (uint8_t*)0x400cf0;
				printf(anon11);
				if (*anon1 == 99)
				{
					anon12 = calloc(*anon7, 1);
					phi_in13 = anon12;
				}
				else 
				{
					anon14 = malloc(*anon7);
					phi_in13 = anon14;
				}
				if (anon12 != null && *anon1 == 99 || *anon1 != 99 && anon14 != null)
				{
					uint8_t* phi15 = phi_in13;
					puts((uint8_t*)0x400c67);
					free(phi15);
					phi_in16 = *anon7;
					phi_in17 = *anon9;
				}
				if (*anon1 == 99 && anon12 == null || *anon1 != 99 && anon14 == null)
				{
					puts((uint8_t*)0x400c6d);
					phi_in16 = *anon7 & (*anon9 ^ 0xffffffffffffffff);
					phi_in17 = *anon9;
				}
				uint64_t phi18 = phi_in16;
				uint64_t phi19 = phi_in17;
				anon20 = phi19 >> 1;
				*anon9 = anon20;
				uint64_t anon21 = anon20 | phi18;
				*anon7 = anon21;
				phi_in10 = anon21;
			}
			while (anon20 != 0);
		}
		uint64_t phi22 = phi_in10;
		if (*anon1 == 99)
		{
			uint8_t* anon23 = calloc(phi22, 1);
			phi_in24 = anon23;
		}
		else 
		{
			uint8_t* anon25 = malloc(phi22);
			phi_in24 = anon25;
		}
		phi26 = phi_in24;
		if (phi26 == null)
		{
			__assert_fail((uint8_t*)0x400c74, anon4, 75, anon5);
		}
		else 
		{
			printf(anon11);
			_IO_putc(10, *anon2);
			*anon9 = 0;
			uint64_t phi_in27 = 0;
			if (*anon7 != 0)
			{
				uint64_t anon30;
				do
				{
					uint64_t phi28 = phi_in27;
					time(null);
					*(uint8_t*)((uint64_t)phi26 + phi28) = 7;
					printf((uint8_t*)0x400c84);
					uint64_t anon29 = time(null);
					difftime(anon29);
					(__asm "subsd xmm0, qword ptr [rip + 0x331]")();
					(__asm "ucomisd xmm0, qword ptr [rip + 0x331]")();
					anon30 = *anon9 + 1024;
					*anon9 = anon30;
					phi_in27 = anon30;
				}
				while (*anon7 > anon30);
			}
			free(phi26);
		}
	}
	bool anon31 = anon3 == 255 || anon3 == 0;
	if (!anon31)
	{
		wait(4196544);
		puts((uint8_t*)0x400ce2);
	}
	if (!anon31 || phi26 != null && anon6)
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
