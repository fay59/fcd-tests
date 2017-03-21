#include "tests/bin/1994-imc.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601d68 != 0)
	{
		__gmon_start__();
	}
	return;
}
void getpid(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601d88);
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	uint32_t anon2;
	uint64_t phi3;
	getpid(4195794);
	srand(0);
	uint32_t anon1 = (uint32_t)arg2;
	if (anon1 >= 2)
	{
		anon2 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x401894);
		phi3 = 0;
	}
	if (anon1 < 2 || anon2 != 1 && anon1 >= 2)
	{
		*(uint32_t*)(arg1 - 36) = 5;
		phi3 = 100;
	}
	uint8_t* anon4 = malloc(phi3);
	uint32_t* anon6 = (uint32_t*)(arg1 - 36);
	uint8_t* anon5 = malloc((__sext int64_t)*anon6 << 2);
	if (anon4 == null || anon4 != null && anon5 == null)
	{
		perror((uint8_t*)0x401897);
	}
	if (anon5 != null && anon4 != null)
	{
		((*anon6 & 1) == 0 ? (void(*)(uint64_t, uint64_t))0x400a80 : (void(*)(uint64_t, uint64_t))0x401420)((uint64_t)anon4, (uint64_t)anon5);
		uint32_t* anon7 = (uint32_t*)0x601e00;
		*anon7 = 0;
		if (*anon6 * *anon6 != 0)
		{
			uint32_t anon8;
			do
			{
				printf((uint8_t*)0x40189e);
				anon8 = *anon7 + 1;
				*anon7 = anon8;
			}
			while (*anon6 * *anon6 > anon8);
		}
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4005c0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x401810, (void(*)())0x401880, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x601de0;
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
void s(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	uint32_t* anon24;
	uint32_t* anon1 = (uint32_t*)arg3;
	uint32_t anon3 = rand();
	uint64_t anon4 = arg1 << 32 >> 32;
	uint32_t anon2 = (uint32_t)(((__zext uint64_t)(anon3 > 4294967295 ? anon3 : anon3 + 255) << 32 >> 40) % anon4);
	*anon1 = anon2;
	uint32_t* anon5 = (uint32_t*)(arg3 + 4);
	*anon5 = 3 - anon2;
	uint32_t anon6 = rand();
	uint64_t* anon7 = (uint64_t*)0x601df0;
	*anon7 = arg2;
	uint32_t* anon8 = (uint32_t*)0x601e00;
	uint32_t anon9 = (uint32_t)arg1;
	*anon8 = anon9;
	uint32_t* anon10 = (uint32_t*)(arg3 + 8);
	uint64_t anon13 = (__zext uint64_t)anon6;
	uint64_t anon12 = (anon6 > 4294967295 ? anon13 : anon13 + 255) >> 31 & 1;
	uint32_t anon11 = *(uint32_t*)(((__zext uint64_t)(((anon6 > 4294967295 ? anon6 : anon6 + 255) & 0x100) != 0 ^ anon12 != 0) - anon12 << 2) + arg3) ^ 1;
	*anon10 = anon11;
	uint32_t* anon14 = (uint32_t*)(arg3 + 12);
	*anon14 = 3 - anon11;
	uint32_t* anon15 = (uint32_t*)0x601e04;
	uint32_t anon16 = rand();
	uint64_t anon18 = (__zext uint64_t)anon16;
	uint32_t anon17 = (uint32_t)((anon16 > 4294967295 ? anon18 : anon18 + 255) >> 31);
	*anon15 = ((((anon16 > 4294967295 ? anon16 : anon16 + 255) >> 8) + anon17 & 1) - (anon17 & 1)) * 3;
	uint32_t anon19 = *anon8 - 1;
	*anon8 = anon19;
	if (*anon8 != 0)
	{
		uint32_t phi26;
		uint64_t anon34;
		uint32_t phi20 = anon19;
		uint64_t phi_in21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi_in23 = phi20;
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon25 = anon9 - 1;
			*anon24 = anon25;
			phi26 = phi_in23;
			uint64_t phi27 = phi_in21;
			uint32_t phi28 = anon25;
			uint32_t phi29 = phi_in23;
			uint64_t phi30 = phi_in21;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi30 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon15 & phi29 ^ (phi29 >> 31) + phi29 >> 1) << 2) + arg3);
					uint32_t anon31 = *anon24 - 1;
					*anon24 = anon31;
					phi26 = *anon8;
					uint64_t anon32 = phi30 + 4;
					phi27 = anon32;
					phi28 = anon31;
					phi29 = *anon8;
					phi30 = anon32;
				}
				while (*anon24 != 0);
			}
			uint32_t anon33 = phi26 - 1;
			*anon8 = anon33;
			phi20 = anon33;
			anon34 = phi27 + (arg4 << 32 >> 30);
			phi_in21 = anon34;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi26 != 0);
		*anon7 = anon34;
	}
	uint32_t anon36 = rand();
	uint32_t anon35 = (uint32_t)(((__zext uint64_t)(anon36 > 4294967295 ? anon36 : anon36 + 255) << 32 >> 40) % anon4);
	*anon1 = anon35;
	*anon5 = 3 - anon35;
	uint32_t anon37 = rand();
	*anon7 = arg2;
	*anon15 = 3 - *anon15;
	uint32_t anon38 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon38;
	uint64_t anon41 = (__zext uint64_t)anon37;
	uint64_t anon40 = (anon37 > 4294967295 ? anon41 : anon41 + 255) >> 31 & 1;
	uint32_t anon39 = *(uint32_t*)(((__zext uint64_t)(((anon37 > 4294967295 ? anon37 : anon37 + 255) & 0x100) != 0 ^ anon40 != 0) - anon40 << 2) + arg3) ^ 1;
	*anon10 = anon39;
	*anon14 = 3 - anon39;
	if (anon9 != 0)
	{
		uint64_t anon53;
		uint32_t phi42 = anon38;
		uint64_t phi43 = arg2;
		do
		{
			uint64_t anon51;
			uint32_t phi_in44 = phi42;
			uint64_t phi_in45 = phi43;
			*anon24 = anon38;
			uint32_t phi46 = anon38;
			uint32_t phi47 = phi_in44;
			do
			{
				uint64_t phi48 = phi_in45;
				uint32_t* anon49 = (uint32_t*)phi48;
				*anon49 = *anon49 + (*(uint32_t*)(((__sext int64_t)(phi46 ^ (phi47 >> 31) + phi47 >> 1 ^ *anon15 & phi47) << 2) + arg3) << 2);
				uint32_t anon50 = *anon24 - 1;
				*anon24 = anon50;
				anon51 = phi48 + 4;
				phi_in45 = anon51;
				phi46 = anon50;
				phi47 = *anon8;
			}
			while (*anon24 != 0);
			uint32_t anon52 = *anon8 - 1;
			*anon8 = anon52;
			phi42 = anon52;
			anon53 = anon51 + (arg4 << 32 >> 30);
			phi43 = anon53;
		}
		while (*anon8 != 0);
		*anon7 = anon53;
	}
	return;
}
void e(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t anon6;
	uint64_t anon7;
	uint64_t anon8;
	uint64_t* anon9;
	uint32_t phi10;
	uint64_t phi11;
	uint64_t anon12;
	uint64_t anon13;
	uint32_t phi_in14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon28;
	uint64_t phi_in89;
	uint32_t anon4 = (uint32_t)arg2;
	int64_t anon3 = (__sext int64_t)((anon4 >> 31) + anon4);
	int64_t anon2 = anon3 >> 1;
	uint32_t anon1 = (uint32_t)anon2;
	if (anon1 == 4)
	{
		anon8 = arg5 << 32;
		anon7 = anon8 >> 32;
		anon6 = (uint32_t)anon7;
		uint32_t anon5 = anon6 + 4;
		*(uint32_t*)(arg1 - 248) = anon5;
		s(4199368, 4, arg3, arg4, (__zext uint64_t)anon5);
		s(4199396, 4, arg3 + 16, arg4, anon7 + 4 & 0xffffffff);
		anon9 = (uint64_t*)0x601e10;
		*anon9 = arg3;
		phi10 = 3;
		anon13 = arg2 << 32;
		anon12 = anon13 >> 32;
		phi11 = anon12 + anon7 << 2;
		phi_in14 = 3;
		phi15 = 4;
	}
	else 
	{
		int64_t anon24;
		uint32_t* anon16 = (uint32_t*)(arg1 - 248);
		uint32_t anon17 = anon1 + anon6;
		*anon16 = anon17;
		uint64_t anon18 = (anon2 & 1) == 0 ? 4196992 : 4199456;
		int64_t anon19 = anon2 & 0xffffffff;
		((void(*)(uint64_t, uint64_t, uint64_t))anon18)(anon19, arg4, (__zext uint64_t)anon17);
		int64_t anon21 = anon2 << 32;
		int64_t anon20 = anon21 >> 30;
		*(uint64_t*)(arg1 - 168) = anon20;
		((void(*)(uint64_t, uint64_t, uint64_t, uint64_t))anon18)(anon19, anon20 + arg3, arg4, (__zext uint64_t)*anon16);
		*anon9 = arg3;
		if (anon1 == 0)
		{
			phi22 = 4294967295;
			anon24 = (anon21 >> 32) * (anon12 + anon7 << 32 >> 32);
			phi23 = anon24 & 0xffffffff;
		}
		else 
		{
			phi10 = (uint32_t)(anon2 + 4294967295);
			phi11 = anon24;
			phi_in14 = anon1 - 1;
			phi15 = anon1;
		}
	}
	if (anon1 != 4 && anon1 != 0 || anon1 == 4)
	{
		uint32_t phi26;
		uint64_t anon35;
		uint64_t anon38;
		uint32_t phi39;
		uint32_t anon44;
		uint64_t phi_in25 = arg3;
		do
		{
			phi26 = phi_in14;
			uint64_t phi27 = phi_in25;
			anon28 = (uint32_t*)0x601dec;
			uint32_t anon30 = (uint32_t)anon12;
			uint32_t anon29 = anon30 - 1;
			*anon28 = anon29;
			uint64_t phi31 = phi27;
			uint32_t phi32 = anon29;
			if (anon30 != 0)
			{
				do
				{
					uint64_t phi33 = 3;
					if (anon1 > phi32)
					{
						uint32_t* anon34 = (uint32_t*)phi31;
						*anon34 = *anon34 + (phi15 * phi15 << 1);
						phi33 = ((__zext uint64_t)(anon1 <= *anon28) << 2) + 4294967295 & 0xffffffff;
					}
					anon35 = phi11 & 0xffffffff;
					*(uint32_t*)(phi31 + (anon35 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi33) + *(uint32_t*)phi31;
					uint32_t anon36 = *anon28 - 1;
					*anon28 = anon36;
					uint64_t anon37 = phi31 + 4;
					phi27 = anon37;
					phi31 = anon37;
					phi32 = anon36;
				}
				while (*anon28 != 0);
			}
			phi_in14 = phi26 - 1;
			anon38 = phi27 + (anon8 >> 30);
			phi_in25 = anon38;
		}
		while (phi26 != 256);
		*anon9 = anon38;
		uint32_t anon40 = phi10 + 1;
		int64_t anon42 = (__sext int64_t)phi10 << 2;
		uint32_t anon41 = (uint32_t)(anon42 + 4 + arg4 >> 2) & 3;
		phi39 = anon40 < anon41 ? anon40 : anon41;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi39 = anon40;
		}
		uint32_t* anon43 = (uint32_t*)(arg1 - 240);
		*anon43 = phi10;
		if (phi39 != 0)
		{
			uint32_t phi_in45;
			anon44 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon42 + arg4) = (__zext uint32_t)(phi10 < anon44);
			uint32_t anon46 = phi10 - 1;
			phi_in45 = anon46;
			if (phi39 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon46);
				uint32_t anon47 = phi10 - 2;
				phi_in45 = anon47;
				if (phi39 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon47);
					uint32_t anon48 = phi10 - 3;
					phi_in45 = anon48;
					if (phi39 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon48);
						uint32_t anon49 = phi10 - 4;
						phi_in45 = anon49;
						if (phi39 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon49 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon49);
							phi_in45 = phi10 - 5;
						}
					}
				}
			}
			phi22 = phi10;
			phi23 = anon35;
			*anon43 = phi_in45;
		}
		if (phi39 == 0 || anon40 != phi39 && phi39 != 0)
		{
			uint32_t anon56;
			uint32_t anon57;
			uint32_t phi50 = *anon43;
			uint32_t anon51 = phi10 - phi39;
			if (anon51 >= 3)
			{
				uint32_t anon55;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon43 = anon44;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in52 = 0;
				do
				{
					uint32_t phi53 = phi_in52;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon54 = phi53 + 1;
					phi_in52 = anon54;
					anon56 = anon40 - phi39;
					anon55 = (uint32_t)(((__zext uint64_t)anon56 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon54 < anon55);
				phi22 = phi10;
				phi23 = anon35;
				anon57 = anon55 << 2;
				phi50 = *anon43 - anon57;
			}
			if (anon56 != anon57 && anon51 >= 3 || anon51 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi50 << 2) + arg4) = (__zext uint32_t)(anon44 > phi50);
				phi22 = phi10;
				phi23 = anon35;
				if (phi50 != 0)
				{
					uint32_t anon58 = phi50 - 1;
					*(uint32_t*)(((__zext uint64_t)anon58 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon58);
					phi22 = phi10;
					phi23 = anon35;
					if (anon58 != 0)
					{
						uint32_t anon59 = phi50 - 2;
						*(uint32_t*)(((__sext int64_t)anon59 << 2) + arg4) = (__zext uint32_t)(anon44 > anon59);
						phi22 = phi10;
						phi23 = anon35;
					}
				}
			}
		}
	}
	uint32_t* anon60 = (uint32_t*)0x601e00;
	*anon60 = phi22;
	uint64_t* anon61 = (uint64_t*)0x601df8;
	*anon61 = arg3;
	uint64_t anon62 = (anon13 >> 30) + arg3;
	if (anon62 > arg3)
	{
		uint32_t phi63;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon64 = anon2 + 1;
		phi63 = (uint32_t)(anon64 + (anon64 >> 31 & 1) << 32 >> 33);
		uint64_t phi65 = arg3;
		while (true)
		{
			uint64_t phi70;
			uint64_t phi_in74;
			uint64_t phi_in75;
			uint32_t phi76;
			uint64_t phi77;
			uint64_t anon102;
			uint64_t anon129;
			uint32_t anon134;
			uint32_t phi66 = phi63;
			uint64_t phi_in67 = phi65;
			*anon9 = phi_in67;
			uint64_t phi68 = phi_in67;
			if (anon1 != 0)
			{
				uint32_t anon88;
				int64_t anon90;
				int64_t anon91;
				uint32_t phi92;
				uint32_t anon93;
				int64_t anon98;
				uint32_t phi107;
				uint32_t anon110;
				uint64_t phi122;
				uint32_t phi126;
				uint64_t anon128;
				uint32_t phi69 = phi66;
				phi70 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon60) << 2) - 4;
				int64_t anon73 = (__sext int64_t)*anon60 << 2;
				int64_t anon72 = (anon73 & 0xc) + arg4;
				phi71 = anon72;
				phi_in74 = 0;
				phi_in75 = phi_in67;
				phi76 = 0;
				phi77 = phi_in74;
				uint64_t phi78 = phi_in75;
				uint32_t phi79 = anon1;
				if (*anon60 != 0)
				{
					uint32_t anon84;
					do
					{
						uint32_t anon81 = rand();
						uint64_t anon80 = ((__zext uint64_t)(anon81 > 4294967295 ? anon81 : anon81 + 255) << 32 >> 40) % (__sext int64_t)phi79;
						*anon28 = (uint32_t)anon80;
						uint32_t* anon82 = (uint32_t*)0x601e08;
						uint32_t* anon83 = (uint32_t*)(((__sext int64_t)*anon60 << 2) + arg4);
						*anon82 = *anon83;
						*anon83 = *(uint32_t*)((anon80 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = *anon82;
						anon84 = *anon60 - 1;
						*anon60 = anon84;
						phi79 = *anon60;
					}
					while (anon84 != 0);
					phi78 = *anon9;
				}
				uint64_t phi_in85 = phi78;
				uint32_t* anon86 = (uint32_t*)phi70;
				if (*anon86 == 0)
				{
					uint32_t phi_in87;
					anon88 = anon1 - 1;
					phi_in87 = anon88;
					anon91 = anon2 << 32 >> 30;
					anon90 = anon91 + arg4;
					phi_in89 = anon90;
					phi92 = phi69;
					anon93 = *anon60 - phi76;
					if (phi69 > anon93)
					{
						uint64_t anon95;
						do
						{
							*anon28 = phi_in87;
							uint64_t phi94 = phi_in89;
							phi_in87 = *anon28 - 1;
							anon95 = phi94 - 4;
							phi_in89 = anon95;
						}
						while (*(uint32_t*)anon95 == 0);
						*anon86 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi92 = phi69 - 1;
					}
				}
				else 
				{
					uint64_t phi_in97;
					uint32_t phi96 = anon88;
					anon98 = anon91 - 4 + arg4;
					phi_in97 = anon98;
					if (phi69 == 0)
					{
						uint32_t* anon100;
						do
						{
							*anon28 = phi96;
							uint64_t phi99 = phi_in97;
							anon100 = (uint32_t*)phi99;
							if (*anon100 != 0)
							{
								phi96 = *anon28 - 1;
								phi_in97 = phi99 - 4;
							}
						}
						while (*anon100 != 0);
						*anon100 = 1;
						*anon86 = 0;
						phi92 = phi69;
					}
					else 
					{
						phi92 = phi69 - 1;
					}
				}
				anon102 = phi71 & 0xffffffff00000000 | phi71 & 0xffffffff;
				uint32_t* anon101 = (uint32_t*)anon102;
				if (*anon101 == 0)
				{
					uint64_t phi103;
					bool anon108;
					uint64_t anon104 = (__zext uint64_t)anon93;
					phi103 = anon104;
					uint32_t phi_in105 = anon88;
					uint64_t phi_in106 = anon90;
					if (phi66 <= anon93)
					{
						phi107 = phi92;
						phi66 = phi66;
						anon108 = anon1 != 3 | phi66 == 0;
						if (!anon108)
						{
							phi103 = anon104;
							phi_in105 = anon88;
							phi_in106 = anon90;
							phi107 = phi92;
							phi66 = phi66;
						}
					}
					anon110 = phi76 + anon88 - *anon60;
					bool anon109 = phi92 == 2 | anon93 == anon110;
					if (!anon108 && phi66 <= anon93 && anon109 || phi66 > anon93)
					{
						bool anon112;
						do
						{
							*anon28 = phi_in105;
							uint64_t phi111 = phi_in106;
							uint64_t anon113 = phi111 - 4;
							anon112 = *anon28 == anon110 | *(uint32_t*)anon113 == 0;
							if (anon112)
							{
								phi103 = phi103 & 0xffffffffffffff00 | (__zext uint64_t)(*anon28 == anon110);
								phi_in105 = *anon28 - 1;
								phi_in106 = anon113;
							}
						}
						while (anon112);
						*anon101 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi107 = phi92 - (__zext uint32_t)(anon93 == anon110);
						phi66 = phi66 - 1;
					}
				}
				else 
				{
					uint32_t phi_in114 = anon88;
					uint64_t phi_in115 = anon98;
					if (phi66 == 0)
					{
						bool anon117;
						uint32_t* anon118;
						do
						{
							*anon28 = phi_in114;
							uint64_t phi116 = phi_in115;
							phi_in114 = *anon28 - 1;
							phi_in115 = phi116 - 4;
							anon118 = (uint32_t*)phi116;
							anon117 = *anon118 != 0 | *anon28 == anon110;
						}
						while (anon117);
						*anon118 = 1;
						*anon101 = 0;
						phi107 = phi92;
						phi66 = phi66;
					}
					else 
					{
						phi107 = phi92;
						phi66 = phi66 - 1;
					}
				}
				phi69 = phi107;
				uint64_t* anon119 = (uint64_t*)0x601df0;
				*anon119 = arg4;
				*anon28 = *anon60;
				uint32_t phi_in120 = *anon60;
				uint64_t phi_in121 = arg4;
				do
				{
					phi122 = phi_in85;
					uint64_t phi123 = phi_in121;
					if (*(uint32_t*)phi123 != 0)
					{
						uint32_t* anon124 = (uint32_t*)phi122;
						uint32_t* anon125 = (uint32_t*)(phi122 + (phi23 << 32 >> 30));
						*anon124 = *anon125;
						*anon125 = *anon124;
						phi_in120 = *anon28;
					}
					phi126 = phi_in120;
					uint32_t anon127 = phi126 - 1;
					*anon28 = anon127;
					phi_in85 = phi122 + 4;
					phi_in120 = anon127;
					anon128 = phi123 + 4;
					phi_in121 = anon128;
				}
				while (phi126 != 0);
				*anon119 = anon128;
				anon129 = phi122 + 4;
				*anon9 = anon129;
				uint32_t phi130 = *anon60;
				uint32_t anon132 = *anon60 + 1;
				uint32_t anon133 = (uint32_t)(anon73 + 4 + arg4 >> 2) & 3;
				uint32_t anon131 = anon132 < 6 ? anon132 : anon132 < anon133 ? anon132 : anon133;
				if (anon131 != 0)
				{
					uint32_t phi137;
					int64_t anon136 = anon3 >> 32;
					int64_t anon135 = anon136 & 1;
					anon134 = (uint32_t)(anon135 + anon2 << 32 >> 33) + (uint32_t)anon135 - ((uint32_t)(anon2 + anon136) & 1);
					*(uint32_t*)anon72 = (__zext uint32_t)(*anon60 < anon134);
					uint32_t anon138 = *anon60 - 1;
					phi137 = anon138;
					if (anon131 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon138 << 32 >> 30) + arg4) = (__zext uint32_t)(anon138 < anon134);
						uint32_t anon139 = *anon60 - 2;
						phi137 = anon139;
						if (anon131 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon139 << 32 >> 30) + arg4) = (__zext uint32_t)(anon134 > anon139);
							uint32_t anon140 = *anon60 - 3;
							phi137 = anon140;
							if (anon131 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon140 << 32 >> 30) + arg4) = (__zext uint32_t)(anon134 > anon140);
								uint32_t anon141 = *anon60 - 4;
								phi137 = anon141;
								if (anon131 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon141 << 32 >> 30) + arg4) = (__zext uint32_t)(anon134 > anon141);
									phi137 = *anon60 - 5;
								}
							}
						}
					}
					uint32_t phi_in142 = phi137;
					phi130 = phi_in142;
				}
				if (anon131 == 0 || anon132 != anon131 && anon131 != 0)
				{
					uint32_t anon149;
					uint32_t anon150;
					uint32_t phi143 = phi130;
					uint32_t anon144 = *anon60 - anon131;
					if (anon144 >= 3)
					{
						uint32_t anon147;
						uint32_t anon148;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in145 = 0;
						do
						{
							uint32_t phi146 = phi_in145;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon147 = phi146 + 1;
							anon149 = anon132 - anon131;
							anon148 = (uint32_t)(((__zext uint64_t)anon149 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon147 < anon148)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in145 = anon147;
							}
						}
						while (anon147 < anon148);
						anon150 = anon148 << 2;
						phi143 = phi130 - anon150;
					}
					if (anon144 < 3 || anon150 != anon149 && anon144 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi143 << 2) + arg4) = (__zext uint32_t)(phi143 < anon134);
						if (phi143 != 0)
						{
							uint32_t anon151 = phi143 - 1;
							*(uint32_t*)(((__zext uint64_t)anon151 << 32 >> 30) + arg4) = (__zext uint32_t)(anon134 > anon151);
							if (anon151 != 0)
							{
								uint32_t anon152 = phi143 - 2;
								*(uint32_t*)(((__sext int64_t)anon152 << 2) + arg4) = (__zext uint32_t)(anon152 < anon134);
							}
						}
					}
				}
				phi68 = *anon61;
			}
			uint64_t anon153 = phi68 + *(uint64_t*)(arg1 - 168);
			*anon61 = anon153;
			phi63 = anon134;
			phi65 = anon153;
			phi70 = phi70 + 4;
			uint64_t phi71 = anon102 - 4;
			uint64_t anon154 = phi77 + 1;
			phi_in74 = anon154;
			phi_in75 = anon129;
			phi76 = (uint32_t)anon154;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi13;
	uint32_t phi17;
	uint32_t anon21;
	uint32_t* anon22;
	uint32_t* anon25;
	uint32_t anon1 = rand();
	uint64_t* anon2 = (uint64_t*)0x601df0;
	*anon2 = arg4;
	uint32_t* anon3 = (uint32_t*)0x601e00;
	uint64_t anon5 = arg2 + 4294967295;
	uint32_t anon4 = (uint32_t)anon5;
	*anon3 = anon4;
	uint32_t* anon6 = (uint32_t*)0x601e04;
	uint64_t anon8 = (__zext uint64_t)anon1;
	uint64_t anon7 = (anon1 > 4294967295 ? anon8 : anon8 + 255) >> 31 & 1;
	uint32_t anon9 = (uint32_t)arg2;
	*anon6 = (__zext uint32_t)(((anon1 > 4294967295 ? anon1 : anon1 + 255) & 0x100) != 0 ^ anon7 != 0) == (uint32_t)anon7 ? 1 : anon9;
	uint32_t* anon10 = (uint32_t*)0x601de8;
	uint32_t anon11 = (anon9 >> 31) + anon9 >> 1;
	*anon10 = anon11;
	uint64_t phi12 = arg4;
	uint32_t anon14 = anon9 - 1;
	phi13 = anon14;
	uint32_t phi15 = anon9;
	uint32_t phi16 = anon11;
	if (anon9 == 0)
	{
		*anon3 = 4294967294;
		phi17 = anon4;
	}
	else 
	{
		while (true)
		{
			*(uint32_t*)phi12 = phi13;
			if (phi13 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon3 = anon18;
				*anon2 = phi12;
				*(uint32_t*)phi12 = anon18;
				if (phi13 == 0)
				{
					break;
				}
			}
			if (phi13 != phi16 || phi13 != 0 && phi13 == phi16)
			{
				uint32_t anon19 = *anon3 - 1;
				*anon3 = anon19;
				uint64_t anon20 = phi12 + 4;
				*anon2 = anon20;
				phi12 = anon20;
				phi13 = anon19;
				phi15 = *anon3;
				phi16 = anon19;
				if (*anon3 == 0)
				{
					break;
				}
			}
		}
		anon21 = anon9 - 2;
		*(uint32_t*)(arg1 - 68) = anon21;
		*anon3 = anon21;
		phi17 = anon14;
	}
	if (anon9 != 0 && anon21 != 0 || anon9 == 0)
	{
		uint32_t anon27;
		do
		{
			anon22 = (uint32_t*)0x601dec;
			uint32_t anon24 = rand();
			uint64_t anon23 = ((__zext uint64_t)(anon24 > 4294967295 ? anon24 : anon24 + 255) << 32 >> 40) % (__sext int64_t)phi17;
			*anon22 = (uint32_t)anon23;
			anon25 = (uint32_t*)0x601e08;
			uint32_t* anon26 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon25 = *anon26;
			*anon26 = *(uint32_t*)((anon23 << 32 >> 30) + arg4);
			*(uint32_t*)((anon23 << 32 >> 30) + arg4) = *anon25;
			anon27 = *anon3 - 1;
			*anon3 = anon27;
			phi17 = *anon3;
		}
		while (anon27 != 0);
	}
	uint64_t anon28 = arg2 << 32;
	*(uint32_t*)((anon28 >> 30) - 4 + arg4) = *anon10;
	*anon22 = 0;
	*anon3 = 0;
	uint64_t* anon29 = (uint64_t*)0x601e10;
	*anon29 = arg3;
	uint32_t phi_in30 = 0;
	uint64_t phi_in31 = arg3;
	uint64_t phi_in32 = arg2;
	uint32_t phi33 = 0;
	while (true)
	{
		uint64_t anon53;
		uint32_t phi34 = phi_in30;
		*anon29 = phi_in31;
		uint64_t phi35 = phi_in32;
		uint64_t anon36 = anon28 >> 32;
		if ((uint32_t)(anon36 * anon36) <= phi33)
		{
			uint64_t phi37;
			uint32_t phi45;
			uint32_t anon46;
			*anon3 = *(uint32_t*)(arg1 - 68);
			if (*(uint32_t*)(arg1 - 68) != 0)
			{
				phi37 = anon5 & 0xffffffff;
				uint32_t anon39 = rand();
				uint64_t anon38 = ((__zext uint64_t)(anon39 > 4294967295 ? anon39 : anon39 + 255) << 32 >> 40) % (phi37 << 32 >> 32);
				*anon22 = (uint32_t)anon38;
				uint32_t* anon40 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon25 = *anon40;
				*anon40 = *(uint32_t*)((anon38 << 32 >> 30) + arg4);
				*(uint32_t*)((anon38 << 32 >> 30) + arg4) = *anon25;
				uint32_t anon41 = *anon3 - 1;
				*anon3 = anon41;
			}
			*anon3 = 0;
			*anon22 = anon4;
			*anon29 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in42 = anon4;
			uint64_t phi_in43 = arg3;
			uint32_t phi_in44 = 0;
			do
			{
				*anon22 = phi_in42;
				*anon29 = phi_in43;
				phi45 = phi_in44;
				anon46 = (uint32_t)anon36;
				if (anon46 * anon46 > phi45)
				{
					uint32_t* anon47 = (uint32_t*)(*anon29 + ((__sext int64_t)phi45 << 2));
					uint32_t anon48 = *anon47 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4);
					*anon47 = anon48;
					uint32_t anon49 = *anon22 + 1;
					*anon22 = anon49;
					uint32_t anon50 = anon48 + 1;
					*anon3 = anon50;
					uint64_t phi51 = *anon29;
					uint32_t phi52 = anon49;
					if ((uint32_t)((__sext int64_t)anon50 % anon36) == 0)
					{
						anon53 = arg5 << 32 >> 30;
						phi51 = *anon29 + anon53;
						phi52 = *anon22;
					}
					phi_in42 = phi52;
					phi_in43 = phi51;
					phi_in44 = anon50;
					if (phi52 >= anon9)
					{
						uint32_t anon54 = phi52 - anon9;
						*anon22 = anon54;
						phi_in42 = anon54;
						phi_in43 = phi51;
						phi_in44 = anon50;
					}
				}
			}
			while (anon46 * anon46 > phi45);
			phi37 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon55 = *anon6 * *(uint32_t*)(((__sext int64_t)phi34 << 2) + arg4);
		*(uint32_t*)(*anon29 + ((__sext int64_t)phi33 << 2)) = anon55;
		uint32_t anon56 = anon55 + 1;
		*anon3 = anon56;
		uint32_t anon57 = phi34 + ((uint32_t)((__sext int64_t)anon56 % (phi35 << 32 >> 32)) == 0 ? 2 : 1);
		*anon22 = anon57;
		phi_in30 = anon57;
		uint64_t anon58 = *anon29 + ((uint32_t)((__sext int64_t)anon56 % (phi35 << 32 >> 32)) == 0 ? anon53 : 0);
		phi_in31 = anon58;
		uint64_t anon59 = arg2 & 0xffffffff;
		phi_in32 = anon59;
		phi33 = anon56;
		if (anon57 >= anon9)
		{
			uint32_t anon60 = anon57 - anon9;
			*anon22 = anon60;
			phi_in30 = anon60;
			phi_in31 = anon58;
			phi_in32 = anon59;
			phi33 = anon56;
		}
	}
	return;
}
void r(uint64_t arg0, uint64_t arg1)
{
	rand();
	return;
}
void p(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint32_t* anon1 = (uint32_t*)0x601e00;
	uint32_t anon2 = (uint32_t)arg2 - 1;
	*anon1 = anon2;
	if (anon2 != 0)
	{
		uint32_t anon9;
		uint64_t phi3 = arg2 & 0xffffffff;
		do
		{
			uint32_t anon5 = rand();
			uint64_t anon4 = ((__zext uint64_t)(anon5 > 4294967295 ? anon5 : anon5 + 255) << 32 >> 40) % (phi3 << 32 >> 32);
			*(uint32_t*)0x601dec = (uint32_t)anon4;
			uint32_t* anon6 = (uint32_t*)0x601e08;
			uint32_t* anon7 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*anon6 = *anon7;
			uint32_t* anon8 = (uint32_t*)((anon4 << 32 >> 30) + arg1);
			*anon7 = *anon8;
			*anon8 = *anon6;
			anon9 = *anon1 - 1;
			*anon1 = anon9;
			if (anon9 != 0)
			{
				phi3 = (__zext uint64_t)*anon1;
			}
		}
		while (anon9 != 0);
	}
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4200515);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601b80)(arg1 & 0xffffffff, arg2, arg3);
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
