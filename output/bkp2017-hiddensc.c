#include "tests/bin/bkp2017-hiddensc.h"

void socket@@GLIBC_2.2.5(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	__builtin_trap();
}
void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x202fd8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x140d, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x1a40, (void(*)())0x1ab0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x203168;
	if (*anon1 == 0)
	{
		if (*(uint64_t*)0x202ff0 != 0)
		{
			__cxa_finalize(*(uint8_t**)0x203158);
		}
		deregister_tm_clones(4648);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0, uint64_t arg1)
{
	if (*(uint64_t*)0x202de0 != 0 && *(uint64_t*)0x202fe0 != 0)
	{
		((void(*)(uint64_t))*(uint64_t*)0x202fe0)(2108896);
	}
	return;
}
void ALARMhandler(uint64_t arg0, uint64_t arg1)
{
	puts((uint8_t*)0x1ad0);
	exit(1);
}
void privdrop(uint64_t arg0, uint64_t arg1)
{
	struct passwd* anon1 = getpwnam((uint8_t*)arg1);
	if (anon1 == null)
	{
		errx(4294967295, (uint8_t*)0x1b01);
	}
	else if (setgroups(0, null) > 4294967295)
	{
		uint64_t anon2 = (uint64_t)anon1;
		if (setgid(*(uint32_t*)(anon2 + 20)) > 4294967295)
		{
			if (setuid(*(uint32_t*)(anon2 + 16)) > 4294967295)
			{
				uint32_t anon3;
				uint32_t anon4;
				uint32_t anon5;
				if (!__undefined)
				{
					anon3 = chroot(*(uint8_t**)(anon2 + 32));
					if (anon3 > 4294967295)
					{
						anon4 = chdir((uint8_t*)0x1b5d);
						if (anon4 > 4294967295)
						{
							anon5 = chdir(*(uint8_t**)(anon2 + 32));
						}
					}
				}
				if (__undefined || !__undefined && anon3 > 4294967295 && anon4 > 4294967295 && anon5 > 4294967295)
				{
					return;
				}
				if (!__undefined)
				{
					uint8_t* anon6;
					if (anon5 <= 4294967295 && anon3 > 4294967295 && anon4 > 4294967295)
					{
						anon6 = (uint8_t*)0x1b60;
						errx(4294967295, anon6);
					}
					if (anon3 <= 4294967295 || anon4 <= 4294967295 && anon3 > 4294967295)
					{
						errx(4294967295, anon6);
					}
				}
			}
			else 
			{
				errx(4294967295, (uint8_t*)0x1b48);
			}
		}
		else 
		{
			errx(4294967295, (uint8_t*)0x1b33);
		}
	}
	else 
	{
		errx(4294967295, (uint8_t*)0x1b15);
	}
}
uint64_t rand64(uint64_t arg0)
{
	uint64_t phi3;
	uint32_t phi4;
	uint64_t phi_in1 = 0;
	uint32_t phi_in2 = 0;
	do
	{
		phi3 = phi_in1;
		phi4 = phi_in2;
		if (phi4 < 64)
		{
			phi_in1 = (__zext uint64_t)(rand() & 1) | phi3 << 1;
			phi_in2 = phi4 + 1;
		}
	}
	while (phi4 < 64);
	return phi3;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	struct { uint64_t field0; uint8_t field1[4]; uint32_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint32_t field6; uint32_t field7; uint32_t field8; uint32_t field9; uint32_t field10; uint32_t field11; uint8_t* field12; uint64_t field13; uint64_t field14; uint16_t field15; uint16_t field16; uint32_t field17; uint8_t field18[8]; uint8_t field19[4]; uint32_t field20; uint8_t field21[1040]; uint64_t field22; uint8_t field23[8]; uint64_t field24; } alloca1;
	alloca1.field24 = arg0;
	alloca1.field2 = (uint32_t)arg1;
	alloca1.field0 = arg2;
	uint64_t anon2 = *__fs_ptr_i64(40);
	alloca1.field22 = anon2;
	setvbuf(**(struct _IO_FILE***)0x202fd0, null, 2, 0);
	setvbuf(**(struct _IO_FILE***)0x202ff8, null, 2, 0);
	alloca1.field4 = 1;
	alloca1.field6 = socket(2, 1, 0);
	alloca1.field7 = getpagesize();
	do_srand(5295);
	uint64_t anon3 = rand64(5300);
	uint64_t anon4 = (uint64_t)((__zext uint128_t)anon3 * -9223372036854677503 >> 64);
	*(uint64_t*)&alloca1.field12 = (__sext int64_t)-alloca1.field7 & anon3 + ((anon3 - anon4 >> 1) + anon4 >> 46) * -93824992236885;
	printf((uint8_t*)0x1b83);
	printf((uint8_t*)0x1b9e);
	getpid();
	printf((uint8_t*)0x1bb5);
	uint32_t anon5 = open((uint8_t*)0x1bc4, 0);
	alloca1.field8 = anon5;
	alloca1.field13 = (uint64_t)mmap(alloca1.field12, (__sext int64_t)alloca1.field7, 5, 2, anon5, 0);
	if (alloca1.field2 == 2)
	{
		uint32_t anon7;
		alloca1.field9 = atoi(*(uint8_t**)(alloca1.field0 + 8));
		if (setsockopt(alloca1.field6, 1, 2, (uint8_t*)&alloca1.field4, 4) <= 4294967295)
		{
			perror((uint8_t*)0x1be0);
		}
		memset((uint8_t*)&alloca1.field15, 48, 16);
		alloca1.field15 = 2;
		alloca1.field16 = htons((uint16_t)alloca1.field9);
		alloca1.field17 = inet_addr((uint8_t*)0x203160);
		uint32_t phi6 = alloca1.field6;
		if (alloca1.field6 == 4294967295)
		{
			perror((uint8_t*)0x1beb);
			phi6 = alloca1.field6;
		}
		alloca1.field5 = 16;
		if (bind(phi6, (struct sockaddr*)&alloca1.field15, 16) == 255)
		{
			perror((uint8_t*)0x1bf2);
		}
		if (listen(alloca1.field6, 10) == 255)
		{
			perror((uint8_t*)0x1bf7);
		}
		printf((uint8_t*)0x1bfe);
		privdrop(5923, 7190);
		do
		{
			do
			{
				do
				{
					alloca1.field10 = accept(alloca1.field6, (struct sockaddr*)&alloca1.field19, &alloca1.field5);
					anon7 = fork();
					alloca1.field11 = anon7;
					if (anon7 == 4294967295)
					{
						perror((uint8_t*)0x1c1d);
						close(alloca1.field10);
					}
				}
				while (anon7 == 4294967295);
				if ((anon7 >> 31 | (__zext uint32_t)(anon7 == 0)) == 0)
				{
					close(alloca1.field10);
				}
			}
			while ((anon7 >> 31 | (__zext uint32_t)(anon7 == 0)) == 0);
		}
		while (anon7 != 0);
		alloca1.field14 = (uint64_t)inet_ntoa(alloca1.field20);
		printf((uint8_t*)0x1c22);
		dup2(alloca1.field10, 1);
		dup2(alloca1.field10, 2);
		dup2(alloca1.field10, 0);
		signal(14, (void(*)(uint32_t))0x1270);
		alarm(20);
		while (true)
		{
			handle(6186);
		}
	}
	else 
	{
		printf((uint8_t*)0x1bce);
		uint64_t anon8 = *__fs_ptr_i64(40);
		if (anon8 == alloca1.field22)
		{
			return;
		}
		else 
		{
			__stack_chk_fail();
		}
	}
}
void handle(uint64_t arg0)
{
	struct { uint64_t field0; uint8_t* field1; uint64_t field2; uint64_t field3; uint8_t field4; uint8_t field5[103]; uint64_t field6; uint8_t field7[8]; uint64_t field8; } alloca1;
	uint8_t* anon3;
	alloca1.field8 = arg0;
	uint64_t anon2 = *__fs_ptr_i64(40);
	alloca1.field6 = anon2;
	printf((uint8_t*)0x1c3a);
	read(0, &alloca1.field4, 100);
	if (alloca1.field4 == 106)
	{
		anon3 = (uint8_t*)0x1c4d;
		printf(anon3);
		read(0, &alloca1.field4, 100);
		uint64_t anon4 = strtoll(&alloca1.field4, null, 0);
		alloca1.field2 = anon4;
		alloca1.field3 = anon4;
		((void(*)())anon4)();
	}
	if (alloca1.field4 == 97)
	{
		printf(anon3);
		read(0, &alloca1.field4, 100);
		uint64_t anon5 = strtoll(&alloca1.field4, null, 0);
		alloca1.field0 = anon5;
		uint8_t* anon6 = malloc(anon5);
		alloca1.field1 = anon6;
		if (anon6 == null)
		{
			puts((uint8_t*)0x1c52);
		}
		else 
		{
			printf((uint8_t*)0x1c57);
			read(0, &alloca1.field4, 100);
			if (alloca1.field4 == 121)
			{
				puts((uint8_t*)0x1c5e);
				free(alloca1.field1);
			}
		}
	}
	uint64_t anon7 = *__fs_ptr_i64(40);
	if (anon7 == alloca1.field6)
	{
		return;
	}
	else 
	{
		__stack_chk_fail();
	}
}
void do_srand(uint64_t arg0)
{
	struct { uint32_t field0; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint64_t field4; } alloca1;
	alloca1.field4 = arg0;
	uint64_t anon2 = *__fs_ptr_i64(40);
	alloca1.field2 = anon2;
	uint32_t anon3 = open((uint8_t*)0x1c61, 114);
	alloca1.field1 = anon3;
	read(anon3, (uint8_t*)&alloca1, 4);
	srand(alloca1.field0);
	printf((uint8_t*)0x1c6e);
	uint64_t anon4 = *__fs_ptr_i64(40);
	if (anon4 == alloca1.field2)
	{
		return;
	}
	else 
	{
		__stack_chk_fail();
	}
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(6769);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x202dd0)(arg1 & 0xffffffff, arg2, arg3);
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
