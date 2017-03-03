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
		uint32_t anon30;
		uint64_t anon38;
		uint32_t phi_in22 = anon19;
		uint32_t phi23 = *anon8;
		uint64_t phi_in24 = *anon7;
		uint64_t phi25 = anon20;
		while (true)
		{
			uint64_t phi27;
			uint64_t phi28;
			anon26 = (uint32_t*)0x601dec;
			*anon26 = (uint32_t)(arg1 + 4294967295);
			if (anon9 == 0)
			{
				phi27 = phi25 & 0xffffffff;
				phi28 = phi_in24;
			}
			else 
			{
				uint32_t phi29;
				uint64_t anon35;
				anon30 = anon9 - 1;
				phi29 = anon30;
				uint32_t phi31 = phi_in22;
				uint32_t phi32 = phi23 - 1;
				do
				{
					uint64_t phi33 = phi_in24;
					*(uint32_t*)phi33 = *(uint32_t*)(((__sext int64_t)(phi29 ^ *anon16 & phi31 ^ (uint32_t)((__zext uint64_t)((phi32 >> 31) + phi32) << 32 >> 33)) << 2) + arg3);
					uint32_t anon34 = *anon26 - 1;
					*anon26 = anon34;
					phi29 = anon34;
					phi31 = *anon8;
					phi32 = *anon8;
					anon35 = phi33 + 4;
					phi_in24 = anon35;
				}
				while (*anon26 != 0);
				phi27 = (__zext uint64_t)*anon8;
				phi28 = anon35;
			}
			break;
			uint64_t anon37 = phi27 + 4294967295;
			uint32_t anon36 = (uint32_t)anon37;
			*anon8 = anon36;
			phi_in22 = anon36;
			phi23 = (uint32_t)phi27;
			anon38 = phi28 + (arg4 << 32 >> 30);
			phi_in24 = anon38;
			phi25 = anon37 & 0xffffffff;
		}
		*anon7 = anon38;
		phi21 = anon30;
	}
	*anon26 = phi21;
	uint32_t anon39 = rand();
	uint32_t anon40 = (uint32_t)(((__zext uint64_t)(anon39 > 4294967295 ? anon39 : anon39 + 255) << 32 >> 40) % anon4);
	*anon2 = anon40;
	*anon5 = 3 - anon40;
	uint32_t anon41 = rand();
	*anon7 = arg2;
	*anon16 = 3 - *anon16;
	*anon8 = *anon26;
	uint64_t anon44 = (__zext uint64_t)(anon41 > 4294967295 ? anon41 : anon41 + 255);
	uint64_t anon43 = anon44 >> 31;
	uint32_t anon42 = *(uint32_t*)(((__zext uint64_t)(anon43 != 0 ^ (anon44 & 0x100) != 0) - anon43 << 2) + arg3) ^ 1;
	*anon10 = anon42;
	*anon14 = 3 - anon42;
	if (anon9 != 0)
	{
		uint64_t anon54;
		uint32_t phi45 = *anon26;
		uint64_t phi_in46 = arg2;
		while (true)
		{
			uint64_t anon52;
			uint32_t phi47 = phi45;
			uint32_t phi48 = *anon26;
			do
			{
				uint64_t phi49 = phi_in46;
				uint32_t* anon50 = (uint32_t*)phi49;
				*anon50 = *anon50 + (*(uint32_t*)(((__sext int64_t)(phi48 ^ (phi47 >> 31) + phi47 >> 1 ^ *anon16 & phi47) << 2) + arg3) << 2);
				uint32_t anon51 = *anon26 - 1;
				*anon26 = anon51;
				phi48 = anon51;
				phi47 = *anon8;
				anon52 = phi49 + 4;
				phi_in46 = anon52;
			}
			while (*anon26 != 0);
			break;
			uint32_t anon53 = *anon8 - 1;
			*anon8 = anon53;
			phi45 = anon53;
			anon54 = anon52 + (arg4 << 32 >> 30);
			phi_in46 = anon54;
		}
		*anon7 = anon54;
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
	uint32_t* anon33;
	uint64_t phi56;
	uint64_t phi_in131;
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
		uint64_t anon44;
		uint64_t phi_in46;
		uint32_t anon53;
		uint64_t anon79;
		uint32_t phi28 = phi15;
		uint32_t* phi_in29 = (uint32_t*)arg3;
		uint64_t phi30 = arg3;
		uint32_t* phi31 = (uint32_t*)arg3;
		while (true)
		{
			uint64_t phi32 = phi30;
			anon33 = (uint32_t*)0x601dec;
			uint32_t anon35 = (uint32_t)anon13;
			uint32_t anon34 = anon35 - 1;
			*anon33 = anon34;
			uint32_t phi36 = anon34;
			if (anon35 != 0)
			{
				while (true)
				{
					uint32_t* phi37 = phi_in29;
					uint64_t phi38 = 3;
					if (anon1 > phi36)
					{
						*phi31 = *phi31 + (phi16 * phi16 << 1);
						phi38 = ((__zext uint64_t)(anon1 <= *anon33) << 2) + 4294967295 & 0xffffffff;
					}
					break;
					uint64_t anon39 = (uint64_t)phi37;
					*(uint32_t*)(anon39 + (phi17 << 32 >> 30)) = (uint32_t)(phi38 * anon2) * anon1 + *phi37;
					uint32_t anon40 = *anon33 - 1;
					*anon33 = anon40;
					uint64_t anon41 = anon39 + 4;
					phi32 = anon41;
					uint32_t* anon42 = (uint32_t*)anon41;
					phi_in29 = anon42;
					phi31 = anon42;
					phi36 = anon40;
				}
			}
			break;
			phi28 = phi28 - 1;
			anon44 = phi32 + (anon8 >> 30);
			uint32_t* anon43 = (uint32_t*)anon44;
			phi_in29 = anon43;
			phi30 = anon44;
			phi31 = anon43;
		}
		*anon9 = anon44;
		uint32_t phi45 = phi10;
		uint64_t anon47 = (__zext uint64_t)phi10;
		phi_in46 = anon47;
		uint64_t phi48 = anon47;
		uint32_t anon50 = phi10 + 1;
		int64_t anon52 = (__sext int64_t)phi10 << 2;
		uint32_t anon51 = (uint32_t)(anon52 + 4 + arg4 >> 2) & 3;
		uint32_t anon49 = phi10 == 4 | anon50 < 5 | anon50 < anon51 ? anon50 : anon51;
		if (anon49 != 0)
		{
			uint32_t phi54;
			anon53 = (uint32_t)((anon3 & 0x100000000) + (anon2 << 32) >> 32 >> 1);
			*(uint32_t*)((anon52 & 0xc) + arg4) = (__zext uint32_t)(phi10 < anon53);
			uint32_t anon55 = phi10 - 1;
			phi54 = anon55;
			uint64_t anon57 = anon47 + 4294967295;
			phi56 = anon57 & 0xffffffff;
			uint64_t phi_in58 = (__zext uint64_t)anon55;
			if (anon49 != 1)
			{
				uint32_t anon60 = (uint32_t)anon57;
				struct { uint32_t field0; bool field1; } anon59 = llvm.ssub.with.overflow.i32(anon53, anon60);
				uint32_t anon61 = anon53 - anon60;
				*(uint32_t*)((anon57 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon61 < 0 ^ anon59.field1) ^ 1) & (__zext uint32_t)(anon61 != 0);
				uint32_t anon62 = phi10 - 2;
				phi54 = anon62;
				uint64_t anon63 = anon47 + 4294967294;
				phi56 = anon63 & 0xffffffff;
				phi_in58 = (__zext uint64_t)anon62;
				if (anon49 != 2)
				{
					uint32_t anon65 = (uint32_t)anon63;
					struct { uint32_t field0; bool field1; } anon64 = llvm.ssub.with.overflow.i32(anon53, anon65);
					uint32_t anon66 = anon53 - anon65;
					*(uint32_t*)((anon63 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon66 < 0 ^ anon64.field1) ^ 1) & (__zext uint32_t)(anon66 != 0);
					uint32_t anon67 = phi10 - 3;
					phi54 = anon67;
					uint64_t anon68 = anon47 + 4294967293;
					phi56 = anon68 & 0xffffffff;
					phi_in58 = (__zext uint64_t)anon67;
					if (anon49 != 3)
					{
						uint32_t anon70 = (uint32_t)anon68;
						struct { uint32_t field0; bool field1; } anon69 = llvm.ssub.with.overflow.i32(anon53, anon70);
						uint32_t anon71 = anon53 - anon70;
						*(uint32_t*)((anon68 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon71 < 0 ^ anon69.field1) ^ 1) & (__zext uint32_t)(anon71 != 0);
						uint32_t anon72 = phi10 - 4;
						phi54 = anon72;
						uint64_t anon73 = anon47 + 4294967292;
						phi56 = anon73 & 0xffffffff;
						phi_in58 = (__zext uint64_t)anon72;
						if (anon49 == 5)
						{
							uint32_t anon75 = (uint32_t)anon73;
							struct { uint32_t field0; bool field1; } anon74 = llvm.ssub.with.overflow.i32(anon53, anon75);
							uint32_t anon76 = anon53 - anon75;
							*(uint32_t*)((anon73 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon76 < 0 ^ anon74.field1) ^ 1) & (__zext uint32_t)(anon76 != 0);
							phi54 = phi10 - 5;
							uint64_t anon77 = anon47 + 4294967291 & 0xffffffff;
							phi56 = anon77;
							phi_in58 = anon77;
						}
					}
				}
			}
			uint32_t phi_in78 = phi54;
			phi_in46 = phi56;
			phi24 = phi10;
			anon79 = phi11 & 0xffffffff;
			phi25 = anon79;
			phi45 = phi_in78;
			phi48 = phi_in58;
		}
		if (anon50 != anon49 && anon49 != 0 || anon49 == 0)
		{
			uint32_t phi82;
			uint32_t anon90;
			uint32_t anon91;
			uint64_t phi80 = arg4 & 0xf;
			uint64_t phi81 = phi_in46;
			uint32_t anon83 = (uint32_t)phi48;
			phi82 = anon83;
			uint32_t anon84 = phi10 - anon49;
			if (anon84 >= 3)
			{
				uint64_t anon89;
				uint32_t* anon85 = (uint32_t*)(arg1 - 240);
				*anon85 = anon83;
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				*anon85 = anon53;
				(__asm "movdqa xmm4, xmmword ptr [rip + 0xc24]")();
				(__asm "pshufd xmm0, xmm7, 0")();
				(__asm "movd xmm7, dword ptr [rsp + 0x10]")();
				(__asm "movdqa xmm2, xmmword ptr [rip + 0xbeb]")();
				(__asm "pshufd xmm3, xmm7, 0")();
				(__asm "paddd xmm0, xmmword ptr [rip + 0xbee]")();
				uint32_t phi_in86 = 0;
				do
				{
					uint32_t phi87 = phi_in86;
					(__asm "movdqa xmm1, xmm3")();
					(__asm "pcmpgtd xmm1, xmm0")();
					(__asm "paddd xmm0, xmm4")();
					(__asm "pand xmm1, xmm2")();
					(__asm "pshufd xmm1, xmm1, 0x1b")();
					(__asm "movaps xmmword ptr [rdx + 0x10], xmm1")();
					uint32_t anon88 = phi87 + 1;
					phi_in86 = anon88;
					anon90 = anon50 - anon49;
					anon89 = ((__zext uint64_t)anon90 + 4294967292 >> 2 & 0x3fffffff) + 1;
				}
				while (anon88 < (uint32_t)anon89);
				phi24 = phi10;
				phi25 = anon79;
				anon91 = (uint32_t)(anon89 << 2);
				if (anon90 != anon91)
				{
					phi80 = arg4;
					uint32_t anon92 = phi45 - anon91;
					phi81 = (__zext uint64_t)anon92;
					phi82 = anon92;
				}
			}
			if (anon84 >= 3 && anon90 != anon91 || anon84 < 3)
			{
				struct { uint32_t field0; bool field1; } anon93 = llvm.ssub.with.overflow.i32(anon53, phi82);
				uint32_t anon94 = anon53 - phi82;
				*(uint32_t*)(phi80 + ((__sext int64_t)phi82 << 2)) = ((__zext uint32_t)(anon94 < 0 ^ anon93.field1) ^ 1) & (__zext uint32_t)(anon94 != 0);
				phi24 = phi10;
				phi25 = anon79;
				if (phi82 != 0)
				{
					uint32_t anon96 = (uint32_t)(phi81 + 4294967295);
					struct { uint32_t field0; bool field1; } anon95 = llvm.ssub.with.overflow.i32(anon53, anon96);
					uint64_t anon97 = phi81 << 32;
					uint32_t anon98 = anon53 - anon96;
					*(uint32_t*)(phi80 + (anon97 - 4294967296 >> 30)) = ((__zext uint32_t)(anon98 < 0 ^ anon95.field1) ^ 1) & (__zext uint32_t)(anon98 != 0);
					phi24 = phi10;
					phi25 = anon79;
					if (anon96 != 0)
					{
						uint32_t anon100 = (uint32_t)(phi81 + 4294967294);
						struct { uint32_t field0; bool field1; } anon99 = llvm.ssub.with.overflow.i32(anon53, anon100);
						uint32_t anon101 = anon53 - anon100;
						*(uint32_t*)(phi80 + (anon97 - 8589934592 >> 30)) = ((__zext uint32_t)(anon101 < 0 ^ anon99.field1) ^ 1) & (__zext uint32_t)(anon101 != 0);
						phi24 = phi10;
						phi25 = anon79;
					}
				}
			}
		}
	}
	uint32_t* anon102 = (uint32_t*)0x601e00;
	*anon102 = phi24;
	uint64_t* anon103 = (uint64_t*)0x601df8;
	*anon103 = arg3;
	if ((anon14 >> 30) + arg3 > arg3)
	{
		uint32_t phi104;
		(__asm "movd xmm4, dword ptr [rsp + 0x4c]")();
		(__asm "pshufd xmm7, xmm4, 0")();
		(__asm "movaps xmmword ptr [rsp + 0x70], xmm7")();
		int64_t anon105 = anon2 + 1;
		phi104 = (uint32_t)(anon105 + (anon105 >> 31 & 1) << 32 >> 33);
		uint64_t phi106 = arg3;
		while (true)
		{
			uint64_t phi118;
			uint64_t anon143;
			uint64_t anon168;
			uint32_t anon174;
			uint32_t phi193;
			uint32_t phi107 = phi104;
			uint64_t phi108 = phi106;
			*anon9 = phi108;
			uint64_t phi109 = phi108;
			uint32_t phi110 = phi107;
			uint64_t anon112 = (__zext uint64_t)*anon102;
			phi111 = (anon2 - anon112 << 32 >> 30) - 4 + arg4;
			int64_t anon115 = (__sext int64_t)*anon102 << 2;
			int64_t anon114 = (anon115 & 0xc) + arg4;
			phi113 = anon114;
			uint64_t phi_in116 = 0;
			uint32_t phi117 = 0;
			if (anon1 != 0)
			{
				uint32_t anon130;
				int64_t anon132;
				int64_t anon133;
				uint32_t phi134;
				uint32_t anon135;
				uint64_t anon139;
				uint32_t phi148;
				uint32_t phi149;
				uint32_t anon151;
				uint64_t phi161;
				uint64_t anon167;
				phi118 = phi_in116;
				uint64_t phi119 = phi108;
				uint32_t phi120 = phi117;
				uint32_t phi_in121 = anon1;
				if (*anon102 != 0)
				{
					uint64_t anon124;
					uint32_t anon126;
					do
					{
						uint32_t phi122 = phi_in121;
						uint32_t anon123 = rand();
						anon124 = ((__zext uint64_t)(anon123 > 4294967295 ? anon123 : anon123 + 255) << 32 >> 40) % (__sext int64_t)phi122;
						*anon33 = (uint32_t)anon124;
						uint32_t* anon125 = (uint32_t*)(((__sext int64_t)*anon102 << 2) + arg4);
						*(uint32_t*)0x601e08 = *anon125;
						*anon125 = *(uint32_t*)((anon124 << 32 >> 30) + arg4);
						*(uint32_t*)(((__sext int64_t)*anon33 << 2) + arg4) = *anon125;
						anon126 = *anon102 - 1;
						*anon102 = anon126;
						phi_in121 = *anon102;
					}
					while (anon126 != 0);
					phi120 = *(uint32_t*)((anon124 << 32 >> 30) + arg4);
					phi119 = *anon9;
				}
				uint64_t phi_in127 = phi119;
				uint32_t* anon128 = (uint32_t*)phi111;
				if (*anon128 == 0)
				{
					uint32_t phi_in129;
					anon130 = anon1 - 1;
					phi_in129 = anon130;
					anon133 = anon2 << 32 >> 30;
					anon132 = anon133 + arg4;
					phi_in131 = anon132;
					phi134 = phi110;
					anon135 = *anon102 - phi117;
					if (phi110 > anon135)
					{
						uint64_t anon137;
						do
						{
							*anon33 = phi_in129;
							uint64_t phi136 = phi_in131;
							phi_in129 = *anon33 - 1;
							anon137 = phi136 - 4;
							phi_in131 = anon137;
						}
						while (*(uint32_t*)anon137 == 0);
						*anon128 = 1;
						*(uint32_t*)(((__sext int64_t)*anon33 << 2) + arg4) = 0;
						phi134 = phi110 - 1;
					}
				}
				else 
				{
					uint64_t phi_in138;
					*anon33 = anon130;
					anon139 = (arg4 & 0xf) + anon133 - 4;
					phi_in138 = anon139;
					if (phi110 == 0)
					{
						uint32_t* anon141;
						do
						{
							uint64_t phi140 = phi_in138;
							*anon33 = *anon33 - 1;
							phi_in138 = phi140 - 4;
							anon141 = (uint32_t*)phi140;
						}
						while (*anon141 != 0);
						*anon141 = 1;
						*anon128 = 0;
						phi134 = phi110;
					}
					else 
					{
						phi134 = phi110 - 1;
					}
				}
				anon143 = phi113 & 0xffffffff00000000 | phi113 & 0xffffffff;
				uint32_t* anon142 = (uint32_t*)anon143;
				if (*anon142 == 0)
				{
					uint64_t phi144;
					bool anon150;
					uint64_t anon145 = (__zext uint64_t)anon135;
					phi144 = anon145;
					uint32_t phi_in146 = anon130;
					uint64_t phi_in147 = anon132;
					if (phi107 <= anon135)
					{
						phi148 = phi134;
						phi149 = phi107;
						anon150 = anon1 != 3 | phi107 == 0;
						if (!anon150)
						{
							phi144 = anon145;
							phi_in146 = anon130;
							phi_in147 = anon132;
							phi148 = phi134;
							phi149 = phi107;
						}
					}
					anon151 = phi120 + anon130 - *anon102;
					if (phi107 > anon135 || !anon150 && phi107 <= anon135 && phi134 == 2 | anon135 == anon151)
					{
						uint64_t anon153;
						do
						{
							*anon33 = phi_in146;
							uint64_t phi152 = phi_in147;
							phi144 = phi144 & 0xffffffffffffff00 | (__zext uint64_t)(*anon33 == anon151);
							phi_in146 = *anon33 - 1;
							anon153 = phi152 - 4;
							phi_in147 = anon153;
						}
						while (((__zext uint8_t)(*anon33 == anon151) | (__zext uint8_t)(*(uint32_t*)anon153 == 0)) == 1);
						*anon142 = 1;
						*(uint32_t*)(((__sext int64_t)*anon33 << 2) + arg4) = 0;
						phi148 = phi134 - (__zext uint32_t)(anon135 == anon151);
						phi149 = phi107 - 1;
					}
				}
				else 
				{
					uint32_t phi_in154 = anon130;
					uint64_t phi_in155 = anon139;
					if (phi107 == 0)
					{
						uint32_t* anon157;
						do
						{
							*anon33 = phi_in154;
							uint64_t phi156 = phi_in155;
							phi_in154 = *anon33 - 1;
							phi_in155 = phi156 - 4;
							anon157 = (uint32_t*)phi156;
						}
						while (*anon157 != 0 | *anon33 == anon151);
						*anon157 = 1;
						*anon142 = 0;
						phi148 = phi134;
						phi149 = phi107;
					}
					else 
					{
						phi148 = phi134;
						phi149 = phi107 - 1;
					}
				}
				phi110 = phi148;
				phi107 = phi149;
				uint64_t* anon158 = (uint64_t*)0x601df0;
				*anon158 = arg4;
				*anon33 = *anon102;
				uint32_t phi159 = *anon102;
				uint64_t phi_in160 = arg4;
				while (true)
				{
					phi161 = phi_in127;
					uint32_t phi162 = phi159;
					uint64_t phi163 = phi_in160;
					if (*(uint32_t*)phi163 != 0)
					{
						uint32_t* anon164 = (uint32_t*)phi161;
						uint32_t* anon165 = (uint32_t*)(phi161 + (phi25 << 32 >> 30));
						*anon164 = *anon165;
						*anon165 = *anon164;
						phi162 = *anon165;
					}
					break;
					uint32_t anon166 = phi162 - 1;
					*anon33 = anon166;
					phi_in127 = phi161 + 4;
					phi159 = anon166;
					anon167 = phi163 + 4;
					phi_in160 = anon167;
				}
				*anon158 = anon167;
				anon168 = phi161 + 4;
				*anon9 = anon168;
				uint32_t phi169 = *anon102;
				uint64_t phi170 = anon112;
				uint32_t anon172 = *anon102 + 1;
				uint32_t anon173 = (uint32_t)(anon115 + 4 + arg4 >> 2) & 3;
				uint32_t anon171 = anon172 > 5 ? anon172 < anon173 ? anon172 : anon173 : anon172;
				if (anon171 != 0)
				{
					uint32_t anon177;
					uint64_t phi178;
					int64_t anon176 = anon3 >> 32;
					int64_t anon175 = anon176 & 1;
					anon174 = (uint32_t)(anon2 + anon175 << 32 >> 33) + (uint32_t)anon175 - ((uint32_t)(anon2 + anon176) & 1);
					*(uint32_t*)anon114 = (__zext uint32_t)(*anon102 < anon174);
					if (anon171 == 1)
					{
						anon177 = *anon102 - 1;
						phi169 = anon177;
						phi178 = (__zext uint64_t)anon177;
					}
					else 
					{
						uint32_t anon179;
						*(uint32_t*)(((__zext uint64_t)anon177 << 32 >> 30) + arg4) = (__zext uint32_t)(anon177 < anon174);
						if (anon171 == 2)
						{
							anon179 = *anon102 - 2;
							phi169 = anon179;
							phi178 = (__zext uint64_t)anon179;
						}
						else 
						{
							uint32_t anon182;
							struct { uint32_t field0; bool field1; } anon180 = llvm.ssub.with.overflow.i32(anon174, anon179);
							uint32_t anon181 = anon174 - anon179;
							*(uint32_t*)(((__zext uint64_t)anon179 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon181 < 0 ^ anon180.field1) ^ 1) & (__zext uint32_t)(anon181 != 0);
							if (anon171 == 3)
							{
								anon182 = *anon102 - 3;
								phi169 = anon182;
								phi178 = (__zext uint64_t)anon182;
							}
							else 
							{
								struct { uint32_t field0; bool field1; } anon183 = llvm.ssub.with.overflow.i32(anon174, anon182);
								uint32_t anon184 = anon174 - anon182;
								*(uint32_t*)(((__zext uint64_t)anon182 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon184 < 0 ^ anon183.field1) ^ 1) & (__zext uint32_t)(anon184 != 0);
								uint32_t anon185 = *anon102 - 4;
								phi169 = anon185;
								uint64_t anon186 = (__zext uint64_t)anon185;
								phi178 = anon186;
								if (anon171 == 5)
								{
									struct { uint32_t field0; bool field1; } anon187 = llvm.ssub.with.overflow.i32(anon174, anon185);
									uint32_t anon188 = anon174 - anon185;
									*(uint32_t*)(((__zext uint64_t)anon185 << 32 >> 30) + arg4) = ((__zext uint32_t)(anon188 < 0 ^ anon187.field1) ^ 1) & (__zext uint32_t)(anon188 != 0);
									uint64_t anon189 = anon186 + 4294967295;
									phi169 = (uint32_t)anon189;
									phi178 = anon189 & 0xffffffff;
								}
							}
						}
					}
					phi170 = phi178;
				}
				if (anon172 != anon171 && anon171 != 0 || anon171 == 0)
				{
					uint32_t anon195;
					uint32_t anon196;
					uint32_t phi190 = phi169;
					uint64_t phi191 = phi170;
					uint32_t anon192 = *anon102 - anon171;
					if (anon192 >= 3)
					{
						(__asm "movd xmm6, dword ptr [rsp + 8]")();
						(__asm "movdqa xmm2, xmmword ptr [rip + 0x7b7]")();
						(__asm "pshufd xmm0, xmm6, 0")();
						(__asm "movdqa xmm1, xmmword ptr [rip + 0x786]")();
						(__asm "paddd xmm0, xmmword ptr [rip + 0x789]")();
						phi193 = 0;
						(__asm "movdqa xmm5, xmmword ptr [rsp + 0x70]")();
						(__asm "movdqa xmm3, xmm0")();
						(__asm "pcmpgtd xmm5, xmm0")();
						(__asm "paddd xmm3, xmm2")();
						(__asm "movdqa xmm0, xmm5")();
						(__asm "pand xmm0, xmm1")();
						(__asm "pshufd xmm0, xmm0, 0x1b")();
						(__asm "movaps xmmword ptr [rax + 0x10], xmm0")();
						anon196 = anon172 - anon171;
						anon195 = (uint32_t)(((__zext uint64_t)anon196 + 4294967292 >> 2 & 0x3fffffff) + 1 << 2);
						uint32_t anon194 = phi190 - anon195;
						phi191 = (__zext uint64_t)anon194;
						phi190 = anon194;
					}
					if (anon195 != anon196 && anon192 >= 3 || anon192 < 3)
					{
						*(uint32_t*)(((__sext int64_t)phi190 << 2) + arg4) = (__zext uint32_t)(phi190 < anon174);
						if (phi190 != 0)
						{
							uint32_t anon198 = (uint32_t)(phi191 + 4294967295);
							struct { uint32_t field0; bool field1; } anon197 = llvm.ssub.with.overflow.i32(anon174, anon198);
							uint64_t anon199 = phi191 << 32;
							uint32_t anon200 = anon174 - anon198;
							*(uint32_t*)((anon199 - 4294967296 >> 30) + arg4) = ((__zext uint32_t)(anon200 < 0 ^ anon197.field1) ^ 1) & (__zext uint32_t)(anon200 != 0);
							if (anon198 != 0)
							{
								*(uint32_t*)((anon199 - 8589934592 >> 30) + arg4) = (__zext uint32_t)((uint32_t)(phi191 + 4294967294) < anon174);
							}
						}
					}
				}
				phi109 = *anon103;
			}
			break;
			uint64_t anon201 = phi109 + *(uint64_t*)(arg1 - 168);
			*anon103 = anon201;
			phi104 = anon174;
			phi106 = anon201;
			(__asm "movdqa xmm0, xmm3")();
			phi193 = phi193 + 1;
			uint64_t phi111 = phi111 + 4;
			uint64_t phi113 = anon143 - 4;
			uint64_t anon202 = phi118 + 1;
			phi_in116 = anon202;
			phi108 = anon168;
			phi117 = (uint32_t)anon202;
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
		while (true)
		{
			uint32_t phi17 = phi14;
			if (phi14 == phi16)
			{
				uint32_t anon18 = phi15 - 2;
				*anon4 = anon18;
				*anon3 = phi13;
				phi17 = anon18;
				if (phi14 == 0)
				{
					break;
				}
			}
			if (phi14 != phi16 || phi14 != 0 && phi14 == phi16)
			{
				*(uint32_t*)phi13 = phi17;
				uint32_t anon19 = *anon4 - 1;
				*anon4 = anon19;
				uint64_t anon20 = phi13 + 4;
				*anon3 = anon20;
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
					phi_in46 = *anon31;
					uint32_t phi53 = anon51;
					if ((uint32_t)((__sext int64_t)anon52 % (arg2 << 32 >> 32)) == 0)
					{
						anon54 = arg5 << 32 >> 30;
						phi_in46 = *anon31 + anon54;
						phi53 = *anon26;
					}
					phi_in39 = phi53;
					phi_in47 = anon52;
					if (phi53 >= anon10)
					{
						uint32_t anon55 = phi53 - anon10;
						*anon26 = anon55;
						phi_in39 = anon55;
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
