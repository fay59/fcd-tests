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
					*(uint32_t*)phi24 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi30 ^ (phi30 >> 31) + phi30 >> 1) << 2) + arg3);
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
		uint64_t anon53;
		uint32_t phi42 = anon38;
		uint64_t phi43 = arg2;
		do
		{
			uint64_t anon51;
			uint32_t phi_in44 = phi42;
			uint64_t phi_in45 = phi43;
			*anon25 = anon38;
			uint32_t phi46 = anon38;
			uint32_t phi47 = phi_in44;
			do
			{
				uint64_t phi48 = phi_in45;
				uint32_t* anon49 = (uint32_t*)phi48;
				*anon49 = *anon49 + (*(uint32_t*)(((__sext int64_t)(phi46 ^ (phi47 >> 31) + phi47 >> 1 ^ *anon16 & phi47) << 2) + arg3) << 2);
				uint32_t anon50 = *anon25 - 1;
				*anon25 = anon50;
				anon51 = phi48 + 4;
				phi_in45 = anon51;
				phi46 = anon50;
				phi47 = *anon8;
			}
			while (*anon25 != 0);
			uint32_t anon52 = *anon8 - 1;
			*anon8 = anon52;
			phi42 = anon52;
			anon53 = anon51 + (arg4 << 32 >> 30);
			phi43 = anon53;
		}
		while (*anon8 != 0);
		*anon7 = anon53;
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
	uint64_t phi_in103;
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
			uint32_t phi_in46;
			anon45 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon43 + arg4) = (__zext uint32_t)(phi10 < anon45);
			uint32_t anon47 = phi10 - 1;
			phi_in46 = anon47;
			if (phi40 != 1)
			{
				struct { uint32_t field0; bool field1; } anon48 = llvm.ssub.with.overflow.i32(anon45, anon47);
				uint32_t anon49 = anon45 - anon47;
				*(uint32_t*)(((__zext uint64_t)anon47 << 32 >> 30) + arg4) = (__zext uint32_t)(anon49 != 0 & !(anon49 < 0 ^ anon48.field1));
				uint32_t anon50 = phi10 - 2;
				phi_in46 = anon50;
				if (phi40 != 2)
				{
					struct { uint32_t field0; bool field1; } anon51 = llvm.ssub.with.overflow.i32(anon45, anon50);
					uint32_t anon52 = anon45 - anon50;
					*(uint32_t*)(((__zext uint64_t)anon50 << 32 >> 30) + arg4) = (__zext uint32_t)(anon52 != 0 & !(anon52 < 0 ^ anon51.field1));
					uint32_t anon53 = phi10 - 3;
					phi_in46 = anon53;
					if (phi40 != 3)
					{
						struct { uint32_t field0; bool field1; } anon54 = llvm.ssub.with.overflow.i32(anon45, anon53);
						uint32_t anon55 = anon45 - anon53;
						*(uint32_t*)(((__zext uint64_t)anon53 << 32 >> 30) + arg4) = (__zext uint32_t)(anon55 != 0 & !(anon55 < 0 ^ anon54.field1));
						uint32_t anon56 = phi10 - 4;
						phi_in46 = anon56;
						if (phi40 == 5)
						{
							struct { uint32_t field0; bool field1; } anon57 = llvm.ssub.with.overflow.i32(anon45, anon56);
							uint32_t anon58 = anon45 - anon56;
							*(uint32_t*)(((__zext uint64_t)anon56 << 32 >> 30) + arg4) = (__zext uint32_t)(anon58 != 0 & !(anon58 < 0 ^ anon57.field1));
							phi_in46 = phi10 - 5;
						}
					}
				}
			}
			phi22 = phi10;
			phi23 = anon36;
			phi44 = phi_in46;
		}
		if (phi40 == 0 || anon41 != phi40 && phi40 != 0)
		{
			uint32_t anon66;
			uint32_t anon67;
			uint32_t phi59 = phi44;
			uint32_t anon60 = phi10 - phi40;
			if (anon60 >= 3)
			{
				uint32_t anon65;
				uint32_t* anon61 = (uint32_t*)(arg1 - 240);
				*anon61 = phi59;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon61 = anon45;
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
				phi59 = phi59 - anon67;
			}
			if (anon66 != anon67 && anon60 >= 3 || anon60 < 3)
			{
				struct { uint32_t field0; bool field1; } anon68 = llvm.ssub.with.overflow.i32(anon45, phi59);
				uint32_t anon69 = anon45 - phi59;
				*(uint32_t*)(((__sext int64_t)phi59 << 2) + arg4) = (__zext uint32_t)(anon69 != 0 & !(anon69 < 0 ^ anon68.field1));
				phi22 = phi10;
				phi23 = anon36;
				if (phi59 != 0)
				{
					uint32_t anon71 = phi59 - 1;
					struct { uint32_t field0; bool field1; } anon70 = llvm.ssub.with.overflow.i32(anon45, anon71);
					uint32_t anon72 = anon45 - anon71;
					*(uint32_t*)(((__zext uint64_t)anon71 << 32 >> 30) + arg4) = (__zext uint32_t)(anon72 != 0 & !(anon72 < 0 ^ anon70.field1));
					phi22 = phi10;
					phi23 = anon36;
					if (anon71 != 0)
					{
						uint32_t anon74 = phi59 - 2;
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
	*anon29 = phi22;
	uint64_t* anon76 = (uint64_t*)0x601df8;
	*anon76 = arg3;
	uint64_t anon77 = (anon13 >> 30) + arg3;
	if (anon77 > arg3)
	{
		uint32_t phi_in78;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon79 = anon2 + 1;
		phi_in78 = (uint32_t)(anon79 + (anon79 >> 31 & 1) << 32 >> 33);
		uint64_t phi80 = arg3;
		while (true)
		{
			uint32_t phi82;
			uint64_t phi83;
			uint64_t phi_in87;
			uint64_t phi88;
			uint32_t phi89;
			uint64_t phi90;
			uint64_t anon116;
			uint32_t phi_in121;
			uint64_t anon144;
			uint32_t anon149;
			uint32_t phi81 = phi_in78;
			*anon9 = phi80;
			if (anon1 != 0)
			{
				uint32_t anon102;
				int64_t anon104;
				int64_t anon105;
				uint32_t phi106;
				uint32_t anon107;
				int64_t anon112;
				uint32_t anon124;
				uint64_t phi136;
				uint32_t phi141;
				uint64_t anon143;
				phi82 = phi81;
				phi83 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon29) << 2) - 4;
				int64_t anon86 = (__sext int64_t)*anon29 << 2;
				int64_t anon85 = (anon86 & 0xc) + arg4;
				phi84 = anon85;
				phi_in87 = 0;
				phi88 = phi80;
				phi89 = 0;
				phi90 = phi_in87;
				uint64_t phi91 = phi88;
				uint32_t* anon92 = (uint32_t*)0x601e00;
				*anon92 = *anon29;
				uint32_t phi93 = anon1;
				if (*anon29 != 0)
				{
					uint32_t anon98;
					do
					{
						uint32_t anon94 = rand();
						uint64_t anon95 = ((__zext uint64_t)(anon94 > 4294967295 ? anon94 : anon94 + 255) << 32 >> 40) % (__sext int64_t)phi93;
						*anon29 = (uint32_t)anon95;
						uint32_t* anon96 = (uint32_t*)0x601e08;
						uint32_t* anon97 = (uint32_t*)(((__sext int64_t)*anon92 << 2) + arg4);
						*anon96 = *anon97;
						*anon97 = *(uint32_t*)((anon95 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = *anon96;
						anon98 = *anon92 - 1;
						*anon92 = anon98;
						phi93 = *anon92;
					}
					while (anon98 != 0);
					phi91 = *anon9;
				}
				uint64_t phi_in99 = phi91;
				uint32_t* anon100 = (uint32_t*)phi83;
				if (*anon100 == 0)
				{
					uint32_t phi_in101;
					anon102 = anon1 - 1;
					phi_in101 = anon102;
					anon105 = anon2 << 32 >> 30;
					anon104 = anon105 + arg4;
					phi_in103 = anon104;
					phi106 = phi81;
					anon107 = *anon29 - phi89;
					if (phi81 > anon107)
					{
						uint64_t anon109;
						do
						{
							*anon29 = phi_in101;
							uint64_t phi108 = phi_in103;
							phi_in101 = *anon29 - 1;
							anon109 = phi108 - 4;
							phi_in103 = anon109;
						}
						while (*(uint32_t*)anon109 == 0);
						*anon100 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi106 = phi81 - 1;
					}
				}
				else 
				{
					uint64_t phi_in111;
					uint32_t phi110 = anon102;
					anon112 = anon105 - 4 + arg4;
					phi_in111 = anon112;
					if (phi81 == 0)
					{
						uint32_t* anon114;
						do
						{
							*anon29 = phi110;
							uint64_t phi113 = phi_in111;
							anon114 = (uint32_t*)phi113;
							if (*anon114 != 0)
							{
								phi110 = *anon29 - 1;
								phi_in111 = phi113 - 4;
							}
						}
						while (*anon114 != 0);
						*anon114 = 1;
						*anon100 = 0;
						phi106 = phi81;
					}
					else 
					{
						phi106 = phi81 - 1;
					}
				}
				anon116 = phi84 & 0xffffffff00000000 | phi84 & 0xffffffff;
				uint32_t* anon115 = (uint32_t*)anon116;
				if (*anon115 == 0)
				{
					uint64_t phi117;
					bool anon122;
					uint64_t anon118 = (__zext uint64_t)anon107;
					phi117 = anon118;
					uint32_t phi_in119 = anon102;
					uint64_t phi_in120 = anon104;
					if (phi82 <= anon107)
					{
						phi_in121 = phi106;
						phi_in78 = phi82;
						anon122 = anon1 != 3 | phi82 == 0;
						if (!anon122)
						{
							phi117 = anon118;
							phi_in119 = anon102;
							phi_in120 = anon104;
							phi_in121 = phi106;
							phi_in78 = phi82;
						}
					}
					anon124 = phi89 + anon102 - *anon29;
					bool anon123 = phi106 == 2 | anon107 == anon124;
					if (!anon122 && phi82 <= anon107 && anon123 || phi82 > anon107)
					{
						bool anon126;
						do
						{
							*anon29 = phi_in119;
							uint64_t phi125 = phi_in120;
							uint64_t anon127 = phi125 - 4;
							anon126 = *anon29 == anon124 | *(uint32_t*)anon127 == 0;
							if (anon126)
							{
								phi117 = phi117 & 0xffffffffffffff00 | (__zext uint64_t)(*anon29 == anon124);
								phi_in119 = *anon29 - 1;
								phi_in120 = anon127;
							}
						}
						while (anon126);
						*anon115 = 1;
						*(uint32_t*)(((__sext int64_t)*anon29 << 2) + arg4) = 0;
						phi_in121 = phi106 - (__zext uint32_t)(anon107 == anon124);
						phi_in78 = phi82 - 1;
					}
				}
				else 
				{
					uint32_t phi_in128 = anon102;
					uint64_t phi_in129 = anon112;
					if (phi82 == 0)
					{
						bool anon131;
						uint32_t* anon132;
						do
						{
							*anon29 = phi_in128;
							uint64_t phi130 = phi_in129;
							phi_in128 = *anon29 - 1;
							phi_in129 = phi130 - 4;
							anon132 = (uint32_t*)phi130;
							anon131 = *anon132 != 0 | *anon29 == anon124;
						}
						while (anon131);
						*anon132 = 1;
						*anon115 = 0;
						phi_in121 = phi106;
						phi_in78 = phi82;
					}
					else 
					{
						phi_in121 = phi106;
						phi_in78 = phi82 - 1;
					}
				}
				uint64_t* anon133 = (uint64_t*)0x601df0;
				*anon133 = arg4;
				uint32_t phi134 = *anon29;
				uint64_t phi_in135 = arg4;
				do
				{
					phi136 = phi_in99;
					uint32_t phi_in137 = phi134;
					uint64_t phi138 = phi_in135;
					if (*(uint32_t*)phi138 != 0)
					{
						uint32_t* anon139 = (uint32_t*)phi136;
						uint32_t* anon140 = (uint32_t*)(phi136 + (phi23 << 32 >> 30));
						*anon139 = *anon140;
						*anon140 = *anon139;
						phi_in137 = *anon29;
					}
					phi141 = phi_in137;
					uint32_t anon142 = phi141 - 1;
					*anon29 = anon142;
					phi_in99 = phi136 + 4;
					phi134 = anon142;
					anon143 = phi138 + 4;
					phi_in135 = anon143;
				}
				while (phi141 != 0);
				*anon133 = anon143;
				anon144 = phi136 + 4;
				*anon9 = anon144;
				uint32_t phi145 = *anon29;
				uint32_t anon147 = *anon29 + 1;
				uint32_t anon148 = (uint32_t)(anon86 + 4 + arg4 >> 2) & 3;
				uint32_t anon146 = anon147 < 6 ? anon147 : anon147 < anon148 ? anon147 : anon148;
				if (anon146 != 0)
				{
					int64_t anon151 = anon3 >> 32;
					int64_t anon150 = anon151 & 1;
					anon149 = (uint32_t)(anon150 + anon2 << 32 >> 33) + (uint32_t)anon150 - ((uint32_t)(anon2 + anon151) & 1);
					*(uint32_t*)anon85 = (__zext uint32_t)(*anon29 < anon149);
					uint32_t anon152 = *anon29 - 1;
					phi145 = anon152;
					if (anon146 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon152 << 32 >> 30) + arg4) = (__zext uint32_t)(anon152 < anon149);
						uint32_t anon153 = *anon29 - 2;
						phi145 = anon153;
						if (anon146 != 2)
						{
							struct { uint32_t field0; bool field1; } anon154 = llvm.ssub.with.overflow.i32(anon149, anon153);
							uint32_t anon155 = anon149 - anon153;
							*(uint32_t*)(((__zext uint64_t)anon153 << 32 >> 30) + arg4) = (__zext uint32_t)(anon155 != 0 & !(anon155 < 0 ^ anon154.field1));
							uint32_t anon156 = *anon29 - 3;
							phi145 = anon156;
							if (anon146 != 3)
							{
								struct { uint32_t field0; bool field1; } anon157 = llvm.ssub.with.overflow.i32(anon149, anon156);
								uint32_t anon158 = anon149 - anon156;
								*(uint32_t*)(((__zext uint64_t)anon156 << 32 >> 30) + arg4) = (__zext uint32_t)(anon158 != 0 & !(anon158 < 0 ^ anon157.field1));
								uint32_t anon159 = *anon29 - 4;
								phi145 = anon159;
								if (anon146 == 5)
								{
									struct { uint32_t field0; bool field1; } anon160 = llvm.ssub.with.overflow.i32(anon149, anon159);
									uint32_t anon161 = anon149 - anon159;
									*(uint32_t*)(((__zext uint64_t)anon159 << 32 >> 30) + arg4) = (__zext uint32_t)(anon161 != 0 & !(anon161 < 0 ^ anon160.field1));
									phi145 = *anon29 - 5;
								}
							}
						}
					}
				}
				if (anon146 == 0 || anon147 != anon146 && anon146 != 0)
				{
					uint32_t anon168;
					uint32_t anon169;
					uint32_t phi162 = phi145;
					uint32_t anon163 = *anon29 - anon146;
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
							anon168 = anon147 - anon146;
							anon167 = (uint32_t)(((__zext uint64_t)anon168 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon166 < anon167)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in164 = anon166;
							}
						}
						while (anon166 < anon167);
						anon169 = anon167 << 2;
						phi162 = phi162 - anon169;
					}
					if (anon163 < 3 || anon169 != anon168 && anon163 >= 3)
					{
						*(uint32_t*)(((__sext int64_t)phi162 << 2) + arg4) = (__zext uint32_t)(phi162 < anon149);
						if (phi162 != 0)
						{
							uint32_t anon171 = phi162 - 1;
							struct { uint32_t field0; bool field1; } anon170 = llvm.ssub.with.overflow.i32(anon149, anon171);
							uint32_t anon172 = anon149 - anon171;
							*(uint32_t*)(((__zext uint64_t)anon171 << 32 >> 30) + arg4) = (__zext uint32_t)(anon172 != 0 & !(anon172 < 0 ^ anon170.field1));
							if (anon171 != 0)
							{
								uint32_t anon173 = phi162 - 2;
								*(uint32_t*)(((__sext int64_t)anon173 << 2) + arg4) = (__zext uint32_t)(anon173 < anon149);
							}
						}
					}
				}
				phi80 = *anon76;
			}
			uint64_t anon174 = phi80 + *(uint64_t*)(arg1 - 168);
			*anon76 = anon174;
			phi_in78 = anon149;
			phi80 = anon174;
			phi81 = phi_in121;
			phi82 = phi_in78;
			phi83 = phi83 + 4;
			uint64_t phi84 = anon116 - 4;
			uint64_t anon175 = phi90 + 1;
			phi_in87 = anon175;
			phi88 = anon144;
			phi89 = (uint32_t)anon175;
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
		uint64_t anon55;
		uint32_t phi36 = phi_in32;
		*anon31 = phi_in33;
		uint64_t phi37 = phi_in34;
		uint64_t anon38 = anon30 >> 32;
		if ((uint32_t)(anon38 * anon38) <= phi35)
		{
			uint64_t phi39;
			uint32_t phi47;
			uint32_t anon48;
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
				uint32_t anon43 = *anon3 - 1;
				*anon3 = anon43;
			}
			*anon3 = 0;
			*anon25 = anon4;
			*anon31 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in44 = anon4;
			uint64_t phi_in45 = arg3;
			uint32_t phi_in46 = 0;
			do
			{
				*anon25 = phi_in44;
				*anon31 = phi_in45;
				phi47 = phi_in46;
				anon48 = (uint32_t)anon38;
				if (anon48 * anon48 > phi47)
				{
					uint32_t* anon49 = (uint32_t*)(*anon31 + ((__sext int64_t)phi47 << 2));
					uint32_t anon50 = *anon49 + *anon6 * *(uint32_t*)(((__sext int64_t)*anon25 << 2) + arg4);
					*anon49 = anon50;
					uint32_t anon51 = *anon25 + 1;
					*anon25 = anon51;
					uint32_t anon52 = anon50 + 1;
					*anon3 = anon52;
					uint64_t phi53 = *anon31;
					uint32_t phi54 = anon51;
					if ((uint32_t)((__sext int64_t)anon52 % anon38) == 0)
					{
						anon55 = arg5 << 32 >> 30;
						phi53 = *anon31 + anon55;
						phi54 = *anon25;
					}
					phi_in44 = phi54;
					phi_in45 = phi53;
					phi_in46 = anon52;
					if (phi54 >= anon9)
					{
						uint32_t anon56 = phi54 - anon9;
						*anon25 = anon56;
						phi_in44 = anon56;
						phi_in45 = phi53;
						phi_in46 = anon52;
					}
				}
			}
			while (anon48 * anon48 > phi47);
			phi39 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon57 = *anon6 * *(uint32_t*)(((__sext int64_t)phi36 << 2) + arg4);
		*(uint32_t*)(*anon31 + ((__sext int64_t)phi35 << 2)) = anon57;
		uint32_t anon58 = anon57 + 1;
		*anon3 = anon58;
		uint32_t anon59 = phi36 + ((uint32_t)((__sext int64_t)anon58 % (phi37 << 32 >> 32)) == 0 ? 2 : 1);
		*anon25 = anon59;
		phi_in32 = anon59;
		uint64_t anon60 = *anon31 + ((uint32_t)((__sext int64_t)anon58 % (phi37 << 32 >> 32)) == 0 ? anon55 : 0);
		phi_in33 = anon60;
		uint64_t anon61 = arg2 & 0xffffffff;
		phi_in34 = anon61;
		phi35 = anon58;
		if (anon59 >= anon9)
		{
			uint32_t anon62 = anon59 - anon9;
			*anon25 = anon62;
			phi_in32 = anon62;
			phi_in33 = anon60;
			phi_in34 = anon61;
			phi35 = anon58;
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
