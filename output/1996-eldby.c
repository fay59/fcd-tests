#include "tests/bin/1996-eldby.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600ee0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[16]; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[1936]; uint64_t field7; } alloca1;
	struct { uint32_t field0; bool field1; } anon6;
	uint32_t anon7;
	uint32_t anon8;
	uint8_t anon9;
	alloca1.field7 = arg0;
	(__asm "movss xmm1, dword ptr [rip + 0x200afe]")();
	alloca1.field1 = 2699754514630402080;
	(__asm "movss xmm0, dword ptr [rip + 0x6fb]")();
	alloca1.field2 = 7597935570910463558;
	(__asm "mulss xmm0, xmm1")();
	alloca1.field3 = 7451611760154738279;
	alloca1.field5 = 1651798835;
	alloca1.field4 = 7670596023889446270;
	uint64_t phi_in2 = (uint64_t)&alloca1.field6;
	uint64_t phi_in3 = 238;
	while (phi_in3 != 0)
	{
		*(uint64_t*)phi_in2 = 0;
		phi_in2 = phi_in2 + 8;
		phi_in3 = phi_in3 - 1;
	}
	(__asm "cvttss2si ecx, xmm0")();
	(__asm "pxor xmm0, xmm0")();
	(__asm "cvtsi2ss xmm0, eax")();
	*(uint32_t*)phi_in2 = 0;
	*(uint32_t*)0x600f58 = 0;
	(__asm "ucomiss xmm1, xmm0")();
	(__asm "pxor xmm0, xmm0")();
	uint32_t* anon4 = (uint32_t*)0x600f2c;
	*anon4 = 0;
	do
	{
		(__asm "pxor xmm1, xmm1")();
		(__asm "cvtsi2ss xmm1, edx")();
		(__asm "addss xmm0, xmm1")();
		(__asm "movss dword ptr [rsp + 8], xmm0")();
		uint64_t anon5 = m(4195591);
		(__asm "movss xmm0, dword ptr [rip + 0x62f]")();
		if ((uint32_t)anon5 != 0)
		{
			(__asm "pxor xmm0, xmm0")();
		}
		(__asm "addss xmm0, dword ptr [rsp + 8]")();
		(__asm "movss dword ptr [rbx*4 + 0x600f90], xmm0")();
		anon7 = *anon4 + 1;
		anon6 = llvm.ssub.with.overflow.i32(anon7, 4);
		*anon4 = anon7;
		anon8 = *anon4 - 3;
		anon9 = (__zext uint8_t)((anon8 & 0xff) == 0);
		if (((__zext uint32_t)((uint8_t)(anon8 >> 31) == (__zext uint8_t)anon6.field1) & (__zext uint32_t)(anon9 ^ 1)) == 0)
		{
			(__asm "pxor xmm0, xmm0")();
			if ((anon7 & 0xff) != 0)
			{
				(__asm "movss xmm0, dword ptr [rax*4 + 0x600f90]")();
			}
		}
	}
	while (((__zext uint32_t)((uint8_t)(anon8 >> 31) == (__zext uint8_t)anon6.field1) & (__zext uint32_t)(anon9 ^ 1)) == 0);
	(__asm "movsd xmm4, qword ptr [rip + 0x619]")();
	(__asm "movss xmm10, dword ptr [rip + 0x2009c3]")();
	uint8_t phi_in10 = anon9;
	uint8_t phi_in11 = (__zext uint8_t)(anon7 < 4);
	while (true)
	{
		uint8_t anon36;
		uint32_t anon37;
		uint8_t anon38;
		(__asm "ucomiss xmm10, dword ptr [rip + 0x5d3]")();
		uint32_t* anon12 = (uint32_t*)0x600fc8;
		*anon12 = 33;
		(__asm "movss xmm1, dword ptr [rip + 0x200a3d]")();
		uint32_t phi_in13 = 33;
		uint64_t phi_in14 = 33;
		if ((phi_in10 | phi_in11) == 0)
		{
			uint8_t anon29;
			uint32_t anon30;
			uint32_t anon31;
			uint8_t anon32;
			do
			{
				uint64_t phi25;
				uint32_t phi15 = phi_in13;
				uint64_t phi16 = phi_in14;
				(__asm "pxor xmm9, xmm9")();
				(__asm "pxor xmm7, xmm7")();
				(__asm "cvtsi2ss xmm9, ecx")();
				uint64_t anon20 = phi16 + 1;
				uint32_t anon19 = phi15 + (__zext uint32_t)((uint32_t)phi16 + 1 == ((uint32_t)((anon20 & 0xffffffff) / 81) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 81);
				int64_t anon18 = (__sext int64_t)anon19;
				uint8_t* anon17 = (uint8_t*)(anon18 + (arg1 + 3 & 0xf));
				*anon17 = 37;
				(__asm "cvtsi2sd xmm7, ebx")();
				(__asm "divss xmm9, xmm10")();
				(__asm "divsd xmm7, qword ptr [rip + 0x55c]")();
				(__asm "subss xmm9, dword ptr [rip + 0x547]")();
				(__asm "movaps xmm0, xmm9")();
				(__asm "mulss xmm0, xmm9")();
				(__asm "addss xmm0, dword ptr [rip + 0x52a]")();
				(__asm "subsd xmm7, qword ptr [rip + 0x542]")();
				(__asm "cvtsd2ss xmm7, xmm7")();
				(__asm "movaps xmm8, xmm7")();
				(__asm "mulss xmm8, xmm7")();
				(__asm "addss xmm8, xmm0")();
				uint64_t phi_in21 = anon18 >> 31 & 0xffffffff;
				uint64_t phi_in22 = 0;
				uint8_t phi_in23 = 1;
				uint8_t phi_in24 = 0;
				do
				{
					phi25 = phi_in22;
					(__asm "movss xmm11, dword ptr [rax + 0x600f80]")();
					(__asm "movaps xmm6, xmm7")();
					(__asm "movaps xmm2, xmm9")();
					(__asm "movaps xmm12, xmm11")();
					(__asm "movss xmm5, dword ptr [rax + 0x600fc0]")();
					(__asm "movss xmm3, dword ptr [rax + 0x600fe0]")();
					(__asm "mulss xmm6, xmm5")();
					(__asm "mulss xmm2, xmm3")();
					(__asm "movss xmm0, dword ptr [rax + 0x600fa0]")();
					(__asm "mulss xmm12, xmm11")();
					(__asm "mulss xmm5, xmm5")();
					(__asm "mulss xmm3, xmm3")();
					(__asm "addss xmm6, xmm2")();
					(__asm "subss xmm5, xmm12")();
					(__asm "addss xmm6, xmm0")();
					(__asm "mulss xmm0, xmm0")();
					(__asm "addss xmm3, xmm5")();
					(__asm "pxor xmm5, xmm5")();
					(__asm "movaps xmm2, xmm6")();
					(__asm "addss xmm0, xmm3")();
					(__asm "mulss xmm2, xmm6")();
					(__asm "mulss xmm0, xmm8")();
					(__asm "subss xmm2, xmm0")();
					(__asm "ucomiss xmm2, xmm5")();
					if ((phi_in23 | phi_in24) == 0)
					{
						uint8_t anon26;
						(__asm "pxor xmm5, xmm5")();
						(__asm "movaps xmm1, xmm2")();
						(__asm "movsd xmm3, qword ptr [rip + 0x4b2]")();
						(__asm "cvtss2sd xmm5, xmm2")();
						(__asm "mulsd xmm3, xmm5")();
						(__asm "mulsd xmm5, qword ptr [rip + 0x4aa]")();
						do
						{
							(__asm "movaps xmm0, xmm1")();
							(__asm "pxor xmm12, xmm12")();
							(__asm "mulss xmm0, xmm1")();
							(__asm "cvtss2sd xmm12, xmm0")();
							(__asm "ucomisd xmm12, xmm3")();
							anon26 = (phi_in23 ^ 1) & (phi_in24 ^ 1);
							if (anon26 != 0)
							{
								(__asm "subss xmm0, xmm2")();
								(__asm "cvtss2sd xmm1, xmm1")();
								(__asm "cvtss2sd xmm0, xmm0")();
								(__asm "mulsd xmm0, xmm4")();
								(__asm "divsd xmm0, xmm1")();
								(__asm "subsd xmm1, xmm0")();
								(__asm "cvtsd2ss xmm1, xmm1")();
							}
						}
						while (anon26 != 0);
						(__asm "ucomisd xmm5, xmm12")();
						(__asm "movss xmm0, dword ptr [rip + 0x43d]")();
						(__asm "mulss xmm0, xmm1")();
						(__asm "divss xmm0, xmm8")();
						(__asm "divss xmm0, xmm11")();
						(__asm "cvttss2si edx, xmm0")();
						*anon17 = *(uint8_t*)((phi_in21 << 32 >> 32) + 4197172);
						phi_in21 = (__zext uint64_t)*(uint8_t*)((phi_in21 << 32 >> 32) + 4197172);
					}
					if (phi25 != 240)
					{
						uint64_t anon27 = phi25 - 4;
						phi_in22 = anon27;
						phi_in23 = 0;
						phi_in24 = (__zext uint8_t)(anon27 < 236);
					}
				}
				while (phi25 != 240);
				(__asm "pxor xmm0, xmm0")();
				struct { uint32_t field0; bool field1; } anon28 = llvm.uadd.with.overflow.i32(anon19, 1);
				(__asm "cvtsi2ss xmm0, ecx")();
				(__asm "ucomiss xmm10, xmm0")();
				anon31 = anon28.field0;
				anon30 = anon31 & 0xff;
				anon32 = (__zext uint8_t)anon28.field1;
				anon29 = (__zext uint8_t)(anon30 != 0) & (anon32 ^ 1);
				if (anon29 != 0)
				{
					phi_in13 = anon31;
					phi_in14 = (__zext uint64_t)anon31;
				}
			}
			while (anon29 != 0);
			(__asm "movss dword ptr [rip + 0x200868], xmm1")();
			*anon12 = anon31;
			(__asm "movss dword ptr [rip + 0x200862], xmm6")();
			(__asm "movss dword ptr [rip + 0x2007dd], xmm8")();
			(__asm "movss dword ptr [rip + 0x2007d9], xmm2")();
			(__asm "movss dword ptr [rip + 0x2007d8], xmm9")();
			(__asm "movss dword ptr [rip + 0x2007d4], xmm7")();
			phi_in10 = (__zext uint8_t)(anon30 == 0);
			phi_in11 = anon32;
		}
		*anon4 = 4;
		uint32_t phi_in33 = 4;
		do
		{
			(__asm "pxor xmm7, xmm7")();
			(__asm "movss xmm0, dword ptr [rbx*4 + 0x600f90]")();
			(__asm "ucomiss xmm7, xmm0")();
			if ((phi_in10 | phi_in11) == 0)
			{
				(__asm "movsd qword ptr [rsp + 8], xmm4")();
				m(4196361);
				(__asm "pxor xmm0, xmm0")();
				(__asm "movss xmm10, dword ptr [rip + 0x200715]")();
				(__asm "movsd xmm4, qword ptr [rsp + 8]")();
				(__asm "cvtsi2ss xmm0, eax")();
				phi_in33 = *anon4;
			}
			uint32_t phi34 = phi_in33;
			(__asm "movss xmm1, dword ptr [rip + 0x3a4]")();
			(__asm "mulss xmm1, xmm10")();
			(__asm "movss dword ptr [rbx*4 + 0x600f90], xmm0")();
			*anon4 = phi34 + 15 & 0xf;
			(__asm "movss xmm0, dword ptr [rdx*4 + 0x600f90]")();
			(__asm "subss xmm0, xmm1")();
			(__asm "movss dword ptr [rdx*4 + 0x600f90], xmm0")();
			uint32_t anon35 = phi34 - 1;
			phi_in33 = anon35;
			anon37 = phi34 & 0xff;
			anon36 = (__zext uint8_t)(anon37 == 0);
			phi_in10 = anon36;
			anon38 = (__zext uint8_t)(anon35 < 255);
			phi_in11 = anon38;
		}
		while (anon37 != 0);
		(__asm "ucomiss xmm10, dword ptr [rip + 0x316]")();
		phi_in10 = anon36;
		phi_in11 = anon38;
	}
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400410, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ab0, (void(*)())0x400b20, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600f40;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196690);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void g(uint64_t arg0)
{
	uint32_t* anon1 = (uint32_t*)0x600f28;
	uint32_t anon3 = *anon1 * 6478;
	uint32_t anon2 = anon3 | 1;
	*anon1 = anon2 + (((uint32_t)((__zext uint64_t)anon2 * 2153727671 >> 32) + anon2 >> 15) - (anon3 >> 31)) * 4294901950;
	return;
}
uint64_t m(uint64_t arg0)
{
	(__asm "pxor xmm0, xmm0")();
	(__asm "cvtsi2ss xmm0, eax")();
	(__asm "movss dword ptr [rdi*4 + 0x600fb0], xmm0")();
	(__asm "pxor xmm0, xmm0")();
	(__asm "cvtsi2ss xmm0, eax")();
	(__asm "movss dword ptr [rdi*4 + 0x600fd0], xmm0")();
	(__asm "pxor xmm0, xmm0")();
	uint32_t* anon1 = (uint32_t*)0x600f28;
	uint32_t anon7 = *anon1 * 6478;
	uint32_t anon6 = anon7 | 1;
	uint32_t anon5 = (anon6 + ((uint32_t)((__zext uint64_t)((uint32_t)((__zext uint64_t)anon6 * 2153727671 >> 32) + anon6) << 32 >> 47) - (anon7 >> 31)) * 4294901950) * 6478;
	uint32_t anon4 = anon5 | 1;
	uint32_t anon3 = (anon4 + ((uint32_t)((__zext uint64_t)anon4 * 6448694967 >> 47) - (anon5 >> 31)) * 4294901950) * 6478;
	uint32_t anon2 = anon3 | 1;
	uint32_t anon8 = anon3 >> 31;
	*anon1 = anon2 + (((uint32_t)((__zext uint64_t)anon2 * 2153727671 >> 32) + anon2 >> 15) - anon8) * 4294901950;
	(__asm "cvtsi2ss xmm0, edx")();
	(__asm "movss dword ptr [rdi*4 + 0x600f70], xmm0")();
	return (__zext uint64_t)anon8;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4197091);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600cf8)(arg1 & 0xffffffff, arg2, arg3);
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
