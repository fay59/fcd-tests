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
	if (*anon8 == 0)
	{
		phi20 = anon9 - 1;
	}
	else 
	{
		uint32_t anon25;
		uint32_t phi26;
		uint64_t anon32;
		uint32_t phi21 = anon19;
		uint64_t phi22 = *anon7;
		do
		{
			uint64_t phi23 = phi22;
			anon24 = (uint32_t*)0x601dec;
			anon25 = anon9 - 1;
			*anon24 = anon25;
			phi26 = phi21;
			uint32_t phi27 = anon25;
			uint64_t phi28 = phi23;
			if (anon9 != 0)
			{
				do
				{
					*(uint32_t*)phi28 = *(uint32_t*)(((__sext int64_t)(phi27 ^ *anon16 & phi21 ^ (phi21 >> 31) + phi21 >> 1) << 2) + arg3);
					uint32_t anon29 = *anon24 - 1;
					*anon24 = anon29;
					phi26 = *anon8;
					uint64_t anon30 = phi28 + 4;
					phi23 = anon30;
					phi27 = anon29;
					phi21 = *anon8;
					phi28 = anon30;
				}
				while (*anon24 != 0);
			}
			uint32_t anon31 = phi26 - 1;
			*anon8 = anon31;
			phi21 = anon31;
			anon32 = phi23 + (arg4 << 32 >> 30);
			phi22 = anon32;
		}
		while (phi26 != 0);
		*anon7 = anon32;
		phi20 = anon25;
	}
	*anon24 = phi20;
	uint32_t anon33 = rand();
	uint32_t anon34 = (uint32_t)(((__zext uint64_t)(anon33 > 4294967295 ? anon33 : anon33 + 255) << 32 >> 40) % anon4);
	*anon2 = anon34;
	*anon5 = 3 - anon34;
	uint32_t anon35 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon24;
	uint64_t anon37 = (__zext uint64_t)(anon35 > 4294967295 ? anon35 : anon35 + 255);
	uint64_t anon38 = anon37 >> 31;
	uint32_t anon36 = *(uint32_t*)(((__zext uint64_t)((anon37 & 0x100) != 0 ^ anon38 != 0) - anon38 << 2) + arg3) ^ 1;
	*anon10 = anon36;
	*anon14 = 3 - anon36;
	if (anon9 != 0)
	{
		uint64_t anon49;
		uint32_t phi39 = *anon24;
		uint64_t phi40 = arg2;
		do
		{
			uint64_t anon47;
			uint32_t phi41 = phi39;
			uint64_t phi_in42 = phi40;
			uint32_t phi43 = *anon24;
			do
			{
				uint64_t phi44 = phi_in42;
				uint32_t* anon45 = (uint32_t*)phi44;
				*anon45 = *anon45 + (*(uint32_t*)(((__sext int64_t)(phi43 ^ (phi41 >> 31) + phi41 >> 1 ^ *anon16 & phi41) << 2) + arg3) << 2);
				uint32_t anon46 = *anon24 - 1;
				*anon24 = anon46;
				phi43 = anon46;
				phi41 = *anon8;
				anon47 = phi44 + 4;
				phi_in42 = anon47;
			}
			while (*anon24 != 0);
			uint32_t anon48 = *anon8 - 1;
			*anon8 = anon48;
			phi39 = anon48;
			anon49 = anon47 + (arg4 << 32 >> 30);
			phi40 = anon49;
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
	uint32_t* anon34;
	uint64_t phi_in61;
	uint64_t phi_in135;
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
		uint64_t anon49;
		uint32_t phi50;
		uint32_t anon58;
		uint64_t anon84;
		phi23 = phi9;
		uint32_t phi_in27 = phi15;
		uint32_t* phi_in28 = (uint32_t*)arg3;
		uint64_t phi29 = arg3;
		uint32_t* phi30 = (uint32_t*)arg3;
		do
		{
			phi31 = phi_in27;
			uint64_t phi32 = phi29;
			uint32_t* phi_in33 = phi30;
			anon34 = (uint32_t*)0x601dec;
			uint32_t anon36 = (uint32_t)anon12;
			uint32_t anon35 = anon36 - 1;
			*anon34 = anon35;
			uint32_t* phi37 = phi_in33;
			uint32_t phi38 = anon35;
			if (anon36 != 0)
			{
				do
				{
					uint32_t* phi39 = phi_in28;
					uint32_t phi40 = 3;
					if (phi14 > phi38)
					{
						uint32_t anon41 = *phi37 + (phi14 * phi14 << 1);
						*phi37 = anon41;
						struct { uint32_t field0; bool field1; } anon42 = llvm.ssub.with.overflow.i32(phi14, anon41);
						uint32_t anon43 = (phi14 & 0x7fffffff) - anon41;
						phi40 = ((anon43 >> 31 ^ (__zext uint32_t)anon42.field1 | (__zext uint32_t)(anon43 == 0)) << 2) - 1;
					}
					uint64_t anon44 = (uint64_t)phi39;
					*(uint32_t*)(anon44 + (phi16 << 32 >> 30)) = phi14 * phi14 * phi40 + *phi39;
					uint32_t anon45 = *anon34 - 1;
					*anon34 = anon45;
					uint64_t anon46 = anon44 + 4;
					phi32 = anon46;
					uint32_t* anon47 = (uint32_t*)anon46;
					phi_in28 = anon47;
					phi37 = anon47;
					phi38 = anon45;
				}
				while (*anon34 != 0);
			}
			phi_in27 = phi31 - 1;
			anon49 = phi32 + (anon7 >> 30);
			uint32_t* anon48 = (uint32_t*)anon49;
			phi_in28 = anon48;
			phi29 = anon49;
			phi30 = anon48;
		}
		while (phi31 != 256);
		*anon8 = anon49;
		uint32_t anon51 = (uint32_t)phi23;
		phi50 = anon51;
		uint64_t phi52 = phi23;
		uint32_t phi53 = anon51;
		uint32_t anon55 = anon51 + 1;
		int64_t anon57 = (__sext int64_t)phi15 << 2;
		uint32_t anon56 = (uint32_t)(anon57 + 4 + arg4 >> 2) & 3;
		uint32_t anon54 = anon51 == 4 | anon55 < 5 | anon55 < anon56 ? anon55 : anon56;
		if (anon54 != 0)
		{
			uint32_t phi59;
			anon58 = (phi14 >> 31) + phi14 >> 1;
			*(uint32_t*)((anon57 & 0xc) + arg4) = (__zext uint32_t)(anon51 < anon58);
			uint32_t anon60 = anon51 - 1;
			phi59 = anon60;
			uint64_t anon62 = phi23 + 4294967295;
			phi_in61 = anon62 & 0xffffffff;
			uint64_t phi63 = (__zext uint64_t)anon60;
			if (anon54 != 1)
			{
				uint32_t anon65 = (uint32_t)anon62;
				struct { uint32_t field0; bool field1; } anon64 = llvm.ssub.with.overflow.i32(anon58, anon65);
				uint32_t anon66 = anon58 - anon65;
				*(uint32_t*)((anon62 << 32 >> 30) + arg4) = (__zext uint32_t)(anon66 != 0 & !(anon66 < 0 ^ anon64.field1));
				uint32_t anon67 = anon51 - 2;
				phi59 = anon67;
				uint64_t anon68 = phi23 + 4294967294;
				phi_in61 = anon68 & 0xffffffff;
				phi63 = (__zext uint64_t)anon67;
				if (anon54 != 2)
				{
					uint32_t anon70 = (uint32_t)anon68;
					struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon58, anon70);
					uint32_t anon71 = anon58 - anon70;
					*(uint32_t*)((anon68 << 32 >> 30) + arg4) = (__zext uint32_t)(anon71 != 0 & !(anon71 < 0 ^ anon69.field1));
					uint32_t anon72 = anon51 - 3;
					phi59 = anon72;
					uint64_t anon73 = phi23 + 4294967293;
					phi_in61 = anon73 & 0xffffffff;
					phi63 = (__zext uint64_t)anon72;
					if (anon54 != 3)
					{
						uint32_t anon75 = (uint32_t)anon73;
						struct { uint32_t field0; bool field1; } anon74 = llvm.ssub.with.overflow.i32(anon58, anon75);
						uint32_t anon76 = anon58 - anon75;
						*(uint32_t*)((anon73 << 32 >> 30) + arg4) = (__zext uint32_t)(anon76 != 0 & !(anon76 < 0 ^ anon74.field1));
						uint32_t anon77 = anon51 - 4;
						phi59 = anon77;
						uint64_t anon78 = phi23 + 4294967292;
						phi_in61 = anon78 & 0xffffffff;
						phi63 = (__zext uint64_t)anon77;
						if (anon54 == 5)
						{
							uint32_t anon80 = (uint32_t)anon78;
							struct { uint32_t field0; bool field1; } anon79 = llvm.ssub.with.overflow.i32(anon58, anon80);
							uint32_t anon81 = anon58 - anon80;
							*(uint32_t*)((anon78 << 32 >> 30) + arg4) = (__zext uint32_t)(anon81 != 0 & !(anon81 < 0 ^ anon79.field1));
							phi59 = anon51 - 5;
							uint64_t anon82 = phi23 + 4294967291 & 0xffffffff;
							phi_in61 = anon82;
							phi63 = anon82;
						}
					}
				}
			}
			uint32_t phi_in83 = phi59;
			anon84 = phi10 & 0xffffffff;
			phi24 = anon84;
			phi50 = phi_in83;
			phi52 = phi_in61;
			phi53 = (uint32_t)phi63;
		}
		if (anon55 != anon54 && anon54 != 0 || anon54 == 0)
		{
			uint64_t phi87;
			uint32_t phi88;
			uint32_t anon94;
			uint32_t anon95;
			uint32_t phi85 = phi53;
			uint32_t anon86 = anon51 - anon54;
			if (anon86 < 3)
			{
				phi87 = arg4 & 0xf;
				phi88 = (uint32_t)phi52;
			}
			else 
			{
				uint32_t anon93;
				uint32_t* anon89 = (uint32_t*)(arg1 - 240);
				*anon89 = phi85;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon89 = anon58;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in90 = 0;
				do
				{
					uint32_t phi91 = phi_in90;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon92 = phi91 + 1;
					phi_in90 = anon92;
					anon94 = anon55 - anon54;
					anon93 = (uint32_t)(((__zext uint64_t)anon94 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon92 < anon93);
				phi24 = anon84;
				anon95 = anon93 << 2;
				if (anon94 != anon95)
				{
					phi87 = arg4;
					uint32_t anon96 = phi50 - anon95;
					phi88 = anon96;
					phi52 = (__zext uint64_t)anon96;
					phi85 = anon96;
				}
			}
			if (anon86 < 3 || anon86 >= 3 && anon94 != anon95)
			{
				struct { uint32_t field0; bool field1; } anon97 = llvm.ssub.with.overflow.i32(anon58, phi85);
				uint32_t anon98 = anon58 - phi85;
				*(uint32_t*)(phi87 + ((__sext int64_t)phi85 << 2)) = (__zext uint32_t)(anon98 != 0 & !(anon98 < 0 ^ anon97.field1));
				phi24 = anon84;
				if (phi85 != 0)
				{
					uint32_t anon100 = (uint32_t)(phi52 + 4294967295);
					struct { uint32_t field0; bool field1; } anon99 = llvm.ssub.with.overflow.i32(anon58, anon100);
					uint32_t anon101 = anon58 - anon100;
					*(uint32_t*)(phi87 + ((phi52 << 32) - 4294967296 >> 30)) = (__zext uint32_t)(anon101 != 0 & !(anon101 < 0 ^ anon99.field1));
					phi24 = anon84;
					if (anon100 != 0)
					{
						uint32_t anon103 = phi88 - 2;
						struct { uint32_t field0; bool field1; } anon102 = llvm.ssub.with.overflow.i32(anon58, anon103);
						uint32_t anon104 = anon58 - anon103;
						*(uint32_t*)(phi87 + ((__sext int64_t)anon103 << 2)) = (__zext uint32_t)(anon104 != 0 & !(anon104 < 0 ^ anon102.field1));
						phi24 = anon84;
					}
				}
			}
		}
	}
	uint64_t* anon105 = (uint64_t*)0x601df8;
	*anon105 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi106;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon107 = anon2 + 1;
		phi106 = (uint32_t)(anon107 + (anon107 >> 31 & 1) << 32 >> 33);
		uint64_t phi108 = arg3;
		while (true)
		{
			uint64_t phi113;
			uint64_t phi_in118;
			uint64_t phi119;
			uint32_t phi120;
			uint64_t phi121;
			uint64_t anon172;
			uint32_t anon179;
			uint32_t phi109 = phi106;
			uint64_t phi_in110 = phi108;
			*anon8 = phi_in110;
			uint64_t phi111 = phi_in110;
			if (anon1 != 0)
			{
				uint32_t anon134;
				int64_t anon137;
				uint32_t phi_in138;
				uint32_t phi142;
				uint32_t anon149;
				uint32_t* anon152;
				uint64_t phi165;
				uint32_t phi169;
				uint64_t anon171;
				uint32_t phi112 = phi109;
				phi113 = (anon2 - phi23 << 32 >> 30) - 4 + arg4;
				uint64_t anon117 = phi23 << 32;
				uint64_t anon116 = anon117 >> 30;
				uint64_t anon115 = (anon116 & 0xc) + arg4;
				phi114 = anon115;
				phi_in118 = 0;
				phi119 = phi_in110;
				phi120 = 0;
				phi121 = phi_in118;
				uint64_t phi_in122 = phi119;
				uint32_t* anon123 = (uint32_t*)0x601e00;
				uint32_t anon124 = (uint32_t)phi23;
				*anon123 = anon124;
				uint64_t phi_in125 = phi_in122;
				uint32_t phi126 = anon1;
				if (anon124 != 0)
				{
					uint32_t anon131;
					do
					{
						uint32_t anon127 = rand();
						uint64_t anon128 = ((__zext uint64_t)(anon127 > 4294967295 ? anon127 : anon127 + 255) << 32 >> 40) % (__sext int64_t)phi126;
						*anon34 = (uint32_t)anon128;
						uint32_t* anon129 = (uint32_t*)0x601e08;
						uint32_t* anon130 = (uint32_t*)(((__sext int64_t)*anon123 << 2) + arg4);
						*anon129 = *anon130;
						*anon130 = *(uint32_t*)((anon128 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon34 << 2) + arg4) = *anon129;
						anon131 = *anon123 - 1;
						*anon123 = anon131;
						phi126 = *anon123;
					}
					while (anon131 != 0);
					phi_in125 = *anon8;
				}
				uint32_t* anon132 = (uint32_t*)phi113;
				if (*anon132 == 0)
				{
					uint32_t phi133;
					bool anon144;
					uint64_t anon146;
					uint32_t phi_in147;
					uint64_t phi_in148;
					anon134 = anon1 - 1;
					phi133 = anon134;
					anon137 = anon2 << 32 >> 30;
					int64_t anon136 = anon137 + arg4;
					phi_in135 = anon136;
					phi_in138 = phi112;
					uint32_t anon139 = anon124 - phi120;
					if (phi112 > anon139)
					{
						uint64_t anon141;
						do
						{
							*anon34 = phi133;
							uint64_t phi140 = phi_in135;
							phi133 = *anon34 - 1;
							anon141 = phi140 - 4;
							phi_in135 = anon141;
						}
						while (*(uint32_t*)anon141 == 0);
						*anon132 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi_in138 = phi112 - 1;
					}
					else 
					{
						phi142 = phi143;
						phi109 = phi109;
						anon144 = anon1 != 3 | phi109 == 0;
						if (!anon144)
						{
							anon146 = (__zext uint64_t)anon139;
							phi145 = anon146;
							phi_in147 = anon134;
							phi_in148 = anon136;
							phi142 = phi143;
							phi109 = phi109;
						}
					}
					uint64_t phi145 = anon146;
					phi_in147 = anon134;
					phi_in148 = anon136;
					anon149 = phi120 + anon134 - anon124;
					if (phi109 <= anon139 && !anon144 && phi143 == 2 | anon139 == anon149 || phi109 > anon139)
					{
						uint64_t anon151;
						do
						{
							*anon34 = phi_in147;
							uint64_t phi150 = phi_in148;
							phi145 = phi145 & 0xffffffffffffff00 | (__zext uint64_t)(*anon34 == anon149);
							phi_in147 = *anon34 - 1;
							anon151 = phi150 - 4;
							phi_in148 = anon151;
						}
						while (*anon34 == anon149 | *(uint32_t*)anon151 == 0);
						anon152 = (uint32_t*)phi114;
						*anon152 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi142 = phi143 - (__zext uint32_t)(anon139 == anon149);
						phi109 = phi109 - 1;
					}
				}
				else 
				{
					uint64_t phi_in154;
					uint32_t phi_in158;
					uint64_t phi_in160;
					uint32_t phi153 = anon134;
					uint64_t anon155 = (arg4 & 0xf) + anon137 - 4;
					phi_in154 = anon155;
					if (phi112 == 0)
					{
						uint32_t* anon157;
						uint32_t* anon161;
						do
						{
							*anon34 = phi153;
							uint64_t phi156 = phi_in154;
							phi153 = *anon34 - 1;
							phi_in154 = phi156 - 4;
							anon157 = (uint32_t*)phi156;
						}
						while (*anon157 != 0);
						*anon157 = 1;
						*anon132 = 0;
						phi_in138 = phi112;
						do
						{
							*anon34 = phi_in158;
							uint64_t phi159 = phi_in160;
							phi_in158 = *anon34 - 1;
							phi_in160 = phi159 - 4;
							anon161 = (uint32_t*)phi159;
						}
						while (*anon161 != 0 | *anon34 == anon149);
						*anon161 = 1;
						*anon152 = 0;
						phi142 = phi143;
						phi109 = phi109;
					}
					else 
					{
						phi_in138 = phi112 - 1;
						phi142 = phi143;
						phi109 = phi109 - 1;
					}
					phi_in158 = anon134;
					phi_in160 = anon155;
				}
				uint32_t phi143 = phi_in138;
				phi112 = phi142;
				uint64_t* anon162 = (uint64_t*)0x601df0;
				*anon162 = arg4;
				*anon34 = anon124;
				uint32_t phi_in163 = anon124;
				uint64_t phi_in164 = arg4;
				do
				{
					phi165 = phi_in125;
					uint64_t phi166 = phi_in164;
					if (*(uint32_t*)phi166 != 0)
					{
						uint32_t* anon167 = (uint32_t*)phi165;
						uint32_t* anon168 = (uint32_t*)(phi165 + (phi24 << 32 >> 30));
						*anon167 = *anon168;
						*anon168 = *anon167;
						phi_in163 = *anon167;
					}
					phi169 = phi_in163;
					uint32_t anon170 = phi169 - 1;
					*anon34 = anon170;
					phi_in125 = phi165 + 4;
					phi_in163 = anon170;
					anon171 = phi166 + 4;
					phi_in164 = anon171;
				}
				while (phi169 != 0);
				*anon162 = anon171;
				anon172 = phi165 + 4;
				*anon8 = anon172;
				uint32_t phi173 = anon124;
				uint64_t phi174 = phi23 & 0xffffffff;
				uint32_t phi_in175 = anon124;
				uint32_t anon177 = anon124 + 1;
				uint32_t anon178 = (uint32_t)(anon116 + 4 + arg4 >> 2) & 3;
				uint32_t anon176 = anon177 < 6 ? anon177 : anon177 < anon178 ? anon177 : anon178;
				if (anon176 != 0)
				{
					uint32_t phi_in182;
					int64_t anon181 = anon20 >> 31;
					int64_t anon180 = anon2 + anon181;
					anon179 = (uint32_t)(anon180 << 32 >> 33) + (uint32_t)anon181 - ((uint32_t)anon180 & 1);
					*(uint32_t*)anon115 = (__zext uint32_t)(anon124 < anon179);
					uint64_t anon184 = phi23 + 4294967295;
					uint32_t anon183 = (uint32_t)anon184;
					phi_in182 = anon183;
					uint64_t phi185 = anon184;
					uint32_t phi_in186 = anon183;
					if (anon176 != 1)
					{
						*(uint32_t*)((anon117 - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon183 < anon179);
						uint64_t anon188 = phi23 + 4294967294;
						uint32_t anon187 = (uint32_t)anon188;
						phi_in182 = anon187;
						phi185 = anon188;
						phi_in186 = anon187;
						if (anon176 != 2)
						{
							struct { uint32_t field0; bool field1; } anon189 = llvm.ssub.with.overflow.i32(anon179, anon187);
							uint32_t anon190 = anon179 - anon187;
							*(uint32_t*)((anon117 - 8589934592 >> 30) + arg4) = (__zext uint32_t)(anon190 != 0 & !(anon190 < 0 ^ anon189.field1));
							uint64_t anon192 = phi23 + 4294967293;
							uint32_t anon191 = (uint32_t)anon192;
							phi_in182 = anon191;
							phi185 = anon192;
							phi_in186 = anon191;
							if (anon176 != 3)
							{
								struct { uint32_t field0; bool field1; } anon193 = llvm.ssub.with.overflow.i32(anon179, anon191);
								uint32_t anon194 = anon179 - anon191;
								*(uint32_t*)((anon117 - 12884901888 >> 30) + arg4) = (__zext uint32_t)(anon194 != 0 & !(anon194 < 0 ^ anon193.field1));
								uint64_t anon196 = phi23 + 4294967292;
								uint32_t anon195 = (uint32_t)anon196;
								phi_in182 = anon195;
								phi185 = anon196;
								phi_in186 = anon195;
								if (anon176 == 5)
								{
									struct { uint32_t field0; bool field1; } anon197 = llvm.ssub.with.overflow.i32(anon179, anon195);
									uint32_t anon198 = anon179 - anon195;
									*(uint32_t*)((anon117 - 17179869184 >> 30) + arg4) = (__zext uint32_t)(anon198 != 0 & !(anon198 < 0 ^ anon197.field1));
									phi_in182 = (uint32_t)(phi23 + 4294967291);
									phi185 = phi23 + 4294967291;
									phi_in186 = anon195 - 1;
								}
							}
						}
					}
					phi173 = phi_in182;
					phi174 = phi185 & 0xffffffff;
					phi_in175 = phi_in186;
				}
				if (anon177 != anon176 && anon176 != 0 || anon176 == 0)
				{
					uint32_t phi201;
					uint32_t phi202;
					uint32_t phi203;
					uint32_t anon204;
					uint32_t anon205;
					uint64_t phi199 = phi174;
					uint32_t anon200 = anon124 - anon176;
					if (anon200 < 3)
					{
						phi201 = (uint32_t)phi199;
						phi202 = phi_in175;
					}
					else 
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi203 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon205 = anon177 - anon176;
						anon204 = (uint32_t)(((__zext uint64_t)anon205 + 4294967292 >> 2 & 0x3fffffff) + 1) << 2;
						if (anon204 != anon205)
						{
							uint32_t anon206 = phi173 - anon204;
							phi201 = anon206;
							phi199 = (__zext uint64_t)anon206;
							phi202 = anon206;
						}
					}
					(__asm "movdqa xmm0, xmm3")();
					phi203 = phi203 + 1;
					if (anon200 < 3 || anon200 >= 3 && anon204 != anon205)
					{
						*(uint32_t*)(((__sext int64_t)phi202 << 2) + arg4) = (__zext uint32_t)(phi202 < anon179);
						if (phi202 != 0)
						{
							uint32_t anon208 = (uint32_t)(phi199 + 4294967295);
							struct { uint32_t field0; bool field1; } anon207 = llvm.ssub.with.overflow.i32(anon179, anon208);
							uint32_t anon209 = anon179 - anon208;
							*(uint32_t*)(((phi199 << 32) - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon209 != 0 & !(anon209 < 0 ^ anon207.field1));
							if (anon208 != 0)
							{
								uint32_t anon210 = phi201 - 2;
								*(uint32_t*)(((__sext int64_t)anon210 << 2) + arg4) = (__zext uint32_t)(anon210 < anon179);
							}
						}
					}
				}
				phi111 = *anon105;
			}
			uint64_t anon211 = phi111 + *(uint64_t*)(arg1 - 168);
			*anon105 = anon211;
			phi106 = anon179;
			phi108 = anon211;
			phi113 = phi113 + 4;
			uint64_t phi114 = phi114 - 4;
			uint64_t anon212 = phi121 + 1;
			phi_in118 = anon212;
			phi119 = anon172;
			phi120 = (uint32_t)anon212;
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
	uint64_t phi22;
	uint32_t phi23;
	uint32_t phi24;
	uint32_t phi25;
	uint64_t anon30;
	uint32_t anon31;
	uint32_t anon32;
	uint32_t anon33;
	uint32_t* anon39;
	uint32_t* anon41;
	uint32_t phi44;
	uint64_t phi45;
	uint64_t** phi47;
	uint64_t* phi48;
	uint64_t phi49;
	uint32_t phi88;
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
		uint64_t phi21 = alloca1.field17.field0;
		phi22 = anon19;
		phi23 = *anon9;
		phi24 = *anon6;
		phi25 = anon16;
		uint64_t phi26 = phi21;
		phi21 = phi22;
		alloca1.field9.field0 = 4199623;
		uint32_t phi27 = phi23;
		if (phi23 == phi25)
		{
			uint32_t anon29 = phi24 - 2;
			uint64_t anon28 = (__zext uint64_t)anon29;
			alloca1.field4.field0 = anon28;
			*anon8 = anon29;
			alloca1.field9.field0 = 4199636;
			if (phi23 != 0)
			{
				alloca1.field1.field0 = anon28;
				alloca1.field9.field0 = 4199640;
				phi27 = anon29;
			}
		}
		if (phi23 != phi25 || phi23 == phi25 && phi23 != 0)
		{
			*(uint32_t*)(phi21 - 4) = phi27;
			alloca1.field4.field0 = (__zext uint64_t)*anon8;
			alloca1.field6.field0 = phi21;
			anon30 = phi21 + 4;
			alloca1.field3.field0 = anon30;
			anon31 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon31;
			*anon8 = anon31;
			alloca1.field9.field0 = 4199613;
			phi26 = phi21;
		}
		*anon7 = phi26;
		anon33 = (uint32_t)alloca1.field2.field0;
		anon32 = anon33 - 2;
		alloca1.field1.field0 = (__zext uint64_t)anon32;
		*(uint32_t*)(alloca1.field8.field0 + 12) = anon32;
		*anon8 = anon32;
		alloca1.field9.field0 = 4199672;
		phi18 = anon20;
	}
	if (*anon6 == 0 || *anon6 != 0 && anon32 != 0)
	{
		uint32_t anon43;
		alloca1.field7.field0 = phi18;
		alloca1.field9.field0 = 4199680;
		do
		{
			alloca1.field9.field0 = 4199685;
			uint32_t anon34 = rand();
			uint64_t anon35 = (__zext uint64_t)anon34;
			alloca1.field1.field0 = anon35;
			alloca1.field4.field0 = anon35 + 255 & 0xffffffff;
			alloca1.field9.field0 = 4199696;
			uint32_t phi36 = anon34;
			if (anon34 <= 4294967295)
			{
				uint32_t anon37 = anon34 + 255;
				alloca1.field1.field0 = (__zext uint64_t)anon37;
				phi36 = anon37;
			}
			uint64_t anon38 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
			alloca1.field3.field0 = anon38;
			anon39 = (uint32_t*)0x601dec;
			uint64_t anon40 = ((__zext uint64_t)phi36 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
			*anon39 = (uint32_t)anon40;
			anon41 = (uint32_t*)0x601e08;
			uint32_t* anon42 = (uint32_t*)anon38;
			*anon41 = *anon42;
			*anon42 = *(uint32_t*)(alloca1.field17.field0 + (anon40 << 32 >> 30));
			alloca1.field4.field0 = (__zext uint64_t)*anon41;
			*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon39 << 2)) = *anon41;
			alloca1.field7.field0 = (__zext uint64_t)*anon8;
			anon43 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon43;
			*anon8 = anon43;
			alloca1.field9.field0 = 4199772;
		}
		while (anon43 != 0);
		phi44 = *anon6;
		uint64_t** anon46 = (uint64_t**)&alloca1.field8.field0;
		phi45 = (uint64_t)*anon46;
		phi47 = anon46;
		phi48 = *anon46;
		phi49 = alloca1.field17.field0;
	}
	if (*anon6 != 0 && anon32 == 0)
	{
		phi44 = anon33;
		phi45 = alloca1.field8.field0;
		phi47 = (uint64_t**)&alloca1.field8.field0;
		phi48 = (uint64_t*)alloca1.field8.field0;
		phi49 = alloca1.field17.field0;
	}
	alloca1.field4.field0 = (__zext uint64_t)*anon17;
	int64_t anon50 = (__sext int64_t)phi44;
	alloca1.field1.field0 = anon50;
	alloca1.field16.field0 = (__zext uint64_t)(phi44 * phi44);
	uint64_t anon51 = alloca1.field14.field0 << 2;
	alloca1.field14.field0 = anon51;
	alloca1.field10.field0 = 0;
	*(uint32_t*)(phi49 + ((__zext uint64_t)phi44 << 2) - 4) = *anon17;
	alloca1.field9.field0 = 4199804;
	alloca1.field1.field0 = *phi48;
	*anon39 = 0;
	*anon8 = 0;
	uint64_t* anon52 = (uint64_t*)0x601e10;
	*anon52 = *phi48;
	alloca1.field9.field0 = 4199834;
	alloca1.field6.field0 = *phi48;
	uint64_t phi53 = *phi48;
	uint32_t phi54 = 0;
	alloca1.field9.field0 = 4199836;
	do
	{
		uint32_t phi72;
		uint64_t phi_in55 = phi53;
		uint32_t phi_in56 = phi54;
		*anon52 = phi_in55;
		uint32_t phi57 = phi_in56;
		alloca1.field9.field0 = 4199935;
		alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(phi45 + 12);
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
		*anon8 = *(uint32_t*)(phi45 + 12);
		alloca1.field9.field0 = 4199959;
		*anon39 = *anon9;
		uint64_t* phi58 = (uint64_t*)phi45;
		if (*(uint32_t*)(phi45 + 12) != 0)
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
				*anon39 = (uint32_t)anon64;
				uint32_t* anon65 = (uint32_t*)anon63;
				*anon41 = *anon65;
				*anon65 = *(uint32_t*)(alloca1.field17.field0 + (anon64 << 32 >> 30));
				alloca1.field4.field0 = (__zext uint64_t)*anon41;
				*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon39 << 2)) = *anon41;
				alloca1.field7.field0 = (__zext uint64_t)*anon8;
				anon66 = *anon8 - 1;
				alloca1.field1.field0 = (__zext uint64_t)anon66;
				*anon8 = anon66;
				alloca1.field9.field0 = 4200060;
			}
			while (anon66 != 0);
			*anon39 = *anon9;
			phi58 = *phi47;
		}
		alloca1.field1.field0 = (__zext uint64_t)((uint32_t)alloca1.field2.field0 + 1 - *anon15);
		alloca1.field9.field0 = 4200073;
		alloca1.field7.field0 = *phi58;
		*anon8 = 0;
		alloca1.field10.field0 = 0;
		alloca1.field9.field0 = 4200100;
		*anon52 = *phi58;
		uint64_t phi67 = 4200106;
		uint64_t phi68 = 8;
		uint64_t phi69 = 2099034;
		uint64_t phi70 = 4200108;
		do
		{
			alloca1.field9.field0 = phi67;
			*(uint32_t*)(alloca1.field9.field0 + phi69) = *(uint32_t*)&((uint8_t*)&alloca1)[phi68];
			alloca1.field9.field0 = phi70;
			uint32_t phi_in71 = *(uint32_t*)&alloca1.field10.field0;
			phi72 = phi_in71;
			alloca1.field9.field0 = 4200200;
			if (*(uint32_t*)&alloca1.field16.field0 > phi72)
			{
				uint32_t* anon73 = (uint32_t*)(alloca1.field7.field0 + ((__sext int64_t)phi72 << 2));
				uint32_t anon74 = *anon73 + *anon15 * *(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon39 << 2));
				*anon73 = anon74;
				uint64_t anon75 = (__zext uint64_t)anon74;
				alloca1.field6.field0 = anon75;
				alloca1.field10.field0 = (__zext uint64_t)anon74 + 1 & 0xffffffff;
				uint32_t anon76 = anon74 + 1;
				alloca1.field3.field0 = (__zext uint64_t)anon76;
				*anon39 = anon76;
				uint32_t anon77 = anon74 + 1;
				*anon8 = anon77;
				int64_t anon78 = (__sext int64_t)anon77;
				int64_t anon79 = (__sext int64_t)*(uint32_t*)&((uint8_t*)&alloca1)[phi68];
				alloca1.field1.field0 = anon78 / anon79 & 0xffffffff;
				int64_t anon80 = anon78 % anon79;
				alloca1.field4.field0 = anon80 & 0xffffffff;
				alloca1.field9.field0 = 4200180;
				uint32_t phi81 = anon76;
				if ((uint32_t)anon80 == 0)
				{
					*anon39 = anon74;
					alloca1.field7.field0 = alloca1.field7.field0 + alloca1.field14.field0;
					alloca1.field9.field0 = 4200191;
					alloca1.field3.field0 = anon75;
					phi81 = anon74;
				}
				alloca1.field9.field0 = 4200195;
				phi_in71 = anon77;
				if (phi81 >= *(uint32_t*)&((uint8_t*)&alloca1)[phi68])
				{
					alloca1.field9.field0 = 4200242;
					alloca1.field3.field0 = (__zext uint64_t)(phi81 - *(uint32_t*)&((uint8_t*)&alloca1)[phi68]);
					phi67 = 4200248;
					phi68 = 24;
					phi69 = 2098868;
					phi70 = 4200250;
				}
			}
		}
		while (*(uint32_t*)&alloca1.field16.field0 > phi72);
		uint32_t anon82 = *anon15 * *(uint32_t*)(phi49 + ((__sext int64_t)*anon39 << 2));
		*(uint32_t*)(*anon52 + ((__sext int64_t)phi57 << 2)) = anon82;
		alloca1.field11.field0 = (__zext uint64_t)anon82;
		alloca1.field10.field0 = (__zext uint64_t)anon82 + 1 & 0xffffffff;
		uint32_t anon83 = anon82 + 1;
		alloca1.field3.field0 = (__zext uint64_t)anon83;
		uint32_t anon84 = anon82 + 1;
		*anon8 = anon84;
		*anon39 = anon83;
		int64_t anon85 = (__sext int64_t)anon84;
		alloca1.field1.field0 = anon85 / anon50 & 0xffffffff;
		int64_t anon86 = anon85 % anon50;
		alloca1.field4.field0 = anon86 & 0xffffffff;
		alloca1.field9.field0 = 4199909;
		uint64_t phi87 = *anon52;
		phi88 = anon83;
		if ((uint32_t)anon86 == 0)
		{
			uint32_t anon89 = anon82 + 2;
			alloca1.field3.field0 = (__zext uint64_t)anon89;
			uint64_t anon90 = *anon52 + anon51;
			alloca1.field6.field0 = anon90;
			alloca1.field9.field0 = 4199922;
			*anon39 = anon89;
			phi87 = anon90;
			phi88 = anon89;
		}
		alloca1.field9.field0 = 4199930;
		*anon52 = phi87;
		phi57 = anon84;
		if (phi88 >= phi44)
		{
			uint32_t anon91 = phi88 - phi44;
			alloca1.field3.field0 = (__zext uint64_t)anon91;
			alloca1.field9.field0 = 4200232;
			*anon39 = anon91;
			phi53 = phi87;
			phi54 = anon84;
			alloca1.field9.field0 = 4200237;
		}
	}
	while (phi88 >= phi44);
	alloca1.field9.field0 = 4199619;
	alloca1.field5.field0 = (__zext uint64_t)anon31;
	phi22 = anon30;
	phi23 = anon31;
	phi24 = *anon8;
	phi25 = anon31;
	*anon52 = alloca1.field7.field0;
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
