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
	uint32_t* anon27;
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
		uint64_t phi28;
		uint32_t anon30;
		uint64_t anon39;
		uint32_t phi_in22 = anon19;
		uint32_t phi23 = *anon8;
		uint64_t phi24 = *anon7;
		uint64_t phi25 = anon20;
		do
		{
			uint64_t phi26 = phi24;
			anon27 = (uint32_t*)0x601dec;
			*anon27 = (uint32_t)(arg1 + 4294967295);
			if (anon9 == 0)
			{
				phi28 = phi25 & 0xffffffff;
			}
			else 
			{
				uint32_t phi29;
				uint64_t anon36;
				anon30 = anon9 - 1;
				phi29 = anon30;
				uint32_t phi31 = phi_in22;
				uint32_t phi32 = phi23 - 1;
				uint64_t phi_in33 = phi26;
				do
				{
					uint64_t phi34 = phi_in33;
					*(uint32_t*)phi34 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi31 ^ (uint32_t)((__zext uint64_t)((phi32 >> 31) + phi32) << 32 >> 33)) << 2) + arg3);
					uint32_t anon35 = *anon27 - 1;
					*anon27 = anon35;
					phi29 = anon35;
					phi31 = *anon8;
					phi32 = *anon8;
					anon36 = phi34 + 4;
					phi_in33 = anon36;
				}
				while (*anon27 != 0);
				phi28 = (__zext uint64_t)*anon8;
				phi26 = anon36;
			}
			uint64_t anon38 = phi28 + 4294967295;
			uint32_t anon37 = (uint32_t)anon38;
			*anon8 = anon37;
			phi_in22 = anon37;
			phi23 = (uint32_t)phi28;
			anon39 = phi26 + (arg4 << 32 >> 30);
			phi24 = anon39;
			phi25 = anon38 & 0xffffffff;
		}
		while (phi28 != 0);
		*anon7 = anon39;
		phi21 = anon30;
	}
	*anon27 = phi21;
	uint32_t anon40 = rand();
	uint32_t anon41 = (uint32_t)(((__zext uint64_t)(anon40 > 4294967295 ? anon40 : anon40 + 255) << 32 >> 40) % anon4);
	*anon2 = anon41;
	*anon5 = 3 - anon41;
	uint32_t anon42 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon27;
	uint64_t anon45 = (__zext uint64_t)(anon42 > 4294967295 ? anon42 : anon42 + 255);
	uint64_t anon44 = anon45 >> 31;
	uint32_t anon43 = *(uint32_t*)(((__zext uint64_t)(anon44 != 0 ^ (anon45 & 0x100) != 0) - anon44 << 2) + arg3) ^ 1;
	*anon10 = anon43;
	*anon14 = 3 - anon43;
	if (anon9 != 0)
	{
		uint64_t anon56;
		uint32_t phi_in46 = *anon27;
		uint64_t phi47 = arg2;
		do
		{
			uint64_t anon54;
			uint64_t phi_in48 = phi47;
			uint32_t phi49 = *anon27;
			uint32_t phi50 = phi_in46;
			do
			{
				uint64_t phi51 = phi_in48;
				uint32_t* anon52 = (uint32_t*)phi51;
				*anon52 = *anon52 + (*(uint32_t*)(((__sext int64_t)(phi49 ^ (phi50 >> 31) + phi50 >> 1 ^ *anon16 & phi50) << 2) + arg3) << 2);
				uint32_t anon53 = *anon27 - 1;
				*anon27 = anon53;
				phi49 = anon53;
				phi50 = *anon8;
				anon54 = phi51 + 4;
				phi_in48 = anon54;
			}
			while (*anon27 != 0);
			uint32_t anon55 = *anon8 - 1;
			*anon8 = anon55;
			phi_in46 = anon55;
			anon56 = anon54 + (arg4 << 32 >> 30);
			phi47 = anon56;
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
	uint32_t* anon32;
	uint64_t phi56;
	uint64_t phi_in129;
	uint32_t phi_in175;
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
		uint64_t anon44;
		uint64_t phi46;
		uint32_t anon53;
		uint64_t anon77;
		phi24 = phi10;
		uint32_t* phi_in28 = (uint32_t*)arg3;
		uint64_t phi_in29 = arg3;
		uint32_t* phi30 = (uint32_t*)arg3;
		do
		{
			phi31 = phi_in15;
			anon32 = (uint32_t*)0x601dec;
			uint32_t anon34 = (uint32_t)anon13;
			uint32_t anon33 = anon34 - 1;
			*anon32 = anon33;
			uint64_t phi35 = phi_in29;
			uint32_t phi36 = anon33;
			if (anon34 != 0)
			{
				do
				{
					uint32_t* phi37 = phi_in28;
					uint64_t phi38 = 3;
					if (anon1 > phi36)
					{
						*phi30 = *phi30 + (phi16 * phi16 << 1);
						phi38 = ((__zext uint64_t)(anon1 <= *anon32) << 2) + 4294967295 & 0xffffffff;
					}
					uint64_t anon39 = (uint64_t)phi37;
					*(uint32_t*)(anon39 + (phi17 << 32 >> 30)) = (uint32_t)(phi38 * anon2) * anon1 + *phi37;
					uint32_t anon40 = *anon32 - 1;
					*anon32 = anon40;
					uint64_t anon41 = anon39 + 4;
					phi35 = anon41;
					uint32_t* anon42 = (uint32_t*)anon41;
					phi_in28 = anon42;
					phi30 = anon42;
					phi36 = anon40;
				}
				while (*anon32 != 0);
			}
			phi_in15 = phi31 - 1;
			anon44 = phi35 + (anon8 >> 30);
			uint32_t* anon43 = (uint32_t*)anon44;
			phi_in28 = anon43;
			phi_in29 = anon44;
			phi30 = anon43;
		}
		while (phi31 != 256);
		*anon9 = anon44;
		uint32_t phi45 = phi24;
		uint64_t anon47 = (__zext uint64_t)phi24;
		phi46 = anon47;
		uint64_t phi48 = anon47;
		uint32_t anon50 = phi24 + 1;
		int64_t anon52 = (__sext int64_t)phi24 << 2;
		uint32_t anon51 = (uint32_t)(anon52 + 4 + arg4 >> 2) & 3;
		uint32_t anon49 = phi24 == 4 | anon50 < 5 | anon50 < anon51 ? anon50 : anon51;
		if (anon49 != 0)
		{
			uint32_t phi54;
			anon53 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)((anon52 & 0xc) + arg4) = (__zext uint32_t)(phi24 < anon53);
			uint32_t anon55 = phi24 - 1;
			phi54 = anon55;
			uint64_t anon57 = anon47 + 4294967295;
			phi56 = anon57 & 0xffffffff;
			phi48 = (__zext uint64_t)anon55;
			if (anon49 != 1)
			{
				uint32_t anon59 = (uint32_t)anon57;
				struct { uint32_t field0; bool field1; } anon58 = llvm.ssub.with.overflow.i32(anon53, anon59);
				uint32_t anon60 = anon53 - anon59;
				*(uint32_t*)((anon57 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon60 < 0 ^ anon58.field1) ^ 1) & (__zext uint32_t)(anon60 != 0);
				uint32_t anon61 = phi24 - 2;
				phi54 = anon61;
				uint64_t anon62 = anon47 + 4294967294;
				phi56 = anon62 & 0xffffffff;
				phi48 = (__zext uint64_t)anon61;
				if (anon49 != 2)
				{
					uint32_t anon64 = (uint32_t)anon62;
					struct { uint32_t field0; bool field1; } anon63 = llvm.ssub.with.overflow.i32(anon53, anon64);
					uint32_t anon65 = anon53 - anon64;
					*(uint32_t*)((anon62 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon65 < 0 ^ anon63.field1) ^ 1) & (__zext uint32_t)(anon65 != 0);
					uint32_t anon66 = phi24 - 3;
					phi54 = anon66;
					uint64_t anon67 = anon47 + 4294967293;
					phi56 = anon67 & 0xffffffff;
					phi48 = (__zext uint64_t)anon66;
					if (anon49 != 3)
					{
						uint32_t anon69 = (uint32_t)anon67;
						struct { uint32_t field0; bool field1; } anon68 = llvm.ssub.with.overflow.i32(anon53, anon69);
						uint32_t anon70 = anon53 - anon69;
						*(uint32_t*)((anon67 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon70 < 0 ^ anon68.field1) ^ 1) & (__zext uint32_t)(anon70 != 0);
						uint32_t anon71 = phi24 - 4;
						phi54 = anon71;
						uint64_t anon72 = anon47 + 4294967292;
						phi56 = anon72 & 0xffffffff;
						phi48 = (__zext uint64_t)anon71;
						if (anon49 == 5)
						{
							uint32_t anon74 = (uint32_t)anon72;
							struct { uint32_t field0; bool field1; } anon73 = llvm.ssub.with.overflow.i32(anon53, anon74);
							uint32_t anon75 = anon53 - anon74;
							*(uint32_t*)((anon72 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon75 < 0 ^ anon73.field1) ^ 1) & (__zext uint32_t)(anon75 != 0);
							phi54 = phi24 - 5;
							uint64_t anon76 = anon47 + 4294967291 & 0xffffffff;
							phi56 = anon76;
							phi48 = anon76;
						}
					}
				}
			}
			phi45 = phi54;
			phi46 = phi56;
			anon77 = phi11 & 0xffffffff;
			phi25 = anon77;
		}
		if (anon50 != anon49 && anon49 != 0 || anon49 == 0)
		{
			uint32_t phi81;
			uint32_t anon89;
			uint32_t anon90;
			uint64_t phi_in78 = phi46;
			uint64_t phi79 = arg4 & 0xf;
			uint64_t phi80 = phi_in78;
			uint32_t anon82 = (uint32_t)phi48;
			phi81 = anon82;
			uint32_t anon83 = phi24 - anon49;
			if (anon83 >= 3)
			{
				uint64_t anon88;
				uint32_t* anon84 = (uint32_t*)(arg1 - 240);
				*anon84 = anon82;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon84 = anon53;
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
					anon89 = anon50 - anon49;
					anon88 = ((__zext uint64_t)anon89 + 4294967292 >> 2 & 0x3fffffff) + 1;
				}
				while (anon87 < (uint32_t)anon88);
				phi25 = anon77;
				anon90 = (uint32_t)(anon88 << 2);
				if (anon89 != anon90)
				{
					phi79 = arg4;
					uint32_t anon91 = phi45 - anon90;
					phi80 = (__zext uint64_t)anon91;
					phi81 = anon91;
				}
			}
			if (anon83 >= 3 && anon89 != anon90 || anon83 < 3)
			{
				struct { uint32_t field0; bool field1; } anon92 = llvm.ssub.with.overflow.i32(anon53, phi81);
				uint32_t anon93 = anon53 - phi81;
				*(uint32_t*)(phi79 + ((__sext int64_t)phi81 << 2)) = ((__zext uint32_t)(anon93 < 0 ^ anon92.field1) ^ 1) & (__zext uint32_t)(anon93 != 0);
				phi25 = anon77;
				if (phi81 != 0)
				{
					uint32_t anon95 = (uint32_t)(phi80 + 4294967295);
					struct { uint32_t field0; bool field1; } anon94 = llvm.ssub.with.overflow.i32(anon53, anon95);
					uint64_t anon96 = phi80 << 32;
					uint32_t anon97 = anon53 - anon95;
					*(uint32_t*)(phi79 + (anon96 - 4294967296 >> 30)) = ((__zext uint32_t)(anon97 < 0 ^ anon94.field1) ^ 1) & (__zext uint32_t)(anon97 != 0);
					phi25 = anon77;
					if (anon95 != 0)
					{
						uint32_t anon99 = (uint32_t)(phi80 + 4294967294);
						struct { uint32_t field0; bool field1; } anon98 = llvm.ssub.with.overflow.i32(anon53, anon99);
						uint32_t anon100 = anon53 - anon99;
						*(uint32_t*)(phi79 + (anon96 - 8589934592 >> 30)) = ((__zext uint32_t)(anon100 < 0 ^ anon98.field1) ^ 1) & (__zext uint32_t)(anon100 != 0);
						phi25 = anon77;
					}
				}
			}
		}
	}
	*anon32 = phi24;
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
		uint64_t phi104 = arg3;
		while (true)
		{
			uint64_t phi115;
			uint64_t anon141;
			uint64_t anon166;
			uint32_t anon172;
			uint32_t phi192;
			uint32_t phi105 = phi102;
			*anon9 = phi104;
			uint64_t phi106 = *anon9;
			uint32_t phi107 = phi105;
			uint64_t anon109 = (__zext uint64_t)*anon32;
			phi108 = (anon2 - anon109 << 32 >> 30) - 4 + arg4;
			int64_t anon112 = (__sext int64_t)*anon32 << 2;
			int64_t anon111 = (anon112 & 0xc) + arg4;
			phi110 = anon111;
			uint64_t phi_in113 = 0;
			phi104 = *anon9;
			uint32_t phi114 = 0;
			if (anon1 != 0)
			{
				uint32_t anon128;
				int64_t anon130;
				int64_t anon131;
				uint32_t phi132;
				uint32_t anon133;
				uint64_t anon137;
				uint32_t phi146;
				uint32_t phi147;
				uint32_t anon149;
				uint64_t phi159;
				uint32_t phi163;
				uint64_t anon165;
				phi115 = phi_in113;
				uint64_t phi116 = phi104;
				uint32_t* anon117 = (uint32_t*)0x601e00;
				*anon117 = *anon32;
				uint32_t phi118 = phi114;
				uint32_t phi_in119 = anon1;
				if (*anon32 != 0)
				{
					uint64_t anon122;
					uint32_t anon124;
					do
					{
						uint32_t phi120 = phi_in119;
						uint32_t anon121 = rand();
						anon122 = ((__zext uint64_t)(anon121 > 4294967295 ? anon121 : anon121 + 255) << 32 >> 40) % (__sext int64_t)phi120;
						*anon32 = (uint32_t)anon122;
						uint32_t* anon123 = (uint32_t*)(((__sext int64_t)*anon117 << 2) + arg4);
						*(uint32_t*)0x601e08 = *anon123;
						*anon123 = *(uint32_t*)((anon122 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon32 << 2) + arg4) = *anon123;
						anon124 = *anon117 - 1;
						*anon117 = anon124;
						phi_in119 = *anon117;
					}
					while (anon124 != 0);
					phi118 = *(uint32_t*)((anon122 << 32 >> 30) + arg4);
					phi116 = *anon9;
				}
				uint64_t phi_in125 = phi116;
				uint32_t* anon126 = (uint32_t*)phi108;
				if (*anon126 == 0)
				{
					uint32_t phi_in127;
					anon128 = anon1 - 1;
					phi_in127 = anon128;
					anon131 = anon2 << 32 >> 30;
					anon130 = anon131 + arg4;
					phi_in129 = anon130;
					phi132 = phi107;
					anon133 = *anon32 - phi114;
					if (phi107 > anon133)
					{
						uint64_t anon135;
						do
						{
							*anon32 = phi_in127;
							uint64_t phi134 = phi_in129;
							phi_in127 = *anon32 - 1;
							anon135 = phi134 - 4;
							phi_in129 = anon135;
						}
						while (*(uint32_t*)anon135 == 0);
						*anon126 = 1;
						*(uint32_t*)(((__sext int64_t)*anon32 << 2) + arg4) = 0;
						phi132 = phi107 - 1;
					}
				}
				else 
				{
					uint64_t phi_in136;
					*anon32 = anon128;
					anon137 = (arg4 & 0xf) + anon131 - 4;
					phi_in136 = anon137;
					if (phi107 == 0)
					{
						uint32_t* anon139;
						do
						{
							uint64_t phi138 = phi_in136;
							*anon32 = *anon32 - 1;
							phi_in136 = phi138 - 4;
							anon139 = (uint32_t*)phi138;
						}
						while (*anon139 != 0);
						*anon139 = 1;
						*anon126 = 0;
						phi132 = phi107;
					}
					else 
					{
						phi132 = phi107 - 1;
					}
				}
				anon141 = phi110 & 0xffffffff00000000 | phi110 & 0xffffffff;
				uint32_t* anon140 = (uint32_t*)anon141;
				if (*anon140 == 0)
				{
					uint64_t phi142;
					bool anon148;
					uint64_t anon143 = (__zext uint64_t)anon133;
					phi142 = anon143;
					uint32_t phi_in144 = anon128;
					uint64_t phi_in145 = anon130;
					if (phi105 <= anon133)
					{
						phi146 = phi132;
						phi147 = phi105;
						anon148 = anon1 != 3 | phi105 == 0;
						if (!anon148)
						{
							phi142 = anon143;
							phi_in144 = anon128;
							phi_in145 = anon130;
							phi146 = phi132;
							phi147 = phi105;
						}
					}
					anon149 = phi118 + anon128 - *anon32;
					if (phi105 > anon133 || !anon148 && phi105 <= anon133 && phi132 == 2 | anon133 == anon149)
					{
						uint64_t anon151;
						do
						{
							*anon32 = phi_in144;
							uint64_t phi150 = phi_in145;
							phi142 = phi142 & 0xffffffffffffff00 | (__zext uint64_t)(*anon32 == anon149);
							phi_in144 = *anon32 - 1;
							anon151 = phi150 - 4;
							phi_in145 = anon151;
						}
						while (((__zext uint8_t)(*anon32 == anon149) | (__zext uint8_t)(*(uint32_t*)anon151 == 0)) == 1);
						*anon140 = 1;
						*(uint32_t*)(((__sext int64_t)*anon32 << 2) + arg4) = 0;
						phi146 = phi132 - (__zext uint32_t)(anon133 == anon149);
						phi147 = phi105 - 1;
					}
				}
				else 
				{
					uint32_t phi_in152 = anon128;
					uint64_t phi_in153 = anon137;
					if (phi105 == 0)
					{
						uint32_t* anon155;
						do
						{
							*anon32 = phi_in152;
							uint64_t phi154 = phi_in153;
							phi_in152 = *anon32 - 1;
							phi_in153 = phi154 - 4;
							anon155 = (uint32_t*)phi154;
						}
						while (*anon155 != 0 | *anon32 == anon149);
						*anon155 = 1;
						*anon140 = 0;
						phi146 = phi132;
						phi147 = phi105;
					}
					else 
					{
						phi146 = phi132;
						phi147 = phi105 - 1;
					}
				}
				phi107 = phi146;
				phi105 = phi147;
				uint64_t* anon156 = (uint64_t*)0x601df0;
				*anon156 = arg4;
				uint32_t phi_in157 = *anon32;
				uint64_t phi_in158 = arg4;
				do
				{
					phi159 = phi_in125;
					uint64_t phi160 = phi_in158;
					if (*(uint32_t*)phi160 != 0)
					{
						uint32_t* anon161 = (uint32_t*)phi159;
						uint32_t* anon162 = (uint32_t*)(phi159 + (phi25 << 32 >> 30));
						*anon161 = *anon162;
						*anon162 = *anon161;
						phi_in157 = *anon162;
					}
					phi163 = phi_in157;
					uint32_t anon164 = phi163 - 1;
					*anon32 = anon164;
					phi_in125 = phi159 + 4;
					phi_in157 = anon164;
					anon165 = phi160 + 4;
					phi_in158 = anon165;
				}
				while (phi163 != 0);
				*anon156 = anon165;
				anon166 = phi159 + 4;
				*anon9 = anon166;
				uint32_t phi167 = *anon32;
				uint64_t phi168 = anon109;
				uint32_t anon170 = *anon32 + 1;
				uint32_t anon171 = (uint32_t)(anon112 + 4 + arg4 >> 2) & 3;
				uint32_t anon169 = anon170 > 5 ? anon170 < anon171 ? anon170 : anon171 : anon170;
				if (anon169 != 0)
				{
					uint32_t anon176;
					uint64_t phi_in177;
					int64_t anon174 = anon3 >> 32;
					int64_t anon173 = anon174 & 1;
					anon172 = (uint32_t)(anon2 + anon173 << 32 >> 33) + (uint32_t)anon173 - ((uint32_t)(anon2 + anon174) & 1);
					*(uint32_t*)anon111 = (__zext uint32_t)(*anon32 < anon172);
					if (anon169 == 1)
					{
						anon176 = *anon32 - 1;
						phi_in175 = anon176;
						phi_in177 = (__zext uint64_t)anon176;
					}
					else 
					{
						uint32_t anon178;
						*(uint32_t*)(((__zext uint64_t)anon176 << 32 >> 30) + arg4) = (__zext uint32_t)(anon176 < anon172);
						if (anon169 == 2)
						{
							anon178 = *anon32 - 2;
							phi_in175 = anon178;
							phi_in177 = (__zext uint64_t)anon178;
						}
						else 
						{
							uint32_t anon181;
							struct { uint32_t field0; bool field1; } anon179 = llvm.ssub.with.overflow.i32(anon172, anon178);
							uint32_t anon180 = anon172 - anon178;
							*(uint32_t*)(((__zext uint64_t)anon178 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon180 < 0 ^ anon179.field1) ^ 1) & (__zext uint32_t)(anon180 != 0);
							if (anon169 == 3)
							{
								anon181 = *anon32 - 3;
								phi_in175 = anon181;
								phi_in177 = (__zext uint64_t)anon181;
							}
							else 
							{
								struct { uint32_t field0; bool field1; } anon182 = llvm.ssub.with.overflow.i32(anon172, anon181);
								uint32_t anon183 = anon172 - anon181;
								*(uint32_t*)(((__zext uint64_t)anon181 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon183 < 0 ^ anon182.field1) ^ 1) & (__zext uint32_t)(anon183 != 0);
								uint32_t anon184 = *anon32 - 4;
								phi_in175 = anon184;
								uint64_t anon185 = (__zext uint64_t)anon184;
								phi_in177 = anon185;
								if (anon169 == 5)
								{
									struct { uint32_t field0; bool field1; } anon186 = llvm.ssub.with.overflow.i32(anon172, anon184);
									uint32_t anon187 = anon172 - anon184;
									*(uint32_t*)(((__zext uint64_t)anon184 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon187 < 0 ^ anon186.field1) ^ 1) & (__zext uint32_t)(anon187 != 0);
									uint64_t anon188 = anon185 + 4294967295;
									phi_in175 = (uint32_t)anon188;
									phi_in177 = anon188 & 0xffffffff;
								}
							}
						}
					}
					phi167 = phi_in175;
					phi168 = phi_in177;
				}
				if (anon170 != anon169 && anon169 != 0 || anon169 == 0)
				{
					uint32_t anon194;
					uint32_t anon195;
					uint64_t phi189 = phi168;
					uint32_t phi190 = phi167;
					uint32_t anon191 = *anon32 - anon169;
					if (anon191 >= 3)
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi192 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon195 = anon170 - anon169;
						anon194 = (uint32_t)(((__zext uint64_t)anon195 + 4294967292 >> 2 & 0x3fffffff) + 1 << 2);
						uint32_t anon193 = phi167 - anon194;
						phi189 = (__zext uint64_t)anon193;
						phi190 = anon193;
					}
					if (anon194 != anon195 && anon191 >= 3 || anon191 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi190 << 2) + arg4) = (__zext uint32_t)(phi190 < anon172);
						if (phi190 != 0)
						{
							uint32_t anon197 = (uint32_t)(phi189 + 4294967295);
							struct { uint32_t field0; bool field1; } anon196 = llvm.ssub.with.overflow.i32(anon172, anon197);
							uint64_t anon198 = phi189 << 32;
							uint32_t anon199 = anon172 - anon197;
							*(uint32_t*)((anon198 - 4294967296 >> 30) + arg4) = ((__zext uint32_t)(anon199 < 0 ^ anon196.field1) ^ 1) & (__zext uint32_t)(anon199 != 0);
							if (anon197 != 0)
							{
								*(uint32_t*)((anon198 - 8589934592 >> 30) + arg4) = (__zext uint32_t)((uint32_t)(phi189 + 4294967294) < anon172);
							}
						}
					}
				}
				phi106 = *anon101;
			}
			uint64_t anon200 = phi106 + *(uint64_t*)(arg1 - 168);
			*anon101 = anon200;
			phi102 = anon172;
			phi104 = anon200;
			(__asm "movdqa xmm0, xmm3")();
			phi192 = phi192 + 1;
			uint64_t phi108 = phi108 + 4;
			uint64_t phi110 = anon141 - 4;
			uint64_t anon201 = phi115 + 1;
			phi_in113 = anon201;
			phi104 = anon166;
			phi114 = (uint32_t)anon201;
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
		uint64_t anon54;
		uint32_t phi35 = phi_in32;
		*anon31 = phi_in33;
		uint64_t anon38 = phi22 << 32 >> 32;
		uint32_t anon37 = (uint32_t)anon38;
		uint32_t anon36 = anon37 * anon37;
		if (anon36 <= phi34)
		{
			uint32_t phi48;
			*anon4 = *(uint32_t*)((uint64_t)&alloca1 + 12);
			uint32_t phi_in39 = anon5;
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
					phi_in39 = anon10 - 1;
					phi40 = &alloca1.field0;
					phi41 = (__zext uint64_t)*anon4;
				}
				while (anon45 != 0);
			}
			*anon26 = phi_in39;
			*anon4 = 0;
			*anon31 = *phi40;
			*anon7 = anon10 + 1 - *anon7;
			phi_in39 = *anon26;
			uint64_t phi_in46 = *phi40;
			uint32_t phi_in47 = 0;
			do
			{
				*anon26 = phi_in39;
				*anon31 = phi_in46;
				phi48 = phi_in47;
				if (anon36 > phi48)
				{
					uint32_t* anon49 = (uint32_t*)(*anon31 + ((__sext int64_t)phi48 << 2));
					uint32_t anon50 = *anon49 + *(uint32_t*)(((__sext int64_t)*anon26 << 2) + arg4) * *anon7;
					*anon49 = anon50;
					uint32_t anon51 = *anon26 + 1;
					*anon26 = anon51;
					uint32_t anon52 = anon50 + 1;
					*anon4 = anon52;
					uint64_t phi53 = *anon31;
					phi_in39 = anon51;
					if ((uint32_t)((__sext int64_t)anon52 % (arg2 << 32 >> 32)) == 0)
					{
						anon54 = arg5 << 32 >> 30;
						phi53 = *anon31 + anon54;
						phi_in39 = *anon26;
					}
					phi_in46 = phi53;
					phi_in47 = anon52;
					if (phi_in39 >= anon10)
					{
						uint32_t anon55 = phi_in39 - anon10;
						*anon26 = anon55;
						phi_in39 = anon55;
						phi_in46 = phi53;
						phi_in47 = anon52;
					}
				}
			}
			while (anon36 > phi48);
		}
		break;
		uint32_t anon56 = *(uint32_t*)(((__sext int64_t)phi35 << 2) + arg4) * *anon7;
		*(uint32_t*)(*anon31 + ((__sext int64_t)phi34 << 2)) = anon56;
		uint32_t anon57 = anon56 + 1;
		*anon4 = anon57;
		uint32_t anon58 = phi35 + ((uint32_t)((__sext int64_t)anon57 % anon38) == 0 ? 2 : 1);
		*anon26 = anon58;
		phi_in32 = anon58;
		uint64_t anon59 = *anon31 + ((uint32_t)((__sext int64_t)anon57 % anon38) == 0 ? anon54 : 0);
		phi_in33 = anon59;
		phi34 = anon57;
		uint32_t anon60 = (uint32_t)phi22;
		if (anon58 >= anon60)
		{
			uint32_t anon61 = anon58 - anon60;
			*anon26 = anon61;
			phi_in32 = anon61;
			phi_in33 = anon59;
			phi34 = anon57;
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
