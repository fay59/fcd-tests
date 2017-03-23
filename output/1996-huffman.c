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
	uint32_t anon3;
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon1 = arg1 - 3376;
	uint64_t anon2 = arg1 - 3120;
	*(uint64_t*)anon1 = anon2;
	do
	{
		uint64_t anon5 = arg1 - 3360;
		uint8_t* anon4 = (uint8_t*)anon5;
		anon3 = (uint32_t)(uint64_t)gets(anon4);
		if (anon3 != 0)
		{
			if (*anon4 != 0)
			{
				uint64_t anon7 = arg1 - 3240;
				uint8_t* anon6 = (uint8_t*)anon7;
				if ((uint32_t)(uint64_t)gets(anon6) != 0)
				{
					if ((uint32_t)(uint64_t)gets(*(uint8_t**)anon1) != 0)
					{
						uint64_t anon14;
						uint32_t anon17;
						uint32_t anon68;
						uint64_t phi8 = 0;
						uint32_t phi9 = 0;
						uint64_t phi10 = 0;
						uint64_t phi_in11 = 0;
						uint8_t phi12 = *anon4;
						if (*anon4 != 0)
						{
							uint64_t phi13;
							uint64_t anon15;
							do
							{
								phi13 = phi_in11;
								anon14 = arg1 - 2992;
								*(uint32_t*)(anon14 + (phi13 << 2)) = (__zext uint32_t)(phi12 != 32);
								anon15 = (phi13 & 0xffffffff) + 1;
								phi_in11 = anon15;
								phi12 = *(uint8_t*)(anon5 + anon15);
							}
							while (*(uint8_t*)(anon5 + anon15) != 0);
							anon17 = (uint32_t)phi13;
							uint32_t anon16 = anon17 + 1;
							phi8 = (__zext uint64_t)anon16;
							phi9 = anon16;
							phi10 = phi13 + 1 & 0xffffffff;
						}
						if (*anon4 == 0 || anon17 <= 118 && *anon4 != 0)
						{
							memset((uint8_t*)(anon14 + (phi8 << 32 >> 30)), 0, phi9 > 119 ? 4 : (119 - phi10 << 2 & 0x3fffffffc) + 4);
						}
						uint64_t phi_in18 = 0;
						uint8_t phi19 = *anon6;
						if (*anon6 != 0)
						{
							uint64_t anon22;
							do
							{
								uint64_t phi20 = phi_in18;
								uint32_t* anon21 = (uint32_t*)(anon14 + (phi20 << 2));
								*anon21 = *anon21 + ((__zext uint32_t)(phi19 != 32) << 1);
								anon22 = phi20 + 1;
								phi_in18 = anon22;
								phi19 = *(uint8_t*)(anon7 + anon22);
							}
							while (*(uint8_t*)(anon7 + anon22) != 0);
						}
						uint64_t phi23 = 0;
						uint32_t phi24 = 0;
						uint64_t phi_in25 = 0;
						uint8_t phi26 = *(uint8_t*)anon2;
						if (*(uint8_t*)anon2 != 0)
						{
							uint64_t phi27;
							do
							{
								phi27 = phi_in25;
								uint32_t* anon28 = (uint32_t*)(anon14 + (phi27 << 2));
								*anon28 = *anon28 + ((__zext uint32_t)(phi26 != 32) << 2);
								phi23 = 0;
								phi24 = 0;
								if (*(uint8_t*)(arg1 - 3119 + phi27) != 0)
								{
									phi_in25 = phi27 + 1;
									phi26 = *(uint8_t*)(arg1 - 3119 + phi27);
								}
							}
							while (*(uint8_t*)(arg1 - 3119 + phi27) != 0);
						}
						do
						{
							uint64_t phi_in29 = phi23;
							int64_t anon31 = (__sext int64_t)phi24;
							int64_t anon30 = anon31 << 2;
							if (*(uint32_t*)(anon1 + anon30 + 384) != 0)
							{
								uint64_t phi61;
								uint32_t phi62;
								uint64_t phi63;
								while (true)
								{
									uint32_t anon41;
									uint32_t anon43;
									uint64_t phi44;
									uint64_t anon46;
									uint64_t phi_in47;
									uint32_t anon50;
									int32_t anon51;
									uint64_t phi54;
									uint64_t phi55;
									uint64_t phi56;
									uint64_t phi57;
									uint64_t phi58;
									uint64_t phi_in60;
									int64_t anon33 = anon30 + 4;
									phi32 = anon33;
									uint32_t phi_in34 = *(uint32_t*)(anon1 + anon30 + 384);
									uint32_t phi_in35 = 1;
									uint64_t phi36 = 1;
									if (*(uint32_t*)(anon14 + anon33) != 0)
									{
										uint32_t phi37 = phi_in34;
										uint32_t phi38 = phi_in35;
										uint32_t phi39 = *(uint32_t*)(anon1 + (phi36 + phi_in29 << 32 >> 30) + 384);
										uint8_t anon40 = (uint8_t)(phi36 * 3) & 0x1f;
										if (anon40 != 0)
										{
											phi39 = (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi36 + phi_in29 << 32 >> 30) + 384) << (__zext uint64_t)anon40);
										}
										anon41 = phi37 + phi39;
										*(uint32_t*)(anon14 + phi32) = anon41;
										anon43 = phi38 + 1;
										struct { uint32_t field0; bool field1; } anon42 = llvm.ssub.with.overflow.i32(anon43, 4);
										anon46 = (__zext uint64_t)anon43;
										uint64_t anon45 = phi_in29 + anon46 + 4294967295 & 0xffffffff;
										phi44 = anon45;
										uint32_t anon49 = (uint32_t)phi_in29 + phi38;
										int64_t anon48 = (__sext int64_t)anon49;
										phi_in47 = anon48;
										anon50 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon41 % 64) != 60);
										uint32_t anon52 = phi38 - 3;
										bool anon53 = anon42.field1;
										anon51 = (__sext int32_t)(anon52 != 0 & !(anon52 < 0 ^ anon53));
										if (anon50 != anon51)
										{
											phi54 = anon45;
											phi55 = anon48;
											phi56 = (__zext uint64_t)anon49;
											phi57 = anon48;
											phi58 = 2;
										}
									}
									uint64_t phi32 = phi32 + 4;
									phi_in34 = anon41;
									phi_in35 = anon43;
									phi36 = anon46;
									if (*(uint32_t*)(anon14 + anon33) == 0)
									{
										phi44 = phi_in29;
										phi_in47 = anon31;
										phi54 = phi_in29;
										phi55 = anon31;
									}
									uint32_t anon59 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon30 + 384) % 64);
									if (*(uint32_t*)(anon14 + anon33) != 0 && anon50 == anon51 || *(uint32_t*)(anon14 + anon33) == 0 && anon59 == 60)
									{
										phi_in60 = phi44;
										phi61 = phi_in60;
										phi62 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi_in47 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
										phi63 = phi_in47;
										break;
									}
									if (*(uint32_t*)(anon14 + anon33) != 0 && anon50 != anon51 && anon43 == 2 || anon59 != 60 && *(uint32_t*)(anon14 + anon33) == 0)
									{
										phi56 = phi54;
										phi57 = phi55;
										phi58 = (__sext int64_t)*(uint32_t*)(anon1 + (phi55 << 2) + 384);
									}
									if (*(uint32_t*)(anon14 + anon33) != 0 && anon50 != anon51 && anon43 == 2 || anon59 != 60 && *(uint32_t*)(anon14 + anon33) == 0 || anon43 != 2 && *(uint32_t*)(anon14 + anon33) != 0 && anon50 != anon51)
									{
										phi_in60 = phi56;
										phi_in47 = phi57;
										phi61 = phi_in60;
										phi62 = (__sext int32_t)*(uint8_t*)(phi58 + 4197048);
										phi63 = phi_in47;
										break;
									}
								}
								phi_in29 = phi61;
								uint64_t* anon64 = (uint64_t*)(arg1 - 3368);
								*anon64 = phi63;
								putchar(phi62);
								uint64_t anon65 = *anon64 << 2;
								if (*(uint32_t*)(anon1 + anon65 + 392) == -*(uint32_t*)(anon1 + anon65 + 396))
								{
									putchar(32);
								}
							}
							uint64_t phi66 = phi_in29;
							anon68 = (uint32_t)phi66;
							uint32_t anon67 = anon68 + 1;
							phi23 = (__zext uint64_t)anon67;
							phi24 = anon67;
						}
						while (anon68 < 119);
						putchar(10);
					}
				}
			}
		}
	}
	while (anon3 != 0);
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
