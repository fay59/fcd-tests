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
	if ((anon3 + 1 & 0xff) == 0)
	{
		anon4 = (uint8_t*)0x400c54;
		anon5 = (uint8_t*)0x400d18;
		__assert_fail((uint8_t*)0x400c7d, anon4, 58, anon5);
	}
	else 
	{
		uint8_t* phi19;
		if (anon3 == 0)
		{
			uint8_t* anon10;
			uint64_t* anon6 = (uint64_t*)0x6012b0;
			uint64_t* anon8 = (uint64_t*)0x601288;
			uint64_t anon7 = *anon6 | *anon8;
			*anon6 = anon7;
			uint64_t phi9 = anon7;
			if (*anon8 != 0)
			{
				uint64_t anon16;
				do
				{
					uint8_t* anon11;
					uint8_t* phi12;
					uint8_t* anon13;
					uint64_t phi14;
					uint64_t phi15;
					anon10 = (uint8_t*)0x400cf0;
					printf(anon10);
					if (*anon1 == 99)
					{
						anon11 = calloc(*anon6, 1);
						phi12 = anon11;
					}
					else 
					{
						anon13 = malloc(*anon6);
						phi12 = anon13;
					}
					if (*anon1 == 99 && anon11 == null || *anon1 != 99 && anon13 == null)
					{
						puts((uint8_t*)0x400c6d);
						phi14 = *anon6 & ~*anon8;
						phi15 = *anon8;
					}
					if (anon11 != null && *anon1 == 99 || *anon1 != 99 && anon13 != null)
					{
						puts((uint8_t*)0x400c67);
						free(phi12);
						phi14 = *anon6;
						phi15 = *anon8;
					}
					anon16 = phi15 >> 1;
					*anon8 = anon16;
					uint64_t anon17 = anon16 | phi14;
					*anon6 = anon17;
					phi9 = anon17;
				}
				while (anon16 != 0);
			}
			if (*anon1 == 99)
			{
				uint8_t* anon18 = calloc(phi9, 1);
				phi19 = anon18;
			}
			else 
			{
				uint8_t* anon20 = malloc(phi9);
				phi19 = anon20;
			}
			if (phi19 == null)
			{
				__assert_fail((uint8_t*)0x400c74, anon4, 75, anon5);
			}
			else 
			{
				printf(anon10);
				_IO_putc(10, *anon2);
				*anon8 = 0;
				uint64_t phi21 = 0;
				if (*anon6 != 0)
				{
					uint64_t anon24;
					do
					{
						uint64_t anon22 = time(null);
						*(uint8_t*)((uint64_t)phi19 + phi21) = 7;
						printf((uint8_t*)0x400c84);
						uint64_t anon23 = time(null);
						difftime(anon23, anon22);
						(__asm "subsd xmm0, qword ptr [rip + 0x331]")();
						(__asm "ucomisd xmm0, qword ptr [rip + 0x331]")();
						anon24 = *anon8 + 1024;
						*anon8 = anon24;
						phi21 = *anon8 & 0xf;
					}
					while (*anon6 > anon24);
				}
				free(phi19);
			}
		}
		else 
		{
			wait(4196544);
			puts((uint8_t*)0x400ce2);
		}
		if (anon3 != 0 || phi19 != null && anon3 == 0)
		{
			return;
		}
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
