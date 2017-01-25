#include "tests/bin/1996-eldby.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600ee0 != 0)
	{
		__gmon_start__(4195261);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600f10);
}
void main(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[16]; uint64_t field1; uint64_t field2; uint64_t field3; uint64_t field4; uint64_t field5; uint8_t field6[1936]; uint64_t field7; } alloca1;
	uint64_t phi7;
	uint32_t phi6;
	uint64_t phi5;
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
	uint32_t phi_in3 = 238;
	uint64_t phi_in4 = 238;
	do
	{
		phi5 = phi_in2;
		phi6 = phi_in3;
		phi7 = phi_in4;
		if (phi7 != 0)
		{
			*(uint64_t*)phi5 = 0;
			phi_in2 = phi5 + 8;
			uint64_t anon8 = phi7 - 1;
			phi_in3 = (uint32_t)anon8;
			phi_in4 = anon8;
		}
	}
	while (phi7 != 0);
	(__asm "cvttss2si ecx, xmm0")();
	(__asm "pxor xmm0, xmm0")();
	(__asm "cvtsi2ss xmm0, eax")();
	*(uint32_t*)phi5 = 0;
	*(uint32_t*)0x600f58 = phi6;
	(__asm "ucomiss xmm1, xmm0")();
	(__asm "pxor xmm0, xmm0")();
	uint32_t* anon9 = (uint32_t*)0x600f2c;
	*anon9 = 0;
	while (true)
	{
		(__asm "pxor xmm1, xmm1")();
		(__asm "cvtsi2ss xmm1, edx")();
		(__asm "addss xmm0, xmm1")();
		(__asm "movss dword ptr [rsp + 8], xmm0")();
		uint64_t anon10 = m(4195591);
		(__asm "movss xmm0, dword ptr [rip + 0x62f]")();
		if ((uint32_t)anon10 != 0)
		{
			(__asm "pxor xmm0, xmm0")();
		}
		(__asm "addss xmm0, dword ptr [rsp + 8]")();
		(__asm "movss dword ptr [rbx*4 + 0x600f90], xmm0")();
		uint32_t anon11 = *anon9 + 1;
		llvm.ssub.with.overflow.i32(anon11, 4);
		*anon9 = anon11;
		(__asm "movsd xmm4, qword ptr [rip + 0x619]")();
		(__asm "movss xmm10, dword ptr [rip + 0x2009c3]")();
		uint8_t phi_in12 = (__zext uint8_t)(*anon9 - 3 == 0);
		uint8_t phi_in13 = (__zext uint8_t)(anon11 < 4);
		uint32_t dispatch14 = 0;
		while (true)
		{
			uint8_t phi_in46;
			bool anon42;
			uint8_t* anon25;
			uint64_t phi_in36;
			uint64_t phi32;
			uint32_t* anon17;
			uint8_t phi_in31;
			uint8_t phi_in20;
			uint64_t phi33;
			uint8_t phi_in30;
			uint64_t phi_in28;
			uint32_t anon26;
			uint8_t phi_in21;
			uint8_t phi16;
			uint8_t phi35;
			uint8_t phi34;
			uint8_t phi15;
			uint32_t phi_in18;
			uint64_t phi_in29;
			uint64_t phi_in19;
			uint32_t phi_in45;
			uint8_t phi_in47;
			if (dispatch14 == 0)
			{
				phi15 = phi_in12;
				phi16 = phi_in13;
				(__asm "ucomiss xmm10, dword ptr [rip + 0x5d3]")();
				anon17 = (uint32_t*)0x600fc8;
				*anon17 = 33;
				(__asm "movss xmm1, dword ptr [rip + 0x200a3d]")();
				phi_in18 = 33;
				phi_in19 = 33;
				phi_in20 = phi15;
				phi_in21 = phi16;
			}
			uint8_t anon22 = phi15 | phi16;
			if (dispatch14 == 4 || dispatch14 == 0 && anon22 == 0)
			{
				uint32_t phi23 = phi_in18;
				uint64_t phi24 = phi_in19;
				(__asm "pxor xmm9, xmm9")();
				(__asm "pxor xmm7, xmm7")();
				(__asm "cvtsi2ss xmm9, ecx")();
				uint32_t anon27 = (uint32_t)phi24 + 1;
				anon26 = phi23 + (__zext uint32_t)((uint32_t)(phi24 + 1) == ((uint32_t)((__zext uint64_t)anon27 * 424194301 >> 35) - (anon27 >> 31)) * 81);
				anon25 = (uint8_t*)((__sext int64_t)anon26 + arg1 - 1981);
				*anon25 = 37;
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
				phi_in28 = (__zext uint64_t)(anon26 >> 31);
				phi_in29 = 0;
				phi_in30 = 1;
				phi_in31 = 0;
			}
			if (dispatch14 == 3 || dispatch14 == 4 || dispatch14 == 0 && anon22 == 0)
			{
				phi32 = phi_in28;
				phi33 = phi_in29;
				phi34 = phi_in30;
				phi35 = phi_in31;
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
				phi_in36 = phi32;
			}
			uint8_t anon37 = phi34 | phi35;
			if (anon37 == 0 && (dispatch14 == 3 || dispatch14 == 4 || dispatch14 == 0 && anon22 == 0))
			{
				(__asm "pxor xmm5, xmm5")();
				(__asm "movaps xmm1, xmm2")();
				(__asm "movsd xmm3, qword ptr [rip + 0x4b2]")();
				(__asm "cvtss2sd xmm5, xmm2")();
				(__asm "mulsd xmm3, xmm5")();
				(__asm "mulsd xmm5, qword ptr [rip + 0x4aa]")();
			}
			if (dispatch14 == 2 || dispatch14 == 3 && anon37 == 0 || dispatch14 == 4 && anon37 == 0 || dispatch14 == 0 && anon22 == 0 && anon37 == 0)
			{
				(__asm "movaps xmm0, xmm1")();
				(__asm "pxor xmm12, xmm12")();
				(__asm "mulss xmm0, xmm1")();
				(__asm "cvtss2sd xmm12, xmm0")();
				(__asm "ucomisd xmm12, xmm3")();
			}
			uint8_t anon38 = (phi34 ^ 1) & (phi35 ^ 1);
			if (anon38 == 0 && (dispatch14 == 2 || dispatch14 == 3 && anon37 == 0 || dispatch14 == 4 && anon37 == 0 || dispatch14 == 0 && anon22 == 0 && anon37 == 0))
			{
				(__asm "ucomisd xmm5, xmm12")();
				(__asm "movss xmm0, dword ptr [rip + 0x43d]")();
				(__asm "mulss xmm0, xmm1")();
				(__asm "divss xmm0, xmm8")();
				(__asm "divss xmm0, xmm11")();
				(__asm "cvttss2si edx, xmm0")();
				*anon25 = *(uint8_t*)((phi32 << 32 >> 32) + 4197172);
				phi_in36 = (__zext uint64_t)*(uint8_t*)((phi32 << 32 >> 32) + 4197172);
			}
			if (dispatch14 == 2 && anon38 == 0 || dispatch14 == 3 && anon37 == 0 && anon38 == 0 || dispatch14 == 4 && anon37 == 0 && anon38 == 0 || dispatch14 == 0 && anon22 == 0 && anon37 == 0 && anon38 == 0 || anon37 != 0 && dispatch14 == 3 || anon37 != 0 && dispatch14 == 4 || anon37 != 0 && dispatch14 == 0 && anon22 == 0)
			{
				uint64_t phi39 = phi_in36;
				phi_in28 = phi39;
				uint64_t anon40 = phi33 - 4;
				phi_in29 = anon40;
				phi_in30 = (__zext uint8_t)(phi33 == 240);
				phi_in31 = (__zext uint8_t)(anon40 < 236);
				dispatch14 = 3;
			}
			if (phi33 == 240)
			{
				struct { uint32_t field0; bool field1; } anon41;
				if (dispatch14 == 2 && anon38 == 0 || dispatch14 == 3 && anon37 == 0 && anon38 == 0 || dispatch14 == 4 && anon37 == 0 && anon38 == 0 || dispatch14 == 0 && anon22 == 0 && anon37 == 0 && anon38 == 0 || anon37 != 0 && dispatch14 == 3 || anon37 != 0 && dispatch14 == 4 || anon37 != 0 && dispatch14 == 0 && anon22 == 0)
				{
					(__asm "pxor xmm0, xmm0")();
					anon41 = llvm.uadd.with.overflow.i32(anon26, 1);
					(__asm "cvtsi2ss xmm0, ecx")();
					(__asm "ucomiss xmm10, xmm0")();
				}
				anon42 = anon41.field0 == 0 | anon41.field1;
				if (anon42)
				{
					if (dispatch14 == 2 && anon38 == 0 || dispatch14 == 3 && anon37 == 0 && anon38 == 0 || dispatch14 == 4 && anon37 == 0 && anon38 == 0 || dispatch14 == 0 && anon22 == 0 && anon37 == 0 && anon38 == 0 || anon37 != 0 && dispatch14 == 3 || anon37 != 0 && dispatch14 == 4 || anon37 != 0 && dispatch14 == 0 && anon22 == 0)
					{
						(__asm "movss dword ptr [rip + 0x200868], xmm1")();
						*anon17 = anon41.field0;
						(__asm "movss dword ptr [rip + 0x200862], xmm6")();
						(__asm "movss dword ptr [rip + 0x2007dd], xmm8")();
						(__asm "movss dword ptr [rip + 0x2007d9], xmm2")();
						(__asm "movss dword ptr [rip + 0x2007d8], xmm9")();
						(__asm "movss dword ptr [rip + 0x2007d4], xmm7")();
						phi_in20 = (__zext uint8_t)(anon41.field0 == 0);
						phi_in21 = (__zext uint8_t)anon41.field1;
					}
				}
				else if (dispatch14 == 2 && anon38 == 0 || dispatch14 == 3 && anon37 == 0 && anon38 == 0 || dispatch14 == 4 && anon37 == 0 && anon38 == 0 || dispatch14 == 0 && anon22 == 0 && anon37 == 0 && anon38 == 0 || anon37 != 0 && dispatch14 == 3 || anon37 != 0 && dispatch14 == 4 || anon37 != 0 && dispatch14 == 0 && anon22 == 0)
				{
					phi_in18 = anon41.field0;
					phi_in19 = (__zext uint64_t)anon41.field0;
					dispatch14 = 4;
				}
			}
			if (anon38 != 0 && (dispatch14 == 2 || dispatch14 == 3 && anon37 == 0 || dispatch14 == 4 && anon37 == 0 || dispatch14 == 0 && anon22 == 0 && anon37 == 0))
			{
				(__asm "subss xmm0, xmm2")();
				(__asm "cvtss2sd xmm1, xmm1")();
				(__asm "cvtss2sd xmm0, xmm0")();
				(__asm "mulsd xmm0, xmm4")();
				(__asm "divsd xmm0, xmm1")();
				(__asm "subsd xmm1, xmm0")();
				(__asm "cvtsd2ss xmm1, xmm1")();
				dispatch14 = 2;
			}
			if (dispatch14 == 2 && anon38 == 0 && phi33 == 240 && anon42 || dispatch14 == 3 && anon37 == 0 && anon38 == 0 && phi33 == 240 && anon42 || dispatch14 == 4 && anon37 == 0 && anon38 == 0 && phi33 == 240 && anon42 || dispatch14 == 0 && anon22 == 0 && anon37 == 0 && anon38 == 0 && phi33 == 240 && anon42 || anon37 != 0 && dispatch14 == 3 && phi33 == 240 && anon42 || anon37 != 0 && dispatch14 == 4 && phi33 == 240 && anon42 || anon37 != 0 && dispatch14 == 0 && anon22 == 0 && phi33 == 240 && anon42 || anon22 != 0 && dispatch14 == 0)
			{
				uint8_t phi43 = phi_in20;
				uint8_t phi44 = phi_in21;
				*anon9 = 4;
				phi_in45 = 4;
				phi_in46 = phi43;
				phi_in47 = phi44;
			}
			if (dispatch14 == 1 || dispatch14 == 2 && anon38 == 0 && phi33 == 240 && anon42 || dispatch14 == 3 && anon37 == 0 && anon38 == 0 && phi33 == 240 && anon42 || dispatch14 == 4 && anon37 == 0 && anon38 == 0 && phi33 == 240 && anon42 || dispatch14 == 0 && anon22 == 0 && anon37 == 0 && anon38 == 0 && phi33 == 240 && anon42 || anon37 != 0 && dispatch14 == 3 && phi33 == 240 && anon42 || anon37 != 0 && dispatch14 == 4 && phi33 == 240 && anon42 || anon37 != 0 && dispatch14 == 0 && anon22 == 0 && phi33 == 240 && anon42 || anon22 != 0 && dispatch14 == 0)
			{
				uint32_t phi48 = phi_in45;
				uint8_t phi49 = phi_in46;
				uint8_t phi50 = phi_in47;
				(__asm "pxor xmm7, xmm7")();
				(__asm "movss xmm0, dword ptr [rbx*4 + 0x600f90]")();
				(__asm "ucomiss xmm7, xmm0")();
				uint32_t phi_in51 = phi48;
				if ((phi49 | phi50) == 0)
				{
					(__asm "movsd qword ptr [rsp + 8], xmm4")();
					m(4196361);
					(__asm "pxor xmm0, xmm0")();
					(__asm "movss xmm10, dword ptr [rip + 0x200715]")();
					(__asm "movsd xmm4, qword ptr [rsp + 8]")();
					(__asm "cvtsi2ss xmm0, eax")();
					phi_in51 = *anon9;
				}
				uint32_t phi52 = phi_in51;
				(__asm "movss xmm1, dword ptr [rip + 0x3a4]")();
				(__asm "mulss xmm1, xmm10")();
				(__asm "movss dword ptr [rbx*4 + 0x600f90], xmm0")();
				uint32_t anon53 = phi52 - 1;
				*anon9 = anon53;
				(__asm "movss xmm0, dword ptr [rdx*4 + 0x600f90]")();
				(__asm "subss xmm0, xmm1")();
				(__asm "movss dword ptr [rdx*4 + 0x600f90], xmm0")();
				phi_in45 = anon53;
				uint8_t anon54 = (__zext uint8_t)(phi52 == 256);
				phi_in46 = anon54;
				uint8_t anon55 = (__zext uint8_t)(anon53 < 255);
				phi_in47 = anon55;
				dispatch14 = 1;
				if (phi52 == 256)
				{
					(__asm "ucomiss xmm10, dword ptr [rip + 0x316]")();
					phi_in12 = anon54;
					phi_in13 = anon55;
					dispatch14 = 0;
				}
			}
		}
		(__asm "pxor xmm0, xmm0")();
		if (anon11 != 0)
		{
			(__asm "movss xmm0, dword ptr [rax*4 + 0x600f90]")();
		}
	}
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400410, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ab0, (void(*)())0x400b20, (void(*)())arg2, *(uint8_t**)anon1);
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
	*anon1 = anon2 + ((uint32_t)((__zext uint64_t)anon2 * 6448694967 >> 32 >> 15) - (anon3 >> 31)) * 4294901950;
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
	uint32_t anon5 = (anon6 + ((uint32_t)((__zext uint64_t)anon6 * 6448694967 >> 47) - (anon7 >> 31)) * 4294901950) * 6478;
	uint32_t anon4 = anon5 | 1;
	uint32_t anon3 = anon4 + ((uint32_t)((__zext uint64_t)anon4 * 6448694967 >> 47) - (anon5 >> 31)) * 4294901950;
	int64_t anon2 = (__sext int64_t)anon3 * 6478 & 0xfffffffe | 1;
	uint64_t anon8 = (__zext uint64_t)(anon3 * 6478) << 32 >> 63;
	*anon1 = (uint32_t)anon2 + ((uint32_t)(anon2 * 6448694967 >> 47) - (uint32_t)anon8) * 4294901950;
	(__asm "cvtsi2ss xmm0, edx")();
	(__asm "movss dword ptr [rdi*4 + 0x600f70], xmm0")();
	return anon8 & 0xffffffff;
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
