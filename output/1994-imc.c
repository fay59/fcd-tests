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
			uint64_t phi24 = phi22;
			anon25 = (uint32_t*)0x601dec;
			anon26 = anon9 - 1;
			*anon25 = anon26;
			uint32_t phi27 = anon26;
			uint32_t phi28 = phi23;
			uint64_t phi29 = phi24;
			if (anon9 != 0)
			{
				do
				{
					*(uint32_t*)phi29 = *(uint32_t*)(((__sext int64_t)(phi27 ^ *anon16 & phi28 ^ (phi28 >> 31) + phi28 >> 1) << 2) + arg3);
					uint32_t anon30 = *anon25 - 1;
					*anon25 = anon30;
					phi23 = *anon8;
					uint64_t anon31 = phi29 + 4;
					phi24 = anon31;
					phi27 = anon30;
					phi28 = *anon8;
					phi29 = anon31;
				}
				while (*anon25 != 0);
			}
			uint32_t anon32 = phi23 - 1;
			*anon8 = anon32;
			phi21 = anon32;
			anon33 = phi24 + (arg4 << 32 >> 30);
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
		uint64_t anon50;
		uint32_t phi40 = *anon8;
		uint64_t phi41 = arg2;
		do
		{
			uint64_t anon48;
			uint32_t phi42 = phi40;
			uint64_t phi_in43 = phi41;
			*anon25 = *anon8;
			uint32_t phi44 = *anon8;
			do
			{
				uint64_t phi45 = phi_in43;
				uint32_t* anon46 = (uint32_t*)phi45;
				*anon46 = *anon46 + (*(uint32_t*)(((__sext int64_t)(phi44 ^ (phi42 >> 31) + phi42 >> 1 ^ *anon16 & phi42) << 2) + arg3) << 2);
				uint32_t anon47 = *anon25 - 1;
				*anon25 = anon47;
				phi44 = anon47;
				phi42 = *anon8;
				anon48 = phi45 + 4;
				phi_in43 = anon48;
			}
			while (*anon25 != 0);
			uint32_t anon49 = *anon8 - 1;
			*anon8 = anon49;
			phi40 = anon49;
			anon50 = anon48 + (arg4 << 32 >> 30);
			phi41 = anon50;
		}
		while (*anon8 != 0);
		*anon7 = anon50;
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
		uint64_t phi52 = phi9;
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
			phi52 = phi61;
			phi23 = phi9;
			anon84 = phi10 & 0xffffffff;
			phi24 = anon84;
			phi50 = phi_in83;
			phi53 = (uint32_t)phi63;
		}
		if (anon55 != anon54 && anon54 != 0 || anon54 == 0)
		{
			uint64_t phi88;
			uint32_t phi89;
			uint64_t phi90;
			uint32_t anon96;
			uint32_t anon97;
			uint64_t phi_in85 = phi52;
			uint32_t phi86 = phi53;
			uint32_t anon87 = anon51 - anon54;
			if (anon87 < 3)
			{
				phi88 = arg4 & 0xf;
				phi89 = (uint32_t)phi_in85;
				phi90 = phi_in85;
			}
			else 
			{
				uint32_t anon95;
				uint32_t* anon91 = (uint32_t*)(arg1 - 240);
				*anon91 = phi86;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon91 = anon58;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in92 = 0;
				do
				{
					uint32_t phi93 = phi_in92;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon94 = phi93 + 1;
					phi_in92 = anon94;
					anon96 = anon55 - anon54;
					anon95 = (uint32_t)(((__zext uint64_t)anon96 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon94 < anon95);
				phi23 = phi9;
				phi24 = anon84;
				anon97 = anon95 << 2;
				if (anon96 != anon97)
				{
					phi88 = arg4;
					uint32_t anon98 = phi50 - anon97;
					phi89 = anon98;
					phi90 = (__zext uint64_t)anon98;
					phi86 = anon98;
				}
			}
			if (anon87 < 3 || anon87 >= 3 && anon96 != anon97)
			{
				struct { uint32_t field0; bool field1; } anon99 = llvm.ssub.with.overflow.i32(anon58, phi86);
				uint32_t anon100 = anon58 - phi86;
				*(uint32_t*)(phi88 + ((__sext int64_t)phi86 << 2)) = (__zext uint32_t)(anon100 != 0 & !(anon100 < 0 ^ anon99.field1));
				phi23 = phi9;
				phi24 = anon84;
				if (phi86 != 0)
				{
					uint32_t anon102 = (uint32_t)(phi90 + 4294967295);
					struct { uint32_t field0; bool field1; } anon101 = llvm.ssub.with.overflow.i32(anon58, anon102);
					uint32_t anon103 = anon58 - anon102;
					*(uint32_t*)(phi88 + ((phi90 << 32) - 4294967296 >> 30)) = (__zext uint32_t)(anon103 != 0 & !(anon103 < 0 ^ anon101.field1));
					phi23 = phi9;
					phi24 = anon84;
					if (anon102 != 0)
					{
						uint32_t anon105 = phi89 - 2;
						struct { uint32_t field0; bool field1; } anon104 = llvm.ssub.with.overflow.i32(anon58, anon105);
						uint32_t anon106 = anon58 - anon105;
						*(uint32_t*)(phi88 + ((__sext int64_t)anon105 << 2)) = (__zext uint32_t)(anon106 != 0 & !(anon106 < 0 ^ anon104.field1));
						phi23 = phi9;
						phi24 = anon84;
					}
				}
			}
		}
	}
	uint64_t* anon107 = (uint64_t*)0x601df8;
	*anon107 = arg3;
	if ((anon13 >> 30) + arg3 > arg3)
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
			uint32_t phi114;
			uint64_t phi115;
			uint64_t phi_in120;
			uint64_t phi_in121;
			uint32_t phi122;
			uint64_t phi123;
			uint32_t phi_in143;
			uint64_t anon174;
			uint32_t anon181;
			uint32_t phi111 = phi108;
			uint64_t phi_in112 = phi110;
			*anon8 = phi_in112;
			uint64_t phi113 = phi_in112;
			if (anon1 != 0)
			{
				uint32_t anon135;
				int64_t anon138;
				uint32_t phi_in139;
				uint32_t phi145;
				uint32_t anon151;
				uint32_t* anon154;
				uint64_t phi166;
				uint32_t phi171;
				uint64_t anon173;
				phi114 = phi111;
				phi115 = (anon2 - phi23 << 32 >> 30) - 4 + arg4;
				uint64_t anon119 = phi23 << 32;
				uint64_t anon118 = anon119 >> 30;
				uint64_t anon117 = (anon118 & 0xc) + arg4;
				phi116 = anon117;
				phi_in120 = 0;
				phi_in121 = phi_in112;
				phi122 = 0;
				phi123 = phi_in120;
				uint32_t* anon124 = (uint32_t*)0x601e00;
				uint32_t anon125 = (uint32_t)phi23;
				*anon124 = anon125;
				uint64_t phi_in126 = phi_in121;
				uint32_t phi127 = anon1;
				if (anon125 != 0)
				{
					uint32_t anon132;
					do
					{
						uint32_t anon128 = rand();
						uint64_t anon129 = ((__zext uint64_t)(anon128 > 4294967295 ? anon128 : anon128 + 255) << 32 >> 40) % (__sext int64_t)phi127;
						*anon33 = (uint32_t)anon129;
						uint32_t* anon130 = (uint32_t*)0x601e08;
						uint32_t* anon131 = (uint32_t*)(((__sext int64_t)*anon124 << 2) + arg4);
						*anon130 = *anon131;
						*anon131 = *(uint32_t*)((anon129 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon33 << 2) + arg4) = *anon130;
						anon132 = *anon124 - 1;
						*anon124 = anon132;
						phi127 = *anon124;
					}
					while (anon132 != 0);
					phi_in126 = *anon8;
				}
				uint32_t* anon133 = (uint32_t*)phi115;
				if (*anon133 == 0)
				{
					uint32_t phi134;
					bool anon146;
					uint64_t anon148;
					uint32_t phi_in149;
					uint64_t phi_in150;
					anon135 = anon1 - 1;
					phi134 = anon135;
					anon138 = anon2 << 32 >> 30;
					int64_t anon137 = anon138 + arg4;
					phi_in136 = anon137;
					phi_in139 = phi114;
					uint32_t anon140 = anon125 - phi122;
					if (phi114 > anon140)
					{
						uint64_t anon142;
						do
						{
							*anon33 = phi134;
							uint64_t phi141 = phi_in136;
							phi134 = *anon33 - 1;
							anon142 = phi141 - 4;
							phi_in136 = anon142;
						}
						while (*(uint32_t*)anon142 == 0);
						*anon133 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi_in139 = phi114 - 1;
					}
					else 
					{
						phi_in143 = phi144;
						phi145 = phi111;
						anon146 = anon1 != 3 | phi111 == 0;
						if (!anon146)
						{
							anon148 = (__zext uint64_t)anon140;
							phi147 = anon148;
							phi_in149 = anon135;
							phi_in150 = anon137;
							phi_in143 = phi144;
							phi145 = phi111;
						}
					}
					uint64_t phi147 = anon148;
					phi_in149 = anon135;
					phi_in150 = anon137;
					anon151 = phi122 + anon135 - anon125;
					if (phi111 <= anon140 && !anon146 && phi144 == 2 | anon140 == anon151 || phi111 > anon140)
					{
						uint64_t anon153;
						do
						{
							*anon33 = phi_in149;
							uint64_t phi152 = phi_in150;
							phi147 = phi147 & 0xffffffffffffff00 | (__zext uint64_t)(*anon33 == anon151);
							phi_in149 = *anon33 - 1;
							anon153 = phi152 - 4;
							phi_in150 = anon153;
						}
						while (*anon33 == anon151 | *(uint32_t*)anon153 == 0);
						anon154 = (uint32_t*)phi116;
						*anon154 = 1;
						*(uint32_t*)(arg4 + 4) = 0;
						phi_in143 = phi144 - (__zext uint32_t)(anon140 == anon151);
						phi145 = phi111 - 1;
					}
				}
				else 
				{
					uint64_t phi_in155;
					uint32_t phi_in159;
					uint64_t phi_in161;
					*anon33 = anon135;
					uint64_t anon156 = (arg4 & 0xf) + anon138 - 4;
					phi_in155 = anon156;
					if (phi114 == 0)
					{
						uint32_t* anon158;
						uint32_t* anon162;
						do
						{
							uint64_t phi157 = phi_in155;
							*anon33 = *anon33 - 1;
							phi_in155 = phi157 - 4;
							anon158 = (uint32_t*)phi157;
						}
						while (*anon158 != 0);
						*anon158 = 1;
						*anon133 = 0;
						phi_in139 = phi114;
						do
						{
							*anon33 = phi_in159;
							uint64_t phi160 = phi_in161;
							phi_in159 = *anon33 - 1;
							phi_in161 = phi160 - 4;
							anon162 = (uint32_t*)phi160;
						}
						while (*anon162 != 0 | *anon33 == anon151);
						*anon162 = 1;
						*anon154 = 0;
						phi_in143 = phi144;
						phi145 = phi111;
					}
					else 
					{
						phi_in139 = phi114 - 1;
						phi_in143 = phi144;
						phi145 = phi111 - 1;
					}
					phi_in159 = anon135;
					phi_in161 = anon156;
				}
				uint32_t phi144 = phi_in139;
				phi111 = phi145;
				uint64_t* anon163 = (uint64_t*)0x601df0;
				*anon163 = arg4;
				*anon33 = anon125;
				uint32_t phi164 = anon125;
				uint64_t phi_in165 = arg4;
				do
				{
					phi166 = phi_in126;
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
					*anon33 = anon172;
					phi_in126 = phi166 + 4;
					phi164 = anon172;
					anon173 = phi168 + 4;
					phi_in165 = anon173;
				}
				while (phi171 != 0);
				*anon163 = anon173;
				anon174 = phi166 + 4;
				*anon8 = anon174;
				uint32_t phi175 = anon125;
				uint64_t phi176 = phi23 & 0xffffffff;
				uint32_t phi177 = anon125;
				uint32_t anon179 = anon125 + 1;
				uint32_t anon180 = (uint32_t)(anon118 + 4 + arg4 >> 2) & 3;
				uint32_t anon178 = anon179 < 6 ? anon179 : anon179 < anon180 ? anon179 : anon180;
				if (anon178 != 0)
				{
					uint32_t phi184;
					int64_t anon183 = anon20 >> 31;
					int64_t anon182 = anon2 + anon183;
					anon181 = (uint32_t)(anon182 << 32 >> 33) + (uint32_t)anon183 - ((uint32_t)anon182 & 1);
					*(uint32_t*)anon117 = (__zext uint32_t)(anon125 < anon181);
					uint64_t anon186 = phi23 + 4294967295;
					uint32_t anon185 = (uint32_t)anon186;
					phi184 = anon185;
					uint64_t phi187 = anon186;
					uint32_t phi188 = anon185;
					if (anon178 != 1)
					{
						*(uint32_t*)((anon119 - 4294967296 >> 30) + arg4) = (__zext uint32_t)(anon185 < anon181);
						uint64_t anon190 = phi23 + 4294967294;
						uint32_t anon189 = (uint32_t)anon190;
						phi184 = anon189;
						phi187 = anon190;
						phi188 = anon189;
						if (anon178 != 2)
						{
							struct { uint32_t field0; bool field1; } anon191 = llvm.ssub.with.overflow.i32(anon181, anon189);
							uint32_t anon192 = anon181 - anon189;
							*(uint32_t*)((anon119 - 8589934592 >> 30) + arg4) = (__zext uint32_t)(anon192 != 0 & !(anon192 < 0 ^ anon191.field1));
							uint64_t anon194 = phi23 + 4294967293;
							uint32_t anon193 = (uint32_t)anon194;
							phi184 = anon193;
							phi187 = anon194;
							phi188 = anon193;
							if (anon178 != 3)
							{
								struct { uint32_t field0; bool field1; } anon195 = llvm.ssub.with.overflow.i32(anon181, anon193);
								uint32_t anon196 = anon181 - anon193;
								*(uint32_t*)((anon119 - 12884901888 >> 30) + arg4) = (__zext uint32_t)(anon196 != 0 & !(anon196 < 0 ^ anon195.field1));
								uint64_t anon198 = phi23 + 4294967292;
								uint32_t anon197 = (uint32_t)anon198;
								phi184 = anon197;
								phi187 = anon198;
								phi188 = anon197;
								if (anon178 == 5)
								{
									struct { uint32_t field0; bool field1; } anon199 = llvm.ssub.with.overflow.i32(anon181, anon197);
									uint32_t anon200 = anon181 - anon197;
									*(uint32_t*)((anon119 - 17179869184 >> 30) + arg4) = (__zext uint32_t)(anon200 != 0 & !(anon200 < 0 ^ anon199.field1));
									phi184 = (uint32_t)(phi23 + 4294967291);
									phi187 = phi23 + 4294967291;
									phi188 = anon197 - 1;
								}
							}
						}
					}
					phi175 = phi184;
					phi177 = phi188;
					phi176 = phi187 & 0xffffffff;
				}
				if (anon179 != anon178 && anon178 != 0 || anon178 == 0)
				{
					uint32_t phi204;
					uint64_t phi205;
					uint32_t phi206;
					uint32_t anon207;
					uint32_t anon208;
					uint64_t phi_in201 = phi176;
					uint32_t phi202 = phi177;
					uint32_t anon203 = anon125 - anon178;
					if (anon203 < 3)
					{
						phi204 = (uint32_t)phi_in201;
						phi205 = phi_in201;
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
				phi113 = *anon107;
			}
			uint64_t anon214 = phi113 + *(uint64_t*)(arg1 - 168);
			*anon107 = anon214;
			phi108 = anon181;
			phi110 = anon214;
			phi114 = phi_in143;
			phi115 = phi115 + 4;
			uint64_t phi116 = phi116 - 4;
			uint64_t anon215 = phi123 + 1;
			phi_in120 = anon215;
			phi_in121 = anon174;
			phi122 = (uint32_t)anon215;
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
	uint32_t phi87;
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
		alloca1.field7.field0 = (__zext uint64_t)*anon9;
	}
	else 
	{
		uint64_t phi27;
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
		phi23 = anon16;
		uint64_t phi_in24 = alloca1.field17.field0;
		alloca1.field9.field0 = 4199623;
		*(uint32_t*)(phi20 - 4) = phi21;
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
				*(uint32_t*)(phi20 - 4) = anon26;
			}
		}
		if (phi21 != phi23 || phi21 == phi23 && phi21 != 0)
		{
			alloca1.field4.field0 = (__zext uint64_t)*anon8;
			alloca1.field6.field0 = phi20;
			anon28 = phi20 + 4;
			alloca1.field3.field0 = anon28;
			anon29 = *anon8 - 1;
			alloca1.field1.field0 = (__zext uint64_t)anon29;
			*anon8 = anon29;
			alloca1.field9.field0 = 4199613;
			phi27 = phi20;
		}
		*anon7 = phi27;
		anon31 = (uint32_t)alloca1.field2.field0;
		anon30 = anon31 - 2;
		alloca1.field1.field0 = (__zext uint64_t)anon30;
		*(uint32_t*)(alloca1.field8.field0 + 12) = anon30;
		*anon8 = anon30;
		alloca1.field9.field0 = 4199672;
		alloca1.field7.field0 = anon19;
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
	alloca1.field4.field0 = (__zext uint64_t)*anon17;
	int64_t anon48 = (__sext int64_t)phi42;
	alloca1.field1.field0 = anon48;
	alloca1.field16.field0 = (__zext uint64_t)(phi42 * phi42);
	uint64_t anon49 = alloca1.field14.field0 << 2;
	alloca1.field14.field0 = anon49;
	alloca1.field10.field0 = 0;
	*(uint32_t*)(phi47 + ((__zext uint64_t)phi42 << 2) - 4) = *anon17;
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
		uint64_t phi_in54 = phi51;
		uint32_t phi55 = phi52;
		alloca1.field9.field0 = phi53;
		uint64_t phi56 = phi_in54;
		*anon50 = phi56;
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
		alloca1.field1.field0 = (__zext uint64_t)((uint32_t)alloca1.field2.field0 + 1 - *anon15);
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
				uint32_t anon73 = *anon72 + *anon15 * *(uint32_t*)(alloca1.field17.field0 + ((__sext int64_t)*anon37 << 2));
				*anon72 = anon73;
				uint64_t anon74 = (__zext uint64_t)anon73;
				alloca1.field6.field0 = anon74;
				alloca1.field10.field0 = (__zext uint64_t)anon73 + 1 & 0xffffffff;
				uint32_t anon75 = anon73 + 1;
				alloca1.field3.field0 = (__zext uint64_t)anon75;
				*anon37 = anon75;
				uint32_t anon76 = anon73 + 1;
				*anon8 = anon76;
				int64_t anon77 = (__sext int64_t)anon76;
				int64_t anon78 = (__sext int64_t)*(uint32_t*)&((uint8_t*)&alloca1)[phi67];
				alloca1.field1.field0 = anon77 / anon78 & 0xffffffff;
				int64_t anon79 = anon77 % anon78;
				alloca1.field4.field0 = anon79 & 0xffffffff;
				alloca1.field9.field0 = 4200180;
				uint32_t phi80 = anon75;
				if ((uint32_t)anon79 == 0)
				{
					*anon37 = anon73;
					alloca1.field7.field0 = alloca1.field7.field0 + alloca1.field14.field0;
					alloca1.field9.field0 = 4200191;
					alloca1.field3.field0 = anon74;
					phi80 = anon73;
				}
				alloca1.field9.field0 = 4200195;
				phi_in70 = anon76;
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
		uint32_t anon81 = *anon15 * *(uint32_t*)(phi47 + ((__sext int64_t)*anon37 << 2));
		*(uint32_t*)(*anon50 + ((__sext int64_t)phi55 << 2)) = anon81;
		alloca1.field11.field0 = (__zext uint64_t)anon81;
		alloca1.field10.field0 = (__zext uint64_t)anon81 + 1 & 0xffffffff;
		uint32_t anon82 = anon81 + 1;
		alloca1.field3.field0 = (__zext uint64_t)anon82;
		uint32_t anon83 = anon81 + 1;
		*anon8 = anon83;
		*anon37 = anon82;
		int64_t anon84 = (__sext int64_t)anon83;
		alloca1.field1.field0 = anon84 / anon48 & 0xffffffff;
		int64_t anon85 = anon84 % anon48;
		alloca1.field4.field0 = anon85 & 0xffffffff;
		alloca1.field9.field0 = 4199909;
		uint64_t phi86 = *anon50;
		phi87 = anon82;
		if ((uint32_t)anon85 == 0)
		{
			uint32_t anon88 = anon81 + 2;
			alloca1.field3.field0 = (__zext uint64_t)anon88;
			uint64_t anon89 = *anon50 + anon49;
			alloca1.field6.field0 = anon89;
			alloca1.field9.field0 = 4199922;
			*anon37 = anon88;
			phi86 = anon89;
			phi87 = anon88;
		}
		alloca1.field9.field0 = 4199930;
		phi56 = phi86;
		phi55 = anon83;
		if (phi87 >= phi42)
		{
			uint32_t anon90 = phi87 - phi42;
			alloca1.field3.field0 = (__zext uint64_t)anon90;
			alloca1.field9.field0 = 4200232;
			*anon37 = anon90;
			phi51 = phi86;
			phi52 = anon83;
			phi53 = 4200237;
		}
	}
	while (phi87 >= phi42);
	alloca1.field9.field0 = 4199619;
	alloca1.field5.field0 = (__zext uint64_t)anon29;
	alloca1.field17.field0 = phi20;
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
