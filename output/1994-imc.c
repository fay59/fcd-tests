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
		uint64_t anon35;
		uint32_t phi20 = anon19;
		uint64_t phi21 = *anon7;
		uint64_t phi22 = arg1;
		do
		{
			uint32_t phi_in23 = phi20;
			uint64_t phi_in24 = phi21;
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
					*(uint32_t*)phi31 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi30 ^ (phi30 >> 31) + phi30 >> 1) << 2) + arg3);
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
			phi21 = anon35;
			phi22 = arg1 & 0xffffffff;
		}
		while (phi27 != 0);
		*anon7 = anon35;
	}
	uint32_t anon36 = rand();
	uint32_t anon37 = (uint32_t)(((__zext uint64_t)(anon36 > 4294967295 ? anon36 : anon36 + 255) << 32 >> 40) % anon4);
	*anon2 = anon37;
	*anon5 = 3 - anon37;
	uint32_t anon38 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint32_t anon39 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon39;
	uint64_t anon42 = (__zext uint64_t)anon38;
	uint64_t anon41 = (anon38 > 4294967295 ? anon42 : anon42 + 255) >> 31 & 1;
	uint32_t anon40 = *(uint32_t*)(((__zext uint64_t)(((anon38 > 4294967295 ? anon38 : anon38 + 255) & 0x100) != 0 ^ anon41 != 0) - anon41 << 2) + arg3) ^ 1;
	*anon10 = anon40;
	*anon14 = 3 - anon40;
	if (anon9 != 0)
	{
		uint64_t anon54;
		uint32_t phi43 = anon39;
		uint64_t phi44 = arg2;
		do
		{
			uint64_t anon52;
			uint32_t phi_in45 = phi43;
			uint64_t phi_in46 = phi44;
			*anon25 = anon39;
			uint32_t phi47 = anon39;
			uint32_t phi48 = phi_in45;
			do
			{
				uint64_t phi49 = phi_in46;
				uint32_t* anon50 = (uint32_t*)phi49;
				*anon50 = *anon50 + (*(uint32_t*)(((__sext int64_t)(phi47 ^ (phi48 >> 31) + phi48 >> 1 ^ *anon16 & phi48) << 2) + arg3) << 2);
				uint32_t anon51 = *anon25 - 1;
				*anon25 = anon51;
				anon52 = phi49 + 4;
				phi_in46 = anon52;
				phi47 = anon51;
				phi48 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon53 = *anon8 - 1;
			*anon8 = anon53;
			phi43 = anon53;
			anon54 = anon52 + (arg4 << 32 >> 30);
			phi44 = anon54;
		}
		while (*anon8 != 0);
		*anon7 = anon54;
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
	uint64_t phi_in104;
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
		uint64_t anon36;
		uint64_t anon39;
		uint32_t phi40;
		uint32_t anon45;
		uint64_t phi25 = arg3;
		do
		{
			phi26 = phi_in14;
			uint64_t phi_in27 = phi25;
			anon28 = (uint32_t*)0x601dec;
			uint32_t anon30 = (uint32_t)anon12;
			uint32_t anon29 = anon30 - 1;
			*anon28 = anon29;
			uint64_t phi31 = phi_in27;
			uint64_t phi32 = phi_in27;
			uint32_t phi33 = anon29;
			if (anon30 != 0)
			{
				do
				{
					uint64_t phi34 = 3;
					if (anon1 > phi33)
					{
						uint32_t* anon35 = (uint32_t*)phi32;
						*anon35 = *anon35 + (phi15 * phi15 << 1);
						phi34 = ((__zext uint64_t)(anon1 <= *anon28) << 2) + 4294967295 & 0xffffffff;
					}
					anon36 = phi11 & 0xffffffff;
					*(uint32_t*)(phi32 + (anon36 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi34) + *(uint32_t*)phi32;
					uint32_t anon37 = *anon28 - 1;
					*anon28 = anon37;
					uint64_t anon38 = phi32 + 4;
					phi31 = anon38;
					phi32 = anon38;
					phi33 = anon37;
				}
				while (*anon28 != 0);
			}
			phi_in14 = phi26 - 1;
			anon39 = phi31 + (anon8 >> 30);
			phi25 = anon39;
		}
		while (phi26 != 256);
		*anon9 = anon39;
		uint32_t anon41 = phi10 + 1;
		int64_t anon43 = (__sext int64_t)phi10 << 2;
		uint32_t anon42 = (uint32_t)(anon43 + 4 + arg4 >> 2) & 3;
		phi40 = anon41 < anon42 ? anon41 : anon42;
		if (phi10 == 4294967295 || phi10 == 4 || phi10 == 3 || phi10 == 2 || phi10 == 1 || phi10 == 0)
		{
			phi40 = anon41;
		}
		uint32_t phi44 = phi10;
		if (phi40 != 0)
		{
			uint32_t phi46;
			anon45 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon43 + arg4) = (__zext uint32_t)(phi10 < anon45);
			uint32_t anon47 = phi10 - 1;
			phi46 = anon47;
			if (phi40 != 1)
			{
				struct { uint32_t field0; bool field1; } anon48 = llvm.ssub.with.overflow.i32(anon45, anon47);
				uint32_t anon49 = anon45 - anon47;
				*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon49 != 0 & !(anon49 < 0 ^ anon48.field1));
				uint32_t anon50 = phi10 - 2;
				phi46 = anon50;
				if (phi40 != 2)
				{
					struct { uint32_t field0; bool field1; } anon51 = llvm.ssub.with.overflow.i32(anon45, anon50);
					uint32_t anon52 = anon45 - anon50;
					*(uint32_t*)(((__zext uint64_t)anon50 << 32 >> 30) + arg4) = (__zext uint32_t)(anon52 != 0 & !(anon52 < 0 ^ anon51.field1));
					uint32_t anon53 = phi10 - 3;
					phi46 = anon53;
					if (phi40 != 3)
					{
						struct { uint32_t field0; bool field1; } anon54 = llvm.ssub.with.overflow.i32(anon45, anon53);
						uint32_t anon55 = anon45 - anon53;
						*(uint32_t*)(((__zext uint64_t)anon53 << 32 >> 30) + arg4) = (__zext uint32_t)(anon55 != 0 & !(anon55 < 0 ^ anon54.field1));
						uint32_t anon56 = phi10 - 4;
						phi46 = anon56;
						if (phi40 == 5)
						{
							struct { uint32_t field0; bool field1; } anon57 = llvm.ssub.with.overflow.i32(anon45, anon56);
							uint32_t anon58 = anon45 - anon56;
							*(uint32_t*)(((__zext uint64_t)anon56 << 32 >> 30) + arg4) = (__zext uint32_t)(anon58 != 0 & !(anon58 < 0 ^ anon57.field1));
							phi46 = phi10 - 5;
						}
					}
				}
			}
			phi44 = phi46;
			phi22 = phi10;
			phi23 = anon36;
		}
		if (phi40 == 0 || anon41 != phi40 && phi40 != 0)
		{
			uint32_t anon66;
			uint32_t anon67;
			uint32_t* anon59 = (uint32_t*)(arg1 - 240);
			*anon59 = phi44;
			uint32_t phi60 = *anon59;
			uint32_t anon61 = phi10 - phi40;
			if (anon61 >= 3)
			{
				uint32_t anon65;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon59 = anon45;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in62 = 0;
				do
				{
					uint32_t phi63 = phi_in62;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon64 = phi63 + 1;
					phi_in62 = anon64;
					anon66 = anon41 - phi40;
					anon65 = (uint32_t)(((__zext uint64_t)anon66 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon64 < anon65);
				phi22 = phi10;
				phi23 = anon36;
				anon67 = anon65 << 2;
				phi60 = *anon59 - anon67;
			}
			if (anon66 != anon67 && anon61 >= 3 || anon61 < 3)
			{
				struct { uint32_t field0; bool field1; } anon68 = llvm.ssub.with.overflow.i32(anon45, phi60);
				uint32_t anon69 = anon45 - phi60;
				*(uint32_t*)(((__sext int64_t)phi60 << 2) + arg4) = (__zext uint32_t)(anon69 != 0 & !(anon69 < 0 ^ anon68.field1));
				phi22 = phi10;
				phi23 = anon36;
				if (phi60 != 0)
				{
					uint32_t anon71 = phi60 - 1;
					struct { uint32_t field0; bool field1; } anon70 = llvm.ssub.with.overflow.i32(anon45, anon71);
					uint32_t anon72 = anon45 - anon71;
					*(uint32_t*)(((__zext uint64_t)anon71 << 32 >> 30) + arg4) = (__zext uint32_t)(anon72 != 0 & !(anon72 < 0 ^ anon70.field1));
					phi22 = phi10;
					phi23 = anon36;
					if (anon71 != 0)
					{
						uint32_t anon74 = phi60 - 2;
						struct { uint32_t field0; bool field1; } anon73 = llvm.ssub.with.overflow.i32(anon45, anon74);
						uint32_t anon75 = anon45 - anon74;
						*(uint32_t*)(((__sext int64_t)anon74 << 2) + arg4) = (__zext uint32_t)(anon75 != 0 & !(anon75 < 0 ^ anon73.field1));
						phi22 = phi10;
						phi23 = anon36;
					}
				}
			}
		}
	}
	*anon28 = phi22;
	uint64_t* anon76 = (uint64_t*)0x601df8;
	*anon76 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi77;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon78 = anon2 + 1;
		phi77 = (uint32_t)(anon78 + (anon78 >> 31 & 1) << 32 >> 33);
		uint64_t phi79 = arg3;
		while (true)
		{
			uint32_t phi83;
			uint64_t phi84;
			uint64_t phi_in88;
			uint64_t phi_in89;
			uint32_t phi90;
			uint64_t phi91;
			uint64_t anon116;
			uint32_t phi_in121;
			uint64_t anon143;
			uint32_t anon148;
			uint32_t phi80 = phi77;
			uint64_t phi_in81 = phi79;
			*anon9 = phi_in81;
			uint64_t phi82 = phi_in81;
			if (anon1 != 0)
			{
				uint32_t anon103;
				int64_t anon105;
				int64_t anon106;
				uint32_t phi107;
				uint32_t anon108;
				int64_t anon112;
				uint32_t phi122;
				uint32_t anon124;
				uint64_t phi135;
				uint32_t phi140;
				uint64_t anon142;
				phi83 = phi80;
				phi84 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon28) << 2) - 4;
				int64_t anon87 = (__sext int64_t)*anon28 << 2;
				int64_t anon86 = (anon87 & 0xc) + arg4;
				phi85 = anon86;
				phi_in88 = 0;
				phi_in89 = phi_in81;
				phi90 = 0;
				phi91 = phi_in88;
				uint32_t* anon92 = (uint32_t*)0x601e00;
				*anon92 = *anon28;
				uint64_t phi93 = phi_in89;
				uint32_t phi94 = anon1;
				if (*anon28 != 0)
				{
					uint32_t anon99;
					do
					{
						uint32_t anon95 = rand();
						uint64_t anon96 = ((__zext uint64_t)(anon95 > 4294967295 ? anon95 : anon95 + 255) << 32 >> 40) % (__sext int64_t)phi94;
						*anon28 = (uint32_t)anon96;
						uint32_t* anon97 = (uint32_t*)0x601e08;
						uint32_t* anon98 = (uint32_t*)(((__sext int64_t)*anon92 << 2) + arg4);
						*anon97 = *anon98;
						*anon98 = *(uint32_t*)((anon96 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = *anon97;
						anon99 = *anon92 - 1;
						*anon92 = anon99;
						phi94 = *anon92;
					}
					while (anon99 != 0);
					phi93 = *anon9;
				}
				uint64_t phi_in100 = phi93;
				uint32_t* anon101 = (uint32_t*)phi84;
				if (*anon101 == 0)
				{
					uint32_t phi_in102;
					anon103 = anon1 - 1;
					phi_in102 = anon103;
					anon106 = anon2 << 32 >> 30;
					anon105 = anon106 + arg4;
					phi_in104 = anon105;
					phi107 = phi83;
					anon108 = *anon28 - phi90;
					if (phi83 > anon108)
					{
						uint64_t anon110;
						do
						{
							*anon28 = phi_in102;
							uint64_t phi109 = phi_in104;
							phi_in102 = *anon28 - 1;
							anon110 = phi109 - 4;
							phi_in104 = anon110;
						}
						while (*(uint32_t*)anon110 == 0);
						*anon101 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi107 = phi83 - 1;
					}
				}
				else 
				{
					uint64_t phi_in111;
					*anon28 = anon103;
					anon112 = anon106 - 4 + arg4;
					phi_in111 = anon112;
					if (phi83 == 0)
					{
						uint32_t* anon114;
						do
						{
							uint64_t phi113 = phi_in111;
							anon114 = (uint32_t*)phi113;
							if (*anon114 != 0)
							{
								*anon28 = *anon28 - 1;
								phi_in111 = phi113 - 4;
							}
						}
						while (*anon114 != 0);
						*anon114 = 1;
						*anon101 = 0;
						phi107 = phi83;
					}
					else 
					{
						phi107 = phi83 - 1;
					}
				}
				anon116 = phi85 & 0xffffffff00000000 | phi85 & 0xffffffff;
				uint32_t* anon115 = (uint32_t*)anon116;
				if (*anon115 == 0)
				{
					uint64_t phi117;
					bool anon123;
					uint64_t anon118 = (__zext uint64_t)anon108;
					phi117 = anon118;
					uint32_t phi_in119 = anon103;
					uint64_t phi_in120 = anon105;
					if (phi80 <= anon108)
					{
						phi_in121 = phi107;
						phi122 = phi80;
						anon123 = anon1 != 3 | phi80 == 0;
						if (!anon123)
						{
							phi117 = anon118;
							phi_in119 = anon103;
							phi_in120 = anon105;
							phi_in121 = phi107;
							phi122 = phi80;
						}
					}
					anon124 = phi90 + anon103 - *anon28;
					if (!anon123 && phi80 <= anon108 && phi107 == 2 | anon108 == anon124 || phi80 > anon108)
					{
						bool anon126;
						do
						{
							*anon28 = phi_in119;
							uint64_t phi125 = phi_in120;
							uint64_t anon127 = phi125 - 4;
							anon126 = *anon28 == anon124 | *(uint32_t*)anon127 == 0;
							if (anon126)
							{
								phi117 = phi117 & 0xffffffffffffff00 | (__zext uint64_t)(*anon28 == anon124);
								phi_in119 = *anon28 - 1;
								phi_in120 = anon127;
							}
						}
						while (anon126);
						*anon115 = 1;
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = 0;
						phi_in121 = phi107 - (__zext uint32_t)(anon108 == anon124);
						phi122 = phi80 - 1;
					}
				}
				else 
				{
					uint32_t phi_in128 = anon103;
					uint64_t phi_in129 = anon112;
					if (phi80 == 0)
					{
						uint32_t* anon131;
						do
						{
							*anon28 = phi_in128;
							uint64_t phi130 = phi_in129;
							phi_in128 = *anon28 - 1;
							phi_in129 = phi130 - 4;
							anon131 = (uint32_t*)phi130;
						}
						while (*anon131 != 0 | *anon28 == anon124);
						*anon131 = 1;
						*anon115 = 0;
						phi_in121 = phi107;
						phi122 = phi80;
					}
					else 
					{
						phi_in121 = phi107;
						phi122 = phi80 - 1;
					}
				}
				phi80 = phi122;
				uint64_t* anon132 = (uint64_t*)0x601df0;
				*anon132 = arg4;
				uint32_t phi133 = *anon28;
				uint64_t phi_in134 = arg4;
				do
				{
					phi135 = phi_in100;
					uint32_t phi_in136 = phi133;
					uint64_t phi137 = phi_in134;
					if (*(uint32_t*)phi137 != 0)
					{
						uint32_t* anon138 = (uint32_t*)phi135;
						uint32_t* anon139 = (uint32_t*)(phi135 + (phi23 << 32 >> 30));
						*anon138 = *anon139;
						*anon139 = *anon138;
						phi_in136 = *anon28;
					}
					phi140 = phi_in136;
					uint32_t anon141 = phi140 - 1;
					*anon28 = anon141;
					phi_in100 = phi135 + 4;
					phi133 = anon141;
					anon142 = phi137 + 4;
					phi_in134 = anon142;
				}
				while (phi140 != 0);
				*anon132 = anon142;
				anon143 = phi135 + 4;
				*anon9 = anon143;
				uint32_t phi144 = *anon28;
				uint32_t anon146 = *anon28 + 1;
				uint32_t anon147 = (uint32_t)(anon87 + 4 + arg4 >> 2) & 3;
				uint32_t anon145 = anon146 < 6 ? anon146 : anon146 < anon147 ? anon146 : anon147;
				if (anon145 != 0)
				{
					uint32_t phi151;
					int64_t anon150 = anon3 >> 32;
					int64_t anon149 = anon150 & 1;
					anon148 = (uint32_t)(anon149 + anon2 << 32 >> 33) + (uint32_t)anon149 - ((uint32_t)(anon2 + anon150) & 1);
					*(uint32_t*)anon86 = (__zext uint32_t)(*anon28 < anon148);
					uint32_t anon152 = *anon28 - 1;
					phi151 = anon152;
					if (anon145 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon152 << 32 >> 30) + arg4) = (__zext uint32_t)(anon152 < anon148);
						uint32_t anon153 = *anon28 - 2;
						phi151 = anon153;
						if (anon145 != 2)
						{
							struct { uint32_t field0; bool field1; } anon154 = llvm.ssub.with.overflow.i32(anon148, anon153);
							uint32_t anon155 = anon148 - anon153;
							*(uint32_t*)(((__zext uint64_t)anon153 << 32 >> 30) + arg4) = (__zext uint32_t)(anon155 != 0 & !(anon155 < 0 ^ anon154.field1));
							uint32_t anon156 = *anon28 - 3;
							phi151 = anon156;
							if (anon145 != 3)
							{
								struct { uint32_t field0; bool field1; } anon157 = llvm.ssub.with.overflow.i32(anon148, anon156);
								uint32_t anon158 = anon148 - anon156;
								*(uint32_t*)(((__zext uint64_t)anon156 << 32 >> 30) + arg4) = (__zext uint32_t)(anon158 != 0 & !(anon158 < 0 ^ anon157.field1));
								uint32_t anon159 = *anon28 - 4;
								phi151 = anon159;
								if (anon145 == 5)
								{
									struct { uint32_t field0; bool field1; } anon160 = llvm.ssub.with.overflow.i32(anon148, anon159);
									uint32_t anon161 = anon148 - anon159;
									*(uint32_t*)(((__zext uint64_t)anon159 << 32 >> 30) + arg4) = (__zext uint32_t)(anon161 != 0 & !(anon161 < 0 ^ anon160.field1));
									phi151 = *anon28 - 5;
								}
							}
						}
					}
					uint32_t phi_in162 = phi151;
					phi144 = phi_in162;
				}
				if (anon145 == 0 || anon146 != anon145 && anon145 != 0)
				{
					uint32_t anon168;
					uint32_t anon169;
					uint32_t anon163 = *anon28 - anon145;
					if (anon163 >= 3)
					{
						uint32_t anon166;
						uint32_t anon167;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in164 = 0;
						do
						{
							uint32_t phi165 = phi_in164;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon166 = phi165 + 1;
							anon168 = anon146 - anon145;
							anon167 = (uint32_t)(((__zext uint64_t)anon168 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon166 < anon167)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in164 = anon166;
							}
						}
						while (anon166 < anon167);
						anon169 = anon167 << 2;
						phi144 = phi144 - anon169;
					}
					if (anon163 < 3 || anon169 != anon168 && anon163 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi144 << 2) + arg4) = (__zext uint32_t)(phi144 < anon148);
						if (phi144 != 0)
						{
							uint32_t anon171 = phi144 - 1;
							struct { uint32_t field0; bool field1; } anon170 = llvm.ssub.with.overflow.i32(anon148, anon171);
							uint32_t anon172 = anon148 - anon171;
							*(uint32_t*)(((__zext uint64_t)anon171 << 32 >> 30) + arg4) = (__zext uint32_t)(anon172 != 0 & !(anon172 < 0 ^ anon170.field1));
							if (anon171 != 0)
							{
								uint32_t anon173 = phi144 - 2;
								*(uint32_t*)(((__sext int64_t)anon173 << 2) + arg4) = (__zext uint32_t)(anon173 < anon148);
							}
						}
					}
				}
				phi82 = *anon76;
			}
			uint64_t anon174 = phi82 + *(uint64_t*)(arg1 - 168);
			*anon76 = anon174;
			phi77 = anon148;
			phi79 = anon174;
			phi83 = phi_in121;
			phi84 = phi84 + 4;
			uint64_t phi85 = anon116 - 4;
			uint64_t anon175 = phi91 + 1;
			phi_in88 = anon175;
			phi_in89 = anon143;
			phi90 = (uint32_t)anon175;
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
		uint64_t phi19;
		while (true)
		{
			*(uint32_t*)phi12 = phi13;
			if (phi13 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon3 = anon18;
				phi19 = phi12;
				*(uint32_t*)phi12 = anon18;
				if (phi13 == 0)
				{
					break;
				}
			}
			if (phi13 != phi16 || phi13 != 0 && phi13 == phi16)
			{
				uint32_t anon20 = *anon3 - 1;
				*anon3 = anon20;
				uint64_t anon21 = phi12 + 4;
				phi19 = anon21;
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
		*anon2 = phi19;
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
