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
		uint64_t anon34;
		uint32_t phi_in21 = anon19;
		uint64_t phi22 = *anon7;
		do
		{
			uint64_t phi_in23 = phi22;
			anon24 = (uint32_t*)0x601dec;
			anon25 = anon9 - 1;
			*anon24 = anon25;
			phi26 = phi_in21;
			uint64_t phi27 = phi_in23;
			uint32_t phi28 = anon25;
			uint32_t phi29 = phi_in21;
			uint64_t phi30 = phi_in23;
			if (anon9 != 0)
			{
				do
				{
					*(uint32_t*)phi30 = *(uint32_t*)(((__sext int64_t)(phi28 ^ *anon16 & phi29 ^ (phi29 >> 31) + phi29 >> 1) << 2) + arg3);
					uint32_t anon31 = *anon24 - 1;
					*anon24 = anon31;
					phi26 = *anon8;
					uint64_t anon32 = phi30 + 4;
					phi27 = anon32;
					phi28 = anon31;
					phi29 = *anon8;
					phi30 = anon32;
				}
				while (*anon24 != 0);
			}
			uint32_t anon33 = phi26 - 1;
			*anon8 = anon33;
			phi_in21 = anon33;
			anon34 = phi27 + (arg4 << 32 >> 30);
			phi22 = anon34;
		}
		while (phi26 != 0);
		*anon7 = anon34;
		phi20 = anon25;
	}
	*anon24 = phi20;
	uint32_t anon35 = rand();
	uint32_t anon36 = (uint32_t)(((__zext uint64_t)(anon35 > 4294967295 ? anon35 : anon35 + 255) << 32 >> 40) % anon4);
	*anon2 = anon36;
	*anon5 = 3 - anon36;
	uint32_t anon37 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon24;
	uint64_t anon39 = (__zext uint64_t)(anon37 > 4294967295 ? anon37 : anon37 + 255);
	uint64_t anon40 = anon39 >> 31;
	uint32_t anon38 = *(uint32_t*)(((__zext uint64_t)((anon39 & 0x100) != 0 ^ anon40 != 0) - anon40 << 2) + arg3) ^ 1;
	*anon10 = anon38;
	*anon14 = 3 - anon38;
	if (anon9 != 0)
	{
		uint64_t anon51;
		uint32_t phi41 = *anon24;
		uint64_t phi_in42 = arg2;
		do
		{
			uint64_t anon49;
			uint32_t phi_in43 = phi41;
			uint32_t phi44 = *anon24;
			uint32_t phi45 = phi_in43;
			do
			{
				uint64_t phi46 = phi_in42;
				uint32_t* anon47 = (uint32_t*)phi46;
				*anon47 = *anon47 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi45 >> 31) + phi45 >> 1 ^ *anon16 & phi45) << 2) + arg3) << 2);
				uint32_t anon48 = *anon24 - 1;
				*anon24 = anon48;
				phi44 = anon48;
				phi45 = *anon8;
				anon49 = phi46 + 4;
				phi_in42 = anon49;
			}
			while (*anon24 != 0);
			uint32_t anon50 = *anon8 - 1;
			*anon8 = anon50;
			phi41 = anon50;
			anon51 = anon49 + (arg4 << 32 >> 30);
			phi_in42 = anon51;
		}
		while (*anon8 != 0);
		*anon7 = anon51;
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
	uint32_t* anon33;
	uint64_t phi61;
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
		uint32_t phi_in27 = phi15;
		uint32_t* phi28 = (uint32_t*)arg3;
		uint64_t phi_in29 = arg3;
		uint32_t* phi_in30 = (uint32_t*)arg3;
		do
		{
			phi31 = phi_in27;
			uint32_t* phi_in32 = phi28;
			anon33 = (uint32_t*)0x601dec;
			uint32_t anon35 = (uint32_t)anon12;
			uint32_t anon34 = anon35 - 1;
			*anon33 = anon34;
			uint64_t phi36 = phi_in29;
			uint32_t* phi37 = phi_in30;
			uint32_t phi38 = anon34;
			if (anon35 != 0)
			{
				do
				{
					uint32_t* phi39 = phi_in32;
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
					uint32_t anon45 = *anon33 - 1;
					*anon33 = anon45;
					uint64_t anon46 = anon44 + 4;
					phi36 = anon46;
					uint32_t* anon47 = (uint32_t*)anon46;
					phi_in32 = anon47;
					phi37 = anon47;
					phi38 = anon45;
				}
				while (*anon33 != 0);
			}
			phi_in27 = phi31 - 1;
			anon49 = phi36 + (anon7 >> 30);
			uint32_t* anon48 = (uint32_t*)anon49;
			phi28 = anon48;
			phi_in29 = anon49;
			phi_in30 = anon48;
		}
		while (phi31 != 256);
		*anon8 = anon49;
		uint32_t anon51 = (uint32_t)phi9;
		phi50 = anon51;
		uint64_t phi_in52 = phi9;
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
			uint64_t anon62 = phi9 + 4294967295;
			phi61 = anon62 & 0xffffffff;
			uint64_t phi63 = (__zext uint64_t)anon60;
			if (anon54 != 1)
			{
				uint32_t anon65 = (uint32_t)anon62;
				struct { uint32_t field0; bool field1; } anon64 = llvm.ssub.with.overflow.i32(anon58, anon65);
				uint32_t anon66 = anon58 - anon65;
				*(uint32_t*)((anon62 << 32 >> 30) + arg4) = (__zext uint32_t)(anon66 != 0 & !(anon66 < 0 ^ anon64.field1));
				uint32_t anon67 = anon51 - 2;
				phi59 = anon67;
				uint64_t anon68 = phi9 + 4294967294;
				phi61 = anon68 & 0xffffffff;
				phi63 = (__zext uint64_t)anon67;
				if (anon54 != 2)
				{
					uint32_t anon70 = (uint32_t)anon68;
					struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon58, anon70);
					uint32_t anon71 = anon58 - anon70;
					*(uint32_t*)((anon68 << 32 >> 30) + arg4) = (__zext uint32_t)(anon71 != 0 & !(anon71 < 0 ^ anon69.field1));
					uint32_t anon72 = anon51 - 3;
					phi59 = anon72;
					uint64_t anon73 = phi9 + 4294967293;
					phi61 = anon73 & 0xffffffff;
					phi63 = (__zext uint64_t)anon72;
					if (anon54 != 3)
					{
						uint32_t anon75 = (uint32_t)anon73;
						struct { uint32_t field0; bool field1; } anon74 = llvm.ssub.with.overflow.i32(anon58, anon75);
						uint32_t anon76 = anon58 - anon75;
						*(uint32_t*)((anon73 << 32 >> 30) + arg4) = (__zext uint32_t)(anon76 != 0 & !(anon76 < 0 ^ anon74.field1));
						uint32_t anon77 = anon51 - 4;
						phi59 = anon77;
						uint64_t anon78 = phi9 + 4294967292;
						phi61 = anon78 & 0xffffffff;
						phi63 = (__zext uint64_t)anon77;
						if (anon54 == 5)
						{
							uint32_t anon80 = (uint32_t)anon78;
							struct { uint32_t field0; bool field1; } anon79 = llvm.ssub.with.overflow.i32(anon58, anon80);
							uint32_t anon81 = anon58 - anon80;
							*(uint32_t*)((anon78 << 32 >> 30) + arg4) = (__zext uint32_t)(anon81 != 0 & !(anon81 < 0 ^ anon79.field1));
							phi59 = anon51 - 5;
							uint64_t anon82 = phi9 + 4294967291 & 0xffffffff;
							phi61 = anon82;
							phi63 = anon82;
						}
					}
				}
			}
			uint32_t phi_in83 = phi59;
			phi_in52 = phi61;
			phi23 = phi9;
			anon84 = phi10 & 0xffffffff;
			phi24 = anon84;
			phi50 = phi_in83;
			phi53 = (uint32_t)phi63;
		}
		if (anon55 != anon54 && anon54 != 0 || anon54 == 0)
		{
			uint64_t phi87;
			uint32_t phi88;
			uint64_t phi89;
			uint32_t phi90;
			uint32_t anon95;
			uint32_t anon96;
			uint32_t* anon85 = (uint32_t*)(arg1 - 240);
			*anon85 = phi53;
			uint32_t anon86 = anon51 - anon54;
			if (anon86 < 3)
			{
				phi87 = arg4 & 0xf;
				phi88 = (uint32_t)phi_in52;
				phi89 = phi_in52;
				phi90 = *anon85;
			}
			else 
			{
				uint32_t anon94;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon85 = anon58;
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
					anon95 = anon55 - anon54;
					anon94 = (uint32_t)(((__zext uint64_t)anon95 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon93 < anon94);
				phi23 = phi9;
				phi24 = anon84;
				anon96 = anon94 << 2;
				if (anon95 != anon96)
				{
					phi87 = arg4;
					uint32_t anon97 = phi50 - anon96;
					phi88 = anon97;
					phi89 = (__zext uint64_t)anon97;
					phi90 = anon97;
				}
			}
			if (anon86 < 3 || anon86 >= 3 && anon95 != anon96)
			{
				struct { uint32_t field0; bool field1; } anon98 = llvm.ssub.with.overflow.i32(anon58, phi90);
				uint32_t anon99 = anon58 - phi90;
				*(uint32_t*)(phi87 + ((__sext int64_t)phi90 << 2)) = (__zext uint32_t)(anon99 != 0 & !(anon99 < 0 ^ anon98.field1));
				phi23 = phi9;
				phi24 = anon84;
				if (phi90 != 0)
				{
					uint32_t anon101 = (uint32_t)(phi89 + 4294967295);
					struct { uint32_t field0; bool field1; } anon100 = llvm.ssub.with.overflow.i32(anon58, anon101);
					uint32_t anon102 = anon58 - anon101;
					*(uint32_t*)(phi87 + ((phi89 << 32) - 4294967296 >> 30)) = (__zext uint32_t)(anon102 != 0 & !(anon102 < 0 ^ anon100.field1));
					phi23 = phi9;
					phi24 = anon84;
					if (anon101 != 0)
					{
						uint32_t anon104 = phi88 - 2;
						struct { uint32_t field0; bool field1; } anon103 = llvm.ssub.with.overflow.i32(anon58, anon104);
						uint32_t anon105 = anon58 - anon104;
						*(uint32_t*)(phi87 + ((__sext int64_t)anon104 << 2)) = (__zext uint32_t)(anon105 != 0 & !(anon105 < 0 ^ anon103.field1));
						phi23 = phi9;
						phi24 = anon84;
					}
				}
			}
		}
	}
	uint64_t* anon106 = (uint64_t*)0x601df8;
	*anon106 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
	{
		uint32_t phi107;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon108 = anon2 + 1;
		phi107 = (uint32_t)(anon108 + (anon108 >> 31 & 1) << 32 >> 33);
		uint64_t phi109 = arg3;
		while (true)
		{
			uint64_t phi113;
			uint64_t phi_in118;
			uint64_t phi119;
			uint32_t phi120;
			uint64_t phi121;
			uint32_t phi_in143;
			uint64_t anon172;
			uint32_t anon179;
			uint32_t phi110 = phi107;
			*anon8 = phi109;
			uint64_t phi111 = *anon8;
			if (anon1 != 0)
			{
				uint32_t anon134;
				int64_t anon137;
				uint32_t phi_in138;
				uint32_t anon149;
				uint32_t* anon152;
				uint64_t phi165;
				uint32_t phi169;
				uint64_t anon171;
				uint32_t phi112 = phi110;
				phi113 = (anon2 - phi23 << 32 >> 30) - 4 + arg4;
				uint64_t anon117 = phi23 << 32;
				uint64_t anon116 = anon117 >> 30;
				uint64_t anon115 = (anon116 & 0xc) + arg4;
				phi114 = anon115;
				phi_in118 = 0;
				phi119 = *anon8;
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
						*anon33 = (uint32_t)anon128;
						uint32_t* anon129 = (uint32_t*)0x601e08;
						uint32_t* anon130 = (uint32_t*)(((__sext int64_t)*anon123 << 2) + arg4);
						*anon129 = *anon130;
						*anon130 = *(uint32_t*)((anon128 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon33 << 2) + arg4) = *anon129;
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
							*anon33 = phi133;
							uint64_t phi140 = phi_in135;
							phi133 = *anon33 - 1;
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
						phi112 = phi142;
						phi_in143 = phi110;
						anon144 = anon1 != 3 | phi110 == 0;
						if (!anon144)
						{
							anon146 = (__zext uint64_t)anon139;
							phi145 = anon146;
							phi_in147 = anon134;
							phi_in148 = anon136;
							phi112 = phi142;
							phi_in143 = phi110;
						}
					}
					uint64_t phi145 = anon146;
					phi_in147 = anon134;
					phi_in148 = anon136;
					anon149 = phi120 + anon134 - anon124;
					if (phi110 <= anon139 && !anon144 && phi142 == 2 | anon139 == anon149 || phi110 > anon139)
					{
						uint64_t anon151;
						do
						{
							*anon33 = phi_in147;
							uint64_t phi150 = phi_in148;
							phi145 = phi145 & 0xffffffffffffff00 | (__zext uint64_t)(*anon33 == anon149);
							phi_in147 = *anon33 - 1;
							anon151 = phi150 - 4;
							phi_in148 = anon151;
						}
						while (*anon33 == anon149 | *(uint32_t*)anon151 == 0);
						anon152 = (uint32_t*)phi114;
						*anon152 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi112 = phi142 - (__zext uint32_t)(anon139 == anon149);
						phi_in143 = phi110 - 1;
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
							*anon33 = phi153;
							uint64_t phi156 = phi_in154;
							phi153 = *anon33 - 1;
							phi_in154 = phi156 - 4;
							anon157 = (uint32_t*)phi156;
						}
						while (*anon157 != 0);
						*anon157 = 1;
						*anon132 = 0;
						phi_in138 = phi112;
						do
						{
							*anon33 = phi_in158;
							uint64_t phi159 = phi_in160;
							phi_in158 = *anon33 - 1;
							phi_in160 = phi159 - 4;
							anon161 = (uint32_t*)phi159;
						}
						while (*anon161 != 0 | *anon33 == anon149);
						*anon161 = 1;
						*anon152 = 0;
						phi112 = phi142;
						phi_in143 = phi110;
					}
					else 
					{
						phi_in138 = phi112 - 1;
						phi112 = phi142;
						phi_in143 = phi110 - 1;
					}
					phi_in158 = anon134;
					phi_in160 = anon155;
				}
				uint32_t phi142 = phi_in138;
				uint64_t* anon162 = (uint64_t*)0x601df0;
				*anon162 = arg4;
				*anon33 = anon124;
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
					*anon33 = anon170;
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
				uint32_t phi175 = anon124;
				uint32_t anon177 = anon124 + 1;
				uint32_t anon178 = (uint32_t)(anon116 + 4 + arg4 >> 2) & 3;
				uint32_t anon176 = anon177 < 6 ? anon177 : anon177 < anon178 ? anon177 : anon178;
				if (anon176 != 0)
				{
					uint32_t phi182;
					int64_t anon181 = anon20 >> 31;
					int64_t anon180 = anon2 + anon181;
					anon179 = (uint32_t)(anon180 << 32 >> 33) + (uint32_t)anon181 - ((uint32_t)anon180 & 1);
					*(uint32_t*)anon115 = (__zext uint32_t)(anon124 < anon179);
					uint64_t anon184 = phi23 + 4294967295;
					uint32_t anon183 = (uint32_t)anon184;
					phi182 = anon183;
					uint64_t phi185 = anon184;
					uint32_t phi_in186 = anon183;
					if (anon176 != 1)
					{
						*(uint32_t*)((anon117 - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon183 < anon179);
						uint64_t anon188 = phi23 + 4294967294;
						uint32_t anon187 = (uint32_t)anon188;
						phi182 = anon187;
						phi185 = anon188;
						phi_in186 = anon187;
						if (anon176 != 2)
						{
							struct { uint32_t field0; bool field1; } anon189 = llvm.ssub.with.overflow.i32(anon179, anon187);
							uint32_t anon190 = anon179 - anon187;
							*(uint32_t*)((anon117 - 8589934592 >> 30) + arg4) = (__zext uint32_t)(anon190 != 0 & !(anon190 < 0 ^ anon189.field1));
							uint64_t anon192 = phi23 + 4294967293;
							uint32_t anon191 = (uint32_t)anon192;
							phi182 = anon191;
							phi185 = anon192;
							phi_in186 = anon191;
							if (anon176 != 3)
							{
								struct { uint32_t field0; bool field1; } anon193 = llvm.ssub.with.overflow.i32(anon179, anon191);
								uint32_t anon194 = anon179 - anon191;
								*(uint32_t*)((anon117 - 12884901888 >> 30) + arg4) = (__zext uint32_t)(anon194 != 0 & !(anon194 < 0 ^ anon193.field1));
								uint64_t anon196 = phi23 + 4294967292;
								uint32_t anon195 = (uint32_t)anon196;
								phi182 = anon195;
								phi185 = anon196;
								phi_in186 = anon195;
								if (anon176 == 5)
								{
									struct { uint32_t field0; bool field1; } anon197 = llvm.ssub.with.overflow.i32(anon179, anon195);
									uint32_t anon198 = anon179 - anon195;
									*(uint32_t*)((anon117 - 17179869184 >> 30) + arg4) = (__zext uint32_t)(anon198 != 0 & !(anon198 < 0 ^ anon197.field1));
									phi182 = (uint32_t)(phi23 + 4294967291);
									phi185 = phi23 + 4294967291;
									phi_in186 = anon195 - 1;
								}
							}
						}
					}
					phi173 = phi182;
					phi174 = phi185 & 0xffffffff;
					phi175 = phi_in186;
				}
				if (anon177 != anon176 && anon176 != 0 || anon176 == 0)
				{
					uint32_t phi202;
					uint64_t phi203;
					uint32_t phi204;
					uint32_t phi205;
					uint32_t anon206;
					uint32_t anon207;
					uint64_t phi_in199 = phi174;
					uint32_t phi_in200 = phi175;
					uint32_t anon201 = anon124 - anon176;
					if (anon201 < 3)
					{
						phi202 = (uint32_t)phi_in199;
						phi203 = phi_in199;
						phi204 = phi_in200;
					}
					else 
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi205 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon207 = anon177 - anon176;
						anon206 = (uint32_t)(((__zext uint64_t)anon207 + 4294967292 >> 2 & 0x3fffffff) + 1) << 2;
						if (anon206 != anon207)
						{
							uint32_t anon208 = phi173 - anon206;
							phi202 = anon208;
							phi203 = (__zext uint64_t)anon208;
							phi204 = anon208;
						}
					}
					(__asm "movdqa xmm0, xmm3")();
					phi205 = phi205 + 1;
					if (anon201 < 3 || anon201 >= 3 && anon206 != anon207)
					{
						*(uint32_t*)(((__sext int64_t)phi204 << 2) + arg4) = (__zext uint32_t)(phi204 < anon179);
						if (phi204 != 0)
						{
							uint32_t anon210 = (uint32_t)(phi203 + 4294967295);
							struct { uint32_t field0; bool field1; } anon209 = llvm.ssub.with.overflow.i32(anon179, anon210);
							uint32_t anon211 = anon179 - anon210;
							*(uint32_t*)(((phi203 << 32) - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon211 != 0 & !(anon211 < 0 ^ anon209.field1));
							if (anon210 != 0)
							{
								uint32_t anon212 = phi202 - 2;
								*(uint32_t*)(((__sext int64_t)anon212 << 2) + arg4) = (__zext uint32_t)(anon212 < anon179);
							}
						}
					}
				}
				phi111 = *anon106;
			}
			uint64_t anon213 = phi111 + *(uint64_t*)(arg1 - 168);
			*anon106 = anon213;
			phi107 = anon179;
			phi109 = anon213;
			phi110 = phi_in143;
			phi113 = phi113 + 4;
			uint64_t phi114 = phi114 - 4;
			uint64_t anon214 = phi121 + 1;
			phi_in118 = anon214;
			phi119 = anon172;
			phi120 = (uint32_t)anon214;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	struct x86_regsalloca1;
	struct { uint64_t field0; uint8_t field1[64]; uint64_t field2; } alloca2;
	uint64_t phi17;
	uint64_t phi20;
	uint32_t phi21;
	uint32_t phi22;
	uint32_t phi23;
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
		phi17 = (__zext uint64_t)*anon9;
	}
	else 
	{
		alloca1.field6.field0 = alloca1.field17.field0;
		uint64_t anon18 = alloca1.field17.field0 + 4;
		alloca1.field3.field0 = anon18;
		uint64_t anon19 = (__zext uint64_t)*anon9;
		alloca1.field1.field0 = anon19;
		alloca1.field4.field0 = anon5;
		alloca1.field9.field0 = 4199582;
		alloca1.field17.field0 = alloca1.field17.field0;
		phi20 = anon18;
		phi21 = *anon9;
		phi22 = *anon6;
		phi23 = anon15;
		uint64_t phi24 = alloca1.field17.field0;
		alloca1.field9.field0 = 4199623;
		*(uint32_t*)(phi20 - 4) = phi21;
		if (phi21 == phi23)
		{
			uint32_t anon26 = phi22 - 2;
			uint64_t anon25 = (__zext uint64_t)anon26;
			alloca1.field4.field0 = anon25;
			*anon8 = anon26;
			alloca1.field9.field0 = 4199636;
			if (phi21 != 0)
			{
				alloca1.field1.field0 = anon25;
				alloca1.field9.field0 = 4199640;
				*(uint32_t*)(phi20 - 4) = anon26;
			}
		}
		if (phi21 != phi23 || phi21 == phi23 && phi21 != 0)
		{
			alloca1.field4.field0 = (__zext uint64_t)*anon8;
			alloca1.field6.field0 = phi20;
			anon27 = phi20 + 4;
			alloca1.field3.field0 = anon27;
			anon28 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon28;
			*anon8 = anon28;
			alloca1.field9.field0 = 4199613;
			phi24 = phi20;
		}
		*anon7 = phi24;
		anon30 = (uint32_t)alloca1.field2.field0;
		anon29 = anon30 - 2;
		alloca1.field1.field0 = (__zext uint64_t)anon29;
		*(uint32_t*)(alloca1.field8.field0 + 12) = anon29;
		*anon8 = anon29;
		alloca1.field9.field0 = 4199672;
		phi17 = anon19;
	}
	if (*anon6 == 0 || *anon6 != 0 && anon29 != 0)
	{
		uint32_t anon40;
		alloca1.field7.field0 = phi17;
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
		alloca1.field17.field0 = alloca1.field17.field0;
	}
	if (*anon6 != 0 && anon29 == 0)
	{
		phi41 = anon30;
		phi42 = alloca1.field8.field0;
		phi44 = (uint64_t**)&alloca1.field8.field0;
		phi45 = (uint64_t*)alloca1.field8.field0;
		alloca1.field17.field0 = alloca1.field17.field0;
	}
	uint64_t phi46 = alloca1.field17.field0;
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
	uint64_t phi_in50 = *phi45;
	uint32_t phi51 = 0;
	uint64_t phi52 = 4199836;
	do
	{
		uint32_t phi70;
		uint32_t phi53 = phi51;
		alloca1.field9.field0 = phi52;
		uint64_t phi54 = phi_in50;
		*anon49 = phi54;
		alloca1.field9.field0 = 4199935;
		alloca1.field1.field0 = (__zext uint64_t)*(uint32_t*)(phi42 + 12);
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
		*anon8 = *(uint32_t*)(phi42 + 12);
		alloca1.field9.field0 = 4199959;
		uint32_t phi55 = *anon9;
		uint64_t* phi56 = (uint64_t*)phi42;
		if (*(uint32_t*)(phi42 + 12) != 0)
		{
			uint32_t anon64;
			alloca1.field9.field0 = 4199968;
			do
			{
				alloca1.field9.field0 = 4199973;
				uint32_t anon57 = rand();
				uint64_t anon58 = (__zext uint64_t)anon57;
				alloca1.field1.field0 = anon58;
				alloca1.field4.field0 = anon58 + 255 & 0xffffffff;
				alloca1.field9.field0 = 4199984;
				uint32_t phi59 = anon57;
				if (anon57 <= 4294967295)
				{
					uint32_t anon60 = anon57 + 255;
					alloca1.field1.field0 = (__zext uint64_t)anon60;
					phi59 = anon60;
				}
				uint64_t anon61 = alloca1.field17.field0 + ((__sext int64_t)*anon8 << 2);
				alloca1.field3.field0 = anon61;
				uint64_t anon62 = ((__zext uint64_t)phi59 << 32 >> 40) % (__sext int64_t)*(uint32_t*)&alloca1.field7.field0;
				*anon36 = (uint32_t)anon62;
				uint32_t* anon63 = (uint32_t*)anon61;
				*anon38 = *anon63;
				*anon63 = *(uint32_t*)(alloca1.field17.field0 + (anon62 << 32 >> 30));
				alloca1.field4.field0 = (__zext uint64_t)*anon38;
				*(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon36 << 2)) = *anon38;
				alloca1.field7.field0 = (__zext uint64_t)*anon8;
				anon64 = *anon8 - 1;
				alloca1.field1.field0 = (__zext uint64_t)anon64;
				*anon8 = anon64;
				alloca1.field9.field0 = 4200060;
			}
			while (anon64 != 0);
			phi55 = *anon9;
			phi56 = *phi44;
		}
		*anon36 = phi55;
		alloca1.field1.field0 = (__zext uint64_t)((uint32_t)alloca1.field2.field0 + 1 - *anon14);
		alloca1.field9.field0 = 4200073;
		alloca1.field7.field0 = *phi56;
		*anon8 = 0;
		alloca1.field10.field0 = 0;
		alloca1.field9.field0 = 4200100;
		*anon49 = *phi56;
		uint64_t phi65 = 4200106;
		uint64_t phi66 = 8;
		uint64_t phi67 = 2099034;
		uint64_t phi68 = 4200108;
		do
		{
			alloca1.field9.field0 = phi65;
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
					phi65 = 4200248;
					phi66 = 24;
					phi67 = 2098868;
					phi68 = 4200250;
				}
			}
		}
		while (*(uint32_t*)&alloca1.field16.field0 > phi70);
		uint32_t anon80 = *anon14 * *(uint32_t*)(phi46 + ((__sext int64_t)*anon36 << 2));
		*(uint32_t*)(*anon49 + ((__sext int64_t)phi53 << 2)) = anon80;
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
		uint64_t phi85 = *anon49;
		phi86 = anon81;
		if ((uint32_t)anon84 == 0)
		{
			uint32_t anon87 = anon80 + 2;
			alloca1.field3.field0 = (__zext uint64_t)anon87;
			uint64_t anon88 = *anon49 + anon48;
			alloca1.field6.field0 = anon88;
			alloca1.field9.field0 = 4199922;
			*anon36 = anon87;
			phi85 = anon88;
			phi86 = anon87;
		}
		phi54 = phi85;
		alloca1.field9.field0 = 4199930;
		phi53 = anon82;
		if (phi86 >= phi41)
		{
			uint32_t anon89 = phi86 - phi41;
			alloca1.field3.field0 = (__zext uint64_t)anon89;
			alloca1.field9.field0 = 4200232;
			*anon36 = anon89;
			phi_in50 = phi54;
			phi51 = anon82;
			phi52 = 4200237;
		}
	}
	while (phi86 >= phi41);
	alloca1.field9.field0 = 4199619;
	alloca1.field5.field0 = (__zext uint64_t)anon28;
	alloca1.field17.field0 = phi20;
	phi20 = anon27;
	phi21 = anon28;
	phi22 = *anon8;
	phi23 = anon28;
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
