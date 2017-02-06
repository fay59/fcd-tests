#include "tests/bin/1996-schweikh3.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195949);
	}
	return;
}
void _IO_putc(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601230);
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
	uint8_t* anon30;
	uint8_t* phi24;
	uint8_t* anon1;
	uint8_t* anon31;
	if (**(uint8_t**)(((arg1 << 32) - 4294967296 >> 29) + arg2) == 99)
	{
		anon1 = (uint8_t*)0x601290;
		*anon1 = 99;
	}
	setbuf(*(struct __sFILE**)0x6012a0, null);
	uint32_t anon2 = fork();
	bool anon3 = anon2 == 255 || anon2 == 0;
	if (!anon3)
	{
		wait(4196544);
		puts((uint8_t*)0x400ce2);
	}
	bool anon4 = anon2 == 0;
	if (anon4)
	{
		uint8_t* phi_in22;
		uint8_t* anon9;
		uint64_t* anon5 = (uint64_t*)0x6012b0;
		uint64_t* anon7 = (uint64_t*)0x601288;
		uint64_t anon6 = *anon5 | *anon7;
		*anon5 = anon6;
		uint64_t phi_in8 = anon6;
		if (*anon7 != 0)
		{
			uint64_t anon18;
			do
			{
				uint8_t* anon10;
				uint64_t phi_in14;
				uint64_t phi_in13;
				uint8_t* anon12;
				uint8_t* phi_in11;
				anon9 = (uint8_t*)0x400cf0;
				printf(anon9);
				if (*anon1 == 99)
				{
					anon10 = calloc(*anon5, 1);
					phi_in11 = anon10;
				}
				else 
				{
					anon12 = malloc(*anon5);
					phi_in11 = anon12;
				}
				if (*anon1 == 99 && anon10 == null || *anon1 != 99 && anon12 == null)
				{
					puts((uint8_t*)0x400c6d);
					phi_in13 = *anon5 & (*anon7 ^ 0xffffffffffffffff);
					phi_in14 = *anon7;
				}
				if (anon10 != null && *anon1 == 99 || *anon1 != 99 && anon12 != null)
				{
					uint8_t* phi15 = phi_in11;
					puts((uint8_t*)0x400c67);
					free(phi15);
					phi_in13 = *anon5;
					phi_in14 = *anon7;
				}
				uint64_t phi16 = phi_in13;
				uint64_t phi17 = phi_in14;
				anon18 = phi17 >> 1;
				*anon7 = anon18;
				uint64_t anon19 = anon18 | phi16;
				*anon5 = anon19;
				phi_in8 = anon19;
			}
			while (anon18 != 0);
		}
		uint64_t phi20 = phi_in8;
		if (*anon1 == 99)
		{
			uint8_t* anon21 = calloc(phi20, 1);
			phi_in22 = anon21;
		}
		else 
		{
			uint8_t* anon23 = malloc(phi20);
			phi_in22 = anon23;
		}
		phi24 = phi_in22;
		if (phi24 != null)
		{
			printf(anon9);
			_IO_putc(4196717);
			*anon7 = 0;
			uint64_t phi_in25 = 0;
			if (*anon5 != 0)
			{
				uint64_t anon29;
				do
				{
					uint64_t phi26 = phi_in25;
					uint64_t anon27 = time(null);
					*(uint8_t*)((uint64_t)phi24 + phi26) = 7;
					printf((uint8_t*)0x400c84);
					uint64_t anon28 = time(null);
					difftime(anon28, anon27);
					(__asm "subsd xmm0, qword ptr [rip + 0x331]")();
					(__asm "ucomisd xmm0, qword ptr [rip + 0x331]")();
					anon29 = *anon7 + 1024;
					*anon7 = anon29;
					phi_in25 = anon29;
				}
				while (*anon5 > anon29);
			}
			free(phi24);
		}
	}
	if (!anon3 || anon4 && phi24 != null)
	{
		return;
	}
	if (anon4 && phi24 == null)
	{
		anon30 = (uint8_t*)0x400c54;
		anon31 = (uint8_t*)0x400d18;
		__assert_fail((uint8_t*)0x400c74, anon30, 75, anon31);
	}
	if (anon2 == 255)
	{
		__assert_fail((uint8_t*)0x400c7d, anon30, 58, anon31);
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
