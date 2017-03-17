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
	uint8_t* phi2 = (uint8_t*)0x6018d2;
	while (true)
	{
		uint64_t phi3 = phi_in1;
		*phi2 = 1;
		uint64_t anon4 = phi3 & 0xe;
		*(uint8_t*)(anon4 + 134) = 1;
		if (phi3 == 6309010)
		{
			*(uint64_t*)0x6018d2 = 72340172838076673;
			*(uint64_t*)0x601951 = 72340172838076673;
			(__asm "movsd xmm4, qword ptr [rip + 0x4c7]")();
			uint64_t phi5 = 6297816;
			uint64_t phi6 = 16;
			while (true)
			{
				if (phi6 == 0)
				{
					*(uint64_t*)0x604492 = 72340172838076673;
					*(uint64_t*)0x604511 = 72340172838076673;
					uint64_t phi7 = 6309016;
					uint64_t phi8 = 16;
					while (true)
					{
						if (phi8 == 0)
						{
							uint64_t phi11;
							uint32_t anon12;
							(__asm "movsd qword ptr [rsp], xmm4")();
							uint32_t phi_in9 = 600;
							do
							{
								uint32_t phi10 = phi_in9;
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
								phi11 = 0;
								anon12 = phi10 - 1;
								phi_in9 = anon12;
							}
							while ((anon12 & 0xff) != 0);
							while (true)
							{
								uint32_t phi13 = 0;
								uint64_t phi14 = 1 - phi11 + 6296192;
								uint64_t phi15 = 6296192 - phi11;
								uint64_t phi16 = phi11;
								uint64_t anon17 = phi16 + phi15;
								uint64_t anon18 = 480 - phi11;
								uint64_t anon19 = 160 - phi11;
								uint64_t anon20 = 320 - phi11;
								uint64_t anon21 = phi16 + phi14;
								putchar((__sext int32_t)*(phi13 < 79 ? (uint8_t*)((__sext int64_t)(((__sext int32_t)*(uint8_t*)(anon17 + anon18) + ((__sext int32_t)*(uint8_t*)(anon17 + anon19) << 2) + ((__sext int32_t)*(uint8_t*)phi15 << 3) + ((__sext int32_t)*(uint8_t*)(anon17 + anon20) << 1) << 4) + ((__sext int32_t)*(uint8_t*)phi14 << 3) + ((__sext int32_t)*(uint8_t*)(anon21 + anon19) << 2) + ((__sext int32_t)*(uint8_t*)(anon21 + anon20) << 1) + (__sext int32_t)*(uint8_t*)(anon21 + anon18) + 1) + 4196472) : (uint8_t*)0x400878));
								phi11 = phi11 - 640;
								phi13 = phi13 + 1;
								phi14 = (phi14 & 0xf) + 2;
								phi15 = phi15 + 2;
								phi16 = 0;
								break;
							}
						}
						break;
						*(uint64_t*)phi7 = 72340172838076673;
						phi7 = phi7 + 8;
						phi8 = phi8 - 1;
					}
				}
				break;
				*(uint64_t*)phi5 = 72340172838076673;
				phi5 = phi5 + 8;
				phi6 = phi6 - 1;
			}
		}
		break;
		phi_in1 = phi3 + 160;
		phi2 = (uint8_t*)anon4;
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
