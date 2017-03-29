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
		uint64_t anon34;
		uint32_t phi20 = anon19;
		uint64_t phi_in21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi_in23 = phi20;
			uint64_t phi_in24 = phi_in21;
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon26 = anon9 - 1;
			*anon25 = anon26;
			phi20 = phi_in23;
			uint64_t phi27 = phi_in24;
			uint32_t phi28 = anon26;
			uint32_t phi29 = phi_in23;
			uint64_t phi30 = phi_in24;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi30 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon15 & phi29 ^ (phi29 >> 31) + phi29 >> 1) << 2) + arg3);
					uint32_t anon31 = *anon25 - 1;
					*anon25 = anon31;
					phi20 = *anon8;
					uint64_t anon32 = phi30 + 4;
					phi27 = anon32;
					phi28 = anon31;
					phi29 = *anon8;
					phi30 = anon32;
				}
				while (*anon25 != 0);
			}
			uint32_t anon33 = phi20 - 1;
			*anon8 = anon33;
			phi20 = anon33;
			anon34 = phi27 + (arg4 << 32 >> 30);
			phi_in21 = anon34;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi20 != 0);
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
		uint64_t anon50;
		uint32_t phi_in42 = anon38;
		uint64_t phi43 = arg2;
		do
		{
			uint64_t anon48;
			*anon25 = anon38;
			uint32_t phi44 = anon38;
			uint32_t phi45 = phi_in42;
			do
			{
				uint32_t* anon46 = (uint32_t*)phi43;
				*anon46 = *anon46 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi45 >> 31) + phi45 >> 1 ^ *anon15 & phi45) << 2) + arg3) << 2);
				uint32_t anon47 = *anon25 - 1;
				*anon25 = anon47;
				anon48 = phi43 + 4;
				phi43 = anon48;
				phi44 = anon47;
				phi45 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon49 = *anon8 - 1;
			*anon8 = anon49;
			phi_in42 = anon49;
			anon50 = anon48 + (arg4 << 32 >> 30);
			phi43 = anon50;
		}
		while (*anon8 != 0);
		*anon7 = anon50;
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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon29;
	uint64_t phi91;
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
		phi14 = 3;
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
			phi14 = anon1 - 1;
			phi15 = anon1;
		}
	}
	if (anon1 != 0 || anon1 == 4)
	{
		uint64_t anon37;
		uint64_t anon40;
		uint32_t phi41;
		uint32_t anon46;
		uint32_t phi_in25 = phi14;
		uint32_t phi26 = phi_in25;
		uint64_t phi_in27 = arg3;
		do
		{
			uint64_t phi_in28 = phi_in27;
			anon29 = (uint32_t*)0x601dec;
			uint32_t anon31 = (uint32_t)anon12;
			uint32_t anon30 = anon31 - 1;
			*anon29 = anon30;
			uint64_t phi32 = phi_in28;
			uint64_t phi33 = phi_in28;
			uint32_t phi34 = anon30;
			if (anon31 != 0)
			{
				do
				{
					uint64_t phi35 = 3;
					if (anon1 > phi34)
					{
						uint32_t* anon36 = (uint32_t*)phi33;
						*anon36 = *anon36 + (phi15 * phi15 << 1);
						phi35 = ((__zext uint64_t)(anon1 <= *anon29) << 2) + 4294967295 & 0xffffffff;
					}
					anon37 = phi11 & 0xffffffff;
					*(uint32_t*)(phi33 + (anon37 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi35) + *(uint32_t*)phi33;
					uint32_t anon38 = *anon29 - 1;
					*anon29 = anon38;
					uint64_t anon39 = phi33 + 4;
					phi32 = anon39;
					phi33 = anon39;
					phi34 = anon38;
				}
				while (*anon29 != 0);
			}
			phi26 = phi26 - 1;
			anon40 = phi32 + (anon8 >> 30);
			phi_in27 = anon40;
		}
		while (phi26 != 256);
		*anon9 = anon40;
		uint32_t anon42 = phi10 + 1;
		int64_t anon44 = (__sext int64_t)phi10 << 2;
		uint32_t anon43 = (uint32_t)(anon44 + 4 + arg4 >> 2) & 3;
		phi41 = anon42 < anon43 ? anon42 : anon43;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi41 = anon42;
		}
		uint32_t phi45 = phi10;
		if (phi41 != 0)
		{
			uint32_t phi47;
			anon46 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon44 + arg4) = (__zext uint32_t)(phi10 < anon46);
			uint32_t anon48 = phi10 - 1;
			phi47 = anon48;
			if (phi41 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon48);
				uint32_t anon49 = phi10 - 2;
				phi47 = anon49;
				if (phi41 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon49 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon49);
					uint32_t anon50 = phi10 - 3;
					phi47 = anon50;
					if (phi41 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon50 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon50);
						uint32_t anon51 = phi10 - 4;
						phi47 = anon51;
						if (phi41 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon51 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon51);
							phi47 = phi10 - 5;
						}
					}
				}
			}
			phi45 = phi47;
			phi22 = phi10;
			phi23 = anon37;
		}
		if (anon42 != phi41 || phi41 == 0)
		{
			uint32_t anon58;
			uint32_t anon59;
			uint32_t* anon52 = (uint32_t*)(arg1 - 240);
			*anon52 = phi45;
			uint32_t phi53 = *anon52;
			uint32_t anon54 = phi10 - phi41;
			if (anon54 >= 3)
			{
				uint32_t anon57;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon52 = anon46;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi55 = 0;
				do
				{
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon56 = phi55 + 1;
					phi55 = anon56;
					anon58 = anon42 - phi41;
					anon57 = (uint32_t)(((__zext uint64_t)anon58 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon56 < anon57);
				phi22 = phi10;
				phi23 = anon37;
				anon59 = anon57 << 2;
				phi53 = *anon52 - anon59;
			}
			if (anon58 != anon59 || anon54 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi53 << 2) + arg4) = (__zext uint32_t)(anon46 > phi53);
				phi22 = phi10;
				phi23 = anon37;
				if (phi53 != 0)
				{
					uint32_t anon60 = phi53 - 1;
					*(uint32_t*)(((__zext uint64_t)anon60 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon60);
					phi22 = phi10;
					phi23 = anon37;
					if (anon60 != 0)
					{
						uint32_t anon61 = phi53 - 2;
						*(uint32_t*)(((__sext int64_t)anon61 << 2) + arg4) = (__zext uint32_t)(anon46 > anon61);
						phi22 = phi10;
						phi23 = anon37;
					}
				}
			}
		}
	}
	uint32_t* anon62 = (uint32_t*)0x601e00;
	*anon62 = phi22;
	uint64_t* anon63 = (uint64_t*)0x601df8;
	*anon63 = arg3;
	uint64_t anon64 = (anon13 >> 30) + arg3;
	if (anon64 > arg3)
	{
		uint32_t phi65;
		uint64_t anon153;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon66 = anon2 + 1;
		phi65 = (uint32_t)(anon66 + (anon66 >> 31 & 1) << 32 >> 33);
		uint64_t phi67 = arg3;
		do
		{
			uint32_t anon135;
			uint32_t phi_in68 = phi65;
			uint64_t phi69 = phi67;
			*anon9 = phi69;
			uint64_t phi70 = phi69;
			if (anon1 != 0)
			{
				uint64_t phi74;
				uint64_t phi79;
				uint64_t anon129;
				uint32_t phi71 = phi_in68;
				uint32_t phi72 = phi_in68;
				uint64_t phi73 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon62) << 2) - 4;
				int64_t anon76 = (__sext int64_t)*anon62 << 2;
				int64_t anon75 = (anon76 & 0xc) + arg4;
				phi74 = anon75;
				uint64_t phi_in77 = 0;
				uint32_t phi78 = 0;
				do
				{
					uint32_t anon90;
					int64_t anon92;
					int64_t anon93;
					uint32_t phi94;
					uint32_t anon95;
					int64_t anon99;
					uint32_t phi108;
					uint32_t phi109;
					uint32_t anon112;
					uint64_t phi121;
					uint32_t phi125;
					uint64_t anon127;
					phi79 = phi_in77;
					uint64_t phi_in80 = phi69;
					uint64_t phi_in81 = phi_in80;
					uint32_t phi82 = anon1;
					if (*anon62 != 0)
					{
						uint32_t anon87;
						do
						{
							uint32_t anon84 = rand();
							uint64_t anon83 = ((__zext uint64_t)(anon84 > 4294967295 ? anon84 : anon84 + 255) << 32 >> 40) % (__sext int64_t)phi82;
							*anon29 = (uint32_t)anon83;
							uint32_t* anon85 = (uint32_t*)0x601e08;
							uint32_t* anon86 = (uint32_t*)(((__sext int64_t)*anon62 << 2) + arg4);
							*anon85 = *anon86;
							*anon86 = *(uint32_t*)((anon83 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = *anon85;
							anon87 = *anon62 - 1;
							*anon62 = anon87;
							phi82 = *anon62;
						}
						while (anon87 != 0);
						phi_in81 = *anon9;
					}
					uint32_t* anon88 = (uint32_t*)phi73;
					if (*anon88 == 0)
					{
						uint32_t phi89;
						anon90 = anon1 - 1;
						phi89 = anon90;
						anon93 = anon2 << 32 >> 30;
						anon92 = anon93 + arg4;
						phi91 = anon92;
						phi94 = phi71;
						anon95 = *anon62 - phi78;
						if (phi71 > anon95)
						{
							uint64_t anon96;
							do
							{
								*anon29 = phi89;
								phi89 = *anon29 - 1;
								anon96 = phi91 - 4;
								phi91 = anon96;
							}
							while (*(uint32_t*)anon96 == 0);
							*anon88 = 1;
							*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
							phi94 = phi71 - 1;
						}
					}
					else 
					{
						uint64_t phi_in98;
						uint32_t phi97 = anon90;
						anon99 = anon93 - 4 + arg4;
						phi_in98 = anon99;
						if (phi71 == 0)
						{
							uint32_t* anon101;
							do
							{
								*anon29 = phi97;
								uint64_t phi100 = phi_in98;
								anon101 = (uint32_t*)phi100;
								if (*anon101 != 0)
								{
									phi97 = *anon29 - 1;
									phi_in98 = phi100 - 4;
								}
							}
							while (*anon101 != 0);
							*anon101 = 1;
							*anon88 = 0;
							phi94 = phi71;
						}
						else 
						{
							phi94 = phi71 - 1;
						}
					}
					uint64_t anon103 = phi74 & 0xffffffff00000000 | phi74 & 0xffffffff;
					uint32_t* anon102 = (uint32_t*)anon103;
					if (*anon102 == 0)
					{
						uint64_t phi104;
						bool anon110;
						uint64_t anon105 = (__zext uint64_t)anon95;
						phi104 = anon105;
						uint32_t phi_in106 = anon90;
						uint64_t phi107 = anon92;
						if (phi72 <= anon95)
						{
							phi108 = phi94;
							phi109 = phi72;
							anon110 = anon1 != 3 | phi72 == 0;
							if (!anon110)
							{
								phi104 = anon105;
								phi_in106 = anon90;
								phi107 = anon92;
								phi108 = phi94;
								phi109 = phi72;
							}
						}
						anon112 = phi78 + anon90 - *anon62;
						bool anon111 = phi94 == 2 | anon95 == anon112;
						if (!anon110 && anon111 || phi72 > anon95)
						{
							bool anon113;
							do
							{
								*anon29 = phi_in106;
								uint64_t anon114 = phi107 - 4;
								anon113 = *anon29 == anon112 | *(uint32_t*)anon114 == 0;
								if (anon113)
								{
									phi104 = phi104 & 0xffffffffffffff00 | (__zext uint64_t)(*anon29 == anon112);
									phi_in106 = *anon29 - 1;
									phi107 = anon114;
								}
							}
							while (anon113);
							*anon102 = 1;
							*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
							phi108 = phi94 - (__zext uint32_t)(anon95 == anon112);
							phi109 = phi72 - 1;
						}
					}
					else 
					{
						*anon29 = anon90;
						uint64_t phi115 = anon99;
						if (phi72 == 0)
						{
							bool anon116;
							uint32_t* anon117;
							do
							{
								*anon29 = *anon29 - 1;
								phi115 = phi115 - 4;
								anon117 = (uint32_t*)phi115;
								anon116 = *anon117 != 0 | *anon29 == anon112;
							}
							while (anon116);
							*anon117 = 1;
							*anon102 = 0;
							phi108 = phi94;
							phi109 = phi72;
						}
						else 
						{
							phi108 = phi94;
							phi109 = phi72 - 1;
						}
					}
					uint64_t* anon118 = (uint64_t*)0x601df0;
					*anon118 = arg4;
					*anon29 = *anon62;
					uint32_t phi119 = *anon62;
					uint64_t phi120 = arg4;
					do
					{
						phi121 = phi_in81;
						uint32_t phi_in122 = phi119;
						if (*(uint32_t*)phi120 != 0)
						{
							uint32_t* anon123 = (uint32_t*)phi121;
							uint32_t* anon124 = (uint32_t*)(phi121 + (phi23 << 32 >> 30));
							*anon123 = *anon124;
							*anon124 = *anon123;
							phi_in122 = *anon29;
						}
						phi125 = phi_in122;
						uint32_t anon126 = phi125 - 1;
						*anon29 = anon126;
						phi_in81 = phi121 + 4;
						phi119 = anon126;
						anon127 = phi120 + 4;
						phi120 = anon127;
					}
					while (phi125 != 0);
					*anon118 = anon127;
					uint64_t anon128 = phi121 + 4;
					*anon9 = anon128;
					anon129 = (__zext uint64_t)*anon62;
					if (phi79 != anon129)
					{
						phi71 = phi108;
						phi72 = phi109;
						phi73 = phi73 + 4;
						phi74 = anon103 - 4;
						uint64_t anon130 = phi79 + 1;
						phi_in77 = anon130;
						phi69 = anon128;
						phi78 = (uint32_t)anon130;
					}
				}
				while (phi79 != anon129);
				uint32_t phi131 = *anon62;
				uint32_t anon133 = *anon62 + 1;
				uint32_t anon134 = (uint32_t)(anon76 + 4 + arg4 >> 2) & 3;
				uint32_t anon132 = anon133 < 6 ? anon133 : anon133 < anon134 ? anon133 : anon134;
				if (anon132 != 0)
				{
					uint32_t phi138;
					int64_t anon137 = anon3 >> 32;
					int64_t anon136 = anon137 & 1;
					anon135 = (uint32_t)(anon136 + anon2 << 32 >> 33) + (uint32_t)anon136 - ((uint32_t)(anon2 + anon137) & 1);
					*(uint32_t*)anon75 = (__zext uint32_t)(*anon62 < anon135);
					uint32_t anon139 = *anon62 - 1;
					phi138 = anon139;
					if (anon132 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon139 << 32 >> 30) + arg4) = (__zext uint32_t)(anon139 < anon135);
						uint32_t anon140 = *anon62 - 2;
						phi138 = anon140;
						if (anon132 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon140 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon140);
							uint32_t anon141 = *anon62 - 3;
							phi138 = anon141;
							if (anon132 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon141 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon141);
								uint32_t anon142 = *anon62 - 4;
								phi138 = anon142;
								if (anon132 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon142 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon142);
									phi138 = *anon62 - 5;
								}
							}
						}
					}
					phi131 = phi138;
				}
				if (anon133 != anon132 || anon132 == 0)
				{
					uint32_t anon149;
					uint32_t anon150;
					uint32_t phi_in143 = phi131;
					uint32_t phi144 = phi_in143;
					uint32_t anon145 = *anon62 - anon132;
					if (anon145 >= 3)
					{
						uint32_t anon147;
						uint32_t anon148;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi146 = 0;
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
							anon147 = phi146 + 1;
							anon149 = anon133 - anon132;
							anon148 = (uint32_t)(((__zext uint64_t)anon149 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon147 < anon148)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi146 = anon147;
							}
						}
						while (anon147 < anon148);
						anon150 = anon148 << 2;
						phi144 = phi_in143 - anon150;
					}
					if (anon150 != anon149 || anon145 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi144 << 2) + arg4) = (__zext uint32_t)(phi144 < anon135);
						if (phi144 != 0)
						{
							uint32_t anon151 = phi144 - 1;
							*(uint32_t*)(((__zext uint64_t)anon151 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon151);
							if (anon151 != 0)
							{
								uint32_t anon152 = phi144 - 2;
								*(uint32_t*)(((__sext int64_t)anon152 << 2) + arg4) = (__zext uint32_t)(anon152 < anon135);
							}
						}
					}
				}
				phi70 = *anon63;
			}
			anon153 = phi70 + *(uint64_t*)(arg1 - 168);
			*anon63 = anon153;
			phi65 = anon135;
			phi67 = anon153;
		}
		while (anon153 < anon64);
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
		while (true)
		{
			uint32_t phi18 = phi_in13;
			if (phi_in13 == phi16)
			{
				uint32_t anon19 = phi15 - 2;
				*anon3 = anon19;
				*anon2 = phi12;
				phi18 = anon19;
				if (phi_in13 == 0)
				{
					break;
				}
			}
			if (phi_in13 != phi16 || phi_in13 != 0)
			{
				*(uint32_t*)phi12 = phi18;
				uint32_t anon20 = *anon3 - 1;
				*anon3 = anon20;
				uint64_t anon21 = phi12 + 4;
				*anon2 = anon21;
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
			phi_in49 = anon56;
			if ((uint32_t)((__sext int64_t)anon57 % anon36) == 0)
			{
				phi58 = *anon30 + anon41;
				phi_in49 = *anon23;
			}
			phi_in50 = phi58;
			phi_in51 = anon57;
			if (phi_in49 >= anon9)
			{
				uint32_t anon59 = phi_in49 - anon9;
				*anon23 = anon59;
				phi_in49 = anon59;
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
