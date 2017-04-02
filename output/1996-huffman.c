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
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon1 = arg1 - 3376;
	uint64_t anon2 = arg1 - 3120;
	*(uint64_t*)anon1 = anon2;
	uint64_t anon4 = arg1 - 3360;
	uint8_t* anon3 = (uint8_t*)anon4;
	while ((uint32_t)(uint64_t)gets(anon3) != 0)
	{
		if (*anon3 != 0)
		{
			uint64_t anon6 = arg1 - 3240;
			uint8_t* anon5 = (uint8_t*)anon6;
			if ((uint32_t)(uint64_t)gets(anon5) != 0)
			{
				if ((uint32_t)(uint64_t)gets(*(uint8_t**)anon1) != 0)
				{
					uint64_t anon12;
					uint32_t anon15;
					uint32_t anon55;
					uint64_t phi_in7 = 0;
					uint32_t phi_in8 = 0;
					uint64_t phi_in9 = 0;
					uint64_t phi_in10 = 0;
					uint8_t phi_in11 = *anon3;
					if (*anon3 != 0)
					{
						uint64_t anon13;
						do
						{
							anon12 = arg1 - 2992;
							*(uint32_t*)(anon12 + (phi_in10 << 2)) = (__zext uint32_t)(phi_in11 != 32);
							anon13 = (phi_in10 & 0xffffffff) + 1;
							phi_in10 = anon13;
							phi_in11 = *(uint8_t*)(anon4 + anon13);
						}
						while (*(uint8_t*)(anon4 + anon13) != 0);
						anon15 = (uint32_t)phi_in10;
						uint32_t anon14 = anon15 + 1;
						phi_in7 = (__zext uint64_t)anon14;
						phi_in8 = anon14;
						phi_in9 = phi_in10 + 1 & 0xffffffff;
					}
					if (anon15 <= 118 || *anon3 == 0)
					{
						memset((uint8_t*)(anon12 + (phi_in7 << 32 >> 30)), 0, phi_in8 > 119 ? 4 : (119 - phi_in9 << 2 & 0x3fffffffc) + 4);
					}
					uint64_t phi_in16 = 0;
					uint8_t phi_in17 = *anon5;
					if (*anon5 != 0)
					{
						uint64_t anon20;
						do
						{
							uint64_t phi18 = phi_in16;
							uint32_t* anon19 = (uint32_t*)(anon12 + (phi18 << 2));
							*anon19 = *anon19 + ((__zext uint32_t)(phi_in17 != 32) << 1);
							anon20 = phi18 + 1;
							phi_in16 = anon20;
							phi_in17 = *(uint8_t*)(anon6 + anon20);
						}
						while (*(uint8_t*)(anon6 + anon20) != 0);
					}
					uint64_t phi_in21 = 0;
					uint32_t phi_in22 = 0;
					uint64_t phi_in23 = 0;
					uint8_t phi_in24 = *(uint8_t*)anon2;
					if (*(uint8_t*)anon2 != 0)
					{
						uint64_t phi25;
						do
						{
							phi25 = phi_in23;
							uint32_t* anon26 = (uint32_t*)(anon12 + (phi25 << 2));
							*anon26 = *anon26 + ((__zext uint32_t)(phi_in24 != 32) << 2);
							phi_in21 = 0;
							phi_in22 = 0;
							if (*(uint8_t*)(arg1 - 3119 + phi25) != 0)
							{
								phi_in23 = phi25 + 1;
								phi_in24 = *(uint8_t*)(arg1 - 3119 + phi25);
							}
						}
						while (*(uint8_t*)(arg1 - 3119 + phi25) != 0);
					}
					do
					{
						int64_t anon28 = (__sext int64_t)phi_in22;
						int64_t anon27 = anon28 << 2;
						if (*(uint32_t*)(anon1 + anon27 + 384) != 0)
						{
							uint64_t phi_in29;
							uint64_t phi_in34;
							uint32_t anon39;
							uint32_t anon45;
							int32_t anon46;
							uint64_t phi_in48;
							uint32_t phi_in50;
							int64_t anon30 = anon27 + 4;
							phi_in29 = anon30;
							uint32_t phi_in31 = *(uint32_t*)(anon1 + anon27 + 384);
							uint32_t phi_in32 = 1;
							uint64_t phi_in33 = 1;
							if (*(uint32_t*)(anon12 + anon30) == 0)
							{
								phi_in34 = anon28;
								phi_in34 = anon28;
							}
							else 
							{
								uint32_t anon38;
								uint64_t anon40;
								do
								{
									uint32_t phi_in35 = *(uint32_t*)(anon1 + (phi_in33 + phi_in21 << 32 >> 30) + 384);
									uint8_t anon36 = (uint8_t)(phi_in33 * 3) & 0x1f;
									if (anon36 != 0)
									{
										phi_in35 = (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi_in33 + phi_in21 << 32 >> 30) + 384) << (__zext uint64_t)anon36);
									}
									uint32_t phi37 = phi_in35;
									anon38 = phi_in31 + phi37;
									*(uint32_t*)(anon12 + phi_in29) = anon38;
									if (anon38 != 0)
									{
										phi_in29 = phi_in29 + 4;
										phi_in31 = anon38;
										anon39 = phi_in32 + 1;
										phi_in32 = anon39;
										anon40 = (__zext uint64_t)anon39;
										phi_in33 = anon40;
									}
								}
								while (anon38 != 0);
								struct { uint32_t field0; bool field1; } anon41 = llvm.ssub.with.overflow.i32(anon39, 4);
								uint64_t anon42 = phi_in21 + anon40 + 4294967295 & 0xffffffff;
								phi_in21 = anon42;
								uint32_t anon44 = (uint32_t)phi_in21 + phi_in32;
								int64_t anon43 = (__sext int64_t)anon44;
								phi_in34 = anon43;
								anon45 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon38 % 64) != 60);
								uint32_t anon47 = phi_in32 - 3;
								anon46 = (__sext int32_t)(anon47 != 0 & !(anon47 < 0 ^ anon41.field1));
								if (anon45 != anon46)
								{
									phi_in21 = anon42;
									phi_in34 = anon43;
									phi_in21 = (__zext uint64_t)anon44;
									phi_in34 = anon43;
									phi_in48 = 2;
								}
							}
							uint32_t anon49 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon27 + 384) % 64);
							if (*(uint32_t*)(anon12 + anon30) != 0 && anon45 == anon46 || *(uint32_t*)(anon12 + anon30) == 0 && anon49 == 60)
							{
								phi_in50 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi_in34 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
							}
							if (*(uint32_t*)(anon12 + anon30) != 0 && anon45 != anon46 && anon39 == 2 || anon49 != 60 && *(uint32_t*)(anon12 + anon30) == 0)
							{
								phi_in48 = (__sext int64_t)*(uint32_t*)(anon1 + (phi_in34 << 2) + 384);
							}
							if (*(uint32_t*)(anon12 + anon30) != 0 && anon45 != anon46 && anon39 == 2 || anon49 != 60 && *(uint32_t*)(anon12 + anon30) == 0 || *(uint32_t*)(anon12 + anon30) != 0 && anon39 != 2 && anon45 != anon46)
							{
								phi_in50 = (__sext int32_t)*(uint8_t*)(phi_in48 + 4197048);
							}
							putchar(phi_in50);
							uint64_t* anon52 = (uint64_t*)(arg1 - 3368);
							uint64_t anon51 = *anon52 << 2;
							if (*(uint32_t*)(anon1 + anon51 + 392) == -*(uint32_t*)(anon1 + anon51 + 396))
							{
								putchar(32);
							}
						}
						uint64_t phi53 = phi_in21;
						anon55 = (uint32_t)phi53;
						uint32_t anon54 = anon55 + 1;
						phi_in21 = (__zext uint64_t)anon54;
						phi_in22 = anon54;
					}
					while (anon55 < 119);
					putchar(10);
				}
			}
		}
	}
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
