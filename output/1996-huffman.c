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
					uint32_t anon71;
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
						uint64_t phi_in32 = phi26;
						int64_t anon34 = (__sext int64_t)phi27;
						int64_t anon33 = anon34 << 2;
						if (*(uint32_t*)(anon1 + anon33 + 384) != 0)
						{
							int64_t anon36;
							uint32_t anon47;
							uint32_t anon54;
							int32_t anon55;
							uint64_t phi59;
							uint64_t phi60;
							uint64_t phi61;
							uint32_t anon62;
							uint32_t phi64;
							uint64_t phi65;
							do
							{
								uint32_t anon45;
								uint64_t phi48;
								uint64_t anon50;
								uint64_t phi51;
								uint64_t phi57;
								uint64_t phi58;
								anon36 = anon33 + 4;
								phi35 = anon36;
								uint32_t phi_in37 = *(uint32_t*)(anon1 + anon33 + 384);
								uint32_t phi_in38 = 1;
								uint64_t phi39 = 1;
								if (*(uint32_t*)(anon17 + anon36) != 0)
								{
									uint32_t phi40 = phi_in37;
									uint32_t phi41 = phi_in38;
									uint32_t phi_in42 = *(uint32_t*)(anon1 + (phi39 + phi_in32 << 32 >> 30) + 384);
									uint8_t anon43 = (uint8_t)(phi39 * 3) & 0x1f;
									if (anon43 != 0)
									{
										phi_in42 = (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi39 + phi_in32 << 32 >> 30) + 384) << (__zext uint64_t)anon43);
									}
									uint32_t phi44 = phi_in42;
									anon45 = phi40 + phi44;
									*(uint32_t*)(anon17 + phi35) = anon45;
									anon47 = phi41 + 1;
									struct { uint32_t field0; bool field1; } anon46 = llvm.ssub.with.overflow.i32(anon47, 4);
									anon50 = (__zext uint64_t)anon47;
									uint64_t anon49 = phi_in32 + anon50 + 4294967295 & 0xffffffff;
									phi48 = anon49;
									uint32_t anon53 = (uint32_t)phi_in32 + phi41;
									int64_t anon52 = (__sext int64_t)anon53;
									phi51 = anon52;
									anon54 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon45 % 64) != 60);
									uint32_t anon56 = phi41 - 3;
									anon55 = (__sext int32_t)(anon56 != 0 & !(anon56 < 0 ^ anon46.field1));
									if (anon54 != anon55)
									{
										phi57 = anon49;
										phi58 = anon52;
										phi59 = (__zext uint64_t)anon53;
										phi60 = anon52;
										phi61 = 2;
									}
								}
								uint64_t phi35 = phi35 + 4;
								phi_in37 = anon45;
								phi_in38 = anon47;
								phi39 = anon50;
								if (*(uint32_t*)(anon17 + anon36) == 0)
								{
									phi48 = phi_in32;
									phi51 = anon34;
									phi57 = phi_in32;
									phi58 = anon34;
								}
								anon62 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon33 + 384) % 64);
								if (*(uint32_t*)(anon17 + anon36) != 0 && anon54 == anon55 || *(uint32_t*)(anon17 + anon36) == 0 && anon62 == 60)
								{
									phi59 = phi48;
									uint64_t phi_in63 = phi51;
									phi64 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi_in63 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
									phi65 = phi_in63;
									break;
								}
								if (*(uint32_t*)(anon17 + anon36) != 0 && anon54 != anon55 && anon47 == 2 || anon62 != 60 && *(uint32_t*)(anon17 + anon36) == 0)
								{
									uint64_t phi_in66 = phi57;
									phi60 = phi58;
									phi59 = phi_in66;
									phi61 = (__sext int64_t)*(uint32_t*)(anon1 + (phi60 << 2) + 384);
								}
							}
							while (!(*(uint32_t*)(anon17 + anon36) != 0 && anon54 != anon55 && anon47 == 2 || anon62 != 60 && *(uint32_t*)(anon17 + anon36) == 0 || *(uint32_t*)(anon17 + anon36) != 0 && anon54 != anon55 && anon47 != 2));
							phi65 = phi60;
							phi64 = (__sext int32_t)*(uint8_t*)(phi61 + 4197048);
							phi_in32 = phi59;
							uint64_t* anon67 = (uint64_t*)(arg1 - 3368);
							*anon67 = phi65;
							putchar(phi64);
							uint64_t anon68 = *anon67 << 2;
							if (*(uint32_t*)(anon1 + anon68 + 392) == -*(uint32_t*)(anon1 + anon68 + 396))
							{
								putchar(32);
							}
						}
						uint64_t phi69 = phi_in32;
						anon71 = (uint32_t)phi69;
						uint32_t anon70 = anon71 + 1;
						phi26 = (__zext uint64_t)anon70;
						phi27 = anon70;
					}
					while (anon71 < 119);
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
