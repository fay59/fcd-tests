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
					uint64_t anon18;
					uint32_t anon21;
					uint32_t anon90;
					uint64_t phi_in11 = 0;
					uint32_t phi_in12 = 0;
					uint64_t phi_in13 = 0;
					uint64_t phi_in14 = 0;
					uint8_t phi_in15 = *anon4;
					if (*anon4 != 0)
					{
						uint64_t phi16;
						uint64_t anon19;
						do
						{
							phi16 = phi_in14;
							uint8_t phi17 = phi_in15;
							anon18 = arg1 - 2992;
							*(uint32_t*)(anon18 + (phi16 << 2)) = (__zext uint32_t)(phi17 != 32);
							anon19 = (phi16 & 0xffffffff) + 1;
							phi_in14 = anon19;
							phi_in15 = *(uint8_t*)(anon5 + anon19);
						}
						while (*(uint8_t*)(anon5 + anon19) != 0);
						anon21 = (uint32_t)phi16;
						uint32_t anon20 = anon21 + 1;
						phi_in11 = (__zext uint64_t)anon20;
						phi_in12 = anon20;
						phi_in13 = phi16 + 1 & 0xffffffff;
					}
					if (*anon4 == 0 || anon21 <= 118 && *anon4 != 0)
					{
						uint64_t phi22 = phi_in11;
						uint32_t phi23 = phi_in12;
						uint64_t phi24 = phi_in13;
						memset((uint8_t*)(anon18 + (phi22 << 32 >> 30)), 0, phi23 > 119 ? 4 : (119 - phi24 << 2 & 0x3fffffffc) + 4);
					}
					uint64_t phi_in25 = 0;
					uint8_t phi_in26 = *anon8;
					if (*anon8 != 0)
					{
						uint64_t anon30;
						do
						{
							uint64_t phi27 = phi_in25;
							uint8_t phi28 = phi_in26;
							uint32_t* anon29 = (uint32_t*)(anon18 + (phi27 << 2));
							*anon29 = *anon29 + ((__zext uint32_t)(phi28 != 32) << 1);
							anon30 = phi27 + 1;
							phi_in25 = anon30;
							phi_in26 = *(uint8_t*)(anon9 + anon30);
						}
						while (*(uint8_t*)(anon9 + anon30) != 0);
					}
					uint64_t phi_in31 = 0;
					uint32_t phi_in32 = 0;
					uint64_t phi_in33 = 0;
					uint8_t phi_in34 = *(uint8_t*)anon2;
					if (*(uint8_t*)anon2 != 0)
					{
						uint64_t phi35;
						do
						{
							phi35 = phi_in33;
							uint8_t phi36 = phi_in34;
							uint32_t* anon37 = (uint32_t*)(anon18 + (phi35 << 2));
							*anon37 = *anon37 + ((__zext uint32_t)(phi36 != 32) << 2);
							phi_in31 = 0;
							phi_in32 = 0;
							if (*(uint8_t*)(arg1 - 3119 + phi35) != 0)
							{
								phi_in33 = phi35 + 1;
								phi_in34 = *(uint8_t*)(arg1 - 3119 + phi35);
							}
						}
						while (*(uint8_t*)(arg1 - 3119 + phi35) != 0);
					}
					do
					{
						uint64_t phi38 = phi_in31;
						uint32_t phi39 = phi_in32;
						uint64_t phi_in40 = phi38;
						int64_t anon42 = (__sext int64_t)phi39;
						int64_t anon41 = anon42 << 2;
						if (*(uint32_t*)(anon1 + anon41 + 384) != 0)
						{
							int64_t anon44;
							uint32_t anon57;
							uint32_t anon64;
							int32_t anon65;
							uint64_t phi_in69;
							uint64_t phi_in70;
							uint64_t phi_in71;
							uint32_t anon72;
							uint64_t phi_in75;
							uint32_t phi_in76;
							uint64_t phi_in77;
							do
							{
								uint64_t phi48;
								uint32_t anon55;
								uint64_t phi_in58;
								uint64_t anon60;
								uint64_t phi_in61;
								uint64_t phi_in67;
								uint64_t phi_in68;
								anon44 = anon41 + 4;
								phi_in43 = anon44;
								uint32_t phi_in45 = *(uint32_t*)(anon1 + anon41 + 384);
								uint32_t phi_in46 = 1;
								uint64_t phi_in47 = 1;
								if (*(uint32_t*)(anon18 + anon44) != 0)
								{
									phi48 = phi_in43;
									uint32_t phi49 = phi_in45;
									uint32_t phi50 = phi_in46;
									uint64_t phi51 = phi_in47;
									uint32_t phi_in52 = *(uint32_t*)(anon1 + (phi51 + phi38 << 32 >> 30) + 384);
									uint8_t anon53 = (uint8_t)(phi51 * 3) & 0x1f;
									if (anon53 != 0)
									{
										phi_in52 = (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi51 + phi38 << 32 >> 30) + 384) << (__zext uint64_t)anon53);
									}
									uint32_t phi54 = phi_in52;
									anon55 = phi49 + phi54;
									*(uint32_t*)(anon18 + phi48) = anon55;
									anon57 = phi50 + 1;
									struct { uint32_t field0; bool field1; } anon56 = llvm.ssub.with.overflow.i32(anon57, 4);
									anon60 = (__zext uint64_t)anon57;
									uint64_t anon59 = phi38 + anon60 + 4294967295 & 0xffffffff;
									phi_in58 = anon59;
									uint32_t anon63 = (uint32_t)phi38 + phi50;
									int64_t anon62 = (__sext int64_t)anon63;
									phi_in61 = anon62;
									anon64 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon55 % 64) != 60);
									uint32_t anon66 = phi50 - 3;
									anon65 = (__sext int32_t)(anon66 != 0 & !(anon66 < 0 ^ anon56.field1));
									if (anon64 != anon65)
									{
										phi_in67 = anon59;
										phi_in68 = anon62;
										phi_in69 = (__zext uint64_t)anon63;
										phi_in70 = anon62;
										phi_in71 = 2;
									}
								}
								uint64_t phi_in43 = phi48 + 4;
								phi_in45 = anon55;
								phi_in46 = anon57;
								phi_in47 = anon60;
								if (*(uint32_t*)(anon18 + anon44) == 0)
								{
									phi_in58 = phi38;
									phi_in61 = anon42;
									phi_in67 = phi38;
									phi_in68 = anon42;
								}
								anon72 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon41 + 384) % 64);
								if (*(uint32_t*)(anon18 + anon44) != 0 && anon64 == anon65 || *(uint32_t*)(anon18 + anon44) == 0 && anon72 == 60)
								{
									uint64_t phi73 = phi_in58;
									uint64_t phi74 = phi_in61;
									phi_in75 = phi73;
									phi_in76 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi74 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
									phi_in77 = phi74;
									break;
								}
								if (*(uint32_t*)(anon18 + anon44) != 0 && anon64 != anon65 && anon57 == 2 || anon72 != 60 && *(uint32_t*)(anon18 + anon44) == 0)
								{
									uint64_t phi78 = phi_in67;
									uint64_t phi79 = phi_in68;
									phi_in69 = phi78;
									phi_in70 = phi79;
									phi_in71 = (__sext int64_t)*(uint32_t*)(anon1 + (phi79 << 2) + 384);
								}
							}
							while (!(*(uint32_t*)(anon18 + anon44) != 0 && anon64 != anon65 && anon57 == 2 || anon72 != 60 && *(uint32_t*)(anon18 + anon44) == 0 || *(uint32_t*)(anon18 + anon44) != 0 && anon64 != anon65 && anon57 != 2));
							uint64_t phi80 = phi_in69;
							uint64_t phi81 = phi_in70;
							uint64_t phi82 = phi_in71;
							phi_in75 = phi80;
							phi_in76 = (__sext int32_t)*(uint8_t*)(phi82 + 4197048);
							phi_in77 = phi81;
							uint64_t phi83 = phi_in75;
							uint32_t phi84 = phi_in76;
							uint64_t phi85 = phi_in77;
							uint64_t* anon86 = (uint64_t*)(arg1 - 3368);
							*anon86 = phi85;
							putchar(phi84);
							phi_in40 = phi83;
							uint64_t anon87 = *anon86 << 2;
							if (*(uint32_t*)(anon1 + anon87 + 392) == -*(uint32_t*)(anon1 + anon87 + 396))
							{
								putchar(32);
								phi_in40 = phi83;
							}
						}
						uint64_t phi88 = phi_in40;
						anon90 = (uint32_t)phi88;
						uint32_t anon89 = anon90 + 1;
						phi_in31 = (__zext uint64_t)anon89;
						phi_in32 = anon89;
					}
					while (anon90 < 119);
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
