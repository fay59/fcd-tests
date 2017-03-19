#include "tests/bin/1994-horton.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint64_t phi_in1 = 6297810;
	uint8_t* phi_in2 = (uint8_t*)0x6018d2;
	while (true)
	{
		uint64_t phi3 = phi_in1;
		uint8_t* phi4 = phi_in2;
		*phi4 = 1;
		uint64_t anon5 = phi3 & 0xe;
		*(uint8_t*)(anon5 + 134) = 1;
		if (phi3 == 6309010)
		{
			*(uint64_t*)0x6018d2 = 72340172838076673;
			*(uint64_t*)0x601951 = 72340172838076673;
			(__asm "movsd xmm4, qword ptr [rip + 0x4c7]")();
			uint64_t phi_in6 = 6297816;
			uint64_t phi_in7 = 16;
			while (true)
			{
				uint64_t phi8 = phi_in6;
				uint64_t phi9 = phi_in7;
				if (phi9 == 0)
				{
					*(uint64_t*)0x604492 = 72340172838076673;
					*(uint64_t*)0x604511 = 72340172838076673;
					uint64_t phi_in10 = 6309016;
					uint64_t phi_in11 = 16;
					while (true)
					{
						uint64_t phi12 = phi_in10;
						uint64_t phi13 = phi_in11;
						if (phi13 == 0)
						{
							uint64_t phi_in16;
							uint32_t anon18;
							(__asm "movsd qword ptr [rsp], xmm4")();
							uint32_t phi_in14 = 600;
							do
							{
								uint32_t phi15 = phi_in14;
								atof();
								(__asm "movsd xmm1, qword ptr [rsp]")();
								(__asm "mulsd xmm0, xmm1")();
								(__asm "mulsd xmm0, xmm1")();
								(__asm "mulsd xmm0, xmm1")();
								(__asm "movsd qword ptr [rsp + 8], xmm0")();
								atof();
								(__asm "movsd xmm1, qword ptr [rsp]")();
								(__asm "movsd xmm3, qword ptr [rsp + 8]")();
								(__asm "mulsd xmm0, xmm1")();
								(__asm "mulsd xmm0, xmm1")();
								(__asm "addsd xmm3, xmm0")();
								(__asm "movsd qword ptr [rsp + 8], xmm3")();
								atof();
								(__asm "mulsd xmm0, qword ptr [rsp]")();
								(__asm "addsd xmm0, qword ptr [rsp + 8]")();
								(__asm "movsd qword ptr [rsp + 8], xmm0")();
								atof();
								(__asm "addsd xmm0, qword ptr [rsp + 8]")();
								(__asm "movsd xmm5, qword ptr [rip + 0x40f]")();
								(__asm "subsd xmm5, xmm0")();
								(__asm "movsd xmm0, qword ptr [rip + 0x40b]")();
								(__asm "mulsd xmm0, xmm5")();
								(__asm "addsd xmm0, qword ptr [rip + 0x407]")();
								(__asm "cvttsd2si eax, xmm0")();
								(__asm "movsd xmm6, qword ptr [rip + 0x3ca]")();
								(__asm "addsd xmm6, qword ptr [rsp]")();
								(__asm "movsd qword ptr [rsp], xmm6")();
								phi_in16 = 0;
								uint32_t anon17 = phi15 - 1;
								phi_in14 = anon17;
								anon18 = anon17 & 0xff;
							}
							while (anon18 != 0);
							while (true)
							{
								uint64_t phi19 = phi_in16;
								uint32_t phi_in20 = 0;
								uint64_t phi_in21 = 1 - phi19 + 6296192;
								uint64_t phi_in22 = 6296192 - phi19;
								uint64_t phi_in23 = phi19;
								uint32_t phi24 = phi_in20;
								uint64_t phi25 = phi_in21;
								uint64_t phi26 = phi_in22;
								uint64_t phi27 = phi_in23;
								uint64_t anon28 = phi27 + phi26;
								uint64_t anon29 = 480 - phi19;
								uint64_t anon30 = 160 - phi19;
								uint64_t anon31 = 320 - phi19;
								uint64_t anon32 = phi27 + phi25;
								putchar((__sext int32_t)*(phi24 < 79 ? (uint8_t*)((__sext int64_t)(((__sext int32_t)*(uint8_t*)(anon28 + anon29) + ((__sext int32_t)*(uint8_t*)(anon28 + anon30) << 2) + ((__sext int32_t)*(uint8_t*)phi26 << 3) + ((__sext int32_t)*(uint8_t*)(anon28 + anon31) << 1) << 4) + ((__sext int32_t)*(uint8_t*)phi25 << 3) + ((__sext int32_t)*(uint8_t*)(anon32 + anon30) << 2) + ((__sext int32_t)*(uint8_t*)(anon32 + anon31) << 1) + (__sext int32_t)*(uint8_t*)(anon32 + anon29) + 1) + 4196472) : (uint8_t*)0x400878));
								phi_in16 = phi19 - 640;
								phi_in20 = phi24 + 1;
								phi_in21 = (phi25 & 0xf) + 2;
								phi_in22 = phi26 + 2;
								phi_in23 = 0;
								break;
							}
						}
						break;
						*(uint64_t*)phi12 = 72340172838076673;
						phi_in10 = phi12 + 8;
						phi_in11 = phi13 - 1;
					}
				}
				break;
				*(uint64_t*)phi8 = 72340172838076673;
				phi_in6 = phi8 + 8;
				phi_in7 = phi9 - 1;
			}
		}
		break;
		phi_in1 = phi3 + 160;
		phi_in2 = (uint8_t*)anon5;
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400450, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4007f0, (void(*)())0x400860, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x601240;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196274);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196387);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601000)(arg1 & 0xffffffff, arg2, arg3);
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
