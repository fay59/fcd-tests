#include "tests/bin/1996-dalbec.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bd0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, uint64_t arg5, uint64_t arg6)
{
	struct { uint8_t field0[24]; uint8_t field1[48]; uint64_t field2; } alloca1;
	uint32_t phi_in7;
	alloca1.field2 = arg0;
	uint64_t alloca2 = (uint64_t)&alloca1.field1;
	uint64_t alloca3 = arg2 & 0xffffffff;
	uint64_t phi_in4 = arg4 & 0xffffffff;
	uint64_t phi_in5 = arg6 & 0xffffffff;
	uint64_t phi_in6 = arg5 & 0xffffffff;
	uint32_t anon8 = (uint32_t)arg2;
	phi_in7 = anon8;
	uint32_t phi_in9 = anon8;
	uint32_t phi10 = anon8;
	uint32_t phi_in11 = anon8;
	uint32_t phi_in12 = anon8;
	uint32_t phi_in13 = anon8;
	struct union.x86_qword_reg* phi14 = (struct union.x86_qword_reg*)&alloca2;
	uint64_t phi_in15 = (uint64_t)&alloca1;
	while (true)
	{
		uint64_t phi16;
		uint64_t phi17;
		uint64_t phi18;
		uint64_t phi_in19;
		uint64_t phi20;
		uint32_t phi21;
		uint32_t phi22;
		uint32_t phi23;
		uint32_t phi24;
		uint32_t phi25;
		uint32_t anon26;
		struct union.x86_qword_reg* anon28;
		uint32_t anon29;
		do
		{
			uint64_t anon27;
			while (true)
			{
				phi16 = phi_in4;
				phi17 = phi_in5;
				phi18 = phi_in19;
				phi20 = phi_in6;
				phi21 = phi_in7;
				phi22 = phi_in9;
				phi23 = phi_in11;
				phi24 = phi_in12;
				phi25 = phi_in13;
				phi14[0].field0 = phi_in15;
				anon26 = (__zext uint32_t)(phi25 != 0) << 8;
				if (phi25 <= anon26)
				{
					phi_in4 = 2;
					phi_in5 = 0;
					anon27 = phi18 & 0xffffffffffff00ff | (__zext uint64_t)(phi25 == 0) << 8;
					phi_in19 = anon27;
					phi_in6 = 1;
					phi_in7 = phi21;
					phi_in9 = phi22;
					phi10 = phi10;
					phi_in11 = phi23;
					phi_in12 = phi24;
					phi_in13 = phi25;
					anon28 = (struct union.x86_qword_reg*)&alloca3;
					phi14 = anon28;
					phi_in15 = 4294967293;
					anon29 = (__zext uint32_t)(phi25 == 0);
					if (phi25 <= anon29)
					{
						break;
					}
				}
			}
			if ((__zext uint32_t)(phi23 != 255) < ~phi24)
			{
				main(4195888, phi14[0].field0, 0, arg3, phi16, phi20, (__zext uint64_t)-phi10);
				phi_in5 = 1;
				if (*(uint32_t*)&alloca3 == 255)
				{
					uint32_t anon30 = printf((uint8_t*)0x400884);
					uint32_t anon31 = fflush(*(struct _IO_FILE**)0x600c30);
					phi_in5 = (__zext uint64_t)(anon30 + anon31);
				}
				uint32_t anon32 = *(uint32_t*)&alloca3 - 1;
				alloca3 = (__zext uint64_t)anon32;
				phi_in4 = phi16;
				phi_in19 = anon27;
				phi_in6 = phi20 + 1 & 0xffffffff;
				phi_in7 = anon32;
				phi_in9 = anon32;
				phi10 = anon32;
				phi_in11 = anon32;
				phi_in12 = anon32;
				phi_in13 = anon32;
				phi14 = anon28;
				phi_in15 = (__zext uint64_t)(*(uint32_t*)&alloca3 - 2);
			}
		}
		while ((__zext uint32_t)(phi23 != 255) < ~phi24);
		if (!((__zext uint32_t)(phi22 == 255) < ~phi24 | (phi20 & 1) == 0))
		{
			*(uint8_t*)(phi14[0].field0 + 15) = (__zext uint8_t)(phi25 == 0);
			uint32_t* anon33 = (uint32_t*)(phi14[0].field0 + 8);
			*anon33 = anon26;
			uint64_t anon34 = phi17 & 0xffffffff;
			main(4195952, phi14[0].field0, (__zext uint64_t)phi21, arg3, phi16, phi20 << 32 >> 32 >> 1 & 0xffffffff, anon34);
			uint64_t anon35 = (__zext uint64_t)(*(uint32_t*)&alloca3 - anon29 - *anon33);
			alloca3 = anon35;
			main(4195982, phi14[0].field0, anon35, arg3, 0, 0, anon34);
			main(4196002, phi14[0].field0, anon35, arg3, phi16, 0, anon34);
		}
		break;
		uint32_t* anon36 = (uint32_t*)(phi14[0].field0 + 8);
		*anon36 = anon26;
		uint64_t anon37 = strtol(*(uint8_t**)arg3, null, 10);
		uint64_t anon38 = strtol(*(uint8_t**)(arg3 + 8), null, 10);
		alloca3 = (__zext uint64_t)~*anon36;
		phi_in4 = anon38 & 0xffffffff;
		phi_in5 = anon37 & 0xffffffff;
		phi_in19 = phi18;
		phi_in6 = 1;
		phi_in7 = ~*anon36;
		phi_in9 = ~*anon36;
		phi10 = ~*anon36;
		phi_in11 = ~*anon36;
		phi_in12 = ~*anon36;
		phi_in13 = ~*anon36;
		phi14 = anon28;
		phi_in15 = (__zext uint64_t)(~*anon36 - *anon36);
	}
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004e0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400800, (void(*)())0x400870, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600c38;
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
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196403);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6009e8)(arg1 & 0xffffffff, arg2, arg3);
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
