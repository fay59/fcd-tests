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
	uint8_t* anon5;
	uint32_t* anon6;
	getpid(4195794);
	srand(0);
	uint32_t anon1 = (uint32_t)arg2;
	if (anon1 >= 2)
	{
		anon2 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x401894);
		phi3 = 0;
	}
	if (anon2 != 1 || anon1 < 2)
	{
		*(uint32_t*)(arg1 - 36) = 5;
		phi3 = 100;
	}
	uint8_t* anon4 = malloc(phi3);
	if (anon4 != null)
	{
		anon6 = (uint32_t*)(arg1 - 36);
		anon5 = malloc((__sext int64_t)*anon6 << 2);
	}
	if (anon4 == null || anon5 == null)
	{
		perror((uint8_t*)0x401897);
	}
	if (anon4 != null)
	{
		if (anon5 != null)
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
	uint32_t* anon25;
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
		uint32_t phi27;
		uint64_t anon33;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi23 = phi20;
			uint64_t phi24 = phi21;
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon26 = anon9 - 1;
			*anon25 = anon26;
			phi27 = phi23;
			uint32_t phi28 = anon26;
			uint64_t phi29 = phi24;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon15 & phi23 ^ (phi23 >> 31) + phi23 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon25 - 1;
					*anon25 = anon30;
					phi27 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi24 = anon31;
					phi28 = anon30;
					phi23 = *anon8;
					phi29 = anon31;
				}
				while (*anon25 != 0);
			}
			uint32_t anon32 = phi27 - 1;
			*anon8 = anon32;
			phi20 = anon32;
			anon33 = phi24 + (arg4 << 32 >> 30);
			phi21 = anon33;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi27 != 0);
		*anon7 = anon33;
	}
	uint32_t anon35 = rand();
	uint32_t anon34 = (uint32_t)(((__zext uint64_t)(anon35 > 4294967295 ? anon35 : anon35 + 255) << 32 >> 40) % anon4);
	*anon1 = anon34;
	*anon5 = 3 - anon34;
	uint32_t anon36 = rand();
	*anon7 = arg2;
	*anon15 = 3 - *anon15;
	uint32_t anon37 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon37;
	uint64_t anon40 = (__zext uint64_t)anon36;
	uint64_t anon39 = (anon36 > 4294967295 ? anon40 : anon40 + 255) >> 31 & 1;
	uint32_t anon38 = *(uint32_t*)(((__zext uint64_t)(((anon36 > 4294967295 ? anon36 : anon36 + 255) & 0x100) != 0 ^ anon39 != 0) - anon39 << 2) + arg3) ^ 1;
	*anon10 = anon38;
	*anon14 = 3 - anon38;
	if (anon9 != 0)
	{
		uint64_t anon52;
		uint32_t phi41 = anon37;
		uint64_t phi42 = arg2;
		do
		{
			uint64_t anon50;
			uint32_t phi_in43 = phi41;
			uint64_t phi_in44 = phi42;
			*anon25 = anon37;
			uint64_t phi45 = phi_in44;
			uint32_t phi46 = anon37;
			uint32_t phi47 = phi_in43;
			do
			{
				uint32_t* anon48 = (uint32_t*)phi45;
				*anon48 = *anon48 + (*(uint32_t*)(((__sext int64_t)(phi46 ^ (phi47 >> 31) + phi47 >> 1 ^ *anon15 & phi47) << 2) + arg3) << 2);
				uint32_t anon49 = *anon25 - 1;
				*anon25 = anon49;
				anon50 = phi45 + 4;
				phi45 = anon50;
				phi46 = anon49;
				phi47 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon51 = *anon8 - 1;
			*anon8 = anon51;
			phi41 = anon51;
			anon52 = anon50 + (arg4 << 32 >> 30);
			phi42 = anon52;
		}
		while (*anon8 != 0);
		*anon7 = anon52;
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
	uint32_t* anon22;
	uint64_t phi23;
	uint32_t* anon28;
	uint64_t phi88;
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
			anon22 = (uint32_t*)0x601e00;
			*anon22 = 4294967295;
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
	if (anon1 != 0 || anon1 == 4)
	{
		uint64_t anon36;
		uint64_t anon39;
		uint32_t phi40;
		uint32_t anon45;
		uint32_t phi25 = phi_in14;
		uint64_t phi26 = arg3;
		do
		{
			uint64_t phi_in27 = phi26;
			anon28 = (uint32_t*)0x601dec;
			uint32_t anon30 = (uint32_t)anon12;
			uint32_t anon29 = anon30 - 1;
			*anon28 = anon29;
			uint64_t phi31 = phi_in27;
			uint64_t phi32 = phi_in27;
			uint32_t phi33 = anon29;
			if (anon30 != 0)
			{
				do
				{
					uint64_t phi34 = 3;
					if (anon1 > phi33)
					{
						uint32_t* anon35 = (uint32_t*)phi32;
						*anon35 = *anon35 + (phi15 * phi15 << 1);
						phi34 = ((__zext uint64_t)(anon1 <= *anon28) << 2) + 4294967295 & 0xffffffff;
					}
					anon36 = phi11 & 0xffffffff;
					*(uint32_t*)(phi32 + (anon36 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi34) + *(uint32_t*)phi32;
					uint32_t anon37 = *anon28 - 1;
					*anon28 = anon37;
					uint64_t anon38 = phi32 + 4;
					phi31 = anon38;
					phi32 = anon38;
					phi33 = anon37;
				}
				while (*anon28 != 0);
			}
			phi25 = phi25 - 1;
			anon39 = phi31 + (anon8 >> 30);
			phi26 = anon39;
		}
		while (phi25 != 256);
		*anon9 = anon39;
		uint32_t anon41 = phi10 + 1;
		int64_t anon43 = (__sext int64_t)phi10 << 2;
		uint32_t anon42 = (uint32_t)(anon43 + 4 + arg4 >> 2) & 3;
		phi40 = anon41 < anon42 ? anon41 : anon42;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi40 = anon41;
		}
		uint32_t phi_in44 = phi10;
		if (phi40 != 0)
		{
			uint32_t phi_in46;
			anon45 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon43 + arg4) = (__zext uint32_t)(phi10 < anon45);
			uint32_t anon47 = phi10 - 1;
			phi_in46 = anon47;
			if (phi40 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon45 > anon47);
				uint32_t anon48 = phi10 - 2;
				phi_in46 = anon48;
				if (phi40 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon45 > anon48);
					uint32_t anon49 = phi10 - 3;
					phi_in46 = anon49;
					if (phi40 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon49 << 32 >> 30) + arg4) = (__zext uint32_t)(anon45 > anon49);
						uint32_t anon50 = phi10 - 4;
						phi_in46 = anon50;
						if (phi40 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon50 << 32 >> 30) + arg4) = (__zext uint32_t)(anon45 > anon50);
							phi_in46 = phi10 - 5;
						}
					}
				}
			}
			*anon22 = phi10;
			phi23 = anon36;
			phi_in44 = phi_in46;
		}
		if (anon41 != phi40 || phi40 == 0)
		{
			uint32_t anon57;
			uint32_t anon58;
			uint32_t* anon51 = (uint32_t*)(arg1 - 240);
			*anon51 = phi_in44;
			uint32_t phi52 = *anon51;
			uint32_t anon53 = phi10 - phi40;
			if (anon53 >= 3)
			{
				uint32_t anon56;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon51 = anon45;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi54 = 0;
				do
				{
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon55 = phi54 + 1;
					phi54 = anon55;
					anon57 = anon41 - phi40;
					anon56 = (uint32_t)(((__zext uint64_t)anon57 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon55 < anon56);
				*anon22 = phi10;
				phi23 = anon36;
				anon58 = anon56 << 2;
				phi52 = *anon51 - anon58;
			}
			if (anon57 != anon58 || anon53 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi52 << 2) + arg4) = (__zext uint32_t)(anon45 > phi52);
				*anon22 = phi10;
				phi23 = anon36;
				if (phi52 != 0)
				{
					uint32_t anon59 = phi52 - 1;
					*(uint32_t*)(((__zext uint64_t)anon59 << 32 >> 30) + arg4) = (__zext uint32_t)(anon45 > anon59);
					*anon22 = phi10;
					phi23 = anon36;
					if (anon59 != 0)
					{
						uint32_t anon60 = phi52 - 2;
						*(uint32_t*)(((__sext int64_t)anon60 << 2) + arg4) = (__zext uint32_t)(anon45 > anon60);
						*anon22 = phi10;
						phi23 = anon36;
					}
				}
			}
		}
	}
	*anon28 = *anon22;
	uint64_t* anon61 = (uint64_t*)0x601df8;
	*anon61 = arg3;
	uint64_t anon62 = (anon13 >> 30) + arg3;
	if (anon62 > arg3)
	{
		uint32_t phi63;
		uint64_t anon148;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon64 = anon2 + 1;
		phi63 = (uint32_t)(anon64 + (anon64 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in65 = arg3;
		do
		{
			uint32_t anon131;
			uint32_t phi_in66 = phi63;
			uint64_t phi_in67 = phi_in65;
			*anon9 = phi_in67;
			uint64_t phi68 = phi_in67;
			if (anon1 != 0)
			{
				uint64_t phi72;
				uint64_t phi78;
				uint64_t anon125;
				uint32_t phi69 = phi_in66;
				uint32_t phi70 = phi_in66;
				uint64_t phi71 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon28) << 2) - 4;
				int64_t anon74 = (__sext int64_t)*anon28 << 2;
				int64_t anon73 = (anon74 & 0xc) + arg4;
				phi72 = anon73;
				uint64_t phi_in75 = 0;
				uint64_t phi_in76 = phi_in67;
				uint32_t phi77 = 0;
				do
				{
					uint32_t anon87;
					int64_t anon89;
					int64_t anon90;
					uint32_t phi91;
					uint32_t anon92;
					int64_t anon96;
					uint32_t anon107;
					uint64_t phi117;
					uint32_t phi121;
					uint64_t anon123;
					phi78 = phi_in75;
					*anon22 = *anon28;
					uint32_t phi79 = anon1;
					if (*anon28 != 0)
					{
						uint32_t anon84;
						do
						{
							uint32_t anon81 = rand();
							uint64_t anon80 = ((__zext uint64_t)(anon81 > 4294967295 ? anon81 : anon81 + 255) << 32 >> 40) % (__sext int64_t)phi79;
							*anon28 = (uint32_t)anon80;
							uint32_t* anon82 = (uint32_t*)0x601e08;
							uint32_t* anon83 = (uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4);
							*anon82 = *anon83;
							*anon83 = *(uint32_t*)((anon80 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = *anon82;
							anon84 = *anon22 - 1;
							*anon22 = anon84;
							phi79 = *anon22;
						}
						while (anon84 != 0);
						phi_in76 = *anon9;
					}
					uint32_t* anon85 = (uint32_t*)phi71;
					if (*anon85 == 0)
					{
						uint32_t phi86;
						anon87 = anon1 - 1;
						phi86 = anon87;
						anon90 = anon2 << 32 >> 30;
						anon89 = anon90 + arg4;
						phi88 = anon89;
						phi91 = phi69;
						anon92 = *anon28 - phi77;
						if (phi69 > anon92)
						{
							uint64_t anon93;
							do
							{
								*anon28 = phi86;
								phi86 = *anon28 - 1;
								anon93 = phi88 - 4;
								phi88 = anon93;
							}
							while (*(uint32_t*)anon93 == 0);
							*anon85 = 1;
							*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
							phi91 = phi69 - 1;
						}
					}
					else 
					{
						uint64_t phi_in95;
						uint32_t phi94 = anon87;
						anon96 = anon90 - 4 + arg4;
						phi_in95 = anon96;
						if (phi69 == 0)
						{
							uint32_t* anon98;
							do
							{
								*anon28 = phi94;
								uint64_t phi97 = phi_in95;
								anon98 = (uint32_t*)phi97;
								if (*anon98 != 0)
								{
									phi94 = *anon28 - 1;
									phi_in95 = phi97 - 4;
								}
							}
							while (*anon98 != 0);
							*anon98 = 1;
							*anon85 = 0;
							phi91 = phi69;
						}
						else 
						{
							phi91 = phi69 - 1;
						}
					}
					uint64_t anon100 = phi72 & 0xffffffff00000000 | phi72 & 0xffffffff;
					uint32_t* anon99 = (uint32_t*)anon100;
					if (*anon99 == 0)
					{
						uint64_t phi101;
						bool anon105;
						uint64_t anon102 = (__zext uint64_t)anon92;
						phi101 = anon102;
						uint32_t phi_in103 = anon87;
						uint64_t phi104 = anon89;
						if (phi70 <= anon92)
						{
							phi69 = phi91;
							phi_in66 = phi70;
							anon105 = anon1 != 3 | phi70 == 0;
							if (!anon105)
							{
								phi101 = anon102;
								phi_in103 = anon87;
								phi104 = anon89;
								phi69 = phi91;
								phi_in66 = phi70;
							}
						}
						anon107 = phi77 + anon87 - *anon28;
						bool anon106 = phi91 == 2 | anon92 == anon107;
						if (!anon105 && anon106 || phi70 > anon92)
						{
							bool anon108;
							do
							{
								*anon28 = phi_in103;
								uint64_t anon109 = phi104 - 4;
								anon108 = *anon28 == anon107 | *(uint32_t*)anon109 == 0;
								if (anon108)
								{
									phi101 = phi101 & 0xffffffffffffff00 | (__zext uint64_t)(*anon28 == anon107);
									phi_in103 = *anon28 - 1;
									phi104 = anon109;
								}
							}
							while (anon108);
							*anon99 = 1;
							*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
							phi69 = phi91 - (__zext uint32_t)(anon92 == anon107);
							phi_in66 = phi70 - 1;
						}
					}
					else 
					{
						uint32_t phi110 = anon87;
						uint64_t phi111 = anon96;
						if (phi70 == 0)
						{
							bool anon112;
							uint32_t* anon113;
							do
							{
								*anon28 = phi110;
								phi110 = *anon28 - 1;
								phi111 = phi111 - 4;
								anon113 = (uint32_t*)phi111;
								anon112 = *anon113 != 0 | *anon28 == anon107;
							}
							while (anon112);
							*anon113 = 1;
							*anon99 = 0;
							phi69 = phi91;
							phi_in66 = phi70;
						}
						else 
						{
							phi69 = phi91;
							phi_in66 = phi70 - 1;
						}
					}
					uint64_t* anon114 = (uint64_t*)0x601df0;
					*anon114 = arg4;
					uint32_t phi115 = *anon28;
					uint64_t phi116 = arg4;
					do
					{
						phi117 = phi_in76;
						uint32_t phi_in118 = phi115;
						if (*(uint32_t*)phi116 != 0)
						{
							uint32_t* anon119 = (uint32_t*)phi117;
							uint32_t* anon120 = (uint32_t*)(phi117 + (phi23 << 32 >> 30));
							*anon119 = *anon120;
							*anon120 = *anon119;
							phi_in118 = *anon28;
						}
						phi121 = phi_in118;
						uint32_t anon122 = phi121 - 1;
						*anon28 = anon122;
						phi_in76 = phi117 + 4;
						phi115 = anon122;
						anon123 = phi116 + 4;
						phi116 = anon123;
					}
					while (phi121 != 0);
					*anon114 = anon123;
					uint64_t anon124 = phi117 + 4;
					*anon9 = anon124;
					anon125 = (__zext uint64_t)*anon28;
					if (phi78 != anon125)
					{
						phi70 = phi_in66;
						phi71 = phi71 + 4;
						phi72 = anon100 - 4;
						uint64_t anon126 = phi78 + 1;
						phi_in75 = anon126;
						phi_in76 = anon124;
						phi77 = (uint32_t)anon126;
					}
				}
				while (phi78 != anon125);
				uint32_t phi127 = *anon28;
				uint32_t anon129 = *anon28 + 1;
				uint32_t anon130 = (uint32_t)(anon74 + 4 + arg4 >> 2) & 3;
				uint32_t anon128 = anon129 < 6 ? anon129 : anon129 < anon130 ? anon129 : anon130;
				if (anon128 != 0)
				{
					uint32_t phi_in134;
					int64_t anon133 = anon3 >> 32;
					int64_t anon132 = anon133 & 1;
					anon131 = (uint32_t)(anon132 + anon2 << 32 >> 33) + (uint32_t)anon132 - ((uint32_t)(anon2 + anon133) & 1);
					*(uint32_t*)anon73 = (__zext uint32_t)(*anon28 < anon131);
					uint32_t anon135 = *anon28 - 1;
					phi_in134 = anon135;
					if (anon128 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon135 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 < anon131);
						uint32_t anon136 = *anon28 - 2;
						phi_in134 = anon136;
						if (anon128 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon136 << 32 >> 30) + arg4) = (__zext uint32_t)(anon131 > anon136);
							uint32_t anon137 = *anon28 - 3;
							phi_in134 = anon137;
							if (anon128 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon137 << 32 >> 30) + arg4) = (__zext uint32_t)(anon131 > anon137);
								uint32_t anon138 = *anon28 - 4;
								phi_in134 = anon138;
								if (anon128 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon138 << 32 >> 30) + arg4) = (__zext uint32_t)(anon131 > anon138);
									phi_in134 = *anon28 - 5;
								}
							}
						}
					}
					phi127 = phi_in134;
				}
				if (anon129 != anon128 || anon128 == 0)
				{
					uint32_t anon144;
					uint32_t anon145;
					uint32_t phi139 = phi127;
					uint32_t anon140 = *anon28 - anon128;
					if (anon140 >= 3)
					{
						uint32_t anon142;
						uint32_t anon143;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi141 = 0;
						do
						{
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon142 = phi141 + 1;
							anon144 = anon129 - anon128;
							anon143 = (uint32_t)(((__zext uint64_t)anon144 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon142 < anon143)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi141 = anon142;
							}
						}
						while (anon142 < anon143);
						anon145 = anon143 << 2;
						phi139 = phi139 - anon145;
					}
					if (anon145 != anon144 || anon140 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi139 << 2) + arg4) = (__zext uint32_t)(phi139 < anon131);
						if (phi139 != 0)
						{
							uint32_t anon146 = phi139 - 1;
							*(uint32_t*)(((__zext uint64_t)anon146 << 32 >> 30) + arg4) = (__zext uint32_t)(anon131 > anon146);
							if (anon146 != 0)
							{
								uint32_t anon147 = phi139 - 2;
								*(uint32_t*)(((__sext int64_t)anon147 << 2) + arg4) = (__zext uint32_t)(anon147 < anon131);
							}
						}
					}
				}
				phi68 = *anon61;
			}
			anon148 = phi68 + *(uint64_t*)(arg1 - 168);
			*anon61 = anon148;
			phi63 = anon131;
			phi_in65 = anon148;
		}
		while (anon148 < anon62);
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi_in13;
	uint32_t phi17;
	uint32_t anon22;
	uint32_t* anon23;
	uint32_t* anon26;
	uint64_t anon36;
	uint64_t anon41;
	uint32_t phi52;
	uint32_t anon53;
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
	phi_in13 = anon14;
	uint32_t phi15 = anon9;
	uint32_t phi16 = anon11;
	if (anon9 == 0)
	{
		*anon3 = 4294967294;
		phi17 = anon4;
	}
	else 
	{
		uint64_t phi19;
		while (true)
		{
			*(uint32_t*)phi12 = phi_in13;
			if (phi_in13 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon3 = anon18;
				phi19 = phi12;
				*(uint32_t*)phi12 = anon18;
				if (phi_in13 == 0)
				{
					break;
				}
			}
			if (phi_in13 != phi16 || phi_in13 != 0)
			{
				uint32_t anon20 = *anon3 - 1;
				*anon3 = anon20;
				uint64_t anon21 = phi12 + 4;
				phi19 = anon21;
				phi12 = anon21;
				phi_in13 = anon20;
				phi15 = *anon3;
				phi16 = anon20;
				if (*anon3 == 0)
				{
					break;
				}
			}
		}
		*anon2 = phi19;
		anon22 = anon9 - 2;
		*(uint32_t*)(arg1 - 68) = anon22;
		*anon3 = anon22;
		phi17 = anon14;
	}
	if (anon22 != 0 || anon9 == 0)
	{
		uint32_t anon28;
		do
		{
			anon23 = (uint32_t*)0x601dec;
			uint32_t anon25 = rand();
			uint64_t anon24 = ((__zext uint64_t)(anon25 > 4294967295 ? anon25 : anon25 + 255) << 32 >> 40) % (__sext int64_t)phi17;
			*anon23 = (uint32_t)anon24;
			anon26 = (uint32_t*)0x601e08;
			uint32_t* anon27 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon26 = *anon27;
			*anon27 = *(uint32_t*)((anon24 << 32 >> 30) + arg4);
			*(uint32_t*)((anon24 << 32 >> 30) + arg4) = *anon26;
			anon28 = *anon3 - 1;
			*anon3 = anon28;
			phi17 = *anon3;
		}
		while (anon28 != 0);
	}
	uint64_t anon29 = arg2 << 32;
	*(uint32_t*)((anon29 >> 30) - 4 + arg4) = *anon10;
	*anon23 = 0;
	*anon3 = 0;
	uint64_t* anon30 = (uint64_t*)0x601e10;
	*anon30 = arg3;
	uint32_t phi_in31 = 0;
	uint64_t phi_in32 = arg3;
	uint64_t phi33 = arg2;
	uint32_t phi34 = 0;
	do
	{
		uint32_t phi35 = phi_in31;
		*anon30 = phi_in32;
		anon36 = anon29 >> 32;
		if ((uint32_t)(anon36 * anon36) > phi34)
		{
			uint32_t anon37 = *anon6 * *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4);
			*(uint32_t*)(*anon30 + ((__sext int64_t)phi34 << 2)) = anon37;
			uint32_t anon38 = anon37 + 1;
			*anon3 = anon38;
			uint32_t anon39 = phi35 + ((uint32_t)((__sext int64_t)anon38 % (phi33 << 32 >> 32)) == 0 ? 2 : 1);
			*anon23 = anon39;
			phi_in31 = anon39;
			anon41 = arg5 << 32 >> 30;
			uint64_t anon40 = *anon30 + ((uint32_t)((__sext int64_t)anon38 % (phi33 << 32 >> 32)) == 0 ? anon41 : 0);
			phi_in32 = anon40;
			uint64_t anon42 = arg2 & 0xffffffff;
			phi33 = anon42;
			phi34 = anon38;
			if (anon39 >= anon9)
			{
				uint32_t anon43 = anon39 - anon9;
				*anon23 = anon43;
				phi_in31 = anon43;
				phi_in32 = anon40;
				phi33 = anon42;
				phi34 = anon38;
			}
		}
	}
	while ((uint32_t)(anon36 * anon36) > phi34);
	*anon3 = *(uint32_t*)(arg1 - 68);
	if (*(uint32_t*)(arg1 - 68) != 0)
	{
		uint32_t anon48;
		uint64_t phi44 = anon5 & 0xffffffff;
		do
		{
			uint32_t anon46 = rand();
			uint64_t anon45 = ((__zext uint64_t)(anon46 > 4294967295 ? anon46 : anon46 + 255) << 32 >> 40) % (phi44 << 32 >> 32);
			*anon23 = (uint32_t)anon45;
			uint32_t* anon47 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon26 = *anon47;
			*anon47 = *(uint32_t*)((anon45 << 32 >> 30) + arg4);
			*(uint32_t*)((anon45 << 32 >> 30) + arg4) = *anon26;
			anon48 = *anon3 - 1;
			*anon3 = anon48;
			if (anon48 != 0)
			{
				phi44 = (__zext uint64_t)*anon3;
			}
		}
		while (anon48 != 0);
	}
	*anon3 = 0;
	*anon23 = anon4;
	*anon30 = arg3;
	*anon6 = anon9 + 1 - *anon6;
	uint32_t phi_in49 = anon4;
	uint64_t phi_in50 = arg3;
	uint32_t phi_in51 = 0;
	do
	{
		*anon23 = phi_in49;
		*anon30 = phi_in50;
		phi52 = phi_in51;
		anon53 = (uint32_t)anon36;
		if (anon53 * anon53 > phi52)
		{
			uint32_t* anon54 = (uint32_t*)(*anon30 + ((__sext int64_t)phi52 << 2));
			uint32_t anon55 = *anon54 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon23 << 2) + arg4);
			*anon54 = anon55;
			uint32_t anon56 = *anon23 + 1;
			*anon23 = anon56;
			uint32_t anon57 = anon55 + 1;
			*anon3 = anon57;
			uint64_t phi58 = *anon30;
			uint32_t phi59 = anon56;
			if ((uint32_t)((__sext int64_t)anon57 % anon36) == 0)
			{
				phi58 = *anon30 + anon41;
				phi59 = *anon23;
			}
			phi_in49 = phi59;
			phi_in50 = phi58;
			phi_in51 = anon57;
			if (phi59 >= anon9)
			{
				uint32_t anon60 = phi59 - anon9;
				*anon23 = anon60;
				phi_in49 = anon60;
				phi_in50 = phi58;
				phi_in51 = anon57;
			}
		}
	}
	while (anon53 * anon53 > phi52);
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
