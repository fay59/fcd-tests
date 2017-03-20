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
	uint32_t* anon25;
	uint32_t anon1 = rand();
	uint32_t* anon2 = (uint32_t*)arg3;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint32_t anon3 = (uint32_t)(((__zext uint64_t)(anon1 > 4294967295 ? anon1 : anon1 + 255) << 32 >> 40) % anon4);
	*anon2 = anon3;
	uint32_t* anon5 = (uint32_t*)(arg3 + 4);
	*anon5 = 3 - anon3;
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
	uint32_t anon15 = rand();
	uint32_t* anon16 = (uint32_t*)0x601e04;
	uint64_t anon18 = (__zext uint64_t)anon15;
	uint32_t anon17 = (uint32_t)((anon15 > 4294967295 ? anon18 : anon18 + 255) >> 31);
	*anon16 = ((((anon15 > 4294967295 ? anon15 : anon15 + 255) >> 8) + anon17 & 1) - (anon17 & 1)) * 3;
	uint32_t anon19 = *anon8 - 1;
	*anon8 = anon19;
	if (*anon8 != 0)
	{
		uint32_t phi27;
		uint64_t anon35;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi_in23 = phi20;
			uint64_t phi_in24 = phi21;
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
					*(uint32_t*)phi31 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi30 ^ (phi30 >> 31) + phi30 >> 1) << 2) + arg3);
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
			phi20 = anon34;
			anon35 = phi28 + (arg4 << 32 >> 30);
			phi21 = anon35;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi27 != 0);
		*anon7 = anon35;
	}
	uint32_t anon36 = rand();
	uint32_t anon37 = (uint32_t)(((__zext uint64_t)(anon36 > 4294967295 ? anon36 : anon36 + 255) << 32 >> 40) % anon4);
	*anon2 = anon37;
	*anon5 = 3 - anon37;
	uint32_t anon38 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint32_t anon39 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon39;
	uint64_t anon42 = (__zext uint64_t)anon38;
	uint64_t anon41 = (anon38 > 4294967295 ? anon42 : anon42 + 255) >> 31 & 1;
	uint32_t anon40 = *(uint32_t*)(((__zext uint64_t)(((anon38 > 4294967295 ? anon38 : anon38 + 255) & 0x100) != 0 ^ anon41 != 0) - anon41 << 2) + arg3) ^ 1;
	*anon10 = anon40;
	*anon14 = 3 - anon40;
	if (anon9 != 0)
	{
		uint64_t anon53;
		uint32_t phi43 = anon39;
		uint64_t phi44 = arg2;
		do
		{
			uint64_t anon51;
			uint32_t phi45 = phi43;
			uint64_t phi_in46 = phi44;
			*anon25 = anon39;
			uint32_t phi47 = anon39;
			do
			{
				uint64_t phi48 = phi_in46;
				uint32_t* anon49 = (uint32_t*)phi48;
				*anon49 = *anon49 + (*(uint32_t*)(((__sext int64_t)(phi47 ^ (phi45 >> 31) + phi45 >> 1 ^ *anon16 & phi45) << 2) + arg3) << 2);
				uint32_t anon50 = *anon25 - 1;
				*anon25 = anon50;
				anon51 = phi48 + 4;
				phi_in46 = anon51;
				phi47 = anon50;
				phi45 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon52 = *anon8 - 1;
			*anon8 = anon52;
			phi43 = anon52;
			anon53 = anon51 + (arg4 << 32 >> 30);
			phi44 = anon53;
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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon29;
	uint64_t phi_in91;
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
		uint32_t phi27;
		uint64_t anon37;
		uint64_t anon40;
		uint32_t phi41;
		uint32_t anon46;
		phi22 = phi10;
		uint32_t phi_in25 = phi14;
		uint64_t phi26 = arg3;
		do
		{
			phi27 = phi_in25;
			uint64_t phi_in28 = phi26;
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
			phi_in25 = phi27 - 1;
			anon40 = phi32 + (anon8 >> 30);
			phi26 = anon40;
		}
		while (phi27 != 256);
		*anon9 = anon40;
		uint32_t anon42 = phi22 + 1;
		int64_t anon44 = (__sext int64_t)phi22 << 2;
		uint32_t anon43 = (uint32_t)(anon44 + 4 + arg4 >> 2) & 3;
		phi41 = anon42 < anon43 ? anon42 : anon43;
		if (phi22 == 4294967295 || phi22 == 4 || phi22 == 3 || phi22 == 2 || phi22 == 1 || phi22 == 0)
		{
			phi41 = anon42;
		}
		uint32_t phi45 = phi22;
		if (phi41 != 0)
		{
			uint32_t phi_in47;
			anon46 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon44 + arg4) = (__zext uint32_t)(phi22 < anon46);
			uint32_t anon48 = phi22 - 1;
			phi_in47 = anon48;
			if (phi41 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon48);
				uint32_t anon49 = phi22 - 2;
				phi_in47 = anon49;
				if (phi41 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon49 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon49);
					uint32_t anon50 = phi22 - 3;
					phi_in47 = anon50;
					if (phi41 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon50 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon50);
						uint32_t anon51 = phi22 - 4;
						phi_in47 = anon51;
						if (phi41 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon51 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon51);
							phi_in47 = phi22 - 5;
						}
					}
				}
			}
			phi23 = anon37;
			phi45 = phi_in47;
		}
		if (phi41 == 0 || anon42 != phi41 && phi41 != 0)
		{
			uint32_t anon59;
			uint32_t anon60;
			uint32_t* anon52 = (uint32_t*)(arg1 - 240);
			*anon52 = phi45;
			uint32_t phi53 = *anon52;
			uint32_t anon54 = phi22 - phi41;
			if (anon54 >= 3)
			{
				uint32_t anon58;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon52 = anon46;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in55 = 0;
				do
				{
					uint32_t phi56 = phi_in55;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon57 = phi56 + 1;
					phi_in55 = anon57;
					anon59 = anon42 - phi41;
					anon58 = (uint32_t)(((__zext uint64_t)anon59 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon57 < anon58);
				phi23 = anon37;
				anon60 = anon58 << 2;
				phi53 = *anon52 - anon60;
			}
			if (anon59 != anon60 && anon54 >= 3 || anon54 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi53 << 2) + arg4) = (__zext uint32_t)(anon46 > phi53);
				phi23 = anon37;
				if (phi53 != 0)
				{
					uint32_t anon61 = phi53 - 1;
					*(uint32_t*)(((__zext uint64_t)anon61 << 32 >> 30) + arg4) = (__zext uint32_t)(anon46 > anon61);
					phi23 = anon37;
					if (anon61 != 0)
					{
						uint32_t anon62 = phi53 - 2;
						*(uint32_t*)(((__sext int64_t)anon62 << 2) + arg4) = (__zext uint32_t)(anon46 > anon62);
						phi23 = anon37;
					}
				}
			}
		}
	}
	*anon29 = phi22;
	uint64_t* anon63 = (uint64_t*)0x601df8;
	*anon63 = arg3;
	uint64_t anon64 = (anon13 >> 30) + arg3;
	if (anon64 > arg3)
	{
		uint32_t phi65;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon66 = anon2 + 1;
		phi65 = (uint32_t)(anon66 + (anon66 >> 31 & 1) << 32 >> 33);
		uint64_t phi67 = arg3;
		while (true)
		{
			uint64_t phi72;
			uint64_t phi_in76;
			uint64_t phi77;
			uint32_t phi78;
			uint64_t phi79;
			uint64_t anon104;
			uint32_t phi_in110;
			uint64_t anon132;
			uint32_t anon137;
			uint32_t phi68 = phi65;
			uint64_t phi_in69 = phi67;
			*anon9 = phi_in69;
			uint64_t phi70 = phi_in69;
			if (anon1 != 0)
			{
				uint32_t anon90;
				int64_t anon92;
				int64_t anon93;
				uint32_t phi94;
				uint32_t anon95;
				int64_t anon100;
				uint32_t phi109;
				uint32_t anon113;
				uint64_t phi125;
				uint32_t phi129;
				uint64_t anon131;
				uint32_t phi71 = phi68;
				phi72 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon29) << 2) - 4;
				int64_t anon75 = (__sext int64_t)*anon29 << 2;
				int64_t anon74 = (anon75 & 0xc) + arg4;
				phi73 = anon74;
				phi_in76 = 0;
				phi77 = phi_in69;
				phi78 = 0;
				phi79 = phi_in76;
				uint32_t* anon80 = (uint32_t*)0x601e00;
				*anon80 = *anon29;
				uint32_t phi81 = anon1;
				if (*anon29 != 0)
				{
					uint32_t anon86;
					do
					{
						uint32_t anon82 = rand();
						uint64_t anon83 = ((__zext uint64_t)(anon82 > 4294967295 ? anon82 : anon82 + 255) << 32 >> 40) % (__sext int64_t)phi81;
						*anon29 = (uint32_t)anon83;
						uint32_t* anon84 = (uint32_t*)0x601e08;
						uint32_t* anon85 = (uint32_t*)(((__sext int64_t)*anon80 << 2) + arg4);
						*anon84 = *anon85;
						*anon85 = *(uint32_t*)((anon83 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = *anon84;
						anon86 = *anon80 - 1;
						*anon80 = anon86;
						phi81 = *anon80;
					}
					while (anon86 != 0);
					phi77 = *anon9;
				}
				uint64_t phi_in87 = phi77;
				uint32_t* anon88 = (uint32_t*)phi72;
				if (*anon88 == 0)
				{
					uint32_t phi_in89;
					anon90 = anon1 - 1;
					phi_in89 = anon90;
					anon93 = anon2 << 32 >> 30;
					anon92 = anon93 + arg4;
					phi_in91 = anon92;
					phi94 = phi71;
					anon95 = *anon29 - phi78;
					if (phi71 > anon95)
					{
						uint64_t anon97;
						do
						{
							*anon29 = phi_in89;
							uint64_t phi96 = phi_in91;
							phi_in89 = *anon29 - 1;
							anon97 = phi96 - 4;
							phi_in91 = anon97;
						}
						while (*(uint32_t*)anon97 == 0);
						*anon88 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi94 = phi71 - 1;
					}
				}
				else 
				{
					uint64_t phi_in99;
					uint32_t phi98 = anon90;
					anon100 = anon93 - 4 + arg4;
					phi_in99 = anon100;
					if (phi71 == 0)
					{
						uint32_t* anon102;
						do
						{
							*anon29 = phi98;
							uint64_t phi101 = phi_in99;
							anon102 = (uint32_t*)phi101;
							if (*anon102 != 0)
							{
								phi98 = *anon29 - 1;
								phi_in99 = phi101 - 4;
							}
						}
						while (*anon102 != 0);
						*anon102 = 1;
						*anon88 = 0;
						phi94 = phi71;
					}
					else 
					{
						phi94 = phi71 - 1;
					}
				}
				anon104 = phi73 & 0xffffffff00000000 | phi73 & 0xffffffff;
				uint32_t* anon103 = (uint32_t*)anon104;
				if (*anon103 == 0)
				{
					uint64_t phi105;
					bool anon111;
					uint64_t anon106 = (__zext uint64_t)anon95;
					phi105 = anon106;
					uint32_t phi_in107 = anon90;
					uint64_t phi_in108 = anon92;
					if (phi68 <= anon95)
					{
						phi109 = phi94;
						phi_in110 = phi68;
						anon111 = anon1 != 3 | phi68 == 0;
						if (!anon111)
						{
							phi105 = anon106;
							phi_in107 = anon90;
							phi_in108 = anon92;
							phi109 = phi94;
							phi_in110 = phi68;
						}
					}
					anon113 = phi78 + anon90 - *anon29;
					bool anon112 = phi94 == 2 | anon95 == anon113;
					if (!anon111 && phi68 <= anon95 && anon112 || phi68 > anon95)
					{
						bool anon115;
						do
						{
							*anon29 = phi_in107;
							uint64_t phi114 = phi_in108;
							uint64_t anon116 = phi114 - 4;
							anon115 = *anon29 == anon113 | *(uint32_t*)anon116 == 0;
							if (anon115)
							{
								phi105 = phi105 & 0xffffffffffffff00 | (__zext uint64_t)(*anon29 == anon113);
								phi_in107 = *anon29 - 1;
								phi_in108 = anon116;
							}
						}
						while (anon115);
						*anon103 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi109 = phi94 - (__zext uint32_t)(anon95 == anon113);
						phi_in110 = phi68 - 1;
					}
				}
				else 
				{
					uint32_t phi_in117 = anon90;
					uint64_t phi_in118 = anon100;
					if (phi68 == 0)
					{
						bool anon120;
						uint32_t* anon121;
						do
						{
							*anon29 = phi_in117;
							uint64_t phi119 = phi_in118;
							phi_in117 = *anon29 - 1;
							phi_in118 = phi119 - 4;
							anon121 = (uint32_t*)phi119;
							anon120 = *anon121 != 0 | *anon29 == anon113;
						}
						while (anon120);
						*anon121 = 1;
						*anon103 = 0;
						phi109 = phi94;
						phi_in110 = phi68;
					}
					else 
					{
						phi109 = phi94;
						phi_in110 = phi68 - 1;
					}
				}
				phi71 = phi109;
				uint64_t* anon122 = (uint64_t*)0x601df0;
				*anon122 = arg4;
				uint32_t phi_in123 = *anon29;
				uint64_t phi_in124 = arg4;
				do
				{
					phi125 = phi_in87;
					uint64_t phi126 = phi_in124;
					if (*(uint32_t*)phi126 != 0)
					{
						uint32_t* anon127 = (uint32_t*)phi125;
						uint32_t* anon128 = (uint32_t*)(phi125 + (phi23 << 32 >> 30));
						*anon127 = *anon128;
						*anon128 = *anon127;
						phi_in123 = *anon29;
					}
					phi129 = phi_in123;
					uint32_t anon130 = phi129 - 1;
					*anon29 = anon130;
					phi_in87 = phi125 + 4;
					phi_in123 = anon130;
					anon131 = phi126 + 4;
					phi_in124 = anon131;
				}
				while (phi129 != 0);
				*anon122 = anon131;
				anon132 = phi125 + 4;
				*anon9 = anon132;
				uint32_t phi133 = *anon29;
				uint32_t anon135 = *anon29 + 1;
				uint32_t anon136 = (uint32_t)(anon75 + 4 + arg4 >> 2) & 3;
				uint32_t anon134 = anon135 < 6 ? anon135 : anon135 < anon136 ? anon135 : anon136;
				if (anon134 != 0)
				{
					uint32_t phi140;
					int64_t anon139 = anon3 >> 32;
					int64_t anon138 = anon139 & 1;
					anon137 = (uint32_t)(anon138 + anon2 << 32 >> 33) + (uint32_t)anon138 - ((uint32_t)(anon2 + anon139) & 1);
					*(uint32_t*)anon74 = (__zext uint32_t)(*anon29 < anon137);
					uint32_t anon141 = *anon29 - 1;
					phi140 = anon141;
					if (anon134 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon141 << 32 >> 30) + arg4) = (__zext uint32_t)(anon141 < anon137);
						uint32_t anon142 = *anon29 - 2;
						phi140 = anon142;
						if (anon134 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon142 << 32 >> 30) + arg4) = (__zext uint32_t)(anon137 > anon142);
							uint32_t anon143 = *anon29 - 3;
							phi140 = anon143;
							if (anon134 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon143 << 32 >> 30) + arg4) = (__zext uint32_t)(anon137 > anon143);
								uint32_t anon144 = *anon29 - 4;
								phi140 = anon144;
								if (anon134 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon144 << 32 >> 30) + arg4) = (__zext uint32_t)(anon137 > anon144);
									phi140 = *anon29 - 5;
								}
							}
						}
					}
					phi133 = phi140;
				}
				if (anon134 == 0 || anon135 != anon134 && anon134 != 0)
				{
					uint32_t anon151;
					uint32_t anon152;
					uint32_t phi145 = phi133;
					uint32_t anon146 = *anon29 - anon134;
					if (anon146 >= 3)
					{
						uint32_t anon149;
						uint32_t anon150;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in147 = 0;
						do
						{
							uint32_t phi148 = phi_in147;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon149 = phi148 + 1;
							anon151 = anon135 - anon134;
							anon150 = (uint32_t)(((__zext uint64_t)anon151 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon149 < anon150)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in147 = anon149;
							}
						}
						while (anon149 < anon150);
						anon152 = anon150 << 2;
						phi145 = phi133 - anon152;
					}
					if (anon146 < 3 || anon152 != anon151 && anon146 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi145 << 2) + arg4) = (__zext uint32_t)(phi145 < anon137);
						if (phi145 != 0)
						{
							uint32_t anon153 = phi145 - 1;
							*(uint32_t*)(((__zext uint64_t)anon153 << 32 >> 30) + arg4) = (__zext uint32_t)(anon137 > anon153);
							if (anon153 != 0)
							{
								uint32_t anon154 = phi145 - 2;
								*(uint32_t*)(((__sext int64_t)anon154 << 2) + arg4) = (__zext uint32_t)(anon154 < anon137);
							}
						}
					}
				}
				phi70 = *anon63;
			}
			uint64_t anon155 = phi70 + *(uint64_t*)(arg1 - 168);
			*anon63 = anon155;
			phi65 = anon137;
			phi67 = anon155;
			phi68 = phi_in110;
			phi72 = phi72 + 4;
			uint64_t phi73 = anon104 - 4;
			uint64_t anon156 = phi79 + 1;
			phi_in76 = anon156;
			phi77 = anon132;
			phi78 = (uint32_t)anon156;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi13;
	uint32_t phi17;
	uint32_t anon23;
	uint32_t* anon25;
	uint32_t* anon27;
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
		uint64_t phi20;
		while (true)
		{
			uint32_t phi18 = phi13;
			if (phi13 == phi16)
			{
				uint32_t anon19 = phi15 - 2;
				*anon3 = anon19;
				phi20 = phi12;
				phi18 = anon19;
				if (phi13 == 0)
				{
					break;
				}
			}
			if (phi13 != phi16 || phi13 != 0 && phi13 == phi16)
			{
				*(uint32_t*)phi12 = phi18;
				uint32_t anon21 = *anon3 - 1;
				*anon3 = anon21;
				uint64_t anon22 = phi12 + 4;
				phi20 = anon22;
				phi12 = anon22;
				phi13 = anon21;
				phi15 = *anon3;
				phi16 = anon21;
				if (*anon3 == 0)
				{
					break;
				}
			}
		}
		*anon2 = phi20;
		anon23 = anon9 - 2;
		*(uint32_t*)(arg1 - 68) = anon23;
		*anon3 = anon23;
		phi17 = anon14;
	}
	if (anon9 != 0 && anon23 != 0 || anon9 == 0)
	{
		uint32_t anon29;
		do
		{
			uint32_t anon24 = rand();
			anon25 = (uint32_t*)0x601dec;
			uint64_t anon26 = ((__zext uint64_t)(anon24 > 4294967295 ? anon24 : anon24 + 255) << 32 >> 40) % (__sext int64_t)phi17;
			*anon25 = (uint32_t)anon26;
			anon27 = (uint32_t*)0x601e08;
			uint32_t* anon28 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon27 = *anon28;
			*anon28 = *(uint32_t*)((anon26 << 32 >> 30) + arg4);
			*(uint32_t*)((anon26 << 32 >> 30) + arg4) = *anon27;
			anon29 = *anon3 - 1;
			*anon3 = anon29;
			phi17 = *anon3;
		}
		while (anon29 != 0);
	}
	uint64_t anon30 = arg2 << 32;
	*(uint32_t*)((anon30 >> 30) - 4 + arg4) = *anon10;
	*anon25 = 0;
	*anon3 = 0;
	uint64_t* anon31 = (uint64_t*)0x601e10;
	*anon31 = arg3;
	uint32_t phi_in32 = 0;
	uint64_t phi_in33 = arg3;
	uint64_t phi_in34 = arg2;
	uint32_t phi35 = 0;
	while (true)
	{
		uint64_t anon53;
		uint32_t phi36 = phi_in32;
		*anon31 = phi_in33;
		uint64_t phi37 = phi_in34;
		uint64_t anon38 = anon30 >> 32;
		if ((uint32_t)(anon38 * anon38) <= phi35)
		{
			uint64_t phi39;
			uint32_t phi47;
			uint32_t anon48;
			*anon3 = *(uint32_t*)(arg1 - 68);
			if (*(uint32_t*)(arg1 - 68) != 0)
			{
				phi39 = anon5 & 0xffffffff;
				uint32_t anon40 = rand();
				uint64_t anon41 = ((__zext uint64_t)(anon40 > 4294967295 ? anon40 : anon40 + 255) << 32 >> 40) % (phi39 << 32 >> 32);
				*anon25 = (uint32_t)anon41;
				uint32_t* anon42 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon27 = *anon42;
				*anon42 = *(uint32_t*)((anon41 << 32 >> 30) + arg4);
				*(uint32_t*)((anon41 << 32 >> 30) + arg4) = *anon27;
				uint32_t anon43 = *anon3 - 1;
				*anon3 = anon43;
			}
			*anon3 = 0;
			*anon25 = anon4;
			*anon31 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in44 = anon4;
			uint64_t phi_in45 = arg3;
			uint32_t phi_in46 = 0;
			do
			{
				*anon25 = phi_in44;
				*anon31 = phi_in45;
				phi47 = phi_in46;
				anon48 = (uint32_t)anon38;
				if (anon48 * anon48 > phi47)
				{
					uint32_t* anon49 = (uint32_t*)(*anon31 + ((__sext int64_t)phi47 << 2));
					uint32_t anon50 = *anon49 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon25 << 2) + arg4);
					*anon49 = anon50;
					uint32_t anon51 = *anon25 + 1;
					*anon25 = anon51;
					uint32_t anon52 = anon50 + 1;
					*anon3 = anon52;
					phi_in45 = *anon31;
					phi_in44 = anon51;
					if ((uint32_t)((__sext int64_t)anon52 % anon38) == 0)
					{
						anon53 = arg5 << 32 >> 30;
						phi_in45 = *anon31 + anon53;
						phi_in44 = *anon25;
					}
					phi_in46 = anon52;
					if (phi_in44 >= anon9)
					{
						uint32_t anon54 = phi_in44 - anon9;
						*anon25 = anon54;
						phi_in44 = anon54;
						phi_in46 = anon52;
					}
				}
			}
			while (anon48 * anon48 > phi47);
			phi39 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon55 = *anon6 * *(uint32_t*)(((__sext int64_t)phi36 << 2) + arg4);
		*(uint32_t*)(*anon31 + ((__sext int64_t)phi35 << 2)) = anon55;
		uint32_t anon56 = anon55 + 1;
		*anon3 = anon56;
		uint32_t anon57 = phi36 + ((uint32_t)((__sext int64_t)anon56 % (phi37 << 32 >> 32)) == 0 ? 2 : 1);
		*anon25 = anon57;
		phi_in32 = anon57;
		uint64_t anon58 = *anon31 + ((uint32_t)((__sext int64_t)anon56 % (phi37 << 32 >> 32)) == 0 ? anon53 : 0);
		phi_in33 = anon58;
		uint64_t anon59 = arg2 & 0xffffffff;
		phi_in34 = anon59;
		phi35 = anon56;
		if (anon57 >= anon9)
		{
			uint32_t anon60 = anon57 - anon9;
			*anon25 = anon60;
			phi_in32 = anon60;
			phi_in33 = anon58;
			phi_in34 = anon59;
			phi35 = anon56;
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
			uint32_t anon4 = rand();
			uint64_t anon5 = ((__zext uint64_t)(anon4 > 4294967295 ? anon4 : anon4 + 255) << 32 >> 40) % (phi3 << 32 >> 32);
			*(uint32_t*)0x601dec = (uint32_t)anon5;
			uint32_t* anon6 = (uint32_t*)0x601e08;
			uint32_t* anon7 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*anon6 = *anon7;
			uint32_t* anon8 = (uint32_t*)((anon5 << 32 >> 30) + arg1);
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
