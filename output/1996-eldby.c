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
	while (true)
	{
		uint64_t phi5 = phi_in2;
		uint32_t phi6 = phi_in3;
		uint64_t phi7 = phi_in4;
		if (phi7 == 0)
		{
			(__asm "cvttss2si ecx, xmm0")();
			(__asm "pxor xmm0, xmm0")();
			(__asm "cvtsi2ss xmm0, eax")();
			*(uint32_t*)phi5 = 0;
			*(uint32_t*)0x600f58 = phi6;
			(__asm "ucomiss xmm1, xmm0")();
			(__asm "pxor xmm0, xmm0")();
			uint32_t* anon8 = (uint32_t*)0x600f2c;
			*anon8 = 0;
			while (true)
			{
				(__asm "pxor xmm1, xmm1")();
				(__asm "cvtsi2ss xmm1, edx")();
				(__asm "addss xmm0, xmm1")();
				(__asm "movss dword ptr [rsp + 8], xmm0")();
				uint64_t anon9 = m(4195591);
				(__asm "movss xmm0, dword ptr [rip + 0x62f]")();
				if ((uint32_t)anon9 != 0)
				{
					(__asm "pxor xmm0, xmm0")();
				}
				(__asm "addss xmm0, dword ptr [rsp + 8]")();
				(__asm "movss dword ptr [rbx*4 + 0x600f90], xmm0")();
				uint32_t anon10 = *anon8 + 1;
				llvm.ssub.with.overflow.i32(anon10, 4);
				*anon8 = anon10;
				(__asm "movsd xmm4, qword ptr [rip + 0x619]")();
				(__asm "movss xmm10, dword ptr [rip + 0x2009c3]")();
				uint8_t phi_in11 = (__zext uint8_t)(*anon8 - 3 == 0);
				uint8_t phi_in12 = (__zext uint8_t)(anon10 < 4);
				uint32_t dispatch13 = 0;
				while (true)
				{
					uint8_t phi_in44;
					bool anon40;
					uint8_t phi_in19;
					uint8_t phi34;
					uint8_t phi33;
					uint64_t phi31;
					uint8_t phi_in29;
					uint8_t phi_in30;
					uint8_t* anon24;
					uint32_t* anon16;
					uint32_t phi_in43;
					uint32_t anon25;
					uint64_t phi_in35;
					uint8_t phi_in20;
					uint8_t phi_in45;
					uint8_t phi15;
					uint64_t phi_in27;
					uint8_t phi14;
					uint64_t phi32;
					uint64_t phi_in28;
					uint64_t phi_in18;
					uint32_t phi_in17;
					if (dispatch13 == 0)
					{
						phi14 = phi_in11;
						phi15 = phi_in12;
						(__asm "ucomiss xmm10, dword ptr [rip + 0x5d3]")();
						anon16 = (uint32_t*)0x600fc8;
						*anon16 = 33;
						(__asm "movss xmm1, dword ptr [rip + 0x200a3d]")();
						phi_in17 = 33;
						phi_in18 = 33;
						phi_in19 = phi14;
						phi_in20 = phi15;
					}
					uint8_t anon21 = phi14 | phi15;
					if (dispatch13 == 2 || dispatch13 == 0 && anon21 == 0)
					{
						uint32_t phi22 = phi_in17;
						uint64_t phi23 = phi_in18;
						(__asm "pxor xmm9, xmm9")();
						(__asm "pxor xmm7, xmm7")();
						(__asm "cvtsi2ss xmm9, ecx")();
						uint32_t anon26 = (uint32_t)phi23 + 1;
						anon25 = phi22 + (__zext uint32_t)((uint32_t)(phi23 + 1) == ((uint32_t)((__zext uint64_t)anon26 * 424194301 >> 35) - (anon26 >> 31)) * 81);
						anon24 = (uint8_t*)((__sext int64_t)anon25 + arg1 - 1981);
						*anon24 = 37;
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
						phi_in27 = (__zext uint64_t)(anon25 >> 31);
						phi_in28 = 0;
						phi_in29 = 1;
						phi_in30 = 0;
					}
					if (dispatch13 == 3 || dispatch13 == 2 || dispatch13 == 0 && anon21 == 0)
					{
						phi31 = phi_in27;
						phi32 = phi_in28;
						phi33 = phi_in29;
						phi34 = phi_in30;
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
						phi_in35 = phi31;
					}
					uint8_t anon36 = phi33 | phi34;
					if (anon36 == 0 && (dispatch13 == 3 || dispatch13 == 2 || dispatch13 == 0 && anon21 == 0))
					{
						(__asm "pxor xmm5, xmm5")();
						(__asm "movaps xmm1, xmm2")();
						(__asm "movsd xmm3, qword ptr [rip + 0x4b2]")();
						(__asm "cvtss2sd xmm5, xmm2")();
						(__asm "mulsd xmm3, xmm5")();
						(__asm "mulsd xmm5, qword ptr [rip + 0x4aa]")();
					}
					if (dispatch13 == 4 || dispatch13 == 3 && anon36 == 0 || dispatch13 == 2 && anon36 == 0 || dispatch13 == 0 && anon21 == 0 && anon36 == 0)
					{
						(__asm "movaps xmm0, xmm1")();
						(__asm "pxor xmm12, xmm12")();
						(__asm "mulss xmm0, xmm1")();
						(__asm "cvtss2sd xmm12, xmm0")();
						(__asm "ucomisd xmm12, xmm3")();
					}
					if (((phi33 ^ 1) & (phi34 ^ 1)) == 0)
					{
						if (dispatch13 == 4 || dispatch13 == 3 && anon36 == 0 || dispatch13 == 2 && anon36 == 0 || dispatch13 == 0 && anon21 == 0 && anon36 == 0)
						{
							(__asm "ucomisd xmm5, xmm12")();
							(__asm "movss xmm0, dword ptr [rip + 0x43d]")();
							(__asm "mulss xmm0, xmm1")();
							(__asm "divss xmm0, xmm8")();
							(__asm "divss xmm0, xmm11")();
							(__asm "cvttss2si edx, xmm0")();
							*anon24 = *(uint8_t*)((phi31 << 32 >> 32) + 4197172);
							phi_in35 = (__zext uint64_t)*(uint8_t*)((phi31 << 32 >> 32) + 4197172);
						}
					}
					else if (dispatch13 == 4 || dispatch13 == 3 && anon36 == 0 || dispatch13 == 2 && anon36 == 0 || dispatch13 == 0 && anon21 == 0 && anon36 == 0)
					{
						(__asm "subss xmm0, xmm2")();
						(__asm "cvtss2sd xmm1, xmm1")();
						(__asm "cvtss2sd xmm0, xmm0")();
						(__asm "mulsd xmm0, xmm4")();
						(__asm "divsd xmm0, xmm1")();
						(__asm "subsd xmm1, xmm0")();
						(__asm "cvtsd2ss xmm1, xmm1")();
						dispatch13 = 4;
					}
					if (dispatch13 == 4 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 3 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 2 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 0 && anon21 == 0 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || anon36 != 0 && dispatch13 == 3 || anon36 != 0 && dispatch13 == 2 || anon36 != 0 && dispatch13 == 0 && anon21 == 0)
					{
						uint64_t phi37 = phi_in35;
						phi_in27 = phi37;
						uint64_t anon38 = phi32 - 4;
						phi_in28 = anon38;
						phi_in29 = (__zext uint8_t)(phi32 == 240);
						phi_in30 = (__zext uint8_t)(anon38 < 236);
						dispatch13 = 3;
					}
					if (phi32 == 240)
					{
						struct { uint32_t field0; bool field1; } anon39;
						if (dispatch13 == 4 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 3 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 2 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 0 && anon21 == 0 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || anon36 != 0 && dispatch13 == 3 || anon36 != 0 && dispatch13 == 2 || anon36 != 0 && dispatch13 == 0 && anon21 == 0)
						{
							(__asm "pxor xmm0, xmm0")();
							anon39 = llvm.uadd.with.overflow.i32(anon25, 1);
							(__asm "cvtsi2ss xmm0, ecx")();
							(__asm "ucomiss xmm10, xmm0")();
						}
						anon40 = anon39.field0 == 0 | anon39.field1;
						if (anon40)
						{
							if (dispatch13 == 4 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 3 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 2 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 0 && anon21 == 0 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || anon36 != 0 && dispatch13 == 3 || anon36 != 0 && dispatch13 == 2 || anon36 != 0 && dispatch13 == 0 && anon21 == 0)
							{
								(__asm "movss dword ptr [rip + 0x200868], xmm1")();
								*anon16 = anon39.field0;
								(__asm "movss dword ptr [rip + 0x200862], xmm6")();
								(__asm "movss dword ptr [rip + 0x2007dd], xmm8")();
								(__asm "movss dword ptr [rip + 0x2007d9], xmm2")();
								(__asm "movss dword ptr [rip + 0x2007d8], xmm9")();
								(__asm "movss dword ptr [rip + 0x2007d4], xmm7")();
								phi_in19 = (__zext uint8_t)(anon39.field0 == 0);
								phi_in20 = (__zext uint8_t)anon39.field1;
							}
						}
						else if (dispatch13 == 4 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 3 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 2 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || dispatch13 == 0 && anon21 == 0 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 || anon36 != 0 && dispatch13 == 3 || anon36 != 0 && dispatch13 == 2 || anon36 != 0 && dispatch13 == 0 && anon21 == 0)
						{
							phi_in17 = anon39.field0;
							phi_in18 = (__zext uint64_t)anon39.field0;
							dispatch13 = 2;
						}
					}
					if (dispatch13 == 4 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || dispatch13 == 3 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || dispatch13 == 2 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || dispatch13 == 0 && anon21 == 0 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || anon36 != 0 && dispatch13 == 3 && phi32 == 240 && anon40 || anon36 != 0 && dispatch13 == 2 && phi32 == 240 && anon40 || anon36 != 0 && dispatch13 == 0 && anon21 == 0 && phi32 == 240 && anon40 || anon21 != 0 && dispatch13 == 0)
					{
						uint8_t phi41 = phi_in19;
						uint8_t phi42 = phi_in20;
						*anon8 = 4;
						phi_in43 = 4;
						phi_in44 = phi41;
						phi_in45 = phi42;
					}
					if (dispatch13 == 1 || dispatch13 == 4 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || dispatch13 == 3 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || dispatch13 == 2 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || dispatch13 == 0 && anon21 == 0 && anon36 == 0 && ((phi33 ^ 1) & (phi34 ^ 1)) == 0 && phi32 == 240 && anon40 || anon36 != 0 && dispatch13 == 3 && phi32 == 240 && anon40 || anon36 != 0 && dispatch13 == 2 && phi32 == 240 && anon40 || anon36 != 0 && dispatch13 == 0 && anon21 == 0 && phi32 == 240 && anon40 || anon21 != 0 && dispatch13 == 0)
					{
						uint32_t phi46 = phi_in43;
						uint8_t phi47 = phi_in44;
						uint8_t phi48 = phi_in45;
						(__asm "pxor xmm7, xmm7")();
						(__asm "movss xmm0, dword ptr [rbx*4 + 0x600f90]")();
						(__asm "ucomiss xmm7, xmm0")();
						uint32_t phi_in49 = phi46;
						if ((phi47 | phi48) == 0)
						{
							(__asm "movsd qword ptr [rsp + 8], xmm4")();
							m(4196361);
							(__asm "pxor xmm0, xmm0")();
							(__asm "movss xmm10, dword ptr [rip + 0x200715]")();
							(__asm "movsd xmm4, qword ptr [rsp + 8]")();
							(__asm "cvtsi2ss xmm0, eax")();
							phi_in49 = *anon8;
						}
						uint32_t phi50 = phi_in49;
						(__asm "movss xmm1, dword ptr [rip + 0x3a4]")();
						(__asm "mulss xmm1, xmm10")();
						(__asm "movss dword ptr [rbx*4 + 0x600f90], xmm0")();
						uint32_t anon51 = phi50 - 1;
						*anon8 = anon51;
						(__asm "movss xmm0, dword ptr [rdx*4 + 0x600f90]")();
						(__asm "subss xmm0, xmm1")();
						(__asm "movss dword ptr [rdx*4 + 0x600f90], xmm0")();
						phi_in43 = anon51;
						uint8_t anon52 = (__zext uint8_t)(phi50 == 256);
						phi_in44 = anon52;
						uint8_t anon53 = (__zext uint8_t)(anon51 < 255);
						phi_in45 = anon53;
						dispatch13 = 1;
						if (phi50 == 256)
						{
							(__asm "ucomiss xmm10, dword ptr [rip + 0x316]")();
							phi_in11 = anon52;
							phi_in12 = anon53;
							dispatch13 = 0;
						}
					}
				}
				(__asm "pxor xmm0, xmm0")();
				if (anon10 != 0)
				{
					(__asm "movss xmm0, dword ptr [rax*4 + 0x600f90]")();
				}
			}
		}
		else 
		{
			*(uint64_t*)phi5 = 0;
			phi_in2 = phi5 + 8;
			uint64_t anon54 = phi7 - 1;
			phi_in3 = (uint32_t)anon54;
			phi_in4 = anon54;
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
