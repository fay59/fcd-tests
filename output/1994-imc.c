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
	if (anon4 != null && anon5 == null || anon4 == null)
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
	uint64_t anon12 = (__zext uint64_t)(anon6 > 4294967295 ? anon6 : anon6 + 255);
	uint64_t anon13 = anon12 >> 31;
	uint32_t anon11 = *(uint32_t*)(((__zext uint64_t)((anon12 & 0x100) != 0 ^ anon13 != 0) - anon13 << 2) + arg3) ^ 1;
	*anon10 = anon11;
	uint32_t* anon14 = (uint32_t*)(arg3 + 12);
	*anon14 = 3 - anon11;
	uint32_t anon15 = rand();
	uint32_t* anon16 = (uint32_t*)0x601e04;
	uint32_t anon17 = anon15 > 4294967295 ? anon15 : anon15 + 255;
	uint32_t anon18 = anon17 >> 31;
	*anon16 = (((anon17 >> 8) + anon18 & 1) - anon18) * 3;
	uint32_t anon19 = *anon8 - 1;
	*anon8 = anon19;
	if (*anon8 != 0)
	{
		uint32_t phi23;
		uint64_t anon33;
		uint32_t phi20 = anon19;
		uint64_t phi_in21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			phi23 = phi20;
			anon24 = (uint32_t*)0x601dec;
			uint32_t anon25 = anon9 - 1;
			*anon24 = anon25;
			uint64_t phi26 = phi_in21;
			uint32_t phi27 = anon25;
			uint32_t phi28 = phi23;
			uint64_t phi29 = phi_in21;
			if ((uint32_t)phi22 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi27 ^ *anon16 & phi28 ^ (phi28 >> 31) + phi28 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon24 - 1;
					*anon24 = anon30;
					phi23 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi26 = anon31;
					phi27 = anon30;
					phi28 = *anon8;
					phi29 = anon31;
				}
				while (*anon24 != 0);
			}
			uint32_t anon32 = phi23 - 1;
			*anon8 = anon32;
			phi20 = anon32;
			anon33 = phi26 + (arg4 << 32 >> 30);
			phi_in21 = anon33;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi23 != 0);
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
	uint64_t anon39 = (__zext uint64_t)(anon36 > 4294967295 ? anon36 : anon36 + 255);
	uint64_t anon40 = anon39 >> 31;
	uint32_t anon38 = *(uint32_t*)(((__zext uint64_t)((anon39 & 0x100) != 0 ^ anon40 != 0) - anon40 << 2) + arg3) ^ 1;
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
	uint32_t* anon22;
	uint64_t phi23;
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
	if (anon1 == 4 || anon1 != 4 && anon1 != 0)
	{
		uint32_t phi27;
		uint64_t anon36;
		uint64_t anon39;
		uint32_t anon45;
		uint32_t phi_in25 = phi14;
		uint64_t phi26 = arg3;
		do
		{
			phi27 = phi_in25;
			uint64_t phi28 = phi26;
			uint32_t anon30 = (uint32_t)anon12;
			uint32_t anon29 = anon30 - 1;
			*anon22 = anon29;
			uint64_t phi31 = phi28;
			uint32_t phi32 = anon29;
			if (anon30 != 0)
			{
				do
				{
					uint64_t phi33 = 3;
					if (anon1 > phi32)
					{
						uint32_t* anon34 = (uint32_t*)phi31;
						uint32_t anon35 = *anon34 + (phi15 * phi15 << 1);
						*anon34 = anon35;
						phi33 = ((__zext uint64_t)(anon1 <= anon35) << 2) + 4294967295 & 0xffffffff;
					}
					anon36 = phi11 & 0xffffffff;
					*(uint32_t*)(phi31 + (anon36 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi33) + *(uint32_t*)phi31;
					uint32_t anon37 = *anon22 - 1;
					*anon22 = anon37;
					uint64_t anon38 = phi31 + 4;
					phi28 = anon38;
					phi31 = anon38;
					phi32 = anon37;
				}
				while (*anon22 != 0);
			}
			phi_in25 = phi27 - 1;
			anon39 = phi28 + (anon8 >> 30);
			phi26 = anon39;
		}
		while (phi27 != 256);
		*anon9 = anon39;
		uint32_t phi40 = phi10;
		uint32_t anon42 = phi10 + 1;
		int64_t anon44 = (__sext int64_t)phi10 << 2;
		uint32_t anon43 = (uint32_t)(anon44 + 4 + arg4 >> 2) & 3;
		uint32_t anon41 = phi10 == 4 | anon42 < 5 | anon42 < anon43 ? anon42 : anon43;
		if (anon41 != 0)
		{
			uint32_t phi46;
			anon45 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon44 + arg4) = (__zext uint32_t)(phi10 < anon45);
			uint32_t anon47 = phi10 - 1;
			phi46 = anon47;
			if (anon41 != 1)
			{
				struct { uint32_t field0; bool field1; } anon48 = llvm.ssub.with.overflow.i32(anon45, anon47);
				uint32_t anon49 = anon45 - anon47;
				*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon49 != 0 & !(anon49 < 0 ^ anon48.field1));
				uint32_t anon50 = phi10 - 2;
				phi46 = anon50;
				if (anon41 != 2)
				{
					struct { uint32_t field0; bool field1; } anon51 = llvm.ssub.with.overflow.i32(anon45, anon50);
					uint32_t anon52 = anon45 - anon50;
					*(uint32_t*)(((__zext uint64_t)anon50 << 32 >> 30) + arg4) = (__zext uint32_t)(anon52 != 0 & !(anon52 < 0 ^ anon51.field1));
					uint32_t anon53 = phi10 - 3;
					phi46 = anon53;
					if (anon41 != 3)
					{
						struct { uint32_t field0; bool field1; } anon54 = llvm.ssub.with.overflow.i32(anon45, anon53);
						uint32_t anon55 = anon45 - anon53;
						*(uint32_t*)(((__zext uint64_t)anon53 << 32 >> 30) + arg4) = (__zext uint32_t)(anon55 != 0 & !(anon55 < 0 ^ anon54.field1));
						uint32_t anon56 = phi10 - 4;
						phi46 = anon56;
						if (anon41 == 5)
						{
							struct { uint32_t field0; bool field1; } anon57 = llvm.ssub.with.overflow.i32(anon45, anon56);
							uint32_t anon58 = anon45 - anon56;
							*(uint32_t*)(((__zext uint64_t)anon56 << 32 >> 30) + arg4) = (__zext uint32_t)(anon58 != 0 & !(anon58 < 0 ^ anon57.field1));
							phi46 = phi10 - 5;
						}
					}
				}
			}
			phi40 = phi46;
			*anon22 = phi10;
			phi23 = anon36;
		}
		if (anon42 != anon41 && anon41 != 0 || anon41 == 0)
		{
			uint32_t anon65;
			uint32_t anon66;
			uint32_t anon59 = phi10 - anon41;
			if (anon59 >= 3)
			{
				uint32_t anon64;
				uint32_t* anon60 = (uint32_t*)(arg1 - 240);
				*anon60 = phi40;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon60 = anon45;
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
					anon65 = anon42 - anon41;
					anon64 = (uint32_t)(((__zext uint64_t)anon65 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon63 < anon64);
				*anon22 = phi10;
				phi23 = anon36;
				anon66 = anon64 << 2;
				phi40 = phi40 - anon66;
			}
			if (anon65 != anon66 && anon59 >= 3 || anon59 < 3)
			{
				struct { uint32_t field0; bool field1; } anon67 = llvm.ssub.with.overflow.i32(anon45, phi40);
				uint32_t anon68 = anon45 - phi40;
				*(uint32_t*)(((__sext int64_t)phi40 << 2) + arg4) = (__zext uint32_t)(anon68 != 0 & !(anon68 < 0 ^ anon67.field1));
				*anon22 = phi10;
				phi23 = anon36;
				if (phi40 != 0)
				{
					uint32_t anon70 = phi40 - 1;
					struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon45, anon70);
					uint32_t anon71 = anon45 - anon70;
					*(uint32_t*)(((__zext uint64_t)anon70 << 32 >> 30) + arg4) = (__zext uint32_t)(anon71 != 0 & !(anon71 < 0 ^ anon69.field1));
					*anon22 = phi10;
					phi23 = anon36;
					if (anon70 != 0)
					{
						uint32_t anon73 = phi40 - 2;
						struct { uint32_t field0; bool field1; } anon72 = llvm.ssub.with.overflow.i32(anon45, anon73);
						uint32_t anon74 = anon45 - anon73;
						*(uint32_t*)(((__sext int64_t)anon73 << 2) + arg4) = (__zext uint32_t)(anon74 != 0 & !(anon74 < 0 ^ anon72.field1));
						*anon22 = phi10;
						phi23 = anon36;
					}
				}
			}
		}
	}
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
		uint64_t phi78 = arg3;
		while (true)
		{
			uint64_t phi81;
			uint64_t phi_in85;
			uint32_t phi86;
			uint64_t phi87;
			uint64_t anon113;
			uint64_t anon140;
			uint32_t anon145;
			uint32_t phi162;
			uint64_t phi79 = phi78;
			*anon9 = phi79;
			if (anon1 != 0)
			{
				uint32_t anon99;
				int64_t anon101;
				int64_t anon102;
				uint32_t phi103;
				uint32_t anon104;
				int64_t anon109;
				uint32_t phi118;
				uint32_t phi119;
				uint32_t anon121;
				uint64_t phi132;
				uint32_t phi137;
				uint64_t anon139;
				uint32_t phi80 = phi76;
				phi81 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon22) << 2) - 4;
				int64_t anon84 = (__sext int64_t)*anon22 << 2;
				int64_t anon83 = (anon84 & 0xc) + arg4;
				phi82 = anon83;
				phi_in85 = 0;
				phi78 = phi79;
				phi86 = 0;
				phi87 = phi_in85;
				uint64_t phi88 = phi78;
				uint32_t* anon89 = (uint32_t*)0x601e00;
				*anon89 = *anon22;
				uint32_t phi90 = anon1;
				if (*anon22 != 0)
				{
					uint32_t anon95;
					do
					{
						uint32_t anon91 = rand();
						uint64_t anon92 = ((__zext uint64_t)(anon91 > 4294967295 ? anon91 : anon91 + 255) << 32 >> 40) % (__sext int64_t)phi90;
						*anon22 = (uint32_t)anon92;
						uint32_t* anon93 = (uint32_t*)0x601e08;
						uint32_t* anon94 = (uint32_t*)(((__sext int64_t)*anon89 << 2) + arg4);
						*anon93 = *anon94;
						*anon94 = *(uint32_t*)((anon92 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon22 << 2) + arg4) = *anon93;
						anon95 = *anon89 - 1;
						*anon89 = anon95;
						phi90 = *anon89;
					}
					while (anon95 != 0);
					phi88 = *anon9;
				}
				uint64_t phi_in96 = phi88;
				uint32_t* anon97 = (uint32_t*)phi81;
				if (*anon97 == 0)
				{
					uint32_t phi98;
					anon99 = anon1 - 1;
					phi98 = anon99;
					anon102 = anon2 << 32 >> 30;
					anon101 = anon102 + arg4;
					phi_in100 = anon101;
					phi103 = phi80;
					anon104 = *anon22 - phi86;
					if (phi80 > anon104)
					{
						uint64_t anon106;
						do
						{
							*anon22 = phi98;
							uint64_t phi105 = phi_in100;
							phi98 = *anon22 - 1;
							anon106 = phi105 - 4;
							phi_in100 = anon106;
						}
						while (*(uint32_t*)anon106 == 0);
						*anon97 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi103 = phi80 - 1;
					}
				}
				else 
				{
					uint64_t phi_in108;
					uint32_t phi107 = anon99;
					anon109 = anon102 - 4 + arg4;
					phi_in108 = anon109;
					if (phi80 == 0)
					{
						uint32_t* anon111;
						do
						{
							*anon22 = phi107;
							uint64_t phi110 = phi_in108;
							phi107 = *anon22 - 1;
							phi_in108 = phi110 - 4;
							anon111 = (uint32_t*)phi110;
						}
						while (*anon111 != 0);
						*anon111 = 1;
						*anon97 = 0;
						phi103 = phi80;
					}
					else 
					{
						phi103 = phi80 - 1;
					}
				}
				anon113 = phi82 & 0xffffffff00000000 | phi82 & 0xffffffff;
				uint32_t* anon112 = (uint32_t*)anon113;
				if (*anon112 == 0)
				{
					uint64_t phi114;
					bool anon120;
					uint64_t anon115 = (__zext uint64_t)anon104;
					phi114 = anon115;
					uint32_t phi_in116 = anon99;
					uint64_t phi_in117 = anon101;
					if (phi76 <= anon104)
					{
						phi118 = phi103;
						phi119 = phi76;
						anon120 = anon1 != 3 | phi76 == 0;
						if (!anon120)
						{
							phi114 = anon115;
							phi_in116 = anon99;
							phi_in117 = anon101;
							phi118 = phi103;
							phi119 = phi76;
						}
					}
					anon121 = phi86 + anon99 - *anon22;
					if (!anon120 && phi76 <= anon104 && phi103 == 2 | anon104 == anon121 || phi76 > anon104)
					{
						bool anon123;
						do
						{
							*anon22 = phi_in116;
							uint64_t phi122 = phi_in117;
							uint64_t anon124 = phi122 - 4;
							anon123 = *anon22 == anon121 | *(uint32_t*)anon124 == 0;
							if (anon123)
							{
								phi114 = phi114 & 0xffffffffffffff00 | (__zext uint64_t)(*anon22 == anon121);
								phi_in116 = *anon22 - 1;
								phi_in117 = anon124;
							}
						}
						while (anon123);
						*anon112 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi118 = phi103 - (__zext uint32_t)(anon104 == anon121);
						phi119 = phi76 - 1;
					}
				}
				else 
				{
					uint32_t phi_in125 = anon99;
					uint64_t phi_in126 = anon109;
					if (phi76 == 0)
					{
						uint32_t* anon128;
						do
						{
							*anon22 = phi_in125;
							uint64_t phi127 = phi_in126;
							phi_in125 = *anon22 - 1;
							phi_in126 = phi127 - 4;
							anon128 = (uint32_t*)phi127;
						}
						while (*anon128 != 0 | *anon22 == anon121);
						*anon128 = 1;
						*anon112 = 0;
						phi118 = phi103;
						phi119 = phi76;
					}
					else 
					{
						phi118 = phi103;
						phi119 = phi76 - 1;
					}
				}
				phi80 = phi118;
				phi76 = phi119;
				uint64_t* anon129 = (uint64_t*)0x601df0;
				*anon129 = arg4;
				uint32_t phi130 = *anon22;
				uint64_t phi_in131 = arg4;
				do
				{
					phi132 = phi_in96;
					uint32_t phi_in133 = phi130;
					uint64_t phi134 = phi_in131;
					if (*(uint32_t*)phi134 != 0)
					{
						uint32_t* anon135 = (uint32_t*)phi132;
						uint32_t* anon136 = (uint32_t*)(phi132 + (phi23 << 32 >> 30));
						*anon135 = *anon136;
						*anon136 = *anon135;
						phi_in133 = *anon135;
					}
					phi137 = phi_in133;
					uint32_t anon138 = phi137 - 1;
					*anon22 = anon138;
					phi_in96 = phi132 + 4;
					phi130 = anon138;
					anon139 = phi134 + 4;
					phi_in131 = anon139;
				}
				while (phi137 != 0);
				*anon129 = anon139;
				anon140 = phi132 + 4;
				*anon9 = anon140;
				uint32_t phi141 = *anon22;
				uint32_t anon143 = *anon22 + 1;
				uint32_t anon144 = (uint32_t)(anon84 + 4 + arg4 >> 2) & 3;
				uint32_t anon142 = anon143 < 6 ? anon143 : anon143 < anon144 ? anon143 : anon144;
				if (anon142 != 0)
				{
					uint32_t phi148;
					int64_t anon147 = anon3 >> 32;
					int64_t anon146 = anon147 & 1;
					anon145 = (uint32_t)(anon146 + anon2 << 32 >> 33) + (uint32_t)anon146 - ((uint32_t)(anon2 + anon147) & 1);
					*(uint32_t*)anon83 = (__zext uint32_t)(*anon22 < anon145);
					uint32_t anon149 = *anon22 - 1;
					phi148 = anon149;
					if (anon142 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon149 << 32 >> 30) + arg4) = (__zext uint32_t)(anon149 < anon145);
						uint32_t anon150 = *anon22 - 2;
						phi148 = anon150;
						if (anon142 != 2)
						{
							struct { uint32_t field0; bool field1; } anon151 = llvm.ssub.with.overflow.i32(anon145, anon150);
							uint32_t anon152 = anon145 - anon150;
							*(uint32_t*)(((__zext uint64_t)anon150 << 32 >> 30) + arg4) = (__zext uint32_t)(anon152 != 0 & !(anon152 < 0 ^ anon151.field1));
							uint32_t anon153 = *anon22 - 3;
							phi148 = anon153;
							if (anon142 != 3)
							{
								struct { uint32_t field0; bool field1; } anon154 = llvm.ssub.with.overflow.i32(anon145, anon153);
								uint32_t anon155 = anon145 - anon153;
								*(uint32_t*)(((__zext uint64_t)anon153 << 32 >> 30) + arg4) = (__zext uint32_t)(anon155 != 0 & !(anon155 < 0 ^ anon154.field1));
								uint32_t anon156 = *anon22 - 4;
								phi148 = anon156;
								if (anon142 == 5)
								{
									struct { uint32_t field0; bool field1; } anon157 = llvm.ssub.with.overflow.i32(anon145, anon156);
									uint32_t anon158 = anon145 - anon156;
									*(uint32_t*)(((__zext uint64_t)anon156 << 32 >> 30) + arg4) = (__zext uint32_t)(anon158 != 0 & !(anon158 < 0 ^ anon157.field1));
									phi148 = *anon22 - 5;
								}
							}
						}
					}
					uint32_t phi_in159 = phi148;
					phi141 = phi_in159;
				}
				if (anon143 != anon142 && anon142 != 0 || anon142 == 0)
				{
					uint32_t anon163;
					uint32_t anon164;
					uint32_t phi160 = phi141;
					uint32_t anon161 = *anon22 - anon142;
					if (anon161 >= 3)
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi162 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon164 = anon143 - anon142;
						anon163 = (uint32_t)(((__zext uint64_t)anon164 + 4294967292 >> 2 & 0x3fffffff) + 1) << 2;
						phi160 = phi160 - anon163;
					}
					if (anon163 != anon164 && anon161 >= 3 || anon161 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi160 << 2) + arg4) = (__zext uint32_t)(phi160 < anon145);
						if (phi160 != 0)
						{
							uint32_t anon166 = phi160 - 1;
							struct { uint32_t field0; bool field1; } anon165 = llvm.ssub.with.overflow.i32(anon145, anon166);
							uint32_t anon167 = anon145 - anon166;
							*(uint32_t*)(((__zext uint64_t)anon166 << 32 >> 30) + arg4) = (__zext uint32_t)(anon167 != 0 & !(anon167 < 0 ^ anon165.field1));
							if (anon166 != 0)
							{
								uint32_t anon168 = phi160 - 2;
								*(uint32_t*)(((__sext int64_t)anon168 << 2) + arg4) = (__zext uint32_t)(anon168 < anon145);
							}
						}
					}
				}
				phi79 = *anon75;
			}
			uint64_t anon169 = phi79 + *(uint64_t*)(arg1 - 168);
			*anon75 = anon169;
			phi76 = anon145;
			phi78 = anon169;
			(__asm "movdqa xmm0, xmm3")();
			phi162 = phi162 + 1;
			phi81 = phi81 + 4;
			uint64_t phi82 = anon113 - 4;
			uint64_t anon170 = phi87 + 1;
			phi_in85 = anon170;
			phi78 = anon140;
			phi86 = (uint32_t)anon170;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct x86_regsalloca1;
	struct { uint64_t field0; uint8_t field1[64]; uint64_t field2; } alloca2;
	uint64_t phi18;
	uint64_t phi21;
	uint32_t phi22;
	uint32_t phi23;
	uint32_t phi24;
	uint64_t anon27;
	uint32_t anon28;
	uint32_t anon29;
	uint32_t anon30;
	uint32_t* anon36;
	uint32_t* anon38;
	uint32_t phi41;
	uint64_t phi42;
	uint64_t** phi44;
	uint64_t* phi45;
	uint64_t phi46;
	uint32_t phi81;
	alloca1.field6.field0 = arg2;
	alloca1.field5.field0 = arg3;
	alloca1.field4.field0 = arg4;
	alloca1.field3.field0 = arg5;
	alloca2.field2 = arg0;
	alloca1.field17.field0 = arg4;
	alloca1.field14.field0 = arg5 << 32 >> 32;
	alloca1.field2.field0 = arg2 & 0xffffffff;
	alloca1.field15.field0 = arg2 + 4294967295 & 0xffffffff;
	alloca1.field8.field0 = (uint64_t)&alloca2;
	alloca2.field0 = arg3;
	alloca1.field9.field0 = 4199491;
	uint32_t anon3 = rand();
	uint64_t anon4 = (__zext uint64_t)anon3;
	alloca1.field1.field0 = anon4;
	alloca1.field4.field0 = anon4 + 255 & 0xffffffff;
	uint32_t* anon6 = (uint32_t*)&alloca1.field2.field0;
	uint64_t anon5 = (__zext uint64_t)*anon6;
	alloca1.field5.field0 = anon5;
	uint64_t* anon7 = (uint64_t*)0x601df0;
	*anon7 = alloca1.field17.field0;
	uint32_t* anon8 = (uint32_t*)0x601e00;
	uint32_t* anon9 = (uint32_t*)&alloca1.field15.field0;
	*anon8 = *anon9;
	alloca1.field9.field0 = 4199518;
	uint32_t phi10 = anon3;
	if (anon3 <= 4294967295)
	{
		uint32_t anon11 = anon3 + 255;
		alloca1.field1.field0 = (__zext uint64_t)anon11;
		phi10 = anon11;
	}
	uint32_t anon12 = phi10 >> 8;
	uint32_t anon13 = phi10 >> 31;
	alloca1.field4.field0 = (__zext uint64_t)(anon12 + anon13 & 1);
	alloca1.field1.field0 = 1;
	alloca1.field9.field0 = 4199541;
	uint32_t phi14 = 1;
	if ((__zext uint32_t)((anon12 & 1) != 0 ^ anon13 != 0) != anon13)
	{
		alloca1.field1.field0 = anon5;
		phi14 = *anon6;
	}
	uint32_t* anon15 = (uint32_t*)0x601e04;
	*anon15 = phi14;
	uint32_t anon16 = (*anon6 >> 31) + *anon6 >> 1;
	alloca1.field5.field0 = (__zext uint64_t)anon16;
	uint32_t* anon17 = (uint32_t*)0x601de8;
	*anon17 = anon16;
	alloca1.field9.field0 = 4199568;
	if (*anon6 == 0)
	{
		*anon8 = 4294967294;
		*(uint32_t*)(alloca1.field8.field0 + 12) = 4294967294;
		alloca1.field9.field0 = 4200273;
		phi18 = (__zext uint64_t)*anon9;
	}
	else 
	{
		alloca1.field6.field0 = alloca1.field17.field0;
		uint64_t anon19 = alloca1.field17.field0 + 4;
		alloca1.field3.field0 = anon19;
		uint64_t anon20 = (__zext uint64_t)*anon9;
		alloca1.field1.field0 = anon20;
		alloca1.field4.field0 = anon5;
		alloca1.field9.field0 = 4199582;
		alloca1.field17.field0 = alloca1.field17.field0;
		phi21 = anon19;
		phi22 = *anon9;
		phi23 = *anon6;
		phi24 = anon16;
		*anon7 = alloca1.field17.field0;
		alloca1.field17.field0 = phi21;
		alloca1.field9.field0 = 4199623;
		*(uint32_t*)(alloca1.field17.field0 - 4) = phi22;
		if (phi22 == phi24)
		{
			uint32_t anon26 = phi23 - 2;
			uint64_t anon25 = (__zext uint64_t)anon26;
			alloca1.field4.field0 = anon25;
			*anon8 = anon26;
			alloca1.field9.field0 = 4199636;
			if (phi22 != 0)
			{
				alloca1.field1.field0 = anon25;
				alloca1.field9.field0 = 4199640;
				*(uint32_t*)(alloca1.field17.field0 - 4) = anon26;
			}
		}
		if (phi22 != phi24 || phi22 == phi24 && phi22 != 0)
		{
			alloca1.field4.field0 = (__zext uint64_t)*anon8;
			alloca1.field6.field0 = alloca1.field17.field0;
			anon27 = alloca1.field17.field0 + 4;
			alloca1.field3.field0 = anon27;
			anon28 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon28;
			*anon8 = anon28;
			alloca1.field9.field0 = 4199613;
			*anon7 = alloca1.field17.field0;
		}
		anon30 = (uint32_t)alloca1.field2.field0;
		anon29 = anon30 - 2;
		alloca1.field1.field0 = (__zext uint64_t)anon29;
		*(uint32_t*)(alloca1.field8.field0 + 12) = anon29;
		*anon8 = anon29;
		alloca1.field9.field0 = 4199672;
		phi18 = anon20;
	}
	if (*anon6 == 0 || *anon6 != 0 && anon29 != 0)
	{
		uint32_t anon40;
		alloca1.field7.field0 = phi18;
		alloca1.field9.field0 = 4199680;
		do
		{
			alloca1.field9.field0 = 4199685;
			uint32_t anon31 = rand();
			uint64_t anon32 = (__zext uint64_t)anon31;
			alloca1.field1.field0 = anon32;
			alloca1.field4.field0 = anon32 + 255 & 0xffffffff;
			alloca1.field9.field0 = 4199696;
			uint32_t phi33 = anon31;
			if (anon31 <= 4294967295)
			{
				uint32_t anon34 = anon31 + 255;
				alloca1.field1.field0 = (__zext uint64_t)anon34;
				phi33 = anon34;
			}
			uint64_t anon35 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
			alloca1.field3.field0 = anon35;
			anon36 = (uint32_t*)0x601dec;
			uint64_t anon37 = ((__zext uint64_t)phi33 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
			*anon36 = (uint32_t)anon37;
			anon38 = (uint32_t*)0x601e08;
			uint32_t* anon39 = (uint32_t*)anon35;
			*anon38 = *anon39;
			*anon39 = *(uint32_t*)(alloca1.field17.field0 + (anon37 << 32 >> 30));
			alloca1.field4.field0 = (__zext uint64_t)*anon38;
			*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon36 << 2)) = *anon38;
			alloca1.field7.field0 = (__zext uint64_t)*anon8;
			anon40 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon40;
			*anon8 = anon40;
			alloca1.field9.field0 = 4199772;
		}
		while (anon40 != 0);
		phi41 = *anon6;
		uint64_t** anon43 = (uint64_t**)&alloca1.field8.field0;
		phi42 = (uint64_t)*anon43;
		phi44 = anon43;
		phi45 = *anon43;
		phi46 = alloca1.field17.field0;
	}
	if (*anon6 != 0 && anon29 == 0)
	{
		phi41 = anon30;
		phi42 = alloca1.field8.field0;
		phi44 = (uint64_t**)&alloca1.field8.field0;
		phi45 = (uint64_t*)alloca1.field8.field0;
		phi46 = alloca1.field17.field0;
	}
	alloca1.field4.field0 = (__zext uint64_t)*anon17;
	int64_t anon47 = (__sext int64_t)phi41;
	alloca1.field1.field0 = anon47;
	alloca1.field16.field0 = (__zext uint64_t)(phi41 * phi41);
	uint64_t anon48 = alloca1.field14.field0 << 2;
	alloca1.field14.field0 = anon48;
	alloca1.field10.field0 = 0;
	*(uint32_t*)(phi46 + (anon47 << 2) - 4) = *anon17;
	alloca1.field9.field0 = 4199804;
	alloca1.field1.field0 = *phi45;
	*anon36 = 0;
	*anon8 = 0;
	uint64_t* anon49 = (uint64_t*)0x601e10;
	*anon49 = *phi45;
	alloca1.field9.field0 = 4199834;
	alloca1.field6.field0 = *phi45;
	*anon49 = *phi45;
	uint32_t phi_in50 = 0;
	alloca1.field9.field0 = 4199836;
	do
	{
		uint32_t phi66;
		uint32_t phi51 = phi_in50;
		alloca1.field9.field0 = 4199935;
		alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(phi42 + 12);
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
		*anon8 = *(uint32_t*)(phi42 + 12);
		alloca1.field9.field0 = 4199959;
		*anon36 = *anon9;
		uint64_t* phi52 = (uint64_t*)phi42;
		if (*(uint32_t*)(phi42 + 12) != 0)
		{
			uint32_t anon60;
			alloca1.field9.field0 = 4199968;
			do
			{
				alloca1.field9.field0 = 4199973;
				uint32_t anon53 = rand();
				uint64_t anon54 = (__zext uint64_t)anon53;
				alloca1.field1.field0 = anon54;
				alloca1.field4.field0 = anon54 + 255 & 0xffffffff;
				alloca1.field9.field0 = 4199984;
				uint32_t phi55 = anon53;
				if (anon53 <= 4294967295)
				{
					uint32_t anon56 = anon53 + 255;
					alloca1.field1.field0 = (__zext uint64_t)anon56;
					phi55 = anon56;
				}
				uint64_t anon57 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
				alloca1.field3.field0 = anon57;
				uint64_t anon58 = ((__zext uint64_t)phi55 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
				*anon36 = (uint32_t)anon58;
				uint32_t* anon59 = (uint32_t*)anon57;
				*anon38 = *anon59;
				*anon59 = *(uint32_t*)(alloca1.field17.field0 + (anon58 << 32 >> 30));
				alloca1.field4.field0 = (__zext uint64_t)*anon38;
				*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon36 << 2)) = *anon38;
				alloca1.field7.field0 = (__zext uint64_t)*anon8;
				anon60 = *anon8 - 1;
				alloca1.field1.field0 = (__zext uint64_t)anon60;
				*anon8 = anon60;
				alloca1.field9.field0 = 4200060;
			}
			while (anon60 != 0);
			*anon36 = *anon9;
			phi52 = *phi44;
		}
		alloca1.field1.field0 = (__zext uint64_t)((uint32_t)alloca1.field2.field0 + 1 - *anon15);
		alloca1.field9.field0 = 4200073;
		alloca1.field7.field0 = *phi52;
		*anon8 = 0;
		alloca1.field10.field0 = 0;
		alloca1.field9.field0 = 4200100;
		*anon49 = *phi52;
		uint64_t phi61 = 4200106;
		uint64_t phi62 = 8;
		uint64_t phi63 = 2099034;
		uint64_t phi64 = 4200108;
		do
		{
			alloca1.field9.field0 = phi61;
			*(uint32_t*)(alloca1.field9.field0 + phi63) = *(uint32_t*)&((uint8_t*)&alloca1)[phi62];
			alloca1.field9.field0 = phi64;
			uint32_t phi_in65 = *(uint32_t*)&alloca1.field10.field0;
			phi66 = phi_in65;
			alloca1.field9.field0 = 4200200;
			if (*(uint32_t*)&alloca1.field16.field0 > phi66)
			{
				uint32_t* anon67 = (uint32_t*)(alloca1.field7.field0 + ((__sext int64_t)phi66 << 2));
				uint32_t anon68 = *anon67 + *anon15 * *(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon36 << 2));
				*anon67 = anon68;
				uint64_t anon69 = (__zext uint64_t)anon68;
				alloca1.field6.field0 = anon69;
				uint32_t anon70 = anon68 + 1;
				alloca1.field10.field0 = (__zext uint64_t)anon70;
				uint32_t anon71 = anon68 + 1;
				alloca1.field3.field0 = (__zext uint64_t)anon71;
				*anon36 = anon71;
				*anon8 = anon70;
				int64_t anon72 = (__sext int64_t)anon70;
				int64_t anon73 = (__sext int64_t)*(uint32_t*)&((uint8_t*)&alloca1)[phi62];
				alloca1.field1.field0 = anon72 / anon73 & 0xffffffff;
				int64_t anon74 = anon72 % anon73;
				alloca1.field4.field0 = anon74 & 0xffffffff;
				alloca1.field9.field0 = 4200180;
				uint32_t phi75 = anon71;
				if ((uint32_t)anon74 == 0)
				{
					*anon36 = anon68;
					alloca1.field7.field0 = alloca1.field7.field0 + alloca1.field14.field0;
					alloca1.field9.field0 = 4200191;
					alloca1.field3.field0 = anon69;
					phi75 = anon68;
				}
				alloca1.field9.field0 = 4200195;
				phi_in65 = anon70;
				if (phi75 >= *(uint32_t*)&((uint8_t*)&alloca1)[phi62])
				{
					alloca1.field9.field0 = 4200242;
					alloca1.field3.field0 = (__zext uint64_t)(phi75 - *(uint32_t*)&((uint8_t*)&alloca1)[phi62]);
					phi61 = 4200248;
					phi62 = 24;
					phi63 = 2098868;
					phi64 = 4200250;
				}
			}
		}
		while (*(uint32_t*)&alloca1.field16.field0 > phi66);
		uint32_t anon76 = *anon15 * *(uint32_t*)(phi46 + ((__sext int64_t)*anon36 << 2));
		*(uint32_t*)(*anon49 + ((__sext int64_t)phi51 << 2)) = anon76;
		alloca1.field11.field0 = (__zext uint64_t)anon76;
		uint32_t anon77 = anon76 + 1;
		alloca1.field10.field0 = (__zext uint64_t)anon77;
		uint32_t anon78 = anon76 + 1;
		alloca1.field3.field0 = (__zext uint64_t)anon78;
		*anon8 = anon77;
		*anon36 = anon78;
		int64_t anon79 = (__sext int64_t)anon77;
		alloca1.field1.field0 = anon79 / anon47 & 0xffffffff;
		int64_t anon80 = anon79 % anon47;
		alloca1.field4.field0 = anon80 & 0xffffffff;
		alloca1.field9.field0 = 4199909;
		phi81 = anon78;
		if ((uint32_t)anon80 == 0)
		{
			uint32_t anon82 = anon76 + 2;
			alloca1.field3.field0 = (__zext uint64_t)anon82;
			uint64_t anon83 = *anon49 + anon48;
			alloca1.field6.field0 = anon83;
			alloca1.field9.field0 = 4199922;
			*anon36 = anon82;
			*anon49 = anon83;
			phi81 = anon82;
		}
		alloca1.field9.field0 = 4199930;
		phi51 = anon77;
		if (phi81 >= phi41)
		{
			uint32_t anon84 = phi81 - phi41;
			alloca1.field3.field0 = (__zext uint64_t)anon84;
			alloca1.field9.field0 = 4200232;
			*anon36 = anon84;
			phi_in50 = anon77;
			alloca1.field9.field0 = 4200237;
		}
	}
	while (phi81 >= phi41);
	alloca1.field9.field0 = 4199619;
	alloca1.field5.field0 = (__zext uint64_t)anon28;
	phi21 = anon27;
	phi22 = anon28;
	phi23 = *anon8;
	phi24 = anon28;
	*anon49 = alloca1.field7.field0;
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
			uint32_t* anon5 = (uint32_t*)0x601dec;
			uint64_t anon6 = ((__zext uint64_t)(anon4 > 4294967295 ? anon4 : anon4 + 255) << 32 >> 40) % (phi3 << 32 >> 32);
			*anon5 = (uint32_t)anon6;
			uint32_t* anon7 = (uint32_t*)0x601e08;
			uint32_t* anon8 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*anon7 = *anon8;
			*anon8 = *(uint32_t*)((anon6 << 32 >> 30) + arg1);
			*(uint32_t*)(((__sext int64_t)*anon5 << 2) + arg1) = *anon7;
			anon9 = *anon1 - 1;
			*anon1 = anon9;
			phi3 = (__zext uint64_t)*anon1;
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
