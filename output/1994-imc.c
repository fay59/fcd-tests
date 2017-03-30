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
		uint64_t anon33;
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
			phi20 = phi_in23;
			uint64_t phi29 = phi_in21;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon15 & phi20 ^ (phi20 >> 31) + phi20 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon24 - 1;
					*anon24 = anon30;
					phi26 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi27 = anon31;
					phi28 = anon30;
					phi20 = *anon8;
					phi29 = anon31;
				}
				while (*anon24 != 0);
			}
			uint32_t anon32 = phi26 - 1;
			*anon8 = anon32;
			phi20 = anon32;
			anon33 = phi27 + (arg4 << 32 >> 30);
			phi_in21 = anon33;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi26 != 0);
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
		uint32_t phi41 = anon37;
		uint64_t phi42 = arg2;
		do
		{
			uint64_t anon48;
			uint32_t phi43 = phi41;
			uint64_t phi44 = phi42;
			*anon24 = anon37;
			uint32_t phi45 = anon37;
			do
			{
				uint32_t* anon46 = (uint32_t*)phi44;
				*anon46 = *anon46 + (*(uint32_t*)(((__sext int64_t)(phi45 ^ (phi43 >> 31) + phi43 >> 1 ^ *anon15 & phi43) << 2) + arg3) << 2);
				uint32_t anon47 = *anon24 - 1;
				*anon24 = anon47;
				anon48 = phi44 + 4;
				phi44 = anon48;
				phi45 = anon47;
				phi43 = *anon8;
			}
			while (*anon24 != 0);
			uint32_t anon49 = *anon8 - 1;
			*anon8 = anon49;
			phi41 = anon49;
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
	uint32_t* anon22;
	uint64_t phi23;
	uint32_t* anon26;
	uint64_t phi83;
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
		uint32_t* anon42 = (uint32_t*)(arg1 - 240);
		*anon42 = phi10;
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
			*anon42 = phi44;
			*anon22 = phi10;
			phi23 = anon34;
		}
		if (anon39 != phi38 || phi38 == 0)
		{
			uint32_t anon54;
			uint32_t anon55;
			uint32_t phi49 = *anon42;
			uint32_t anon50 = phi10 - phi38;
			if (anon50 >= 3)
			{
				uint32_t anon53;
				*anon42 = phi49;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon42 = anon43;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi51 = 0;
				do
				{
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon52 = phi51 + 1;
					phi51 = anon52;
					anon54 = anon39 - phi38;
					anon53 = (uint32_t)(((__zext uint64_t)anon54 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon52 < anon53);
				*anon22 = phi10;
				phi23 = anon34;
				anon55 = anon53 << 2;
				phi49 = phi49 - anon55;
			}
			if (anon54 != anon55 || anon50 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi49 << 2) + arg4) = (__zext uint32_t)(anon43 > phi49);
				*anon22 = phi10;
				phi23 = anon34;
				if (phi49 != 0)
				{
					uint32_t anon56 = phi49 - 1;
					*(uint32_t*)(((__zext uint64_t)anon56 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon56);
					*anon22 = phi10;
					phi23 = anon34;
					if (anon56 != 0)
					{
						uint32_t anon57 = phi49 - 2;
						*(uint32_t*)(((__sext int64_t)anon57 << 2) + arg4) = (__zext uint32_t)(anon43 > anon57);
						*anon22 = phi10;
						phi23 = anon34;
					}
				}
			}
		}
	}
	uint64_t* anon58 = (uint64_t*)0x601df8;
	*anon58 = arg3;
	uint64_t anon59 = (anon13 >> 30) + arg3;
	if (anon59 > arg3)
	{
		uint32_t phi_in60;
		uint64_t anon145;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon61 = anon2 + 1;
		phi_in60 = (uint32_t)(anon61 + (anon61 >> 31 & 1) << 32 >> 33);
		*anon9 = arg3;
		do
		{
			uint32_t anon128;
			uint64_t phi62 = *anon9;
			if (anon1 != 0)
			{
				uint64_t phi66;
				uint64_t phi72;
				uint64_t anon122;
				uint32_t phi63 = phi_in60;
				uint32_t phi64 = phi_in60;
				uint64_t phi65 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon22) << 2) - 4;
				int64_t anon68 = (__sext int64_t)*anon22 << 2;
				int64_t anon67 = (anon68 & 0xc) + arg4;
				phi66 = anon67;
				uint64_t phi_in69 = 0;
				uint64_t phi_in70 = *anon9;
				uint32_t phi71 = 0;
				do
				{
					uint32_t anon82;
					int64_t anon84;
					int64_t anon85;
					uint32_t phi86;
					uint32_t anon87;
					int64_t anon91;
					uint32_t phi100;
					uint32_t phi101;
					uint32_t anon104;
					uint64_t phi114;
					uint32_t phi118;
					uint64_t anon120;
					phi72 = phi_in69;
					uint64_t phi_in73 = phi_in70;
					uint32_t phi74 = anon1;
					if (*anon22 != 0)
					{
						uint32_t anon79;
						do
						{
							uint32_t anon76 = rand();
							uint64_t anon75 = ((__zext uint64_t)(anon76 > 4294967295 ? anon76 : anon76 + 255) << 32 >> 40) % (__sext int64_t)phi74;
							*anon26 = (uint32_t)anon75;
							uint32_t* anon77 = (uint32_t*)0x601e08;
							uint32_t* anon78 = (uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4);
							*anon77 = *anon78;
							*anon78 = *(uint32_t*)((anon75 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = *anon77;
							anon79 = *anon22 - 1;
							*anon22 = anon79;
							phi74 = *anon22;
						}
						while (anon79 != 0);
						phi_in73 = *anon9;
					}
					uint32_t* anon80 = (uint32_t*)phi65;
					if (*anon80 == 0)
					{
						uint32_t phi81;
						anon82 = anon1 - 1;
						phi81 = anon82;
						anon85 = anon2 << 32 >> 30;
						anon84 = anon85 + arg4;
						phi83 = anon84;
						phi86 = phi63;
						anon87 = *anon22 - phi71;
						if (phi63 > anon87)
						{
							uint64_t anon88;
							do
							{
								*anon26 = phi81;
								phi81 = *anon26 - 1;
								anon88 = phi83 - 4;
								phi83 = anon88;
							}
							while (*(uint32_t*)anon88 == 0);
							*anon80 = 1;
							*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = 0;
							phi86 = phi63 - 1;
						}
					}
					else 
					{
						uint64_t phi_in90;
						uint32_t phi89 = anon82;
						anon91 = anon85 - 4 + arg4;
						phi_in90 = anon91;
						if (phi63 == 0)
						{
							uint32_t* anon93;
							do
							{
								*anon26 = phi89;
								uint64_t phi92 = phi_in90;
								anon93 = (uint32_t*)phi92;
								if (*anon93 != 0)
								{
									phi89 = *anon26 - 1;
									phi_in90 = phi92 - 4;
								}
							}
							while (*anon93 != 0);
							*anon93 = 1;
							*anon80 = 0;
							phi86 = phi63;
						}
						else 
						{
							phi86 = phi63 - 1;
						}
					}
					uint64_t anon95 = phi66 & 0xffffffff00000000 | phi66 & 0xffffffff;
					uint32_t* anon94 = (uint32_t*)anon95;
					if (*anon94 == 0)
					{
						uint64_t phi96;
						bool anon102;
						uint64_t anon97 = (__zext uint64_t)anon87;
						phi96 = anon97;
						uint32_t phi_in98 = anon82;
						uint64_t phi99 = anon84;
						if (phi64 <= anon87)
						{
							phi100 = phi86;
							phi101 = phi64;
							anon102 = anon1 != 3 | phi64 == 0;
							if (!anon102)
							{
								phi96 = anon97;
								phi_in98 = anon82;
								phi99 = anon84;
								phi100 = phi86;
								phi101 = phi64;
							}
						}
						anon104 = phi71 + anon82 - *anon22;
						bool anon103 = phi86 == 2 | anon87 == anon104;
						if (!anon102 && anon103 || phi64 > anon87)
						{
							bool anon105;
							do
							{
								*anon26 = phi_in98;
								uint64_t anon106 = phi99 - 4;
								anon105 = *anon26 == anon104 | *(uint32_t*)anon106 == 0;
								if (anon105)
								{
									phi96 = phi96 & 0xffffffffffffff00 | (__zext uint64_t)(*anon26 == anon104);
									phi_in98 = *anon26 - 1;
									phi99 = anon106;
								}
							}
							while (anon105);
							*anon94 = 1;
							*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = 0;
							phi100 = phi86 - (__zext uint32_t)(anon87 == anon104);
							phi101 = phi64 - 1;
						}
					}
					else 
					{
						uint32_t phi107 = anon82;
						uint64_t phi108 = anon91;
						if (phi64 == 0)
						{
							bool anon109;
							uint32_t* anon110;
							do
							{
								*anon26 = phi107;
								phi107 = *anon26 - 1;
								phi108 = phi108 - 4;
								anon110 = (uint32_t*)phi108;
								anon109 = *anon110 != 0 | *anon26 == anon104;
							}
							while (anon109);
							*anon110 = 1;
							*anon94 = 0;
							phi100 = phi86;
							phi101 = phi64;
						}
						else 
						{
							phi100 = phi86;
							phi101 = phi64 - 1;
						}
					}
					uint64_t* anon111 = (uint64_t*)0x601df0;
					*anon111 = arg4;
					*anon26 = *anon22;
					uint32_t phi112 = *anon22;
					uint64_t phi113 = arg4;
					do
					{
						phi114 = phi_in73;
						uint32_t phi_in115 = phi112;
						if (*(uint32_t*)phi113 != 0)
						{
							uint32_t* anon116 = (uint32_t*)phi114;
							uint32_t* anon117 = (uint32_t*)(phi114 + (phi23 << 32 >> 30));
							*anon116 = *anon117;
							*anon117 = *anon116;
							phi_in115 = *anon26;
						}
						phi118 = phi_in115;
						uint32_t anon119 = phi118 - 1;
						*anon26 = anon119;
						phi_in73 = phi114 + 4;
						phi112 = anon119;
						anon120 = phi113 + 4;
						phi113 = anon120;
					}
					while (phi118 != 0);
					*anon111 = anon120;
					uint64_t anon121 = phi114 + 4;
					*anon9 = anon121;
					anon122 = (__zext uint64_t)*anon22;
					if (phi72 != anon122)
					{
						phi63 = phi100;
						phi64 = phi101;
						phi65 = phi65 + 4;
						phi66 = anon95 - 4;
						uint64_t anon123 = phi72 + 1;
						phi_in69 = anon123;
						phi_in70 = anon121;
						phi71 = (uint32_t)anon123;
					}
				}
				while (phi72 != anon122);
				uint32_t phi124 = *anon22;
				uint32_t anon126 = *anon22 + 1;
				uint32_t anon127 = (uint32_t)(anon68 + 4 + arg4 >> 2) & 3;
				uint32_t anon125 = anon126 < 6 ? anon126 : anon126 < anon127 ? anon126 : anon127;
				if (anon125 != 0)
				{
					uint32_t phi131;
					int64_t anon130 = anon3 >> 32;
					int64_t anon129 = anon130 & 1;
					anon128 = (uint32_t)(anon129 + anon2 << 32 >> 33) + (uint32_t)anon129 - ((uint32_t)(anon2 + anon130) & 1);
					*(uint32_t*)anon67 = (__zext uint32_t)(*anon22 < anon128);
					uint32_t anon132 = *anon22 - 1;
					phi131 = anon132;
					if (anon125 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon132 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 < anon128);
						uint32_t anon133 = *anon22 - 2;
						phi131 = anon133;
						if (anon125 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon133 << 32 >> 30) + arg4) = (__zext uint32_t)(anon128 > anon133);
							uint32_t anon134 = *anon22 - 3;
							phi131 = anon134;
							if (anon125 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon134 << 32 >> 30) + arg4) = (__zext uint32_t)(anon128 > anon134);
								uint32_t anon135 = *anon22 - 4;
								phi131 = anon135;
								if (anon125 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon135 << 32 >> 30) + arg4) = (__zext uint32_t)(anon128 > anon135);
									phi131 = *anon22 - 5;
								}
							}
						}
					}
					phi124 = phi131;
				}
				if (anon126 != anon125 || anon125 == 0)
				{
					uint32_t anon141;
					uint32_t anon142;
					uint32_t phi136 = phi124;
					uint32_t anon137 = *anon22 - anon125;
					if (anon137 >= 3)
					{
						uint32_t anon139;
						uint32_t anon140;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi138 = 0;
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
							anon139 = phi138 + 1;
							anon141 = anon126 - anon125;
							anon140 = (uint32_t)(((__zext uint64_t)anon141 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon139 < anon140)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi138 = anon139;
							}
						}
						while (anon139 < anon140);
						anon142 = anon140 << 2;
						phi136 = phi136 - anon142;
					}
					if (anon142 != anon141 || anon137 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi136 << 2) + arg4) = (__zext uint32_t)(phi136 < anon128);
						if (phi136 != 0)
						{
							uint32_t anon143 = phi136 - 1;
							*(uint32_t*)(((__zext uint64_t)anon143 << 32 >> 30) + arg4) = (__zext uint32_t)(anon128 > anon143);
							if (anon143 != 0)
							{
								uint32_t anon144 = phi136 - 2;
								*(uint32_t*)(((__sext int64_t)anon144 << 2) + arg4) = (__zext uint32_t)(anon144 < anon128);
							}
						}
					}
				}
				phi62 = *anon58;
			}
			anon145 = phi62 + *(uint64_t*)(arg1 - 168);
			*anon58 = anon145;
			phi_in60 = anon128;
			*anon9 = anon145;
		}
		while (anon145 < anon59);
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
