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
		uint64_t anon34;
		uint32_t phi_in20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint64_t phi_in23 = phi21;
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon25 = anon9 - 1;
			*anon24 = anon25;
			phi26 = phi_in20;
			uint64_t phi27 = phi_in23;
			uint32_t phi28 = anon25;
			uint32_t phi29 = phi_in20;
			uint64_t phi30 = phi_in23;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi30 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon16 & phi29 ^ (phi29 >> 31) + phi29 >> 1) << 2) + arg3);
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
			phi_in20 = anon33;
			anon34 = phi27 + (arg4 << 32 >> 30);
			phi21 = anon34;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi26 != 0);
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
		uint32_t phi_in42 = anon38;
		uint64_t phi_in43 = arg2;
		do
		{
			uint64_t anon49;
			*anon24 = anon38;
			uint32_t phi44 = anon38;
			uint32_t phi45 = phi_in42;
			do
			{
				uint64_t phi46 = phi_in43;
				uint32_t* anon47 = (uint32_t*)phi46;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi45 >> 31) + phi45 >> 1 ^ *anon16 & phi45) << 2) + arg3) << 2);
				uint32_t anon48 = *anon24 - 1;
				*anon24 = anon48;
				anon49 = phi46 + 4;
				phi_in43 = anon49;
				phi44 = anon48;
				phi45 = *anon8;
			}
			while (*anon24 != 0);
			uint32_t anon50 = *anon8 - 1;
			*anon8 = anon50;
			phi_in42 = anon50;
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
	uint64_t phi_in100;
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
			uint32_t phi_in45;
			anon44 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon42 + arg4) = (__zext uint32_t)(phi10 < anon44);
			uint32_t anon46 = phi10 - 1;
			phi_in45 = anon46;
			if (phi39 != 1)
			{
				struct { uint32_t field0; bool field1; } anon47 = llvm.ssub.with.overflow.i32(anon44, anon46);
				uint32_t anon48 = anon44 - anon46;
				*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon48 != 0 & !(anon48 < 0 ^ anon47.field1));
				uint32_t anon49 = phi10 - 2;
				phi_in45 = anon49;
				if (phi39 != 2)
				{
					struct { uint32_t field0; bool field1; } anon50 = llvm.ssub.with.overflow.i32(anon44, anon49);
					uint32_t anon51 = anon44 - anon49;
					*(uint32_t*)(((__zext uint64_t)anon49 << 32 >> 30) + arg4) = (__zext uint32_t)(anon51 != 0 & !(anon51 < 0 ^ anon50.field1));
					uint32_t anon52 = phi10 - 3;
					phi_in45 = anon52;
					if (phi39 != 3)
					{
						struct { uint32_t field0; bool field1; } anon53 = llvm.ssub.with.overflow.i32(anon44, anon52);
						uint32_t anon54 = anon44 - anon52;
						*(uint32_t*)(((__zext uint64_t)anon52 << 32 >> 30) + arg4) = (__zext uint32_t)(anon54 != 0 & !(anon54 < 0 ^ anon53.field1));
						uint32_t anon55 = phi10 - 4;
						phi_in45 = anon55;
						if (phi39 == 5)
						{
							struct { uint32_t field0; bool field1; } anon56 = llvm.ssub.with.overflow.i32(anon44, anon55);
							uint32_t anon57 = anon44 - anon55;
							*(uint32_t*)(((__zext uint64_t)anon55 << 32 >> 30) + arg4) = (__zext uint32_t)(anon57 != 0 & !(anon57 < 0 ^ anon56.field1));
							phi_in45 = phi10 - 5;
						}
					}
				}
			}
			phi22 = phi10;
			phi23 = anon35;
			phi43 = phi_in45;
		}
		if (phi39 == 0 || anon40 != phi39 && phi39 != 0)
		{
			uint32_t anon65;
			uint32_t anon66;
			uint32_t* anon58 = (uint32_t*)(arg1 - 240);
			*anon58 = phi43;
			uint32_t phi59 = *anon58;
			uint32_t anon60 = phi10 - phi39;
			if (anon60 >= 3)
			{
				uint32_t anon64;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon58 = anon44;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in61 = 0;
				do
				{
					uint32_t phi62 = phi_in61;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon63 = phi62 + 1;
					phi_in61 = anon63;
					anon65 = anon40 - phi39;
					anon64 = (uint32_t)(((__zext uint64_t)anon65 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon63 < anon64);
				phi22 = phi10;
				phi23 = anon35;
				anon66 = anon64 << 2;
				phi59 = *anon58 - anon66;
			}
			if (anon65 != anon66 && anon60 >= 3 || anon60 < 3)
			{
				struct { uint32_t field0; bool field1; } anon67 = llvm.ssub.with.overflow.i32(anon44, phi59);
				uint32_t anon68 = anon44 - phi59;
				*(uint32_t*)(((__sext int64_t)phi59 << 2) + arg4) = (__zext uint32_t)(anon68 != 0 & !(anon68 < 0 ^ anon67.field1));
				phi22 = phi10;
				phi23 = anon35;
				if (phi59 != 0)
				{
					uint32_t anon70 = phi59 - 1;
					struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon44, anon70);
					uint32_t anon71 = anon44 - anon70;
					*(uint32_t*)(((__zext uint64_t)anon70 << 32 >> 30) + arg4) = (__zext uint32_t)(anon71 != 0 & !(anon71 < 0 ^ anon69.field1));
					phi22 = phi10;
					phi23 = anon35;
					if (anon70 != 0)
					{
						uint32_t anon73 = phi59 - 2;
						struct { uint32_t field0; bool field1; } anon72 = llvm.ssub.with.overflow.i32(anon44, anon73);
						uint32_t anon74 = anon44 - anon73;
						*(uint32_t*)(((__sext int64_t)anon73 << 2) + arg4) = (__zext uint32_t)(anon74 != 0 & !(anon74 < 0 ^ anon72.field1));
						phi22 = phi10;
						phi23 = anon35;
					}
				}
			}
		}
	}
	*anon28 = phi22;
	uint64_t* anon75 = (uint64_t*)0x601df8;
	*anon75 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi76;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon77 = anon2 + 1;
		phi76 = (uint32_t)(anon77 + (anon77 >> 31 & 1) << 32 >> 33);
		*anon9 = arg3;
		while (true)
		{
			uint64_t phi81;
			uint64_t phi_in85;
			uint64_t phi86;
			uint32_t phi87;
			uint64_t phi88;
			uint64_t anon112;
			uint64_t anon137;
			uint32_t anon142;
			uint32_t phi78 = phi76;
			uint64_t phi79 = *anon9;
			if (anon1 != 0)
			{
				uint32_t anon99;
				int64_t anon101;
				int64_t anon102;
				uint32_t phi103;
				uint32_t anon104;
				int64_t anon108;
				uint32_t phi117;
				uint32_t anon119;
				uint64_t phi130;
				uint32_t phi134;
				uint64_t anon136;
				uint32_t phi80 = phi78;
				phi81 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon28) << 2) - 4;
				int64_t anon84 = (__sext int64_t)*anon28 << 2;
				int64_t anon83 = (anon84 & 0xc) + arg4;
				phi82 = anon83;
				phi_in85 = 0;
				phi86 = *anon9;
				phi87 = 0;
				phi88 = phi_in85;
				uint64_t phi_in89 = phi86;
				uint32_t* anon90 = (uint32_t*)0x601e00;
				*anon90 = *anon28;
				uint32_t phi91 = anon1;
				if (*anon28 != 0)
				{
					uint32_t anon96;
					do
					{
						uint32_t anon92 = rand();
						uint64_t anon93 = ((__zext uint64_t)(anon92 > 4294967295 ? anon92 : anon92 + 255) << 32 >> 40) % (__sext int64_t)phi91;
						*anon28 = (uint32_t)anon93;
						uint32_t* anon94 = (uint32_t*)0x601e08;
						uint32_t* anon95 = (uint32_t*)(((__sext int64_t)*anon90 << 2) + arg4);
						*anon94 = *anon95;
						*anon95 = *(uint32_t*)((anon93 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = *anon94;
						anon96 = *anon90 - 1;
						*anon90 = anon96;
						phi91 = *anon90;
					}
					while (anon96 != 0);
					phi_in89 = *anon9;
				}
				uint32_t* anon97 = (uint32_t*)phi81;
				if (*anon97 == 0)
				{
					uint32_t phi_in98;
					anon99 = anon1 - 1;
					phi_in98 = anon99;
					anon102 = anon2 << 32 >> 30;
					anon101 = anon102 + arg4;
					phi_in100 = anon101;
					phi103 = phi80;
					anon104 = *anon28 - phi87;
					if (phi80 > anon104)
					{
						uint64_t anon106;
						do
						{
							*anon28 = phi_in98;
							uint64_t phi105 = phi_in100;
							phi_in98 = *anon28 - 1;
							anon106 = phi105 - 4;
							phi_in100 = anon106;
						}
						while (*(uint32_t*)anon106 == 0);
						*anon97 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi103 = phi80 - 1;
					}
				}
				else 
				{
					uint64_t phi_in107;
					*anon28 = anon99;
					anon108 = anon102 - 4 + arg4;
					phi_in107 = anon108;
					if (phi80 == 0)
					{
						uint32_t* anon110;
						do
						{
							uint64_t phi109 = phi_in107;
							anon110 = (uint32_t*)phi109;
							if (*anon110 != 0)
							{
								*anon28 = *anon28 - 1;
								phi_in107 = phi109 - 4;
							}
						}
						while (*anon110 != 0);
						*anon110 = 1;
						*anon97 = 0;
						phi103 = phi80;
					}
					else 
					{
						phi103 = phi80 - 1;
					}
				}
				anon112 = phi82 & 0xffffffff00000000 | phi82 & 0xffffffff;
				uint32_t* anon111 = (uint32_t*)anon112;
				if (*anon111 == 0)
				{
					uint64_t phi113;
					bool anon118;
					uint64_t anon114 = (__zext uint64_t)anon104;
					phi113 = anon114;
					uint32_t phi_in115 = anon99;
					uint64_t phi_in116 = anon101;
					if (phi78 <= anon104)
					{
						phi117 = phi103;
						phi78 = phi78;
						anon118 = anon1 != 3 | phi78 == 0;
						if (!anon118)
						{
							phi113 = anon114;
							phi_in115 = anon99;
							phi_in116 = anon101;
							phi117 = phi103;
							phi78 = phi78;
						}
					}
					anon119 = phi87 + anon99 - *anon28;
					if (!anon118 && phi78 <= anon104 && phi103 == 2 | anon104 == anon119 || phi78 > anon104)
					{
						bool anon121;
						do
						{
							*anon28 = phi_in115;
							uint64_t phi120 = phi_in116;
							uint64_t anon122 = phi120 - 4;
							anon121 = *anon28 == anon119 | *(uint32_t*)anon122 == 0;
							if (anon121)
							{
								phi113 = phi113 & 0xffffffffffffff00 | (__zext uint64_t)(*anon28 == anon119);
								phi_in115 = *anon28 - 1;
								phi_in116 = anon122;
							}
						}
						while (anon121);
						*anon111 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi117 = phi103 - (__zext uint32_t)(anon104 == anon119);
						phi78 = phi78 - 1;
					}
				}
				else 
				{
					uint32_t phi_in123 = anon99;
					uint64_t phi_in124 = anon108;
					if (phi78 == 0)
					{
						uint32_t* anon126;
						do
						{
							*anon28 = phi_in123;
							uint64_t phi125 = phi_in124;
							phi_in123 = *anon28 - 1;
							phi_in124 = phi125 - 4;
							anon126 = (uint32_t*)phi125;
						}
						while (*anon126 != 0 | *anon28 == anon119);
						*anon126 = 1;
						*anon111 = 0;
						phi117 = phi103;
						phi78 = phi78;
					}
					else 
					{
						phi117 = phi103;
						phi78 = phi78 - 1;
					}
				}
				phi80 = phi117;
				uint64_t* anon127 = (uint64_t*)0x601df0;
				*anon127 = arg4;
				uint32_t phi_in128 = *anon28;
				uint64_t phi_in129 = arg4;
				do
				{
					phi130 = phi_in89;
					uint64_t phi131 = phi_in129;
					if (*(uint32_t*)phi131 != 0)
					{
						uint32_t* anon132 = (uint32_t*)phi130;
						uint32_t* anon133 = (uint32_t*)(phi130 + (phi23 << 32 >> 30));
						*anon132 = *anon133;
						*anon133 = *anon132;
						phi_in128 = *anon28;
					}
					phi134 = phi_in128;
					uint32_t anon135 = phi134 - 1;
					*anon28 = anon135;
					phi_in89 = phi130 + 4;
					phi_in128 = anon135;
					anon136 = phi131 + 4;
					phi_in129 = anon136;
				}
				while (phi134 != 0);
				*anon127 = anon136;
				anon137 = phi130 + 4;
				*anon9 = anon137;
				uint32_t phi138 = *anon28;
				uint32_t anon140 = *anon28 + 1;
				uint32_t anon141 = (uint32_t)(anon84 + 4 + arg4 >> 2) & 3;
				uint32_t anon139 = anon140 < 6 ? anon140 : anon140 < anon141 ? anon140 : anon141;
				if (anon139 != 0)
				{
					uint32_t phi145;
					int64_t anon144 = anon3 >> 32;
					int64_t anon143 = anon144 & 1;
					anon142 = (uint32_t)(anon143 + anon2 << 32 >> 33) + (uint32_t)anon143 - ((uint32_t)(anon2 + anon144) & 1);
					*(uint32_t*)anon83 = (__zext uint32_t)(*anon28 < anon142);
					uint32_t anon146 = *anon28 - 1;
					phi145 = anon146;
					if (anon139 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon146 << 32 >> 30) + arg4) = (__zext uint32_t)(anon146 < anon142);
						uint32_t anon147 = *anon28 - 2;
						phi145 = anon147;
						if (anon139 != 2)
						{
							struct { uint32_t field0; bool field1; } anon148 = llvm.ssub.with.overflow.i32(anon142, anon147);
							uint32_t anon149 = anon142 - anon147;
							*(uint32_t*)(((__zext uint64_t)anon147 << 32 >> 30) + arg4) = (__zext uint32_t)(anon149 != 0 & !(anon149 < 0 ^ anon148.field1));
							uint32_t anon150 = *anon28 - 3;
							phi145 = anon150;
							if (anon139 != 3)
							{
								struct { uint32_t field0; bool field1; } anon151 = llvm.ssub.with.overflow.i32(anon142, anon150);
								uint32_t anon152 = anon142 - anon150;
								*(uint32_t*)(((__zext uint64_t)anon150 << 32 >> 30) + arg4) = (__zext uint32_t)(anon152 != 0 & !(anon152 < 0 ^ anon151.field1));
								uint32_t anon153 = *anon28 - 4;
								phi145 = anon153;
								if (anon139 == 5)
								{
									struct { uint32_t field0; bool field1; } anon154 = llvm.ssub.with.overflow.i32(anon142, anon153);
									uint32_t anon155 = anon142 - anon153;
									*(uint32_t*)(((__zext uint64_t)anon153 << 32 >> 30) + arg4) = (__zext uint32_t)(anon155 != 0 & !(anon155 < 0 ^ anon154.field1));
									phi145 = *anon28 - 5;
								}
							}
						}
					}
					uint32_t phi_in156 = phi145;
					phi138 = phi_in156;
				}
				if (anon139 == 0 || anon140 != anon139 && anon139 != 0)
				{
					uint32_t anon163;
					uint32_t anon164;
					uint32_t phi157 = phi138;
					uint32_t anon158 = *anon28 - anon139;
					if (anon158 >= 3)
					{
						uint32_t anon161;
						uint32_t anon162;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in159 = 0;
						do
						{
							uint32_t phi160 = phi_in159;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon161 = phi160 + 1;
							anon163 = anon140 - anon139;
							anon162 = (uint32_t)(((__zext uint64_t)anon163 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon161 < anon162)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in159 = anon161;
							}
						}
						while (anon161 < anon162);
						anon164 = anon162 << 2;
						phi157 = phi138 - anon164;
					}
					if (anon158 < 3 || anon164 != anon163 && anon158 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi157 << 2) + arg4) = (__zext uint32_t)(phi157 < anon142);
						if (phi157 != 0)
						{
							uint32_t anon166 = phi157 - 1;
							struct { uint32_t field0; bool field1; } anon165 = llvm.ssub.with.overflow.i32(anon142, anon166);
							uint32_t anon167 = anon142 - anon166;
							*(uint32_t*)(((__zext uint64_t)anon166 << 32 >> 30) + arg4) = (__zext uint32_t)(anon167 != 0 & !(anon167 < 0 ^ anon165.field1));
							if (anon166 != 0)
							{
								uint32_t anon168 = phi157 - 2;
								*(uint32_t*)(((__sext int64_t)anon168 << 2) + arg4) = (__zext uint32_t)(anon168 < anon142);
							}
						}
					}
				}
				phi79 = *anon75;
			}
			uint64_t anon169 = phi79 + *(uint64_t*)(arg1 - 168);
			*anon75 = anon169;
			phi76 = anon142;
			*anon9 = anon169;
			phi81 = phi81 + 4;
			uint64_t phi82 = anon112 - 4;
			uint64_t anon170 = phi88 + 1;
			phi_in85 = anon170;
			phi86 = anon137;
			phi87 = (uint32_t)anon170;
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
		uint64_t anon52;
		uint32_t phi36 = phi_in32;
		*anon31 = phi_in33;
		uint64_t phi37 = phi_in34;
		uint64_t anon38 = anon30 >> 32;
		if ((uint32_t)(anon38 * anon38) <= phi35)
		{
			uint64_t phi39;
			uint32_t phi46;
			uint32_t anon47;
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
				*anon3 = *anon3 - 1;
			}
			*anon3 = 0;
			*anon25 = anon4;
			*anon31 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in43 = anon4;
			uint64_t phi_in44 = arg3;
			uint32_t phi_in45 = 0;
			do
			{
				*anon25 = phi_in43;
				*anon31 = phi_in44;
				phi46 = phi_in45;
				anon47 = (uint32_t)anon38;
				if (anon47 * anon47 > phi46)
				{
					uint32_t* anon48 = (uint32_t*)(*anon31 + ((__sext int64_t)phi46 << 2));
					uint32_t anon49 = *anon48 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon25 << 2) + arg4);
					*anon48 = anon49;
					uint32_t anon50 = *anon25 + 1;
					*anon25 = anon50;
					uint32_t anon51 = anon49 + 1;
					*anon3 = anon51;
					phi_in44 = *anon31;
					phi_in43 = anon50;
					if ((uint32_t)((__sext int64_t)anon51 % anon38) == 0)
					{
						anon52 = arg5 << 32 >> 30;
						phi_in44 = *anon31 + anon52;
						phi_in43 = *anon25;
					}
					phi_in45 = anon51;
					if (phi_in43 >= anon9)
					{
						uint32_t anon53 = phi_in43 - anon9;
						*anon25 = anon53;
						phi_in43 = anon53;
						phi_in45 = anon51;
					}
				}
			}
			while (anon47 * anon47 > phi46);
			phi39 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon54 = *anon6 * *(uint32_t*)(((__sext int64_t)phi36 << 2) + arg4);
		*(uint32_t*)(*anon31 + ((__sext int64_t)phi35 << 2)) = anon54;
		uint32_t anon55 = anon54 + 1;
		*anon3 = anon55;
		uint32_t anon56 = phi36 + ((uint32_t)((__sext int64_t)anon55 % (phi37 << 32 >> 32)) == 0 ? 2 : 1);
		*anon25 = anon56;
		phi_in32 = anon56;
		uint64_t anon57 = *anon31 + ((uint32_t)((__sext int64_t)anon55 % (phi37 << 32 >> 32)) == 0 ? anon52 : 0);
		phi_in33 = anon57;
		uint64_t anon58 = arg2 & 0xffffffff;
		phi_in34 = anon58;
		phi35 = anon55;
		if (anon56 >= anon9)
		{
			uint32_t anon59 = anon56 - anon9;
			*anon25 = anon59;
			phi_in32 = anon59;
			phi_in33 = anon57;
			phi_in34 = anon58;
			phi35 = anon55;
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
