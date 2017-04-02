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
	uint64_t phi_in3;
	uint8_t* anon5;
	uint32_t* anon6;
	getpid(4195794);
	srand(0);
	uint32_t anon1 = (uint32_t)arg2;
	if (anon1 >= 2)
	{
		anon2 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x401894);
		phi_in3 = 0;
	}
	if (anon2 != 1 || anon1 < 2)
	{
		*(uint32_t*)(arg1 - 36) = 5;
		phi_in3 = 100;
	}
	uint8_t* anon4 = malloc(phi_in3);
	if (anon4 != null)
	{
		anon6 = (uint32_t*)(arg1 - 36);
		anon5 = malloc((__sext int64_t)*anon6 << 2);
	}
	if (anon4 == null || anon5 == null)
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
	uint32_t* anon23;
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
		uint64_t anon29;
		uint32_t phi_in20 = anon19;
		uint64_t phi_in21 = *anon7;
		uint64_t phi_in22 = arg1;
		do
		{
			anon23 = (uint32_t*)0x601dec;
			uint32_t anon24 = anon9 - 1;
			*anon23 = anon24;
			uint32_t phi_in25 = anon24;
			if ((uint32_t)phi_in22 != 0)
			{
				do
				{
					*(uint32_t*)phi_in21 = *(uint32_t*)(((__sext int64_t)(phi_in25 ^ *anon15 & phi_in20 ^ (phi_in20 >> 31) + phi_in20 >> 1) << 2) + arg3);
					uint32_t anon26 = *anon23 - 1;
					*anon23 = anon26;
					phi_in20 = *anon8;
					uint64_t anon27 = phi_in21 + 4;
					phi_in21 = anon27;
					phi_in25 = anon26;
					phi_in20 = *anon8;
					phi_in21 = anon27;
				}
				while (*anon23 != 0);
			}
			uint32_t anon28 = phi_in20 - 1;
			*anon8 = anon28;
			phi_in20 = anon28;
			anon29 = phi_in21 + (arg4 << 32 >> 30);
			phi_in21 = anon29;
			phi_in22 = arg1 & 0xffffffff;
		}
		while (phi_in20 != 0);
		*anon7 = anon29;
	}
	uint32_t anon31 = rand();
	uint32_t anon30 = (uint32_t)(((__zext uint64_t)(anon31 > 4294967295 ? anon31 : anon31 + 255) << 32 >> 40) % anon4);
	*anon1 = anon30;
	*anon5 = 3 - anon30;
	uint32_t anon32 = rand();
	*anon7 = arg2;
	*anon15 = 3 - *anon15;
	uint32_t anon33 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon33;
	uint64_t anon36 = (__zext uint64_t)anon32;
	uint64_t anon35 = (anon32 > 4294967295 ? anon36 : anon36 + 255) >> 31 & 1;
	uint32_t anon34 = *(uint32_t*)(((__zext uint64_t)(((anon32 > 4294967295 ? anon32 : anon32 + 255) & 0x100) != 0 ^ anon35 != 0) - anon35 << 2) + arg3) ^ 1;
	*anon10 = anon34;
	*anon14 = 3 - anon34;
	if (anon9 != 0)
	{
		uint64_t anon44;
		uint32_t phi_in37 = anon33;
		uint64_t phi_in38 = arg2;
		do
		{
			uint64_t anon42;
			*anon23 = anon33;
			uint32_t phi_in39 = anon33;
			do
			{
				uint32_t* anon40 = (uint32_t*)phi_in38;
				*anon40 = *anon40 + (*(uint32_t*)(((__sext int64_t)(phi_in39 ^ (phi_in37 >> 31) + phi_in37 >> 1 ^ *anon15 & phi_in37) << 2) + arg3) << 2);
				uint32_t anon41 = *anon23 - 1;
				*anon23 = anon41;
				anon42 = phi_in38 + 4;
				phi_in38 = anon42;
				phi_in39 = anon41;
				phi_in37 = *anon8;
			}
			while (*anon23 != 0);
			uint32_t anon43 = *anon8 - 1;
			*anon8 = anon43;
			phi_in37 = anon43;
			anon44 = anon42 + (arg4 << 32 >> 30);
			phi_in38 = anon44;
		}
		while (*anon8 != 0);
		*anon7 = anon44;
	}
	return;
}
void e(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t anon6;
	uint64_t anon7;
	uint64_t anon8;
	uint64_t* anon9;
	uint32_t* anon10;
	uint64_t phi_in11;
	uint64_t anon12;
	uint64_t anon13;
	uint32_t phi_in14;
	uint32_t phi_in15;
	uint64_t phi_in22;
	uint32_t* anon25;
	uint64_t phi_in73;
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
		anon10 = (uint32_t*)0x601e00;
		*anon10 = 3;
		anon13 = arg2 << 32;
		anon12 = anon13 >> 32;
		phi_in11 = anon12 + anon7 << 2;
		phi_in14 = 3;
		phi_in15 = 4;
	}
	else 
	{
		int64_t anon23;
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
			*anon10 = 4294967295;
			anon23 = (anon21 >> 32) * (anon12 + anon7 << 32 >> 32);
			phi_in22 = anon23 & 0xffffffff;
		}
		else 
		{
			*anon10 = (uint32_t)(anon2 + 4294967295);
			phi_in11 = anon23;
			phi_in14 = anon1 - 1;
			phi_in15 = anon1;
		}
	}
	if (anon1 != 0 || anon1 == 4)
	{
		uint64_t anon31;
		uint64_t anon34;
		uint32_t phi_in35;
		uint32_t anon40;
		uint64_t phi_in24 = arg3;
		do
		{
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon27 = (uint32_t)anon12;
			uint32_t anon26 = anon27 - 1;
			*anon25 = anon26;
			uint32_t phi_in28 = anon26;
			if (anon27 != 0)
			{
				do
				{
					uint64_t phi_in29 = 3;
					if (anon1 > phi_in28)
					{
						uint32_t* anon30 = (uint32_t*)phi_in24;
						*anon30 = *anon30 + (phi_in15 * phi_in15 << 1);
						phi_in29 = ((__zext uint64_t)(anon1 <= *anon25) << 2) + 4294967295 & 0xffffffff;
					}
					anon31 = phi_in11 & 0xffffffff;
					*(uint32_t*)(phi_in24 + (anon31 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi_in29) + *(uint32_t*)phi_in24;
					uint32_t anon32 = *anon25 - 1;
					*anon25 = anon32;
					uint64_t anon33 = phi_in24 + 4;
					phi_in24 = anon33;
					phi_in24 = anon33;
					phi_in28 = anon32;
				}
				while (*anon25 != 0);
			}
			phi_in14 = phi_in14 - 1;
			anon34 = phi_in24 + (anon8 >> 30);
			phi_in24 = anon34;
		}
		while (phi_in14 != 256);
		*anon9 = anon34;
		uint32_t anon36 = *anon10 + 1;
		int64_t anon38 = (__sext int64_t)*anon10 << 2;
		uint32_t anon37 = (uint32_t)(anon38 + 4 + arg4 >> 2) & 3;
		phi_in35 = anon36 < anon37 ? anon36 : anon37;
		if (*anon10 == 4294967295 || *anon10 == 4 || *anon10 == 3 || *anon10 == 2 || *anon10 == 1 || *anon10 == 0)
		{
			phi_in35 = anon36;
		}
		uint32_t* anon39 = (uint32_t*)(arg1 - 240);
		*anon39 = *anon10;
		if (phi_in35 != 0)
		{
			anon40 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon38 + arg4) = (__zext uint32_t)(*anon10 < anon40);
			uint32_t anon41 = *anon10 - 1;
			*anon39 = anon41;
			if (phi_in35 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon41 << 32 >> 30) + arg4) = (__zext uint32_t)(anon40 > anon41);
				uint32_t anon42 = *anon10 - 2;
				*anon39 = anon42;
				if (phi_in35 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon42 << 32 >> 30) + arg4) = (__zext uint32_t)(anon40 > anon42);
					uint32_t anon43 = *anon10 - 3;
					*anon39 = anon43;
					if (phi_in35 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon43 << 32 >> 30) + arg4) = (__zext uint32_t)(anon40 > anon43);
						uint32_t anon44 = *anon10 - 4;
						*anon39 = anon44;
						if (phi_in35 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon44 << 32 >> 30) + arg4) = (__zext uint32_t)(anon40 > anon44);
							*anon39 = *anon10 - 5;
						}
					}
				}
			}
			phi_in22 = anon31;
		}
		if (anon36 != phi_in35 || phi_in35 == 0)
		{
			uint32_t anon49;
			uint32_t anon50;
			uint32_t anon45 = *anon10 - phi_in35;
			if (anon45 >= 3)
			{
				uint32_t anon48;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon39 = anon40;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in46 = 0;
				do
				{
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon47 = phi_in46 + 1;
					phi_in46 = anon47;
					anon49 = anon36 - phi_in35;
					anon48 = (uint32_t)(((__zext uint64_t)anon49 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon47 < anon48);
				phi_in22 = anon31;
				anon50 = anon48 << 2;
				*anon39 = *anon39 - anon50;
			}
			if (anon49 != anon50 || anon45 < 3)
			{
				*(uint32_t*)(((__sext int64_t)*anon39 << 2) + arg4) = (__zext uint32_t)(anon40 > *anon39);
				phi_in22 = anon31;
				if (*anon39 != 0)
				{
					uint32_t anon51 = *anon39 - 1;
					*(uint32_t*)(((__zext uint64_t)anon51 << 32 >> 30) + arg4) = (__zext uint32_t)(anon40 > anon51);
					phi_in22 = anon31;
					if (anon51 != 0)
					{
						uint32_t anon52 = *anon39 - 2;
						*(uint32_t*)(((__sext int64_t)anon52 << 2) + arg4) = (__zext uint32_t)(anon40 > anon52);
						phi_in22 = anon31;
					}
				}
			}
		}
	}
	uint64_t* anon53 = (uint64_t*)0x601df8;
	*anon53 = arg3;
	uint64_t anon54 = (anon13 >> 30) + arg3;
	if (anon54 > arg3)
	{
		uint32_t phi_in55;
		uint64_t anon131;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon56 = anon2 + 1;
		phi_in55 = (uint32_t)(anon56 + (anon56 >> 31 & 1) << 32 >> 33);
		*anon9 = arg3;
		do
		{
			uint32_t anon116;
			if (anon1 != 0)
			{
				uint64_t phi_in58;
				uint64_t phi63;
				uint64_t anon110;
				uint64_t phi_in57 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon10) << 2) - 4;
				int64_t anon60 = (__sext int64_t)*anon10 << 2;
				int64_t anon59 = (anon60 & 0xc) + arg4;
				phi_in58 = anon59;
				uint64_t phi_in61 = 0;
				uint32_t phi_in62 = 0;
				do
				{
					uint32_t anon72;
					int64_t anon74;
					int64_t anon75;
					uint32_t anon76;
					int64_t anon80;
					uint32_t phi_in89;
					uint32_t phi_in90;
					uint32_t anon93;
					uint64_t phi103;
					uint32_t phi106;
					uint64_t anon108;
					phi63 = phi_in61;
					uint32_t phi_in64 = anon1;
					if (*anon10 != 0)
					{
						uint32_t anon69;
						do
						{
							uint32_t anon66 = rand();
							uint64_t anon65 = ((__zext uint64_t)(anon66 > 4294967295 ? anon66 : anon66 + 255) << 32 >> 40) % (__sext int64_t)phi_in64;
							*anon25 = (uint32_t)anon65;
							uint32_t* anon67 = (uint32_t*)0x601e08;
							uint32_t* anon68 = (uint32_t*)(((__sext int64_t)*anon10 << 2) + arg4);
							*anon67 = *anon68;
							*anon68 = *(uint32_t*)((anon65 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon25 << 2) + arg4) = *anon67;
							anon69 = *anon10 - 1;
							*anon10 = anon69;
							phi_in64 = *anon10;
						}
						while (anon69 != 0);
						*anon9 = *anon9;
					}
					uint32_t* anon70 = (uint32_t*)phi_in57;
					if (*anon70 == 0)
					{
						uint32_t phi_in71;
						anon72 = anon1 - 1;
						phi_in71 = anon72;
						anon75 = anon2 << 32 >> 30;
						anon74 = anon75 + arg4;
						phi_in73 = anon74;
						anon76 = *anon10 - phi_in62;
						if (phi_in55 > anon76)
						{
							uint64_t anon77;
							do
							{
								phi_in71 = phi_in71 - 1;
								anon77 = phi_in73 - 4;
								phi_in73 = anon77;
							}
							while (*(uint32_t*)anon77 == 0);
							*anon70 = 1;
							*(uint32_t*)(((__sext int64_t)phi_in71 << 2) + arg4) = 0;
							phi_in55 = phi_in55 - 1;
						}
					}
					else 
					{
						uint64_t phi_in79;
						uint32_t phi_in78 = anon72;
						anon80 = anon75 - 4 + arg4;
						phi_in79 = anon80;
						if (phi_in55 == 0)
						{
							uint32_t* anon82;
							do
							{
								uint64_t phi81 = phi_in79;
								anon82 = (uint32_t*)phi81;
								if (*anon82 != 0)
								{
									phi_in78 = phi_in78 - 1;
									phi_in79 = phi81 - 4;
								}
							}
							while (*anon82 != 0);
							*anon82 = 1;
							*anon70 = 0;
						}
						else 
						{
							phi_in55 = phi_in55 - 1;
						}
					}
					uint64_t anon84 = phi_in58 & 0xffffffff00000000 | phi_in58 & 0xffffffff;
					uint32_t* anon83 = (uint32_t*)anon84;
					if (*anon83 == 0)
					{
						uint64_t phi_in85;
						bool anon91;
						uint64_t anon86 = (__zext uint64_t)anon76;
						phi_in85 = anon86;
						uint32_t phi_in87 = anon72;
						uint64_t phi_in88 = anon74;
						if (phi_in55 <= anon76)
						{
							phi_in89 = phi_in55;
							phi_in90 = phi_in55;
							anon91 = anon1 != 3 | phi_in55 == 0;
							if (!anon91)
							{
								phi_in85 = anon86;
								phi_in87 = anon72;
								phi_in88 = anon74;
								phi_in89 = phi_in55;
								phi_in90 = phi_in55;
							}
						}
						anon93 = phi_in62 + anon72 - *anon10;
						bool anon92 = phi_in55 == 2 | anon76 == anon93;
						if (!anon91 && anon92 || phi_in55 > anon76)
						{
							bool anon94;
							do
							{
								*anon25 = phi_in87;
								uint64_t anon95 = phi_in88 - 4;
								anon94 = *anon25 == anon93 | *(uint32_t*)anon95 == 0;
								if (anon94)
								{
									phi_in85 = phi_in85 & 0xffffffffffffff00 | (__zext uint64_t)(*anon25 == anon93);
									phi_in87 = *anon25 - 1;
									phi_in88 = anon95;
								}
							}
							while (anon94);
							*anon83 = 1;
							*(uint32_t*)(((__sext int64_t)*anon25 << 2) + arg4) = 0;
							phi_in89 = phi_in55 - (__zext uint32_t)(anon76 == anon93);
							phi_in90 = phi_in55 - 1;
						}
					}
					else 
					{
						uint32_t phi_in96 = anon72;
						uint64_t phi_in97 = anon80;
						if (phi_in55 == 0)
						{
							bool anon98;
							uint32_t* anon99;
							do
							{
								phi_in96 = phi_in96 - 1;
								phi_in97 = phi_in97 - 4;
								anon99 = (uint32_t*)phi_in97;
								anon98 = *anon99 != 0 | phi_in96 == anon93;
							}
							while (anon98);
							*anon99 = 1;
							*anon83 = 0;
							phi_in89 = phi_in55;
							phi_in90 = phi_in55;
						}
						else 
						{
							phi_in89 = phi_in55;
							phi_in90 = phi_in55 - 1;
						}
					}
					uint64_t* anon100 = (uint64_t*)0x601df0;
					*anon100 = arg4;
					uint32_t phi_in101 = *anon10;
					uint64_t phi_in102 = arg4;
					do
					{
						phi103 = *anon9;
						if (*(uint32_t*)phi_in102 != 0)
						{
							uint32_t* anon104 = (uint32_t*)phi103;
							uint32_t* anon105 = (uint32_t*)(phi103 + (phi_in22 << 32 >> 30));
							*anon104 = *anon105;
							*anon105 = *anon104;
							phi_in101 = *anon25;
						}
						phi106 = phi_in101;
						uint32_t anon107 = phi106 - 1;
						*anon25 = anon107;
						*anon9 = phi103 + 4;
						phi_in101 = anon107;
						anon108 = phi_in102 + 4;
						phi_in102 = anon108;
					}
					while (phi106 != 0);
					*anon100 = anon108;
					uint64_t anon109 = phi103 + 4;
					*anon9 = anon109;
					anon110 = (__zext uint64_t)*anon10;
					if (phi63 != anon110)
					{
						phi_in55 = phi_in89;
						phi_in55 = phi_in90;
						phi_in57 = phi_in57 + 4;
						phi_in58 = anon84 - 4;
						uint64_t anon111 = phi63 + 1;
						phi_in61 = anon111;
						*anon9 = anon109;
						phi_in62 = (uint32_t)anon111;
					}
				}
				while (phi63 != anon110);
				uint32_t phi_in112 = *anon10;
				uint32_t anon114 = *anon10 + 1;
				uint32_t anon115 = (uint32_t)(anon60 + 4 + arg4 >> 2) & 3;
				uint32_t anon113 = anon114 < 6 ? anon114 : anon114 < anon115 ? anon114 : anon115;
				if (anon113 != 0)
				{
					int64_t anon118 = anon3 >> 32;
					int64_t anon117 = anon118 & 1;
					anon116 = (uint32_t)(anon117 + anon2 << 32 >> 33) + (uint32_t)anon117 - ((uint32_t)(anon2 + anon118) & 1);
					*(uint32_t*)anon59 = (__zext uint32_t)(*anon10 < anon116);
					uint32_t anon119 = *anon10 - 1;
					phi_in112 = anon119;
					if (anon113 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon119 << 32 >> 30) + arg4) = (__zext uint32_t)(anon119 < anon116);
						uint32_t anon120 = *anon10 - 2;
						phi_in112 = anon120;
						if (anon113 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon120 << 32 >> 30) + arg4) = (__zext uint32_t)(anon116 > anon120);
							uint32_t anon121 = *anon10 - 3;
							phi_in112 = anon121;
							if (anon113 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon121 << 32 >> 30) + arg4) = (__zext uint32_t)(anon116 > anon121);
								uint32_t anon122 = *anon10 - 4;
								phi_in112 = anon122;
								if (anon113 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon122 << 32 >> 30) + arg4) = (__zext uint32_t)(anon116 > anon122);
									phi_in112 = *anon10 - 5;
								}
							}
						}
					}
				}
				if (anon114 != anon113 || anon113 == 0)
				{
					uint32_t anon127;
					uint32_t anon128;
					uint32_t anon123 = *anon10 - anon113;
					if (anon123 >= 3)
					{
						uint32_t anon125;
						uint32_t anon126;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in124 = 0;
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
							anon125 = phi_in124 + 1;
							anon127 = anon114 - anon113;
							anon126 = (uint32_t)(((__zext uint64_t)anon127 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon125 < anon126)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in124 = anon125;
							}
						}
						while (anon125 < anon126);
						anon128 = anon126 << 2;
						phi_in112 = phi_in112 - anon128;
					}
					if (anon128 != anon127 || anon123 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi_in112 << 2) + arg4) = (__zext uint32_t)(phi_in112 < anon116);
						if (phi_in112 != 0)
						{
							uint32_t anon129 = phi_in112 - 1;
							*(uint32_t*)(((__zext uint64_t)anon129 << 32 >> 30) + arg4) = (__zext uint32_t)(anon116 > anon129);
							if (anon129 != 0)
							{
								uint32_t anon130 = phi_in112 - 2;
								*(uint32_t*)(((__sext int64_t)anon130 << 2) + arg4) = (__zext uint32_t)(anon130 < anon116);
							}
						}
					}
				}
				*anon9 = *anon53;
			}
			anon131 = *anon9 + *(uint64_t*)(arg1 - 168);
			*anon53 = anon131;
			phi_in55 = anon116;
			*anon9 = anon131;
		}
		while (anon131 < anon54);
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi_in13;
	uint32_t phi_in17;
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
	uint64_t phi_in12 = arg4;
	uint32_t anon14 = anon9 - 1;
	phi_in13 = anon14;
	uint32_t phi_in15 = anon9;
	uint32_t phi_in16 = anon11;
	if (anon9 == 0)
	{
		*anon3 = 4294967294;
		phi_in17 = anon4;
	}
	else 
	{
		while (true)
		{
			uint64_t phi_in19;
			if (phi_in13 == phi_in16)
			{
				uint32_t anon18 = phi_in15 - 2;
				*anon3 = anon18;
				phi_in19 = phi_in12;
				phi_in13 = anon18;
				if (phi_in13 == 0)
				{
					break;
				}
			}
			if (phi_in13 != phi_in16 || phi_in13 != 0)
			{
				uint32_t anon20 = *anon3 - 1;
				*anon3 = anon20;
				uint64_t anon21 = phi_in12 + 4;
				phi_in19 = anon21;
				phi_in12 = anon21;
				phi_in13 = anon20;
				phi_in15 = *anon3;
				phi_in16 = anon20;
				if (*anon3 == 0)
				{
					break;
				}
			}
		}
		anon22 = anon9 - 2;
		*(uint32_t*)(arg1 - 68) = anon22;
		*anon3 = anon22;
		phi_in17 = anon14;
	}
	if (anon22 != 0 || anon9 == 0)
	{
		uint32_t anon28;
		do
		{
			anon23 = (uint32_t*)0x601dec;
			uint32_t anon25 = rand();
			uint64_t anon24 = ((__zext uint64_t)(anon25 > 4294967295 ? anon25 : anon25 + 255) << 32 >> 40) % (__sext int64_t)phi_in17;
			*anon23 = (uint32_t)anon24;
			anon26 = (uint32_t*)0x601e08;
			uint32_t* anon27 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon26 = *anon27;
			*anon27 = *(uint32_t*)((anon24 << 32 >> 30) + arg4);
			*(uint32_t*)((anon24 << 32 >> 30) + arg4) = *anon26;
			anon28 = *anon3 - 1;
			*anon3 = anon28;
			phi_in17 = *anon3;
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
	uint64_t phi_in33 = arg2;
	uint32_t phi_in34 = 0;
	do
	{
		uint32_t phi35 = phi_in31;
		*anon30 = phi_in32;
		anon36 = anon29 >> 32;
		if ((uint32_t)(anon36 * anon36) > phi_in34)
		{
			uint32_t anon37 = *anon6 * *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4);
			*(uint32_t*)(*anon30 + ((__sext int64_t)phi_in34 << 2)) = anon37;
			uint32_t anon38 = anon37 + 1;
			*anon3 = anon38;
			uint32_t anon39 = phi35 + ((uint32_t)((__sext int64_t)anon38 % (phi_in33 << 32 >> 32)) == 0 ? 2 : 1);
			*anon23 = anon39;
			phi_in31 = anon39;
			anon41 = arg5 << 32 >> 30;
			uint64_t anon40 = *anon30 + ((uint32_t)((__sext int64_t)anon38 % (phi_in33 << 32 >> 32)) == 0 ? anon41 : 0);
			phi_in32 = anon40;
			uint64_t anon42 = arg2 & 0xffffffff;
			phi_in33 = anon42;
			phi_in34 = anon38;
			if (anon39 >= anon9)
			{
				uint32_t anon43 = anon39 - anon9;
				*anon23 = anon43;
				phi_in31 = anon43;
				phi_in32 = anon40;
				phi_in33 = anon42;
				phi_in34 = anon38;
			}
		}
	}
	while ((uint32_t)(anon36 * anon36) > phi_in34);
	*anon3 = *(uint32_t*)(arg1 - 68);
	if (*(uint32_t*)(arg1 - 68) != 0)
	{
		uint32_t anon48;
		uint64_t phi_in44 = anon5 & 0xffffffff;
		do
		{
			uint32_t anon46 = rand();
			uint64_t anon45 = ((__zext uint64_t)(anon46 > 4294967295 ? anon46 : anon46 + 255) << 32 >> 40) % (phi_in44 << 32 >> 32);
			*anon23 = (uint32_t)anon45;
			uint32_t* anon47 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon26 = *anon47;
			*anon47 = *(uint32_t*)((anon45 << 32 >> 30) + arg4);
			*(uint32_t*)((anon45 << 32 >> 30) + arg4) = *anon26;
			anon48 = *anon3 - 1;
			*anon3 = anon48;
			if (anon48 != 0)
			{
				phi_in44 = (__zext uint64_t)*anon3;
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
			uint64_t phi_in58 = *anon30;
			*anon23 = anon56;
			if ((uint32_t)((__sext int64_t)anon57 % anon36) == 0)
			{
				phi_in58 = *anon30 + anon41;
			}
			phi_in49 = *anon23;
			phi_in50 = phi_in58;
			phi_in51 = anon57;
			if (*anon23 >= anon9)
			{
				uint32_t anon59 = *anon23 - anon9;
				*anon23 = anon59;
				phi_in49 = anon59;
				phi_in50 = phi_in58;
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
		uint64_t phi_in3 = arg2 & 0xffffffff;
		do
		{
			uint32_t anon5 = rand();
			uint64_t anon4 = ((__zext uint64_t)(anon5 > 4294967295 ? anon5 : anon5 + 255) << 32 >> 40) % (phi_in3 << 32 >> 32);
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
				phi_in3 = (__zext uint64_t)*anon1;
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
