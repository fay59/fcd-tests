#include "tests/bin/1996-huffman.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600e48 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t anon6;
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon1 = arg1 - 3376;
	uint64_t anon2 = arg1 - 3120;
	*(uint64_t*)anon1 = anon2;
	do
	{
		uint64_t anon5 = arg1 - 3360;
		uint8_t* anon4 = (uint8_t*)anon5;
		uint8_t* anon3 = gets(anon4);
		anon6 = (uint32_t)(uint64_t)anon3;
		if (anon6 != 0 && *anon4 != 0)
		{
			uint64_t anon9 = arg1 - 3240;
			uint8_t* anon8 = (uint8_t*)anon9;
			uint8_t* anon7 = gets(anon8);
			if ((uint32_t)(uint64_t)anon7 != 0)
			{
				uint8_t* anon10 = gets(*(uint8_t**)anon1);
				if ((uint32_t)(uint64_t)anon10 != 0)
				{
					uint64_t anon17;
					uint32_t anon20;
					uint32_t anon66;
					uint64_t phi11 = 0;
					uint32_t phi12 = 0;
					uint64_t phi13 = 0;
					uint64_t phi_in14 = 0;
					uint8_t phi15 = *anon4;
					if (*anon4 != 0)
					{
						uint64_t phi16;
						uint64_t anon18;
						do
						{
							phi16 = phi_in14;
							anon17 = arg1 - 2992;
							*(uint32_t*)(anon17 + (phi16 << 2)) = (__zext uint32_t)(phi15 != 32);
							anon18 = (phi16 & 0xffffffff) + 1;
							phi_in14 = anon18;
							phi15 = *(uint8_t*)(anon5 + anon18);
						}
						while (*(uint8_t*)(anon5 + anon18) != 0);
						anon20 = (uint32_t)phi16;
						uint32_t anon19 = anon20 + 1;
						phi11 = (__zext uint64_t)anon19;
						phi12 = anon19;
						phi13 = phi16 + 1 & 0xffffffff;
					}
					if (*anon4 == 0 || anon20 <= 118 && *anon4 != 0)
					{
						memset((uint8_t*)(anon17 + (phi11 << 32 >> 30)), 0, phi12 > 119 ? 4 : (119 - phi13 << 2 & 0x3fffffffc) + 4);
					}
					uint64_t phi_in21 = 0;
					uint8_t phi22 = *anon8;
					if (*anon8 != 0)
					{
						uint64_t anon25;
						do
						{
							uint64_t phi23 = phi_in21;
							uint32_t* anon24 = (uint32_t*)(anon17 + (phi23 << 2));
							*anon24 = *anon24 + ((__zext uint32_t)(phi22 != 32) << 1);
							anon25 = phi23 + 1;
							phi_in21 = anon25;
							phi22 = *(uint8_t*)(anon9 + anon25);
						}
						while (*(uint8_t*)(anon9 + anon25) != 0);
					}
					uint64_t phi26 = 0;
					uint32_t phi27 = 0;
					uint64_t phi_in28 = 0;
					uint8_t phi29 = *(uint8_t*)anon2;
					if (*(uint8_t*)anon2 != 0)
					{
						uint64_t phi30;
						do
						{
							phi30 = phi_in28;
							uint32_t* anon31 = (uint32_t*)(anon17 + (phi30 << 2));
							*anon31 = *anon31 + ((__zext uint32_t)(phi29 != 32) << 2);
							phi26 = 0;
							phi27 = 0;
							if (*(uint8_t*)(arg1 - 3119 + phi30) != 0)
							{
								phi_in28 = phi30 + 1;
								phi29 = *(uint8_t*)(arg1 - 3119 + phi30);
							}
						}
						while (*(uint8_t*)(arg1 - 3119 + phi30) != 0);
					}
					do
					{
						int64_t anon33 = (__sext int64_t)phi27;
						int64_t anon32 = anon33 << 2;
						if (*(uint32_t*)(anon1 + anon32 + 384) != 0)
						{
							uint64_t phi46;
							uint64_t phi61;
							uint32_t phi62;
							while (true)
							{
								uint32_t anon43;
								uint32_t anon45;
								uint64_t anon48;
								uint64_t phi49;
								uint32_t anon52;
								int32_t anon53;
								uint64_t phi_in55;
								uint64_t phi56;
								uint64_t phi57;
								uint64_t phi58;
								uint64_t phi59;
								int64_t anon35 = anon32 + 4;
								phi34 = anon35;
								uint32_t phi_in36 = *(uint32_t*)(anon1 + anon32 + 384);
								uint32_t phi_in37 = 1;
								uint64_t phi38 = 1;
								if (*(uint32_t*)(anon17 + anon35) != 0)
								{
									uint32_t phi39 = phi_in36;
									uint32_t phi40 = phi_in37;
									uint32_t phi41 = *(uint32_t*)(anon1 + (phi38 + phi26 << 32 >> 30) + 384);
									uint8_t anon42 = (uint8_t)(phi38 * 3) & 0x1f;
									if (anon42 != 0)
									{
										phi41 = (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi38 + phi26 << 32 >> 30) + 384) << (__zext uint64_t)anon42);
									}
									anon43 = phi39 + phi41;
									*(uint32_t*)(anon17 + phi34) = anon43;
									anon45 = phi40 + 1;
									struct { uint32_t field0; bool field1; } anon44 = llvm.ssub.with.overflow.i32(anon45, 4);
									anon48 = (__zext uint64_t)anon45;
									uint64_t anon47 = phi26 + anon48 + 4294967295 & 0xffffffff;
									phi46 = anon47;
									uint32_t anon51 = (uint32_t)phi26 + phi40;
									int64_t anon50 = (__sext int64_t)anon51;
									phi49 = anon50;
									anon52 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon43 % 64) != 60);
									uint32_t anon54 = phi40 - 3;
									anon53 = (__sext int32_t)(anon54 != 0 & !(anon54 < 0 ^ anon44.field1));
									if (anon52 != anon53)
									{
										phi_in55 = anon47;
										phi56 = anon50;
										phi57 = (__zext uint64_t)anon51;
										phi58 = anon50;
										phi59 = 2;
									}
								}
								uint64_t phi34 = phi34 + 4;
								phi_in36 = anon43;
								phi_in37 = anon45;
								phi38 = anon48;
								if (*(uint32_t*)(anon17 + anon35) == 0)
								{
									phi46 = phi26;
									phi49 = anon33;
									phi_in55 = phi26;
									phi56 = anon33;
								}
								uint32_t anon60 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon32 + 384) % 64);
								if (*(uint32_t*)(anon17 + anon35) != 0 && anon52 == anon53 || *(uint32_t*)(anon17 + anon35) == 0 && anon60 == 60)
								{
									phi61 = phi49;
									phi62 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi61 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
									break;
								}
								if (*(uint32_t*)(anon17 + anon35) != 0 && anon52 != anon53 && anon45 == 2 || anon60 != 60 && *(uint32_t*)(anon17 + anon35) == 0)
								{
									phi58 = phi56;
									phi57 = phi_in55;
									phi59 = (__sext int64_t)*(uint32_t*)(anon1 + (phi58 << 2) + 384);
								}
								if (*(uint32_t*)(anon17 + anon35) != 0 && anon52 != anon53 && anon45 == 2 || anon60 != 60 && *(uint32_t*)(anon17 + anon35) == 0 || anon45 != 2 && *(uint32_t*)(anon17 + anon35) != 0 && anon52 != anon53)
								{
									phi46 = phi57;
									phi61 = phi58;
									phi62 = (__sext int32_t)*(uint8_t*)(phi59 + 4197048);
									break;
								}
							}
							phi26 = phi46;
							uint64_t* anon63 = (uint64_t*)(arg1 - 3368);
							*anon63 = phi61;
							putchar(phi62);
							uint64_t anon64 = *anon63 << 2;
							if (*(uint32_t*)(anon1 + anon64 + 392) == -*(uint32_t*)(anon1 + anon64 + 396))
							{
								putchar(32);
							}
						}
						anon66 = (uint32_t)phi26;
						uint32_t anon65 = anon66 + 1;
						phi26 = (__zext uint64_t)anon65;
						phi27 = anon65;
					}
					while (anon66 < 119);
					putchar(10);
				}
			}
		}
	}
	while (anon6 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004a0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400a30, (void(*)())0x400aa0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600ea0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196850);
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
	_init(4196963);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600c60)(arg1 & 0xffffffff, arg2, arg3);
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
