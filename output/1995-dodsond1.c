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
	struct { uint8_t field0; uint8_t field1[71]; uint64_t field2; } alloca1;
	alloca1.field2 = arg0;
	uint32_t anon2 = getchar();
	if ((uint8_t)anon2 != 255)
	{
		while (true)
		{
			uint32_t phi_in3;
			uint8_t anon7;
			uint32_t anon8;
			uint32_t anon4 = anon2 << 24 >> 24;
			phi_in3 = anon4;
			uint32_t phi_in5 = anon2;
			uint32_t anon6 = (uint32_t)((((__zext uint64_t)anon4 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon4)) >> 31 ^ 1;
			if (anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				putchar(phi_in3);
				anon8 = getchar();
				anon7 = (uint8_t)anon8;
				if (anon7 == 255)
				{
					break;
				}
				else 
				{
					phi_in5 = anon8;
				}
			}
			uint64_t anon11 = (__zext uint64_t)anon8 << 56;
			uint64_t anon10 = anon11 >> 56;
			uint32_t anon9 = (uint32_t)((91 - anon10) * ((anon11 >> 24) - 279172874240 >> 32)) >> 31 ^ 1;
			if (anon6 != -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) || anon7 != 255 && anon9 != -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1))
			{
				uint32_t phi_in13;
				uint8_t anon47;
				uint64_t phi_in12 = (__zext uint64_t)phi_in5;
				uint32_t anon14 = phi_in5 >> 8;
				phi_in13 = anon14 << 24 >> 24;
				uint64_t phi_in15 = (__zext uint64_t)anon14 << 56 >> 56;
				do
				{
					uint64_t anon20;
					uint64_t phi_in24;
					uint32_t anon16 = (uint32_t)(((phi_in15 << 32) - 416611827712 >> 32) * (__sext int64_t)(123 - phi_in13)) >> 31 ^ 1;
					uint32_t anon17 = (uint32_t)phi_in15 - 65;
					uint32_t anon18 = 91 - phi_in13;
					if (anon16 != -((uint32_t)((__sext int64_t)anon17 * (__sext int64_t)anon18 >> 31) & 1 ^ 1))
					{
						uint64_t phi_in19;
						anon20 = (uint64_t)&alloca1;
						phi_in19 = anon20;
						uint64_t phi_in21 = phi_in15 + 4294967199 & 0xffffffff;
						uint32_t phi_in22 = anon17 * anon18;
						uint32_t phi_in23 = anon17;
						while (true)
						{
							uint64_t anon26;
							uint64_t anon27;
							uint32_t anon28;
							uint32_t anon29;
							uint64_t anon31;
							uint64_t anon32;
							uint32_t anon33;
							if (phi_in22 > 4294967295)
							{
								phi_in24 = phi_in19;
								if (*(uint8_t*)((__sext int64_t)phi_in23 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi_in19 = (uint8_t)((uint32_t)phi_in12 + 32 >> 8);
								}
							}
							else 
							{
								phi_in24 = phi_in19;
								if (*(uint8_t*)((phi_in21 << 32 >> 32) + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi_in19 = (uint8_t)(phi_in12 >> 8);
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi_in23 + 4196500) != 45 && phi_in22 > 4294967295 || phi_in22 <= 4294967295 && *(uint8_t*)((phi_in21 << 32 >> 32) + 4196500) != 45)
							{
								uint32_t anon25 = getchar();
								anon26 = phi_in19 + 1;
								phi_in24 = anon26;
								anon27 = (__zext uint64_t)anon25;
								phi_in12 = anon27;
								anon31 = anon27 << 56 >> 56;
								uint32_t anon30 = (uint32_t)anon31;
								anon29 = anon30 - 65;
								anon32 = 91 - anon31;
								anon28 = (uint32_t)((__sext int64_t)anon29 * anon32) >> 31 ^ 1;
								anon33 = anon30 - 97;
								if (anon28 == -((uint32_t)((__sext int64_t)anon33 * (123 - anon31) >> 31) & 1 ^ 1))
								{
									break;
								}
							}
							if (anon28 != -((uint32_t)((__sext int64_t)anon33 * (123 - anon31) >> 31) & 1 ^ 1))
							{
								if (*(uint8_t*)((__sext int64_t)phi_in23 + 4196500) != 45 && phi_in22 > 4294967295 || phi_in22 <= 4294967295 && *(uint8_t*)((phi_in21 << 32 >> 32) + 4196500) != 45)
								{
									phi_in19 = anon26;
									phi_in12 = anon27;
									phi_in21 = (__zext uint64_t)anon33;
									phi_in22 = anon29 * (uint32_t)anon32;
									phi_in23 = anon29;
								}
							}
						}
					}
					if (anon16 == -((uint32_t)((__sext int64_t)anon17 * (__sext int64_t)anon18 >> 31) & 1 ^ 1) || phi_in24 == anon20)
					{
						alloca1.field0 = 119;
						phi_in24 = (uint64_t)&alloca1.field1;
					}
					*(uint8_t*)phi_in24 = 97;
					uint64_t anon35 = phi_in12 >> 8;
					uint32_t anon34 = (uint32_t)(anon35 << 24) >> 24;
					uint64_t anon36 = anon35 << 56;
					uint64_t anon37 = anon36 >> 56;
					if (((uint32_t)((__sext int64_t)(91 - anon34) * ((anon36 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon37 - 97) * (__sext int64_t)(123 - anon34) >> 31) & 1 ^ 1))
					{
						uint32_t anon40;
						uint32_t anon41;
						uint32_t anon42;
						uint64_t phi_in38 = anon37 & 0xffffffff;
						do
						{
							putchar((uint32_t)phi_in38);
							anon41 = getchar();
							anon40 = anon41 << 24 >> 24;
							uint64_t anon39 = (__zext uint64_t)anon40;
							phi_in38 = anon39;
							anon42 = (uint32_t)((__sext int64_t)(91 - anon40) * ((anon39 << 32) - 279172874240 >> 32)) >> 31 ^ 1;
						}
						while (anon42 != -((anon40 - 97) * (123 - anon40) >> 31 ^ 1));
						phi_in12 = (__zext uint64_t)anon41;
					}
					uint64_t phi43 = phi_in12;
					*(uint8_t*)(phi_in24 + 1) = 0;
					uint8_t phi_in44 = alloca1.field0;
					uint64_t phi_in45 = anon20;
					if (alloca1.field0 != 0)
					{
						uint64_t anon46;
						do
						{
							putchar((__sext int32_t)phi_in44);
							anon46 = phi_in45 + 1;
							phi_in44 = *(uint8_t*)anon46;
							phi_in45 = anon46;
						}
						while (*(uint8_t*)anon46 != 0);
					}
					uint64_t anon48 = phi43 >> 8;
					anon47 = (uint8_t)anon48;
					if (anon47 != 255)
					{
						int32_t anon49 = (__sext int32_t)anon47;
						uint64_t anon50 = anon48 << 56;
						uint64_t anon51 = anon50 >> 56;
						if (((uint32_t)((__sext int64_t)(91 - anon49) * ((anon50 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon51 - 97) * (__sext int64_t)(123 - anon49) >> 31) & 1 ^ 1))
						{
							uint64_t phi_in52 = (__zext uint64_t)anon49;
							putchar((uint32_t)phi_in52);
							uint32_t anon53 = getchar();
							if ((uint8_t)anon53 == 255)
							{
								break;
							}
							uint64_t anon56 = (__zext uint64_t)anon53;
							uint64_t anon55 = anon56 << 56;
							uint64_t anon54 = anon55 >> 56;
							else if (((uint32_t)((91 - anon54) * ((anon55 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon54 - 97) * (123 - anon54) >> 31) & 1 ^ 1))
							{
								phi_in52 = anon54 & 0xffffffff;
							}
							else 
							{
								phi_in12 = anon56;
								phi_in13 = (uint32_t)anon54;
								phi_in15 = anon54;
							}
						}
						else 
						{
							phi_in12 = phi43;
							phi_in13 = (uint32_t)anon51;
							phi_in15 = anon51;
						}
					}
				}
				while (anon47 != 255);
				break;
			}
			if (anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				if (anon7 != 255)
				{
					if (anon9 == -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1))
					{
						phi_in3 = (uint32_t)anon10;
					}
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
