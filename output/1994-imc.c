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
		uint64_t anon51;
		uint32_t phi_in42 = anon38;
		uint64_t phi43 = arg2;
		do
		{
			uint64_t anon49;
			uint64_t phi44 = phi43;
			*anon24 = anon38;
			uint32_t phi45 = anon38;
			uint32_t phi46 = phi_in42;
			do
			{
				uint32_t* anon47 = (uint32_t*)phi44;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi45 ^ (phi46 >> 31) + phi46 >> 1 ^ *anon15 & phi46) << 2) + arg3) << 2);
				uint32_t anon48 = *anon24 - 1;
				*anon24 = anon48;
				anon49 = phi44 + 4;
				phi44 = anon49;
				phi45 = anon48;
				phi46 = *anon8;
			}
			while (*anon24 != 0);
			uint32_t anon50 = *anon8 - 1;
			*anon8 = anon50;
			phi_in42 = anon50;
			anon51 = anon49 + (arg4 << 32 >> 30);
			phi43 = anon51;
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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t* anon22;
	uint64_t phi23;
	uint32_t* anon26;
	uint64_t phi89;
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
			anon22 = (uint32_t*)0x601e00;
			*anon22 = 4294967295;
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
		uint64_t anon34;
		uint64_t anon37;
		uint32_t phi38;
		uint32_t anon43;
		uint64_t phi_in25 = arg3;
		do
		{
			anon26 = (uint32_t*)0x601dec;
			uint32_t anon28 = (uint32_t)anon12;
			uint32_t anon27 = anon28 - 1;
			*anon26 = anon27;
			uint64_t phi29 = phi_in25;
			uint64_t phi30 = phi_in25;
			uint32_t phi31 = anon27;
			if (anon28 != 0)
			{
				do
				{
					uint64_t phi32 = 3;
					if (anon1 > phi31)
					{
						uint32_t* anon33 = (uint32_t*)phi30;
						*anon33 = *anon33 + (phi15 * phi15 << 1);
						phi32 = ((__zext uint64_t)(anon1 <= *anon26) << 2) + 4294967295 & 0xffffffff;
					}
					anon34 = phi11 & 0xffffffff;
					*(uint32_t*)(phi30 + (anon34 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi32) + *(uint32_t*)phi30;
					uint32_t anon35 = *anon26 - 1;
					*anon26 = anon35;
					uint64_t anon36 = phi30 + 4;
					phi29 = anon36;
					phi30 = anon36;
					phi31 = anon35;
				}
				while (*anon26 != 0);
			}
			phi14 = phi14 - 1;
			anon37 = phi29 + (anon8 >> 30);
			phi_in25 = anon37;
		}
		while (phi14 != 256);
		*anon9 = anon37;
		uint32_t anon39 = phi10 + 1;
		int64_t anon41 = (__sext int64_t)phi10 << 2;
		uint32_t anon40 = (uint32_t)(anon41 + 4 + arg4 >> 2) & 3;
		phi38 = anon39 < anon40 ? anon39 : anon40;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi38 = anon39;
		}
		uint32_t phi_in42 = phi10;
		if (phi38 != 0)
		{
			uint32_t phi44;
			anon43 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon41 + arg4) = (__zext uint32_t)(phi10 < anon43);
			uint32_t anon45 = phi10 - 1;
			phi44 = anon45;
			if (phi38 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon45 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon45);
				uint32_t anon46 = phi10 - 2;
				phi44 = anon46;
				if (phi38 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon46);
					uint32_t anon47 = phi10 - 3;
					phi44 = anon47;
					if (phi38 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon47);
						uint32_t anon48 = phi10 - 4;
						phi44 = anon48;
						if (phi38 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon48);
							phi44 = phi10 - 5;
						}
					}
				}
			}
			uint32_t phi_in49 = phi44;
			*anon22 = phi10;
			phi23 = anon34;
			phi_in42 = phi_in49;
		}
		if (anon39 != phi38 || phi38 == 0)
		{
			uint32_t anon56;
			uint32_t anon57;
			uint32_t* anon50 = (uint32_t*)(arg1 - 240);
			*anon50 = phi_in42;
			uint32_t phi51 = *anon50;
			uint32_t anon52 = phi10 - phi38;
			if (anon52 >= 3)
			{
				uint32_t anon55;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon50 = anon43;
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
					anon56 = anon39 - phi38;
					anon55 = (uint32_t)(((__zext uint64_t)anon56 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon54 < anon55);
				*anon22 = phi10;
				phi23 = anon34;
				anon57 = anon55 << 2;
				phi51 = *anon50 - anon57;
			}
			if (anon56 != anon57 || anon52 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi51 << 2) + arg4) = (__zext uint32_t)(anon43 > phi51);
				*anon22 = phi10;
				phi23 = anon34;
				if (phi51 != 0)
				{
					uint32_t anon58 = phi51 - 1;
					*(uint32_t*)(((__zext uint64_t)anon58 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon58);
					*anon22 = phi10;
					phi23 = anon34;
					if (anon58 != 0)
					{
						uint32_t anon59 = phi51 - 2;
						*(uint32_t*)(((__sext int64_t)anon59 << 2) + arg4) = (__zext uint32_t)(anon43 > anon59);
						*anon22 = phi10;
						phi23 = anon34;
					}
				}
			}
		}
	}
	*anon26 = *anon22;
	uint64_t* anon60 = (uint64_t*)0x601df8;
	*anon60 = arg3;
	uint64_t anon61 = (anon13 >> 30) + arg3;
	if (anon61 > arg3)
	{
		uint32_t phi62;
		uint64_t anon150;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon63 = anon2 + 1;
		phi62 = (uint32_t)(anon63 + (anon63 >> 31 & 1) << 32 >> 33);
		uint64_t phi64 = arg3;
		do
		{
			uint32_t anon133;
			uint32_t phi_in65 = phi62;
			uint64_t phi_in66 = phi64;
			*anon9 = phi_in66;
			uint64_t phi67 = phi_in66;
			if (anon1 != 0)
			{
				uint64_t phi71;
				uint64_t phi77;
				uint64_t anon127;
				uint32_t phi68 = phi_in65;
				uint32_t phi69 = phi_in65;
				uint64_t phi70 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon26) << 2) - 4;
				int64_t anon73 = (__sext int64_t)*anon26 << 2;
				int64_t anon72 = (anon73 & 0xc) + arg4;
				phi71 = anon72;
				uint64_t phi_in74 = 0;
				uint64_t phi75 = phi_in66;
				uint32_t phi76 = 0;
				do
				{
					uint32_t anon88;
					int64_t anon90;
					int64_t anon91;
					uint32_t phi92;
					uint32_t anon93;
					int64_t anon97;
					uint32_t phi106;
					uint32_t phi107;
					uint32_t anon110;
					uint64_t phi119;
					uint32_t phi123;
					uint64_t anon125;
					phi77 = phi_in74;
					uint64_t phi78 = phi75;
					*anon22 = *anon26;
					uint32_t phi79 = anon1;
					if (*anon26 != 0)
					{
						uint32_t anon84;
						do
						{
							uint32_t anon81 = rand();
							uint64_t anon80 = ((__zext uint64_t)(anon81 > 4294967295 ? anon81 : anon81 + 255) << 32 >> 40) % (__sext int64_t)phi79;
							*anon26 = (uint32_t)anon80;
							uint32_t* anon82 = (uint32_t*)0x601e08;
							uint32_t* anon83 = (uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4);
							*anon82 = *anon83;
							*anon83 = *(uint32_t*)((anon80 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = *anon82;
							anon84 = *anon22 - 1;
							*anon22 = anon84;
							phi79 = *anon22;
						}
						while (anon84 != 0);
						phi78 = *anon9;
					}
					uint64_t phi_in85 = phi78;
					uint32_t* anon86 = (uint32_t*)phi70;
					if (*anon86 == 0)
					{
						uint32_t phi87;
						anon88 = anon1 - 1;
						phi87 = anon88;
						anon91 = anon2 << 32 >> 30;
						anon90 = anon91 + arg4;
						phi89 = anon90;
						phi92 = phi68;
						anon93 = *anon26 - phi76;
						if (phi68 > anon93)
						{
							uint64_t anon94;
							do
							{
								*anon26 = phi87;
								phi87 = *anon26 - 1;
								anon94 = phi89 - 4;
								phi89 = anon94;
							}
							while (*(uint32_t*)anon94 == 0);
							*anon86 = 1;
							*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = 0;
							phi92 = phi68 - 1;
						}
					}
					else 
					{
						uint64_t phi_in96;
						uint32_t phi95 = anon88;
						anon97 = anon91 - 4 + arg4;
						phi_in96 = anon97;
						if (phi68 == 0)
						{
							uint32_t* anon99;
							do
							{
								*anon26 = phi95;
								uint64_t phi98 = phi_in96;
								anon99 = (uint32_t*)phi98;
								if (*anon99 != 0)
								{
									phi95 = *anon26 - 1;
									phi_in96 = phi98 - 4;
								}
							}
							while (*anon99 != 0);
							*anon99 = 1;
							*anon86 = 0;
							phi92 = phi68;
						}
						else 
						{
							phi92 = phi68 - 1;
						}
					}
					uint64_t anon101 = phi71 & 0xffffffff00000000 | phi71 & 0xffffffff;
					uint32_t* anon100 = (uint32_t*)anon101;
					if (*anon100 == 0)
					{
						uint64_t phi102;
						bool anon108;
						uint64_t anon103 = (__zext uint64_t)anon93;
						phi102 = anon103;
						uint32_t phi_in104 = anon88;
						uint64_t phi105 = anon90;
						if (phi69 <= anon93)
						{
							phi106 = phi92;
							phi107 = phi69;
							anon108 = anon1 != 3 | phi69 == 0;
							if (!anon108)
							{
								phi102 = anon103;
								phi_in104 = anon88;
								phi105 = anon90;
								phi106 = phi92;
								phi107 = phi69;
							}
						}
						anon110 = phi76 + anon88 - *anon26;
						bool anon109 = phi92 == 2 | anon93 == anon110;
						if (!anon108 && anon109 || phi69 > anon93)
						{
							bool anon111;
							do
							{
								*anon26 = phi_in104;
								uint64_t anon112 = phi105 - 4;
								anon111 = *anon26 == anon110 | *(uint32_t*)anon112 == 0;
								if (anon111)
								{
									phi102 = phi102 & 0xffffffffffffff00 | (__zext uint64_t)(*anon26 == anon110);
									phi_in104 = *anon26 - 1;
									phi105 = anon112;
								}
							}
							while (anon111);
							*anon100 = 1;
							*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = 0;
							phi106 = phi92 - (__zext uint32_t)(anon93 == anon110);
							phi107 = phi69 - 1;
						}
					}
					else 
					{
						*anon26 = anon88;
						uint64_t phi113 = anon97;
						if (phi69 == 0)
						{
							bool anon114;
							uint32_t* anon115;
							do
							{
								*anon26 = *anon26 - 1;
								phi113 = phi113 - 4;
								anon115 = (uint32_t*)phi113;
								anon114 = *anon115 != 0 | *anon26 == anon110;
							}
							while (anon114);
							*anon115 = 1;
							*anon100 = 0;
							phi106 = phi92;
							phi107 = phi69;
						}
						else 
						{
							phi106 = phi92;
							phi107 = phi69 - 1;
						}
					}
					uint64_t* anon116 = (uint64_t*)0x601df0;
					*anon116 = arg4;
					uint32_t phi117 = *anon26;
					uint64_t phi118 = arg4;
					do
					{
						phi119 = phi_in85;
						uint32_t phi_in120 = phi117;
						if (*(uint32_t*)phi118 != 0)
						{
							uint32_t* anon121 = (uint32_t*)phi119;
							uint32_t* anon122 = (uint32_t*)(phi119 + (phi23 << 32 >> 30));
							*anon121 = *anon122;
							*anon122 = *anon121;
							phi_in120 = *anon26;
						}
						phi123 = phi_in120;
						uint32_t anon124 = phi123 - 1;
						*anon26 = anon124;
						phi_in85 = phi119 + 4;
						phi117 = anon124;
						anon125 = phi118 + 4;
						phi118 = anon125;
					}
					while (phi123 != 0);
					*anon116 = anon125;
					uint64_t anon126 = phi119 + 4;
					*anon9 = anon126;
					anon127 = (__zext uint64_t)*anon26;
					if (phi77 != anon127)
					{
						phi68 = phi106;
						phi69 = phi107;
						phi70 = phi70 + 4;
						phi71 = anon101 - 4;
						uint64_t anon128 = phi77 + 1;
						phi_in74 = anon128;
						phi75 = anon126;
						phi76 = (uint32_t)anon128;
					}
				}
				while (phi77 != anon127);
				uint32_t phi129 = *anon26;
				uint32_t anon131 = *anon26 + 1;
				uint32_t anon132 = (uint32_t)(anon73 + 4 + arg4 >> 2) & 3;
				uint32_t anon130 = anon131 < 6 ? anon131 : anon131 < anon132 ? anon131 : anon132;
				if (anon130 != 0)
				{
					uint32_t phi_in136;
					int64_t anon135 = anon3 >> 32;
					int64_t anon134 = anon135 & 1;
					anon133 = (uint32_t)(anon134 + anon2 << 32 >> 33) + (uint32_t)anon134 - ((uint32_t)(anon2 + anon135) & 1);
					*(uint32_t*)anon72 = (__zext uint32_t)(*anon26 < anon133);
					uint32_t anon137 = *anon26 - 1;
					phi_in136 = anon137;
					if (anon130 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon137 << 32 >> 30) + arg4) = (__zext uint32_t)(anon137 < anon133);
						uint32_t anon138 = *anon26 - 2;
						phi_in136 = anon138;
						if (anon130 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon138 << 32 >> 30) + arg4) = (__zext uint32_t)(anon133 > anon138);
							uint32_t anon139 = *anon26 - 3;
							phi_in136 = anon139;
							if (anon130 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon139 << 32 >> 30) + arg4) = (__zext uint32_t)(anon133 > anon139);
								uint32_t anon140 = *anon26 - 4;
								phi_in136 = anon140;
								if (anon130 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon140 << 32 >> 30) + arg4) = (__zext uint32_t)(anon133 > anon140);
									phi_in136 = *anon26 - 5;
								}
							}
						}
					}
					phi129 = phi_in136;
				}
				if (anon131 != anon130 || anon130 == 0)
				{
					uint32_t anon146;
					uint32_t anon147;
					uint32_t phi141 = phi129;
					uint32_t anon142 = *anon26 - anon130;
					if (anon142 >= 3)
					{
						uint32_t anon144;
						uint32_t anon145;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi143 = 0;
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
							anon144 = phi143 + 1;
							anon146 = anon131 - anon130;
							anon145 = (uint32_t)(((__zext uint64_t)anon146 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon144 < anon145)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi143 = anon144;
							}
						}
						while (anon144 < anon145);
						anon147 = anon145 << 2;
						phi141 = phi141 - anon147;
					}
					if (anon147 != anon146 || anon142 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi141 << 2) + arg4) = (__zext uint32_t)(phi141 < anon133);
						if (phi141 != 0)
						{
							uint32_t anon148 = phi141 - 1;
							*(uint32_t*)(((__zext uint64_t)anon148 << 32 >> 30) + arg4) = (__zext uint32_t)(anon133 > anon148);
							if (anon148 != 0)
							{
								uint32_t anon149 = phi141 - 2;
								*(uint32_t*)(((__sext int64_t)anon149 << 2) + arg4) = (__zext uint32_t)(anon149 < anon133);
							}
						}
					}
				}
				phi67 = *anon60;
			}
			anon150 = phi67 + *(uint64_t*)(arg1 - 168);
			*anon60 = anon150;
			phi62 = anon133;
			phi64 = anon150;
		}
		while (anon150 < anon61);
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi13;
	uint32_t phi17;
	uint32_t anon23;
	uint32_t* anon24;
	uint32_t* anon27;
	uint64_t anon37;
	uint64_t anon42;
	uint32_t phi53;
	uint32_t anon54;
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
			if (phi18 == phi16)
			{
				uint32_t anon19 = phi15 - 2;
				*anon3 = anon19;
				phi20 = phi12;
				phi18 = anon19;
				if (phi18 == 0)
				{
					break;
				}
			}
			if (phi18 != phi16 || phi18 != 0)
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
	if (anon23 != 0 || anon9 == 0)
	{
		uint32_t anon29;
		do
		{
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon26 = rand();
			uint64_t anon25 = ((__zext uint64_t)(anon26 > 4294967295 ? anon26 : anon26 + 255) << 32 >> 40) % (__sext int64_t)phi17;
			*anon24 = (uint32_t)anon25;
			anon27 = (uint32_t*)0x601e08;
			uint32_t* anon28 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon27 = *anon28;
			*anon28 = *(uint32_t*)((anon25 << 32 >> 30) + arg4);
			*(uint32_t*)((anon25 << 32 >> 30) + arg4) = *anon27;
			anon29 = *anon3 - 1;
			*anon3 = anon29;
			phi17 = *anon3;
		}
		while (anon29 != 0);
	}
	uint64_t anon30 = arg2 << 32;
	*(uint32_t*)((anon30 >> 30) - 4 + arg4) = *anon10;
	*anon24 = 0;
	*anon3 = 0;
	uint64_t* anon31 = (uint64_t*)0x601e10;
	*anon31 = arg3;
	uint32_t phi_in32 = 0;
	uint64_t phi_in33 = arg3;
	uint64_t phi34 = arg2;
	uint32_t phi35 = 0;
	do
	{
		uint32_t phi36 = phi_in32;
		*anon31 = phi_in33;
		anon37 = anon30 >> 32;
		if ((uint32_t)(anon37 * anon37) > phi35)
		{
			uint32_t anon38 = *anon6 * *(uint32_t*)(((__sext int64_t)phi36 << 2) + arg4);
			*(uint32_t*)(*anon31 + ((__sext int64_t)phi35 << 2)) = anon38;
			uint32_t anon39 = anon38 + 1;
			*anon3 = anon39;
			uint32_t anon40 = phi36 + ((uint32_t)((__sext int64_t)anon39 % (phi34 << 32 >> 32)) == 0 ? 2 : 1);
			*anon24 = anon40;
			phi_in32 = anon40;
			anon42 = arg5 << 32 >> 30;
			uint64_t anon41 = *anon31 + ((uint32_t)((__sext int64_t)anon39 % (phi34 << 32 >> 32)) == 0 ? anon42 : 0);
			phi_in33 = anon41;
			uint64_t anon43 = arg2 & 0xffffffff;
			phi34 = anon43;
			phi35 = anon39;
			if (anon40 >= anon9)
			{
				uint32_t anon44 = anon40 - anon9;
				*anon24 = anon44;
				phi_in32 = anon44;
				phi_in33 = anon41;
				phi34 = anon43;
				phi35 = anon39;
			}
		}
	}
	while ((uint32_t)(anon37 * anon37) > phi35);
	*anon3 = *(uint32_t*)(arg1 - 68);
	if (*(uint32_t*)(arg1 - 68) != 0)
	{
		uint32_t anon49;
		uint64_t phi45 = anon5 & 0xffffffff;
		do
		{
			uint32_t anon47 = rand();
			uint64_t anon46 = ((__zext uint64_t)(anon47 > 4294967295 ? anon47 : anon47 + 255) << 32 >> 40) % (phi45 << 32 >> 32);
			*anon24 = (uint32_t)anon46;
			uint32_t* anon48 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon27 = *anon48;
			*anon48 = *(uint32_t*)((anon46 << 32 >> 30) + arg4);
			*(uint32_t*)((anon46 << 32 >> 30) + arg4) = *anon27;
			anon49 = *anon3 - 1;
			*anon3 = anon49;
			if (anon49 != 0)
			{
				phi45 = (__zext uint64_t)*anon3;
			}
		}
		while (anon49 != 0);
	}
	*anon3 = 0;
	*anon24 = anon4;
	*anon31 = arg3;
	*anon6 = anon9 + 1 - *anon6;
	uint32_t phi_in50 = anon4;
	uint64_t phi_in51 = arg3;
	uint32_t phi_in52 = 0;
	do
	{
		phi_in50 = phi_in50;
		*anon31 = phi_in51;
		phi53 = phi_in52;
		anon54 = (uint32_t)anon37;
		if (anon54 * anon54 > phi53)
		{
			uint32_t* anon55 = (uint32_t*)(*anon31 + ((__sext int64_t)phi53 << 2));
			uint32_t anon56 = *anon55 + *anon6 * *(uint32_t*)(((__sext int64_t)phi_in50 << 2) + arg4);
			*anon55 = anon56;
			uint32_t anon57 = phi_in50 + 1;
			*anon24 = anon57;
			uint32_t anon58 = anon56 + 1;
			*anon3 = anon58;
			phi_in51 = *anon31;
			phi_in50 = anon57;
			if ((uint32_t)((__sext int64_t)anon58 % anon37) == 0)
			{
				*anon24 = phi_in50;
				phi_in51 = *anon31 + anon42;
			}
			phi_in52 = anon58;
			if (phi_in50 >= anon9)
			{
				uint32_t anon59 = phi_in50 - anon9;
				*anon24 = anon59;
				phi_in50 = anon59;
				phi_in52 = anon58;
			}
		}
	}
	while (anon54 * anon54 > phi53);
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
