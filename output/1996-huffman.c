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
					uint32_t anon63;
					uint64_t phi7 = 0;
					uint32_t phi8 = 0;
					uint64_t phi9 = 0;
					uint64_t phi10 = 0;
					uint8_t phi11 = *anon3;
					if (*anon3 != 0)
					{
						uint64_t anon13;
						do
						{
							anon12 = arg1 - 2992;
							*(uint32_t*)(anon12 + (phi10 << 2)) = (__zext uint32_t)(phi11 != 32);
							anon13 = (phi10 & 0xffffffff) + 1;
							phi10 = anon13;
							phi11 = *(uint8_t*)(anon4 + anon13);
						}
						while (*(uint8_t*)(anon4 + anon13) != 0);
						anon15 = (uint32_t)phi10;
						uint32_t anon14 = anon15 + 1;
						phi7 = (__zext uint64_t)anon14;
						phi8 = anon14;
						phi9 = phi10 + 1 & 0xffffffff;
					}
					if (anon15 <= 118 || *anon3 == 0)
					{
						memset((uint8_t*)(anon12 + (phi7 << 32 >> 30)), 0, phi8 > 119 ? 4 : (119 - phi9 << 2 & 0x3fffffffc) + 4);
					}
					uint64_t phi_in16 = 0;
					uint8_t phi17 = *anon5;
					if (*anon5 != 0)
					{
						uint64_t anon20;
						do
						{
							uint64_t phi18 = phi_in16;
							uint32_t* anon19 = (uint32_t*)(anon12 + (phi18 << 2));
							*anon19 = *anon19 + ((__zext uint32_t)(phi17 != 32) << 1);
							anon20 = phi18 + 1;
							phi_in16 = anon20;
							phi17 = *(uint8_t*)(anon6 + anon20);
						}
						while (*(uint8_t*)(anon6 + anon20) != 0);
					}
					uint64_t phi_in21 = 0;
					uint32_t phi22 = 0;
					uint64_t phi_in23 = 0;
					uint8_t phi24 = *(uint8_t*)anon2;
					if (*(uint8_t*)anon2 != 0)
					{
						uint64_t phi25;
						do
						{
							phi25 = phi_in23;
							uint32_t* anon26 = (uint32_t*)(anon12 + (phi25 << 2));
							*anon26 = *anon26 + ((__zext uint32_t)(phi24 != 32) << 2);
							phi_in21 = 0;
							phi22 = 0;
							if (*(uint8_t*)(arg1 - 3119 + phi25) != 0)
							{
								phi_in23 = phi25 + 1;
								phi24 = *(uint8_t*)(arg1 - 3119 + phi25);
							}
						}
						while (*(uint8_t*)(arg1 - 3119 + phi25) != 0);
					}
					do
					{
						int64_t anon28 = (__sext int64_t)phi22;
						int64_t anon27 = anon28 << 2;
						if (*(uint32_t*)(anon1 + anon27 + 384) != 0)
						{
							uint64_t phi29;
							uint64_t phi34;
							uint64_t phi35;
							uint64_t phi36;
							uint64_t phi37;
							uint32_t anon42;
							uint32_t anon48;
							int32_t anon49;
							uint64_t phi51;
							uint64_t phi52;
							uint64_t phi53;
							uint64_t phi56;
							uint64_t phi57;
							uint32_t phi58;
							int64_t anon30 = anon27 + 4;
							phi29 = anon30;
							uint32_t phi31 = *(uint32_t*)(anon1 + anon27 + 384);
							uint32_t phi32 = 1;
							uint64_t phi33 = 1;
							if (*(uint32_t*)(anon12 + anon30) == 0)
							{
								phi34 = phi_in21;
								phi35 = anon28;
								phi36 = phi_in21;
								phi37 = anon28;
							}
							else 
							{
								uint32_t anon41;
								uint64_t anon43;
								do
								{
									uint32_t phi_in38 = *(uint32_t*)(anon1 + (phi33 + phi_in21 << 32 >> 30) + 384);
									uint8_t anon39 = (uint8_t)(phi33 * 3) & 0x1f;
									if (anon39 != 0)
									{
										phi_in38 = (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi33 + phi_in21 << 32 >> 30) + 384) << (__zext uint64_t)anon39);
									}
									uint32_t phi40 = phi_in38;
									anon41 = phi31 + phi40;
									*(uint32_t*)(anon12 + phi29) = anon41;
									if (anon41 != 0)
									{
										phi29 = phi29 + 4;
										phi31 = anon41;
										anon42 = phi32 + 1;
										phi32 = anon42;
										anon43 = (__zext uint64_t)anon42;
										phi33 = anon43;
									}
								}
								while (anon41 != 0);
								struct { uint32_t field0; bool field1; } anon44 = llvm.ssub.with.overflow.i32(anon42, 4);
								uint64_t anon45 = phi_in21 + anon43 + 4294967295 & 0xffffffff;
								phi34 = anon45;
								uint32_t anon47 = (uint32_t)phi_in21 + phi32;
								int64_t anon46 = (__sext int64_t)anon47;
								phi35 = anon46;
								anon48 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon41 % 64) != 60);
								uint32_t anon50 = phi32 - 3;
								anon49 = (__sext int32_t)(anon50 != 0 & !(anon50 < 0 ^ anon44.field1));
								if (anon48 != anon49)
								{
									phi36 = anon45;
									phi37 = anon46;
									phi51 = (__zext uint64_t)anon47;
									phi52 = anon46;
									phi53 = 2;
								}
							}
							uint32_t anon54 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon27 + 384) % 64);
							if (*(uint32_t*)(anon12 + anon30) != 0 && anon48 == anon49 || *(uint32_t*)(anon12 + anon30) == 0 && anon54 == 60)
							{
								uint64_t phi_in55 = phi34;
								phi56 = phi35;
								phi57 = phi_in55;
								phi58 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi56 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
							}
							if (*(uint32_t*)(anon12 + anon30) != 0 && anon48 != anon49 && anon42 == 2 || anon54 != 60 && *(uint32_t*)(anon12 + anon30) == 0)
							{
								phi51 = phi36;
								phi52 = phi37;
								phi53 = (__sext int64_t)*(uint32_t*)(anon1 + (phi52 << 2) + 384);
							}
							if (*(uint32_t*)(anon12 + anon30) != 0 && anon48 != anon49 && anon42 == 2 || anon54 != 60 && *(uint32_t*)(anon12 + anon30) == 0 || *(uint32_t*)(anon12 + anon30) != 0 && anon42 != 2 && anon48 != anon49)
							{
								phi57 = phi51;
								phi56 = phi52;
								phi58 = (__sext int32_t)*(uint8_t*)(phi53 + 4197048);
							}
							phi_in21 = phi57;
							uint64_t* anon59 = (uint64_t*)(arg1 - 3368);
							*anon59 = phi56;
							putchar(phi58);
							uint64_t anon60 = *anon59 << 2;
							if (*(uint32_t*)(anon1 + anon60 + 392) == -*(uint32_t*)(anon1 + anon60 + 396))
							{
								putchar(32);
							}
						}
						uint64_t phi61 = phi_in21;
						anon63 = (uint32_t)phi61;
						uint32_t anon62 = anon63 + 1;
						phi_in21 = (__zext uint64_t)anon62;
						phi22 = anon62;
					}
					while (anon63 < 119);
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
