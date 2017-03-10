#include "tests/bin/1995-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600bf8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	struct { uint8_t field0; uint8_t field1[23]; uint64_t field2; uint8_t field3[40]; uint64_t field4; } alloca1;
	uint64_t alloca14;
	uint32_t phi61;
	alloca1.field4 = arg0;
	uint32_t anon2 = getchar();
	if ((uint8_t)anon2 != 255)
	{
		while (true)
		{
			uint64_t alloca5;
			uint8_t anon8;
			uint64_t anon9;
			uint64_t anon10;
			uint64_t phi_in12;
			uint32_t phi13;
			uint32_t anon4 = anon2 << 24 >> 24;
			uint32_t anon3 = (uint32_t)((((__zext uint64_t)anon4 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon4)) >> 31 ^ 1;
			if (anon3 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				alloca5 = 91;
				uint32_t phi6 = anon4;
				putchar(phi6);
				uint32_t anon7 = getchar();
				anon8 = (uint8_t)anon7;
				if (anon8 == 255)
				{
					break;
				}
				else 
				{
					uint64_t anon11 = (__zext uint64_t)anon7;
					anon10 = anon11 << 56;
					anon9 = anon10 >> 56;
					phi6 = (uint32_t)anon9;
					phi_in12 = anon11;
					phi13 = anon7;
				}
			}
			else 
			{
				phi_in12 = (__zext uint64_t)anon2;
				phi13 = anon2;
			}
			if (anon3 != -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) || anon8 != 255 && ((uint32_t)((91 - anon9) * ((anon10 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon9 - 97) * (123 - anon9) >> 31) & 1 ^ 1) && anon3 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				uint8_t phi69;
				uint32_t anon15 = phi13 >> 8;
				alloca14 = (__zext uint64_t)(anon15 << 24 >> 24);
				uint32_t phi16 = 91;
				uint64_t phi17 = phi_in12;
				uint32_t phi18 = anon15;
				uint64_t* phi19 = &alloca5;
				uint64_t phi20 = 91;
				do
				{
					uint64_t anon35;
					uint64_t phi_in41;
					uint64_t phi43;
					uint8_t phi55;
					uint64_t phi56;
					uint64_t phi57;
					uint64_t phi21 = phi17;
					*phi19 = phi20;
					uint32_t phi22 = phi16;
					uint8_t phi_in23 = (uint8_t)phi18;
					uint64_t phi24 = alloca14;
					uint32_t phi25 = phi22;
					uint64_t phi_in26 = phi21;
					uint8_t phi27 = phi_in23;
					uint64_t anon29 = phi24 << 32;
					uint64_t anon30 = anon29 - 279172874240 >> 32;
					uint32_t anon32 = (uint32_t)phi24;
					uint32_t anon31 = phi25 - anon32;
					uint32_t anon28 = ((uint32_t)((anon29 - 416611827712 >> 32) * (123 - phi24 << 32 >> 32)) >> 31 ^ 1) + ((uint32_t)(anon30 * (__sext int64_t)anon31 >> 31) & 1 ^ 1);
					alloca14 = (__zext uint64_t)anon28;
					uint64_t phi33 = phi_in26;
					if (anon28 != 0)
					{
						uint64_t phi34;
						uint8_t phi42;
						anon35 = (uint64_t)&alloca1;
						phi34 = anon35;
						uint64_t phi36 = phi_in26;
						uint8_t phi37 = phi27;
						uint32_t phi38 = anon32 - 65;
						uint32_t phi39 = anon32 - 97;
						uint32_t phi40 = (uint32_t)anon30 * anon31;
						while (true)
						{
							uint8_t phi44;
							phi_in41 = phi36;
							phi42 = phi37;
							if (phi40 > 4294967295)
							{
								phi43 = phi34;
								if (*(uint8_t*)((__sext int64_t)phi38 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi44 = (uint8_t)((uint32_t)phi_in41 + 32 >> 8);
								}
							}
							else 
							{
								phi43 = phi34;
								phi44 = phi42;
								if (*(uint8_t*)((__sext int64_t)phi39 + 4196500) == 45)
								{
									break;
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi39 + 4196500) != 45 && true)
							{
								*(uint8_t*)phi34 = phi44;
								uint32_t anon45 = getchar();
								uint64_t anon51 = (__zext uint64_t)anon45;
								uint64_t anon50 = anon51 << 56 >> 56;
								uint32_t anon49 = (uint32_t)anon50;
								uint32_t anon48 = anon49 - 65;
								uint32_t anon47 = anon48 * (phi25 - anon49);
								uint32_t anon52 = anon49 - 97;
								uint32_t anon46 = (anon47 >> 31 ^ 1) + ((uint32_t)((__sext int64_t)anon52 * (123 - anon50) >> 31) & 1 ^ 1);
								alloca14 = (__zext uint64_t)anon46;
								uint64_t anon53 = phi34 + 1;
								phi43 = anon53;
								phi_in41 = anon51;
								uint8_t anon54 = (uint8_t)(anon45 >> 8);
								phi42 = anon54;
								phi34 = anon53;
								phi36 = anon51;
								phi37 = anon54;
								phi38 = anon48;
								phi39 = anon52;
								phi40 = anon47;
								if (anon46 == 0)
								{
									break;
								}
							}
						}
						phi55 = phi42;
						phi33 = phi_in41;
						phi27 = phi55;
						phi56 = phi43;
						phi57 = phi_in41;
					}
					if (anon28 != 0 && phi43 == anon35 || anon28 == 0)
					{
						phi_in41 = phi33;
						phi55 = phi27;
						alloca1.field0 = 119;
						phi56 = (uint64_t)&alloca1.field1;
						phi57 = phi_in41;
					}
					uint64_t phi_in58 = phi57;
					*(uint8_t*)phi56 = 97;
					uint64_t phi59 = phi_in58;
					uint8_t phi_in60 = phi55;
					int32_t anon62 = (__sext int32_t)phi55;
					phi61 = anon62;
					if (((uint32_t)((__sext int64_t)(phi25 - anon62) * (((__zext uint64_t)anon62 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon62 - 97) * (123 - anon62) >> 31 ^ 1))
					{
						uint32_t anon63;
						uint32_t anon64;
						do
						{
							putchar(phi61);
							anon63 = getchar();
							anon64 = anon63 << 24 >> 24;
							phi61 = anon64;
						}
						while (((uint32_t)((__sext int64_t)(phi16 - anon64) * (((__zext uint64_t)anon64 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon64 - 97) * (123 - anon64) >> 31 ^ 1));
						phi25 = phi16;
						phi59 = (__zext uint64_t)anon63;
						phi_in60 = (uint8_t)(anon63 >> 8);
					}
					phi22 = phi25;
					phi21 = phi59;
					*(uint8_t*)(phi56 + 1) = 0;
					uint8_t phi65 = alloca1.field0;
					uint64_t phi_in66 = anon35;
					if (alloca1.field0 != 0)
					{
						uint64_t anon68;
						do
						{
							uint64_t phi67 = phi_in66;
							putchar((__sext int32_t)phi65);
							anon68 = phi67 + 1;
							phi65 = *(uint8_t*)anon68;
							phi_in66 = anon68;
						}
						while (*(uint8_t*)anon68 != 0);
						phi_in60 = (uint8_t)(phi21 >> 8);
					}
					phi69 = phi_in60;
					if (phi69 != 255)
					{
						int32_t anon71 = (__sext int32_t)phi69;
						uint64_t anon70 = (__zext uint64_t)anon71;
						alloca14 = anon70;
						uint32_t phi72 = anon71;
						phi_in23 = phi69;
						phi24 = (__sext int64_t)phi69 & 0xffffffff;
						if (((uint32_t)((__sext int64_t)(phi22 - anon71) * ((anon70 << 32) - 279172874240 >> 32)) >> 31 ^ 1) == -((anon71 - 97) * (123 - anon71) >> 31 ^ 1))
						{
							putchar(phi72);
							uint32_t anon73 = getchar();
							if ((uint8_t)anon73 == 255)
							{
								break;
							}
							else 
							{
								uint64_t anon75 = (__zext uint64_t)anon73;
								uint64_t anon74 = anon75 << 56 >> 56;
								phi72 = (uint32_t)anon74;
								phi16 = *(uint32_t*)&alloca5;
								phi17 = anon75;
								phi18 = anon73 >> 8 & 0xff;
								phi19 = &alloca14;
								phi20 = anon74 & 0xffffffff;
							}
						}
					}
				}
				while (phi69 != 255);
				break;
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400460, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400810, (void(*)())0x400880, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600c48;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196306);
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
	_init(4196419);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600a10)(arg1 & 0xffffffff, arg2, arg3);
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
