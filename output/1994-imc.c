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
	uint32_t phi20;
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
	if (*anon8 == 0)
	{
		phi20 = anon9 - 1;
	}
	else 
	{
		uint32_t phi23;
		uint32_t anon26;
		uint64_t anon33;
		uint32_t phi21 = anon19;
		uint64_t phi22 = *anon7;
		do
		{
			phi23 = phi21;
			uint64_t phi_in24 = phi22;
			anon25 = (uint32_t*)0x601dec;
			anon26 = anon9 - 1;
			*anon25 = anon26;
			uint64_t phi27 = phi_in24;
			uint32_t phi28 = anon26;
			phi21 = phi23;
			uint64_t phi29 = phi_in24;
			if (anon9 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon16 & phi21 ^ (phi21 >> 31) + phi21 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon25 - 1;
					*anon25 = anon30;
					phi23 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi27 = anon31;
					phi28 = anon30;
					phi21 = *anon8;
					phi29 = anon31;
				}
				while (*anon25 != 0);
			}
			uint32_t anon32 = phi23 - 1;
			*anon8 = anon32;
			phi21 = anon32;
			anon33 = phi27 + (arg4 << 32 >> 30);
			phi22 = anon33;
		}
		while (phi23 != 0);
		*anon7 = anon33;
		phi20 = anon26;
	}
	*anon8 = phi20;
	uint32_t anon34 = rand();
	uint32_t anon35 = (uint32_t)(((__zext uint64_t)(anon34 > 4294967295 ? anon34 : anon34 + 255) << 32 >> 40) % anon4);
	*anon2 = anon35;
	*anon5 = 3 - anon35;
	uint32_t anon36 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint64_t anon38 = (__zext uint64_t)(anon36 > 4294967295 ? anon36 : anon36 + 255);
	uint64_t anon39 = anon38 >> 31;
	uint32_t anon37 = *(uint32_t*)(((__zext uint64_t)((anon38 & 0x100) != 0 ^ anon39 != 0) - anon39 << 2) + arg3) ^ 1;
	*anon10 = anon37;
	*anon14 = 3 - anon37;
	if (anon9 != 0)
	{
		uint64_t anon49;
		uint32_t phi40 = *anon8;
		uint64_t phi_in41 = arg2;
		do
		{
			uint64_t anon47;
			uint32_t phi42 = phi40;
			*anon25 = *anon8;
			uint32_t phi43 = *anon8;
			do
			{
				uint64_t phi44 = phi_in41;
				uint32_t* anon45 = (uint32_t*)phi44;
				*anon45 = *anon45 + (*(uint32_t*)(((__sext int64_t)(phi43 ^ (phi42 >> 31) + phi42 >> 1 ^ *anon16 & phi42) << 2) + arg3) << 2);
				uint32_t anon46 = *anon25 - 1;
				*anon25 = anon46;
				phi43 = anon46;
				phi42 = *anon8;
				anon47 = phi44 + 4;
				phi_in41 = anon47;
			}
			while (*anon25 != 0);
			uint32_t anon48 = *anon8 - 1;
			*anon8 = anon48;
			phi40 = anon48;
			anon49 = anon47 + (arg4 << 32 >> 30);
			phi_in41 = anon49;
		}
		while (*anon8 != 0);
		*anon7 = anon49;
	}
	return;
}
void e(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t anon5;
	uint64_t anon6;
	uint64_t anon7;
	uint64_t* anon8;
	uint64_t phi9;
	uint64_t phi10;
	uint64_t anon12;
	uint64_t anon13;
	uint32_t phi14;
	uint32_t phi15;
	uint64_t phi16;
	int64_t anon20;
	uint64_t phi23;
	uint64_t phi24;
	uint32_t* anon35;
	uint64_t phi62;
	uint64_t phi_in136;
	uint32_t anon3 = (uint32_t)arg2;
	int64_t anon2 = (__sext int64_t)((anon3 >> 31) + anon3) >> 1;
	uint32_t anon1 = (uint32_t)anon2;
	if (anon1 == 4)
	{
		anon7 = arg5 << 32;
		anon6 = anon7 >> 32;
		anon5 = (uint32_t)anon6;
		uint32_t anon4 = anon5 + 4;
		*(uint32_t*)(arg1 - 248) = anon4;
		s(4199368, 4, arg3, arg4, anon6 + 4 & 0xffffffff);
		s(4199396, 4, arg3 + 16, arg4, (__zext uint64_t)anon4);
		anon8 = (uint64_t*)0x601e10;
		*anon8 = arg3;
		phi9 = 3;
		anon13 = arg2 << 32;
		anon12 = anon13 >> 32;
		uint64_t anon11 = anon12 + anon6 << 2;
		phi10 = anon11;
		phi14 = 4;
		phi15 = 3;
		phi16 = anon11 & 0xfffffffc;
	}
	else 
	{
		uint32_t* anon17 = (uint32_t*)(arg1 - 248);
		uint32_t anon18 = anon1 + anon5;
		*anon17 = anon18;
		uint64_t anon19 = (anon2 & 1) == 0 ? 4196992 : 4199456;
		anon20 = anon2 & 0xffffffff;
		((void(*)(uint64_t, uint64_t, uint64_t))anon19)(anon20, arg4, (__zext uint64_t)anon18);
		int64_t anon22 = anon2 << 32;
		int64_t anon21 = anon22 >> 30;
		*(uint64_t*)(arg1 - 168) = anon21;
		((void(*)(uint64_t, uint64_t, uint64_t, uint64_t))anon19)(anon20, anon21 + arg3, arg4, (__zext uint64_t)*anon17);
		*anon8 = arg3;
		phi23 = 4294967295;
		int64_t anon26 = (anon22 >> 32) * (anon12 + anon6 << 32 >> 32);
		int64_t anon25 = anon26 & 0xffffffff;
		phi24 = anon25;
		if (anon1 != 0)
		{
			phi9 = anon2 + 4294967295 & 0xffffffff;
			phi10 = anon26;
			phi14 = anon1;
			phi15 = anon1 - 1;
			phi16 = anon25;
		}
	}
	if (anon1 == 4 || anon1 != 4 && anon1 != 0)
	{
		uint32_t phi31;
		uint64_t anon50;
		uint32_t phi51;
		uint32_t anon59;
		uint64_t anon85;
		uint32_t phi_in27 = phi15;
		uint32_t* phi28 = (uint32_t*)arg3;
		uint64_t phi29 = arg3;
		uint32_t* phi30 = (uint32_t*)arg3;
		do
		{
			phi31 = phi_in27;
			uint32_t* phi_in32 = phi28;
			uint64_t phi_in33 = phi29;
			uint32_t* phi34 = phi30;
			anon35 = (uint32_t*)0x601dec;
			uint32_t anon37 = (uint32_t)anon12;
			uint32_t anon36 = anon37 - 1;
			*anon35 = anon36;
			uint64_t phi38 = phi_in33;
			uint32_t phi39 = anon36;
			if (anon37 != 0)
			{
				do
				{
					uint32_t* phi40 = phi_in32;
					uint32_t phi41 = 3;
					if (phi14 > phi39)
					{
						uint32_t anon42 = *phi34 + (phi14 * phi14 << 1);
						*phi34 = anon42;
						struct { uint32_t field0; bool field1; } anon43 = llvm.ssub.with.overflow.i32(phi14, anon42);
						uint32_t anon44 = (phi14 & 0x7fffffff) - anon42;
						phi41 = ((anon44 >> 31 ^ (__zext uint32_t)anon43.field1 | (__zext uint32_t)(anon44 == 0)) << 2) - 1;
					}
					uint64_t anon45 = (uint64_t)phi40;
					*(uint32_t*)(anon45 + (phi16 << 32 >> 30)) = phi14 * phi14 * phi41 + *phi40;
					uint32_t anon46 = *anon35 - 1;
					*anon35 = anon46;
					uint64_t anon47 = anon45 + 4;
					phi38 = anon47;
					uint32_t* anon48 = (uint32_t*)anon47;
					phi_in32 = anon48;
					phi34 = anon48;
					phi39 = anon46;
				}
				while (*anon35 != 0);
			}
			phi_in27 = phi31 - 1;
			anon50 = phi38 + (anon7 >> 30);
			uint32_t* anon49 = (uint32_t*)anon50;
			phi28 = anon49;
			phi29 = anon50;
			phi30 = anon49;
		}
		while (phi31 != 256);
		*anon8 = anon50;
		uint32_t anon52 = (uint32_t)phi9;
		phi51 = anon52;
		uint64_t phi53 = phi9;
		uint32_t phi54 = anon52;
		uint32_t anon56 = anon52 + 1;
		int64_t anon58 = (__sext int64_t)phi15 << 2;
		uint32_t anon57 = (uint32_t)(anon58 + 4 + arg4 >> 2) & 3;
		uint32_t anon55 = anon52 == 4 | anon56 < 5 | anon56 < anon57 ? anon56 : anon57;
		if (anon55 != 0)
		{
			uint32_t phi60;
			anon59 = (phi14 >> 31) + phi14 >> 1;
			*(uint32_t*)((anon58 & 0xc) + arg4) = (__zext uint32_t)(anon52 < anon59);
			uint32_t anon61 = anon52 - 1;
			phi60 = anon61;
			uint64_t anon63 = phi9 + 4294967295;
			phi62 = anon63 & 0xffffffff;
			uint64_t phi64 = (__zext uint64_t)anon61;
			if (anon55 != 1)
			{
				uint32_t anon66 = (uint32_t)anon63;
				struct { uint32_t field0; bool field1; } anon65 = llvm.ssub.with.overflow.i32(anon59, anon66);
				uint32_t anon67 = anon59 - anon66;
				*(uint32_t*)((anon63 << 32 >> 30) + arg4) = (__zext uint32_t)(anon67 != 0 & !(anon67 < 0 ^ anon65.field1));
				uint32_t anon68 = anon52 - 2;
				phi60 = anon68;
				uint64_t anon69 = phi9 + 4294967294;
				phi62 = anon69 & 0xffffffff;
				phi64 = (__zext uint64_t)anon68;
				if (anon55 != 2)
				{
					uint32_t anon71 = (uint32_t)anon69;
					struct { uint32_t field0; bool field1; } anon70 = llvm.ssub.with.overflow.i32(anon59, anon71);
					uint32_t anon72 = anon59 - anon71;
					*(uint32_t*)((anon69 << 32 >> 30) + arg4) = (__zext uint32_t)(anon72 != 0 & !(anon72 < 0 ^ anon70.field1));
					uint32_t anon73 = anon52 - 3;
					phi60 = anon73;
					uint64_t anon74 = phi9 + 4294967293;
					phi62 = anon74 & 0xffffffff;
					phi64 = (__zext uint64_t)anon73;
					if (anon55 != 3)
					{
						uint32_t anon76 = (uint32_t)anon74;
						struct { uint32_t field0; bool field1; } anon75 = llvm.ssub.with.overflow.i32(anon59, anon76);
						uint32_t anon77 = anon59 - anon76;
						*(uint32_t*)((anon74 << 32 >> 30) + arg4) = (__zext uint32_t)(anon77 != 0 & !(anon77 < 0 ^ anon75.field1));
						uint32_t anon78 = anon52 - 4;
						phi60 = anon78;
						uint64_t anon79 = phi9 + 4294967292;
						phi62 = anon79 & 0xffffffff;
						phi64 = (__zext uint64_t)anon78;
						if (anon55 == 5)
						{
							uint32_t anon81 = (uint32_t)anon79;
							struct { uint32_t field0; bool field1; } anon80 = llvm.ssub.with.overflow.i32(anon59, anon81);
							uint32_t anon82 = anon59 - anon81;
							*(uint32_t*)((anon79 << 32 >> 30) + arg4) = (__zext uint32_t)(anon82 != 0 & !(anon82 < 0 ^ anon80.field1));
							phi60 = anon52 - 5;
							uint64_t anon83 = phi9 + 4294967291 & 0xffffffff;
							phi62 = anon83;
							phi64 = anon83;
						}
					}
				}
			}
			uint32_t phi_in84 = phi60;
			phi53 = phi62;
			phi23 = phi9;
			anon85 = phi10 & 0xffffffff;
			phi24 = anon85;
			phi51 = phi_in84;
			phi54 = (uint32_t)phi64;
		}
		if (anon56 != anon55 && anon55 != 0 || anon55 == 0)
		{
			uint64_t phi89;
			uint32_t phi90;
			uint64_t phi91;
			uint32_t phi92;
			uint32_t anon97;
			uint32_t anon98;
			uint64_t phi_in86 = phi53;
			uint32_t* anon87 = (uint32_t*)(arg1 - 240);
			*anon87 = phi54;
			uint32_t anon88 = anon52 - anon55;
			if (anon88 < 3)
			{
				phi89 = arg4 & 0xf;
				phi90 = (uint32_t)phi_in86;
				phi91 = phi_in86;
				phi92 = *anon87;
			}
			else 
			{
				uint32_t anon96;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon87 = anon59;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in93 = 0;
				do
				{
					uint32_t phi94 = phi_in93;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon95 = phi94 + 1;
					phi_in93 = anon95;
					anon97 = anon56 - anon55;
					anon96 = (uint32_t)(((__zext uint64_t)anon97 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon95 < anon96);
				phi23 = phi9;
				phi24 = anon85;
				anon98 = anon96 << 2;
				if (anon97 != anon98)
				{
					phi89 = arg4;
					uint32_t anon99 = phi51 - anon98;
					phi90 = anon99;
					phi91 = (__zext uint64_t)anon99;
					phi92 = anon99;
				}
			}
			if (anon88 < 3 || anon88 >= 3 && anon97 != anon98)
			{
				struct { uint32_t field0; bool field1; } anon100 = llvm.ssub.with.overflow.i32(anon59, phi92);
				uint32_t anon101 = anon59 - phi92;
				*(uint32_t*)(phi89 + ((__sext int64_t)phi92 << 2)) = (__zext uint32_t)(anon101 != 0 & !(anon101 < 0 ^ anon100.field1));
				phi23 = phi9;
				phi24 = anon85;
				if (phi92 != 0)
				{
					uint32_t anon103 = (uint32_t)(phi91 + 4294967295);
					struct { uint32_t field0; bool field1; } anon102 = llvm.ssub.with.overflow.i32(anon59, anon103);
					uint32_t anon104 = anon59 - anon103;
					*(uint32_t*)(phi89 + ((phi91 << 32) - 4294967296 >> 30)) = (__zext uint32_t)(anon104 != 0 & !(anon104 < 0 ^ anon102.field1));
					phi23 = phi9;
					phi24 = anon85;
					if (anon103 != 0)
					{
						uint32_t anon106 = phi90 - 2;
						struct { uint32_t field0; bool field1; } anon105 = llvm.ssub.with.overflow.i32(anon59, anon106);
						uint32_t anon107 = anon59 - anon106;
						*(uint32_t*)(phi89 + ((__sext int64_t)anon106 << 2)) = (__zext uint32_t)(anon107 != 0 & !(anon107 < 0 ^ anon105.field1));
						phi23 = phi9;
						phi24 = anon85;
					}
				}
			}
		}
	}
	uint64_t* anon108 = (uint64_t*)0x601df8;
	*anon108 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi109;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon110 = anon2 + 1;
		phi109 = (uint32_t)(anon110 + (anon110 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in111 = arg3;
		while (true)
		{
			uint64_t phi114;
			uint64_t phi_in119;
			uint64_t phi120;
			uint32_t phi121;
			uint64_t phi122;
			uint64_t anon174;
			uint32_t anon181;
			uint64_t phi112 = phi_in111;
			*anon8 = phi112;
			if (anon1 != 0)
			{
				uint32_t anon135;
				int64_t anon138;
				uint32_t phi_in139;
				uint32_t phi143;
				uint32_t phi145;
				uint32_t anon151;
				uint32_t* anon154;
				uint64_t phi166;
				uint32_t phi171;
				uint64_t anon173;
				uint32_t phi113 = phi109;
				phi114 = (anon2 - phi23 << 32 >> 30) - 4 + arg4;
				uint64_t anon118 = phi23 << 32;
				uint64_t anon117 = anon118 >> 30;
				uint64_t anon116 = (anon117 & 0xc) + arg4;
				phi115 = anon116;
				phi_in119 = 0;
				phi120 = phi112;
				phi121 = 0;
				phi122 = phi_in119;
				uint64_t phi_in123 = phi120;
				uint32_t* anon124 = (uint32_t*)0x601e00;
				uint32_t anon125 = (uint32_t)phi23;
				*anon124 = anon125;
				uint64_t phi126 = phi_in123;
				uint32_t phi127 = anon1;
				if (anon125 != 0)
				{
					uint32_t anon132;
					do
					{
						uint32_t anon128 = rand();
						uint64_t anon129 = ((__zext uint64_t)(anon128 > 4294967295 ? anon128 : anon128 + 255) << 32 >> 40) % (__sext int64_t)phi127;
						*anon35 = (uint32_t)anon129;
						uint32_t* anon130 = (uint32_t*)0x601e08;
						uint32_t* anon131 = (uint32_t*)(((__sext int64_t)*anon124 << 2) + arg4);
						*anon130 = *anon131;
						*anon131 = *(uint32_t*)((anon129 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon35 << 2) + arg4) = *anon130;
						anon132 = *anon124 - 1;
						*anon124 = anon132;
						phi127 = *anon124;
					}
					while (anon132 != 0);
					phi126 = *anon8;
				}
				uint64_t phi_in133 = phi126;
				uint32_t* anon134 = (uint32_t*)phi114;
				if (*anon134 == 0)
				{
					bool anon146;
					uint64_t anon148;
					uint32_t phi_in149;
					uint64_t phi_in150;
					anon135 = anon1 - 1;
					*anon35 = anon135;
					anon138 = anon2 << 32 >> 30;
					int64_t anon137 = anon138 + arg4;
					phi_in136 = anon137;
					phi_in139 = phi113;
					uint32_t anon140 = anon125 - phi121;
					if (phi113 > anon140)
					{
						uint64_t anon142;
						do
						{
							uint64_t phi141 = phi_in136;
							*anon35 = *anon35 - 1;
							anon142 = phi141 - 4;
							phi_in136 = anon142;
						}
						while (*(uint32_t*)anon142 == 0);
						*anon134 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi_in139 = phi113 - 1;
					}
					else 
					{
						phi143 = phi144;
						phi145 = phi109;
						anon146 = anon1 != 3 | phi109 == 0;
						if (!anon146)
						{
							anon148 = (__zext uint64_t)anon140;
							phi147 = anon148;
							phi_in149 = anon135;
							phi_in150 = anon137;
							phi143 = phi144;
							phi145 = phi109;
						}
					}
					uint64_t phi147 = anon148;
					phi_in149 = anon135;
					phi_in150 = anon137;
					anon151 = phi121 + anon135 - anon125;
					if (phi109 <= anon140 && !anon146 && phi144 == 2 | anon140 == anon151 || phi109 > anon140)
					{
						uint64_t anon153;
						do
						{
							*anon35 = phi_in149;
							uint64_t phi152 = phi_in150;
							phi147 = phi147 & 0xffffffffffffff00 | (__zext uint64_t)(*anon35 == anon151);
							phi_in149 = *anon35 - 1;
							anon153 = phi152 - 4;
							phi_in150 = anon153;
						}
						while (*anon35 == anon151 | *(uint32_t*)anon153 == 0);
						anon154 = (uint32_t*)phi115;
						*anon154 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi143 = phi144 - (__zext uint32_t)(anon140 == anon151);
						phi145 = phi109 - 1;
					}
				}
				else 
				{
					uint64_t phi_in155;
					uint32_t phi_in159;
					uint64_t phi_in161;
					*anon35 = anon135;
					uint64_t anon156 = (arg4 & 0xf) + anon138 - 4;
					phi_in155 = anon156;
					if (phi113 == 0)
					{
						uint32_t* anon158;
						uint32_t* anon162;
						do
						{
							uint64_t phi157 = phi_in155;
							*anon35 = *anon35 - 1;
							phi_in155 = phi157 - 4;
							anon158 = (uint32_t*)phi157;
						}
						while (*anon158 != 0);
						*anon158 = 1;
						*anon134 = 0;
						phi_in139 = phi113;
						do
						{
							*anon35 = phi_in159;
							uint64_t phi160 = phi_in161;
							phi_in159 = *anon35 - 1;
							phi_in161 = phi160 - 4;
							anon162 = (uint32_t*)phi160;
						}
						while (*anon162 != 0 | *anon35 == anon151);
						*anon162 = 1;
						*anon154 = 0;
						phi143 = phi144;
						phi145 = phi109;
					}
					else 
					{
						phi_in139 = phi113 - 1;
						phi143 = phi144;
						phi145 = phi109 - 1;
					}
					phi_in159 = anon135;
					phi_in161 = anon156;
				}
				uint32_t phi144 = phi_in139;
				phi113 = phi143;
				phi109 = phi145;
				uint64_t* anon163 = (uint64_t*)0x601df0;
				*anon163 = arg4;
				*anon35 = anon125;
				uint32_t phi164 = anon125;
				uint64_t phi_in165 = arg4;
				do
				{
					phi166 = phi_in133;
					uint32_t phi_in167 = phi164;
					uint64_t phi168 = phi_in165;
					if (*(uint32_t*)phi168 != 0)
					{
						uint32_t* anon169 = (uint32_t*)phi166;
						uint32_t* anon170 = (uint32_t*)(phi166 + (phi24 << 32 >> 30));
						*anon169 = *anon170;
						*anon170 = *anon169;
						phi_in167 = *anon169;
					}
					phi171 = phi_in167;
					uint32_t anon172 = phi171 - 1;
					*anon35 = anon172;
					phi_in133 = phi166 + 4;
					phi164 = anon172;
					anon173 = phi168 + 4;
					phi_in165 = anon173;
				}
				while (phi171 != 0);
				*anon163 = anon173;
				anon174 = phi166 + 4;
				*anon8 = anon174;
				uint32_t phi175 = anon125;
				uint64_t phi_in176 = phi23 & 0xffffffff;
				uint32_t phi177 = anon125;
				uint32_t anon179 = anon125 + 1;
				uint32_t anon180 = (uint32_t)(anon117 + 4 + arg4 >> 2) & 3;
				uint32_t anon178 = anon179 < 6 ? anon179 : anon179 < anon180 ? anon179 : anon180;
				if (anon178 != 0)
				{
					uint32_t phi184;
					int64_t anon183 = anon20 >> 31;
					int64_t anon182 = anon2 + anon183;
					anon181 = (uint32_t)(anon182 << 32 >> 33) + (uint32_t)anon183 - ((uint32_t)anon182 & 1);
					*(uint32_t*)anon116 = (__zext uint32_t)(anon125 < anon181);
					uint64_t anon186 = phi23 + 4294967295;
					uint32_t anon185 = (uint32_t)anon186;
					phi184 = anon185;
					uint64_t phi187 = anon186;
					uint32_t phi_in188 = anon185;
					if (anon178 != 1)
					{
						*(uint32_t*)((anon118 - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon185 < anon181);
						uint64_t anon190 = phi23 + 4294967294;
						uint32_t anon189 = (uint32_t)anon190;
						phi184 = anon189;
						phi187 = anon190;
						phi_in188 = anon189;
						if (anon178 != 2)
						{
							struct { uint32_t field0; bool field1; } anon191 = llvm.ssub.with.overflow.i32(anon181, anon189);
							uint32_t anon192 = anon181 - anon189;
							*(uint32_t*)((anon118 - 8589934592 >> 30) + arg4) = (__zext uint32_t)(anon192 != 0 & !(anon192 < 0 ^ anon191.field1));
							uint64_t anon194 = phi23 + 4294967293;
							uint32_t anon193 = (uint32_t)anon194;
							phi184 = anon193;
							phi187 = anon194;
							phi_in188 = anon193;
							if (anon178 != 3)
							{
								struct { uint32_t field0; bool field1; } anon195 = llvm.ssub.with.overflow.i32(anon181, anon193);
								uint32_t anon196 = anon181 - anon193;
								*(uint32_t*)((anon118 - 12884901888 >> 30) + arg4) = (__zext uint32_t)(anon196 != 0 & !(anon196 < 0 ^ anon195.field1));
								uint64_t anon198 = phi23 + 4294967292;
								uint32_t anon197 = (uint32_t)anon198;
								phi184 = anon197;
								phi187 = anon198;
								phi_in188 = anon197;
								if (anon178 == 5)
								{
									struct { uint32_t field0; bool field1; } anon199 = llvm.ssub.with.overflow.i32(anon181, anon197);
									uint32_t anon200 = anon181 - anon197;
									*(uint32_t*)((anon118 - 17179869184 >> 30) + arg4) = (__zext uint32_t)(anon200 != 0 & !(anon200 < 0 ^ anon199.field1));
									phi184 = (uint32_t)(phi23 + 4294967291);
									phi187 = phi23 + 4294967291;
									phi_in188 = anon197 - 1;
								}
							}
						}
					}
					uint32_t phi_in201 = phi184;
					phi175 = phi_in201;
					phi_in176 = phi187 & 0xffffffff;
					phi177 = phi_in188;
				}
				if (anon179 != anon178 && anon178 != 0 || anon178 == 0)
				{
					uint32_t phi204;
					uint64_t phi205;
					uint32_t phi206;
					uint32_t anon207;
					uint32_t anon208;
					uint32_t phi202 = phi177;
					uint32_t anon203 = anon125 - anon178;
					if (anon203 < 3)
					{
						phi204 = (uint32_t)phi_in176;
						phi205 = phi_in176;
					}
					else 
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi206 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon208 = anon179 - anon178;
						anon207 = (uint32_t)(((__zext uint64_t)anon208 + 4294967292 >> 2 & 0x3fffffff) + 1) << 2;
						if (anon207 != anon208)
						{
							uint32_t anon209 = phi175 - anon207;
							phi204 = anon209;
							phi205 = (__zext uint64_t)anon209;
							phi202 = anon209;
						}
					}
					(__asm "movdqa xmm0, xmm3")();
					phi206 = phi206 + 1;
					if (anon203 < 3 || anon203 >= 3 && anon207 != anon208)
					{
						*(uint32_t*)(((__sext int64_t)phi202 << 2) + arg4) = (__zext uint32_t)(phi202 < anon181);
						if (phi202 != 0)
						{
							uint32_t anon211 = (uint32_t)(phi205 + 4294967295);
							struct { uint32_t field0; bool field1; } anon210 = llvm.ssub.with.overflow.i32(anon181, anon211);
							uint32_t anon212 = anon181 - anon211;
							*(uint32_t*)(((phi205 << 32) - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon212 != 0 & !(anon212 < 0 ^ anon210.field1));
							if (anon211 != 0)
							{
								uint32_t anon213 = phi204 - 2;
								*(uint32_t*)(((__sext int64_t)anon213 << 2) + arg4) = (__zext uint32_t)(anon213 < anon181);
							}
						}
					}
				}
				phi112 = *anon108;
			}
			uint64_t anon214 = phi112 + *(uint64_t*)(arg1 - 168);
			*anon108 = anon214;
			phi109 = anon181;
			phi_in111 = anon214;
			phi114 = phi114 + 4;
			uint64_t phi115 = phi115 - 4;
			uint64_t anon215 = phi122 + 1;
			phi_in119 = anon215;
			phi120 = anon174;
			phi121 = (uint32_t)anon215;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct x86_regsalloca1;
	struct { uint64_t field0; uint8_t field1[64]; uint64_t field2; } alloca2;
	uint64_t phi19;
	uint32_t phi20;
	uint32_t phi21;
	uint32_t phi22;
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
	uint32_t phi85;
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
		alloca1.field6.field0 = alloca1.field17.field0;
		uint64_t anon17 = alloca1.field17.field0 + 4;
		alloca1.field3.field0 = anon17;
		uint64_t anon18 = (__zext uint64_t)*anon9;
		alloca1.field1.field0 = anon18;
		alloca1.field4.field0 = anon5;
		alloca1.field9.field0 = 4199582;
		alloca1.field17.field0 = alloca1.field17.field0;
		phi19 = anon17;
		phi20 = *anon9;
		phi21 = *anon6;
		phi22 = anon15;
		uint64_t phi23 = alloca1.field17.field0;
		alloca1.field17.field0 = phi19;
		alloca1.field9.field0 = 4199623;
		uint32_t phi24 = phi20;
		if (phi20 == phi22)
		{
			uint32_t anon26 = phi21 - 2;
			uint64_t anon25 = (__zext uint64_t)anon26;
			alloca1.field4.field0 = anon25;
			*anon8 = anon26;
			alloca1.field9.field0 = 4199636;
			if (phi20 != 0)
			{
				alloca1.field1.field0 = anon25;
				alloca1.field9.field0 = 4199640;
				phi24 = anon26;
			}
		}
		if (phi20 != phi22 || phi20 == phi22 && phi20 != 0)
		{
			*(uint32_t*)(alloca1.field17.field0 - 4) = phi24;
			alloca1.field4.field0 = (__zext uint64_t)*anon8;
			alloca1.field6.field0 = alloca1.field17.field0;
			anon27 = alloca1.field17.field0 + 4;
			alloca1.field3.field0 = anon27;
			anon28 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon28;
			*anon8 = anon28;
			alloca1.field9.field0 = 4199613;
			phi23 = alloca1.field17.field0;
		}
		*anon7 = phi23;
		anon30 = (uint32_t)alloca1.field2.field0;
		anon29 = anon30 - 2;
		alloca1.field1.field0 = (__zext uint64_t)anon29;
		*(uint32_t*)(alloca1.field8.field0 + 12) = anon29;
		*anon8 = anon29;
		alloca1.field9.field0 = 4199672;
		alloca1.field7.field0 = anon18;
	}
	if (*anon6 == 0 || *anon6 != 0 && anon29 != 0)
	{
		uint32_t anon40;
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
	alloca1.field4.field0 = (__zext uint64_t)*anon16;
	int64_t anon47 = (__sext int64_t)phi41;
	alloca1.field1.field0 = anon47;
	alloca1.field16.field0 = (__zext uint64_t)(phi41 * phi41);
	uint64_t anon48 = alloca1.field14.field0 << 2;
	alloca1.field14.field0 = anon48;
	alloca1.field10.field0 = 0;
	*(uint32_t*)(phi46 + ((__zext uint64_t)phi41 << 2) - 4) = *anon16;
	alloca1.field9.field0 = 4199804;
	alloca1.field1.field0 = *phi45;
	*anon36 = 0;
	*anon8 = 0;
	uint64_t* anon49 = (uint64_t*)0x601e10;
	*anon49 = *phi45;
	alloca1.field9.field0 = 4199834;
	alloca1.field6.field0 = *phi45;
	uint64_t phi50 = *phi45;
	uint32_t phi_in51 = 0;
	alloca1.field9.field0 = 4199836;
	do
	{
		uint32_t phi70;
		uint64_t phi_in52 = phi50;
		uint64_t phi53 = phi_in52;
		uint32_t phi54 = phi_in51;
		uint64_t phi55 = phi53;
		alloca1.field9.field0 = 4199935;
		alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(phi42 + 12);
		*anon49 = phi55;
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
		*anon8 = *(uint32_t*)(phi42 + 12);
		alloca1.field9.field0 = 4199959;
		uint32_t phi56 = *anon9;
		uint64_t* phi57 = (uint64_t*)phi42;
		if (*(uint32_t*)(phi42 + 12) != 0)
		{
			uint32_t anon65;
			alloca1.field9.field0 = 4199968;
			do
			{
				alloca1.field9.field0 = 4199973;
				uint32_t anon58 = rand();
				uint64_t anon59 = (__zext uint64_t)anon58;
				alloca1.field1.field0 = anon59;
				alloca1.field4.field0 = anon59 + 255 & 0xffffffff;
				alloca1.field9.field0 = 4199984;
				uint32_t phi60 = anon58;
				if (anon58 <= 4294967295)
				{
					uint32_t anon61 = anon58 + 255;
					alloca1.field1.field0 = (__zext uint64_t)anon61;
					phi60 = anon61;
				}
				uint64_t anon62 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
				alloca1.field3.field0 = anon62;
				uint64_t anon63 = ((__zext uint64_t)phi60 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
				*anon36 = (uint32_t)anon63;
				uint32_t* anon64 = (uint32_t*)anon62;
				*anon38 = *anon64;
				*anon64 = *(uint32_t*)(alloca1.field17.field0 + (anon63 << 32 >> 30));
				alloca1.field4.field0 = (__zext uint64_t)*anon38;
				*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon36 << 2)) = *anon38;
				alloca1.field7.field0 = (__zext uint64_t)*anon8;
				anon65 = *anon8 - 1;
				alloca1.field1.field0 = (__zext uint64_t)anon65;
				*anon8 = anon65;
				alloca1.field9.field0 = 4200060;
			}
			while (anon65 != 0);
			phi56 = *anon9;
			phi57 = *phi44;
		}
		*anon36 = phi56;
		alloca1.field1.field0 = (__zext uint64_t)((uint32_t)alloca1.field2.field0 + 1 - *anon14);
		alloca1.field9.field0 = 4200073;
		alloca1.field7.field0 = *phi57;
		*anon8 = 0;
		alloca1.field10.field0 = 0;
		alloca1.field9.field0 = 4200100;
		*anon49 = *phi57;
		alloca1.field9.field0 = 4200106;
		uint64_t phi66 = 8;
		uint64_t phi67 = 2099034;
		uint64_t phi68 = 4200108;
		do
		{
			*(uint32_t*)(alloca1.field9.field0 + phi67) = *(uint32_t*)&((uint8_t*)&alloca1)[phi66];
			alloca1.field9.field0 = phi68;
			uint32_t phi_in69 = *(uint32_t*)&alloca1.field10.field0;
			phi70 = phi_in69;
			alloca1.field9.field0 = 4200200;
			if (*(uint32_t*)&alloca1.field16.field0 > phi70)
			{
				uint32_t* anon71 = (uint32_t*)(alloca1.field7.field0 + ((__sext int64_t)phi70 << 2));
				uint32_t anon72 = *anon71 + *anon14 * *(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon36 << 2));
				*anon71 = anon72;
				uint64_t anon73 = (__zext uint64_t)anon72;
				alloca1.field6.field0 = anon73;
				alloca1.field10.field0 = (__zext uint64_t)anon72 + 1 & 0xffffffff;
				uint32_t anon74 = anon72 + 1;
				alloca1.field3.field0 = (__zext uint64_t)anon74;
				*anon36 = anon74;
				uint32_t anon75 = anon72 + 1;
				*anon8 = anon75;
				int64_t anon76 = (__sext int64_t)anon75;
				int64_t anon77 = (__sext int64_t)*(uint32_t*)&((uint8_t*)&alloca1)[phi66];
				alloca1.field1.field0 = anon76 / anon77 & 0xffffffff;
				int64_t anon78 = anon76 % anon77;
				alloca1.field4.field0 = anon78 & 0xffffffff;
				alloca1.field9.field0 = 4200180;
				uint32_t phi79 = anon74;
				if ((uint32_t)anon78 == 0)
				{
					*anon36 = anon72;
					alloca1.field7.field0 = alloca1.field7.field0 + alloca1.field14.field0;
					alloca1.field9.field0 = 4200191;
					alloca1.field3.field0 = anon73;
					phi79 = anon72;
				}
				alloca1.field9.field0 = 4200195;
				phi_in69 = anon75;
				if (phi79 >= *(uint32_t*)&((uint8_t*)&alloca1)[phi66])
				{
					alloca1.field9.field0 = 4200242;
					alloca1.field3.field0 = (__zext uint64_t)(phi79 - *(uint32_t*)&((uint8_t*)&alloca1)[phi66]);
					alloca1.field9.field0 = 4200248;
					phi66 = 24;
					phi67 = 2098868;
					phi68 = 4200250;
				}
			}
		}
		while (*(uint32_t*)&alloca1.field16.field0 > phi70);
		uint32_t anon80 = *anon14 * *(uint32_t*)(phi46 + ((__sext int64_t)*anon36 << 2));
		*(uint32_t*)(phi55 + ((__sext int64_t)phi54 << 2)) = anon80;
		alloca1.field11.field0 = (__zext uint64_t)anon80;
		alloca1.field10.field0 = (__zext uint64_t)anon80 + 1 & 0xffffffff;
		uint32_t anon81 = anon80 + 1;
		alloca1.field3.field0 = (__zext uint64_t)anon81;
		uint32_t anon82 = anon80 + 1;
		*anon8 = anon82;
		*anon36 = anon81;
		int64_t anon83 = (__sext int64_t)anon82;
		alloca1.field1.field0 = anon83 / anon47 & 0xffffffff;
		int64_t anon84 = anon83 % anon47;
		alloca1.field4.field0 = anon84 & 0xffffffff;
		alloca1.field9.field0 = 4199909;
		phi85 = anon81;
		if ((uint32_t)anon84 == 0)
		{
			uint32_t anon86 = anon80 + 2;
			alloca1.field3.field0 = (__zext uint64_t)anon86;
			uint64_t anon87 = phi55 + anon48;
			alloca1.field6.field0 = anon87;
			alloca1.field9.field0 = 4199922;
			*anon36 = anon86;
			phi55 = anon87;
			phi85 = anon86;
		}
		alloca1.field9.field0 = 4199930;
		phi53 = phi55;
		phi54 = anon82;
		if (phi85 >= phi41)
		{
			uint32_t anon88 = phi85 - phi41;
			alloca1.field3.field0 = (__zext uint64_t)anon88;
			alloca1.field9.field0 = 4200232;
			*anon36 = anon88;
			phi50 = phi55;
			phi_in51 = anon82;
			alloca1.field9.field0 = 4200237;
		}
	}
	while (phi85 >= phi41);
	alloca1.field9.field0 = 4199619;
	alloca1.field5.field0 = (__zext uint64_t)anon28;
	phi19 = anon27;
	phi20 = anon28;
	phi21 = *anon8;
	phi22 = anon28;
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
