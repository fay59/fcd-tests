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
	uint8_t* phi24;
	uint8_t* anon25;
	uint8_t* anon1;
	uint8_t* anon26;
	if (**(uint8_t**)(((arg1 << 32) - 4294967296 >> 29) + arg2) == 99)
	{
		anon1 = (uint8_t*)0x601290;
		*anon1 = 99;
	}
	struct _IO_FILE** anon2 = (struct _IO_FILE**)0x6012a0;
	setbuf(*anon2, null);
	uint32_t anon3 = fork();
	bool anon4 = anon3 == 0;
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
				uint64_t phi_in15;
				uint64_t phi_in14;
				uint8_t* phi_in11;
				uint8_t* anon10;
				uint8_t* anon12;
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
				if (anon10 != null && *anon1 == 99 || *anon1 != 99 && anon12 != null)
				{
					uint8_t* phi13 = phi_in11;
					puts((uint8_t*)0x400c67);
					free(phi13);
					phi_in14 = *anon5;
					phi_in15 = *anon7;
				}
				if (*anon1 == 99 && anon10 == null || *anon1 != 99 && anon12 == null)
				{
					puts((uint8_t*)0x400c6d);
					phi_in14 = *anon5 & (*anon7 ^ 0xffffffffffffffff);
					phi_in15 = *anon7;
				}
				uint64_t phi16 = phi_in14;
				uint64_t phi17 = phi_in15;
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
		if (phi24 == null)
		{
			anon25 = (uint8_t*)0x400c54;
			anon26 = (uint8_t*)0x400d18;
			__assert_fail((uint8_t*)0x400c74, anon25, 75, anon26);
		}
		else 
		{
			printf(anon9);
			_IO_putc(10, *anon2);
			*anon7 = 0;
			uint64_t phi_in27 = 0;
			if (*anon5 != 0)
			{
				uint64_t anon30;
				do
				{
					uint64_t phi28 = phi_in27;
					time(null);
					*(uint8_t*)((uint64_t)phi24 + phi28) = 7;
					printf((uint8_t*)0x400c84);
					uint64_t anon29 = time(null);
					difftime(anon29);
					(__asm "subsd xmm0, qword ptr [rip + 0x331]")();
					(__asm "ucomisd xmm0, qword ptr [rip + 0x331]")();
					anon30 = *anon7 + 1024;
					*anon7 = anon30;
					phi_in27 = anon30;
				}
				while (*anon5 > anon30);
			}
			free(phi24);
		}
	}
	bool anon31 = anon3 == 255 || anon3 == 0;
	if (!anon31)
	{
		wait(4196544);
		puts((uint8_t*)0x400ce2);
	}
	if (!anon31 || phi24 != null && anon4)
	{
		return;
	}
	if (anon3 == 255)
	{
		__assert_fail((uint8_t*)0x400c7d, anon25, 58, anon26);
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
