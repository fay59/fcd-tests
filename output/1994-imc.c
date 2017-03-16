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
					*(uint32_t*)phi30 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi23 ^ (phi23 >> 31) + phi23 >> 1) << 2) + arg3);
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
	uint32_t anon35 = rand();
	uint32_t anon36 = (uint32_t)(((__zext uint64_t)(anon35 > 4294967295 ? anon35 : anon35 + 255) << 32 >> 40) % anon4);
	*anon2 = anon36;
	*anon5 = 3 - anon36;
	uint32_t anon37 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint32_t anon38 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon38;
	uint64_t anon40 = (__zext uint64_t)(anon37 > 4294967295 ? anon37 : anon37 + 255);
	uint64_t anon41 = anon40 >> 31;
	uint32_t anon39 = *(uint32_t*)(((__zext uint64_t)((anon40 & 0x100) != 0 ^ anon41 != 0) - anon41 << 2) + arg3) ^ 1;
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
			*anon25 = anon38;
			uint32_t phi44 = anon38;
			uint32_t phi45 = phi_in42;
			do
			{
				uint64_t phi46 = phi_in43;
				uint32_t* anon47 = (uint32_t*)phi46;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi45 >> 31) + phi45 >> 1 ^ *anon16 & phi45) << 2) + arg3) << 2);
				uint32_t anon48 = *anon25 - 1;
				*anon25 = anon48;
				anon49 = phi46 + 4;
				phi_in43 = anon49;
				phi44 = anon48;
				phi45 = *anon8;
			}
			while (*anon25 != 0);
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
	uint32_t phi14;
	uint32_t phi15;
	uint32_t phi22;
	uint64_t phi23;
	uint32_t* anon28;
	uint64_t phi_in101;
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
	if (anon1 == 4 || anon1 != 4 && anon1 != 0)
	{
		uint32_t phi27;
		uint64_t anon37;
		uint64_t anon40;
		uint32_t anon46;
		uint32_t phi_in25 = phi14;
		uint64_t phi_in26 = arg3;
		do
		{
			phi27 = phi_in25;
			anon28 = (uint32_t*)0x601dec;
			uint32_t anon30 = (uint32_t)anon12;
			uint32_t anon29 = anon30 - 1;
			*anon28 = anon29;
			uint64_t phi31 = phi_in26;
			uint64_t phi32 = phi_in26;
			uint32_t phi33 = anon29;
			if (anon30 != 0)
			{
				do
				{
					uint64_t phi34 = 3;
					if (anon1 > phi33)
					{
						uint32_t* anon35 = (uint32_t*)phi32;
						uint32_t anon36 = *anon35 + (phi15 * phi15 << 1);
						*anon35 = anon36;
						phi34 = ((__zext uint64_t)(anon1 <= anon36) << 2) + 4294967295 & 0xffffffff;
					}
					anon37 = phi11 & 0xffffffff;
					*(uint32_t*)(phi32 + (anon37 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi34) + *(uint32_t*)phi32;
					uint32_t anon38 = *anon28 - 1;
					*anon28 = anon38;
					uint64_t anon39 = phi32 + 4;
					phi31 = anon39;
					phi32 = anon39;
					phi33 = anon38;
				}
				while (*anon28 != 0);
			}
			phi_in25 = phi27 - 1;
			anon40 = phi31 + (anon8 >> 30);
			phi_in26 = anon40;
		}
		while (phi27 != 256);
		*anon9 = anon40;
		uint32_t phi41 = phi10;
		uint32_t anon43 = phi10 + 1;
		int64_t anon45 = (__sext int64_t)phi10 << 2;
		uint32_t anon44 = (uint32_t)(anon45 + 4 + arg4 >> 2) & 3;
		uint32_t anon42 = phi10 == 4 | anon43 < 5 | anon43 < anon44 ? anon43 : anon44;
		if (anon42 != 0)
		{
			uint32_t phi47;
			anon46 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon45 + arg4) = (__zext uint32_t)(phi10 < anon46);
			uint32_t anon48 = phi10 - 1;
			phi47 = anon48;
			if (anon42 != 1)
			{
				struct { uint32_t field0; bool field1; } anon49 = llvm.ssub.with.overflow.i32(anon46, anon48);
				uint32_t anon50 = anon46 - anon48;
				*(uint32_t*)(((__zext uint64_t)anon48 << 32 >> 30) + arg4) = (__zext uint32_t)(anon50 != 0 & !(anon50 < 0 ^ anon49.field1));
				uint32_t anon51 = phi10 - 2;
				phi47 = anon51;
				if (anon42 != 2)
				{
					struct { uint32_t field0; bool field1; } anon52 = llvm.ssub.with.overflow.i32(anon46, anon51);
					uint32_t anon53 = anon46 - anon51;
					*(uint32_t*)(((__zext uint64_t)anon51 << 32 >> 30) + arg4) = (__zext uint32_t)(anon53 != 0 & !(anon53 < 0 ^ anon52.field1));
					uint32_t anon54 = phi10 - 3;
					phi47 = anon54;
					if (anon42 != 3)
					{
						struct { uint32_t field0; bool field1; } anon55 = llvm.ssub.with.overflow.i32(anon46, anon54);
						uint32_t anon56 = anon46 - anon54;
						*(uint32_t*)(((__zext uint64_t)anon54 << 32 >> 30) + arg4) = (__zext uint32_t)(anon56 != 0 & !(anon56 < 0 ^ anon55.field1));
						uint32_t anon57 = phi10 - 4;
						phi47 = anon57;
						if (anon42 == 5)
						{
							struct { uint32_t field0; bool field1; } anon58 = llvm.ssub.with.overflow.i32(anon46, anon57);
							uint32_t anon59 = anon46 - anon57;
							*(uint32_t*)(((__zext uint64_t)anon57 << 32 >> 30) + arg4) = (__zext uint32_t)(anon59 != 0 & !(anon59 < 0 ^ anon58.field1));
							phi47 = phi10 - 5;
						}
					}
				}
			}
			phi41 = phi47;
			phi22 = phi10;
			phi23 = anon37;
		}
		if (anon43 != anon42 && anon42 != 0 || anon42 == 0)
		{
			uint32_t anon67;
			uint32_t anon68;
			uint32_t* anon60 = (uint32_t*)(arg1 - 240);
			*anon60 = phi41;
			uint32_t phi61 = *anon60;
			uint32_t anon62 = phi10 - anon42;
			if (anon62 >= 3)
			{
				uint32_t anon66;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon60 = anon46;
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
					anon67 = anon43 - anon42;
					anon66 = (uint32_t)(((__zext uint64_t)anon67 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon65 < anon66);
				phi22 = phi10;
				phi23 = anon37;
				anon68 = anon66 << 2;
				phi61 = *anon60 - anon68;
			}
			if (anon67 != anon68 && anon62 >= 3 || anon62 < 3)
			{
				struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon46, phi61);
				uint32_t anon70 = anon46 - phi61;
				*(uint32_t*)(((__sext int64_t)phi61 << 2) + arg4) = (__zext uint32_t)(anon70 != 0 & !(anon70 < 0 ^ anon69.field1));
				phi22 = phi10;
				phi23 = anon37;
				if (phi61 != 0)
				{
					uint32_t anon72 = phi61 - 1;
					struct { uint32_t field0; bool field1; } anon71 = llvm.ssub.with.overflow.i32(anon46, anon72);
					uint32_t anon73 = anon46 - anon72;
					*(uint32_t*)(((__zext uint64_t)anon72 << 32 >> 30) + arg4) = (__zext uint32_t)(anon73 != 0 & !(anon73 < 0 ^ anon71.field1));
					phi22 = phi10;
					phi23 = anon37;
					if (anon72 != 0)
					{
						uint32_t anon75 = phi61 - 2;
						struct { uint32_t field0; bool field1; } anon74 = llvm.ssub.with.overflow.i32(anon46, anon75);
						uint32_t anon76 = anon46 - anon75;
						*(uint32_t*)(((__sext int64_t)anon75 << 2) + arg4) = (__zext uint32_t)(anon76 != 0 & !(anon76 < 0 ^ anon74.field1));
						phi22 = phi10;
						phi23 = anon37;
					}
				}
			}
		}
	}
	*anon28 = phi22;
	uint64_t* anon77 = (uint64_t*)0x601df8;
	*anon77 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi78;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon79 = anon2 + 1;
		phi78 = (uint32_t)(anon79 + (anon79 >> 31 & 1) << 32 >> 33);
		uint64_t phi80 = arg3;
		while (true)
		{
			uint64_t phi84;
			uint64_t phi_in88;
			uint32_t phi89;
			uint64_t phi90;
			uint64_t anon114;
			uint32_t phi_in119;
			uint64_t anon141;
			uint32_t anon146;
			uint32_t phi162;
			uint32_t phi81 = phi78;
			uint64_t phi_in82 = phi80;
			*anon9 = phi_in82;
			uint64_t phi83 = phi_in82;
			if (anon1 != 0)
			{
				uint32_t anon100;
				int64_t anon102;
				int64_t anon103;
				uint32_t phi104;
				uint32_t anon105;
				int64_t anon110;
				uint32_t phi120;
				uint32_t anon122;
				uint64_t phi133;
				uint32_t phi138;
				uint64_t anon140;
				phi78 = phi81;
				phi84 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - *anon28) << 2) - 4;
				int64_t anon87 = (__sext int64_t)*anon28 << 2;
				int64_t anon86 = (anon87 & 0xc) + arg4;
				phi85 = anon86;
				phi_in88 = 0;
				phi89 = 0;
				phi90 = phi_in88;
				uint32_t* anon91 = (uint32_t*)0x601e00;
				*anon91 = *anon28;
				uint64_t phi_in92 = phi_in82;
				uint32_t phi93 = anon1;
				if (*anon28 != 0)
				{
					uint32_t anon98;
					do
					{
						uint32_t anon94 = rand();
						uint64_t anon95 = ((__zext uint64_t)(anon94 > 4294967295 ? anon94 : anon94 + 255) << 32 >> 40) % (__sext int64_t)phi93;
						*anon28 = (uint32_t)anon95;
						uint32_t* anon96 = (uint32_t*)0x601e08;
						uint32_t* anon97 = (uint32_t*)(((__sext int64_t)*anon91 << 2) + arg4);
						*anon96 = *anon97;
						*anon97 = *(uint32_t*)((anon95 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon28 << 2) + arg4) = *anon96;
						anon98 = *anon91 - 1;
						*anon91 = anon98;
						phi93 = *anon91;
					}
					while (anon98 != 0);
					phi_in92 = *anon9;
				}
				uint32_t* anon99 = (uint32_t*)phi84;
				if (*anon99 == 0)
				{
					anon100 = anon1 - 1;
					*anon28 = anon100;
					anon103 = anon2 << 32 >> 30;
					anon102 = anon103 + arg4;
					phi_in101 = anon102;
					phi104 = phi81;
					anon105 = *anon28 - phi89;
					if (phi81 > anon105)
					{
						uint64_t anon107;
						do
						{
							uint64_t phi106 = phi_in101;
							*anon28 = *anon28 - 1;
							anon107 = phi106 - 4;
							phi_in101 = anon107;
						}
						while (*(uint32_t*)anon107 == 0);
						*anon99 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi104 = phi81 - 1;
					}
				}
				else 
				{
					uint64_t phi_in109;
					uint32_t phi108 = anon100;
					anon110 = anon103 - 4 + arg4;
					phi_in109 = anon110;
					if (phi81 == 0)
					{
						uint32_t* anon112;
						do
						{
							*anon28 = phi108;
							uint64_t phi111 = phi_in109;
							phi108 = *anon28 - 1;
							phi_in109 = phi111 - 4;
							anon112 = (uint32_t*)phi111;
						}
						while (*anon112 != 0);
						*anon112 = 1;
						*anon99 = 0;
						phi104 = phi81;
					}
					else 
					{
						phi104 = phi81 - 1;
					}
				}
				anon114 = phi85 & 0xffffffff00000000 | phi85 & 0xffffffff;
				uint32_t* anon113 = (uint32_t*)anon114;
				if (*anon113 == 0)
				{
					uint64_t phi115;
					bool anon121;
					uint64_t anon116 = (__zext uint64_t)anon105;
					phi115 = anon116;
					uint32_t phi_in117 = anon100;
					uint64_t phi_in118 = anon102;
					if (phi78 <= anon105)
					{
						phi_in119 = phi104;
						phi120 = phi78;
						anon121 = anon1 != 3 | phi78 == 0;
						if (!anon121)
						{
							phi115 = anon116;
							phi_in117 = anon100;
							phi_in118 = anon102;
							phi_in119 = phi104;
							phi120 = phi78;
						}
					}
					anon122 = phi89 + anon100 - *anon28;
					if (!anon121 && phi78 <= anon105 && phi104 == 2 | anon105 == anon122 || phi78 > anon105)
					{
						bool anon124;
						do
						{
							*anon28 = phi_in117;
							uint64_t phi123 = phi_in118;
							uint64_t anon125 = phi123 - 4;
							anon124 = *anon28 == anon122 | *(uint32_t*)anon125 == 0;
							if (anon124)
							{
								phi115 = phi115 & 0xffffffffffffff00 | (__zext uint64_t)(*anon28 == anon122);
								phi_in117 = *anon28 - 1;
								phi_in118 = anon125;
							}
						}
						while (anon124);
						*anon113 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi_in119 = phi104 - (__zext uint32_t)(anon105 == anon122);
						phi120 = phi78 - 1;
					}
				}
				else 
				{
					uint32_t phi_in126 = anon100;
					uint64_t phi_in127 = anon110;
					if (phi78 == 0)
					{
						uint32_t* anon129;
						do
						{
							*anon28 = phi_in126;
							uint64_t phi128 = phi_in127;
							phi_in126 = *anon28 - 1;
							phi_in127 = phi128 - 4;
							anon129 = (uint32_t*)phi128;
						}
						while (*anon129 != 0 | *anon28 == anon122);
						*anon129 = 1;
						*anon113 = 0;
						phi_in119 = phi104;
						phi120 = phi78;
					}
					else 
					{
						phi_in119 = phi104;
						phi120 = phi78 - 1;
					}
				}
				phi78 = phi120;
				uint64_t* anon130 = (uint64_t*)0x601df0;
				*anon130 = arg4;
				uint32_t phi131 = *anon28;
				uint64_t phi_in132 = arg4;
				do
				{
					phi133 = phi_in92;
					uint32_t phi_in134 = phi131;
					uint64_t phi135 = phi_in132;
					if (*(uint32_t*)phi135 != 0)
					{
						uint32_t* anon136 = (uint32_t*)phi133;
						uint32_t* anon137 = (uint32_t*)(phi133 + (phi23 << 32 >> 30));
						*anon136 = *anon137;
						*anon137 = *anon136;
						phi_in134 = *anon136;
					}
					phi138 = phi_in134;
					uint32_t anon139 = phi138 - 1;
					*anon28 = anon139;
					phi_in92 = phi133 + 4;
					phi131 = anon139;
					anon140 = phi135 + 4;
					phi_in132 = anon140;
				}
				while (phi138 != 0);
				*anon130 = anon140;
				anon141 = phi133 + 4;
				*anon9 = anon141;
				uint32_t phi142 = *anon28;
				uint32_t anon144 = *anon28 + 1;
				uint32_t anon145 = (uint32_t)(anon87 + 4 + arg4 >> 2) & 3;
				uint32_t anon143 = anon144 < 6 ? anon144 : anon144 < anon145 ? anon144 : anon145;
				if (anon143 != 0)
				{
					uint32_t phi_in149;
					int64_t anon148 = anon3 >> 32;
					int64_t anon147 = anon148 & 1;
					anon146 = (uint32_t)(anon147 + anon2 << 32 >> 33) + (uint32_t)anon147 - ((uint32_t)(anon2 + anon148) & 1);
					*(uint32_t*)anon86 = (__zext uint32_t)(*anon28 < anon146);
					uint32_t anon150 = *anon28 - 1;
					phi_in149 = anon150;
					if (anon143 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon150 << 32 >> 30) + arg4) = (__zext uint32_t)(anon150 < anon146);
						uint32_t anon151 = *anon28 - 2;
						phi_in149 = anon151;
						if (anon143 != 2)
						{
							struct { uint32_t field0; bool field1; } anon152 = llvm.ssub.with.overflow.i32(anon146, anon151);
							uint32_t anon153 = anon146 - anon151;
							*(uint32_t*)(((__zext uint64_t)anon151 << 32 >> 30) + arg4) = (__zext uint32_t)(anon153 != 0 & !(anon153 < 0 ^ anon152.field1));
							uint32_t anon154 = *anon28 - 3;
							phi_in149 = anon154;
							if (anon143 != 3)
							{
								struct { uint32_t field0; bool field1; } anon155 = llvm.ssub.with.overflow.i32(anon146, anon154);
								uint32_t anon156 = anon146 - anon154;
								*(uint32_t*)(((__zext uint64_t)anon154 << 32 >> 30) + arg4) = (__zext uint32_t)(anon156 != 0 & !(anon156 < 0 ^ anon155.field1));
								uint32_t anon157 = *anon28 - 4;
								phi_in149 = anon157;
								if (anon143 == 5)
								{
									struct { uint32_t field0; bool field1; } anon158 = llvm.ssub.with.overflow.i32(anon146, anon157);
									uint32_t anon159 = anon146 - anon157;
									*(uint32_t*)(((__zext uint64_t)anon157 << 32 >> 30) + arg4) = (__zext uint32_t)(anon159 != 0 & !(anon159 < 0 ^ anon158.field1));
									phi_in149 = *anon28 - 5;
								}
							}
						}
					}
					phi142 = phi_in149;
				}
				if (anon144 != anon143 && anon143 != 0 || anon143 == 0)
				{
					uint32_t anon163;
					uint32_t anon164;
					uint32_t phi160 = phi142;
					uint32_t anon161 = *anon28 - anon143;
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
						anon164 = anon144 - anon143;
						anon163 = (uint32_t)(((__zext uint64_t)anon164 + 4294967292 >> 2 & 0x3fffffff) + 1) << 2;
						phi160 = phi160 - anon163;
					}
					if (anon163 != anon164 && anon161 >= 3 || anon161 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi160 << 2) + arg4) = (__zext uint32_t)(phi160 < anon146);
						if (phi160 != 0)
						{
							uint32_t anon166 = phi160 - 1;
							struct { uint32_t field0; bool field1; } anon165 = llvm.ssub.with.overflow.i32(anon146, anon166);
							uint32_t anon167 = anon146 - anon166;
							*(uint32_t*)(((__zext uint64_t)anon166 << 32 >> 30) + arg4) = (__zext uint32_t)(anon167 != 0 & !(anon167 < 0 ^ anon165.field1));
							if (anon166 != 0)
							{
								uint32_t anon168 = phi160 - 2;
								*(uint32_t*)(((__sext int64_t)anon168 << 2) + arg4) = (__zext uint32_t)(anon168 < anon146);
							}
						}
					}
				}
				phi83 = *anon77;
			}
			uint64_t anon169 = phi83 + *(uint64_t*)(arg1 - 168);
			*anon77 = anon169;
			phi78 = anon146;
			phi80 = anon169;
			(__asm "movdqa xmm0, xmm3")();
			phi162 = phi162 + 1;
			phi81 = phi_in119;
			phi84 = phi84 + 4;
			uint64_t phi85 = anon114 - 4;
			uint64_t anon170 = phi90 + 1;
			phi_in88 = anon170;
			phi_in82 = anon141;
			phi89 = (uint32_t)anon170;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct x86_regsalloca1;
	struct { uint64_t field0; uint8_t field1[64]; uint64_t field2; } alloca2;
	uint64_t phi20;
	uint32_t phi21;
	uint32_t phi22;
	uint32_t phi23;
	uint64_t anon28;
	uint32_t anon29;
	uint32_t anon30;
	uint32_t anon31;
	uint32_t* anon37;
	uint32_t* anon39;
	uint32_t phi42;
	uint64_t phi43;
	uint64_t** phi45;
	uint64_t* phi46;
	uint64_t phi47;
	uint32_t phi86;
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
	uint32_t* anon14 = (uint32_t*)0x601e04;
	*anon14 = 1;
	if ((__zext uint32_t)((anon12 & 1) != 0 ^ anon13 != 0) != anon13)
	{
		alloca1.field1.field0 = anon5;
		*anon14 = *anon6;
	}
	uint32_t anon15 = (*anon6 >> 31) + *anon6 >> 1;
	alloca1.field5.field0 = (__zext uint64_t)anon15;
	uint32_t* anon16 = (uint32_t*)0x601de8;
	*anon16 = anon15;
	alloca1.field9.field0 = 4199568;
	if (*anon6 == 0)
	{
		*anon8 = 4294967294;
		*(uint32_t*)(alloca1.field8.field0 + 12) = 4294967294;
		alloca1.field9.field0 = 4200273;
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
	}
	else 
	{
		uint64_t phi27;
		alloca1.field6.field0 = alloca1.field17.field0;
		uint64_t anon17 = alloca1.field17.field0 + 4;
		alloca1.field3.field0 = anon17;
		uint64_t anon18 = (__zext uint64_t)*anon9;
		alloca1.field1.field0 = anon18;
		alloca1.field4.field0 = anon5;
		alloca1.field9.field0 = 4199582;
		uint64_t phi19 = alloca1.field17.field0;
		phi20 = anon17;
		phi21 = *anon9;
		phi22 = *anon6;
		phi23 = anon15;
		uint64_t phi_in24 = phi19;
		phi19 = phi20;
		alloca1.field9.field0 = 4199623;
		*(uint32_t*)(phi19 - 4) = phi21;
		if (phi21 == phi23)
		{
			uint32_t anon26 = phi22 - 2;
			uint64_t anon25 = (__zext uint64_t)anon26;
			alloca1.field4.field0 = anon25;
			*anon8 = anon26;
			alloca1.field9.field0 = 4199636;
			phi27 = phi_in24;
			if (phi21 != 0)
			{
				alloca1.field1.field0 = anon25;
				alloca1.field9.field0 = 4199640;
				*(uint32_t*)(phi19 - 4) = anon26;
			}
		}
		if (phi21 != phi23 || phi21 == phi23 && phi21 != 0)
		{
			alloca1.field4.field0 = (__zext uint64_t)*anon8;
			alloca1.field6.field0 = phi19;
			anon28 = phi19 + 4;
			alloca1.field3.field0 = anon28;
			anon29 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon29;
			*anon8 = anon29;
			alloca1.field9.field0 = 4199613;
			phi27 = phi19;
		}
		*anon7 = phi27;
		anon31 = (uint32_t)alloca1.field2.field0;
		anon30 = anon31 - 2;
		alloca1.field1.field0 = (__zext uint64_t)anon30;
		*(uint32_t*)(alloca1.field8.field0 + 12) = anon30;
		*anon8 = anon30;
		alloca1.field9.field0 = 4199672;
		alloca1.field7.field0 = anon18;
	}
	if (*anon6 == 0 || *anon6 != 0 && anon30 != 0)
	{
		uint32_t anon41;
		alloca1.field9.field0 = 4199680;
		do
		{
			alloca1.field9.field0 = 4199685;
			uint32_t anon32 = rand();
			uint64_t anon33 = (__zext uint64_t)anon32;
			alloca1.field1.field0 = anon33;
			alloca1.field4.field0 = anon33 + 255 & 0xffffffff;
			alloca1.field9.field0 = 4199696;
			uint32_t phi34 = anon32;
			if (anon32 <= 4294967295)
			{
				uint32_t anon35 = anon32 + 255;
				alloca1.field1.field0 = (__zext uint64_t)anon35;
				phi34 = anon35;
			}
			uint64_t anon36 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
			alloca1.field3.field0 = anon36;
			anon37 = (uint32_t*)0x601dec;
			uint64_t anon38 = ((__zext uint64_t)phi34 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
			*anon37 = (uint32_t)anon38;
			anon39 = (uint32_t*)0x601e08;
			uint32_t* anon40 = (uint32_t*)anon36;
			*anon39 = *anon40;
			*anon40 = *(uint32_t*)(alloca1.field17.field0 + (anon38 << 32 >> 30));
			alloca1.field4.field0 = (__zext uint64_t)*anon39;
			*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon37 << 2)) = *anon39;
			alloca1.field7.field0 = (__zext uint64_t)*anon8;
			anon41 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon41;
			*anon8 = anon41;
			alloca1.field9.field0 = 4199772;
		}
		while (anon41 != 0);
		phi42 = *anon6;
		uint64_t** anon44 = (uint64_t**)&alloca1.field8.field0;
		phi43 = (uint64_t)*anon44;
		phi45 = anon44;
		phi46 = *anon44;
		phi47 = alloca1.field17.field0;
	}
	if (*anon6 != 0 && anon30 == 0)
	{
		phi42 = anon31;
		phi43 = alloca1.field8.field0;
		phi45 = (uint64_t**)&alloca1.field8.field0;
		phi46 = (uint64_t*)alloca1.field8.field0;
		phi47 = alloca1.field17.field0;
	}
	alloca1.field4.field0 = (__zext uint64_t)*anon16;
	int64_t anon48 = (__sext int64_t)phi42;
	alloca1.field1.field0 = anon48;
	alloca1.field16.field0 = (__zext uint64_t)(phi42 * phi42);
	uint64_t anon49 = alloca1.field14.field0 << 2;
	alloca1.field14.field0 = anon49;
	alloca1.field10.field0 = 0;
	*(uint32_t*)(phi47 + (anon48 << 2) - 4) = *anon16;
	alloca1.field9.field0 = 4199804;
	alloca1.field1.field0 = *phi46;
	*anon37 = 0;
	*anon8 = 0;
	uint64_t* anon50 = (uint64_t*)0x601e10;
	*anon50 = *phi46;
	alloca1.field9.field0 = 4199834;
	alloca1.field6.field0 = *phi46;
	uint64_t phi51 = *phi46;
	uint32_t phi52 = 0;
	uint64_t phi53 = 4199836;
	do
	{
		uint32_t phi71;
		uint64_t phi54 = phi51;
		uint32_t phi_in55 = phi52;
		alloca1.field9.field0 = phi53;
		uint32_t phi56 = phi_in55;
		*anon50 = phi54;
		alloca1.field9.field0 = 4199935;
		alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(phi43 + 12);
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
		*anon8 = *(uint32_t*)(phi43 + 12);
		alloca1.field9.field0 = 4199959;
		uint32_t phi57 = *anon9;
		uint64_t* phi58 = (uint64_t*)phi43;
		if (*(uint32_t*)(phi43 + 12) != 0)
		{
			uint32_t anon66;
			alloca1.field9.field0 = 4199968;
			do
			{
				alloca1.field9.field0 = 4199973;
				uint32_t anon59 = rand();
				uint64_t anon60 = (__zext uint64_t)anon59;
				alloca1.field1.field0 = anon60;
				alloca1.field4.field0 = anon60 + 255 & 0xffffffff;
				alloca1.field9.field0 = 4199984;
				uint32_t phi61 = anon59;
				if (anon59 <= 4294967295)
				{
					uint32_t anon62 = anon59 + 255;
					alloca1.field1.field0 = (__zext uint64_t)anon62;
					phi61 = anon62;
				}
				uint64_t anon63 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
				alloca1.field3.field0 = anon63;
				uint64_t anon64 = ((__zext uint64_t)phi61 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
				*anon37 = (uint32_t)anon64;
				uint32_t* anon65 = (uint32_t*)anon63;
				*anon39 = *anon65;
				*anon65 = *(uint32_t*)(alloca1.field17.field0 + (anon64 << 32 >> 30));
				alloca1.field4.field0 = (__zext uint64_t)*anon39;
				*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon37 << 2)) = *anon39;
				alloca1.field7.field0 = (__zext uint64_t)*anon8;
				anon66 = *anon8 - 1;
				alloca1.field1.field0 = (__zext uint64_t)anon66;
				*anon8 = anon66;
				alloca1.field9.field0 = 4200060;
			}
			while (anon66 != 0);
			phi57 = *anon9;
			phi58 = *phi45;
		}
		*anon37 = phi57;
		alloca1.field1.field0 = (__zext uint64_t)((uint32_t)alloca1.field2.field0 + 1 - *anon14);
		alloca1.field9.field0 = 4200073;
		alloca1.field7.field0 = *phi58;
		*anon8 = 0;
		alloca1.field10.field0 = 0;
		alloca1.field9.field0 = 4200100;
		*anon50 = *phi58;
		alloca1.field9.field0 = 4200106;
		uint64_t phi67 = 8;
		uint64_t phi68 = 2099034;
		uint64_t phi69 = 4200108;
		do
		{
			*(uint32_t*)(alloca1.field9.field0 + phi68) = *(uint32_t*)&((uint8_t*)&alloca1)[phi67];
			alloca1.field9.field0 = phi69;
			uint32_t phi_in70 = *(uint32_t*)&alloca1.field10.field0;
			phi71 = phi_in70;
			alloca1.field9.field0 = 4200200;
			if (*(uint32_t*)&alloca1.field16.field0 > phi71)
			{
				uint32_t* anon72 = (uint32_t*)(alloca1.field7.field0 + ((__sext int64_t)phi71 << 2));
				uint32_t anon73 = *anon72 + *anon14 * *(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon37 << 2));
				*anon72 = anon73;
				uint64_t anon74 = (__zext uint64_t)anon73;
				alloca1.field6.field0 = anon74;
				uint32_t anon75 = anon73 + 1;
				alloca1.field10.field0 = (__zext uint64_t)anon75;
				uint32_t anon76 = anon73 + 1;
				alloca1.field3.field0 = (__zext uint64_t)anon76;
				*anon37 = anon76;
				*anon8 = anon75;
				int64_t anon77 = (__sext int64_t)anon75;
				int64_t anon78 = (__sext int64_t)*(uint32_t*)&((uint8_t*)&alloca1)[phi67];
				alloca1.field1.field0 = anon77 / anon78 & 0xffffffff;
				int64_t anon79 = anon77 % anon78;
				alloca1.field4.field0 = anon79 & 0xffffffff;
				alloca1.field9.field0 = 4200180;
				uint32_t phi80 = anon76;
				if ((uint32_t)anon79 == 0)
				{
					*anon37 = anon73;
					alloca1.field7.field0 = alloca1.field7.field0 + alloca1.field14.field0;
					alloca1.field9.field0 = 4200191;
					alloca1.field3.field0 = anon74;
					phi80 = anon73;
				}
				alloca1.field9.field0 = 4200195;
				phi_in70 = anon75;
				if (phi80 >= *(uint32_t*)&((uint8_t*)&alloca1)[phi67])
				{
					alloca1.field9.field0 = 4200242;
					alloca1.field3.field0 = (__zext uint64_t)(phi80 - *(uint32_t*)&((uint8_t*)&alloca1)[phi67]);
					alloca1.field9.field0 = 4200248;
					phi67 = 24;
					phi68 = 2098868;
					phi69 = 4200250;
				}
			}
		}
		while (*(uint32_t*)&alloca1.field16.field0 > phi71);
		uint32_t anon81 = *anon14 * *(uint32_t*)(phi47 + ((__sext int64_t)*anon37 << 2));
		*(uint32_t*)(*anon50 + ((__sext int64_t)phi56 << 2)) = anon81;
		alloca1.field11.field0 = (__zext uint64_t)anon81;
		uint32_t anon82 = anon81 + 1;
		alloca1.field10.field0 = (__zext uint64_t)anon82;
		uint32_t anon83 = anon81 + 1;
		alloca1.field3.field0 = (__zext uint64_t)anon83;
		*anon8 = anon82;
		*anon37 = anon83;
		int64_t anon84 = (__sext int64_t)anon82;
		alloca1.field1.field0 = anon84 / anon48 & 0xffffffff;
		int64_t anon85 = anon84 % anon48;
		alloca1.field4.field0 = anon85 & 0xffffffff;
		alloca1.field9.field0 = 4199909;
		phi54 = *anon50;
		phi86 = anon83;
		if ((uint32_t)anon85 == 0)
		{
			uint32_t anon87 = anon81 + 2;
			alloca1.field3.field0 = (__zext uint64_t)anon87;
			uint64_t anon88 = *anon50 + anon49;
			alloca1.field6.field0 = anon88;
			alloca1.field9.field0 = 4199922;
			*anon37 = anon87;
			phi54 = anon88;
			phi86 = anon87;
		}
		alloca1.field9.field0 = 4199930;
		phi56 = anon82;
		if (phi86 >= phi42)
		{
			uint32_t anon89 = phi86 - phi42;
			alloca1.field3.field0 = (__zext uint64_t)anon89;
			alloca1.field9.field0 = 4200232;
			*anon37 = anon89;
			phi51 = phi54;
			phi52 = anon82;
			phi53 = 4200237;
		}
	}
	while (phi86 >= phi42);
	alloca1.field9.field0 = 4199619;
	alloca1.field5.field0 = (__zext uint64_t)anon29;
	phi20 = anon28;
	phi21 = anon29;
	phi22 = *anon8;
	phi23 = anon29;
	*anon50 = alloca1.field7.field0;
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
