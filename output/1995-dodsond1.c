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
			uint32_t phi3;
			uint8_t anon7;
			uint32_t anon8;
			uint32_t anon4 = anon2 << 24 >> 24;
			phi3 = anon4;
			uint32_t phi5 = anon2;
			uint32_t anon6 = (uint32_t)((((__zext uint64_t)anon4 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon4)) >> 31 ^ 1;
			if (anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				putchar(phi3);
				anon8 = getchar();
				anon7 = (uint8_t)anon8;
				if (anon7 == 255)
				{
					break;
				}
				else 
				{
					phi5 = anon8;
				}
			}
			uint64_t anon11 = (__zext uint64_t)anon8 << 56;
			uint64_t anon10 = anon11 >> 56;
			uint32_t anon9 = (uint32_t)((91 - anon10) * ((anon11 >> 24) - 279172874240 >> 32)) >> 31 ^ 1;
			if (anon6 != -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) || anon7 != 255 && anon9 != -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1))
			{
				uint32_t phi13;
				uint8_t anon52;
				uint64_t phi_in12 = (__zext uint64_t)phi5;
				uint32_t anon14 = phi5 >> 8;
				phi13 = anon14 << 24 >> 24;
				uint64_t phi15 = (__zext uint64_t)anon14 << 56 >> 56;
				do
				{
					uint64_t anon21;
					uint64_t phi_in26;
					uint64_t phi36;
					uint64_t phi37;
					uint64_t phi_in16 = phi_in12;
					uint32_t anon17 = (uint32_t)(((phi15 << 32) - 416611827712 >> 32) * (__sext int64_t)(123 - phi13)) >> 31 ^ 1;
					uint32_t anon18 = (uint32_t)phi15 - 65;
					uint32_t anon19 = 91 - phi13;
					if (anon17 != -((uint32_t)((__sext int64_t)anon18 * (__sext int64_t)anon19 >> 31) & 1 ^ 1))
					{
						uint64_t phi20;
						anon21 = (uint64_t)&alloca1;
						phi20 = anon21;
						uint64_t phi22 = phi_in12;
						uint64_t phi23 = phi15 + 4294967199 & 0xffffffff;
						uint32_t phi24 = anon18 * anon19;
						uint32_t phi25 = anon18;
						while (true)
						{
							uint64_t anon28;
							uint64_t anon29;
							uint32_t anon30;
							uint32_t anon31;
							uint64_t anon33;
							uint64_t anon34;
							uint32_t anon35;
							if (phi24 > 4294967295)
							{
								phi_in26 = phi20;
								if (*(uint8_t*)((__sext int64_t)phi25 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi20 = (uint8_t)((uint32_t)phi22 + 32 >> 8);
								}
							}
							else 
							{
								phi_in26 = phi20;
								if (*(uint8_t*)((phi23 << 32 >> 32) + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi20 = (uint8_t)(phi22 >> 8);
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi25 + 4196500) != 45 && phi24 > 4294967295 || phi24 <= 4294967295 && *(uint8_t*)((phi23 << 32 >> 32) + 4196500) != 45)
							{
								uint32_t anon27 = getchar();
								anon28 = phi20 + 1;
								phi_in26 = anon28;
								anon29 = (__zext uint64_t)anon27;
								phi22 = anon29;
								anon33 = anon29 << 56 >> 56;
								uint32_t anon32 = (uint32_t)anon33;
								anon31 = anon32 - 65;
								anon34 = 91 - anon33;
								anon30 = (uint32_t)((__sext int64_t)anon31 * anon34) >> 31 ^ 1;
								anon35 = anon32 - 97;
								if (anon30 == -((uint32_t)((__sext int64_t)anon35 * (123 - anon33) >> 31) & 1 ^ 1))
								{
									break;
								}
							}
							if (anon30 != -((uint32_t)((__sext int64_t)anon35 * (123 - anon33) >> 31) & 1 ^ 1))
							{
								if (*(uint8_t*)((__sext int64_t)phi25 + 4196500) != 45 && phi24 > 4294967295 || phi24 <= 4294967295 && *(uint8_t*)((phi23 << 32 >> 32) + 4196500) != 45)
								{
									phi20 = anon28;
									phi22 = anon29;
									phi23 = (__zext uint64_t)anon35;
									phi24 = anon31 * (uint32_t)anon34;
									phi25 = anon31;
								}
							}
						}
						phi_in16 = phi22;
						phi_in16 = phi_in16;
						phi36 = phi_in26;
						phi37 = phi_in16;
					}
					if (anon17 == -((uint32_t)((__sext int64_t)anon18 * (__sext int64_t)anon19 >> 31) & 1 ^ 1) || phi_in26 == anon21)
					{
						alloca1.field0 = 119;
						phi36 = (uint64_t)&alloca1.field1;
						phi37 = phi_in16;
					}
					uint64_t phi_in38 = phi37;
					*(uint8_t*)phi36 = 97;
					uint64_t anon40 = phi_in38 >> 8;
					uint32_t anon39 = (uint32_t)(anon40 << 24) >> 24;
					uint64_t anon41 = anon40 << 56;
					uint64_t anon42 = anon41 >> 56;
					if (((uint32_t)((__sext int64_t)(91 - anon39) * ((anon41 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon42 - 97) * (__sext int64_t)(123 - anon39) >> 31) & 1 ^ 1))
					{
						uint32_t anon45;
						uint32_t anon46;
						uint32_t anon47;
						uint64_t phi43 = anon42 & 0xffffffff;
						do
						{
							putchar((uint32_t)phi43);
							anon46 = getchar();
							anon45 = anon46 << 24 >> 24;
							uint64_t anon44 = (__zext uint64_t)anon45;
							phi43 = anon44;
							anon47 = (uint32_t)((__sext int64_t)(91 - anon45) * ((anon44 << 32) - 279172874240 >> 32)) >> 31 ^ 1;
						}
						while (anon47 != -((anon45 - 97) * (123 - anon45) >> 31 ^ 1));
						phi_in38 = (__zext uint64_t)anon46;
					}
					uint64_t phi48 = phi_in38;
					*(uint8_t*)(phi36 + 1) = 0;
					uint8_t phi49 = alloca1.field0;
					uint64_t phi50 = anon21;
					if (alloca1.field0 != 0)
					{
						uint64_t anon51;
						do
						{
							putchar((__sext int32_t)phi49);
							anon51 = phi50 + 1;
							phi49 = *(uint8_t*)anon51;
							phi50 = anon51;
						}
						while (*(uint8_t*)anon51 != 0);
					}
					uint64_t anon53 = phi48 >> 8;
					anon52 = (uint8_t)anon53;
					if (anon52 != 255)
					{
						int32_t anon54 = (__sext int32_t)anon52;
						uint64_t anon55 = anon53 << 56;
						uint64_t anon56 = anon55 >> 56;
						if (((uint32_t)((__sext int64_t)(91 - anon54) * ((anon55 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon56 - 97) * (__sext int64_t)(123 - anon54) >> 31) & 1 ^ 1))
						{
							uint64_t phi57 = (__zext uint64_t)anon54;
							putchar((uint32_t)phi57);
							uint32_t anon58 = getchar();
							if ((uint8_t)anon58 == 255)
							{
								break;
							}
							uint64_t anon61 = (__zext uint64_t)anon58;
							uint64_t anon60 = anon61 << 56;
							uint64_t anon59 = anon60 >> 56;
							else if (((uint32_t)((91 - anon59) * ((anon60 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon59 - 97) * (123 - anon59) >> 31) & 1 ^ 1))
							{
								phi57 = anon59 & 0xffffffff;
							}
							else 
							{
								phi_in12 = anon61;
								phi13 = (uint32_t)anon59;
								phi15 = anon59;
							}
						}
						else 
						{
							phi_in12 = phi48;
							phi13 = (uint32_t)anon56;
							phi15 = anon56;
						}
					}
				}
				while (anon52 != 255);
				break;
			}
			if (anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				if (anon7 != 255)
				{
					if (anon9 == -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1))
					{
						phi3 = (uint32_t)anon10;
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
