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
					if (*anon3 == 0 || anon15 <= 118 && *anon3 != 0)
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
					uint64_t phi21 = 0;
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
							phi21 = 0;
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
						uint64_t phi_in27 = phi21;
						uint64_t phi_in28 = phi_in27;
						int64_t anon30 = (__sext int64_t)phi22;
						int64_t anon29 = anon30 << 2;
						if (*(uint32_t*)(anon1 + anon29 + 384) != 0)
						{
							uint64_t phi31;
							uint64_t phi_in36;
							uint64_t phi37;
							uint64_t phi_in38;
							uint64_t phi_in39;
							uint32_t anon44;
							uint32_t anon50;
							int32_t anon51;
							uint64_t phi_in53;
							uint64_t phi54;
							uint64_t phi56;
							uint32_t phi57;
							uint64_t phi58;
							int64_t anon32 = anon29 + 4;
							phi31 = anon32;
							uint32_t phi33 = *(uint32_t*)(anon1 + anon29 + 384);
							uint32_t phi34 = 1;
							uint64_t phi35 = 1;
							if (*(uint32_t*)(anon12 + anon32) == 0)
							{
								phi_in36 = phi_in27;
								phi37 = anon30;
								phi_in38 = phi_in27;
								phi_in39 = anon30;
							}
							else 
							{
								uint32_t anon43;
								uint64_t anon45;
								do
								{
									uint32_t phi_in40 = *(uint32_t*)(anon1 + (phi35 + phi_in27 << 32 >> 30) + 384);
									uint8_t anon41 = (uint8_t)(phi35 * 3) & 0x1f;
									if (anon41 != 0)
									{
										phi_in40 = (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi35 + phi_in27 << 32 >> 30) + 384) << (__zext uint64_t)anon41);
									}
									uint32_t phi42 = phi_in40;
									anon43 = phi33 + phi42;
									*(uint32_t*)(anon12 + phi31) = anon43;
									if (anon43 != 0)
									{
										phi31 = phi31 + 4;
										phi33 = anon43;
										anon44 = phi34 + 1;
										phi34 = anon44;
										anon45 = (__zext uint64_t)anon44;
										phi35 = anon45;
									}
								}
								while (anon43 != 0);
								struct { uint32_t field0; bool field1; } anon46 = llvm.ssub.with.overflow.i32(anon44, 4);
								uint64_t anon47 = phi_in27 + anon45 + 4294967295 & 0xffffffff;
								phi_in36 = anon47;
								uint32_t anon49 = (uint32_t)phi_in27 + phi34;
								int64_t anon48 = (__sext int64_t)anon49;
								phi37 = anon48;
								anon50 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon43 % 64) != 60);
								uint32_t anon52 = phi34 - 3;
								anon51 = (__sext int32_t)(anon52 != 0 & !(anon52 < 0 ^ anon46.field1));
								if (anon50 != anon51)
								{
									phi_in38 = anon47;
									phi_in39 = anon48;
									phi_in36 = (__zext uint64_t)anon49;
									phi_in53 = anon48;
									phi54 = 2;
								}
							}
							uint32_t anon55 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon29 + 384) % 64);
							if (*(uint32_t*)(anon12 + anon32) != 0 && anon50 == anon51 || *(uint32_t*)(anon12 + anon32) == 0 && anon55 == 60)
							{
								phi_in53 = phi37;
								phi56 = phi_in36;
								phi57 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi_in53 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
								phi58 = phi_in53;
							}
							if (*(uint32_t*)(anon12 + anon32) != 0 && anon50 != anon51 && anon44 == 2 || anon55 != 60 && *(uint32_t*)(anon12 + anon32) == 0)
							{
								phi_in36 = phi_in38;
								phi_in53 = phi_in39;
								phi54 = (__sext int64_t)*(uint32_t*)(anon1 + (phi_in39 << 2) + 384);
							}
							if (*(uint32_t*)(anon12 + anon32) != 0 && anon50 != anon51 && anon44 == 2 || anon55 != 60 && *(uint32_t*)(anon12 + anon32) == 0 || *(uint32_t*)(anon12 + anon32) != 0 && anon44 != 2 && anon50 != anon51)
							{
								phi56 = phi_in36;
								phi57 = (__sext int32_t)*(uint8_t*)(phi54 + 4197048);
								phi58 = phi_in53;
							}
							phi_in28 = phi56;
							uint64_t* anon59 = (uint64_t*)(arg1 - 3368);
							*anon59 = phi58;
							putchar(phi57);
							uint64_t anon60 = *anon59 << 2;
							if (*(uint32_t*)(anon1 + anon60 + 392) == -*(uint32_t*)(anon1 + anon60 + 396))
							{
								putchar(32);
							}
						}
						uint64_t phi61 = phi_in28;
						anon63 = (uint32_t)phi61;
						uint32_t anon62 = anon63 + 1;
						phi21 = (__zext uint64_t)anon62;
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
