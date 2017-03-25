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
		uint64_t anon33;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint64_t phi_in23 = phi21;
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon25 = anon9 - 1;
			*anon24 = anon25;
			uint64_t phi26 = phi_in23;
			uint32_t phi27 = anon25;
			uint32_t phi28 = phi20;
			uint64_t phi29 = phi_in23;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi27 ^ *anon15 & phi28 ^ (phi28 >> 31) + phi28 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon24 - 1;
					*anon24 = anon30;
					phi20 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi26 = anon31;
					phi27 = anon30;
					phi28 = *anon8;
					phi29 = anon31;
				}
				while (*anon24 != 0);
			}
			uint32_t anon32 = phi20 - 1;
			*anon8 = anon32;
			phi20 = anon32;
			anon33 = phi26 + (arg4 << 32 >> 30);
			phi21 = anon33;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi20 != 0);
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
		uint64_t anon50;
		uint32_t phi_in41 = anon37;
		uint64_t phi42 = arg2;
		do
		{
			uint64_t anon48;
			uint64_t phi43 = phi42;
			*anon24 = anon37;
			uint32_t phi44 = anon37;
			uint32_t phi45 = phi_in41;
			do
			{
				uint32_t* anon46 = (uint32_t*)phi43;
				*anon46 = *anon46 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi45 >> 31) + phi45 >> 1 ^ *anon15 & phi45) << 2) + arg3) << 2);
				uint32_t anon47 = *anon24 - 1;
				*anon24 = anon47;
				anon48 = phi43 + 4;
				phi43 = anon48;
				phi44 = anon47;
				phi45 = *anon8;
			}
			while (*anon24 != 0);
			uint32_t anon49 = *anon8 - 1;
			*anon8 = anon49;
			phi_in41 = anon49;
			anon50 = anon48 + (arg4 << 32 >> 30);
			phi42 = anon50;
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
	uint64_t phi85;
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
		uint64_t anon36;
		uint64_t anon39;
		uint32_t phi40;
		uint32_t anon45;
		uint32_t phi_in25 = phi14;
		uint32_t phi26 = phi_in25;
		uint64_t phi_in27 = arg3;
		do
		{
			uint64_t phi28 = phi_in27;
			anon29 = (uint32_t*)0x601dec;
			uint32_t anon31 = (uint32_t)anon12;
			uint32_t anon30 = anon31 - 1;
			*anon29 = anon30;
			uint64_t phi32 = phi28;
			uint32_t phi33 = anon30;
			if (anon31 != 0)
			{
				do
				{
					uint64_t phi34 = 3;
					if (anon1 > phi33)
					{
						uint32_t* anon35 = (uint32_t*)phi28;
						*anon35 = *anon35 + (phi15 * phi15 << 1);
						phi34 = ((__zext uint64_t)(anon1 <= *anon29) << 2) + 4294967295 & 0xffffffff;
					}
					anon36 = phi11 & 0xffffffff;
					*(uint32_t*)(phi28 + (anon36 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi34) + *(uint32_t*)phi28;
					uint32_t anon37 = *anon29 - 1;
					*anon29 = anon37;
					uint64_t anon38 = phi28 + 4;
					phi32 = anon38;
					phi28 = anon38;
					phi33 = anon37;
				}
				while (*anon29 != 0);
			}
			phi26 = phi26 - 1;
			anon39 = phi32 + (anon8 >> 30);
			phi_in27 = anon39;
		}
		while (phi26 != 256);
		*anon9 = anon39;
		uint32_t anon41 = phi10 + 1;
		int64_t anon43 = (__sext int64_t)phi10 << 2;
		uint32_t anon42 = (uint32_t)(anon43 + 4 + arg4 >> 2) & 3;
		phi40 = anon41 < anon42 ? anon41 : anon42;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi40 = anon41;
		}
		uint32_t phi44 = phi10;
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
			phi22 = phi10;
			phi23 = anon36;
			phi44 = phi_in46;
		}
		if (phi40 == 0 || anon41 != phi40 && phi40 != 0)
		{
			uint32_t anon56;
			uint32_t anon57;
			uint32_t* anon51 = (uint32_t*)(arg1 - 240);
			*anon51 = phi44;
			phi44 = *anon51;
			uint32_t anon52 = phi10 - phi40;
			if (anon52 >= 3)
			{
				uint32_t anon55;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon51 = anon45;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi53 = 0;
				do
				{
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon54 = phi53 + 1;
					phi53 = anon54;
					anon56 = anon41 - phi40;
					anon55 = (uint32_t)(((__zext uint64_t)anon56 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon54 < anon55);
				phi22 = phi10;
				phi23 = anon36;
				anon57 = anon55 << 2;
				phi44 = *anon51 - anon57;
			}
			if (anon56 != anon57 && anon52 >= 3 || anon52 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi44 << 2) + arg4) = (__zext uint32_t)(anon45 > phi44);
				phi22 = phi10;
				phi23 = anon36;
				if (phi44 != 0)
				{
					uint32_t anon58 = phi44 - 1;
					*(uint32_t*)(((__zext uint64_t)anon58 << 32 >> 30) + arg4) = (__zext uint32_t)(anon45 > anon58);
					phi22 = phi10;
					phi23 = anon36;
					if (anon58 != 0)
					{
						uint32_t anon59 = phi44 - 2;
						*(uint32_t*)(((__sext int64_t)anon59 << 2) + arg4) = (__zext uint32_t)(anon45 > anon59);
						phi22 = phi10;
						phi23 = anon36;
					}
				}
			}
		}
	}
	*anon29 = phi22;
	uint64_t* anon60 = (uint64_t*)0x601df8;
	*anon60 = arg3;
	uint64_t anon61 = (anon13 >> 30) + arg3;
	if (anon61 > arg3)
	{
		uint32_t phi62;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon63 = anon2 + 1;
		phi62 = (uint32_t)(anon63 + (anon63 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in64 = arg3;
		while (true)
		{
			uint64_t phi68;
			uint64_t phi72;
			uint32_t phi73;
			uint64_t anon97;
			uint64_t anon121;
			uint32_t anon126;
			uint32_t phi65 = phi62;
			*anon9 = phi_in64;
			uint64_t phi66 = phi_in64;
			if (anon1 != 0)
			{
				uint32_t anon84;
				int64_t anon86;
				int64_t anon87;
				uint32_t phi88;
				uint32_t anon89;
				int64_t anon93;
				uint32_t phi102;
				uint32_t anon105;
				uint64_t phi114;
				uint32_t phi118;
				uint64_t anon120;
				uint32_t phi67 = phi65;
				phi68 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon29) << 2) - 4;
				int64_t anon71 = (__sext int64_t)*anon29 << 2;
				int64_t anon70 = (anon71 & 0xc) + arg4;
				phi69 = anon70;
				phi72 = 0;
				phi73 = 0;
				uint32_t* anon74 = (uint32_t*)0x601e00;
				*anon74 = *anon29;
				uint64_t phi75 = phi_in64;
				uint32_t phi76 = anon1;
				if (*anon29 != 0)
				{
					uint32_t anon81;
					do
					{
						uint32_t anon78 = rand();
						uint64_t anon77 = ((__zext uint64_t)(anon78 > 4294967295 ? anon78 : anon78 + 255) << 32 >> 40) % (__sext int64_t)phi76;
						*anon29 = (uint32_t)anon77;
						uint32_t* anon79 = (uint32_t*)0x601e08;
						uint32_t* anon80 = (uint32_t*)(((__sext int64_t)*anon74 << 2) + arg4);
						*anon79 = *anon80;
						*anon80 = *(uint32_t*)((anon77 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = *anon79;
						anon81 = *anon74 - 1;
						*anon74 = anon81;
						phi76 = *anon74;
					}
					while (anon81 != 0);
					phi75 = *anon9;
				}
				uint64_t phi_in82 = phi75;
				uint32_t* anon83 = (uint32_t*)phi68;
				if (*anon83 == 0)
				{
					anon84 = anon1 - 1;
					*anon29 = anon84;
					anon87 = anon2 << 32 >> 30;
					anon86 = anon87 + arg4;
					phi85 = anon86;
					phi88 = phi65;
					anon89 = *anon29 - phi73;
					if (phi65 > anon89)
					{
						uint64_t anon90;
						do
						{
							*anon29 = *anon29 - 1;
							anon90 = phi85 - 4;
							phi85 = anon90;
						}
						while (*(uint32_t*)anon90 == 0);
						*anon83 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi88 = phi65 - 1;
					}
				}
				else 
				{
					uint64_t phi_in92;
					uint32_t phi91 = anon84;
					anon93 = anon87 - 4 + arg4;
					phi_in92 = anon93;
					if (phi65 == 0)
					{
						uint32_t* anon95;
						do
						{
							*anon29 = phi91;
							uint64_t phi94 = phi_in92;
							anon95 = (uint32_t*)phi94;
							if (*anon95 != 0)
							{
								phi91 = *anon29 - 1;
								phi_in92 = phi94 - 4;
							}
						}
						while (*anon95 != 0);
						*anon95 = 1;
						*anon83 = 0;
						phi88 = phi65;
					}
					else 
					{
						phi88 = phi65 - 1;
					}
				}
				anon97 = phi69 & 0xffffffff00000000 | phi69 & 0xffffffff;
				uint32_t* anon96 = (uint32_t*)anon97;
				if (*anon96 == 0)
				{
					uint64_t phi98;
					bool anon103;
					uint64_t anon99 = (__zext uint64_t)anon89;
					phi98 = anon99;
					uint32_t phi_in100 = anon84;
					uint64_t phi101 = anon86;
					if (phi67 <= anon89)
					{
						phi65 = phi88;
						phi102 = phi67;
						anon103 = anon1 != 3 | phi67 == 0;
						if (!anon103)
						{
							phi98 = anon99;
							phi_in100 = anon84;
							phi101 = anon86;
							phi65 = phi88;
							phi102 = phi67;
						}
					}
					anon105 = phi73 + anon84 - *anon29;
					bool anon104 = phi88 == 2 | anon89 == anon105;
					if (!anon103 && phi67 <= anon89 && anon104 || phi67 > anon89)
					{
						bool anon106;
						do
						{
							*anon29 = phi_in100;
							uint64_t anon107 = phi101 - 4;
							anon106 = *anon29 == anon105 | *(uint32_t*)anon107 == 0;
							if (anon106)
							{
								phi98 = phi98 & 0xffffffffffffff00 | (__zext uint64_t)(*anon29 == anon105);
								phi_in100 = *anon29 - 1;
								phi101 = anon107;
							}
						}
						while (anon106);
						*anon96 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi65 = phi88 - (__zext uint32_t)(anon89 == anon105);
						phi102 = phi67 - 1;
					}
				}
				else 
				{
					*anon29 = anon84;
					uint64_t phi108 = anon93;
					if (phi67 == 0)
					{
						bool anon109;
						uint32_t* anon110;
						do
						{
							*anon29 = *anon29 - 1;
							phi108 = phi108 - 4;
							anon110 = (uint32_t*)phi108;
							anon109 = *anon110 != 0 | *anon29 == anon105;
						}
						while (anon109);
						*anon110 = 1;
						*anon96 = 0;
						phi65 = phi88;
						phi102 = phi67;
					}
					else 
					{
						phi65 = phi88;
						phi102 = phi67 - 1;
					}
				}
				phi67 = phi102;
				uint64_t* anon111 = (uint64_t*)0x601df0;
				*anon111 = arg4;
				uint32_t phi112 = *anon29;
				uint64_t phi113 = arg4;
				do
				{
					phi114 = phi_in82;
					uint32_t phi_in115 = phi112;
					if (*(uint32_t*)phi113 != 0)
					{
						uint32_t* anon116 = (uint32_t*)phi114;
						uint32_t* anon117 = (uint32_t*)(phi114 + (phi23 << 32 >> 30));
						*anon116 = *anon117;
						*anon117 = *anon116;
						phi_in115 = *anon29;
					}
					phi118 = phi_in115;
					uint32_t anon119 = phi118 - 1;
					*anon29 = anon119;
					phi_in82 = phi114 + 4;
					phi112 = anon119;
					anon120 = phi113 + 4;
					phi113 = anon120;
				}
				while (phi118 != 0);
				*anon111 = anon120;
				anon121 = phi114 + 4;
				*anon9 = anon121;
				uint32_t phi122 = *anon29;
				uint32_t anon124 = *anon29 + 1;
				uint32_t anon125 = (uint32_t)(anon71 + 4 + arg4 >> 2) & 3;
				uint32_t anon123 = anon124 < 6 ? anon124 : anon124 < anon125 ? anon124 : anon125;
				if (anon123 != 0)
				{
					int64_t anon128 = anon3 >> 32;
					int64_t anon127 = anon128 & 1;
					anon126 = (uint32_t)(anon127 + anon2 << 32 >> 33) + (uint32_t)anon127 - ((uint32_t)(anon2 + anon128) & 1);
					*(uint32_t*)anon70 = (__zext uint32_t)(*anon29 < anon126);
					uint32_t anon129 = *anon29 - 1;
					phi122 = anon129;
					if (anon123 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon129 << 32 >> 30) + arg4) = (__zext uint32_t)(anon129 < anon126);
						uint32_t anon130 = *anon29 - 2;
						phi122 = anon130;
						if (anon123 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon130 << 32 >> 30) + arg4) = (__zext uint32_t)(anon126 > anon130);
							uint32_t anon131 = *anon29 - 3;
							phi122 = anon131;
							if (anon123 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon131 << 32 >> 30) + arg4) = (__zext uint32_t)(anon126 > anon131);
								uint32_t anon132 = *anon29 - 4;
								phi122 = anon132;
								if (anon123 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon132 << 32 >> 30) + arg4) = (__zext uint32_t)(anon126 > anon132);
									phi122 = *anon29 - 5;
								}
							}
						}
					}
				}
				if (anon123 == 0 || anon124 != anon123 && anon123 != 0)
				{
					uint32_t anon138;
					uint32_t anon139;
					uint32_t phi133 = phi122;
					uint32_t anon134 = *anon29 - anon123;
					if (anon134 >= 3)
					{
						uint32_t anon136;
						uint32_t anon137;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi135 = 0;
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
							anon136 = phi135 + 1;
							anon138 = anon124 - anon123;
							anon137 = (uint32_t)(((__zext uint64_t)anon138 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon136 < anon137)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi135 = anon136;
							}
						}
						while (anon136 < anon137);
						anon139 = anon137 << 2;
						phi133 = phi133 - anon139;
					}
					if (anon134 < 3 || anon139 != anon138 && anon134 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi133 << 2) + arg4) = (__zext uint32_t)(phi133 < anon126);
						if (phi133 != 0)
						{
							uint32_t anon140 = phi133 - 1;
							*(uint32_t*)(((__zext uint64_t)anon140 << 32 >> 30) + arg4) = (__zext uint32_t)(anon126 > anon140);
							if (anon140 != 0)
							{
								uint32_t anon141 = phi133 - 2;
								*(uint32_t*)(((__sext int64_t)anon141 << 2) + arg4) = (__zext uint32_t)(anon141 < anon126);
							}
						}
					}
				}
				phi66 = *anon60;
			}
			uint64_t anon142 = phi66 + *(uint64_t*)(arg1 - 168);
			*anon60 = anon142;
			phi62 = anon126;
			phi_in64 = anon142;
			phi68 = phi68 + 4;
			uint64_t phi69 = anon97 - 4;
			uint64_t anon143 = phi72 + 1;
			phi72 = anon143;
			phi_in64 = anon121;
			phi73 = (uint32_t)anon143;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi13;
	uint32_t phi17;
	uint32_t anon22;
	uint32_t* anon23;
	uint32_t* anon26;
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
			uint32_t phi18 = phi13;
			if (phi18 == phi16)
			{
				uint32_t anon19 = phi15 - 2;
				*anon3 = anon19;
				*anon2 = phi12;
				phi18 = anon19;
				if (phi18 == 0)
				{
					break;
				}
			}
			if (phi18 != phi16 || phi18 != 0 && phi18 == phi16)
			{
				*(uint32_t*)phi12 = phi18;
				uint32_t anon20 = *anon3 - 1;
				*anon3 = anon20;
				uint64_t anon21 = phi12 + 4;
				*anon2 = anon21;
				phi12 = anon21;
				phi13 = anon20;
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
	if (anon9 != 0 && anon22 != 0 || anon9 == 0)
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
	while (true)
	{
		uint64_t anon53;
		uint32_t phi35 = phi_in31;
		*anon30 = phi_in32;
		uint64_t anon36 = anon29 >> 32;
		if ((uint32_t)(anon36 * anon36) <= phi34)
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
				*anon23 = (uint32_t)anon38;
				uint32_t* anon40 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon26 = *anon40;
				*anon40 = *(uint32_t*)((anon38 << 32 >> 30) + arg4);
				*(uint32_t*)((anon38 << 32 >> 30) + arg4) = *anon26;
				uint32_t anon41 = *anon3 - 1;
				*anon3 = anon41;
			}
			*anon3 = 0;
			*anon23 = anon4;
			*anon30 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in42 = anon4;
			uint64_t phi_in43 = arg3;
			uint32_t phi_in44 = 0;
			do
			{
				*anon23 = phi_in42;
				*anon30 = phi_in43;
				phi45 = phi_in44;
				anon46 = (uint32_t)anon36;
				if (anon46 * anon46 > phi45)
				{
					uint32_t* anon47 = (uint32_t*)(*anon30 + ((__sext int64_t)phi45 << 2));
					uint32_t anon48 = *anon47 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon23 << 2) + arg4);
					*anon47 = anon48;
					uint32_t anon49 = *anon23 + 1;
					*anon23 = anon49;
					uint32_t anon50 = anon48 + 1;
					*anon3 = anon50;
					uint64_t phi51 = *anon30;
					uint32_t phi52 = anon49;
					if ((uint32_t)((__sext int64_t)anon50 % anon36) == 0)
					{
						anon53 = arg5 << 32 >> 30;
						phi51 = *anon30 + anon53;
						phi52 = *anon23;
					}
					phi_in42 = phi52;
					phi_in43 = phi51;
					phi_in44 = anon50;
					if (phi52 >= anon9)
					{
						uint32_t anon54 = phi52 - anon9;
						*anon23 = anon54;
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
		uint32_t anon55 = *anon6 * *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4);
		*(uint32_t*)(*anon30 + ((__sext int64_t)phi34 << 2)) = anon55;
		uint32_t anon56 = anon55 + 1;
		*anon3 = anon56;
		uint32_t anon57 = phi35 + ((uint32_t)((__sext int64_t)anon56 % (phi33 << 32 >> 32)) == 0 ? 2 : 1);
		*anon23 = anon57;
		phi_in31 = anon57;
		uint64_t anon58 = *anon30 + ((uint32_t)((__sext int64_t)anon56 % (phi33 << 32 >> 32)) == 0 ? anon53 : 0);
		phi_in32 = anon58;
		uint64_t anon59 = arg2 & 0xffffffff;
		phi33 = anon59;
		phi34 = anon56;
		if (anon57 >= anon9)
		{
			uint32_t anon60 = anon57 - anon9;
			*anon23 = anon60;
			phi_in31 = anon60;
			phi_in32 = anon58;
			phi33 = anon59;
			phi34 = anon56;
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
