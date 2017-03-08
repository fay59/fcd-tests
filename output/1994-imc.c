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
	llvm.trap();
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
		uint32_t anon32;
		uint64_t anon40;
		uint32_t phi22 = anon19;
		uint32_t phi23 = *anon8;
		uint64_t phi24 = *anon7;
		uint64_t phi25 = anon20;
		do
		{
			uint64_t phi30;
			uint32_t phi_in26 = phi22;
			uint64_t phi_in27 = phi24;
			anon28 = (uint32_t*)0x601dec;
			*anon28 = (uint32_t)(arg1 + 4294967295);
			if (anon9 == 0)
			{
				phi29 = phi25 & 0xffffffff;
				phi30 = phi_in27;
			}
			else 
			{
				uint32_t phi31;
				uint64_t anon37;
				anon32 = anon9 - 1;
				phi31 = anon32;
				uint32_t phi33 = phi_in26;
				uint32_t phi34 = phi23 - 1;
				do
				{
					uint64_t phi35 = phi_in27;
					*(uint32_t*)phi35 = *(uint32_t*)(((__sext int64_t)(phi31 ^ *anon16 & phi33 ^ (uint32_t)((__zext uint64_t)((phi34 >> 31) + phi34) << 32 >> 33)) << 2) + arg3);
					uint32_t anon36 = *anon28 - 1;
					*anon28 = anon36;
					phi31 = anon36;
					phi33 = *anon8;
					phi34 = *anon8;
					anon37 = phi35 + 4;
					phi_in27 = anon37;
				}
				while (*anon28 != 0);
				phi29 = (__zext uint64_t)*anon8;
				phi30 = anon37;
			}
			uint64_t anon39 = phi29 + 4294967295;
			uint32_t anon38 = (uint32_t)anon39;
			*anon8 = anon38;
			phi22 = anon38;
			phi23 = (uint32_t)phi29;
			anon40 = phi30 + (arg4 << 32 >> 30);
			phi24 = anon40;
			phi25 = anon39 & 0xffffffff;
		}
		while (phi29 != 0);
		*anon7 = anon40;
		phi21 = anon32;
	}
	*anon28 = phi21;
	uint32_t anon41 = rand();
	uint32_t anon42 = (uint32_t)(((__zext uint64_t)(anon41 > 4294967295 ? anon41 : anon41 + 255) << 32 >> 40) % anon4);
	*anon2 = anon42;
	*anon5 = 3 - anon42;
	uint32_t anon43 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon28;
	uint64_t anon46 = (__zext uint64_t)(anon43 > 4294967295 ? anon43 : anon43 + 255);
	uint64_t anon45 = anon46 >> 31;
	uint32_t anon44 = *(uint32_t*)(((__zext uint64_t)(anon45 != 0 ^ (anon46 & 0x100) != 0) - anon45 << 2) + arg3) ^ 1;
	*anon10 = anon44;
	*anon14 = 3 - anon44;
	if (anon9 != 0)
	{
		uint64_t anon56;
		uint32_t phi47 = *anon28;
		uint64_t phi_in48 = arg2;
		do
		{
			uint64_t anon54;
			uint32_t phi49 = phi47;
			uint32_t phi50 = *anon28;
			do
			{
				uint64_t phi51 = phi_in48;
				uint32_t* anon52 = (uint32_t*)phi51;
				*anon52 = *anon52 + (*(uint32_t*)(((__sext int64_t)(phi50 ^ (phi49 >> 31) + phi49 >> 1 ^ *anon16 & phi49) << 2) + arg3) << 2);
				uint32_t anon53 = *anon28 - 1;
				*anon28 = anon53;
				phi50 = anon53;
				phi49 = *anon8;
				anon54 = phi51 + 4;
				phi_in48 = anon54;
			}
			while (*anon28 != 0);
			uint32_t anon55 = *anon8 - 1;
			*anon8 = anon55;
			phi47 = anon55;
			anon56 = anon54 + (arg4 << 32 >> 30);
			phi_in48 = anon56;
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
	uint32_t phi15;
	uint32_t phi16;
	uint64_t phi17;
	uint32_t phi24;
	uint64_t phi25;
	uint32_t* anon35;
	uint64_t phi60;
	uint64_t phi_in135;
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
		phi15 = 3;
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
			phi15 = anon1 - 1;
			phi16 = anon1;
			phi17 = anon26;
		}
	}
	if (anon1 == 4 || anon1 != 4 && anon1 != 0)
	{
		uint32_t phi32;
		uint64_t anon48;
		uint64_t phi_in50;
		uint32_t anon57;
		uint64_t anon84;
		phi24 = phi10;
		uint32_t phi_in28 = phi15;
		uint32_t* phi29 = (uint32_t*)arg3;
		uint64_t phi30 = arg3;
		uint32_t* phi_in31 = (uint32_t*)arg3;
		do
		{
			phi32 = phi_in28;
			uint32_t* phi_in33 = phi29;
			uint64_t phi_in34 = phi30;
			anon35 = (uint32_t*)0x601dec;
			uint32_t anon37 = (uint32_t)anon13;
			uint32_t anon36 = anon37 - 1;
			*anon35 = anon36;
			uint64_t phi38 = phi_in34;
			uint32_t* phi39 = phi_in31;
			uint32_t phi40 = anon36;
			if (anon37 != 0)
			{
				do
				{
					uint32_t* phi41 = phi_in33;
					uint64_t phi42 = 3;
					if (anon1 > phi40)
					{
						*phi39 = *phi39 + (phi16 * phi16 << 1);
						phi42 = ((__zext uint64_t)(anon1 <= *anon35) << 2) + 4294967295 & 0xffffffff;
					}
					uint64_t anon43 = (uint64_t)phi41;
					*(uint32_t*)(anon43 + (phi17 << 32 >> 30)) = (uint32_t)(phi42 * anon2) * anon1 + *phi41;
					uint32_t anon44 = *anon35 - 1;
					*anon35 = anon44;
					uint64_t anon45 = anon43 + 4;
					phi38 = anon45;
					uint32_t* anon46 = (uint32_t*)anon45;
					phi_in33 = anon46;
					phi39 = anon46;
					phi40 = anon44;
				}
				while (*anon35 != 0);
			}
			phi_in28 = phi32 - 1;
			anon48 = phi38 + (anon8 >> 30);
			uint32_t* anon47 = (uint32_t*)anon48;
			phi29 = anon47;
			phi30 = anon48;
			phi_in31 = anon47;
		}
		while (phi32 != 256);
		*anon9 = anon48;
		uint32_t phi49 = phi24;
		uint64_t anon51 = (__zext uint64_t)phi24;
		phi_in50 = anon51;
		uint64_t phi52 = anon51;
		uint32_t anon54 = phi24 + 1;
		int64_t anon56 = (__sext int64_t)phi24 << 2;
		uint32_t anon55 = (uint32_t)(anon56 + 4 + arg4 >> 2) & 3;
		uint32_t anon53 = phi24 == 4 | anon54 < 5 | anon54 < anon55 ? anon54 : anon55;
		if (anon53 != 0)
		{
			uint32_t phi_in58;
			anon57 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)((anon56 & 0xc) + arg4) = (__zext uint32_t)(phi24 < anon57);
			uint32_t anon59 = phi24 - 1;
			phi_in58 = anon59;
			uint64_t anon61 = anon51 + 4294967295;
			phi60 = anon61 & 0xffffffff;
			uint64_t phi62 = (__zext uint64_t)anon59;
			if (anon53 != 1)
			{
				uint32_t anon64 = (uint32_t)anon61;
				struct { uint32_t field0; bool field1; } anon63 = llvm.ssub.with.overflow.i32(anon57, anon64);
				uint32_t anon65 = anon57 - anon64;
				*(uint32_t*)((anon61 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon65 < 0 ^ anon63.field1) ^ 1) & (__zext uint32_t)(anon65 != 0);
				uint32_t anon66 = phi24 - 2;
				phi_in58 = anon66;
				uint64_t anon67 = anon51 + 4294967294;
				phi60 = anon67 & 0xffffffff;
				phi62 = (__zext uint64_t)anon66;
				if (anon53 != 2)
				{
					uint32_t anon69 = (uint32_t)anon67;
					struct { uint32_t field0; bool field1; } anon68 = llvm.ssub.with.overflow.i32(anon57, anon69);
					uint32_t anon70 = anon57 - anon69;
					*(uint32_t*)((anon67 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon70 < 0 ^ anon68.field1) ^ 1) & (__zext uint32_t)(anon70 != 0);
					uint32_t anon71 = phi24 - 3;
					phi_in58 = anon71;
					uint64_t anon72 = anon51 + 4294967293;
					phi60 = anon72 & 0xffffffff;
					phi62 = (__zext uint64_t)anon71;
					if (anon53 != 3)
					{
						uint32_t anon74 = (uint32_t)anon72;
						struct { uint32_t field0; bool field1; } anon73 = llvm.ssub.with.overflow.i32(anon57, anon74);
						uint32_t anon75 = anon57 - anon74;
						*(uint32_t*)((anon72 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon75 < 0 ^ anon73.field1) ^ 1) & (__zext uint32_t)(anon75 != 0);
						uint32_t anon76 = phi24 - 4;
						phi_in58 = anon76;
						uint64_t anon77 = anon51 + 4294967292;
						phi60 = anon77 & 0xffffffff;
						phi62 = (__zext uint64_t)anon76;
						if (anon53 == 5)
						{
							uint32_t anon79 = (uint32_t)anon77;
							struct { uint32_t field0; bool field1; } anon78 = llvm.ssub.with.overflow.i32(anon57, anon79);
							uint32_t anon80 = anon57 - anon79;
							*(uint32_t*)((anon77 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon80 < 0 ^ anon78.field1) ^ 1) & (__zext uint32_t)(anon80 != 0);
							phi_in58 = phi24 - 5;
							uint64_t anon81 = anon51 + 4294967291 & 0xffffffff;
							phi60 = anon81;
							phi62 = anon81;
						}
					}
				}
			}
			uint64_t phi_in82 = phi60;
			uint64_t phi_in83 = phi62;
			anon84 = phi11 & 0xffffffff;
			phi25 = anon84;
			phi49 = phi_in58;
			phi_in50 = phi_in82;
			phi52 = phi_in83;
		}
		if (anon54 != anon53 && anon53 != 0 || anon53 == 0)
		{
			uint32_t phi87;
			uint32_t anon95;
			uint32_t anon96;
			uint64_t phi85 = arg4 & 0xf;
			uint64_t phi86 = phi_in50;
			uint32_t anon88 = (uint32_t)phi52;
			phi87 = anon88;
			uint32_t anon89 = phi24 - anon53;
			if (anon89 >= 3)
			{
				uint64_t anon94;
				uint32_t* anon90 = (uint32_t*)(arg1 - 240);
				*anon90 = anon88;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon90 = anon57;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in91 = 0;
				do
				{
					uint32_t phi92 = phi_in91;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon93 = phi92 + 1;
					phi_in91 = anon93;
					anon95 = anon54 - anon53;
					anon94 = ((__zext uint64_t)anon95 + 4294967292 >> 2 & 0x3fffffff) + 1;
				}
				while (anon93 < (uint32_t)anon94);
				phi25 = anon84;
				anon96 = (uint32_t)(anon94 << 2);
				if (anon95 != anon96)
				{
					phi85 = arg4;
					uint32_t anon97 = phi49 - anon96;
					phi86 = (__zext uint64_t)anon97;
					phi87 = anon97;
				}
			}
			if (anon89 >= 3 && anon95 != anon96 || anon89 < 3)
			{
				struct { uint32_t field0; bool field1; } anon98 = llvm.ssub.with.overflow.i32(anon57, phi87);
				uint32_t anon99 = anon57 - phi87;
				*(uint32_t*)(phi85 + ((__sext int64_t)phi87 << 2)) = ((__zext uint32_t)(anon99 < 0 ^ anon98.field1) ^ 1) & (__zext uint32_t)(anon99 != 0);
				phi25 = anon84;
				if (phi87 != 0)
				{
					uint32_t anon101 = (uint32_t)(phi86 + 4294967295);
					struct { uint32_t field0; bool field1; } anon100 = llvm.ssub.with.overflow.i32(anon57, anon101);
					uint64_t anon102 = phi86 << 32;
					uint32_t anon103 = anon57 - anon101;
					*(uint32_t*)(phi85 + (anon102 - 4294967296 >> 30)) = ((__zext uint32_t)(anon103 < 0 ^ anon100.field1) ^ 1) & (__zext uint32_t)(anon103 != 0);
					phi25 = anon84;
					if (anon101 != 0)
					{
						uint32_t anon105 = (uint32_t)(phi86 + 4294967294);
						struct { uint32_t field0; bool field1; } anon104 = llvm.ssub.with.overflow.i32(anon57, anon105);
						uint32_t anon106 = anon57 - anon105;
						*(uint32_t*)(phi85 + (anon102 - 8589934592 >> 30)) = ((__zext uint32_t)(anon106 < 0 ^ anon104.field1) ^ 1) & (__zext uint32_t)(anon106 != 0);
						phi25 = anon84;
					}
				}
			}
		}
	}
	*anon35 = phi24;
	uint64_t* anon107 = (uint64_t*)0x601df8;
	*anon107 = arg3;
	if ((anon14 >> 30) + arg3 > arg3)
	{
		uint32_t phi108;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon109 = anon2 + 1;
		phi108 = (uint32_t)(anon109 + (anon109 >> 31 & 1) << 32 >> 33);
		uint64_t phi110 = arg3;
		while (true)
		{
			uint64_t phi122;
			uint64_t anon148;
			uint64_t anon172;
			uint32_t anon178;
			uint32_t phi196;
			uint32_t phi111 = phi108;
			uint64_t phi112 = phi110;
			*anon9 = phi112;
			uint64_t phi113 = phi112;
			uint32_t phi114 = phi111;
			uint64_t anon116 = (__zext uint64_t)*anon35;
			phi115 = (anon2 - anon116 << 32 >> 30) - 4 + arg4;
			int64_t anon119 = (__sext int64_t)*anon35 << 2;
			int64_t anon118 = (anon119 & 0xc) + arg4;
			phi117 = anon118;
			uint64_t phi_in120 = 0;
			uint32_t phi121 = 0;
			if (anon1 != 0)
			{
				uint32_t anon134;
				int64_t anon136;
				int64_t anon137;
				uint32_t phi138;
				uint32_t anon139;
				uint64_t anon144;
				uint32_t anon154;
				uint64_t phi164;
				uint32_t phi169;
				uint64_t anon171;
				phi122 = phi_in120;
				uint64_t phi_in123 = phi112;
				uint32_t* anon124 = (uint32_t*)0x601e00;
				*anon124 = *anon35;
				uint32_t phi125 = phi121;
				uint32_t phi_in126 = anon1;
				if (*anon35 != 0)
				{
					uint64_t anon129;
					uint32_t anon131;
					do
					{
						uint32_t phi127 = phi_in126;
						uint32_t anon128 = rand();
						anon129 = ((__zext uint64_t)(anon128 > 4294967295 ? anon128 : anon128 + 255) << 32 >> 40) % (__sext int64_t)phi127;
						*anon35 = (uint32_t)anon129;
						uint32_t* anon130 = (uint32_t*)(((__sext int64_t)*anon124 << 2) + arg4);
						*(uint32_t*)0x601e08 = *anon130;
						*anon130 = *(uint32_t*)((anon129 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon35 << 2) + arg4) = *anon130;
						anon131 = *anon124 - 1;
						*anon124 = anon131;
						phi_in126 = *anon124;
					}
					while (anon131 != 0);
					phi125 = *(uint32_t*)((anon129 << 32 >> 30) + arg4);
					phi_in123 = *anon9;
				}
				uint32_t* anon132 = (uint32_t*)phi115;
				if (*anon132 == 0)
				{
					uint32_t phi_in133;
					anon134 = anon1 - 1;
					phi_in133 = anon134;
					anon137 = anon2 << 32 >> 30;
					anon136 = anon137 + arg4;
					phi_in135 = anon136;
					phi138 = phi111;
					anon139 = *anon35 - phi121;
					if (phi111 > anon139)
					{
						uint64_t anon141;
						do
						{
							*anon35 = phi_in133;
							uint64_t phi140 = phi_in135;
							phi_in133 = *anon35 - 1;
							anon141 = phi140 - 4;
							phi_in135 = anon141;
						}
						while (*(uint32_t*)anon141 == 0);
						*anon132 = 1;
						*(uint32_t*)(((__sext int64_t)*anon35 << 2) + arg4) = 0;
						phi138 = phi111 - 1;
					}
				}
				else 
				{
					uint64_t phi_in143;
					uint32_t phi142 = anon134;
					anon144 = (arg4 & 0xf) + anon137 - 4;
					phi_in143 = anon144;
					if (phi111 == 0)
					{
						uint32_t* anon146;
						do
						{
							*anon35 = phi142;
							uint64_t phi145 = phi_in143;
							phi142 = *anon35 - 1;
							phi_in143 = phi145 - 4;
							anon146 = (uint32_t*)phi145;
						}
						while (*anon146 != 0);
						*anon146 = 1;
						*anon132 = 0;
						phi138 = phi111;
					}
					else 
					{
						phi138 = phi111 - 1;
					}
				}
				anon148 = phi117 & 0xffffffff00000000 | phi117 & 0xffffffff;
				uint32_t* anon147 = (uint32_t*)anon148;
				if (*anon147 == 0)
				{
					uint64_t phi149;
					bool anon153;
					uint64_t anon150 = (__zext uint64_t)anon139;
					phi149 = anon150;
					uint32_t phi_in151 = anon134;
					uint64_t phi_in152 = anon136;
					if (phi114 <= anon139)
					{
						phi111 = phi138;
						phi114 = phi114;
						anon153 = anon1 != 3 | phi114 == 0;
						if (!anon153)
						{
							phi149 = anon150;
							phi_in151 = anon134;
							phi_in152 = anon136;
							phi111 = phi138;
							phi114 = phi114;
						}
					}
					anon154 = phi125 + anon134 - *anon35;
					if (phi114 > anon139 || !anon153 && phi114 <= anon139 && phi138 == 2 | anon139 == anon154)
					{
						uint64_t anon156;
						do
						{
							*anon35 = phi_in151;
							uint64_t phi155 = phi_in152;
							phi149 = phi149 & 0xffffffffffffff00 | (__zext uint64_t)(*anon35 == anon154);
							phi_in151 = *anon35 - 1;
							anon156 = phi155 - 4;
							phi_in152 = anon156;
						}
						while (((__zext uint8_t)(*anon35 == anon154) | (__zext uint8_t)(*(uint32_t*)anon156 == 0)) == 1);
						*anon147 = 1;
						*(uint32_t*)(((__sext int64_t)*anon35 << 2) + arg4) = 0;
						phi111 = phi138 - (__zext uint32_t)(anon139 == anon154);
						phi114 = phi114 - 1;
					}
				}
				else 
				{
					uint32_t phi_in157 = anon134;
					uint64_t phi_in158 = anon144;
					if (phi114 == 0)
					{
						uint32_t* anon160;
						do
						{
							*anon35 = phi_in157;
							uint64_t phi159 = phi_in158;
							phi_in157 = *anon35 - 1;
							phi_in158 = phi159 - 4;
							anon160 = (uint32_t*)phi159;
						}
						while (*anon160 != 0 | *anon35 == anon154);
						*anon160 = 1;
						*anon147 = 0;
						phi111 = phi138;
						phi114 = phi114;
					}
					else 
					{
						phi111 = phi138;
						phi114 = phi114 - 1;
					}
				}
				uint64_t* anon161 = (uint64_t*)0x601df0;
				*anon161 = arg4;
				uint32_t phi162 = *anon35;
				uint64_t phi_in163 = arg4;
				do
				{
					phi164 = phi_in123;
					uint32_t phi_in165 = phi162;
					uint64_t phi166 = phi_in163;
					if (*(uint32_t*)phi166 != 0)
					{
						uint32_t* anon167 = (uint32_t*)phi164;
						uint32_t* anon168 = (uint32_t*)(phi164 + (phi25 << 32 >> 30));
						*anon167 = *anon168;
						*anon168 = *anon167;
						phi_in165 = *anon168;
					}
					phi169 = phi_in165;
					uint32_t anon170 = phi169 - 1;
					*anon35 = anon170;
					phi_in123 = phi164 + 4;
					phi162 = anon170;
					anon171 = phi166 + 4;
					phi_in163 = anon171;
				}
				while (phi169 != 0);
				*anon161 = anon171;
				anon172 = phi164 + 4;
				*anon9 = anon172;
				uint32_t phi173 = *anon35;
				uint64_t phi174 = anon116;
				uint32_t anon176 = *anon35 + 1;
				uint32_t anon177 = (uint32_t)(anon119 + 4 + arg4 >> 2) & 3;
				uint32_t anon175 = anon176 > 5 ? anon176 < anon177 ? anon176 : anon177 : anon176;
				if (anon175 != 0)
				{
					uint32_t anon181;
					uint64_t phi_in182;
					int64_t anon180 = anon3 >> 32;
					int64_t anon179 = anon180 & 1;
					anon178 = (uint32_t)(anon2 + anon179 << 32 >> 33) + (uint32_t)anon179 - ((uint32_t)(anon2 + anon180) & 1);
					*(uint32_t*)anon118 = (__zext uint32_t)(*anon35 < anon178);
					if (anon175 == 1)
					{
						anon181 = *anon35 - 1;
						phi173 = anon181;
						phi_in182 = (__zext uint64_t)anon181;
					}
					else 
					{
						uint32_t anon183;
						*(uint32_t*)(((__zext uint64_t)anon181 << 32 >> 30) + arg4) = (__zext uint32_t)(anon181 < anon178);
						if (anon175 == 2)
						{
							anon183 = *anon35 - 2;
							phi173 = anon183;
							phi_in182 = (__zext uint64_t)anon183;
						}
						else 
						{
							uint32_t anon186;
							struct { uint32_t field0; bool field1; } anon184 = llvm.ssub.with.overflow.i32(anon178, anon183);
							uint32_t anon185 = anon178 - anon183;
							*(uint32_t*)(((__zext uint64_t)anon183 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon185 < 0 ^ anon184.field1) ^ 1) & (__zext uint32_t)(anon185 != 0);
							if (anon175 == 3)
							{
								anon186 = *anon35 - 3;
								phi173 = anon186;
								phi_in182 = (__zext uint64_t)anon186;
							}
							else 
							{
								struct { uint32_t field0; bool field1; } anon187 = llvm.ssub.with.overflow.i32(anon178, anon186);
								uint32_t anon188 = anon178 - anon186;
								*(uint32_t*)(((__zext uint64_t)anon186 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon188 < 0 ^ anon187.field1) ^ 1) & (__zext uint32_t)(anon188 != 0);
								uint32_t anon189 = *anon35 - 4;
								phi173 = anon189;
								uint64_t anon190 = (__zext uint64_t)anon189;
								phi_in182 = anon190;
								if (anon175 == 5)
								{
									struct { uint32_t field0; bool field1; } anon191 = llvm.ssub.with.overflow.i32(anon178, anon189);
									uint32_t anon192 = anon178 - anon189;
									*(uint32_t*)(((__zext uint64_t)anon189 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon192 < 0 ^ anon191.field1) ^ 1) & (__zext uint32_t)(anon192 != 0);
									uint64_t anon193 = anon190 + 4294967295;
									phi173 = (uint32_t)anon193;
									phi_in182 = anon193 & 0xffffffff;
								}
							}
						}
					}
					phi174 = phi_in182;
				}
				if (anon176 != anon175 && anon175 != 0 || anon175 == 0)
				{
					uint32_t anon198;
					uint32_t anon199;
					uint32_t phi194 = phi173;
					uint32_t anon195 = *anon35 - anon175;
					if (anon195 >= 3)
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi196 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon199 = anon176 - anon175;
						anon198 = (uint32_t)(((__zext uint64_t)anon199 + 4294967292 >> 2 & 0x3fffffff) + 1 << 2);
						uint32_t anon197 = phi173 - anon198;
						phi174 = (__zext uint64_t)anon197;
						phi194 = anon197;
					}
					if (anon198 != anon199 && anon195 >= 3 || anon195 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi194 << 2) + arg4) = (__zext uint32_t)(phi194 < anon178);
						if (phi194 != 0)
						{
							uint32_t anon201 = (uint32_t)(phi174 + 4294967295);
							struct { uint32_t field0; bool field1; } anon200 = llvm.ssub.with.overflow.i32(anon178, anon201);
							uint64_t anon202 = phi174 << 32;
							uint32_t anon203 = anon178 - anon201;
							*(uint32_t*)((anon202 - 4294967296 >> 30) + arg4) = ((__zext uint32_t)(anon203 < 0 ^ anon200.field1) ^ 1) & (__zext uint32_t)(anon203 != 0);
							if (anon201 != 0)
							{
								*(uint32_t*)((anon202 - 8589934592 >> 30) + arg4) = (__zext uint32_t)((uint32_t)(phi174 + 4294967294) < anon178);
							}
						}
					}
				}
				phi113 = *anon107;
			}
			uint64_t anon204 = phi113 + *(uint64_t*)(arg1 - 168);
			*anon107 = anon204;
			phi108 = anon178;
			phi110 = anon204;
			(__asm "movdqa xmm0, xmm3")();
			phi196 = phi196 + 1;
			uint64_t phi115 = phi115 + 4;
			uint64_t phi117 = anon148 - 4;
			uint64_t anon205 = phi122 + 1;
			phi_in120 = anon205;
			phi112 = anon172;
			phi121 = (uint32_t)anon205;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct { uint64_t field0; uint8_t field1[4]; uint32_t field2; uint8_t field3[56]; uint64_t field4; } alloca1;
	uint32_t anon22;
	uint64_t phi23;
	uint64_t* phi24;
	uint32_t* anon27;
	uint32_t* anon29;
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
		uint64_t phi19;
		while (true)
		{
			uint32_t phi17 = phi14;
			if (phi14 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon4 = anon18;
				phi19 = phi13;
				phi17 = anon18;
				if (phi14 == 0)
				{
					break;
				}
			}
			if (phi14 != phi16 || phi14 != 0 && phi14 == phi16)
			{
				*(uint32_t*)phi13 = phi17;
				uint32_t anon20 = *anon4 - 1;
				*anon4 = anon20;
				uint64_t anon21 = phi13 + 4;
				phi19 = anon21;
				phi13 = anon21;
				phi14 = anon20;
				phi15 = *anon4;
				phi16 = anon20;
				if (*anon4 == 0)
				{
					break;
				}
			}
		}
		*anon3 = phi19;
		anon22 = anon10 - 2;
		*(uint32_t*)(arg1 - 68) = anon22;
		*anon4 = anon22;
		phi23 = arg2 & 0xffffffff;
		phi24 = &alloca1.field0;
	}
	if (anon10 == 0 || anon10 != 0 && anon22 != 0)
	{
		uint32_t anon31;
		uint64_t phi25 = anon6 & 0xffffffff;
		do
		{
			uint32_t anon26 = rand();
			anon27 = (uint32_t*)0x601dec;
			uint64_t anon28 = ((__zext uint64_t)(anon26 > 4294967295 ? anon26 : anon26 + 255) << 32 >> 40) % (phi25 << 32 >> 32);
			*anon27 = (uint32_t)anon28;
			anon29 = (uint32_t*)0x601e08;
			uint32_t* anon30 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
			*anon29 = *anon30;
			*anon30 = *(uint32_t*)((anon28 << 32 >> 30) + arg4);
			*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon30;
			anon31 = *anon4 - 1;
			*anon4 = anon31;
			phi23 = arg2;
			phi24 = &alloca1.field0;
			phi25 = (__zext uint64_t)*anon4;
		}
		while (anon31 != 0);
	}
	*(uint32_t*)((phi23 << 2 & 0x3fffffffc) - 4 + arg4) = *anon11;
	*anon27 = 0;
	*anon4 = 0;
	uint64_t* anon32 = (uint64_t*)0x601e10;
	*anon32 = *phi24;
	uint32_t phi_in33 = 0;
	uint64_t phi_in34 = *phi24;
	uint32_t phi35 = 0;
	while (true)
	{
		uint64_t anon55;
		uint32_t phi36 = phi_in33;
		*anon32 = phi_in34;
		uint64_t anon39 = phi23 << 32 >> 32;
		uint32_t anon38 = (uint32_t)anon39;
		uint32_t anon37 = anon38 * anon38;
		if (anon37 <= phi35)
		{
			uint32_t phi49;
			*anon4 = *(uint32_t*)((uint64_t)&alloca1 + 12);
			uint32_t phi_in40 = anon5;
			uint64_t* phi41 = &alloca1.field0;
			if (*(uint32_t*)((uint64_t)&alloca1 + 12) != 0)
			{
				uint32_t anon46;
				uint64_t phi42 = anon6 & 0xffffffff;
				do
				{
					uint32_t anon43 = rand();
					uint64_t anon44 = ((__zext uint64_t)(anon43 > 4294967295 ? anon43 : anon43 + 255) << 32 >> 40) % (phi42 << 32 >> 32);
					*anon27 = (uint32_t)anon44;
					uint32_t* anon45 = (uint32_t*)(((__sext int64_t)*anon4 << 2) + arg4);
					*anon29 = *anon45;
					*anon45 = *(uint32_t*)((anon44 << 32 >> 30) + arg4);
					*(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) = *anon45;
					anon46 = *anon4 - 1;
					*anon4 = anon46;
					phi_in40 = anon10 - 1;
					phi41 = &alloca1.field0;
					phi42 = (__zext uint64_t)*anon4;
				}
				while (anon46 != 0);
			}
			*anon27 = phi_in40;
			*anon4 = 0;
			*anon32 = *phi41;
			*anon7 = anon10 + 1 - *anon7;
			phi_in40 = *anon27;
			uint64_t phi_in47 = *phi41;
			uint32_t phi_in48 = 0;
			do
			{
				*anon27 = phi_in40;
				*anon32 = phi_in47;
				phi49 = phi_in48;
				if (anon37 > phi49)
				{
					uint32_t* anon50 = (uint32_t*)(*anon32 + ((__sext int64_t)phi49 << 2));
					uint32_t anon51 = *anon50 + *(uint32_t*)(((__sext int64_t)*anon27 << 2) + arg4) * *anon7;
					*anon50 = anon51;
					uint32_t anon52 = *anon27 + 1;
					*anon27 = anon52;
					uint32_t anon53 = anon51 + 1;
					*anon4 = anon53;
					uint64_t phi54 = *anon32;
					phi_in40 = anon52;
					if ((uint32_t)((__sext int64_t)anon53 % (arg2 << 32 >> 32)) == 0)
					{
						anon55 = arg5 << 32 >> 30;
						phi54 = *anon32 + anon55;
						phi_in40 = *anon27;
					}
					phi_in47 = phi54;
					phi_in48 = anon53;
					if (phi_in40 >= anon10)
					{
						uint32_t anon56 = phi_in40 - anon10;
						*anon27 = anon56;
						phi_in40 = anon56;
						phi_in47 = phi54;
						phi_in48 = anon53;
					}
				}
			}
			while (anon37 > phi49);
		}
		break;
		uint32_t anon57 = *(uint32_t*)(((__sext int64_t)phi36 << 2) + arg4) * *anon7;
		*(uint32_t*)(*anon32 + ((__sext int64_t)phi35 << 2)) = anon57;
		uint32_t anon58 = anon57 + 1;
		*anon4 = anon58;
		uint32_t anon59 = phi36 + ((uint32_t)((__sext int64_t)anon58 % anon39) == 0 ? 2 : 1);
		*anon27 = anon59;
		phi_in33 = anon59;
		uint64_t anon60 = *anon32 + ((uint32_t)((__sext int64_t)anon58 % anon39) == 0 ? anon55 : 0);
		phi_in34 = anon60;
		phi35 = anon58;
		uint32_t anon61 = (uint32_t)phi23;
		if (anon59 >= anon61)
		{
			uint32_t anon62 = anon59 - anon61;
			*anon27 = anon62;
			phi_in33 = anon62;
			phi_in34 = anon60;
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
