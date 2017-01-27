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
			uint32_t anon12;
			uint32_t anon11;
			uint8_t anon13;
			struct { uint32_t field0; bool field1; } anon10;
			(__asm "cvttss2si ecx, xmm0")();
			(__asm "pxor xmm0, xmm0")();
			(__asm "cvtsi2ss xmm0, eax")();
			*(uint32_t*)phi5 = 0;
			*(uint32_t*)0x600f58 = phi6;
			(__asm "ucomiss xmm1, xmm0")();
			(__asm "pxor xmm0, xmm0")();
			uint32_t* anon8 = (uint32_t*)0x600f2c;
			*anon8 = 0;
			do
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
				anon11 = *anon8 + 1;
				anon10 = llvm.ssub.with.overflow.i32(anon11, 4);
				*anon8 = anon11;
				anon12 = *anon8 - 3;
				anon13 = (__zext uint8_t)(anon12 == 0);
				if (((__zext uint32_t)((uint8_t)(anon12 >> 31) == (__zext uint8_t)anon10.field1) & (__zext uint32_t)(anon13 ^ 1)) == 0)
				{
					(__asm "pxor xmm0, xmm0")();
					if (anon11 != 0)
					{
						(__asm "movss xmm0, dword ptr [rax*4 + 0x600f90]")();
					}
				}
			}
			while (((__zext uint32_t)((uint8_t)(anon12 >> 31) == (__zext uint8_t)anon10.field1) & (__zext uint32_t)(anon13 ^ 1)) == 0);
			(__asm "movsd xmm4, qword ptr [rip + 0x619]")();
			(__asm "movss xmm10, dword ptr [rip + 0x2009c3]")();
			uint8_t phi_in14 = anon13;
			uint8_t phi_in15 = (__zext uint8_t)(anon11 < 4);
			uint32_t dispatch16 = 0;
			while (true)
			{
				bool anon43;
				uint32_t* anon19;
				uint32_t phi_in46;
				uint64_t phi_in38;
				uint8_t phi37;
				uint8_t phi_in33;
				uint8_t phi_in32;
				uint64_t phi_in31;
				uint8_t* anon27;
				uint8_t phi_in48;
				uint8_t phi_in23;
				uint8_t phi36;
				uint64_t phi_in30;
				uint8_t phi_in22;
				uint8_t phi18;
				uint64_t phi34;
				uint32_t anon28;
				uint64_t phi_in21;
				uint32_t phi_in20;
				uint8_t phi17;
				uint8_t phi_in47;
				uint64_t phi35;
				if (dispatch16 == 0)
				{
					phi17 = phi_in14;
					phi18 = phi_in15;
					(__asm "ucomiss xmm10, dword ptr [rip + 0x5d3]")();
					anon19 = (uint32_t*)0x600fc8;
					*anon19 = 33;
					(__asm "movss xmm1, dword ptr [rip + 0x200a3d]")();
					phi_in20 = 33;
					phi_in21 = 33;
					phi_in22 = phi17;
					phi_in23 = phi18;
				}
				uint8_t anon24 = phi17 | phi18;
				if (dispatch16 == 2 || dispatch16 == 0 && anon24 == 0)
				{
					uint32_t phi25 = phi_in20;
					uint64_t phi26 = phi_in21;
					(__asm "pxor xmm9, xmm9")();
					(__asm "pxor xmm7, xmm7")();
					(__asm "cvtsi2ss xmm9, ecx")();
					uint32_t anon29 = (uint32_t)phi26 + 1;
					anon28 = phi25 + (__zext uint32_t)((uint32_t)(phi26 + 1) == ((uint32_t)((__zext uint64_t)anon29 * 424194301 >> 35) - (anon29 >> 31)) * 81);
					anon27 = (uint8_t*)((__sext int64_t)anon28 + arg1 - 1981);
					*anon27 = 37;
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
					phi_in30 = (__zext uint64_t)(anon28 >> 31);
					phi_in31 = 0;
					phi_in32 = 1;
					phi_in33 = 0;
				}
				if (dispatch16 == 3 || dispatch16 == 2 || dispatch16 == 0 && anon24 == 0)
				{
					phi34 = phi_in30;
					phi35 = phi_in31;
					phi36 = phi_in32;
					phi37 = phi_in33;
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
					phi_in38 = phi34;
				}
				uint8_t anon39 = phi36 | phi37;
				if (anon39 == 0 && (dispatch16 == 3 || dispatch16 == 2 || dispatch16 == 0 && anon24 == 0))
				{
					(__asm "pxor xmm5, xmm5")();
					(__asm "movaps xmm1, xmm2")();
					(__asm "movsd xmm3, qword ptr [rip + 0x4b2]")();
					(__asm "cvtss2sd xmm5, xmm2")();
					(__asm "mulsd xmm3, xmm5")();
					(__asm "mulsd xmm5, qword ptr [rip + 0x4aa]")();
				}
				if (dispatch16 == 4 || dispatch16 == 3 && anon39 == 0 || dispatch16 == 2 && anon39 == 0 || dispatch16 == 0 && anon24 == 0 && anon39 == 0)
				{
					(__asm "movaps xmm0, xmm1")();
					(__asm "pxor xmm12, xmm12")();
					(__asm "mulss xmm0, xmm1")();
					(__asm "cvtss2sd xmm12, xmm0")();
					(__asm "ucomisd xmm12, xmm3")();
				}
				if (((phi36 ^ 1) & (phi37 ^ 1)) == 0)
				{
					if (dispatch16 == 4 || dispatch16 == 3 && anon39 == 0 || dispatch16 == 2 && anon39 == 0 || dispatch16 == 0 && anon24 == 0 && anon39 == 0)
					{
						(__asm "ucomisd xmm5, xmm12")();
						(__asm "movss xmm0, dword ptr [rip + 0x43d]")();
						(__asm "mulss xmm0, xmm1")();
						(__asm "divss xmm0, xmm8")();
						(__asm "divss xmm0, xmm11")();
						(__asm "cvttss2si edx, xmm0")();
						*anon27 = *(uint8_t*)((phi34 << 32 >> 32) + 4197172);
						phi_in38 = (__zext uint64_t)*(uint8_t*)((phi34 << 32 >> 32) + 4197172);
					}
				}
				else if (dispatch16 == 4 || dispatch16 == 3 && anon39 == 0 || dispatch16 == 2 && anon39 == 0 || dispatch16 == 0 && anon24 == 0 && anon39 == 0)
				{
					(__asm "subss xmm0, xmm2")();
					(__asm "cvtss2sd xmm1, xmm1")();
					(__asm "cvtss2sd xmm0, xmm0")();
					(__asm "mulsd xmm0, xmm4")();
					(__asm "divsd xmm0, xmm1")();
					(__asm "subsd xmm1, xmm0")();
					(__asm "cvtsd2ss xmm1, xmm1")();
					dispatch16 = 4;
				}
				if (dispatch16 == 4 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 3 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 2 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 0 && anon24 == 0 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || anon39 != 0 && dispatch16 == 3 || anon39 != 0 && dispatch16 == 2 || anon39 != 0 && dispatch16 == 0 && anon24 == 0)
				{
					uint64_t phi40 = phi_in38;
					phi_in30 = phi40;
					uint64_t anon41 = phi35 - 4;
					phi_in31 = anon41;
					phi_in32 = (__zext uint8_t)(phi35 == 240);
					phi_in33 = (__zext uint8_t)(anon41 < 236);
					dispatch16 = 3;
				}
				if (phi35 == 240)
				{
					struct { uint32_t field0; bool field1; } anon42;
					if (dispatch16 == 4 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 3 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 2 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 0 && anon24 == 0 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || anon39 != 0 && dispatch16 == 3 || anon39 != 0 && dispatch16 == 2 || anon39 != 0 && dispatch16 == 0 && anon24 == 0)
					{
						(__asm "pxor xmm0, xmm0")();
						anon42 = llvm.uadd.with.overflow.i32(anon28, 1);
						(__asm "cvtsi2ss xmm0, ecx")();
						(__asm "ucomiss xmm10, xmm0")();
					}
					anon43 = anon42.field0 == 0 | anon42.field1;
					if (anon43)
					{
						if (dispatch16 == 4 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 3 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 2 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 0 && anon24 == 0 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || anon39 != 0 && dispatch16 == 3 || anon39 != 0 && dispatch16 == 2 || anon39 != 0 && dispatch16 == 0 && anon24 == 0)
						{
							(__asm "movss dword ptr [rip + 0x200868], xmm1")();
							*anon19 = anon42.field0;
							(__asm "movss dword ptr [rip + 0x200862], xmm6")();
							(__asm "movss dword ptr [rip + 0x2007dd], xmm8")();
							(__asm "movss dword ptr [rip + 0x2007d9], xmm2")();
							(__asm "movss dword ptr [rip + 0x2007d8], xmm9")();
							(__asm "movss dword ptr [rip + 0x2007d4], xmm7")();
							phi_in22 = (__zext uint8_t)(anon42.field0 == 0);
							phi_in23 = (__zext uint8_t)anon42.field1;
						}
					}
					else if (dispatch16 == 4 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 3 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 2 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || dispatch16 == 0 && anon24 == 0 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 || anon39 != 0 && dispatch16 == 3 || anon39 != 0 && dispatch16 == 2 || anon39 != 0 && dispatch16 == 0 && anon24 == 0)
					{
						phi_in20 = anon42.field0;
						phi_in21 = (__zext uint64_t)anon42.field0;
						dispatch16 = 2;
					}
				}
				if (dispatch16 == 4 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || dispatch16 == 3 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || dispatch16 == 2 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || dispatch16 == 0 && anon24 == 0 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || anon39 != 0 && dispatch16 == 3 && phi35 == 240 && anon43 || anon39 != 0 && dispatch16 == 2 && phi35 == 240 && anon43 || anon39 != 0 && dispatch16 == 0 && anon24 == 0 && phi35 == 240 && anon43 || anon24 != 0 && dispatch16 == 0)
				{
					uint8_t phi44 = phi_in22;
					uint8_t phi45 = phi_in23;
					*anon8 = 4;
					phi_in46 = 4;
					phi_in47 = phi44;
					phi_in48 = phi45;
				}
				if (dispatch16 == 1 || dispatch16 == 4 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || dispatch16 == 3 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || dispatch16 == 2 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || dispatch16 == 0 && anon24 == 0 && anon39 == 0 && ((phi36 ^ 1) & (phi37 ^ 1)) == 0 && phi35 == 240 && anon43 || anon39 != 0 && dispatch16 == 3 && phi35 == 240 && anon43 || anon39 != 0 && dispatch16 == 2 && phi35 == 240 && anon43 || anon39 != 0 && dispatch16 == 0 && anon24 == 0 && phi35 == 240 && anon43 || anon24 != 0 && dispatch16 == 0)
				{
					uint32_t phi49 = phi_in46;
					uint8_t phi50 = phi_in47;
					uint8_t phi51 = phi_in48;
					(__asm "pxor xmm7, xmm7")();
					(__asm "movss xmm0, dword ptr [rbx*4 + 0x600f90]")();
					(__asm "ucomiss xmm7, xmm0")();
					uint32_t phi_in52 = phi49;
					if ((phi50 | phi51) == 0)
					{
						(__asm "movsd qword ptr [rsp + 8], xmm4")();
						m(4196361);
						(__asm "pxor xmm0, xmm0")();
						(__asm "movss xmm10, dword ptr [rip + 0x200715]")();
						(__asm "movsd xmm4, qword ptr [rsp + 8]")();
						(__asm "cvtsi2ss xmm0, eax")();
						phi_in52 = *anon8;
					}
					uint32_t phi53 = phi_in52;
					(__asm "movss xmm1, dword ptr [rip + 0x3a4]")();
					(__asm "mulss xmm1, xmm10")();
					(__asm "movss dword ptr [rbx*4 + 0x600f90], xmm0")();
					uint32_t anon54 = phi53 - 1;
					*anon8 = anon54;
					(__asm "movss xmm0, dword ptr [rdx*4 + 0x600f90]")();
					(__asm "subss xmm0, xmm1")();
					(__asm "movss dword ptr [rdx*4 + 0x600f90], xmm0")();
					phi_in46 = anon54;
					uint8_t anon55 = (__zext uint8_t)(phi53 == 256);
					phi_in47 = anon55;
					uint8_t anon56 = (__zext uint8_t)(anon54 < 255);
					phi_in48 = anon56;
					dispatch16 = 1;
					if (phi53 == 256)
					{
						(__asm "ucomiss xmm10, dword ptr [rip + 0x316]")();
						phi_in14 = anon55;
						phi_in15 = anon56;
						dispatch16 = 0;
					}
				}
			}
		}
		else 
		{
			*(uint64_t*)phi5 = 0;
			phi_in2 = phi5 + 8;
			uint64_t anon57 = phi7 - 1;
			phi_in3 = (uint32_t)anon57;
			phi_in4 = anon57;
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
