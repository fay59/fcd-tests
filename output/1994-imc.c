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
	uint64_t phi_in3;
	uint8_t* anon6;
	uint32_t* anon7;
	getpid(4195794);
	srand(0);
	uint32_t anon1 = (uint32_t)arg2;
	if (anon1 >= 2)
	{
		anon2 = sscanf(*(uint8_t**)(arg3 + 8), (uint8_t*)0x401894);
		phi_in3 = 0;
	}
	if (anon1 < 2 || anon2 != 1 && anon1 >= 2)
	{
		*(uint32_t*)(arg1 - 36) = 5;
		phi_in3 = 100;
	}
	uint64_t phi4 = phi_in3;
	uint8_t* anon5 = malloc(phi4);
	if (anon5 != null)
	{
		anon7 = (uint32_t*)(arg1 - 36);
		anon6 = malloc((__sext int64_t)*anon7 << 2);
	}
	if (anon5 == null || anon5 != null && anon6 == null)
	{
		perror((uint8_t*)0x401897);
	}
	if (anon6 != null && anon5 != null)
	{
		((*anon7 & 1) == 0 ? (void(*)(uint64_t, uint64_t))0x400a80 : (void(*)(uint64_t, uint64_t))0x401420)((uint64_t)anon5, (uint64_t)anon6);
		uint32_t* anon8 = (uint32_t*)0x601e00;
		*anon8 = 0;
		if (*anon7 * *anon7 != 0)
		{
			uint32_t anon9;
			do
			{
				printf((uint8_t*)0x40189e);
				anon9 = *anon8 + 1;
				*anon8 = anon9;
			}
			while (*anon7 * *anon7 > anon9);
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
	uint32_t* anon26;
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
		uint32_t phi38;
		uint64_t anon41;
		uint32_t phi_in20 = anon19;
		uint64_t phi_in21 = *anon7;
		uint64_t phi_in22 = arg1;
		do
		{
			uint32_t phi23 = phi_in20;
			uint64_t phi24 = phi_in21;
			uint64_t phi25 = phi_in22;
			anon26 = (uint32_t*)0x601dec;
			uint32_t anon27 = anon9 - 1;
			*anon26 = anon27;
			uint32_t phi_in28 = phi23;
			uint64_t phi_in29 = phi24;
			uint32_t phi_in30 = anon27;
			uint32_t phi_in31 = phi23;
			uint64_t phi_in32 = phi24;
			if ((uint32_t)phi25 != 0)
			{
				do
				{
					uint32_t phi33 = phi_in30;
					uint32_t phi34 = phi_in31;
					uint64_t phi35 = phi_in32;
					*(uint32_t*)phi35 = *(uint32_t*)(((__sext int64_t)(phi33 ^ *anon16 & phi34 ^ (phi34 >> 31) + phi34 >> 1) << 2) + arg3);
					uint32_t anon36 = *anon26 - 1;
					*anon26 = anon36;
					phi_in28 = *anon8;
					uint64_t anon37 = phi35 + 4;
					phi_in29 = anon37;
					phi_in30 = anon36;
					phi_in31 = *anon8;
					phi_in32 = anon37;
				}
				while (*anon26 != 0);
			}
			phi38 = phi_in28;
			uint64_t phi39 = phi_in29;
			uint32_t anon40 = phi38 - 1;
			*anon8 = anon40;
			phi_in20 = anon40;
			anon41 = phi39 + (arg4 << 32 >> 30);
			phi_in21 = anon41;
			phi_in22 = arg1 & 0xffffffff;
		}
		while (phi38 != 0);
		*anon7 = anon41;
	}
	uint32_t anon42 = rand();
	uint32_t anon43 = (uint32_t)(((__zext uint64_t)(anon42 > 4294967295 ? anon42 : anon42 + 255) << 32 >> 40) % anon4);
	*anon2 = anon43;
	*anon5 = 3 - anon43;
	uint32_t anon44 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	uint32_t anon45 = (uint32_t)(arg1 + 4294967295);
	*anon8 = anon45;
	uint64_t anon48 = (__zext uint64_t)anon44;
	uint64_t anon47 = (anon44 > 4294967295 ? anon48 : anon48 + 255) >> 31 & 1;
	uint32_t anon46 = *(uint32_t*)(((__zext uint64_t)(((anon44 > 4294967295 ? anon44 : anon44 + 255) & 0x100) != 0 ^ anon47 != 0) - anon47 << 2) + arg3) ^ 1;
	*anon10 = anon46;
	*anon14 = 3 - anon46;
	if (anon9 != 0)
	{
		uint64_t anon63;
		uint32_t phi_in49 = anon45;
		uint64_t phi_in50 = arg2;
		do
		{
			uint64_t anon61;
			uint32_t phi51 = phi_in49;
			uint64_t phi52 = phi_in50;
			*anon26 = anon45;
			uint64_t phi_in53 = phi52;
			uint32_t phi_in54 = anon45;
			uint32_t phi_in55 = phi51;
			do
			{
				uint64_t phi56 = phi_in53;
				uint32_t phi57 = phi_in54;
				uint32_t phi58 = phi_in55;
				uint32_t* anon59 = (uint32_t*)phi56;
				*anon59 = *anon59 + (*(uint32_t*)(((__sext int64_t)(phi57 ^ (phi58 >> 31) + phi58 >> 1 ^ *anon16 & phi58) << 2) + arg3) << 2);
				uint32_t anon60 = *anon26 - 1;
				*anon26 = anon60;
				anon61 = phi56 + 4;
				phi_in53 = anon61;
				phi_in54 = anon60;
				phi_in55 = *anon8;
			}
			while (*anon26 != 0);
			uint32_t anon62 = *anon8 - 1;
			*anon8 = anon62;
			phi_in49 = anon62;
			anon63 = anon61 + (arg4 << 32 >> 30);
			phi_in50 = anon63;
		}
		while (*anon8 != 0);
		*anon7 = anon63;
	}
	return;
}
void e(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t anon6;
	uint64_t anon7;
	uint64_t anon8;
	uint64_t* anon9;
	uint32_t phi_in10;
	uint64_t phi_in11;
	uint64_t anon12;
	uint64_t anon13;
	uint32_t phi_in14;
	uint32_t phi_in15;
	uint32_t phi_in22;
	uint64_t phi_in23;
	uint32_t* anon33;
	uint64_t phi_in128;
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
		phi_in10 = 3;
		anon13 = arg2 << 32;
		anon12 = anon13 >> 32;
		phi_in11 = anon12 + anon7 << 2;
		phi_in14 = 3;
		phi_in15 = 4;
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
			phi_in22 = 4294967295;
			anon24 = (anon21 >> 32) * (anon12 + anon7 << 32 >> 32);
			phi_in23 = anon24 & 0xffffffff;
		}
		else 
		{
			phi_in10 = (uint32_t)(anon2 + 4294967295);
			phi_in11 = anon24;
			phi_in14 = anon1 - 1;
			phi_in15 = anon1;
		}
	}
	if (anon1 != 4 && anon1 != 0 || anon1 == 4)
	{
		uint32_t phi31;
		uint64_t anon44;
		uint64_t anon48;
		uint32_t phi_in49;
		uint32_t anon55;
		uint32_t phi25 = phi_in10;
		uint64_t phi26 = phi_in11;
		uint32_t phi27 = phi_in14;
		uint32_t phi28 = phi_in15;
		uint32_t phi_in29 = phi27;
		uint64_t phi_in30 = arg3;
		do
		{
			phi31 = phi_in29;
			uint64_t phi32 = phi_in30;
			anon33 = (uint32_t*)0x601dec;
			uint32_t anon35 = (uint32_t)anon12;
			uint32_t anon34 = anon35 - 1;
			*anon33 = anon34;
			uint64_t phi_in36 = phi32;
			uint64_t phi_in37 = phi32;
			uint32_t phi_in38 = anon34;
			if (anon35 != 0)
			{
				do
				{
					uint64_t phi39 = phi_in37;
					uint32_t phi40 = phi_in38;
					uint64_t phi_in41 = 3;
					if (anon1 > phi40)
					{
						uint32_t* anon42 = (uint32_t*)phi39;
						*anon42 = *anon42 + (phi28 * phi28 << 1);
						phi_in41 = ((__zext uint64_t)(anon1 <= *anon33) << 2) + 4294967295 & 0xffffffff;
					}
					uint64_t phi43 = phi_in41;
					anon44 = phi26 & 0xffffffff;
					*(uint32_t*)(phi39 + (anon44 << 32 >> 30)) = anon1 * (uint32_t)(anon2 * phi43) + *(uint32_t*)phi39;
					uint32_t anon45 = *anon33 - 1;
					*anon33 = anon45;
					uint64_t anon46 = phi39 + 4;
					phi_in36 = anon46;
					phi_in37 = anon46;
					phi_in38 = anon45;
				}
				while (*anon33 != 0);
			}
			uint64_t phi47 = phi_in36;
			phi_in29 = phi31 - 1;
			anon48 = phi47 + (anon8 >> 30);
			phi_in30 = anon48;
		}
		while (phi31 != 256);
		*anon9 = anon48;
		uint32_t anon50 = phi25 + 1;
		int64_t anon52 = (__sext int64_t)phi25 << 2;
		uint32_t anon51 = (uint32_t)(anon52 + 4 + arg4 >> 2) & 3;
		phi_in49 = anon50 < anon51 ? anon50 : anon51;
		if (phi25 == 4294967295 || phi25 == 4 || phi25 == 3 || phi25 == 2 || phi25 == 1 || phi25 == 0)
		{
			phi_in49 = anon50;
		}
		uint32_t phi53 = phi_in49;
		uint32_t phi_in54 = phi25;
		if (phi53 != 0)
		{
			uint32_t phi_in56;
			anon55 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)(anon52 + arg4) = (__zext uint32_t)(phi25 < anon55);
			uint32_t anon57 = phi25 - 1;
			phi_in56 = anon57;
			if (phi53 != 1)
			{
				struct { uint32_t field0; bool field1; } anon58 = llvm.ssub.with.overflow.i32(anon55, anon57);
				uint32_t anon59 = anon55 - anon57;
				*(uint32_t*)(((__zext uint64_t)anon57 << 32 >> 30) + arg4) = (__zext uint32_t)(anon59 != 0 & !(anon59 < 0 ^ anon58.field1));
				uint32_t anon60 = phi25 - 2;
				phi_in56 = anon60;
				if (phi53 != 2)
				{
					struct { uint32_t field0; bool field1; } anon61 = llvm.ssub.with.overflow.i32(anon55, anon60);
					uint32_t anon62 = anon55 - anon60;
					*(uint32_t*)(((__zext uint64_t)anon60 << 32 >> 30) + arg4) = (__zext uint32_t)(anon62 != 0 & !(anon62 < 0 ^ anon61.field1));
					uint32_t anon63 = phi25 - 3;
					phi_in56 = anon63;
					if (phi53 != 3)
					{
						struct { uint32_t field0; bool field1; } anon64 = llvm.ssub.with.overflow.i32(anon55, anon63);
						uint32_t anon65 = anon55 - anon63;
						*(uint32_t*)(((__zext uint64_t)anon63 << 32 >> 30) + arg4) = (__zext uint32_t)(anon65 != 0 & !(anon65 < 0 ^ anon64.field1));
						uint32_t anon66 = phi25 - 4;
						phi_in56 = anon66;
						if (phi53 == 5)
						{
							struct { uint32_t field0; bool field1; } anon67 = llvm.ssub.with.overflow.i32(anon55, anon66);
							uint32_t anon68 = anon55 - anon66;
							*(uint32_t*)(((__zext uint64_t)anon66 << 32 >> 30) + arg4) = (__zext uint32_t)(anon68 != 0 & !(anon68 < 0 ^ anon67.field1));
							phi_in56 = phi25 - 5;
						}
					}
				}
			}
			uint32_t phi69 = phi_in56;
			phi_in22 = phi25;
			phi_in23 = anon44;
			phi_in54 = phi69;
		}
		if (phi53 == 0 || anon50 != phi53 && phi53 != 0)
		{
			uint32_t anon78;
			uint32_t anon79;
			uint32_t phi70 = phi_in54;
			uint32_t phi_in71 = phi70;
			uint32_t anon72 = phi25 - phi53;
			if (anon72 >= 3)
			{
				uint32_t anon77;
				uint32_t* anon73 = (uint32_t*)(arg1 - 240);
				*anon73 = phi70;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon73 = anon55;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in74 = 0;
				do
				{
					uint32_t phi75 = phi_in74;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon76 = phi75 + 1;
					phi_in74 = anon76;
					anon78 = anon50 - phi53;
					anon77 = (uint32_t)(((__zext uint64_t)anon78 + 4294967292 >> 2 & 0x3fffffff) + 1);
				}
				while (anon76 < anon77);
				phi_in22 = phi25;
				phi_in23 = anon44;
				anon79 = anon77 << 2;
				phi_in71 = phi70 - anon79;
			}
			if (anon78 != anon79 && anon72 >= 3 || anon72 < 3)
			{
				uint32_t phi80 = phi_in71;
				struct { uint32_t field0; bool field1; } anon81 = llvm.ssub.with.overflow.i32(anon55, phi80);
				uint32_t anon82 = anon55 - phi80;
				*(uint32_t*)(((__sext int64_t)phi80 << 2) + arg4) = (__zext uint32_t)(anon82 != 0 & !(anon82 < 0 ^ anon81.field1));
				phi_in22 = phi25;
				phi_in23 = anon44;
				if (phi80 != 0)
				{
					uint32_t anon84 = phi80 - 1;
					struct { uint32_t field0; bool field1; } anon83 = llvm.ssub.with.overflow.i32(anon55, anon84);
					uint32_t anon85 = anon55 - anon84;
					*(uint32_t*)(((__zext uint64_t)anon84 << 32 >> 30) + arg4) = (__zext uint32_t)(anon85 != 0 & !(anon85 < 0 ^ anon83.field1));
					phi_in22 = phi25;
					phi_in23 = anon44;
					if (anon84 != 0)
					{
						uint32_t anon87 = phi80 - 2;
						struct { uint32_t field0; bool field1; } anon86 = llvm.ssub.with.overflow.i32(anon55, anon87);
						uint32_t anon88 = anon55 - anon87;
						*(uint32_t*)(((__sext int64_t)anon87 << 2) + arg4) = (__zext uint32_t)(anon88 != 0 & !(anon88 < 0 ^ anon86.field1));
						phi_in22 = phi25;
						phi_in23 = anon44;
					}
				}
			}
		}
	}
	uint32_t phi89 = phi_in22;
	uint64_t phi90 = phi_in23;
	uint64_t* anon91 = (uint64_t*)0x601df8;
	*anon91 = arg3;
	uint64_t anon92 = (anon13 >> 30) + arg3;
	if (anon92 > arg3)
	{
		uint32_t phi_in93;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon94 = anon2 + 1;
		phi_in93 = (uint32_t)(anon94 + (anon94 >> 31 & 1) << 32 >> 33);
		uint64_t phi_in95 = arg3;
		while (true)
		{
			uint32_t phi_in99;
			uint32_t phi_in100;
			uint64_t phi_in101;
			uint64_t phi_in105;
			uint64_t phi_in106;
			uint32_t phi_in107;
			uint64_t phi110;
			uint64_t phi112;
			uint64_t anon144;
			uint32_t phi164;
			uint32_t phi165;
			uint64_t anon179;
			uint32_t anon184;
			uint32_t phi96 = phi_in93;
			uint64_t phi97 = phi_in95;
			*anon9 = phi97;
			uint64_t phi_in98 = phi97;
			if (anon1 != 0)
			{
				uint32_t anon127;
				int64_t anon129;
				int64_t anon130;
				uint32_t phi_in131;
				uint32_t anon132;
				int64_t anon138;
				uint32_t phi_in149;
				uint32_t phi_in150;
				uint32_t anon153;
				uint64_t phi170;
				uint32_t phi176;
				uint64_t anon178;
				phi_in99 = phi96;
				phi_in100 = phi96;
				phi_in101 = (arg4 & 0xf) + ((__sext int64_t)(anon1 - phi89) << 2) - 4;
				int64_t anon104 = (__sext int64_t)phi89 << 2;
				int64_t anon103 = (anon104 & 0xc) + arg4;
				phi_in102 = anon103;
				phi_in105 = 0;
				phi_in106 = phi97;
				phi_in107 = 0;
				uint32_t phi108 = phi_in99;
				uint32_t phi109 = phi_in100;
				phi110 = phi_in101;
				uint64_t phi111 = phi_in102;
				phi112 = phi_in105;
				uint64_t phi113 = phi_in106;
				uint32_t phi114 = phi_in107;
				uint32_t* anon115 = (uint32_t*)0x601e00;
				*anon115 = phi89;
				uint64_t phi_in116 = phi113;
				uint32_t phi_in117 = anon1;
				if (phi89 != 0)
				{
					uint32_t anon123;
					do
					{
						uint32_t phi118 = phi_in117;
						uint32_t anon119 = rand();
						uint64_t anon120 = ((__zext uint64_t)(anon119 > 4294967295 ? anon119 : anon119 + 255) << 32 >> 40) % (__sext int64_t)phi118;
						*anon33 = (uint32_t)anon120;
						uint32_t* anon121 = (uint32_t*)0x601e08;
						uint32_t* anon122 = (uint32_t*)(((__sext int64_t)*anon115 << 2) + arg4);
						*anon121 = *anon122;
						*anon122 = *(uint32_t*)((anon120 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon33 << 2) + arg4) = *anon121;
						anon123 = *anon115 - 1;
						*anon115 = anon123;
						phi_in117 = *anon115;
					}
					while (anon123 != 0);
					phi_in116 = *anon9;
				}
				uint64_t phi124 = phi_in116;
				uint32_t* anon125 = (uint32_t*)phi110;
				if (*anon125 == 0)
				{
					uint32_t phi_in126;
					anon127 = anon1 - 1;
					phi_in126 = anon127;
					anon130 = anon2 << 32 >> 30;
					anon129 = anon130 + arg4;
					phi_in128 = anon129;
					phi_in131 = phi108;
					anon132 = phi89 - phi114;
					if (phi108 > anon132)
					{
						uint32_t phi133;
						uint64_t anon135;
						do
						{
							phi133 = phi_in126;
							uint64_t phi134 = phi_in128;
							*anon33 = phi133;
							phi_in126 = phi133 - 1;
							anon135 = phi134 - 4;
							phi_in128 = anon135;
						}
						while (*(uint32_t*)anon135 == 0);
						*anon125 = 1;
						*(uint32_t*)(((__sext int64_t)phi133 << 2) + arg4) = 0;
						phi_in131 = phi108 - 1;
					}
				}
				else 
				{
					uint64_t phi_in137;
					uint32_t phi_in136 = anon127;
					anon138 = anon130 - 4 + arg4;
					phi_in137 = anon138;
					if (phi108 == 0)
					{
						uint32_t* anon141;
						do
						{
							uint32_t phi139 = phi_in136;
							uint64_t phi140 = phi_in137;
							*anon33 = phi139;
							anon141 = (uint32_t*)phi140;
							if (*anon141 != 0)
							{
								phi_in136 = phi139 - 1;
								phi_in137 = phi140 - 4;
							}
						}
						while (*anon141 != 0);
						*anon141 = 1;
						*anon125 = 0;
						phi_in131 = phi108;
					}
					else 
					{
						phi_in131 = phi108 - 1;
					}
				}
				uint32_t phi142 = phi_in131;
				anon144 = phi111 & 0xffffffff00000000 | phi111 & 0xffffffff;
				uint32_t* anon143 = (uint32_t*)anon144;
				if (*anon143 == 0)
				{
					uint64_t phi_in145;
					bool anon151;
					uint64_t anon146 = (__zext uint64_t)anon132;
					phi_in145 = anon146;
					uint32_t phi_in147 = anon127;
					uint64_t phi_in148 = anon129;
					if (phi109 <= anon132)
					{
						phi_in149 = phi142;
						phi_in150 = phi109;
						anon151 = anon1 != 3 | phi109 == 0;
						if (!anon151)
						{
							phi_in145 = anon146;
							phi_in147 = anon127;
							phi_in148 = anon129;
							phi_in149 = phi142;
							phi_in150 = phi109;
						}
					}
					anon153 = phi114 + anon127 - phi89;
					bool anon152 = phi142 == 2 | anon132 == anon153;
					if (!anon151 && phi109 <= anon132 && anon152 || phi109 > anon132)
					{
						uint32_t phi155;
						bool anon157;
						do
						{
							uint64_t phi154 = phi_in145;
							phi155 = phi_in147;
							uint64_t phi156 = phi_in148;
							*anon33 = phi155;
							uint64_t anon158 = phi156 - 4;
							anon157 = phi155 == anon153 | *(uint32_t*)anon158 == 0;
							if (anon157)
							{
								phi_in145 = phi154 & 0xffffffffffffff00 | (__zext uint64_t)(phi155 == anon153);
								phi_in147 = phi155 - 1;
								phi_in148 = anon158;
							}
						}
						while (anon157);
						*anon143 = 1;
						*(uint32_t*)(((__sext int64_t)phi155 << 2) + arg4) = 0;
						phi_in149 = phi142 - (__zext uint32_t)(anon132 == anon153);
						phi_in150 = phi109 - 1;
					}
				}
				else 
				{
					uint32_t phi_in159 = anon127;
					uint64_t phi_in160 = anon138;
					if (phi109 == 0)
					{
						uint32_t phi161;
						uint32_t* anon163;
						do
						{
							phi161 = phi_in159;
							uint64_t phi162 = phi_in160;
							*anon33 = phi161;
							phi_in159 = phi161 - 1;
							phi_in160 = phi162 - 4;
							anon163 = (uint32_t*)phi162;
						}
						while (*anon163 != 0 | phi161 == anon153);
						*anon163 = 1;
						*anon143 = 0;
						phi_in149 = phi142;
						phi_in150 = phi109;
					}
					else 
					{
						phi_in149 = phi142;
						phi_in150 = phi109 - 1;
					}
				}
				phi164 = phi_in149;
				phi165 = phi_in150;
				uint64_t* anon166 = (uint64_t*)0x601df0;
				*anon166 = arg4;
				*anon33 = phi89;
				uint64_t phi_in167 = phi124;
				uint32_t phi_in168 = phi89;
				uint64_t phi_in169 = arg4;
				do
				{
					phi170 = phi_in167;
					uint32_t phi171 = phi_in168;
					uint64_t phi172 = phi_in169;
					uint32_t phi_in173 = phi171;
					if (*(uint32_t*)phi172 != 0)
					{
						uint32_t* anon174 = (uint32_t*)phi170;
						uint32_t* anon175 = (uint32_t*)(phi170 + (phi90 << 32 >> 30));
						*anon174 = *anon175;
						*anon175 = *anon174;
						phi_in173 = *anon33;
					}
					phi176 = phi_in173;
					uint32_t anon177 = phi176 - 1;
					*anon33 = anon177;
					phi_in167 = phi170 + 4;
					phi_in168 = anon177;
					anon178 = phi172 + 4;
					phi_in169 = anon178;
				}
				while (phi176 != 0);
				*anon166 = anon178;
				anon179 = phi170 + 4;
				*anon9 = anon179;
				uint32_t phi_in180 = phi89;
				uint32_t anon182 = phi89 + 1;
				uint32_t anon183 = (uint32_t)(anon104 + 4 + arg4 >> 2) & 3;
				uint32_t anon181 = anon182 < 6 ? anon182 : anon182 < anon183 ? anon182 : anon183;
				if (anon181 != 0)
				{
					uint32_t phi_in187;
					int64_t anon186 = anon3 >> 32;
					int64_t anon185 = anon186 & 1;
					anon184 = (uint32_t)(anon185 + anon2 << 32 >> 33) + (uint32_t)anon185 - ((uint32_t)(anon2 + anon186) & 1);
					*(uint32_t*)anon103 = (__zext uint32_t)(phi89 < anon184);
					uint32_t anon188 = phi89 - 1;
					phi_in187 = anon188;
					if (anon181 != 1)
					{
						*(uint32_t*)(((__zext uint64_t)anon188 << 32 >> 30) + arg4) = (__zext uint32_t)(anon188 < anon184);
						uint32_t anon189 = phi89 - 2;
						phi_in187 = anon189;
						if (anon181 != 2)
						{
							struct { uint32_t field0; bool field1; } anon190 = llvm.ssub.with.overflow.i32(anon184, anon189);
							uint32_t anon191 = anon184 - anon189;
							*(uint32_t*)(((__zext uint64_t)anon189 << 32 >> 30) + arg4) = (__zext uint32_t)(anon191 != 0 & !(anon191 < 0 ^ anon190.field1));
							uint32_t anon192 = phi89 - 3;
							phi_in187 = anon192;
							if (anon181 != 3)
							{
								struct { uint32_t field0; bool field1; } anon193 = llvm.ssub.with.overflow.i32(anon184, anon192);
								uint32_t anon194 = anon184 - anon192;
								*(uint32_t*)(((__zext uint64_t)anon192 << 32 >> 30) + arg4) = (__zext uint32_t)(anon194 != 0 & !(anon194 < 0 ^ anon193.field1));
								uint32_t anon195 = phi89 - 4;
								phi_in187 = anon195;
								if (anon181 == 5)
								{
									struct { uint32_t field0; bool field1; } anon196 = llvm.ssub.with.overflow.i32(anon184, anon195);
									uint32_t anon197 = anon184 - anon195;
									*(uint32_t*)(((__zext uint64_t)anon195 << 32 >> 30) + arg4) = (__zext uint32_t)(anon197 != 0 & !(anon197 < 0 ^ anon196.field1));
									phi_in187 = phi89 - 5;
								}
							}
						}
					}
					uint32_t phi198 = phi_in187;
					phi_in180 = phi198;
				}
				if (anon181 == 0 || anon182 != anon181 && anon181 != 0)
				{
					uint32_t anon206;
					uint32_t anon207;
					uint32_t phi199 = phi_in180;
					uint32_t phi_in200 = phi199;
					uint32_t anon201 = phi89 - anon181;
					if (anon201 >= 3)
					{
						uint32_t anon204;
						uint32_t anon205;
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						uint32_t phi_in202 = 0;
						do
						{
							uint32_t phi203 = phi_in202;
							(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
							(__asm "movdqa xmm3, xmm0")();
							(__asm "pcmpgtd xmm5, xmm0")();
							(__asm "paddd xmm3, xmm2")();
							(__asm "movdqa xmm0, xmm5")();
							(__asm "pand xmm0, xmm1")();
							(__asm "pshufd xmm0, xmm0, 0x1b")();
							(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
							anon204 = phi203 + 1;
							anon206 = anon182 - anon181;
							anon205 = (uint32_t)(((__zext uint64_t)anon206 + 4294967292 >> 2 & 0x3fffffff) + 1);
							if (anon204 < anon205)
							{
								(__asm "movdqa xmm0, xmm3")();
								phi_in202 = anon204;
							}
						}
						while (anon204 < anon205);
						anon207 = anon205 << 2;
						phi_in200 = phi199 - anon207;
					}
					if (anon201 < 3 || anon207 != anon206 && anon201 >= 3)
					{
						uint32_t phi208 = phi_in200;
						*(uint32_t*)(((__sext int64_t)phi208 << 2) + arg4) = (__zext uint32_t)(phi208 < anon184);
						if (phi208 != 0)
						{
							uint32_t anon210 = phi208 - 1;
							struct { uint32_t field0; bool field1; } anon209 = llvm.ssub.with.overflow.i32(anon184, anon210);
							uint32_t anon211 = anon184 - anon210;
							*(uint32_t*)(((__zext uint64_t)anon210 << 32 >> 30) + arg4) = (__zext uint32_t)(anon211 != 0 & !(anon211 < 0 ^ anon209.field1));
							if (anon210 != 0)
							{
								uint32_t anon212 = phi208 - 2;
								*(uint32_t*)(((__sext int64_t)anon212 << 2) + arg4) = (__zext uint32_t)(anon212 < anon184);
							}
						}
					}
				}
				phi_in98 = *anon91;
			}
			uint64_t phi213 = phi_in98;
			uint64_t anon214 = phi213 + *(uint64_t*)(arg1 - 168);
			*anon91 = anon214;
			phi_in93 = anon184;
			phi_in95 = anon214;
			phi_in99 = phi164;
			phi_in100 = phi165;
			phi_in101 = phi110 + 4;
			uint64_t phi_in102 = anon144 - 4;
			uint64_t anon215 = phi112 + 1;
			phi_in105 = anon215;
			phi_in106 = anon179;
			phi_in107 = (uint32_t)anon215;
			break;
		}
	}
	return;
}
void o(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5)
{
	uint32_t phi_in13;
	uint32_t phi_in17;
	uint32_t anon29;
	uint32_t* anon32;
	uint32_t* anon34;
	uint64_t phi58;
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
	uint64_t phi_in12 = arg4;
	uint32_t anon14 = anon9 - 1;
	phi_in13 = anon14;
	uint32_t phi_in15 = anon9;
	uint32_t phi_in16 = anon11;
	if (anon9 == 0)
	{
		*anon3 = 4294967294;
		phi_in17 = anon4;
	}
	else 
	{
		uint64_t phi_in24;
		while (true)
		{
			uint64_t phi18 = phi_in12;
			uint32_t phi19 = phi_in13;
			uint32_t phi20 = phi_in15;
			uint32_t phi21 = phi_in16;
			uint32_t phi_in22 = phi19;
			if (phi19 == phi21)
			{
				uint32_t anon23 = phi20 - 2;
				*anon3 = anon23;
				phi_in24 = phi18;
				phi_in22 = anon23;
				if (phi19 == 0)
				{
					break;
				}
			}
			if (phi19 != phi21 || phi19 != 0 && phi19 == phi21)
			{
				uint32_t phi25 = phi_in22;
				*(uint32_t*)phi18 = phi25;
				uint32_t anon26 = *anon3 - 1;
				*anon3 = anon26;
				uint64_t anon27 = phi18 + 4;
				phi_in24 = anon27;
				phi_in12 = anon27;
				phi_in13 = anon26;
				phi_in15 = *anon3;
				phi_in16 = anon26;
				if (*anon3 == 0)
				{
					break;
				}
			}
		}
		uint64_t phi28 = phi_in24;
		*anon2 = phi28;
		anon29 = anon9 - 2;
		*(uint32_t*)(arg1 - 68) = anon29;
		*anon3 = anon29;
		phi_in17 = anon14;
	}
	if (anon9 != 0 && anon29 != 0 || anon9 == 0)
	{
		uint32_t anon36;
		do
		{
			uint32_t phi30 = phi_in17;
			uint32_t anon31 = rand();
			anon32 = (uint32_t*)0x601dec;
			uint64_t anon33 = ((__zext uint64_t)(anon31 > 4294967295 ? anon31 : anon31 + 255) << 32 >> 40) % (__sext int64_t)phi30;
			*anon32 = (uint32_t)anon33;
			anon34 = (uint32_t*)0x601e08;
			uint32_t* anon35 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
			*anon34 = *anon35;
			*anon35 = *(uint32_t*)((anon33 << 32 >> 30) + arg4);
			*(uint32_t*)((anon33 << 32 >> 30) + arg4) = *anon34;
			anon36 = *anon3 - 1;
			*anon3 = anon36;
			phi_in17 = *anon3;
		}
		while (anon36 != 0);
	}
	uint64_t anon37 = arg2 << 32;
	*(uint32_t*)((anon37 >> 30) - 4 + arg4) = *anon10;
	*anon32 = 0;
	*anon3 = 0;
	uint64_t* anon38 = (uint64_t*)0x601e10;
	*anon38 = arg3;
	uint32_t phi_in39 = 0;
	uint64_t phi_in40 = arg3;
	uint64_t phi_in41 = arg2;
	uint32_t phi_in42 = 0;
	while (true)
	{
		uint64_t anon67;
		uint32_t phi43 = phi_in39;
		uint64_t phi44 = phi_in40;
		uint64_t phi45 = phi_in41;
		uint32_t phi46 = phi_in42;
		uint64_t anon47 = anon37 >> 32;
		if ((uint32_t)(anon47 * anon47) <= phi46)
		{
			uint64_t phi_in48;
			uint32_t phi59;
			uint32_t anon60;
			*anon38 = phi44;
			*anon3 = *(uint32_t*)(arg1 - 68);
			if (*(uint32_t*)(arg1 - 68) != 0)
			{
				phi_in48 = anon5 & 0xffffffff;
				uint64_t phi49 = phi_in48;
				uint32_t anon50 = rand();
				uint64_t anon51 = ((__zext uint64_t)(anon50 > 4294967295 ? anon50 : anon50 + 255) << 32 >> 40) % (phi49 << 32 >> 32);
				*anon32 = (uint32_t)anon51;
				uint32_t* anon52 = (uint32_t*)(((__sext int64_t)*anon3 << 2) + arg4);
				*anon34 = *anon52;
				*anon52 = *(uint32_t*)((anon51 << 32 >> 30) + arg4);
				*(uint32_t*)((anon51 << 32 >> 30) + arg4) = *anon34;
				uint32_t anon53 = *anon3 - 1;
				*anon3 = anon53;
			}
			*anon3 = 0;
			*anon32 = anon4;
			*anon38 = arg3;
			*anon6 = anon9 + 1 - *anon6;
			uint32_t phi_in54 = anon4;
			uint64_t phi_in55 = arg3;
			uint32_t phi_in56 = 0;
			do
			{
				uint32_t phi57 = phi_in54;
				phi58 = phi_in55;
				phi59 = phi_in56;
				anon60 = (uint32_t)anon47;
				if (anon60 * anon60 > phi59)
				{
					uint32_t* anon61 = (uint32_t*)(phi58 + ((__sext int64_t)phi59 << 2));
					uint32_t anon62 = *anon61 + *anon6 * *(uint32_t*)(((__sext int64_t)phi57 << 2) + arg4);
					*anon61 = anon62;
					uint32_t anon63 = phi57 + 1;
					*anon32 = anon63;
					uint32_t anon64 = anon62 + 1;
					*anon3 = anon64;
					uint64_t phi_in65 = phi58;
					uint32_t phi_in66 = anon63;
					if ((uint32_t)((__sext int64_t)anon64 % anon47) == 0)
					{
						*anon32 = phi57;
						anon67 = arg5 << 32 >> 30;
						phi_in65 = phi58 + anon67;
						phi_in66 = phi57;
					}
					uint64_t phi68 = phi_in65;
					uint32_t phi69 = phi_in66;
					phi_in54 = phi69;
					phi_in55 = phi68;
					phi_in56 = anon64;
					if (phi69 >= anon9)
					{
						uint32_t anon70 = phi69 - anon9;
						*anon32 = anon70;
						phi_in54 = anon70;
						phi_in55 = phi68;
						phi_in56 = anon64;
					}
				}
			}
			while (anon60 * anon60 > phi59);
			phi_in48 = (__zext uint64_t)*anon3;
		}
		break;
		uint32_t anon71 = *anon6 * *(uint32_t*)(((__sext int64_t)phi43 << 2) + arg4);
		*(uint32_t*)(phi44 + ((__sext int64_t)phi46 << 2)) = anon71;
		uint32_t anon72 = anon71 + 1;
		*anon3 = anon72;
		uint32_t anon73 = phi43 + ((uint32_t)((__sext int64_t)anon72 % (phi45 << 32 >> 32)) == 0 ? 2 : 1);
		*anon32 = anon73;
		phi_in39 = anon73;
		uint64_t anon74 = phi44 + ((uint32_t)((__sext int64_t)anon72 % (phi45 << 32 >> 32)) == 0 ? anon67 : 0);
		phi_in40 = anon74;
		uint64_t anon75 = arg2 & 0xffffffff;
		phi_in41 = anon75;
		phi_in42 = anon72;
		if (anon73 >= anon9)
		{
			uint32_t anon76 = anon73 - anon9;
			*anon32 = anon76;
			phi_in39 = anon76;
			phi_in40 = anon74;
			phi_in41 = anon75;
			phi_in42 = anon72;
		}
	}
	*anon38 = phi58;
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
		uint32_t anon10;
		uint64_t phi_in3 = arg2 & 0xffffffff;
		do
		{
			uint64_t phi4 = phi_in3;
			uint32_t anon5 = rand();
			uint64_t anon6 = ((__zext uint64_t)(anon5 > 4294967295 ? anon5 : anon5 + 255) << 32 >> 40) % (phi4 << 32 >> 32);
			*(uint32_t*)0x601dec = (uint32_t)anon6;
			uint32_t* anon7 = (uint32_t*)0x601e08;
			uint32_t* anon8 = (uint32_t*)(((__sext int64_t)*anon1 << 2) + arg1);
			*anon7 = *anon8;
			uint32_t* anon9 = (uint32_t*)((anon6 << 32 >> 30) + arg1);
			*anon8 = *anon9;
			*anon9 = *anon7;
			anon10 = *anon1 - 1;
			*anon1 = anon10;
			if (anon10 != 0)
			{
				phi_in3 = (__zext uint64_t)*anon1;
			}
		}
		while (anon10 != 0);
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
