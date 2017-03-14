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
					uint64_t anon16;
					uint32_t anon18;
					uint32_t anon68;
					uint64_t phi11 = 0;
					uint32_t phi12 = 0;
					uint64_t phi_in13 = 0;
					uint8_t phi14 = *anon4;
					if (*anon4 != 0)
					{
						uint64_t anon17;
						do
						{
							uint64_t phi15 = phi_in13;
							anon16 = arg1 - 2992;
							*(uint32_t*)(anon16 + (phi15 << 2 & 0x3fffffffc)) = (__zext uint32_t)(phi14 != 32);
							anon17 = phi15 + 1;
							phi_in13 = anon17;
							phi14 = *(uint8_t*)(anon5 + (anon17 & 0xffffffff));
						}
						while (*(uint8_t*)(anon5 + (anon17 & 0xffffffff)) != 0);
						phi11 = anon17;
						anon18 = (uint32_t)anon17;
						phi12 = anon18;
					}
					if (*anon4 == 0 || anon18 <= 119 && *anon4 != 0)
					{
						memset((uint8_t*)(anon16 + (phi11 << 32 >> 30)), 0, phi12 > 119 ? 4 : (119 - phi11 << 2 & 0x3fffffffc) + 4);
					}
					uint64_t phi_in19 = 0;
					uint8_t phi20 = *anon8;
					if (*anon8 != 0)
					{
						uint64_t anon23;
						do
						{
							uint64_t phi21 = phi_in19;
							uint32_t* anon22 = (uint32_t*)(anon16 + (phi21 << 2));
							*anon22 = *anon22 + ((__zext uint32_t)(phi20 != 32) << 1);
							anon23 = phi21 + 1;
							phi_in19 = anon23;
							phi20 = *(uint8_t*)(anon9 + anon23);
						}
						while (*(uint8_t*)(anon9 + anon23) != 0);
					}
					uint64_t phi_in24 = 0;
					uint32_t phi25 = 0;
					uint64_t phi_in26 = 0;
					uint8_t phi27 = *(uint8_t*)anon2;
					if (*(uint8_t*)anon2 != 0)
					{
						uint64_t phi28;
						do
						{
							phi28 = phi_in26;
							uint32_t* anon29 = (uint32_t*)(anon16 + (phi28 << 2));
							*anon29 = *anon29 + ((__zext uint32_t)(phi27 != 32) << 2);
							phi_in24 = 0;
							phi25 = 0;
							phi_in26 = phi28 + 1;
							phi27 = *(uint8_t*)(arg1 - 3119 + phi28);
						}
						while (*(uint8_t*)(arg1 - 3119 + phi28) != 0);
					}
					do
					{
						int64_t anon31 = (__sext int64_t)phi25;
						int64_t anon30 = anon31 << 2;
						if (*(uint32_t*)(anon1 + anon30 + 384) != 0)
						{
							uint64_t phi_in32;
							uint64_t phi37;
							uint64_t phi38;
							uint64_t phi39;
							uint64_t phi40;
							uint32_t phi43;
							uint32_t anon45;
							uint32_t anon47;
							struct { uint32_t field0; bool field1; } anon49;
							uint64_t anon50;
							int64_t anon51;
							uint32_t anon52;
							uint64_t phi_in57;
							uint64_t phi58;
							uint64_t phi59;
							uint32_t phi60;
							uint64_t phi61;
							uint64_t phi62;
							int64_t anon33 = anon30 + 4;
							phi_in32 = anon33;
							uint32_t phi_in34 = *(uint32_t*)(anon1 + anon30 + 384);
							uint32_t phi_in35 = 1;
							uint64_t phi_in36 = 1;
							if (*(uint32_t*)(anon16 + anon33) == 0)
							{
								phi37 = phi_in24;
								phi38 = anon31;
								phi39 = phi_in24;
								phi40 = anon31;
							}
							else 
							{
								uint64_t phi41;
								uint64_t anon48;
								do
								{
									phi41 = phi_in32;
									uint32_t phi42 = phi_in34;
									phi43 = phi_in35;
									uint64_t phi44 = phi_in36;
									uint64_t anon46 = phi44 * 3 & 0x1f;
									anon45 = phi42 + (anon46 == 0 ? *(uint32_t*)(anon1 + (phi44 + phi_in24 << 32 >> 30) + 384) : (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi44 + phi_in24 << 32 >> 30) + 384) << anon46));
									*(uint32_t*)(anon16 + phi41) = anon45;
									phi_in32 = phi41 + 4;
									phi_in34 = anon45;
									anon47 = phi43 + 1;
									phi_in35 = anon47;
									anon48 = (__zext uint64_t)anon47;
									phi_in36 = anon48;
								}
								while (*(uint32_t*)(phi41 + arg1 - 2988) != 0);
								anon49 = llvm.ssub.with.overflow.i32(anon47, 4);
								anon50 = phi_in24 + anon48 + 4294967295 & 0xffffffff;
								phi37 = anon50;
								anon52 = (uint32_t)phi_in24 + phi43;
								anon51 = (__sext int64_t)anon52;
								phi38 = anon51;
							}
							uint32_t anon53 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon30 + 384) % 64);
							uint32_t anon54 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon45 % 64) != 60);
							uint32_t anon56 = phi43 - 3;
							int32_t anon55 = (__sext int32_t)(anon56 != 0 & !(anon56 < 0 ^ anon49.field1));
							if (*(uint32_t*)(anon16 + anon33) == 0 && anon53 == 60 || *(uint32_t*)(anon16 + anon33) != 0 && anon54 == anon55)
							{
								phi_in57 = phi37;
								phi58 = phi38;
								phi59 = phi_in57;
								phi60 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi58 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
							}
							if (*(uint32_t*)(anon16 + anon33) != 0 && anon54 != anon55)
							{
								phi39 = anon50;
								phi40 = anon51;
								phi61 = (__zext uint64_t)anon52;
								phi58 = anon51;
								phi62 = 2;
							}
							if (anon53 != 60 && *(uint32_t*)(anon16 + anon33) == 0 || *(uint32_t*)(anon16 + anon33) != 0 && anon54 != anon55 && anon47 == 2)
							{
								uint64_t phi_in63 = phi39;
								phi61 = phi_in63;
								phi58 = phi40;
								phi62 = (__sext int64_t)*(uint32_t*)(anon1 + (phi40 << 2) + 384);
							}
							if (anon53 != 60 && *(uint32_t*)(anon16 + anon33) == 0 || *(uint32_t*)(anon16 + anon33) != 0 && anon54 != anon55 && anon47 == 2 || *(uint32_t*)(anon16 + anon33) != 0 && anon54 != anon55 && anon47 != 2)
							{
								phi_in57 = phi61;
								phi59 = phi_in57;
								phi60 = (__sext int32_t)*(uint8_t*)(phi62 + 4197048);
							}
							phi_in24 = phi59;
							uint64_t* anon64 = (uint64_t*)(arg1 - 3368);
							*anon64 = phi58;
							putchar(phi60);
							uint64_t anon65 = *anon64 << 2;
							if (*(uint32_t*)(anon1 + anon65 + 392) == -*(uint32_t*)(anon1 + anon65 + 396))
							{
								putchar(32);
							}
						}
						uint64_t phi66 = phi_in24;
						anon68 = (uint32_t)phi66;
						uint32_t anon67 = anon68 + 1;
						phi_in24 = (__zext uint64_t)anon67;
						phi25 = anon67;
					}
					while (anon68 < 119);
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
