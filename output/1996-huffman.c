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
	uint64_t phi38;
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
					uint64_t phi64;
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
					uint64_t phi_in25 = 0;
					uint8_t phi26 = *(uint8_t*)anon2;
					if (*(uint8_t*)anon2 != 0)
					{
						uint64_t phi27;
						do
						{
							phi27 = phi_in25;
							uint32_t* anon28 = (uint32_t*)(anon16 + (phi27 << 2));
							*anon28 = *anon28 + ((__zext uint32_t)(phi26 != 32) << 2);
							phi24 = 0;
							phi_in25 = phi27 + 1;
							phi26 = *(uint8_t*)(arg1 - 3119 + phi27);
						}
						while (*(uint8_t*)(arg1 - 3119 + phi27) != 0);
					}
					do
					{
						uint64_t phi_in29 = phi24;
						uint64_t anon31 = phi_in29 << 32;
						uint64_t anon30 = anon31 >> 30;
						if (*(uint32_t*)(anon1 + anon30 + 384) != 0)
						{
							uint64_t phi_in32;
							uint64_t phi37;
							uint64_t phi_in40;
							uint64_t phi41;
							uint32_t phi43;
							uint32_t anon46;
							struct { uint32_t field0; bool field1; } anon48;
							uint64_t anon49;
							int64_t anon50;
							uint32_t anon51;
							uint64_t phi_in56;
							uint32_t phi57;
							uint64_t phi58;
							uint64_t phi_in59;
							uint64_t phi60;
							uint64_t phi61;
							uint64_t anon33 = anon30 + 4;
							phi_in32 = anon33;
							uint32_t phi34 = *(uint32_t*)(anon1 + anon30 + 384);
							uint32_t phi_in35 = 1;
							uint64_t phi36 = 1;
							if (*(uint32_t*)(anon16 + anon33) == 0)
							{
								phi37 = phi_in29;
								uint64_t anon39 = anon31 >> 32;
								phi38 = anon39;
								phi_in40 = phi_in29;
								phi41 = anon39;
							}
							else 
							{
								uint64_t phi42;
								uint64_t anon47;
								do
								{
									phi42 = phi_in32;
									phi43 = phi_in35;
									uint64_t anon45 = phi36 * 3 & 0x1f;
									uint32_t anon44 = phi34 + (anon45 == 0 ? *(uint32_t*)(anon1 + (phi36 + phi_in29 << 32 >> 30) + 384) : (uint32_t)((__zext uint64_t)*(uint32_t*)(anon1 + (phi36 + phi_in29 << 32 >> 30) + 384) << anon45));
									*(uint32_t*)(anon16 + phi42) = anon44;
									phi_in32 = phi42 + 4;
									phi34 = anon44;
									anon46 = phi43 + 1;
									phi_in35 = anon46;
									anon47 = (__zext uint64_t)anon46;
									phi36 = anon47;
								}
								while (*(uint32_t*)(phi42 + arg1 - 2988) != 0);
								anon48 = llvm.ssub.with.overflow.i32(anon46, 4);
								anon49 = phi_in29 + anon47 + 4294967295 & 0xffffffff;
								phi37 = anon49;
								anon51 = (uint32_t)phi_in29 + phi43;
								anon50 = (__sext int64_t)anon51;
								phi38 = anon50;
							}
							uint32_t anon52 = (uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + anon30 + 384) % 64);
							uint64_t anon54 = (__zext uint64_t)anon51;
							uint32_t anon53 = (__zext uint32_t)((uint32_t)((__sext int64_t)*(uint32_t*)(anon1 + (anon54 << 32 >> 30) + 384) % 64) != 60);
							uint32_t anon55 = phi43 - 3;
							if (*(uint32_t*)(anon16 + anon33) == 0 && anon52 == 60 || *(uint32_t*)(anon16 + anon33) != 0 && anon53 == -(((__zext uint32_t)(anon55 < 0 ^ anon48.field1) ^ 1) & (__zext uint32_t)(anon55 != 0)))
							{
								phi_in29 = phi37;
								phi_in56 = phi38;
								phi57 = (uint32_t)(((__sext int64_t)*(uint8_t*)(__sext int64_t)(*(uint32_t*)(anon1 + (phi_in56 << 2) + 384) / 64 + 4197048) - 4) % 10) + 48;
								phi58 = phi_in56;
							}
							if (*(uint32_t*)(anon16 + anon33) != 0 && anon53 != -(((__zext uint32_t)(anon55 < 0 ^ anon48.field1) ^ 1) & (__zext uint32_t)(anon55 != 0)))
							{
								phi_in40 = anon49;
								phi41 = anon50;
								phi_in59 = anon54;
								phi60 = anon50;
								phi61 = 2;
							}
							if (anon52 != 60 && *(uint32_t*)(anon16 + anon33) == 0 || *(uint32_t*)(anon16 + anon33) != 0 && anon53 != -(((__zext uint32_t)(anon55 < 0 ^ anon48.field1) ^ 1) & (__zext uint32_t)(anon55 != 0)) && anon46 == 2)
							{
								phi_in59 = phi_in40;
								phi60 = phi41;
								phi61 = (__sext int64_t)*(uint32_t*)(anon1 + (phi41 << 2) + 384);
							}
							if (anon52 != 60 && *(uint32_t*)(anon16 + anon33) == 0 || *(uint32_t*)(anon16 + anon33) != 0 && anon53 != -(((__zext uint32_t)(anon55 < 0 ^ anon48.field1) ^ 1) & (__zext uint32_t)(anon55 != 0)) && anon46 == 2 || *(uint32_t*)(anon16 + anon33) != 0 && anon53 != -(((__zext uint32_t)(anon55 < 0 ^ anon48.field1) ^ 1) & (__zext uint32_t)(anon55 != 0)) && anon46 != 2)
							{
								phi_in56 = phi60;
								phi_in29 = phi_in59;
								phi57 = (__sext int32_t)*(uint8_t*)(phi61 + 4197048);
								phi58 = phi_in56;
							}
							uint64_t* anon62 = (uint64_t*)(arg1 - 3368);
							*anon62 = phi58;
							putchar(phi57);
							uint64_t anon63 = *anon62 << 2;
							if (*(uint32_t*)(anon1 + anon63 + 392) == -*(uint32_t*)(anon1 + anon63 + 396))
							{
								putchar(32);
							}
						}
						phi64 = phi_in29;
						phi24 = phi64 + 1 & 0xffffffff;
					}
					while ((uint32_t)phi64 < 119);
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
