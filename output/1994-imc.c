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
		uint32_t phi23;
		uint64_t anon32;
		uint32_t phi_in20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			phi23 = phi_in20;
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon25 = anon9 - 1;
			*anon24 = anon25;
			uint32_t phi26 = anon25;
			uint32_t phi27 = phi23;
			uint64_t phi28 = phi21;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi28 = *(uint32_t*)(((__sext int64_t)(phi26 ^ *anon16 & phi27 ^ (phi27 >> 31) + phi27 >> 1) << 2) + arg3);
					uint32_t anon29 = *anon24 - 1;
					*anon24 = anon29;
					phi23 = *anon8;
					uint64_t anon30 = phi28 + 4;
					phi21 = anon30;
					phi26 = anon29;
					phi27 = *anon8;
					phi28 = anon30;
				}
				while (*anon24 != 0);
			}
			uint32_t anon31 = phi23 - 1;
			*anon8 = anon31;
			phi_in20 = anon31;
			anon32 = phi21 + (arg4 << 32 >> 30);
			phi21 = anon32;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi23 != 0);
		*anon7 = anon32;
	}
	uint32_t anon33 = rand();
	uint32_t anon34 = (uint32_t)(((__zext uint64_t)(anon33 > 4294967295 ? anon33 : anon33 + 255) << 32 >> 40) % anon4);
	*anon2 = anon34;
	*anon5 = 3 - anon34;
	uint32_t anon35 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint32_t anon36 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon36;
	uint64_t anon39 = (__zext uint64_t)anon35;
	uint64_t anon38 = (anon35 > 4294967295 ? anon39 : anon39 + 255) >> 31 & 1;
	uint32_t anon37 = *(uint32_t*)(((__zext uint64_t)(((anon35 > 4294967295 ? anon35 : anon35 + 255) & 0x100) != 0 ^ anon38 != 0) - anon38 << 2) + arg3) ^ 1;
	*anon10 = anon37;
	*anon14 = 3 - anon37;
	if (anon9 != 0)
	{
		uint64_t anon50;
		uint32_t phi40 = anon36;
		uint64_t phi41 = arg2;
		do
		{
			uint64_t anon48;
			uint32_t phi42 = phi40;
			uint64_t phi_in43 = phi41;
			*anon24 = anon36;
			uint32_t phi44 = anon36;
			do
			{
				uint64_t phi45 = phi_in43;
				uint32_t* anon46 = (uint32_t*)phi45;
				*anon46 = *anon46 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi42 >> 31) + phi42 >> 1 ^ *anon16 & phi42) << 2) + arg3) << 2);
				uint32_t anon47 = *anon24 - 1;
				*anon24 = anon47;
				anon48 = phi45 + 4;
				phi_in43 = anon48;
				phi44 = anon47;
				phi42 = *anon8;
			}
			while (*anon24 != 0);
			uint32_t anon49 = *anon8 - 1;
			*anon8 = anon49;
			phi40 = anon49;
			anon50 = anon48 + (arg4 << 32 >> 30);
			phi41 = anon50;
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
	uint32_t* anon28;
	uint64_t phi_in102;
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
		phi22 = phi10;
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
		uint32_t anon40 = phi22 + 1;
		int64_t anon42 = (__sext int64_t)phi22 << 2;
		uint32_t anon41 = (uint32_t)(anon42 + 4 + arg4 >> 2) & 3;
		phi39 = anon40 < anon41 ? anon40 : anon41;
		if (phi22 == 4294967295 || phi22 == 4 || phi22 == 3 || phi22 == 2 || phi22 == 1 || phi22 == 0)
		{
			phi39 = anon40;
		}
		uint32_t phi43 = phi22;
		if (phi39 != 0)
		{
			uint32_t phi_in45;
			anon44 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon42 + arg4) = (__zext uint32_t)(phi22 < anon44);
			uint32_t anon46 = phi22 - 1;
			phi_in45 = anon46;
			if (phi39 != 1)
			{
				struct { uint32_t field0; bool field1; } anon47 = llvm.ssub.with.overflow.i32(anon44, anon46);
				uint32_t anon48 = anon44 - anon46;
				*(uint32_t*)(((__zext uint64_t)anon46 << 32 >> 30) + arg4) = (__zext uint32_t)(anon48 != 0 & !(anon48 < 0 ^ anon47.field1));
				uint32_t anon49 = phi22 - 2;
				phi_in45 = anon49;
				if (phi39 != 2)
				{
					struct { uint32_t field0; bool field1; } anon50 = llvm.ssub.with.overflow.i32(anon44, anon49);
					uint32_t anon51 = anon44 - anon49;
					*(uint32_t*)(((__zext uint64_t)anon49 << 32 >> 30) + arg4) = (__zext uint32_t)(anon51 != 0 & !(anon51 < 0 ^ anon50.field1));
					uint32_t anon52 = phi22 - 3;
					phi_in45 = anon52;
					if (phi39 != 3)
					{
						struct { uint32_t field0; bool field1; } anon53 = llvm.ssub.with.overflow.i32(anon44, anon52);
						uint32_t anon54 = anon44 - anon52;
						*(uint32_t*)(((__zext uint64_t)anon52 << 32 >> 30) + arg4) = (__zext uint32_t)(anon54 != 0 & !(anon54 < 0 ^ anon53.field1));
						uint32_t anon55 = phi22 - 4;
						phi_in45 = anon55;
						if (phi39 == 5)
						{
							struct { uint32_t field0; bool field1; } anon56 = llvm.ssub.with.overflow.i32(anon44, anon55);
							uint32_t anon57 = anon44 - anon55;
							*(uint32_t*)(((__zext uint64_t)anon55 << 32 >> 30) + arg4) = (__zext uint32_t)(anon57 != 0 & !(anon57 < 0 ^ anon56.field1));
							phi_in45 = phi22 - 5;
						}
					}
				}
			}
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
			uint32_t anon60 = phi22 - phi39;
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
				phi23 = anon35;
				anon66 = anon64 << 2;
				phi59 = *anon58 - anon66;
			}
			if (anon65 != anon66 && anon60 >= 3 || anon60 < 3)
			{
				struct { uint32_t field0; bool field1; } anon67 = llvm.ssub.with.overflow.i32(anon44, phi59);
				uint32_t anon68 = anon44 - phi59;
				*(uint32_t*)(((__sext int64_t)phi59 << 2) + arg4) = (__zext uint32_t)(anon68 != 0 & !(anon68 < 0 ^ anon67.field1));
				phi23 = anon35;
				if (phi59 != 0)
				{
					uint32_t anon70 = phi59 - 1;
					struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon44, anon70);
					uint32_t anon71 = anon44 - anon70;
					*(uint32_t*)(((__zext uint64_t)anon70 << 32 >> 30) + arg4) = (__zext uint32_t)(anon71 != 0 & !(anon71 < 0 ^ anon69.field1));
					phi23 = anon35;
					if (anon70 != 0)
					{
						uint32_t anon73 = phi59 - 2;
						struct { uint32_t field0; bool field1; } anon72 = llvm.ssub.with.overflow.i32(anon44, anon73);
						uint32_t anon74 = anon44 - anon73;
						*(uint32_t*)(((__sext int64_t)anon73 << 2) + arg4) = (__zext uint32_t)(anon74 != 0 & !(anon74 < 0 ^ anon72.field1));
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
			uint64_t phi82;
			uint64_t phi_in86;
			uint64_t phi_in87;
			uint32_t phi88;
			uint64_t phi89;
			uint64_t anon115;
			uint64_t anon142;
			uint32_t anon147;
			uint32_t phi_in78 = phi76;
			uint64_t phi79 = *anon9;
			if (anon1 != 0)
			{
				uint32_t anon101;
				int64_t anon103;
				int64_t anon104;
				uint32_t phi105;
				uint32_t anon106;
				int64_t anon111;
				uint32_t phi120;
				uint32_t phi121;
				uint32_t anon123;
				uint64_t phi134;
				uint32_t phi139;
				uint64_t anon141;
				uint32_t phi80 = phi_in78;
				uint32_t phi81 = phi_in78;
				phi82 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon28) << 2) - 4;
				int64_t anon85 = (__sext int64_t)*anon28 << 2;
				int64_t anon84 = (anon85 & 0xc) + arg4;
				phi83 = anon84;
				phi_in86 = 0;
				phi_in87 = *anon9;
				phi88 = 0;
				phi89 = phi_in86;
				uint32_t* anon90 = (uint32_t*)0x601e00;
				*anon90 = *anon28;
				uint64_t phi91 = phi_in87;
				uint32_t phi92 = anon1;
				if (*anon28 != 0)
				{
					uint32_t anon97;
					do
					{
						uint32_t anon93 = rand();
						uint64_t anon94 = ((__zext uint64_t)(anon93 > 4294967295 ? anon93 : anon93 + 255) << 32 >> 40) % (__sext int64_t)phi92;
						*anon28 = (uint32_t)anon94;
						uint32_t* anon95 = (uint32_t*)0x601e08;
						uint32_t* anon96 = (uint32_t*)(((__sext int64_t)*anon90 << 2) + arg4);
						*anon95 = *anon96;
						*anon96 = *(uint32_t*)((anon94 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = *anon95;
						anon97 = *anon90 - 1;
						*anon90 = anon97;
						phi92 = *anon90;
					}
					while (anon97 != 0);
					phi91 = *anon9;
				}
				uint64_t phi_in98 = phi91;
				uint32_t* anon99 = (uint32_t*)phi82;
				if (*anon99 == 0)
				{
					uint32_t phi_in100;
					anon101 = anon1 - 1;
					phi_in100 = anon101;
					anon104 = anon2 << 32 >> 30;
					anon103 = anon104 + arg4;
					phi_in102 = anon103;
					phi105 = phi80;
					anon106 = *anon28 - phi88;
					if (phi80 > anon106)
					{
						uint64_t anon108;
						do
						{
							*anon28 = phi_in100;
							uint64_t phi107 = phi_in102;
							phi_in100 = *anon28 - 1;
							anon108 = phi107 - 4;
							phi_in102 = anon108;
						}
						while (*(uint32_t*)anon108 == 0);
						*anon99 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi105 = phi80 - 1;
					}
				}
				else 
				{
					uint64_t phi_in110;
					uint32_t phi109 = anon101;
					anon111 = anon104 - 4 + arg4;
					phi_in110 = anon111;
					if (phi80 == 0)
					{
						uint32_t* anon113;
						do
						{
							*anon28 = phi109;
							uint64_t phi112 = phi_in110;
							anon113 = (uint32_t*)phi112;
							if (*anon113 != 0)
							{
								phi109 = *anon28 - 1;
								phi_in110 = phi112 - 4;
							}
						}
						while (*anon113 != 0);
						*anon113 = 1;
						*anon99 = 0;
						phi105 = phi80;
					}
					else 
					{
						phi105 = phi80 - 1;
					}
				}
				anon115 = phi83 & 0xffffffff00000000 | phi83 & 0xffffffff;
				uint32_t* anon114 = (uint32_t*)anon115;
				if (*anon114 == 0)
				{
					uint64_t phi116;
					bool anon122;
					uint64_t anon117 = (__zext uint64_t)anon106;
					phi116 = anon117;
					uint32_t phi_in118 = anon101;
					uint64_t phi_in119 = anon103;
					if (phi81 <= anon106)
					{
						phi120 = phi105;
						phi121 = phi81;
						anon122 = anon1 != 3 | phi81 == 0;
						if (!anon122)
						{
							phi116 = anon117;
							phi_in118 = anon101;
							phi_in119 = anon103;
							phi120 = phi105;
							phi121 = phi81;
						}
					}
					anon123 = phi88 + anon101 - *anon28;
					if (!anon122 && phi81 <= anon106 && phi105 == 2 | anon106 == anon123 || phi81 > anon106)
					{
						bool anon125;
						do
						{
							*anon28 = phi_in118;
							uint64_t phi124 = phi_in119;
							uint64_t anon126 = phi124 - 4;
							anon125 = *anon28 == anon123 | *(uint32_t*)anon126 == 0;
							if (anon125)
							{
								phi116 = phi116 & 0xffffffffffffff00 | (__zext uint64_t)(*anon28 == anon123);
								phi_in118 = *anon28 - 1;
								phi_in119 = anon126;
							}
						}
						while (anon125);
						*anon114 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi120 = phi105 - (__zext uint32_t)(anon106 == anon123);
						phi121 = phi81 - 1;
					}
				}
				else 
				{
					uint32_t phi_in127 = anon101;
					uint64_t phi_in128 = anon111;
					if (phi81 == 0)
					{
						uint32_t* anon130;
						do
						{
							*anon28 = phi_in127;
							uint64_t phi129 = phi_in128;
							phi_in127 = *anon28 - 1;
							phi_in128 = phi129 - 4;
							anon130 = (uint32_t*)phi129;
						}
						while (*anon130 != 0 | *anon28 == anon123);
						*anon130 = 1;
						*anon114 = 0;
						phi120 = phi105;
						phi121 = phi81;
					}
					else 
					{
						phi120 = phi105;
						phi121 = phi81 - 1;
					}
				}
				phi80 = phi120;
				phi81 = phi121;
				uint64_t* anon131 = (uint64_t*)0x601df0;
				*anon131 = arg4;
				uint32_t phi132 = *anon28;
				uint64_t phi_in133 = arg4;
				do
				{
					phi134 = phi_in98;
					uint32_t phi_in135 = phi132;
					uint64_t phi136 = phi_in133;
					if (*(uint32_t*)phi136 != 0)
					{
						uint32_t* anon137 = (uint32_t*)phi134;
						uint32_t* anon138 = (uint32_t*)(phi134 + (phi23 << 32 >> 30));
						*anon137 = *anon138;
						*anon138 = *anon137;
						phi_in135 = *anon28;
					}
					phi139 = phi_in135;
					uint32_t anon140 = phi139 - 1;
					*anon28 = anon140;
					phi_in98 = phi134 + 4;
					phi132 = anon140;
					anon141 = phi136 + 4;
					phi_in133 = anon141;
				}
				while (phi139 != 0);
				*anon131 = anon141;
				anon142 = phi134 + 4;
				*anon9 = anon142;
				uint32_t phi143 = *anon28;
				uint32_t anon145 = *anon28 + 1;
				uint32_t anon146 = (uint32_t)(anon85 + 4 + arg4 >> 2) & 3;
				uint32_t anon144 = anon145 < 6 ? anon145 : anon145 < anon146 ? anon145 : anon146;
				if (anon144 != 0)
				{
					uint32_t phi150;
					int64_t anon149 = anon3 >> 32;
					int64_t anon148 = anon149 & 1;
					anon147 = (uint32_t)(anon148 + anon2 << 32 >> 33) + (uint32_t)anon148 - ((uint32_t)(anon2 + anon149) & 1);
					*(uint32_t*)anon84 = (__zext uint32_t)(*anon28 < anon147);
					uint32_t anon151 = *anon28 - 1;
					phi150 = anon151;
					if (anon144 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon151 << 32 >> 30) + arg4) = (__zext uint32_t)(anon151 < anon147);
						uint32_t anon152 = *anon28 - 2;
						phi150 = anon152;
						if (anon144 != 2)
						{
							struct { uint32_t field0; bool field1; } anon153 = llvm.ssub.with.overflow.i32(anon147, anon152);
							uint32_t anon154 = anon147 - anon152;
							*(uint32_t*)(((__zext uint64_t)anon152 << 32 >> 30) + arg4) = (__zext uint32_t)(anon154 != 0 & !(anon154 < 0 ^ anon153.field1));
							uint32_t anon155 = *anon28 - 3;
							phi150 = anon155;
							if (anon144 != 3)
							{
								struct { uint32_t field0; bool field1; } anon156 = llvm.ssub.with.overflow.i32(anon147, anon155);
								uint32_t anon157 = anon147 - anon155;
								*(uint32_t*)(((__zext uint64_t)anon155 << 32 >> 30) + arg4) = (__zext uint32_t)(anon157 != 0 & !(anon157 < 0 ^ anon156.field1));
								uint32_t anon158 = *anon28 - 4;
								phi150 = anon158;
								if (anon144 == 5)
								{
									struct { uint32_t field0; bool field1; } anon159 = llvm.ssub.with.overflow.i32(anon147, anon158);
									uint32_t anon160 = anon147 - anon158;
									*(uint32_t*)(((__zext uint64_t)anon158 << 32 >> 30) + arg4) = (__zext uint32_t)(anon160 != 0 & !(anon160 < 0 ^ anon159.field1));
									phi150 = *anon28 - 5;
								}
							}
						}
					}
					phi143 = phi150;
				}
				if (anon144 == 0 || anon145 != anon144 && anon144 != 0)
				{
					uint32_t anon167;
					uint32_t anon168;
					uint32_t phi161 = phi143;
					uint32_t anon162 = *anon28 - anon144;
					if (anon162 >= 3)
					{
						uint32_t anon165;
						uint32_t anon166;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in163 = 0;
						do
						{
							uint32_t phi164 = phi_in163;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon165 = phi164 + 1;
							anon167 = anon145 - anon144;
							anon166 = (uint32_t)(((__zext uint64_t)anon167 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon165 < anon166)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in163 = anon165;
							}
						}
						while (anon165 < anon166);
						anon168 = anon166 << 2;
						phi161 = phi161 - anon168;
					}
					if (anon162 < 3 || anon168 != anon167 && anon162 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi161 << 2) + arg4) = (__zext uint32_t)(phi161 < anon147);
						if (phi161 != 0)
						{
							uint32_t anon170 = phi161 - 1;
							struct { uint32_t field0; bool field1; } anon169 = llvm.ssub.with.overflow.i32(anon147, anon170);
							uint32_t anon171 = anon147 - anon170;
							*(uint32_t*)(((__zext uint64_t)anon170 << 32 >> 30) + arg4) = (__zext uint32_t)(anon171 != 0 & !(anon171 < 0 ^ anon169.field1));
							if (anon170 != 0)
							{
								uint32_t anon172 = phi161 - 2;
								*(uint32_t*)(((__sext int64_t)anon172 << 2) + arg4) = (__zext uint32_t)(anon172 < anon147);
							}
						}
					}
				}
				phi79 = *anon75;
			}
			uint64_t anon173 = phi79 + *(uint64_t*)(arg1 - 168);
			*anon75 = anon173;
			phi76 = anon147;
			*anon9 = anon173;
			phi82 = phi82 + 4;
			uint64_t phi83 = anon115 - 4;
			uint64_t anon174 = phi89 + 1;
			phi_in86 = anon174;
			phi_in87 = anon142;
			phi88 = (uint32_t)anon174;
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
		uint64_t anon53;
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
					uint32_t phi52 = anon49;
					if ((uint32_t)((__sext int64_t)anon50 % anon37) == 0)
					{
						anon53 = arg5 << 32 >> 30;
						phi51 = *anon30 + anon53;
						phi52 = *anon24;
					}
					phi_in42 = phi52;
					phi_in43 = phi51;
					phi_in44 = anon50;
					if (phi52 >= anon9)
					{
						uint32_t anon54 = phi52 - anon9;
						*anon24 = anon54;
						phi_in42 = anon54;
						phi_in43 = phi51;
						phi_in44 = anon50;
					}
				}
			}
			while (anon46 * anon46 > phi45);
			phi38 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon55 = *anon6 * *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4);
		*(uint32_t*)(*anon30 + ((__sext int64_t)phi34 << 2)) = anon55;
		uint32_t anon56 = anon55 + 1;
		*anon3 = anon56;
		uint32_t anon57 = phi35 + ((uint32_t)((__sext int64_t)anon56 % (phi36 << 32 >> 32)) == 0 ? 2 : 1);
		*anon24 = anon57;
		phi_in31 = anon57;
		uint64_t anon58 = *anon30 + ((uint32_t)((__sext int64_t)anon56 % (phi36 << 32 >> 32)) == 0 ? anon53 : 0);
		phi_in32 = anon58;
		uint64_t anon59 = arg2 & 0xffffffff;
		phi_in33 = anon59;
		phi34 = anon56;
		if (anon57 >= anon9)
		{
			uint32_t anon60 = anon57 - anon9;
			*anon24 = anon60;
			phi_in31 = anon60;
			phi_in32 = anon58;
			phi_in33 = anon59;
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
