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
	uint32_t* anon24;
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
		uint32_t phi26;
		uint64_t anon33;
		uint32_t phi20 = anon19;
		uint64_t phi_in21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi23 = phi20;
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon25 = anon9 - 1;
			*anon24 = anon25;
			phi26 = phi23;
			uint64_t phi27 = phi_in21;
			uint32_t phi28 = anon25;
			uint64_t phi29 = phi_in21;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon16 & phi23 ^ (phi23 >> 31) + phi23 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon24 - 1;
					*anon24 = anon30;
					phi26 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi27 = anon31;
					phi28 = anon30;
					phi23 = *anon8;
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
	uint32_t anon34 = rand();
	uint32_t anon35 = (uint32_t)(((__zext uint64_t)(anon34 > 4294967295 ? anon34 : anon34 + 255) << 32 >> 40) % anon4);
	*anon2 = anon35;
	*anon5 = 3 - anon35;
	uint32_t anon36 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint32_t anon37 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon37;
	uint64_t anon40 = (__zext uint64_t)anon36;
	uint64_t anon39 = (anon36 > 4294967295 ? anon40 : anon40 + 255) >> 31 & 1;
	uint32_t anon38 = *(uint32_t*)(((__zext uint64_t)(((anon36 > 4294967295 ? anon36 : anon36 + 255) & 0x100) != 0 ^ anon39 != 0) - anon39 << 2) + arg3) ^ 1;
	*anon10 = anon38;
	*anon14 = 3 - anon38;
	if (anon9 != 0)
	{
		uint64_t anon51;
		uint32_t phi41 = anon37;
		uint64_t phi42 = arg2;
		do
		{
			uint64_t anon49;
			uint32_t phi43 = phi41;
			uint64_t phi_in44 = phi42;
			*anon24 = anon37;
			uint32_t phi45 = anon37;
			do
			{
				uint64_t phi46 = phi_in44;
				uint32_t* anon47 = (uint32_t*)phi46;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi45 ^ (phi43 >> 31) + phi43 >> 1 ^ *anon16 & phi43) << 2) + arg3) << 2);
				uint32_t anon48 = *anon24 - 1;
				*anon24 = anon48;
				anon49 = phi46 + 4;
				phi_in44 = anon49;
				phi45 = anon48;
				phi43 = *anon8;
			}
			while (*anon24 != 0);
			uint32_t anon50 = *anon8 - 1;
			*anon8 = anon50;
			phi41 = anon50;
			anon51 = anon49 + (arg4 << 32 >> 30);
			phi42 = anon51;
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
	uint32_t* anon29;
	uint64_t phi_in105;
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
		uint64_t anon36;
		uint64_t anon39;
		uint32_t phi40;
		uint32_t anon45;
		phi22 = phi10;
		uint32_t phi_in25 = phi14;
		uint64_t phi26 = arg3;
		do
		{
			phi27 = phi_in25;
			uint64_t phi28 = phi26;
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
			phi_in25 = phi27 - 1;
			anon39 = phi32 + (anon8 >> 30);
			phi26 = anon39;
		}
		while (phi27 != 256);
		*anon9 = anon39;
		uint32_t anon41 = phi22 + 1;
		int64_t anon43 = (__sext int64_t)phi22 << 2;
		uint32_t anon42 = (uint32_t)(anon43 + 4 + arg4 >> 2) & 3;
		phi40 = anon41 < anon42 ? anon41 : anon42;
		if (phi22 == 4294967295 || phi22 == 4 || phi22 == 3 || phi22 == 2 || phi22 == 1 || phi22 == 0)
		{
			phi40 = anon41;
		}
		uint32_t phi44 = phi22;
		if (phi40 != 0)
		{
			uint32_t phi46;
			anon45 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon43 + arg4) = (__zext uint32_t)(phi22 < anon45);
			uint32_t anon47 = phi22 - 1;
			phi46 = anon47;
			if (phi40 != 1)
			{
				struct { uint32_t field0; bool field1; } anon48 = llvm.ssub.with.overflow.i32(anon45, anon47);
				uint32_t anon49 = anon45 - anon47;
				*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon49 != 0 & !(anon49 < 0 ^ anon48.field1));
				uint32_t anon50 = phi22 - 2;
				phi46 = anon50;
				if (phi40 != 2)
				{
					struct { uint32_t field0; bool field1; } anon51 = llvm.ssub.with.overflow.i32(anon45, anon50);
					uint32_t anon52 = anon45 - anon50;
					*(uint32_t*)(((__zext uint64_t)anon50 << 32 >> 30) + arg4) = (__zext uint32_t)(anon52 != 0 & !(anon52 < 0 ^ anon51.field1));
					uint32_t anon53 = phi22 - 3;
					phi46 = anon53;
					if (phi40 != 3)
					{
						struct { uint32_t field0; bool field1; } anon54 = llvm.ssub.with.overflow.i32(anon45, anon53);
						uint32_t anon55 = anon45 - anon53;
						*(uint32_t*)(((__zext uint64_t)anon53 << 32 >> 30) + arg4) = (__zext uint32_t)(anon55 != 0 & !(anon55 < 0 ^ anon54.field1));
						uint32_t anon56 = phi22 - 4;
						phi46 = anon56;
						if (phi40 == 5)
						{
							struct { uint32_t field0; bool field1; } anon57 = llvm.ssub.with.overflow.i32(anon45, anon56);
							uint32_t anon58 = anon45 - anon56;
							*(uint32_t*)(((__zext uint64_t)anon56 << 32 >> 30) + arg4) = (__zext uint32_t)(anon58 != 0 & !(anon58 < 0 ^ anon57.field1));
							phi46 = phi22 - 5;
						}
					}
				}
			}
			uint32_t phi_in59 = phi46;
			phi23 = anon36;
			phi44 = phi_in59;
		}
		if (phi40 == 0 || anon41 != phi40 && phi40 != 0)
		{
			uint32_t anon67;
			uint32_t anon68;
			uint32_t phi60 = phi44;
			uint32_t anon61 = phi22 - phi40;
			if (anon61 >= 3)
			{
				uint32_t anon66;
				uint32_t* anon62 = (uint32_t*)(arg1 - 240);
				*anon62 = phi60;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon62 = anon45;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in63 = 0;
				do
				{
					uint32_t phi64 = phi_in63;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon65 = phi64 + 1;
					phi_in63 = anon65;
					anon67 = anon41 - phi40;
					anon66 = (uint32_t)(((__zext uint64_t)anon67 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon65 < anon66);
				phi23 = anon36;
				anon68 = anon66 << 2;
				phi60 = phi60 - anon68;
			}
			if (anon67 != anon68 && anon61 >= 3 || anon61 < 3)
			{
				struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon45, phi60);
				uint32_t anon70 = anon45 - phi60;
				*(uint32_t*)(((__sext int64_t)phi60 << 2) + arg4) = (__zext uint32_t)(anon70 != 0 & !(anon70 < 0 ^ anon69.field1));
				phi23 = anon36;
				if (phi60 != 0)
				{
					uint32_t anon72 = phi60 - 1;
					struct { uint32_t field0; bool field1; } anon71 = llvm.ssub.with.overflow.i32(anon45, anon72);
					uint32_t anon73 = anon45 - anon72;
					*(uint32_t*)(((__zext uint64_t)anon72 << 32 >> 30) + arg4) = (__zext uint32_t)(anon73 != 0 & !(anon73 < 0 ^ anon71.field1));
					phi23 = anon36;
					if (anon72 != 0)
					{
						uint32_t anon75 = phi60 - 2;
						struct { uint32_t field0; bool field1; } anon74 = llvm.ssub.with.overflow.i32(anon45, anon75);
						uint32_t anon76 = anon45 - anon75;
						*(uint32_t*)(((__sext int64_t)anon75 << 2) + arg4) = (__zext uint32_t)(anon76 != 0 & !(anon76 < 0 ^ anon74.field1));
						phi23 = anon36;
					}
				}
			}
		}
	}
	uint32_t* anon77 = (uint32_t*)0x601e00;
	*anon77 = phi22;
	uint64_t* anon78 = (uint64_t*)0x601df8;
	*anon78 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi79;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon80 = anon2 + 1;
		phi79 = (uint32_t)(anon80 + (anon80 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in81 = arg3;
		while (true)
		{
			uint64_t phi86;
			uint64_t phi_in90;
			uint64_t phi_in91;
			uint32_t phi92;
			uint64_t phi93;
			uint64_t anon118;
			uint64_t anon145;
			uint32_t anon150;
			uint32_t phi_in82 = phi79;
			uint64_t phi83 = phi_in81;
			*anon9 = phi83;
			if (anon1 != 0)
			{
				uint32_t anon104;
				int64_t anon106;
				int64_t anon107;
				uint32_t phi108;
				uint32_t anon109;
				int64_t anon114;
				uint32_t phi123;
				uint32_t phi124;
				uint32_t anon126;
				uint64_t phi137;
				uint32_t phi142;
				uint64_t anon144;
				uint32_t phi84 = phi_in82;
				uint32_t phi85 = phi_in82;
				phi86 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon77) << 2) - 4;
				int64_t anon89 = (__sext int64_t)*anon77 << 2;
				int64_t anon88 = (anon89 & 0xc) + arg4;
				phi87 = anon88;
				phi_in90 = 0;
				phi_in91 = phi83;
				phi92 = 0;
				phi93 = phi_in90;
				uint64_t phi94 = phi_in91;
				uint32_t phi95 = anon1;
				if (*anon77 != 0)
				{
					uint32_t anon100;
					do
					{
						uint32_t anon96 = rand();
						uint64_t anon97 = ((__zext uint64_t)(anon96 > 4294967295 ? anon96 : anon96 + 255) << 32 >> 40) % (__sext int64_t)phi95;
						*anon29 = (uint32_t)anon97;
						uint32_t* anon98 = (uint32_t*)0x601e08;
						uint32_t* anon99 = (uint32_t*)(((__sext int64_t)*anon77 << 2) + arg4);
						*anon98 = *anon99;
						*anon99 = *(uint32_t*)((anon97 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = *anon98;
						anon100 = *anon77 - 1;
						*anon77 = anon100;
						phi95 = *anon77;
					}
					while (anon100 != 0);
					phi94 = *anon9;
				}
				uint64_t phi_in101 = phi94;
				uint32_t* anon102 = (uint32_t*)phi86;
				if (*anon102 == 0)
				{
					uint32_t phi_in103;
					anon104 = anon1 - 1;
					phi_in103 = anon104;
					anon107 = anon2 << 32 >> 30;
					anon106 = anon107 + arg4;
					phi_in105 = anon106;
					phi108 = phi84;
					anon109 = *anon77 - phi92;
					if (phi84 > anon109)
					{
						uint64_t anon111;
						do
						{
							*anon29 = phi_in103;
							uint64_t phi110 = phi_in105;
							phi_in103 = *anon29 - 1;
							anon111 = phi110 - 4;
							phi_in105 = anon111;
						}
						while (*(uint32_t*)anon111 == 0);
						*anon102 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi108 = phi84 - 1;
					}
				}
				else 
				{
					uint64_t phi_in113;
					uint32_t phi112 = anon104;
					anon114 = anon107 - 4 + arg4;
					phi_in113 = anon114;
					if (phi84 == 0)
					{
						uint32_t* anon116;
						do
						{
							*anon29 = phi112;
							uint64_t phi115 = phi_in113;
							anon116 = (uint32_t*)phi115;
							if (*anon116 != 0)
							{
								phi112 = *anon29 - 1;
								phi_in113 = phi115 - 4;
							}
						}
						while (*anon116 != 0);
						*anon116 = 1;
						*anon102 = 0;
						phi108 = phi84;
					}
					else 
					{
						phi108 = phi84 - 1;
					}
				}
				anon118 = phi87 & 0xffffffff00000000 | phi87 & 0xffffffff;
				uint32_t* anon117 = (uint32_t*)anon118;
				if (*anon117 == 0)
				{
					uint64_t phi119;
					bool anon125;
					uint64_t anon120 = (__zext uint64_t)anon109;
					phi119 = anon120;
					uint32_t phi_in121 = anon104;
					uint64_t phi_in122 = anon106;
					if (phi85 <= anon109)
					{
						phi123 = phi108;
						phi124 = phi85;
						anon125 = anon1 != 3 | phi85 == 0;
						if (!anon125)
						{
							phi119 = anon120;
							phi_in121 = anon104;
							phi_in122 = anon106;
							phi123 = phi108;
							phi124 = phi85;
						}
					}
					anon126 = phi92 + anon104 - *anon77;
					if (!anon125 && phi85 <= anon109 && phi108 == 2 | anon109 == anon126 || phi85 > anon109)
					{
						bool anon128;
						do
						{
							*anon29 = phi_in121;
							uint64_t phi127 = phi_in122;
							uint64_t anon129 = phi127 - 4;
							anon128 = *anon29 == anon126 | *(uint32_t*)anon129 == 0;
							if (anon128)
							{
								phi119 = phi119 & 0xffffffffffffff00 | (__zext uint64_t)(*anon29 == anon126);
								phi_in121 = *anon29 - 1;
								phi_in122 = anon129;
							}
						}
						while (anon128);
						*anon117 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi123 = phi108 - (__zext uint32_t)(anon109 == anon126);
						phi124 = phi85 - 1;
					}
				}
				else 
				{
					uint32_t phi_in130 = anon104;
					uint64_t phi_in131 = anon114;
					if (phi85 == 0)
					{
						uint32_t* anon133;
						do
						{
							*anon29 = phi_in130;
							uint64_t phi132 = phi_in131;
							phi_in130 = *anon29 - 1;
							phi_in131 = phi132 - 4;
							anon133 = (uint32_t*)phi132;
						}
						while (*anon133 != 0 | *anon29 == anon126);
						*anon133 = 1;
						*anon117 = 0;
						phi123 = phi108;
						phi124 = phi85;
					}
					else 
					{
						phi123 = phi108;
						phi124 = phi85 - 1;
					}
				}
				phi84 = phi123;
				phi85 = phi124;
				uint64_t* anon134 = (uint64_t*)0x601df0;
				*anon134 = arg4;
				*anon29 = *anon77;
				uint32_t phi135 = *anon77;
				uint64_t phi_in136 = arg4;
				do
				{
					phi137 = phi_in101;
					uint32_t phi_in138 = phi135;
					uint64_t phi139 = phi_in136;
					if (*(uint32_t*)phi139 != 0)
					{
						uint32_t* anon140 = (uint32_t*)phi137;
						uint32_t* anon141 = (uint32_t*)(phi137 + (phi23 << 32 >> 30));
						*anon140 = *anon141;
						*anon141 = *anon140;
						phi_in138 = *anon29;
					}
					phi142 = phi_in138;
					uint32_t anon143 = phi142 - 1;
					*anon29 = anon143;
					phi_in101 = phi137 + 4;
					phi135 = anon143;
					anon144 = phi139 + 4;
					phi_in136 = anon144;
				}
				while (phi142 != 0);
				*anon134 = anon144;
				anon145 = phi137 + 4;
				*anon9 = anon145;
				uint32_t phi146 = *anon77;
				uint32_t anon148 = *anon77 + 1;
				uint32_t anon149 = (uint32_t)(anon89 + 4 + arg4 >> 2) & 3;
				uint32_t anon147 = anon148 < 6 ? anon148 : anon148 < anon149 ? anon148 : anon149;
				if (anon147 != 0)
				{
					uint32_t phi153;
					int64_t anon152 = anon3 >> 32;
					int64_t anon151 = anon152 & 1;
					anon150 = (uint32_t)(anon151 + anon2 << 32 >> 33) + (uint32_t)anon151 - ((uint32_t)(anon2 + anon152) & 1);
					*(uint32_t*)anon88 = (__zext uint32_t)(*anon77 < anon150);
					uint32_t anon154 = *anon77 - 1;
					phi153 = anon154;
					if (anon147 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon154 << 32 >> 30) + arg4) = (__zext uint32_t)(anon154 < anon150);
						uint32_t anon155 = *anon77 - 2;
						phi153 = anon155;
						if (anon147 != 2)
						{
							struct { uint32_t field0; bool field1; } anon156 = llvm.ssub.with.overflow.i32(anon150, anon155);
							uint32_t anon157 = anon150 - anon155;
							*(uint32_t*)(((__zext uint64_t)anon155 << 32 >> 30) + arg4) = (__zext uint32_t)(anon157 != 0 & !(anon157 < 0 ^ anon156.field1));
							uint32_t anon158 = *anon77 - 3;
							phi153 = anon158;
							if (anon147 != 3)
							{
								struct { uint32_t field0; bool field1; } anon159 = llvm.ssub.with.overflow.i32(anon150, anon158);
								uint32_t anon160 = anon150 - anon158;
								*(uint32_t*)(((__zext uint64_t)anon158 << 32 >> 30) + arg4) = (__zext uint32_t)(anon160 != 0 & !(anon160 < 0 ^ anon159.field1));
								uint32_t anon161 = *anon77 - 4;
								phi153 = anon161;
								if (anon147 == 5)
								{
									struct { uint32_t field0; bool field1; } anon162 = llvm.ssub.with.overflow.i32(anon150, anon161);
									uint32_t anon163 = anon150 - anon161;
									*(uint32_t*)(((__zext uint64_t)anon161 << 32 >> 30) + arg4) = (__zext uint32_t)(anon163 != 0 & !(anon163 < 0 ^ anon162.field1));
									phi153 = *anon77 - 5;
								}
							}
						}
					}
					phi146 = phi153;
				}
				if (anon147 == 0 || anon148 != anon147 && anon147 != 0)
				{
					uint32_t anon170;
					uint32_t anon171;
					uint32_t phi164 = phi146;
					uint32_t anon165 = *anon77 - anon147;
					if (anon165 >= 3)
					{
						uint32_t anon168;
						uint32_t anon169;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in166 = 0;
						do
						{
							uint32_t phi167 = phi_in166;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon168 = phi167 + 1;
							anon170 = anon148 - anon147;
							anon169 = (uint32_t)(((__zext uint64_t)anon170 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon168 < anon169)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in166 = anon168;
							}
						}
						while (anon168 < anon169);
						anon171 = anon169 << 2;
						phi164 = phi164 - anon171;
					}
					if (anon165 < 3 || anon171 != anon170 && anon165 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi164 << 2) + arg4) = (__zext uint32_t)(phi164 < anon150);
						if (phi164 != 0)
						{
							uint32_t anon173 = phi164 - 1;
							struct { uint32_t field0; bool field1; } anon172 = llvm.ssub.with.overflow.i32(anon150, anon173);
							uint32_t anon174 = anon150 - anon173;
							*(uint32_t*)(((__zext uint64_t)anon173 << 32 >> 30) + arg4) = (__zext uint32_t)(anon174 != 0 & !(anon174 < 0 ^ anon172.field1));
							if (anon173 != 0)
							{
								uint32_t anon175 = phi164 - 2;
								*(uint32_t*)(((__sext int64_t)anon175 << 2) + arg4) = (__zext uint32_t)(anon175 < anon150);
							}
						}
					}
				}
				phi83 = *anon78;
			}
			uint64_t anon176 = phi83 + *(uint64_t*)(arg1 - 168);
			*anon78 = anon176;
			phi79 = anon150;
			phi_in81 = anon176;
			phi86 = phi86 + 4;
			uint64_t phi87 = anon118 - 4;
			uint64_t anon177 = phi93 + 1;
			phi_in90 = anon177;
			phi_in91 = anon145;
			phi92 = (uint32_t)anon177;
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
		uint64_t anon52;
		uint32_t phi35 = phi_in31;
		*anon30 = phi_in32;
		uint64_t phi36 = phi_in33;
		uint64_t anon37 = anon29 >> 32;
		if ((uint32_t)(anon37 * anon37) <= phi34)
		{
			uint64_t phi38;
			uint32_t phi45;
			uint32_t anon46;
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
				*anon3 = *anon3 - 1;
			}
			*anon3 = 0;
			*anon24 = anon4;
			*anon30 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in42 = anon4;
			uint64_t phi_in43 = arg3;
			uint32_t phi_in44 = 0;
			do
			{
				*anon24 = phi_in42;
				*anon30 = phi_in43;
				phi45 = phi_in44;
				anon46 = (uint32_t)anon37;
				if (anon46 * anon46 > phi45)
				{
					uint32_t* anon47 = (uint32_t*)(*anon30 + ((__sext int64_t)phi45 << 2));
					uint32_t anon48 = *anon47 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon24 << 2) + arg4);
					*anon47 = anon48;
					uint32_t anon49 = *anon24 + 1;
					*anon24 = anon49;
					uint32_t anon50 = anon48 + 1;
					*anon3 = anon50;
					uint64_t phi51 = *anon30;
					phi_in42 = anon49;
					if ((uint32_t)((__sext int64_t)anon50 % anon37) == 0)
					{
						anon52 = arg5 << 32 >> 30;
						phi51 = *anon30 + anon52;
						phi_in42 = *anon24;
					}
					phi_in43 = phi51;
					phi_in44 = anon50;
					if (phi_in42 >= anon9)
					{
						uint32_t anon53 = phi_in42 - anon9;
						*anon24 = anon53;
						phi_in42 = anon53;
						phi_in43 = phi51;
						phi_in44 = anon50;
					}
				}
			}
			while (anon46 * anon46 > phi45);
			phi38 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon54 = *anon6 * *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4);
		*(uint32_t*)(*anon30 + ((__sext int64_t)phi34 << 2)) = anon54;
		uint32_t anon55 = anon54 + 1;
		*anon3 = anon55;
		uint32_t anon56 = phi35 + ((uint32_t)((__sext int64_t)anon55 % (phi36 << 32 >> 32)) == 0 ? 2 : 1);
		*anon24 = anon56;
		phi_in31 = anon56;
		uint64_t anon57 = *anon30 + ((uint32_t)((__sext int64_t)anon55 % (phi36 << 32 >> 32)) == 0 ? anon52 : 0);
		phi_in32 = anon57;
		uint64_t anon58 = arg2 & 0xffffffff;
		phi_in33 = anon58;
		phi34 = anon55;
		if (anon56 >= anon9)
		{
			uint32_t anon59 = anon56 - anon9;
			*anon24 = anon59;
			phi_in31 = anon59;
			phi_in32 = anon57;
			phi_in33 = anon58;
			phi34 = anon55;
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
