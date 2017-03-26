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
	if (anon1 < 2 || anon2 != 1 && anon1 >= 2)
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
	if (anon4 == null || anon4 != null && anon5 == null)
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
		uint64_t anon35;
		uint32_t phi_in20 = anon19;
		uint64_t phi_in21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi_in23 = phi_in20;
			uint64_t phi_in24 = phi_in21;
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon26 = anon9 - 1;
			*anon25 = anon26;
			phi27 = phi_in23;
			uint64_t phi28 = phi_in24;
			uint32_t phi29 = anon26;
			uint32_t phi30 = phi_in23;
			uint64_t phi31 = phi_in24;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi31 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon15 & phi30 ^ (phi30 >> 31) + phi30 >> 1) << 2) + arg3);
					uint32_t anon32 = *anon25 - 1;
					*anon25 = anon32;
					phi27 = *anon8;
					uint64_t anon33 = phi31 + 4;
					phi28 = anon33;
					phi29 = anon32;
					phi30 = *anon8;
					phi31 = anon33;
				}
				while (*anon25 != 0);
			}
			uint32_t anon34 = phi27 - 1;
			*anon8 = anon34;
			phi_in20 = anon34;
			anon35 = phi28 + (arg4 << 32 >> 30);
			phi_in21 = anon35;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi27 != 0);
		*anon7 = anon35;
	}
	uint32_t anon37 = rand();
	uint32_t anon36 = (uint32_t)(((__zext uint64_t)(anon37 > 4294967295 ? anon37 : anon37 + 255) << 32 >> 40) % anon4);
	*anon1 = anon36;
	*anon5 = 3 - anon36;
	uint32_t anon38 = rand();
	*anon7 = arg2;
	*anon15 = 3 - *anon15;
	uint32_t anon39 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon39;
	uint64_t anon42 = (__zext uint64_t)anon38;
	uint64_t anon41 = (anon38 > 4294967295 ? anon42 : anon42 + 255) >> 31 & 1;
	uint32_t anon40 = *(uint32_t*)(((__zext uint64_t)(((anon38 > 4294967295 ? anon38 : anon38 + 255) & 0x100) != 0 ^ anon41 != 0) - anon41 << 2) + arg3) ^ 1;
	*anon10 = anon40;
	*anon14 = 3 - anon40;
	if (anon9 != 0)
	{
		uint64_t anon52;
		uint32_t phi_in43 = anon39;
		uint64_t phi44 = arg2;
		do
		{
			uint64_t anon50;
			uint64_t phi45 = phi44;
			*anon25 = anon39;
			uint32_t phi46 = anon39;
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
			phi_in43 = anon51;
			anon52 = anon50 + (arg4 << 32 >> 30);
			phi44 = anon52;
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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon27;
	uint64_t phi86;
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
	if (anon1 != 4 && anon1 != 0 || anon1 == 4)
	{
		uint64_t anon35;
		uint64_t anon38;
		uint32_t phi39;
		uint32_t anon44;
		uint64_t phi25 = arg3;
		do
		{
			uint64_t phi_in26 = phi25;
			anon27 = (uint32_t*)0x601dec;
			uint32_t anon29 = (uint32_t)anon12;
			uint32_t anon28 = anon29 - 1;
			*anon27 = anon28;
			uint64_t phi30 = phi_in26;
			uint64_t phi31 = phi_in26;
			uint32_t phi32 = anon28;
			if (anon29 != 0)
			{
				do
				{
					uint64_t phi33 = 3;
					if (anon1 > phi32)
					{
						uint32_t* anon34 = (uint32_t*)phi31;
						*anon34 = *anon34 + (phi15 * phi15 << 1);
						phi33 = ((__zext uint64_t)(anon1 <= *anon27) << 2) + 4294967295 & 0xffffffff;
					}
					anon35 = phi11 & 0xffffffff;
					*(uint32_t*)(phi31 + (anon35 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi33) + *(uint32_t*)phi31;
					uint32_t anon36 = *anon27 - 1;
					*anon27 = anon36;
					uint64_t anon37 = phi31 + 4;
					phi30 = anon37;
					phi31 = anon37;
					phi32 = anon36;
				}
				while (*anon27 != 0);
			}
			phi14 = phi14 - 1;
			anon38 = phi30 + (anon8 >> 30);
			phi25 = anon38;
		}
		while (phi14 != 256);
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
			uint32_t anon55;
			uint32_t anon56;
			uint32_t phi50 = *anon43;
			uint32_t anon51 = phi10 - phi39;
			if (anon51 >= 3)
			{
				uint32_t anon54;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon43 = anon44;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi52 = 0;
				do
				{
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon53 = phi52 + 1;
					phi52 = anon53;
					anon55 = anon40 - phi39;
					anon54 = (uint32_t)(((__zext uint64_t)anon55 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon53 < anon54);
				phi22 = phi10;
				phi23 = anon35;
				anon56 = anon54 << 2;
				phi50 = *anon43 - anon56;
			}
			if (anon55 != anon56 && anon51 >= 3 || anon51 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi50 << 2) + arg4) = (__zext uint32_t)(anon44 > phi50);
				phi22 = phi10;
				phi23 = anon35;
				if (phi50 != 0)
				{
					uint32_t anon57 = phi50 - 1;
					*(uint32_t*)(((__zext uint64_t)anon57 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon57);
					phi22 = phi10;
					phi23 = anon35;
					if (anon57 != 0)
					{
						uint32_t anon58 = phi50 - 2;
						*(uint32_t*)(((__sext int64_t)anon58 << 2) + arg4) = (__zext uint32_t)(anon44 > anon58);
						phi22 = phi10;
						phi23 = anon35;
					}
				}
			}
		}
	}
	*anon27 = phi22;
	uint64_t* anon59 = (uint64_t*)0x601df8;
	*anon59 = arg3;
	uint64_t anon60 = (anon13 >> 30) + arg3;
	if (anon60 > arg3)
	{
		uint32_t phi_in61;
		uint64_t anon148;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon62 = anon2 + 1;
		phi_in61 = (uint32_t)(anon62 + (anon62 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in63 = arg3;
		do
		{
			uint32_t anon130;
			*anon9 = phi_in63;
			uint64_t phi64 = phi_in63;
			if (anon1 != 0)
			{
				uint64_t phi68;
				uint64_t phi74;
				uint64_t anon124;
				uint32_t phi65 = phi_in61;
				uint32_t phi66 = phi_in61;
				uint64_t phi67 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon27) << 2) - 4;
				int64_t anon70 = (__sext int64_t)*anon27 << 2;
				int64_t anon69 = (anon70 & 0xc) + arg4;
				phi68 = anon69;
				uint64_t phi_in71 = 0;
				uint64_t phi_in72 = phi_in63;
				uint32_t phi73 = 0;
				do
				{
					uint32_t anon85;
					int64_t anon87;
					int64_t anon88;
					uint32_t anon89;
					int64_t anon93;
					uint32_t phi102;
					uint32_t phi103;
					uint32_t anon106;
					uint64_t phi116;
					uint32_t phi120;
					uint64_t anon122;
					phi74 = phi_in71;
					uint32_t* anon75 = (uint32_t*)0x601e00;
					*anon75 = *anon27;
					uint64_t phi76 = phi_in72;
					uint32_t phi77 = anon1;
					if (*anon27 != 0)
					{
						uint32_t anon82;
						do
						{
							uint32_t anon79 = rand();
							uint64_t anon78 = ((__zext uint64_t)(anon79 > 4294967295 ? anon79 : anon79 + 255) << 32 >> 40) % (__sext int64_t)phi77;
							*anon27 = (uint32_t)anon78;
							uint32_t* anon80 = (uint32_t*)0x601e08;
							uint32_t* anon81 = (uint32_t*)(((__sext int64_t)*anon75 << 2) + arg4);
							*anon80 = *anon81;
							*anon81 = *(uint32_t*)((anon78 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon80;
							anon82 = *anon75 - 1;
							*anon75 = anon82;
							phi77 = *anon75;
						}
						while (anon82 != 0);
						phi76 = *anon9;
					}
					uint64_t phi_in83 = phi76;
					uint32_t* anon84 = (uint32_t*)phi67;
					if (*anon84 == 0)
					{
						anon85 = anon1 - 1;
						*anon27 = anon85;
						anon88 = anon2 << 32 >> 30;
						anon87 = anon88 + arg4;
						phi86 = anon87;
						anon89 = *anon27 - phi73;
						if (phi65 > anon89)
						{
							uint64_t anon90;
							do
							{
								*anon27 = *anon27 - 1;
								anon90 = phi86 - 4;
								phi86 = anon90;
							}
							while (*(uint32_t*)anon90 == 0);
							*anon84 = 1;
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
							phi65 = phi65 - 1;
						}
					}
					else 
					{
						uint64_t phi_in92;
						uint32_t phi91 = anon85;
						anon93 = anon88 - 4 + arg4;
						phi_in92 = anon93;
						if (phi65 == 0)
						{
							uint32_t* anon95;
							do
							{
								*anon27 = phi91;
								uint64_t phi94 = phi_in92;
								anon95 = (uint32_t*)phi94;
								if (*anon95 != 0)
								{
									phi91 = *anon27 - 1;
									phi_in92 = phi94 - 4;
								}
							}
							while (*anon95 != 0);
							*anon95 = 1;
							*anon84 = 0;
						}
						else 
						{
							phi65 = phi65 - 1;
						}
					}
					uint64_t anon97 = phi68 & 0xffffffff00000000 | phi68 & 0xffffffff;
					uint32_t* anon96 = (uint32_t*)anon97;
					if (*anon96 == 0)
					{
						uint64_t phi98;
						bool anon104;
						uint64_t anon99 = (__zext uint64_t)anon89;
						phi98 = anon99;
						uint32_t phi_in100 = anon85;
						uint64_t phi101 = anon87;
						if (phi66 <= anon89)
						{
							phi102 = phi65;
							phi103 = phi66;
							anon104 = anon1 != 3 | phi66 == 0;
							if (!anon104)
							{
								phi98 = anon99;
								phi_in100 = anon85;
								phi101 = anon87;
								phi102 = phi65;
								phi103 = phi66;
							}
						}
						anon106 = phi73 + anon85 - *anon27;
						bool anon105 = phi65 == 2 | anon89 == anon106;
						if (!anon104 && phi66 <= anon89 && anon105 || phi66 > anon89)
						{
							bool anon107;
							do
							{
								*anon27 = phi_in100;
								uint64_t anon108 = phi101 - 4;
								anon107 = *anon27 == anon106 | *(uint32_t*)anon108 == 0;
								if (anon107)
								{
									phi98 = phi98 & 0xffffffffffffff00 | (__zext uint64_t)(*anon27 == anon106);
									phi_in100 = *anon27 - 1;
									phi101 = anon108;
								}
							}
							while (anon107);
							*anon96 = 1;
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
							phi102 = phi65 - (__zext uint32_t)(anon89 == anon106);
							phi103 = phi66 - 1;
						}
					}
					else 
					{
						uint32_t phi109 = anon85;
						uint64_t phi110 = anon93;
						if (phi66 == 0)
						{
							bool anon111;
							uint32_t* anon112;
							do
							{
								*anon27 = phi109;
								phi109 = *anon27 - 1;
								phi110 = phi110 - 4;
								anon112 = (uint32_t*)phi110;
								anon111 = *anon112 != 0 | *anon27 == anon106;
							}
							while (anon111);
							*anon112 = 1;
							*anon96 = 0;
							phi102 = phi65;
							phi103 = phi66;
						}
						else 
						{
							phi102 = phi65;
							phi103 = phi66 - 1;
						}
					}
					uint64_t* anon113 = (uint64_t*)0x601df0;
					*anon113 = arg4;
					uint32_t phi114 = *anon27;
					uint64_t phi115 = arg4;
					do
					{
						phi116 = phi_in83;
						uint32_t phi_in117 = phi114;
						if (*(uint32_t*)phi115 != 0)
						{
							uint32_t* anon118 = (uint32_t*)phi116;
							uint32_t* anon119 = (uint32_t*)(phi116 + (phi23 << 32 >> 30));
							*anon118 = *anon119;
							*anon119 = *anon118;
							phi_in117 = *anon27;
						}
						phi120 = phi_in117;
						uint32_t anon121 = phi120 - 1;
						*anon27 = anon121;
						phi_in83 = phi116 + 4;
						phi114 = anon121;
						anon122 = phi115 + 4;
						phi115 = anon122;
					}
					while (phi120 != 0);
					*anon113 = anon122;
					uint64_t anon123 = phi116 + 4;
					*anon9 = anon123;
					anon124 = (__zext uint64_t)*anon27;
					if (phi74 != anon124)
					{
						phi65 = phi102;
						phi66 = phi103;
						phi67 = phi67 + 4;
						phi68 = anon97 - 4;
						uint64_t anon125 = phi74 + 1;
						phi_in71 = anon125;
						phi_in72 = anon123;
						phi73 = (uint32_t)anon125;
					}
				}
				while (phi74 != anon124);
				uint32_t phi_in126 = *anon27;
				uint32_t anon128 = *anon27 + 1;
				uint32_t anon129 = (uint32_t)(anon70 + 4 + arg4 >> 2) & 3;
				uint32_t anon127 = anon128 < 6 ? anon128 : anon128 < anon129 ? anon128 : anon129;
				if (anon127 != 0)
				{
					uint32_t phi133;
					int64_t anon132 = anon3 >> 32;
					int64_t anon131 = anon132 & 1;
					anon130 = (uint32_t)(anon131 + anon2 << 32 >> 33) + (uint32_t)anon131 - ((uint32_t)(anon2 + anon132) & 1);
					*(uint32_t*)anon69 = (__zext uint32_t)(*anon27 < anon130);
					uint32_t anon134 = *anon27 - 1;
					phi133 = anon134;
					if (anon127 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon134 << 32 >> 30) + arg4) = (__zext uint32_t)(anon134 < anon130);
						uint32_t anon135 = *anon27 - 2;
						phi133 = anon135;
						if (anon127 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon135 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon135);
							uint32_t anon136 = *anon27 - 3;
							phi133 = anon136;
							if (anon127 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon136 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon136);
								uint32_t anon137 = *anon27 - 4;
								phi133 = anon137;
								if (anon127 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon137 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon137);
									phi133 = *anon27 - 5;
								}
							}
						}
					}
					uint32_t phi_in138 = phi133;
					phi_in126 = phi_in138;
				}
				if (anon127 == 0 || anon128 != anon127 && anon127 != 0)
				{
					uint32_t anon144;
					uint32_t anon145;
					uint32_t phi139 = phi_in126;
					uint32_t anon140 = *anon27 - anon127;
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
							anon144 = anon128 - anon127;
							anon143 = (uint32_t)(((__zext uint64_t)anon144 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon142 < anon143)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi141 = anon142;
							}
						}
						while (anon142 < anon143);
						anon145 = anon143 << 2;
						phi139 = phi_in126 - anon145;
					}
					if (anon140 < 3 || anon145 != anon144 && anon140 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi139 << 2) + arg4) = (__zext uint32_t)(phi139 < anon130);
						if (phi139 != 0)
						{
							uint32_t anon146 = phi139 - 1;
							*(uint32_t*)(((__zext uint64_t)anon146 << 32 >> 30) + arg4) = (__zext uint32_t)(anon130 > anon146);
							if (anon146 != 0)
							{
								uint32_t anon147 = phi139 - 2;
								*(uint32_t*)(((__sext int64_t)anon147 << 2) + arg4) = (__zext uint32_t)(anon147 < anon130);
							}
						}
					}
				}
				phi64 = *anon59;
			}
			anon148 = phi64 + *(uint64_t*)(arg1 - 168);
			*anon59 = anon148;
			phi_in61 = anon130;
			phi_in63 = anon148;
		}
		while (anon148 < anon60);
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
	uint64_t anon35;
	uint64_t anon40;
	uint32_t phi51;
	uint32_t anon52;
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
			if (phi13 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon3 = anon18;
				*anon2 = phi12;
				phi13 = anon18;
				if (phi13 == 0)
				{
					break;
				}
			}
			if (phi13 != phi16 || phi13 != 0 && phi13 == phi16)
			{
				*(uint32_t*)phi12 = phi13;
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
	uint64_t phi32 = arg2;
	uint32_t phi33 = 0;
	do
	{
		uint32_t phi34 = phi_in30;
		*anon29 = phi_in31;
		anon35 = anon28 >> 32;
		if ((uint32_t)(anon35 * anon35) > phi33)
		{
			uint32_t anon36 = *anon6 * *(uint32_t*)(((__sext int64_t)phi34 << 2) + arg4);
			*(uint32_t*)(*anon29 + ((__sext int64_t)phi33 << 2)) = anon36;
			uint32_t anon37 = anon36 + 1;
			*anon3 = anon37;
			uint32_t anon38 = phi34 + ((uint32_t)((__sext int64_t)anon37 % (phi32 << 32 >> 32)) == 0 ? 2 : 1);
			*anon22 = anon38;
			phi_in30 = anon38;
			anon40 = arg5 << 32 >> 30;
			uint64_t anon39 = *anon29 + ((uint32_t)((__sext int64_t)anon37 % (phi32 << 32 >> 32)) == 0 ? anon40 : 0);
			phi_in31 = anon39;
			uint64_t anon41 = arg2 & 0xffffffff;
			phi32 = anon41;
			phi33 = anon37;
			if (anon38 >= anon9)
			{
				uint32_t anon42 = anon38 - anon9;
				*anon22 = anon42;
				phi_in30 = anon42;
				phi_in31 = anon39;
				phi32 = anon41;
				phi33 = anon37;
			}
		}
	}
	while ((uint32_t)(anon35 * anon35) > phi33);
	*anon3 = *(uint32_t*)(arg1 - 68);
	if (*(uint32_t*)(arg1 - 68) != 0)
	{
		uint32_t anon47;
		uint64_t phi43 = anon5 & 0xffffffff;
		do
		{
			uint32_t anon45 = rand();
			uint64_t anon44 = ((__zext uint64_t)(anon45 > 4294967295 ? anon45 : anon45 + 255) << 32 >> 40) % (phi43 << 32 >> 32);
			*anon22 = (uint32_t)anon44;
			uint32_t* anon46 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon25 = *anon46;
			*anon46 = *(uint32_t*)((anon44 << 32 >> 30) + arg4);
			*(uint32_t*)((anon44 << 32 >> 30) + arg4) = *anon25;
			anon47 = *anon3 - 1;
			*anon3 = anon47;
			if (anon47 != 0)
			{
				phi43 = (__zext uint64_t)*anon3;
			}
		}
		while (anon47 != 0);
	}
	*anon3 = 0;
	*anon22 = anon4;
	*anon29 = arg3;
	*anon6 = anon9 + 1 - *anon6;
	uint32_t phi_in48 = anon4;
	uint64_t phi_in49 = arg3;
	uint32_t phi_in50 = 0;
	do
	{
		*anon22 = phi_in48;
		*anon29 = phi_in49;
		phi51 = phi_in50;
		anon52 = (uint32_t)anon35;
		if (anon52 * anon52 > phi51)
		{
			uint32_t* anon53 = (uint32_t*)(*anon29 + ((__sext int64_t)phi51 << 2));
			uint32_t anon54 = *anon53 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4);
			*anon53 = anon54;
			uint32_t anon55 = *anon22 + 1;
			*anon22 = anon55;
			uint32_t anon56 = anon54 + 1;
			*anon3 = anon56;
			phi_in49 = *anon29;
			phi_in48 = anon55;
			if ((uint32_t)((__sext int64_t)anon56 % anon35) == 0)
			{
				phi_in49 = *anon29 + anon40;
				phi_in48 = *anon22;
			}
			phi_in50 = anon56;
			if (phi_in48 >= anon9)
			{
				uint32_t anon57 = phi_in48 - anon9;
				*anon22 = anon57;
				phi_in48 = anon57;
				phi_in50 = anon56;
			}
		}
	}
	while (anon52 * anon52 > phi51);
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
