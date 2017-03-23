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
					*(uint32_t*)phi30 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon15 & phi23 ^ (phi23 >> 31) + phi23 >> 1) << 2) + arg3);
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
		uint32_t phi42 = anon38;
		uint64_t phi_in43 = arg2;
		do
		{
			uint64_t anon48;
			*anon25 = anon38;
			uint32_t phi44 = anon38;
			do
			{
				uint64_t phi45 = phi_in43;
				uint32_t* anon46 = (uint32_t*)phi45;
				*anon46 = *anon46 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi42 >> 31) + phi42 >> 1 ^ *anon15 & phi42) << 2) + arg3) << 2);
				uint32_t anon47 = *anon25 - 1;
				*anon25 = anon47;
				anon48 = phi45 + 4;
				phi_in43 = anon48;
				phi44 = anon47;
				phi42 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon49 = *anon8 - 1;
			*anon8 = anon49;
			phi42 = anon49;
			anon50 = anon48 + (arg4 << 32 >> 30);
			phi_in43 = anon50;
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
	uint32_t phi_in14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon27;
	uint64_t phi_in87;
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
		uint64_t anon34;
		uint64_t anon37;
		uint32_t phi38;
		uint32_t anon43;
		phi22 = phi10;
		uint64_t phi25 = arg3;
		do
		{
			phi26 = phi_in14;
			anon27 = (uint32_t*)0x601dec;
			uint32_t anon29 = (uint32_t)anon12;
			uint32_t anon28 = anon29 - 1;
			*anon27 = anon28;
			uint64_t phi30 = phi25;
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
			phi_in14 = phi26 - 1;
			anon37 = phi25 + (anon8 >> 30);
			phi25 = anon37;
		}
		while (phi26 != 256);
		*anon9 = anon37;
		uint32_t anon39 = phi22 + 1;
		int64_t anon41 = (__sext int64_t)phi22 << 2;
		uint32_t anon40 = (uint32_t)(anon41 + 4 + arg4 >> 2) & 3;
		phi38 = anon39 < anon40 ? anon39 : anon40;
		if (phi22 == 4294967295 || phi22 == 4 || phi22 == 3 || phi22 == 2 || phi22 == 1 || phi22 == 0)
		{
			phi38 = anon39;
		}
		uint32_t phi42 = phi22;
		if (phi38 != 0)
		{
			uint32_t phi44;
			anon43 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon41 + arg4) = (__zext uint32_t)(phi22 < anon43);
			uint32_t anon45 = phi22 - 1;
			phi44 = anon45;
			if (phi38 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon45 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon45);
				uint32_t anon46 = phi22 - 2;
				phi44 = anon46;
				if (phi38 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon46);
					uint32_t anon47 = phi22 - 3;
					phi44 = anon47;
					if (phi38 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon47);
						uint32_t anon48 = phi22 - 4;
						phi44 = anon48;
						if (phi38 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon48);
							phi44 = phi22 - 5;
						}
					}
				}
			}
			phi42 = phi44;
			phi23 = anon34;
		}
		if (phi38 == 0 || anon39 != phi38 && phi38 != 0)
		{
			uint32_t anon56;
			uint32_t anon57;
			uint32_t phi49 = phi42;
			uint32_t anon50 = phi22 - phi38;
			if (anon50 >= 3)
			{
				uint32_t anon55;
				uint32_t* anon51 = (uint32_t*)(arg1 - 240);
				*anon51 = phi49;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon51 = anon43;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in52 = 0;
				do
				{
					uint32_t phi53 = phi_in52;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon54 = phi53 + 1;
					phi_in52 = anon54;
					anon56 = anon39 - phi38;
					anon55 = (uint32_t)(((__zext uint64_t)anon56 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon54 < anon55);
				phi23 = anon34;
				anon57 = anon55 << 2;
				phi49 = phi49 - anon57;
			}
			if (anon56 != anon57 && anon50 >= 3 || anon50 < 3)
			{
				*(uint32_t*)(((__sext int64_t)phi49 << 2) + arg4) = (__zext uint32_t)(anon43 > phi49);
				phi23 = anon34;
				if (phi49 != 0)
				{
					uint32_t anon58 = phi49 - 1;
					*(uint32_t*)(((__zext uint64_t)anon58 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon58);
					phi23 = anon34;
					if (anon58 != 0)
					{
						uint32_t anon59 = phi49 - 2;
						*(uint32_t*)(((__sext int64_t)anon59 << 2) + arg4) = (__zext uint32_t)(anon43 > anon59);
						phi23 = anon34;
					}
				}
			}
		}
	}
	uint32_t* anon60 = (uint32_t*)0x601e00;
	*anon60 = phi22;
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
			uint32_t phi75;
			uint64_t phi76;
			uint64_t anon99;
			uint64_t anon127;
			uint32_t anon132;
			uint64_t phi66 = phi65;
			*anon9 = phi66;
			uint64_t phi67 = phi66;
			if (anon1 != 0)
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
				uint64_t phi120;
				uint32_t phi124;
				uint64_t anon126;
				uint32_t phi68 = phi_in63;
				uint32_t phi69 = phi_in63;
				phi70 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon60) << 2) - 4;
				int64_t anon73 = (__sext int64_t)*anon60 << 2;
				int64_t anon72 = (anon73 & 0xc) + arg4;
				phi71 = anon72;
				phi_in74 = 0;
				phi75 = 0;
				phi76 = phi_in74;
				uint32_t phi77 = anon1;
				if (*anon60 != 0)
				{
					uint32_t anon82;
					do
					{
						uint32_t anon79 = rand();
						uint64_t anon78 = ((__zext uint64_t)(anon79 > 4294967295 ? anon79 : anon79 + 255) << 32 >> 40) % (__sext int64_t)phi77;
						*anon27 = (uint32_t)anon78;
						uint32_t* anon80 = (uint32_t*)0x601e08;
						uint32_t* anon81 = (uint32_t*)(((__sext int64_t)*anon60 << 2) + arg4);
						*anon80 = *anon81;
						*anon81 = *(uint32_t*)((anon78 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon80;
						anon82 = *anon60 - 1;
						*anon60 = anon82;
						phi77 = *anon60;
					}
					while (anon82 != 0);
					phi66 = *anon9;
				}
				uint64_t phi_in83 = phi66;
				uint32_t* anon84 = (uint32_t*)phi70;
				if (*anon84 == 0)
				{
					uint32_t phi_in85;
					anon86 = anon1 - 1;
					phi_in85 = anon86;
					anon89 = anon2 << 32 >> 30;
					anon88 = anon89 + arg4;
					phi_in87 = anon88;
					phi90 = phi68;
					anon91 = *anon60 - phi75;
					if (phi68 > anon91)
					{
						uint64_t anon93;
						do
						{
							*anon27 = phi_in85;
							uint64_t phi92 = phi_in87;
							phi_in85 = *anon27 - 1;
							anon93 = phi92 - 4;
							phi_in87 = anon93;
						}
						while (*(uint32_t*)anon93 == 0);
						*anon84 = 1;
						*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
						phi90 = phi68 - 1;
					}
				}
				else 
				{
					uint64_t phi_in94;
					*anon27 = anon86;
					anon95 = anon89 - 4 + arg4;
					phi_in94 = anon95;
					if (phi68 == 0)
					{
						uint32_t* anon97;
						do
						{
							uint64_t phi96 = phi_in94;
							anon97 = (uint32_t*)phi96;
							if (*anon97 != 0)
							{
								*anon27 = *anon27 - 1;
								phi_in94 = phi96 - 4;
							}
						}
						while (*anon97 != 0);
						*anon97 = 1;
						*anon84 = 0;
						phi90 = phi68;
					}
					else 
					{
						phi90 = phi68 - 1;
					}
				}
				anon99 = phi71 & 0xffffffff00000000 | phi71 & 0xffffffff;
				uint32_t* anon98 = (uint32_t*)anon99;
				if (*anon98 == 0)
				{
					uint64_t phi100;
					bool anon106;
					uint64_t anon101 = (__zext uint64_t)anon91;
					phi100 = anon101;
					uint32_t phi_in102 = anon86;
					uint64_t phi_in103 = anon88;
					if (phi69 <= anon91)
					{
						phi104 = phi90;
						phi105 = phi69;
						anon106 = anon1 != 3 | phi69 == 0;
						if (!anon106)
						{
							phi100 = anon101;
							phi_in102 = anon86;
							phi_in103 = anon88;
							phi104 = phi90;
							phi105 = phi69;
						}
					}
					anon108 = phi75 + anon86 - *anon60;
					bool anon107 = phi90 == 2 | anon91 == anon108;
					if (!anon106 && phi69 <= anon91 && anon107 || phi69 > anon91)
					{
						bool anon110;
						do
						{
							*anon27 = phi_in102;
							uint64_t phi109 = phi_in103;
							uint64_t anon111 = phi109 - 4;
							anon110 = *anon27 == anon108 | *(uint32_t*)anon111 == 0;
							if (anon110)
							{
								phi100 = phi100 & 0xffffffffffffff00 | (__zext uint64_t)(*anon27 == anon108);
								phi_in102 = *anon27 - 1;
								phi_in103 = anon111;
							}
						}
						while (anon110);
						*anon98 = 1;
						*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = 0;
						phi104 = phi90 - (__zext uint32_t)(anon91 == anon108);
						phi105 = phi69 - 1;
					}
				}
				else 
				{
					uint32_t phi_in112 = anon86;
					uint64_t phi_in113 = anon95;
					if (phi69 == 0)
					{
						bool anon115;
						uint32_t* anon116;
						do
						{
							*anon27 = phi_in112;
							uint64_t phi114 = phi_in113;
							phi_in112 = *anon27 - 1;
							phi_in113 = phi114 - 4;
							anon116 = (uint32_t*)phi114;
							anon115 = *anon116 != 0 | *anon27 == anon108;
						}
						while (anon115);
						*anon116 = 1;
						*anon98 = 0;
						phi104 = phi90;
						phi105 = phi69;
					}
					else 
					{
						phi104 = phi90;
						phi105 = phi69 - 1;
					}
				}
				phi68 = phi104;
				phi69 = phi105;
				uint64_t* anon117 = (uint64_t*)0x601df0;
				*anon117 = arg4;
				*anon27 = *anon60;
				uint32_t phi_in118 = *anon60;
				uint64_t phi_in119 = arg4;
				do
				{
					phi120 = phi_in83;
					uint64_t phi121 = phi_in119;
					if (*(uint32_t*)phi121 != 0)
					{
						uint32_t* anon122 = (uint32_t*)phi120;
						uint32_t* anon123 = (uint32_t*)(phi120 + (phi23 << 32 >> 30));
						*anon122 = *anon123;
						*anon123 = *anon122;
						phi_in118 = *anon27;
					}
					phi124 = phi_in118;
					uint32_t anon125 = phi124 - 1;
					*anon27 = anon125;
					phi_in83 = phi120 + 4;
					phi_in118 = anon125;
					anon126 = phi121 + 4;
					phi_in119 = anon126;
				}
				while (phi124 != 0);
				*anon117 = anon126;
				anon127 = phi120 + 4;
				*anon9 = anon127;
				uint32_t phi128 = *anon60;
				uint32_t anon130 = *anon60 + 1;
				uint32_t anon131 = (uint32_t)(anon73 + 4 + arg4 >> 2) & 3;
				uint32_t anon129 = anon130 < 6 ? anon130 : anon130 < anon131 ? anon130 : anon131;
				if (anon129 != 0)
				{
					uint32_t phi_in135;
					int64_t anon134 = anon3 >> 32;
					int64_t anon133 = anon134 & 1;
					anon132 = (uint32_t)(anon133 + anon2 << 32 >> 33) + (uint32_t)anon133 - ((uint32_t)(anon2 + anon134) & 1);
					*(uint32_t*)anon72 = (__zext uint32_t)(*anon60 < anon132);
					uint32_t anon136 = *anon60 - 1;
					phi_in135 = anon136;
					if (anon129 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon136 << 32 >> 30) + arg4) = (__zext uint32_t)(anon136 < anon132);
						uint32_t anon137 = *anon60 - 2;
						phi_in135 = anon137;
						if (anon129 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon137 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon137);
							uint32_t anon138 = *anon60 - 3;
							phi_in135 = anon138;
							if (anon129 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon138 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon138);
								uint32_t anon139 = *anon60 - 4;
								phi_in135 = anon139;
								if (anon129 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon139 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon139);
									phi_in135 = *anon60 - 5;
								}
							}
						}
					}
					phi128 = phi_in135;
				}
				if (anon129 == 0 || anon130 != anon129 && anon129 != 0)
				{
					uint32_t anon146;
					uint32_t anon147;
					uint32_t phi140 = phi128;
					uint32_t anon141 = *anon60 - anon129;
					if (anon141 >= 3)
					{
						uint32_t anon144;
						uint32_t anon145;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in142 = 0;
						do
						{
							uint32_t phi143 = phi_in142;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon144 = phi143 + 1;
							anon146 = anon130 - anon129;
							anon145 = (uint32_t)(((__zext uint64_t)anon146 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon144 < anon145)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in142 = anon144;
							}
						}
						while (anon144 < anon145);
						anon147 = anon145 << 2;
						phi140 = phi128 - anon147;
					}
					if (anon141 < 3 || anon147 != anon146 && anon141 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi140 << 2) + arg4) = (__zext uint32_t)(phi140 < anon132);
						if (phi140 != 0)
						{
							uint32_t anon148 = phi140 - 1;
							*(uint32_t*)(((__zext uint64_t)anon148 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 > anon148);
							if (anon148 != 0)
							{
								uint32_t anon149 = phi140 - 2;
								*(uint32_t*)(((__sext int64_t)anon149 << 2) + arg4) = (__zext uint32_t)(anon149 < anon132);
							}
						}
					}
				}
				phi67 = *anon61;
			}
			uint64_t anon150 = phi67 + *(uint64_t*)(arg1 - 168);
			*anon61 = anon150;
			phi_in63 = anon132;
			phi65 = anon150;
			phi70 = phi70 + 4;
			uint64_t phi71 = anon99 - 4;
			uint64_t anon151 = phi76 + 1;
			phi_in74 = anon151;
			phi66 = anon127;
			phi75 = (uint32_t)anon151;
			break;
		}
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
			*(uint32_t*)phi12 = phi13;
			if (phi13 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon3 = anon18;
				*anon2 = phi12;
				*(uint32_t*)phi12 = anon18;
				if (phi13 == 0)
				{
					break;
				}
			}
			if (phi13 != phi16 || phi13 != 0 && phi13 == phi16)
			{
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
	uint64_t phi_in32 = arg2;
	uint32_t phi33 = 0;
	while (true)
	{
		uint64_t anon53;
		uint32_t phi34 = phi_in30;
		*anon29 = phi_in31;
		uint64_t phi35 = phi_in32;
		uint64_t anon36 = anon28 >> 32;
		if ((uint32_t)(anon36 * anon36) <= phi33)
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
				*anon22 = (uint32_t)anon38;
				uint32_t* anon40 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon25 = *anon40;
				*anon40 = *(uint32_t*)((anon38 << 32 >> 30) + arg4);
				*(uint32_t*)((anon38 << 32 >> 30) + arg4) = *anon25;
				uint32_t anon41 = *anon3 - 1;
				*anon3 = anon41;
			}
			*anon3 = 0;
			*anon22 = anon4;
			*anon29 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in42 = anon4;
			uint64_t phi_in43 = arg3;
			uint32_t phi_in44 = 0;
			do
			{
				*anon22 = phi_in42;
				*anon29 = phi_in43;
				phi45 = phi_in44;
				anon46 = (uint32_t)anon36;
				if (anon46 * anon46 > phi45)
				{
					uint32_t* anon47 = (uint32_t*)(*anon29 + ((__sext int64_t)phi45 << 2));
					uint32_t anon48 = *anon47 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4);
					*anon47 = anon48;
					uint32_t anon49 = *anon22 + 1;
					*anon22 = anon49;
					uint32_t anon50 = anon48 + 1;
					*anon3 = anon50;
					uint64_t phi51 = *anon29;
					uint32_t phi52 = anon49;
					if ((uint32_t)((__sext int64_t)anon50 % anon36) == 0)
					{
						anon53 = arg5 << 32 >> 30;
						phi51 = *anon29 + anon53;
						phi52 = *anon22;
					}
					phi_in42 = phi52;
					phi_in43 = phi51;
					phi_in44 = anon50;
					if (phi52 >= anon9)
					{
						uint32_t anon54 = phi52 - anon9;
						*anon22 = anon54;
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
		uint32_t anon55 = *anon6 * *(uint32_t*)(((__sext int64_t)phi34 << 2) + arg4);
		*(uint32_t*)(*anon29 + ((__sext int64_t)phi33 << 2)) = anon55;
		uint32_t anon56 = anon55 + 1;
		*anon3 = anon56;
		uint32_t anon57 = phi34 + ((uint32_t)((__sext int64_t)anon56 % (phi35 << 32 >> 32)) == 0 ? 2 : 1);
		*anon22 = anon57;
		phi_in30 = anon57;
		uint64_t anon58 = *anon29 + ((uint32_t)((__sext int64_t)anon56 % (phi35 << 32 >> 32)) == 0 ? anon53 : 0);
		phi_in31 = anon58;
		uint64_t anon59 = arg2 & 0xffffffff;
		phi_in32 = anon59;
		phi33 = anon56;
		if (anon57 >= anon9)
		{
			uint32_t anon60 = anon57 - anon9;
			*anon22 = anon60;
			phi_in30 = anon60;
			phi_in31 = anon58;
			phi_in32 = anon59;
			phi33 = anon56;
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
