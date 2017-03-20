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
		uint64_t anon34;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi23 = phi20;
			uint64_t phi_in24 = phi21;
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon26 = anon9 - 1;
			*anon25 = anon26;
			phi27 = phi23;
			uint64_t phi28 = phi_in24;
			uint32_t phi29 = anon26;
			uint64_t phi30 = phi_in24;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi30 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi23 ^ (phi23 >> 31) + phi23 >> 1) << 2) + arg3);
					uint32_t anon31 = *anon25 - 1;
					*anon25 = anon31;
					phi27 = *anon8;
					uint64_t anon32 = phi30 + 4;
					phi28 = anon32;
					phi29 = anon31;
					phi23 = *anon8;
					phi30 = anon32;
				}
				while (*anon25 != 0);
			}
			uint32_t anon33 = phi27 - 1;
			*anon8 = anon33;
			phi20 = anon33;
			anon34 = phi28 + (arg4 << 32 >> 30);
			phi21 = anon34;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi27 != 0);
		*anon7 = anon34;
	}
	uint32_t anon35 = rand();
	uint32_t anon36 = (uint32_t)(((__zext uint64_t)(anon35 > 4294967295 ? anon35 : anon35 + 255) << 32 >> 40) % anon4);
	*anon2 = anon36;
	*anon5 = 3 - anon36;
	uint32_t anon37 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint32_t anon38 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon38;
	uint64_t anon41 = (__zext uint64_t)anon37;
	uint64_t anon40 = (anon37 > 4294967295 ? anon41 : anon41 + 255) >> 31 & 1;
	uint32_t anon39 = *(uint32_t*)(((__zext uint64_t)(((anon37 > 4294967295 ? anon37 : anon37 + 255) & 0x100) != 0 ^ anon40 != 0) - anon40 << 2) + arg3) ^ 1;
	*anon10 = anon39;
	*anon14 = 3 - anon39;
	if (anon9 != 0)
	{
		uint64_t anon51;
		uint32_t phi42 = anon38;
		uint64_t phi_in43 = arg2;
		do
		{
			uint64_t anon49;
			uint32_t phi44 = phi42;
			*anon25 = anon38;
			uint32_t phi45 = anon38;
			do
			{
				uint64_t phi46 = phi_in43;
				uint32_t* anon47 = (uint32_t*)phi46;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi45 ^ (phi44 >> 31) + phi44 >> 1 ^ *anon16 & phi44) << 2) + arg3) << 2);
				uint32_t anon48 = *anon25 - 1;
				*anon25 = anon48;
				anon49 = phi46 + 4;
				phi_in43 = anon49;
				phi45 = anon48;
				phi44 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon50 = *anon8 - 1;
			*anon8 = anon50;
			phi42 = anon50;
			anon51 = anon49 + (arg4 << 32 >> 30);
			phi_in43 = anon51;
		}
		while (*anon8 != 0);
		*anon7 = anon51;
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
	uint64_t phi_in90;
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
		uint64_t phi25 = arg3;
		do
		{
			phi26 = phi_in14;
			uint64_t phi27 = phi25;
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
						uint32_t* anon34 = (uint32_t*)phi27;
						*anon34 = *anon34 + (phi15 * phi15 << 1);
						phi33 = ((__zext uint64_t)(anon1 <= *anon28) << 2) + 4294967295 & 0xffffffff;
					}
					anon35 = phi11 & 0xffffffff;
					*(uint32_t*)(phi27 + (anon35 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi33) + *(uint32_t*)phi27;
					uint32_t anon36 = *anon28 - 1;
					*anon28 = anon36;
					uint64_t anon37 = phi27 + 4;
					phi31 = anon37;
					phi27 = anon37;
					phi32 = anon36;
				}
				while (*anon28 != 0);
			}
			phi_in14 = phi26 - 1;
			anon38 = phi31 + (anon8 >> 30);
			phi25 = anon38;
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
		uint32_t phi43 = phi10;
		if (phi39 != 0)
		{
			uint32_t phi45;
			anon44 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon42 + arg4) = (__zext uint32_t)(phi10 < anon44);
			uint32_t anon46 = phi10 - 1;
			phi45 = anon46;
			if (phi39 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon46);
				uint32_t anon47 = phi10 - 2;
				phi45 = anon47;
				if (phi39 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon47);
					uint32_t anon48 = phi10 - 3;
					phi45 = anon48;
					if (phi39 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon48);
						uint32_t anon49 = phi10 - 4;
						phi45 = anon49;
						if (phi39 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon49 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon49);
							phi45 = phi10 - 5;
						}
					}
				}
			}
			phi43 = phi45;
			phi22 = phi10;
			phi23 = anon35;
		}
		if (phi39 == 0 || anon40 != phi39 && phi39 != 0)
		{
			uint32_t anon57;
			uint32_t anon58;
			uint32_t* anon50 = (uint32_t*)(arg1 - 240);
			*anon50 = phi43;
			uint32_t phi51 = *anon50;
			uint32_t anon52 = phi10 - phi39;
			if (anon52 >= 3)
			{
				uint32_t anon56;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon50 = anon44;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in53 = 0;
				do
				{
					uint32_t phi54 = phi_in53;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon55 = phi54 + 1;
					phi_in53 = anon55;
					anon57 = anon40 - phi39;
					anon56 = (uint32_t)(((__zext uint64_t)anon57 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon55 < anon56);
				phi22 = phi10;
				phi23 = anon35;
				anon58 = anon56 << 2;
				phi51 = *anon50 - anon58;
			}
			if (anon57 != anon58 && anon52 >= 3 || anon52 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi51 << 2) + arg4) = (__zext uint32_t)(anon44 > phi51);
				phi22 = phi10;
				phi23 = anon35;
				if (phi51 != 0)
				{
					uint32_t anon59 = phi51 - 1;
					*(uint32_t*)(((__zext uint64_t)anon59 << 32 >> 30) + arg4) = (__zext uint32_t)(anon44 > anon59);
					phi22 = phi10;
					phi23 = anon35;
					if (anon59 != 0)
					{
						uint32_t anon60 = phi51 - 2;
						*(uint32_t*)(((__sext int64_t)anon60 << 2) + arg4) = (__zext uint32_t)(anon44 > anon60);
						phi22 = phi10;
						phi23 = anon35;
					}
				}
			}
		}
	}
	*anon28 = phi22;
	uint64_t* anon61 = (uint64_t*)0x601df8;
	*anon61 = arg3;
	uint64_t anon62 = (anon13 >> 30) + arg3;
	if (anon62 > arg3)
	{
		uint32_t phi_in63;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon64 = anon2 + 1;
		phi_in63 = (uint32_t)(anon64 + (anon64 >> 31 & 1) << 32 >> 33);
		uint64_t phi65 = arg3;
		while (true)
		{
			uint64_t phi70;
			uint64_t phi_in74;
			uint64_t phi_in75;
			uint32_t phi76;
			uint64_t phi77;
			uint64_t anon103;
			uint64_t anon130;
			uint32_t anon135;
			uint64_t phi_in66 = phi65;
			*anon9 = phi_in66;
			uint64_t phi67 = phi_in66;
			if (anon1 != 0)
			{
				uint32_t anon89;
				int64_t anon91;
				int64_t anon92;
				uint32_t phi93;
				uint32_t anon94;
				int64_t anon99;
				uint32_t phi108;
				uint32_t anon111;
				uint64_t phi123;
				uint32_t phi127;
				uint64_t anon129;
				uint32_t phi68 = phi_in63;
				uint32_t phi69 = phi_in63;
				phi70 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon28) << 2) - 4;
				int64_t anon73 = (__sext int64_t)*anon28 << 2;
				int64_t anon72 = (anon73 & 0xc) + arg4;
				phi71 = anon72;
				phi_in74 = 0;
				phi_in75 = phi_in66;
				phi76 = 0;
				phi77 = phi_in74;
				uint32_t* anon78 = (uint32_t*)0x601e00;
				*anon78 = *anon28;
				uint64_t phi79 = phi_in75;
				uint32_t phi80 = anon1;
				if (*anon28 != 0)
				{
					uint32_t anon85;
					do
					{
						uint32_t anon81 = rand();
						uint64_t anon82 = ((__zext uint64_t)(anon81 > 4294967295 ? anon81 : anon81 + 255) << 32 >> 40) % (__sext int64_t)phi80;
						*anon28 = (uint32_t)anon82;
						uint32_t* anon83 = (uint32_t*)0x601e08;
						uint32_t* anon84 = (uint32_t*)(((__sext int64_t)*anon78 << 2) + arg4);
						*anon83 = *anon84;
						*anon84 = *(uint32_t*)((anon82 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = *anon83;
						anon85 = *anon78 - 1;
						*anon78 = anon85;
						phi80 = *anon78;
					}
					while (anon85 != 0);
					phi79 = *anon9;
				}
				uint64_t phi_in86 = phi79;
				uint32_t* anon87 = (uint32_t*)phi70;
				if (*anon87 == 0)
				{
					uint32_t phi_in88;
					anon89 = anon1 - 1;
					phi_in88 = anon89;
					anon92 = anon2 << 32 >> 30;
					anon91 = anon92 + arg4;
					phi_in90 = anon91;
					phi93 = phi68;
					anon94 = *anon28 - phi76;
					if (phi68 > anon94)
					{
						uint64_t anon96;
						do
						{
							*anon28 = phi_in88;
							uint64_t phi95 = phi_in90;
							phi_in88 = *anon28 - 1;
							anon96 = phi95 - 4;
							phi_in90 = anon96;
						}
						while (*(uint32_t*)anon96 == 0);
						*anon87 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi93 = phi68 - 1;
					}
				}
				else 
				{
					uint64_t phi_in98;
					uint32_t phi97 = anon89;
					anon99 = anon92 - 4 + arg4;
					phi_in98 = anon99;
					if (phi68 == 0)
					{
						uint32_t* anon101;
						do
						{
							*anon28 = phi97;
							uint64_t phi100 = phi_in98;
							anon101 = (uint32_t*)phi100;
							if (*anon101 != 0)
							{
								phi97 = *anon28 - 1;
								phi_in98 = phi100 - 4;
							}
						}
						while (*anon101 != 0);
						*anon101 = 1;
						*anon87 = 0;
						phi93 = phi68;
					}
					else 
					{
						phi93 = phi68 - 1;
					}
				}
				anon103 = phi71 & 0xffffffff00000000 | phi71 & 0xffffffff;
				uint32_t* anon102 = (uint32_t*)anon103;
				if (*anon102 == 0)
				{
					uint64_t phi104;
					bool anon109;
					uint64_t anon105 = (__zext uint64_t)anon94;
					phi104 = anon105;
					uint32_t phi_in106 = anon89;
					uint64_t phi_in107 = anon91;
					if (phi69 <= anon94)
					{
						phi68 = phi93;
						phi108 = phi69;
						anon109 = anon1 != 3 | phi69 == 0;
						if (!anon109)
						{
							phi104 = anon105;
							phi_in106 = anon89;
							phi_in107 = anon91;
							phi68 = phi93;
							phi108 = phi69;
						}
					}
					anon111 = phi76 + anon89 - *anon28;
					bool anon110 = phi93 == 2 | anon94 == anon111;
					if (!anon109 && phi69 <= anon94 && anon110 || phi69 > anon94)
					{
						bool anon113;
						do
						{
							*anon28 = phi_in106;
							uint64_t phi112 = phi_in107;
							uint64_t anon114 = phi112 - 4;
							anon113 = *anon28 == anon111 | *(uint32_t*)anon114 == 0;
							if (anon113)
							{
								phi104 = phi104 & 0xffffffffffffff00 | (__zext uint64_t)(*anon28 == anon111);
								phi_in106 = *anon28 - 1;
								phi_in107 = anon114;
							}
						}
						while (anon113);
						*anon102 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi68 = phi93 - (__zext uint32_t)(anon94 == anon111);
						phi108 = phi69 - 1;
					}
				}
				else 
				{
					uint32_t phi_in115 = anon89;
					uint64_t phi_in116 = anon99;
					if (phi69 == 0)
					{
						bool anon118;
						uint32_t* anon119;
						do
						{
							*anon28 = phi_in115;
							uint64_t phi117 = phi_in116;
							phi_in115 = *anon28 - 1;
							phi_in116 = phi117 - 4;
							anon119 = (uint32_t*)phi117;
							anon118 = *anon119 != 0 | *anon28 == anon111;
						}
						while (anon118);
						*anon119 = 1;
						*anon102 = 0;
						phi68 = phi93;
						phi108 = phi69;
					}
					else 
					{
						phi68 = phi93;
						phi108 = phi69 - 1;
					}
				}
				phi69 = phi108;
				uint64_t* anon120 = (uint64_t*)0x601df0;
				*anon120 = arg4;
				uint32_t phi_in121 = *anon28;
				uint64_t phi_in122 = arg4;
				do
				{
					phi123 = phi_in86;
					uint64_t phi124 = phi_in122;
					if (*(uint32_t*)phi124 != 0)
					{
						uint32_t* anon125 = (uint32_t*)phi123;
						uint32_t* anon126 = (uint32_t*)(phi123 + (phi23 << 32 >> 30));
						*anon125 = *anon126;
						*anon126 = *anon125;
						phi_in121 = *anon28;
					}
					phi127 = phi_in121;
					uint32_t anon128 = phi127 - 1;
					*anon28 = anon128;
					phi_in86 = phi123 + 4;
					phi_in121 = anon128;
					anon129 = phi124 + 4;
					phi_in122 = anon129;
				}
				while (phi127 != 0);
				*anon120 = anon129;
				anon130 = phi123 + 4;
				*anon9 = anon130;
				uint32_t phi131 = *anon28;
				uint32_t anon133 = *anon28 + 1;
				uint32_t anon134 = (uint32_t)(anon73 + 4 + arg4 >> 2) & 3;
				uint32_t anon132 = anon133 < 6 ? anon133 : anon133 < anon134 ? anon133 : anon134;
				if (anon132 != 0)
				{
					uint32_t phi_in138;
					int64_t anon137 = anon3 >> 32;
					int64_t anon136 = anon137 & 1;
					anon135 = (uint32_t)(anon136 + anon2 << 32 >> 33) + (uint32_t)anon136 - ((uint32_t)(anon2 + anon137) & 1);
					*(uint32_t*)anon72 = (__zext uint32_t)(*anon28 < anon135);
					uint32_t anon139 = *anon28 - 1;
					phi_in138 = anon139;
					if (anon132 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon139 << 32 >> 30) + arg4) = (__zext uint32_t)(anon139 < anon135);
						uint32_t anon140 = *anon28 - 2;
						phi_in138 = anon140;
						if (anon132 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon140 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon140);
							uint32_t anon141 = *anon28 - 3;
							phi_in138 = anon141;
							if (anon132 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon141 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon141);
								uint32_t anon142 = *anon28 - 4;
								phi_in138 = anon142;
								if (anon132 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon142 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon142);
									phi_in138 = *anon28 - 5;
								}
							}
						}
					}
					phi131 = phi_in138;
				}
				if (anon132 == 0 || anon133 != anon132 && anon132 != 0)
				{
					uint32_t anon148;
					uint32_t anon149;
					uint32_t anon143 = *anon28 - anon132;
					if (anon143 >= 3)
					{
						uint32_t anon146;
						uint32_t anon147;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in144 = 0;
						do
						{
							uint32_t phi145 = phi_in144;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon146 = phi145 + 1;
							anon148 = anon133 - anon132;
							anon147 = (uint32_t)(((__zext uint64_t)anon148 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon146 < anon147)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in144 = anon146;
							}
						}
						while (anon146 < anon147);
						anon149 = anon147 << 2;
						phi131 = phi131 - anon149;
					}
					if (anon143 < 3 || anon149 != anon148 && anon143 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi131 << 2) + arg4) = (__zext uint32_t)(phi131 < anon135);
						if (phi131 != 0)
						{
							uint32_t anon150 = phi131 - 1;
							*(uint32_t*)(((__zext uint64_t)anon150 << 32 >> 30) + arg4) = (__zext uint32_t)(anon135 > anon150);
							if (anon150 != 0)
							{
								uint32_t anon151 = phi131 - 2;
								*(uint32_t*)(((__sext int64_t)anon151 << 2) + arg4) = (__zext uint32_t)(anon151 < anon135);
							}
						}
					}
				}
				phi67 = *anon61;
			}
			uint64_t anon152 = phi67 + *(uint64_t*)(arg1 - 168);
			*anon61 = anon152;
			phi_in63 = anon135;
			phi65 = anon152;
			phi70 = phi70 + 4;
			uint64_t phi71 = anon103 - 4;
			uint64_t anon153 = phi77 + 1;
			phi_in74 = anon153;
			phi_in75 = anon130;
			phi76 = (uint32_t)anon153;
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
	uint32_t* anon24;
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
			if (phi13 == phi16)
			{
				uint32_t anon19 = phi15 - 2;
				*anon3 = anon19;
				*anon2 = phi12;
				phi18 = anon19;
				if (phi13 == 0)
				{
					break;
				}
			}
			if (phi13 != phi16 || phi13 != 0 && phi13 == phi16)
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
			uint32_t anon23 = rand();
			anon24 = (uint32_t*)0x601dec;
			uint64_t anon25 = ((__zext uint64_t)(anon23 > 4294967295 ? anon23 : anon23 + 255) << 32 >> 40) % (__sext int64_t)phi17;
			*anon24 = (uint32_t)anon25;
			anon26 = (uint32_t*)0x601e08;
			uint32_t* anon27 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon26 = *anon27;
			*anon27 = *(uint32_t*)((anon25 << 32 >> 30) + arg4);
			*(uint32_t*)((anon25 << 32 >> 30) + arg4) = *anon26;
			anon28 = *anon3 - 1;
			*anon3 = anon28;
			phi17 = *anon3;
		}
		while (anon28 != 0);
	}
	uint64_t anon29 = arg2 << 32;
	*(uint32_t*)((anon29 >> 30) - 4 + arg4) = *anon10;
	*anon24 = 0;
	*anon3 = 0;
	uint64_t* anon30 = (uint64_t*)0x601e10;
	*anon30 = arg3;
	uint32_t phi_in31 = 0;
	uint64_t phi_in32 = arg3;
	uint64_t phi_in33 = arg2;
	uint32_t phi34 = 0;
	while (true)
	{
		uint64_t anon54;
		uint32_t phi35 = phi_in31;
		*anon30 = phi_in32;
		uint64_t phi36 = phi_in33;
		uint64_t anon37 = anon29 >> 32;
		if ((uint32_t)(anon37 * anon37) <= phi34)
		{
			uint64_t phi38;
			uint32_t phi46;
			uint32_t anon47;
			*anon3 = *(uint32_t*)(arg1 - 68);
			if (*(uint32_t*)(arg1 - 68) != 0)
			{
				phi38 = anon5 & 0xffffffff;
				uint32_t anon39 = rand();
				uint64_t anon40 = ((__zext uint64_t)(anon39 > 4294967295 ? anon39 : anon39 + 255) << 32 >> 40) % (phi38 << 32 >> 32);
				*anon24 = (uint32_t)anon40;
				uint32_t* anon41 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon26 = *anon41;
				*anon41 = *(uint32_t*)((anon40 << 32 >> 30) + arg4);
				*(uint32_t*)((anon40 << 32 >> 30) + arg4) = *anon26;
				uint32_t anon42 = *anon3 - 1;
				*anon3 = anon42;
			}
			*anon3 = 0;
			*anon24 = anon4;
			*anon30 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in43 = anon4;
			uint64_t phi_in44 = arg3;
			uint32_t phi_in45 = 0;
			do
			{
				*anon24 = phi_in43;
				*anon30 = phi_in44;
				phi46 = phi_in45;
				anon47 = (uint32_t)anon37;
				if (anon47 * anon47 > phi46)
				{
					uint32_t* anon48 = (uint32_t*)(*anon30 + ((__sext int64_t)phi46 << 2));
					uint32_t anon49 = *anon48 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon24 << 2) + arg4);
					*anon48 = anon49;
					uint32_t anon50 = *anon24 + 1;
					*anon24 = anon50;
					uint32_t anon51 = anon49 + 1;
					*anon3 = anon51;
					uint64_t phi52 = *anon30;
					uint32_t phi53 = anon50;
					if ((uint32_t)((__sext int64_t)anon51 % anon37) == 0)
					{
						anon54 = arg5 << 32 >> 30;
						phi52 = *anon30 + anon54;
						phi53 = *anon24;
					}
					phi_in43 = phi53;
					phi_in44 = phi52;
					phi_in45 = anon51;
					if (phi53 >= anon9)
					{
						uint32_t anon55 = phi53 - anon9;
						*anon24 = anon55;
						phi_in43 = anon55;
						phi_in44 = phi52;
						phi_in45 = anon51;
					}
				}
			}
			while (anon47 * anon47 > phi46);
			phi38 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon56 = *anon6 * *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4);
		*(uint32_t*)(*anon30 + ((__sext int64_t)phi34 << 2)) = anon56;
		uint32_t anon57 = anon56 + 1;
		*anon3 = anon57;
		uint32_t anon58 = phi35 + ((uint32_t)((__sext int64_t)anon57 % (phi36 << 32 >> 32)) == 0 ? 2 : 1);
		*anon24 = anon58;
		phi_in31 = anon58;
		uint64_t anon59 = *anon30 + ((uint32_t)((__sext int64_t)anon57 % (phi36 << 32 >> 32)) == 0 ? anon54 : 0);
		phi_in32 = anon59;
		uint64_t anon60 = arg2 & 0xffffffff;
		phi_in33 = anon60;
		phi34 = anon57;
		if (anon58 >= anon9)
		{
			uint32_t anon61 = anon58 - anon9;
			*anon24 = anon61;
			phi_in31 = anon61;
			phi_in32 = anon59;
			phi_in33 = anon60;
			phi34 = anon57;
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
