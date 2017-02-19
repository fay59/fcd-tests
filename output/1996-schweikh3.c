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
	uint8_t* anon6;
	uint8_t* anon5;
	uint8_t* phi27;
	uint8_t* anon1;
	if (**(uint8_t**)(((arg1 << 32) - 4294967296 >> 29) + arg2) == 99)
	{
		anon1 = (uint8_t*)0x601290;
		*anon1 = 99;
	}
	struct _IO_FILE** anon2 = (struct _IO_FILE**)0x6012a0;
	setbuf(*anon2, null);
	uint32_t anon3 = fork();
	bool anon4 = anon3 == 255 || anon3 == 0;
	if (!anon4)
	{
		wait(4196544);
		puts((uint8_t*)0x400ce2);
	}
	if (anon3 == 255)
	{
		anon5 = (uint8_t*)0x400c54;
		anon6 = (uint8_t*)0x400d18;
		__assert_fail((uint8_t*)0x400c7d, anon5, 58, anon6);
	}
	bool anon7 = anon3 == 0;
	if (anon7)
	{
		uint8_t* phi_in25;
		uint8_t* anon12;
		uint64_t* anon8 = (uint64_t*)0x6012b0;
		uint64_t* anon10 = (uint64_t*)0x601288;
		uint64_t anon9 = *anon8 | *anon10;
		*anon8 = anon9;
		uint64_t phi_in11 = anon9;
		if (*anon10 != 0)
		{
			uint64_t anon21;
			do
			{
				uint8_t* anon13;
				uint8_t* phi_in14;
				uint64_t phi_in18;
				uint8_t* anon15;
				uint64_t phi_in17;
				anon12 = (uint8_t*)0x400cf0;
				printf(anon12);
				if (*anon1 == 99)
				{
					anon13 = calloc(*anon8, 1);
					phi_in14 = anon13;
				}
				else 
				{
					anon15 = malloc(*anon8);
					phi_in14 = anon15;
				}
				if (anon13 != null && *anon1 == 99 || *anon1 != 99 && anon15 != null)
				{
					uint8_t* phi16 = phi_in14;
					puts((uint8_t*)0x400c67);
					free(phi16);
					phi_in17 = *anon8;
					phi_in18 = *anon10;
				}
				if (*anon1 == 99 && anon13 == null || *anon1 != 99 && anon15 == null)
				{
					puts((uint8_t*)0x400c6d);
					phi_in17 = *anon8 & (*anon10 ^ 0xffffffffffffffff);
					phi_in18 = *anon10;
				}
				uint64_t phi19 = phi_in17;
				uint64_t phi20 = phi_in18;
				anon21 = phi20 >> 1;
				*anon10 = anon21;
				uint64_t anon22 = anon21 | phi19;
				*anon8 = anon22;
				phi_in11 = anon22;
			}
			while (anon21 != 0);
		}
		uint64_t phi23 = phi_in11;
		if (*anon1 == 99)
		{
			uint8_t* anon24 = calloc(phi23, 1);
			phi_in25 = anon24;
		}
		else 
		{
			uint8_t* anon26 = malloc(phi23);
			phi_in25 = anon26;
		}
		phi27 = phi_in25;
		if (phi27 == null)
		{
			__assert_fail((uint8_t*)0x400c74, anon5, 75, anon6);
		}
		else 
		{
			printf(anon12);
			_IO_putc(10, *anon2);
			*anon10 = 0;
			uint64_t phi_in28 = 0;
			if (*anon8 != 0)
			{
				uint64_t anon32;
				do
				{
					uint64_t phi29 = phi_in28;
					uint64_t anon30 = time(null);
					*(uint8_t*)((uint64_t)phi27 + phi29) = 7;
					printf((uint8_t*)0x400c84);
					uint64_t anon31 = time(null);
					difftime(anon31, anon30);
					(__asm "subsd xmm0, qword ptr [rip + 0x331]")();
					(__asm "ucomisd xmm0, qword ptr [rip + 0x331]")();
					anon32 = *anon10 + 1024;
					*anon10 = anon32;
					phi_in28 = anon32;
				}
				while (*anon8 > anon32);
			}
			free(phi27);
		}
	}
	if (!anon4 || phi27 != null && anon7)
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
