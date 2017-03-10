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
					uint32_t anon70;
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
					uint64_t phi24 = 0;
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
							phi24 = 0;
							phi25 = 0;
							phi_in26 = phi28 + 1;
							phi27 = *(uint8_t*)(arg1 - 3119 + phi28);
						}
						while (*(uint8_t*)(arg1 - 3119 + phi28) != 0);
					}
					do
					{
						uint64_t phi_in30 = phi24;
						int64_t anon32 = (__sext int64_t)phi25;
						int64_t anon31 = anon32 << 2;
						if (*(uint32_t*)(anon1 + anon31 + 384) != 0)
						{
							uint64_t phi_in33;
							uint64_t phi38;
							uint64_t phi39;
							uint64_t phi40;
							uint64_t phi41;
							uint32_t phi44;
							uint32_t anon46;
							uint32_t anon48;
							struct { uint32_t field0; bool field1; } anon50;
							uint64_t anon51;
							int64_t anon52;
							uint32_t anon53;
							uint64_t phi_in59;
							uint32_t phi60;
							uint64_t phi61;
							uint64_t phi62;
							uint64_t phi63;
							uint64_t phi64;
							int64_t anon34 = anon31 + 4;
							phi_in33 = anon34;
							uint32_t phi_in35 = *(uint32_t*)(anon1 + anon31 + 384);
							uint32_t phi_in36 = 1;
							uint64_t phi_in37 = 1;
							if (*(uint32_t*)(anon16 + anon34) == 0)
							{
								phi38 = phi_in30;
								phi39 = anon32;
								phi40 = phi_in30;
								phi41 = anon32;
							}
							else 
							{
								uint64_t phi42;
								uint64_t anon49;
								do
								{
									phi42 = phi_in33;
									uint32_t phi43 = phi_in35;
									phi44 = phi_in36;
									uint64_t phi45 = phi_in37;
									uint64_t anon47 = phi45 * 3 & 0x1f;
									anon46 = phi43 + (anon47 == 0 ? *(uint32_t*)(anon1 + (phi45 + phi_in30 << 32 >> 30) + 384) : (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi45 + phi_in30 << 32 >> 30) + 384) << anon47));
									*(uint32_t*)(anon16 + phi42) = anon46;
									phi_in33 = phi42 + 4;
									phi_in35 = anon46;
									anon48 = phi44 + 1;
									phi_in36 = anon48;
									anon49 = (__zext uint64_t)anon48;
									phi_in37 = anon49;
								}
								while (*(uint32_t*)(phi42 + arg1 - 2988) != 0);
								anon50 = llvm.ssub.with.overflow.i32(anon48, 4);
								anon51 = phi_in30 + anon49 + 4294967295 & 0xffffffff;
								phi38 = anon51;
								anon53 = (uint32_t)phi_in30 + phi44;
								anon52 = (__sext int64_t)anon53;
								phi39 = anon52;
							}
							uint32_t anon54 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon31 + 384) % 64);
							uint32_t anon55 = (__zext uint32_t)((uint32_t)((__sext int64_t)anon46 % 64) != 60);
							uint32_t anon57 = phi44 - 3;
							int32_t anon56 = (__sext int32_t)(anon57 != 0 & !(anon57 < 0 ^ anon50.field1));
							if (*(uint32_t*)(anon16 + anon34) == 0 && anon54 == 60 || *(uint32_t*)(anon16 + anon34) != 0 && anon55 == anon56)
							{
								uint64_t phi_in58 = phi38;
								phi_in59 = phi39;
								phi_in30 = phi_in58;
								phi60 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi_in59 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
								phi61 = phi_in59;
							}
							if (*(uint32_t*)(anon16 + anon34) != 0 && anon55 != anon56)
							{
								phi40 = anon51;
								phi41 = anon52;
								phi62 = (__zext uint64_t)anon53;
								phi63 = anon52;
								phi64 = 2;
							}
							if (anon54 != 60 && *(uint32_t*)(anon16 + anon34) == 0 || *(uint32_t*)(anon16 + anon34) != 0 && anon55 != anon56 && anon48 == 2)
							{
								uint64_t phi_in65 = phi40;
								phi63 = phi41;
								phi62 = phi_in65;
								phi64 = (__sext int64_t)*(uint32_t*)(anon1 + (phi63 << 2) + 384);
							}
							if (anon54 != 60 && *(uint32_t*)(anon16 + anon34) == 0 || *(uint32_t*)(anon16 + anon34) != 0 && anon55 != anon56 && anon48 == 2 || *(uint32_t*)(anon16 + anon34) != 0 && anon55 != anon56 && anon48 != 2)
							{
								phi_in30 = phi62;
								phi_in59 = phi63;
								phi60 = (__sext int32_t)*(uint8_t*)(phi64 + 4197048);
								phi61 = phi_in59;
							}
							uint64_t* anon66 = (uint64_t*)(arg1 - 3368);
							*anon66 = phi61;
							putchar(phi60);
							uint64_t anon67 = *anon66 << 2;
							if (*(uint32_t*)(anon1 + anon67 + 392) == -*(uint32_t*)(anon1 + anon67 + 396))
							{
								putchar(32);
							}
						}
						uint64_t phi68 = phi_in30;
						anon70 = (uint32_t)phi68;
						uint32_t anon69 = anon70 + 1;
						phi24 = (__zext uint64_t)anon69;
						phi25 = anon69;
					}
					while (anon70 < 119);
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
