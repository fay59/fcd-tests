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
	if (anon2 != 1 && anon1 >= 2 || anon1 < 2)
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
	uint32_t phi21;
	uint32_t* anon28;
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
	uint64_t anon13 = (__zext uint64_t)(anon6 > 4294967295 ? anon6 : anon6 + 255);
	uint64_t anon12 = anon13 >> 31;
	uint32_t anon11 = *(uint32_t*)(((__zext uint64_t)(anon12 != 0 ^ (anon13 & 0x100) != 0) - anon12 << 2) + arg3) ^ 1;
	*anon10 = anon11;
	uint32_t* anon14 = (uint32_t*)(arg3 + 12);
	*anon14 = 3 - anon11;
	uint32_t anon15 = rand();
	uint32_t* anon16 = (uint32_t*)0x601e04;
	uint32_t anon17 = anon15 > 4294967295 ? anon15 : anon15 + 255;
	uint32_t anon18 = anon17 >> 31;
	*anon16 = (((anon17 >> 8) + anon18 & 1) - anon18) * 3;
	uint64_t anon20 = (__zext uint64_t)*anon8 + 4294967295;
	uint32_t anon19 = (uint32_t)anon20;
	*anon8 = anon19;
	if (*anon8 == 0)
	{
		phi21 = anon9 - 1;
	}
	else 
	{
		uint64_t phi29;
		uint32_t anon31;
		uint64_t anon39;
		uint32_t phi22 = anon19;
		uint32_t phi23 = *anon8;
		uint64_t phi_in24 = *anon7;
		uint64_t phi25 = anon20;
		do
		{
			uint32_t phi_in26 = phi22;
			uint64_t phi27 = phi_in24;
			anon28 = (uint32_t*)0x601dec;
			*anon28 = (uint32_t)(arg1 + 4294967295);
			if (anon9 == 0)
			{
				phi29 = phi25 & 0xffffffff;
			}
			else 
			{
				uint32_t phi30;
				uint64_t anon36;
				anon31 = anon9 - 1;
				phi30 = anon31;
				uint32_t phi32 = phi_in26;
				uint32_t phi33 = phi23 - 1;
				phi_in24 = phi27;
				do
				{
					uint64_t phi34 = phi_in24;
					*(uint32_t*)phi34 = *(uint32_t*)(((__sext int64_t)(phi30 ^ *anon16 & phi32 ^ (uint32_t)((__zext uint64_t)((phi33 >> 31) + phi33) << 32 >> 33)) << 2) + arg3);
					uint32_t anon35 = *anon28 - 1;
					*anon28 = anon35;
					phi30 = anon35;
					phi32 = *anon8;
					phi33 = *anon8;
					anon36 = phi34 + 4;
					phi_in24 = anon36;
				}
				while (*anon28 != 0);
				phi29 = (__zext uint64_t)*anon8;
				phi27 = anon36;
			}
			uint64_t anon38 = phi29 + 4294967295;
			uint32_t anon37 = (uint32_t)anon38;
			*anon8 = anon37;
			phi22 = anon37;
			phi23 = (uint32_t)phi29;
			anon39 = phi27 + (arg4 << 32 >> 30);
			phi_in24 = anon39;
			phi25 = anon38 & 0xffffffff;
		}
		while (phi29 != 0);
		*anon7 = anon39;
		phi21 = anon31;
	}
	*anon28 = phi21;
	uint32_t anon40 = rand();
	uint32_t anon41 = (uint32_t)(((__zext uint64_t)(anon40 > 4294967295 ? anon40 : anon40 + 255) << 32 >> 40) % anon4);
	*anon2 = anon41;
	*anon5 = 3 - anon41;
	uint32_t anon42 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon28;
	uint64_t anon45 = (__zext uint64_t)(anon42 > 4294967295 ? anon42 : anon42 + 255);
	uint64_t anon44 = anon45 >> 31;
	uint32_t anon43 = *(uint32_t*)(((__zext uint64_t)(anon44 != 0 ^ (anon45 & 0x100) != 0) - anon44 << 2) + arg3) ^ 1;
	*anon10 = anon43;
	*anon14 = 3 - anon43;
	if (anon9 != 0)
	{
		uint64_t anon56;
		uint32_t phi46 = *anon28;
		uint64_t phi_in47 = arg2;
		do
		{
			uint64_t anon54;
			uint32_t phi_in48 = phi46;
			uint32_t phi49 = *anon28;
			uint32_t phi50 = phi_in48;
			do
			{
				uint64_t phi51 = phi_in47;
				uint32_t* anon52 = (uint32_t*)phi51;
				*anon52 = *anon52 + (*(uint32_t*)(((__sext int64_t)(phi49 ^ (phi50 >> 31) + phi50 >> 1 ^ *anon16 & phi50) << 2) + arg3) << 2);
				uint32_t anon53 = *anon28 - 1;
				*anon28 = anon53;
				phi49 = anon53;
				phi50 = *anon8;
				anon54 = phi51 + 4;
				phi_in47 = anon54;
			}
			while (*anon28 != 0);
			uint32_t anon55 = *anon8 - 1;
			*anon8 = anon55;
			phi46 = anon55;
			anon56 = anon54 + (arg4 << 32 >> 30);
			phi_in47 = anon56;
		}
		while (*anon8 != 0);
		*anon7 = anon56;
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
	uint64_t anon13;
	uint64_t anon14;
	uint32_t phi_in15;
	uint32_t phi16;
	uint64_t phi17;
	uint32_t phi24;
	uint64_t phi25;
	uint32_t* anon34;
	uint64_t phi56;
	uint64_t phi_in130;
	uint32_t phi177;
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
		anon14 = arg2 << 32;
		anon13 = anon14 >> 32;
		uint64_t anon12 = anon13 + anon7 << 2;
		phi11 = anon12;
		phi_in15 = 3;
		phi16 = 4;
		phi17 = anon12 & 0xfffffffc;
	}
	else 
	{
		uint32_t* anon18 = (uint32_t*)(arg1 - 248);
		uint32_t anon19 = anon1 + anon6;
		*anon18 = anon19;
		uint64_t anon20 = (anon2 & 1) == 0 ? 4196992 : 4199456;
		int64_t anon21 = anon2 & 0xffffffff;
		((void(*)(uint64_t, uint64_t, uint64_t))anon20)(anon21, arg4, (__zext uint64_t)anon19);
		int64_t anon23 = anon2 << 32;
		int64_t anon22 = anon23 >> 30;
		*(uint64_t*)(arg1 - 168) = anon22;
		((void(*)(uint64_t, uint64_t, uint64_t, uint64_t))anon20)(anon21, anon22 + arg3, arg4, (__zext uint64_t)*anon18);
		*anon9 = arg3;
		phi24 = 4294967295;
		uint64_t anon27 = (anon13 + anon7 << 32 >> 32) * (anon23 >> 32);
		uint64_t anon26 = anon27 & 0xffffffff;
		phi25 = anon26;
		if (anon1 != 0)
		{
			phi10 = (uint32_t)(anon2 + 4294967295);
			phi11 = anon27;
			phi_in15 = anon1 - 1;
			phi16 = anon1;
			phi17 = anon26;
		}
	}
	if (anon1 == 4 || anon1 != 4 && anon1 != 0)
	{
		uint32_t phi31;
		uint64_t anon45;
		uint64_t phi47;
		uint32_t anon54;
		uint64_t anon78;
		uint32_t* phi28 = (uint32_t*)arg3;
		uint64_t phi29 = arg3;
		uint32_t* phi30 = (uint32_t*)arg3;
		do
		{
			phi31 = phi_in15;
			uint32_t* phi_in32 = phi28;
			uint32_t* phi33 = phi30;
			anon34 = (uint32_t*)0x601dec;
			uint32_t anon36 = (uint32_t)anon13;
			uint32_t anon35 = anon36 - 1;
			*anon34 = anon35;
			uint32_t phi37 = anon35;
			if (anon36 != 0)
			{
				do
				{
					uint32_t* phi38 = phi_in32;
					uint64_t phi39 = 3;
					if (anon1 > phi37)
					{
						*phi33 = *phi33 + (phi16 * phi16 << 1);
						phi39 = ((__zext uint64_t)(anon1 <= *anon34) << 2) + 4294967295 & 0xffffffff;
					}
					uint64_t anon40 = (uint64_t)phi38;
					*(uint32_t*)(anon40 + (phi17 << 32 >> 30)) = (uint32_t)(phi39 * anon2) * anon1 + *phi38;
					uint32_t anon41 = *anon34 - 1;
					*anon34 = anon41;
					uint64_t anon42 = anon40 + 4;
					phi29 = anon42;
					uint32_t* anon43 = (uint32_t*)anon42;
					phi_in32 = anon43;
					phi33 = anon43;
					phi37 = anon41;
				}
				while (*anon34 != 0);
			}
			phi_in15 = phi31 - 1;
			anon45 = phi29 + (anon8 >> 30);
			uint32_t* anon44 = (uint32_t*)anon45;
			phi28 = anon44;
			phi29 = anon45;
			phi30 = anon44;
		}
		while (phi31 != 256);
		*anon9 = anon45;
		uint32_t phi46 = phi10;
		uint64_t anon48 = (__zext uint64_t)phi10;
		phi47 = anon48;
		uint64_t phi49 = anon48;
		uint32_t anon51 = phi10 + 1;
		int64_t anon53 = (__sext int64_t)phi10 << 2;
		uint32_t anon52 = (uint32_t)(anon53 + 4 + arg4 >> 2) & 3;
		uint32_t anon50 = phi10 == 4 | anon51 < 5 | anon51 < anon52 ? anon51 : anon52;
		if (anon50 != 0)
		{
			anon54 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)((anon53 & 0xc) + arg4) = (__zext uint32_t)(phi10 < anon54);
			uint32_t anon55 = phi10 - 1;
			phi46 = anon55;
			uint64_t anon57 = anon48 + 4294967295;
			phi56 = anon57 & 0xffffffff;
			uint64_t phi_in58 = (__zext uint64_t)anon55;
			if (anon50 != 1)
			{
				uint32_t anon60 = (uint32_t)anon57;
				struct { uint32_t field0; bool field1; } anon59 = llvm.ssub.with.overflow.i32(anon54, anon60);
				uint32_t anon61 = anon54 - anon60;
				*(uint32_t*)((anon57 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon61 < 0 ^ anon59.field1) ^ 1) & (__zext uint32_t)(anon61 != 0);
				uint32_t anon62 = phi10 - 2;
				phi46 = anon62;
				uint64_t anon63 = anon48 + 4294967294;
				phi56 = anon63 & 0xffffffff;
				phi_in58 = (__zext uint64_t)anon62;
				if (anon50 != 2)
				{
					uint32_t anon65 = (uint32_t)anon63;
					struct { uint32_t field0; bool field1; } anon64 = llvm.ssub.with.overflow.i32(anon54, anon65);
					uint32_t anon66 = anon54 - anon65;
					*(uint32_t*)((anon63 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon66 < 0 ^ anon64.field1) ^ 1) & (__zext uint32_t)(anon66 != 0);
					uint32_t anon67 = phi10 - 3;
					phi46 = anon67;
					uint64_t anon68 = anon48 + 4294967293;
					phi56 = anon68 & 0xffffffff;
					phi_in58 = (__zext uint64_t)anon67;
					if (anon50 != 3)
					{
						uint32_t anon70 = (uint32_t)anon68;
						struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon54, anon70);
						uint32_t anon71 = anon54 - anon70;
						*(uint32_t*)((anon68 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon71 < 0 ^ anon69.field1) ^ 1) & (__zext uint32_t)(anon71 != 0);
						uint32_t anon72 = phi10 - 4;
						phi46 = anon72;
						uint64_t anon73 = anon48 + 4294967292;
						phi56 = anon73 & 0xffffffff;
						phi_in58 = (__zext uint64_t)anon72;
						if (anon50 == 5)
						{
							uint32_t anon75 = (uint32_t)anon73;
							struct { uint32_t field0; bool field1; } anon74 = llvm.ssub.with.overflow.i32(anon54, anon75);
							uint32_t anon76 = anon54 - anon75;
							*(uint32_t*)((anon73 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon76 < 0 ^ anon74.field1) ^ 1) & (__zext uint32_t)(anon76 != 0);
							phi46 = phi10 - 5;
							uint64_t anon77 = anon48 + 4294967291 & 0xffffffff;
							phi56 = anon77;
							phi_in58 = anon77;
						}
					}
				}
			}
			phi47 = phi56;
			phi24 = phi10;
			anon78 = phi11 & 0xffffffff;
			phi25 = anon78;
			phi49 = phi_in58;
		}
		if (anon51 != anon50 && anon50 != 0 || anon50 == 0)
		{
			uint32_t phi81;
			uint32_t anon89;
			uint32_t anon90;
			uint64_t phi79 = phi47;
			uint64_t phi80 = arg4 & 0xf;
			uint32_t anon82 = (uint32_t)phi49;
			phi81 = anon82;
			uint32_t anon83 = phi10 - anon50;
			if (anon83 >= 3)
			{
				uint64_t anon88;
				uint32_t* anon84 = (uint32_t*)(arg1 - 240);
				*anon84 = anon82;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon84 = anon54;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in85 = 0;
				do
				{
					uint32_t phi86 = phi_in85;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon87 = phi86 + 1;
					phi_in85 = anon87;
					anon89 = anon51 - anon50;
					anon88 = ((__zext uint64_t)anon89 + 4294967292 >> 2 & 0x3fffffff) + 1;
				}
				while (anon87 < (uint32_t)anon88);
				phi24 = phi10;
				phi25 = anon78;
				anon90 = (uint32_t)(anon88 << 2);
				if (anon89 != anon90)
				{
					phi80 = arg4;
					uint32_t anon91 = phi46 - anon90;
					phi79 = (__zext uint64_t)anon91;
					phi81 = anon91;
				}
			}
			if (anon83 >= 3 && anon89 != anon90 || anon83 < 3)
			{
				struct { uint32_t field0; bool field1; } anon92 = llvm.ssub.with.overflow.i32(anon54, phi81);
				uint32_t anon93 = anon54 - phi81;
				*(uint32_t*)(phi80 + ((__sext int64_t)phi81 << 2)) = ((__zext uint32_t)(anon93 < 0 ^ anon92.field1) ^ 1) & (__zext uint32_t)(anon93 != 0);
				phi24 = phi10;
				phi25 = anon78;
				if (phi81 != 0)
				{
					uint32_t anon95 = (uint32_t)(phi79 + 4294967295);
					struct { uint32_t field0; bool field1; } anon94 = llvm.ssub.with.overflow.i32(anon54, anon95);
					uint64_t anon96 = phi79 << 32;
					uint32_t anon97 = anon54 - anon95;
					*(uint32_t*)(phi80 + (anon96 - 4294967296 >> 30)) = ((__zext uint32_t)(anon97 < 0 ^ anon94.field1) ^ 1) & (__zext uint32_t)(anon97 != 0);
					phi24 = phi10;
					phi25 = anon78;
					if (anon95 != 0)
					{
						uint32_t anon99 = (uint32_t)(phi79 + 4294967294);
						struct { uint32_t field0; bool field1; } anon98 = llvm.ssub.with.overflow.i32(anon54, anon99);
						uint32_t anon100 = anon54 - anon99;
						*(uint32_t*)(phi80 + (anon96 - 8589934592 >> 30)) = ((__zext uint32_t)(anon100 < 0 ^ anon98.field1) ^ 1) & (__zext uint32_t)(anon100 != 0);
						phi24 = phi10;
						phi25 = anon78;
					}
				}
			}
		}
	}
	*anon34 = phi24;
	uint64_t* anon101 = (uint64_t*)0x601df8;
	*anon101 = arg3;
	if ((anon14 >> 30) + arg3 > arg3)
	{
		uint32_t phi102;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon103 = anon2 + 1;
		phi102 = (uint32_t)(anon103 + (anon103 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in104 = arg3;
		while (true)
		{
			uint64_t phi116;
			uint64_t anon142;
			uint32_t phi_in147;
			uint64_t anon168;
			uint32_t anon174;
			uint32_t phi195;
			uint32_t phi105 = phi102;
			uint64_t phi106 = phi_in104;
			*anon9 = phi106;
			uint32_t phi107 = phi105;
			uint64_t anon109 = (__zext uint64_t)*anon34;
			phi108 = (anon2 - anon109 << 32 >> 30) - 4 + arg4;
			int64_t anon112 = (__sext int64_t)*anon34 << 2;
			int64_t anon111 = (anon112 & 0xc) + arg4;
			phi110 = anon111;
			uint64_t phi_in113 = 0;
			uint64_t phi114 = phi106;
			uint32_t phi115 = 0;
			if (anon1 != 0)
			{
				uint32_t anon129;
				int64_t anon131;
				int64_t anon132;
				uint32_t phi133;
				uint32_t anon134;
				uint64_t anon138;
				uint32_t phi148;
				uint32_t anon150;
				uint64_t phi160;
				uint32_t phi165;
				uint64_t anon167;
				phi116 = phi_in113;
				uint64_t phi_in117 = phi114;
				uint32_t* anon118 = (uint32_t*)0x601e00;
				*anon118 = *anon34;
				uint32_t phi119 = phi115;
				uint64_t phi_in120 = phi_in117;
				uint32_t phi_in121 = anon1;
				if (*anon34 != 0)
				{
					uint64_t anon124;
					uint32_t anon126;
					do
					{
						uint32_t phi122 = phi_in121;
						uint32_t anon123 = rand();
						anon124 = ((__zext uint64_t)(anon123 > 4294967295 ? anon123 : anon123 + 255) << 32 >> 40) % (__sext int64_t)phi122;
						*anon34 = (uint32_t)anon124;
						uint32_t* anon125 = (uint32_t*)(((__sext int64_t)*anon118 << 2) + arg4);
						*(uint32_t*)0x601e08 = *anon125;
						*anon125 = *(uint32_t*)((anon124 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = *anon125;
						anon126 = *anon118 - 1;
						*anon118 = anon126;
						phi_in121 = *anon118;
					}
					while (anon126 != 0);
					phi119 = *(uint32_t*)((anon124 << 32 >> 30) + arg4);
					phi_in120 = *anon9;
				}
				uint32_t* anon127 = (uint32_t*)phi108;
				if (*anon127 == 0)
				{
					uint32_t phi_in128;
					anon129 = anon1 - 1;
					phi_in128 = anon129;
					anon132 = anon2 << 32 >> 30;
					anon131 = anon132 + arg4;
					phi_in130 = anon131;
					phi133 = phi107;
					anon134 = *anon34 - phi115;
					if (phi107 > anon134)
					{
						uint64_t anon136;
						do
						{
							*anon34 = phi_in128;
							uint64_t phi135 = phi_in130;
							phi_in128 = *anon34 - 1;
							anon136 = phi135 - 4;
							phi_in130 = anon136;
						}
						while (*(uint32_t*)anon136 == 0);
						*anon127 = 1;
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = 0;
						phi133 = phi107 - 1;
					}
				}
				else 
				{
					uint64_t phi_in137;
					*anon34 = anon129;
					anon138 = (arg4 & 0xf) + anon132 - 4;
					phi_in137 = anon138;
					if (phi107 == 0)
					{
						uint32_t* anon140;
						do
						{
							uint64_t phi139 = phi_in137;
							*anon34 = *anon34 - 1;
							phi_in137 = phi139 - 4;
							anon140 = (uint32_t*)phi139;
						}
						while (*anon140 != 0);
						*anon140 = 1;
						*anon127 = 0;
						phi133 = phi107;
					}
					else 
					{
						phi133 = phi107 - 1;
					}
				}
				anon142 = phi110 & 0xffffffff00000000 | phi110 & 0xffffffff;
				uint32_t* anon141 = (uint32_t*)anon142;
				if (*anon141 == 0)
				{
					uint64_t phi143;
					bool anon149;
					uint64_t anon144 = (__zext uint64_t)anon134;
					phi143 = anon144;
					uint32_t phi_in145 = anon129;
					uint64_t phi_in146 = anon131;
					if (phi105 <= anon134)
					{
						phi_in147 = phi133;
						phi148 = phi105;
						anon149 = anon1 != 3 | phi105 == 0;
						if (!anon149)
						{
							phi143 = anon144;
							phi_in145 = anon129;
							phi_in146 = anon131;
							phi_in147 = phi133;
							phi148 = phi105;
						}
					}
					anon150 = phi119 + anon129 - *anon34;
					if (phi105 > anon134 || !anon149 && phi105 <= anon134 && phi133 == 2 | anon134 == anon150)
					{
						uint64_t anon152;
						do
						{
							*anon34 = phi_in145;
							uint64_t phi151 = phi_in146;
							phi143 = phi143 & 0xffffffffffffff00 | (__zext uint64_t)(*anon34 == anon150);
							phi_in145 = *anon34 - 1;
							anon152 = phi151 - 4;
							phi_in146 = anon152;
						}
						while (((__zext uint8_t)(*anon34 == anon150) | (__zext uint8_t)(*(uint32_t*)anon152 == 0)) == 1);
						*anon141 = 1;
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = 0;
						phi_in147 = phi133 - (__zext uint32_t)(anon134 == anon150);
						phi148 = phi105 - 1;
					}
				}
				else 
				{
					uint32_t phi_in153 = anon129;
					uint64_t phi_in154 = anon138;
					if (phi105 == 0)
					{
						uint32_t* anon156;
						do
						{
							*anon34 = phi_in153;
							uint64_t phi155 = phi_in154;
							phi_in153 = *anon34 - 1;
							phi_in154 = phi155 - 4;
							anon156 = (uint32_t*)phi155;
						}
						while (*anon156 != 0 | *anon34 == anon150);
						*anon156 = 1;
						*anon141 = 0;
						phi_in147 = phi133;
						phi148 = phi105;
					}
					else 
					{
						phi_in147 = phi133;
						phi148 = phi105 - 1;
					}
				}
				phi105 = phi148;
				uint64_t* anon157 = (uint64_t*)0x601df0;
				*anon157 = arg4;
				uint32_t phi158 = *anon34;
				uint64_t phi_in159 = arg4;
				do
				{
					phi160 = phi_in120;
					uint32_t phi_in161 = phi158;
					uint64_t phi162 = phi_in159;
					if (*(uint32_t*)phi162 != 0)
					{
						uint32_t* anon163 = (uint32_t*)phi160;
						uint32_t* anon164 = (uint32_t*)(phi160 + (phi25 << 32 >> 30));
						*anon163 = *anon164;
						*anon164 = *anon163;
						phi_in161 = *anon164;
					}
					phi165 = phi_in161;
					uint32_t anon166 = phi165 - 1;
					*anon34 = anon166;
					phi_in120 = phi160 + 4;
					phi158 = anon166;
					anon167 = phi162 + 4;
					phi_in159 = anon167;
				}
				while (phi165 != 0);
				*anon157 = anon167;
				anon168 = phi160 + 4;
				*anon9 = anon168;
				uint32_t phi169 = *anon34;
				uint64_t phi170 = anon109;
				uint32_t anon172 = *anon34 + 1;
				uint32_t anon173 = (uint32_t)(anon112 + 4 + arg4 >> 2) & 3;
				uint32_t anon171 = anon172 > 5 ? anon172 < anon173 ? anon172 : anon173 : anon172;
				if (anon171 != 0)
				{
					uint32_t anon178;
					uint64_t phi179;
					int64_t anon176 = anon3 >> 32;
					int64_t anon175 = anon176 & 1;
					anon174 = (uint32_t)(anon2 + anon175 << 32 >> 33) + (uint32_t)anon175 - ((uint32_t)(anon2 + anon176) & 1);
					*(uint32_t*)anon111 = (__zext uint32_t)(*anon34 < anon174);
					if (anon171 == 1)
					{
						anon178 = *anon34 - 1;
						phi177 = anon178;
						phi179 = (__zext uint64_t)anon178;
					}
					else 
					{
						uint32_t anon180;
						*(uint32_t*)(((__zext uint64_t)anon178 << 32 >> 30) + arg4) = (__zext uint32_t)(anon178 < anon174);
						if (anon171 == 2)
						{
							anon180 = *anon34 - 2;
							phi177 = anon180;
							phi179 = (__zext uint64_t)anon180;
						}
						else 
						{
							uint32_t anon183;
							struct { uint32_t field0; bool field1; } anon181 = llvm.ssub.with.overflow.i32(anon174, anon180);
							uint32_t anon182 = anon174 - anon180;
							*(uint32_t*)(((__zext uint64_t)anon180 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon182 < 0 ^ anon181.field1) ^ 1) & (__zext uint32_t)(anon182 != 0);
							if (anon171 == 3)
							{
								anon183 = *anon34 - 3;
								phi177 = anon183;
								phi179 = (__zext uint64_t)anon183;
							}
							else 
							{
								struct { uint32_t field0; bool field1; } anon184 = llvm.ssub.with.overflow.i32(anon174, anon183);
								uint32_t anon185 = anon174 - anon183;
								*(uint32_t*)(((__zext uint64_t)anon183 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon185 < 0 ^ anon184.field1) ^ 1) & (__zext uint32_t)(anon185 != 0);
								uint32_t anon186 = *anon34 - 4;
								phi177 = anon186;
								uint64_t anon187 = (__zext uint64_t)anon186;
								phi179 = anon187;
								if (anon171 == 5)
								{
									struct { uint32_t field0; bool field1; } anon188 = llvm.ssub.with.overflow.i32(anon174, anon186);
									uint32_t anon189 = anon174 - anon186;
									*(uint32_t*)(((__zext uint64_t)anon186 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon189 < 0 ^ anon188.field1) ^ 1) & (__zext uint32_t)(anon189 != 0);
									uint64_t anon190 = anon187 + 4294967295;
									phi177 = (uint32_t)anon190;
									phi179 = anon190 & 0xffffffff;
								}
							}
						}
					}
					phi169 = phi177;
					phi170 = phi179;
				}
				if (anon172 != anon171 && anon171 != 0 || anon171 == 0)
				{
					uint32_t anon197;
					uint32_t anon198;
					uint32_t phi191 = phi169;
					uint64_t phi_in192 = phi170;
					uint64_t phi193 = phi_in192;
					uint32_t anon194 = *anon34 - anon171;
					if (anon194 >= 3)
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi195 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon198 = anon172 - anon171;
						anon197 = (uint32_t)(((__zext uint64_t)anon198 + 4294967292 >> 2 & 0x3fffffff) + 1 << 2);
						uint32_t anon196 = phi191 - anon197;
						phi193 = (__zext uint64_t)anon196;
						phi191 = anon196;
					}
					if (anon197 != anon198 && anon194 >= 3 || anon194 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi191 << 2) + arg4) = (__zext uint32_t)(phi191 < anon174);
						if (phi191 != 0)
						{
							uint32_t anon200 = (uint32_t)(phi193 + 4294967295);
							struct { uint32_t field0; bool field1; } anon199 = llvm.ssub.with.overflow.i32(anon174, anon200);
							uint64_t anon201 = phi193 << 32;
							uint32_t anon202 = anon174 - anon200;
							*(uint32_t*)((anon201 - 4294967296 >> 30) + arg4) = ((__zext uint32_t)(anon202 < 0 ^ anon199.field1) ^ 1) & (__zext uint32_t)(anon202 != 0);
							if (anon200 != 0)
							{
								*(uint32_t*)((anon201 - 8589934592 >> 30) + arg4) = (__zext uint32_t)((uint32_t)(phi193 + 4294967294) < anon174);
							}
						}
					}
				}
				phi106 = *anon101;
			}
			uint64_t anon203 = phi106 + *(uint64_t*)(arg1 - 168);
			*anon101 = anon203;
			phi102 = anon174;
			phi_in104 = anon203;
			(__asm "movdqa xmm0, xmm3")();
			phi195 = phi195 + 1;
			phi107 = phi_in147;
			uint64_t phi108 = phi108 + 4;
			uint64_t phi110 = anon142 - 4;
			uint64_t anon204 = phi116 + 1;
			phi_in113 = anon204;
			phi114 = anon168;
			phi115 = (uint32_t)anon204;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct { uint64_t field0; uint8_t field1[4]; uint32_t field2; uint8_t field3[56]; uint64_t field4; } alloca1;
	uint32_t anon21;
	uint64_t phi22;
	uint64_t* phi23;
	uint32_t* anon26;
	uint32_t* anon28;
	alloca1.field4 = arg0;
	alloca1.field0 = arg3;
	uint32_t anon2 = rand();
	uint64_t* anon3 = (uint64_t*)0x601df0;
	*anon3 = arg4;
	uint32_t* anon4 = (uint32_t*)0x601e00;
	uint64_t anon6 = arg2 + 4294967295;
	uint32_t anon5 = (uint32_t)anon6;
	*anon4 = anon5;
	uint32_t* anon7 = (uint32_t*)0x601e04;
	uint64_t anon8 = (__zext uint64_t)(anon2 > 4294967295 ? anon2 : anon2 + 255);
	uint64_t anon9 = anon8 >> 31;
	uint32_t anon10 = (uint32_t)arg2;
	*anon7 = (__zext uint32_t)((anon8 & 0x100) != 0 ^ anon9 != 0) == (uint32_t)anon9 ? 1 : anon10;
	uint32_t* anon11 = (uint32_t*)0x601de8;
	uint32_t anon12 = (anon10 >> 31) + anon10 >> 1;
	*anon11 = anon12;
	uint64_t phi13 = arg4;
	uint32_t phi14 = anon5;
	uint32_t phi15 = anon10;
	uint32_t phi16 = anon12;
	if (anon10 == 0)
	{
		*anon4 = 4294967294;
		alloca1.field2 = 4294967294;
	}
	else 
	{
		uint64_t phi18;
		while (true)
		{
			*(uint32_t*)phi13 = phi14;
			if (phi14 == phi16)
			{
				uint32_t anon17 = phi15 - 2;
				*anon4 = anon17;
				phi18 = phi13;
				*(uint32_t*)phi13 = anon17;
				if (phi14 == 0)
				{
					break;
				}
			}
			if (phi14 != phi16 || phi14 != 0 && phi14 == phi16)
			{
				uint32_t anon19 = *anon4 - 1;
				*anon4 = anon19;
				uint64_t anon20 = phi13 + 4;
				phi18 = anon20;
				phi13 = anon20;
				phi14 = anon19;
				phi15 = *anon4;
				phi16 = anon19;
				if (*anon4 == 0)
				{
					break;
				}
			}
		}
		*anon3 = phi18;
		anon21 = anon10 - 2;
		*(uint32_t*)(arg1 - 68) = anon21;
		*anon4 = anon21;
		phi22 = arg2 & 0xffffffff;
		phi23 = &alloca1.field0;
	}
	if (anon10 == 0 || anon10 != 0 && anon21 != 0)
	{
		uint32_t anon30;
		uint64_t phi24 = anon6 & 0xffffffff;
		do
		{
			uint32_t anon25 = rand();
			anon26 = (uint32_t*)0x601dec;
			uint64_t anon27 = ((__zext uint64_t)(anon25 > 4294967295 ? anon25 : anon25 + 255) << 32 >> 40) % (phi24 << 32 >> 32);
			*anon26 = (uint32_t)anon27;
			anon28 = (uint32_t*)0x601e08;
			uint32_t* anon29 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
			*anon28 = *anon29;
			*anon29 = *(uint32_t*)((anon27 << 32 >> 30) + arg4);
			*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = *anon29;
			anon30 = *anon4 - 1;
			*anon4 = anon30;
			phi22 = arg2;
			phi23 = &alloca1.field0;
			phi24 = (__zext uint64_t)*anon4;
		}
		while (anon30 != 0);
	}
	*(uint32_t*)((phi22 << 2 & 0x3fffffffc) - 4 + arg4) = *anon11;
	*anon26 = 0;
	*anon4 = 0;
	uint64_t* anon31 = (uint64_t*)0x601e10;
	*anon31 = *phi23;
	uint32_t phi_in32 = 0;
	uint64_t phi_in33 = *phi23;
	uint32_t phi34 = 0;
	while (true)
	{
		uint64_t anon56;
		uint32_t phi35 = phi_in32;
		*anon31 = phi_in33;
		uint64_t anon38 = phi22 << 32 >> 32;
		uint32_t anon37 = (uint32_t)anon38;
		uint32_t anon36 = anon37 * anon37;
		if (anon36 <= phi34)
		{
			uint32_t phi49;
			*anon4 = *(uint32_t*)((uint64_t)&alloca1 + 12);
			uint32_t phi39 = anon5;
			uint64_t* phi40 = &alloca1.field0;
			if (*(uint32_t*)((uint64_t)&alloca1 + 12) != 0)
			{
				uint32_t anon45;
				uint64_t phi41 = anon6 & 0xffffffff;
				do
				{
					uint32_t anon42 = rand();
					uint64_t anon43 = ((__zext uint64_t)(anon42 > 4294967295 ? anon42 : anon42 + 255) << 32 >> 40) % (phi41 << 32 >> 32);
					*anon26 = (uint32_t)anon43;
					uint32_t* anon44 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
					*anon28 = *anon44;
					*anon44 = *(uint32_t*)((anon43 << 32 >> 30) + arg4);
					*(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) = *anon44;
					anon45 = *anon4 - 1;
					*anon4 = anon45;
					phi39 = anon10 - 1;
					phi40 = &alloca1.field0;
					phi41 = (__zext uint64_t)*anon4;
				}
				while (anon45 != 0);
			}
			uint32_t phi_in46 = phi39;
			*anon4 = 0;
			*anon26 = phi_in46;
			*anon31 = *phi40;
			*anon7 = anon10 + 1 - *anon7;
			uint64_t phi_in47 = *phi40;
			uint32_t phi_in48 = 0;
			do
			{
				*anon26 = phi_in46;
				*anon31 = phi_in47;
				phi49 = phi_in48;
				if (anon36 > phi49)
				{
					uint32_t* anon50 = (uint32_t*)(*anon31 + ((__sext int64_t)phi49 << 2));
					uint32_t anon51 = *anon50 + *(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) * *anon7;
					*anon50 = anon51;
					uint32_t anon52 = *anon26 + 1;
					*anon26 = anon52;
					uint32_t anon53 = anon51 + 1;
					*anon4 = anon53;
					uint64_t phi54 = *anon31;
					uint32_t phi55 = anon52;
					if ((uint32_t)((__sext int64_t)anon53 % (arg2 << 32 >> 32)) == 0)
					{
						anon56 = arg5 << 32 >> 30;
						phi54 = *anon31 + anon56;
						phi55 = *anon26;
					}
					phi_in46 = phi55;
					phi_in47 = phi54;
					phi_in48 = anon53;
					if (phi55 >= anon10)
					{
						uint32_t anon57 = phi55 - anon10;
						*anon26 = anon57;
						phi_in46 = anon57;
						phi_in47 = phi54;
						phi_in48 = anon53;
					}
				}
			}
			while (anon36 > phi49);
		}
		break;
		uint32_t anon58 = *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4) * *anon7;
		*(uint32_t*)(*anon31 + ((__sext int64_t)phi34 << 2)) = anon58;
		uint32_t anon59 = anon58 + 1;
		*anon4 = anon59;
		uint32_t anon60 = phi35 + ((uint32_t)((__sext int64_t)anon59 % anon38) == 0 ? 2 : 1);
		*anon26 = anon60;
		phi_in32 = anon60;
		uint64_t anon61 = *anon31 + ((uint32_t)((__sext int64_t)anon59 % anon38) == 0 ? anon56 : 0);
		phi_in33 = anon61;
		phi34 = anon59;
		uint32_t anon62 = (uint32_t)phi22;
		if (anon60 >= anon62)
		{
			uint32_t anon63 = anon60 - anon62;
			*anon26 = anon63;
			phi_in32 = anon63;
			phi_in33 = anon61;
			phi34 = anon59;
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
		uint32_t anon8;
		uint64_t phi3 = arg2 & 0xffffffff;
		do
		{
			uint32_t anon4 = rand();
			uint32_t* anon5 = (uint32_t*)0x601dec;
			uint64_t anon6 = ((__zext uint64_t)(anon4 > 4294967295 ? anon4 : anon4 + 255) << 32 >> 40) % (phi3 << 32 >> 32);
			*anon5 = (uint32_t)anon6;
			uint32_t* anon7 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*(uint32_t*)0x601e08 = *anon7;
			*anon7 = *(uint32_t*)((anon6 << 32 >> 30) + arg1);
			*(uint32_t*)(((__sext int64_t)*anon5 << 2) + arg1) = *anon7;
			anon8 = *anon1 - 1;
			*anon1 = anon8;
			phi3 = (__zext uint64_t)*anon1;
		}
		while (anon8 != 0);
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
