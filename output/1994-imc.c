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
			phi20 = anon34;
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
		uint32_t phi43 = anon39;
		uint64_t phi_in44 = arg2;
		do
		{
			uint64_t anon50;
			uint32_t phi45 = phi43;
			*anon25 = anon39;
			uint64_t phi46 = phi_in44;
			uint32_t phi47 = anon39;
			do
			{
				uint32_t* anon48 = (uint32_t*)phi46;
				*anon48 = *anon48 + (*(uint32_t*)(((__sext int64_t)(phi47 ^ (phi45 >> 31) + phi45 >> 1 ^ *anon15 & phi45) << 2) + arg3) << 2);
				uint32_t anon49 = *anon25 - 1;
				*anon25 = anon49;
				anon50 = phi46 + 4;
				phi46 = anon50;
				phi47 = anon49;
				phi45 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon51 = *anon8 - 1;
			*anon8 = anon51;
			phi43 = anon51;
			anon52 = anon50 + (arg4 << 32 >> 30);
			phi_in44 = anon52;
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
	uint32_t* anon22;
	uint64_t phi23;
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
			anon22 = (uint32_t*)0x601dec;
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
	if (anon1 != 4 && anon1 != 0 || anon1 == 4)
	{
		uint64_t anon34;
		uint64_t anon37;
		uint32_t phi38;
		uint32_t anon43;
		uint32_t phi25 = phi14;
		uint64_t phi26 = arg3;
		do
		{
			uint64_t phi27 = phi26;
			uint32_t anon29 = (uint32_t)anon12;
			uint32_t anon28 = anon29 - 1;
			*anon22 = anon28;
			uint64_t phi30 = phi27;
			uint32_t phi31 = anon28;
			if (anon29 != 0)
			{
				do
				{
					uint64_t phi32 = 3;
					if (anon1 > phi31)
					{
						uint32_t* anon33 = (uint32_t*)phi27;
						*anon33 = *anon33 + (phi15 * phi15 << 1);
						phi32 = ((__zext uint64_t)(anon1 <= *anon22) << 2) + 4294967295 & 0xffffffff;
					}
					anon34 = phi11 & 0xffffffff;
					*(uint32_t*)(phi27 + (anon34 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi32) + *(uint32_t*)phi27;
					uint32_t anon35 = *anon22 - 1;
					*anon22 = anon35;
					uint64_t anon36 = phi27 + 4;
					phi30 = anon36;
					phi27 = anon36;
					phi31 = anon35;
				}
				while (*anon22 != 0);
			}
			phi25 = phi25 - 1;
			anon37 = phi30 + (anon8 >> 30);
			phi26 = anon37;
		}
		while (phi25 != 256);
		*anon9 = anon37;
		uint32_t anon39 = phi10 + 1;
		int64_t anon41 = (__sext int64_t)phi10 << 2;
		uint32_t anon40 = (uint32_t)(anon41 + 4 + arg4 >> 2) & 3;
		phi38 = anon39 < anon40 ? anon39 : anon40;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi38 = anon39;
		}
		uint32_t phi42 = phi10;
		if (phi38 != 0)
		{
			anon43 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon41 + arg4) = (__zext uint32_t)(phi10 < anon43);
			uint32_t anon44 = phi10 - 1;
			phi42 = anon44;
			if (phi38 != 1)
			{
				*(uint32_t*)(((__zext uint64_t)anon44 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon44);
				uint32_t anon45 = phi10 - 2;
				phi42 = anon45;
				if (phi38 != 2)
				{
					*(uint32_t*)(((__zext uint64_t)anon45 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon45);
					uint32_t anon46 = phi10 - 3;
					phi42 = anon46;
					if (phi38 != 3)
					{
						*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon46);
						uint32_t anon47 = phi10 - 4;
						phi42 = anon47;
						if (phi38 == 5)
						{
							*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon43 > anon47);
							phi42 = phi10 - 5;
						}
					}
				}
			}
			*anon22 = phi10;
			phi23 = anon34;
		}
		if (phi38 == 0 || anon39 != phi38 && phi38 != 0)
		{
			uint32_t anon54;
			uint32_t anon55;
			uint32_t* anon48 = (uint32_t*)(arg1 - 240);
			*anon48 = phi42;
			uint32_t phi49 = *anon48;
			uint32_t anon50 = phi10 - phi38;
			if (anon50 >= 3)
			{
				uint32_t anon53;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon48 = anon43;
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
				phi49 = *anon48 - anon55;
			}
			if (anon54 != anon55 && anon50 >= 3 || anon50 < 3)
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
		uint32_t phi60;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon61 = anon2 + 1;
		phi60 = (uint32_t)(anon61 + (anon61 >> 31 & 1) << 32 >> 33);
		uint64_t phi62 = arg3;
		while (true)
		{
			uint64_t phi66;
			uint64_t phi70;
			uint32_t phi71;
			uint64_t anon97;
			uint64_t anon123;
			uint32_t anon128;
			uint32_t phi_in63 = phi60;
			*anon9 = phi62;
			uint64_t phi64 = *anon9;
			if (anon1 != 0)
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
				phi60 = phi_in63;
				uint32_t phi65 = phi_in63;
				phi66 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon22) << 2) - 4;
				int64_t anon69 = (__sext int64_t)*anon22 << 2;
				int64_t anon68 = (anon69 & 0xc) + arg4;
				phi67 = anon68;
				phi70 = 0;
				phi62 = *anon9;
				phi71 = 0;
				uint32_t phi72 = phi60;
				uint64_t phi_in73 = phi62;
				uint32_t* anon74 = (uint32_t*)0x601e00;
				*anon74 = *anon22;
				uint64_t phi75 = phi_in73;
				uint32_t phi76 = anon1;
				if (*anon22 != 0)
				{
					uint32_t anon81;
					do
					{
						uint32_t anon78 = rand();
						uint64_t anon77 = ((__zext uint64_t)(anon78 > 4294967295 ? anon78 : anon78 + 255) << 32 >> 40) % (__sext int64_t)phi76;
						*anon22 = (uint32_t)anon77;
						uint32_t* anon79 = (uint32_t*)0x601e08;
						uint32_t* anon80 = (uint32_t*)(((__sext int64_t)*anon74 << 2) + arg4);
						*anon79 = *anon80;
						*anon80 = *(uint32_t*)((anon77 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4) = *anon79;
						anon81 = *anon74 - 1;
						*anon74 = anon81;
						phi76 = *anon74;
					}
					while (anon81 != 0);
					phi75 = *anon9;
				}
				uint64_t phi_in82 = phi75;
				uint32_t* anon83 = (uint32_t*)phi66;
				if (*anon83 == 0)
				{
					uint32_t phi84;
					anon85 = anon1 - 1;
					phi84 = anon85;
					anon88 = anon2 << 32 >> 30;
					anon87 = anon88 + arg4;
					phi86 = anon87;
					anon89 = *anon22 - phi71;
					if (phi72 > anon89)
					{
						uint64_t anon90;
						do
						{
							*anon22 = phi84;
							phi84 = *anon22 - 1;
							anon90 = phi86 - 4;
							phi86 = anon90;
						}
						while (*(uint32_t*)anon90 == 0);
						*anon83 = 1;
						*(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4) = 0;
						phi72 = phi72 - 1;
					}
				}
				else 
				{
					uint64_t phi_in92;
					uint32_t phi91 = anon85;
					anon93 = anon88 - 4 + arg4;
					phi_in92 = anon93;
					if (phi72 == 0)
					{
						uint32_t* anon95;
						do
						{
							*anon22 = phi91;
							uint64_t phi94 = phi_in92;
							anon95 = (uint32_t*)phi94;
							if (*anon95 != 0)
							{
								phi91 = *anon22 - 1;
								phi_in92 = phi94 - 4;
							}
						}
						while (*anon95 != 0);
						*anon95 = 1;
						*anon83 = 0;
					}
					else 
					{
						phi72 = phi72 - 1;
					}
				}
				anon97 = phi67 & 0xffffffff00000000 | phi67 & 0xffffffff;
				uint32_t* anon96 = (uint32_t*)anon97;
				if (*anon96 == 0)
				{
					uint64_t phi98;
					bool anon104;
					uint64_t anon99 = (__zext uint64_t)anon89;
					phi98 = anon99;
					uint32_t phi_in100 = anon85;
					uint64_t phi101 = anon87;
					if (phi65 <= anon89)
					{
						phi102 = phi72;
						phi103 = phi65;
						anon104 = anon1 != 3 | phi65 == 0;
						if (!anon104)
						{
							phi98 = anon99;
							phi_in100 = anon85;
							phi101 = anon87;
							phi102 = phi72;
							phi103 = phi65;
						}
					}
					anon106 = phi71 + anon85 - *anon22;
					bool anon105 = phi72 == 2 | anon89 == anon106;
					if (!anon104 && phi65 <= anon89 && anon105 || phi65 > anon89)
					{
						bool anon107;
						do
						{
							*anon22 = phi_in100;
							uint64_t anon108 = phi101 - 4;
							anon107 = *anon22 == anon106 | *(uint32_t*)anon108 == 0;
							if (anon107)
							{
								phi98 = phi98 & 0xffffffffffffff00 | (__zext uint64_t)(*anon22 == anon106);
								phi_in100 = *anon22 - 1;
								phi101 = anon108;
							}
						}
						while (anon107);
						*anon96 = 1;
						*(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4) = 0;
						phi102 = phi72 - (__zext uint32_t)(anon89 == anon106);
						phi103 = phi65 - 1;
					}
				}
				else 
				{
					uint32_t phi109 = anon85;
					uint64_t phi110 = anon93;
					if (phi65 == 0)
					{
						bool anon111;
						uint32_t* anon112;
						do
						{
							*anon22 = phi109;
							phi109 = *anon22 - 1;
							phi110 = phi110 - 4;
							anon112 = (uint32_t*)phi110;
							anon111 = *anon112 != 0 | *anon22 == anon106;
						}
						while (anon111);
						*anon112 = 1;
						*anon96 = 0;
						phi102 = phi72;
						phi103 = phi65;
					}
					else 
					{
						phi102 = phi72;
						phi103 = phi65 - 1;
					}
				}
				phi60 = phi102;
				phi65 = phi103;
				uint64_t* anon113 = (uint64_t*)0x601df0;
				*anon113 = arg4;
				uint32_t phi114 = *anon22;
				uint64_t phi115 = arg4;
				do
				{
					phi116 = phi_in82;
					uint32_t phi_in117 = phi114;
					if (*(uint32_t*)phi115 != 0)
					{
						uint32_t* anon118 = (uint32_t*)phi116;
						uint32_t* anon119 = (uint32_t*)(phi116 + (phi23 << 32 >> 30));
						*anon118 = *anon119;
						*anon119 = *anon118;
						phi_in117 = *anon22;
					}
					phi120 = phi_in117;
					uint32_t anon121 = phi120 - 1;
					*anon22 = anon121;
					phi_in82 = phi116 + 4;
					phi114 = anon121;
					anon122 = phi115 + 4;
					phi115 = anon122;
				}
				while (phi120 != 0);
				*anon113 = anon122;
				anon123 = phi116 + 4;
				*anon9 = anon123;
				uint32_t phi124 = *anon22;
				uint32_t anon126 = *anon22 + 1;
				uint32_t anon127 = (uint32_t)(anon69 + 4 + arg4 >> 2) & 3;
				uint32_t anon125 = anon126 < 6 ? anon126 : anon126 < anon127 ? anon126 : anon127;
				if (anon125 != 0)
				{
					uint32_t phi_in131;
					int64_t anon130 = anon3 >> 32;
					int64_t anon129 = anon130 & 1;
					anon128 = (uint32_t)(anon129 + anon2 << 32 >> 33) + (uint32_t)anon129 - ((uint32_t)(anon2 + anon130) & 1);
					*(uint32_t*)anon68 = (__zext uint32_t)(*anon22 < anon128);
					uint32_t anon132 = *anon22 - 1;
					phi_in131 = anon132;
					if (anon125 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon132 << 32 >> 30) + arg4) = (__zext uint32_t)(anon132 < anon128);
						uint32_t anon133 = *anon22 - 2;
						phi_in131 = anon133;
						if (anon125 != 2)
						{
							*(uint32_t*)(((__zext uint64_t)anon133 << 32 >> 30) + arg4) = (__zext uint32_t)(anon128 > anon133);
							uint32_t anon134 = *anon22 - 3;
							phi_in131 = anon134;
							if (anon125 != 3)
							{
								*(uint32_t*)(((__zext uint64_t)anon134 << 32 >> 30) + arg4) = (__zext uint32_t)(anon128 > anon134);
								uint32_t anon135 = *anon22 - 4;
								phi_in131 = anon135;
								if (anon125 == 5)
								{
									*(uint32_t*)(((__zext uint64_t)anon135 << 32 >> 30) + arg4) = (__zext uint32_t)(anon128 > anon135);
									phi_in131 = *anon22 - 5;
								}
							}
						}
					}
					phi124 = phi_in131;
				}
				if (anon125 == 0 || anon126 != anon125 && anon125 != 0)
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
					if (anon137 < 3 || anon142 != anon141 && anon137 >= 3)
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
				phi64 = *anon58;
			}
			uint64_t anon145 = phi64 + *(uint64_t*)(arg1 - 168);
			*anon58 = anon145;
			phi60 = anon128;
			phi62 = anon145;
			phi66 = phi66 + 4;
			uint64_t phi67 = anon97 - 4;
			uint64_t anon146 = phi70 + 1;
			phi70 = anon146;
			phi62 = anon123;
			phi71 = (uint32_t)anon146;
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
			if (*(uint32_t*)phi12 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon3 = anon18;
				*anon2 = phi12;
				*(uint32_t*)phi12 = anon18;
				if (*(uint32_t*)phi12 == 0)
				{
					break;
				}
			}
			if (*(uint32_t*)phi12 != phi16 || *(uint32_t*)phi12 != 0 && *(uint32_t*)phi12 == phi16)
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
	uint64_t phi32 = arg2;
	uint32_t phi33 = 0;
	while (true)
	{
		uint64_t anon52;
		uint32_t phi34 = phi_in30;
		*anon29 = phi_in31;
		uint64_t anon35 = anon28 >> 32;
		if ((uint32_t)(anon35 * anon35) <= phi33)
		{
			uint64_t phi36;
			uint32_t phi44;
			uint32_t anon45;
			*anon3 = *(uint32_t*)(arg1 - 68);
			if (*(uint32_t*)(arg1 - 68) != 0)
			{
				phi36 = anon5 & 0xffffffff;
				uint32_t anon38 = rand();
				uint64_t anon37 = ((__zext uint64_t)(anon38 > 4294967295 ? anon38 : anon38 + 255) << 32 >> 40) % (phi36 << 32 >> 32);
				*anon22 = (uint32_t)anon37;
				uint32_t* anon39 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon25 = *anon39;
				*anon39 = *(uint32_t*)((anon37 << 32 >> 30) + arg4);
				*(uint32_t*)((anon37 << 32 >> 30) + arg4) = *anon25;
				uint32_t anon40 = *anon3 - 1;
				*anon3 = anon40;
			}
			*anon3 = 0;
			*anon22 = anon4;
			*anon29 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in41 = anon4;
			uint64_t phi_in42 = arg3;
			uint32_t phi_in43 = 0;
			do
			{
				*anon22 = phi_in41;
				*anon29 = phi_in42;
				phi44 = phi_in43;
				anon45 = (uint32_t)anon35;
				if (anon45 * anon45 > phi44)
				{
					uint32_t* anon46 = (uint32_t*)(*anon29 + ((__sext int64_t)phi44 << 2));
					uint32_t anon47 = *anon46 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4);
					*anon46 = anon47;
					uint32_t anon48 = *anon22 + 1;
					*anon22 = anon48;
					uint32_t anon49 = anon47 + 1;
					*anon3 = anon49;
					uint64_t phi50 = *anon29;
					uint32_t phi51 = anon48;
					if ((uint32_t)((__sext int64_t)anon49 % anon35) == 0)
					{
						anon52 = arg5 << 32 >> 30;
						phi50 = *anon29 + anon52;
						phi51 = *anon22;
					}
					phi_in41 = phi51;
					phi_in42 = phi50;
					phi_in43 = anon49;
					if (phi51 >= anon9)
					{
						uint32_t anon53 = phi51 - anon9;
						*anon22 = anon53;
						phi_in41 = anon53;
						phi_in42 = phi50;
						phi_in43 = anon49;
					}
				}
			}
			while (anon45 * anon45 > phi44);
			phi36 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon54 = *anon6 * *(uint32_t*)(((__sext int64_t)phi34 << 2) + arg4);
		*(uint32_t*)(*anon29 + ((__sext int64_t)phi33 << 2)) = anon54;
		uint32_t anon55 = anon54 + 1;
		*anon3 = anon55;
		uint32_t anon56 = phi34 + ((uint32_t)((__sext int64_t)anon55 % (phi32 << 32 >> 32)) == 0 ? 2 : 1);
		*anon22 = anon56;
		phi_in30 = anon56;
		uint64_t anon57 = *anon29 + ((uint32_t)((__sext int64_t)anon55 % (phi32 << 32 >> 32)) == 0 ? anon52 : 0);
		phi_in31 = anon57;
		uint64_t anon58 = arg2 & 0xffffffff;
		phi32 = anon58;
		phi33 = anon55;
		if (anon56 >= anon9)
		{
			uint32_t anon59 = anon56 - anon9;
			*anon22 = anon59;
			phi_in30 = anon59;
			phi_in31 = anon57;
			phi32 = anon58;
			phi33 = anon55;
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
