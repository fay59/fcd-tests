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
		uint64_t anon34;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi_in23 = phi20;
			uint64_t phi24 = phi21;
			anon25 = (uint32_t*)0x601dec;
			uint32_t anon26 = anon9 - 1;
			*anon25 = anon26;
			phi27 = phi_in23;
			uint64_t phi28 = phi24;
			uint32_t phi29 = anon26;
			uint32_t phi30 = phi_in23;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi24 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon15 & phi30 ^ (phi30 >> 31) + phi30 >> 1) << 2) + arg3);
					uint32_t anon31 = *anon25 - 1;
					*anon25 = anon31;
					phi27 = *anon8;
					uint64_t anon32 = phi24 + 4;
					phi28 = anon32;
					phi29 = anon31;
					phi30 = *anon8;
					phi24 = anon32;
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
			*anon25 = anon38;
			uint32_t phi45 = anon38;
			uint32_t phi46 = phi_in42;
			do
			{
				uint32_t* anon47 = (uint32_t*)phi44;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi45 ^ (phi46 >> 31) + phi46 >> 1 ^ *anon15 & phi46) << 2) + arg3) << 2);
				uint32_t anon48 = *anon25 - 1;
				*anon25 = anon48;
				anon49 = phi44 + 4;
				phi44 = anon49;
				phi45 = anon48;
				phi46 = *anon8;
			}
			while (*anon25 != 0);
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
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon27;
	uint64_t phi87;
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
		uint64_t anon34;
		uint64_t anon37;
		uint32_t phi38;
		uint32_t anon43;
		uint64_t phi25 = arg3;
		do
		{
			uint64_t phi_in26 = phi25;
			anon27 = (uint32_t*)0x601dec;
			uint32_t anon29 = (uint32_t)anon12;
			uint32_t anon28 = anon29 - 1;
			*anon27 = anon28;
			phi25 = phi_in26;
			uint64_t phi30 = phi_in26;
			uint32_t phi31 = anon28;
			if (anon29 != 0)
			{
				do
				{
					uint64_t phi32 = 3;
					if (anon1 > phi31)
					{
						uint32_t* anon33 = (uint32_t*)phi30;
						*anon33 = *anon33 + (phi15 * phi15 << 1);
						phi32 = ((__zext uint64_t)(anon1 <= *anon27) << 2) + 4294967295 & 0xffffffff;
					}
					anon34 = phi11 & 0xffffffff;
					*(uint32_t*)(phi30 + (anon34 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi32) + *(uint32_t*)phi30;
					uint32_t anon35 = *anon27 - 1;
					*anon27 = anon35;
					uint64_t anon36 = phi30 + 4;
					phi25 = anon36;
					phi30 = anon36;
					phi31 = anon35;
				}
				while (*anon27 != 0);
			}
			phi14 = phi14 - 1;
			anon37 = phi25 + (anon8 >> 30);
			phi25 = anon37;
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
			phi22 = phi10;
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
				phi22 = phi10;
				phi23 = anon34;
				anon55 = anon53 << 2;
				phi49 = *anon42 - anon55;
			}
			if (anon54 != anon55 || anon50 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi49 << 2) + arg4) = (__zext uint32_t)(anon43 > phi49);
				phi22 = phi10;
				phi23 = anon34;
				if (phi49 != 0)
				{
					uint32_t anon56 = phi49 - 1;
					*(uint32_t*)(((__zext uint64_t)anon56 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon56);
					phi22 = phi10;
					phi23 = anon34;
					if (anon56 != 0)
					{
						uint32_t anon57 = phi49 - 2;
						*(uint32_t*)(((__sext int64_t)anon57 << 2) + arg4) = (__zext uint32_t)(anon43 > anon57);
						phi22 = phi10;
						phi23 = anon34;
					}
				}
			}
		}
	}
	*anon27 = phi22;
	uint64_t* anon58 = (uint64_t*)0x601df8;
	*anon58 = arg3;
	uint64_t anon59 = (anon13 >> 30) + arg3;
	if (anon59 > arg3)
	{
		uint32_t phi60;
		uint64_t anon149;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon61 = anon2 + 1;
		phi60 = (uint32_t)(anon61 + (anon61 >> 31 & 1) << 32 >> 33);
		uint64_t phi62 = arg3;
		do
		{
			uint32_t anon132;
			uint32_t phi63 = phi60;
			uint64_t phi_in64 = phi62;
			*anon9 = phi_in64;
			uint64_t phi65 = phi_in64;
			if (anon1 != 0)
			{
				uint64_t phi68;
				uint64_t phi74;
				uint64_t anon126;
				uint32_t phi66 = phi63;
				uint64_t phi67 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon27) << 2) - 4;
				int64_t anon70 = (__sext int64_t)*anon27 << 2;
				int64_t anon69 = (anon70 & 0xc) + arg4;
				phi68 = anon69;
				uint64_t phi_in71 = 0;
				uint64_t phi72 = phi_in64;
				uint32_t phi73 = 0;
				do
				{
					uint32_t anon86;
					int64_t anon88;
					int64_t anon89;
					uint32_t phi90;
					uint32_t anon91;
					int64_t anon95;
					uint32_t phi104;
					uint32_t phi105;
					uint32_t anon108;
					uint64_t phi118;
					uint32_t phi122;
					uint64_t anon124;
					phi74 = phi_in71;
					uint64_t phi75 = phi72;
					uint32_t* anon76 = (uint32_t*)0x601e00;
					*anon76 = *anon27;
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
							uint32_t* anon81 = (uint32_t*)(((__sext int64_t)*anon76 << 2) + arg4);
							*anon80 = *anon81;
							*anon81 = *(uint32_t*)((anon78 << 32 >> 30) + arg4);
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon80;
							anon82 = *anon76 - 1;
							*anon76 = anon82;
							phi77 = *anon76;
						}
						while (anon82 != 0);
						phi75 = *anon9;
					}
					uint64_t phi_in83 = phi75;
					uint32_t* anon84 = (uint32_t*)phi67;
					if (*anon84 == 0)
					{
						uint32_t phi85;
						anon86 = anon1 - 1;
						phi85 = anon86;
						anon89 = anon2 << 32 >> 30;
						anon88 = anon89 + arg4;
						phi87 = anon88;
						phi90 = phi66;
						anon91 = *anon27 - phi73;
						if (phi66 > anon91)
						{
							uint64_t anon92;
							do
							{
								*anon27 = phi85;
								phi85 = *anon27 - 1;
								anon92 = phi87 - 4;
								phi87 = anon92;
							}
							while (*(uint32_t*)anon92 == 0);
							*anon84 = 1;
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
							phi90 = phi66 - 1;
						}
					}
					else 
					{
						uint64_t phi_in94;
						uint32_t phi93 = anon86;
						anon95 = anon89 - 4 + arg4;
						phi_in94 = anon95;
						if (phi66 == 0)
						{
							uint32_t* anon97;
							do
							{
								*anon27 = phi93;
								uint64_t phi96 = phi_in94;
								anon97 = (uint32_t*)phi96;
								if (*anon97 != 0)
								{
									phi93 = *anon27 - 1;
									phi_in94 = phi96 - 4;
								}
							}
							while (*anon97 != 0);
							*anon97 = 1;
							*anon84 = 0;
							phi90 = phi66;
						}
						else 
						{
							phi90 = phi66 - 1;
						}
					}
					uint64_t anon99 = phi68 & 0xffffffff00000000 | phi68 & 0xffffffff;
					uint32_t* anon98 = (uint32_t*)anon99;
					if (*anon98 == 0)
					{
						uint64_t phi100;
						bool anon106;
						uint64_t anon101 = (__zext uint64_t)anon91;
						phi100 = anon101;
						uint32_t phi_in102 = anon86;
						uint64_t phi103 = anon88;
						if (phi63 <= anon91)
						{
							phi104 = phi90;
							phi105 = phi63;
							anon106 = anon1 != 3 | phi63 == 0;
							if (!anon106)
							{
								phi100 = anon101;
								phi_in102 = anon86;
								phi103 = anon88;
								phi104 = phi90;
								phi105 = phi63;
							}
						}
						anon108 = phi73 + anon86 - *anon27;
						bool anon107 = phi90 == 2 | anon91 == anon108;
						if (!anon106 && anon107 || phi63 > anon91)
						{
							bool anon109;
							do
							{
								*anon27 = phi_in102;
								uint64_t anon110 = phi103 - 4;
								anon109 = *anon27 == anon108 | *(uint32_t*)anon110 == 0;
								if (anon109)
								{
									phi100 = phi100 & 0xffffffffffffff00 | (__zext uint64_t)(*anon27 == anon108);
									phi_in102 = *anon27 - 1;
									phi103 = anon110;
								}
							}
							while (anon109);
							*anon98 = 1;
							*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
							phi104 = phi90 - (__zext uint32_t)(anon91 == anon108);
							phi105 = phi63 - 1;
						}
					}
					else 
					{
						uint32_t phi111 = anon86;
						uint64_t phi112 = anon95;
						if (phi63 == 0)
						{
							bool anon113;
							uint32_t* anon114;
							do
							{
								*anon27 = phi111;
								phi111 = *anon27 - 1;
								phi112 = phi112 - 4;
								anon114 = (uint32_t*)phi112;
								anon113 = *anon114 != 0 | *anon27 == anon108;
							}
							while (anon113);
							*anon114 = 1;
							*anon98 = 0;
							phi104 = phi90;
							phi105 = phi63;
						}
						else 
						{
							phi104 = phi90;
							phi105 = phi63 - 1;
						}
					}
					uint64_t* anon115 = (uint64_t*)0x601df0;
					*anon115 = arg4;
					uint32_t phi116 = *anon27;
					uint64_t phi117 = arg4;
					do
					{
						phi118 = phi_in83;
						uint32_t phi_in119 = phi116;
						if (*(uint32_t*)phi117 != 0)
						{
							uint32_t* anon120 = (uint32_t*)phi118;
							uint32_t* anon121 = (uint32_t*)(phi118 + (phi23 << 32 >> 30));
							*anon120 = *anon121;
							*anon121 = *anon120;
							phi_in119 = *anon27;
						}
						phi122 = phi_in119;
						uint32_t anon123 = phi122 - 1;
						*anon27 = anon123;
						phi_in83 = phi118 + 4;
						phi116 = anon123;
						anon124 = phi117 + 4;
						phi117 = anon124;
					}
					while (phi122 != 0);
					*anon115 = anon124;
					uint64_t anon125 = phi118 + 4;
					*anon9 = anon125;
					anon126 = (__zext uint64_t)*anon27;
					if (phi74 != anon126)
					{
						phi66 = phi104;
						phi63 = phi105;
						phi67 = phi67 + 4;
						phi68 = anon99 - 4;
						uint64_t anon127 = phi74 + 1;
						phi_in71 = anon127;
						phi72 = anon125;
						phi73 = (uint32_t)anon127;
					}
				}
				while (phi74 != anon126);
				uint32_t phi_in128 = *anon27;
				uint32_t anon130 = *anon27 + 1;
				uint32_t anon131 = (uint32_t)(anon70 + 4 + arg4 >> 2) & 3;
				uint32_t anon129 = anon130 < 6 ? anon130 : anon130 < anon131 ? anon130 : anon131;
				if (anon129 != 0)
				{
					uint32_t phi_in135;
					int64_t anon134 = anon3 >> 32;
					int64_t anon133 = anon134 & 1;
					anon132 = (uint32_t)(anon133 + anon2 << 32 >> 33) + (uint32_t)anon133 - ((uint32_t)(anon2 + anon134) & 1);
					*(uint32_t*)anon69 = (__zext uint32_t)(*anon27 < anon132);
					uint32_t anon136 = *anon27 - 1;
					phi_in135 = anon136;
					if (anon129 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon136 << 32 >> 30) + arg4) = (__zext uint32_t)(anon136 < anon132);
						uint32_t anon137 = *anon27 - 2;
						phi_in135 = anon137;
						if (anon129 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon137 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon137);
							uint32_t anon138 = *anon27 - 3;
							phi_in135 = anon138;
							if (anon129 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon138 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon138);
								uint32_t anon139 = *anon27 - 4;
								phi_in135 = anon139;
								if (anon129 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon139 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon139);
									phi_in135 = *anon27 - 5;
								}
							}
						}
					}
					phi_in128 = phi_in135;
				}
				if (anon130 != anon129 || anon129 == 0)
				{
					uint32_t anon145;
					uint32_t anon146;
					uint32_t phi140 = phi_in128;
					uint32_t anon141 = *anon27 - anon129;
					if (anon141 >= 3)
					{
						uint32_t anon143;
						uint32_t anon144;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi142 = 0;
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
							anon143 = phi142 + 1;
							anon145 = anon130 - anon129;
							anon144 = (uint32_t)(((__zext uint64_t)anon145 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon143 < anon144)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi142 = anon143;
							}
						}
						while (anon143 < anon144);
						anon146 = anon144 << 2;
						phi140 = phi_in128 - anon146;
					}
					if (anon146 != anon145 || anon141 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi140 << 2) + arg4) = (__zext uint32_t)(phi140 < anon132);
						if (phi140 != 0)
						{
							uint32_t anon147 = phi140 - 1;
							*(uint32_t*)(((__zext uint64_t)anon147 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon147);
							if (anon147 != 0)
							{
								uint32_t anon148 = phi140 - 2;
								*(uint32_t*)(((__sext int64_t)anon148 << 2) + arg4) = (__zext uint32_t)(anon148 < anon132);
							}
						}
					}
				}
				phi65 = *anon58;
			}
			anon149 = phi65 + *(uint64_t*)(arg1 - 168);
			*anon58 = anon149;
			phi60 = anon132;
			phi62 = anon149;
		}
		while (anon149 < anon59);
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
			if (phi18 != phi16 || phi18 != 0)
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
			phi_in50 = *anon30;
			uint32_t phi58 = anon56;
			if ((uint32_t)((__sext int64_t)anon57 % anon36) == 0)
			{
				phi_in50 = *anon30 + anon41;
				phi58 = *anon23;
			}
			phi_in49 = phi58;
			phi_in51 = anon57;
			if (phi58 >= anon9)
			{
				uint32_t anon59 = phi58 - anon9;
				*anon23 = anon59;
				phi_in49 = anon59;
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
