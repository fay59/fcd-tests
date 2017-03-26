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
			if (anon6 != -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) || anon7 != 255 && anon9 != -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1) && anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				uint32_t phi13;
				uint8_t anon51;
				uint64_t phi12 = (__zext uint64_t)phi5;
				uint32_t anon14 = phi5 >> 8;
				phi13 = anon14 << 24 >> 24;
				uint64_t phi15 = (__zext uint64_t)anon14 << 56 >> 56;
				do
				{
					uint64_t anon22;
					uint64_t phi27;
					uint64_t phi_in37;
					uint64_t phi_in16 = phi12;
					uint64_t phi_in17 = phi_in16;
					uint32_t anon18 = (uint32_t)(((phi15 << 32) - 416611827712 >> 32) * (__sext int64_t)(123 - phi13)) >> 31 ^ 1;
					uint32_t anon19 = (uint32_t)phi15 - 65;
					uint32_t anon20 = 91 - phi13;
					if (anon18 != -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1))
					{
						uint64_t phi21;
						anon22 = (uint64_t)&alloca1;
						phi21 = anon22;
						uint64_t phi23 = phi_in16;
						uint64_t phi24 = phi15 + 4294967199 & 0xffffffff;
						uint32_t phi25 = anon19 * anon20;
						uint32_t phi26 = anon19;
						while (true)
						{
							uint64_t anon29;
							uint64_t anon30;
							uint32_t anon31;
							uint32_t anon32;
							uint64_t anon34;
							uint64_t anon35;
							uint32_t anon36;
							if (phi25 > 4294967295)
							{
								phi27 = phi21;
								phi_in17 = phi23;
								if (*(uint8_t*)((__sext int64_t)phi26 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi21 = (uint8_t)((uint32_t)phi23 + 32 >> 8);
								}
							}
							else 
							{
								phi27 = phi21;
								phi_in17 = phi23;
								if (*(uint8_t*)((phi24 << 32 >> 32) + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi21 = (uint8_t)(phi23 >> 8);
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi26 + 4196500) != 45 && phi25 > 4294967295 || phi25 <= 4294967295 && *(uint8_t*)((phi24 << 32 >> 32) + 4196500) != 45)
							{
								uint32_t anon28 = getchar();
								anon29 = phi21 + 1;
								phi27 = anon29;
								anon30 = (__zext uint64_t)anon28;
								phi_in17 = anon30;
								anon34 = anon30 << 56 >> 56;
								uint32_t anon33 = (uint32_t)anon34;
								anon32 = anon33 - 65;
								anon35 = 91 - anon34;
								anon31 = (uint32_t)((__sext int64_t)anon32 * anon35) >> 31 ^ 1;
								anon36 = anon33 - 97;
								if (anon31 == -((uint32_t)((__sext int64_t)anon36 * (123 - anon34) >> 31) & 1 ^ 1))
								{
									break;
								}
							}
							if (anon31 != -((uint32_t)((__sext int64_t)anon36 * (123 - anon34) >> 31) & 1 ^ 1))
							{
								if (*(uint8_t*)((__sext int64_t)phi26 + 4196500) != 45 && phi25 > 4294967295 || phi25 <= 4294967295 && *(uint8_t*)((phi24 << 32 >> 32) + 4196500) != 45)
								{
									phi21 = anon29;
									phi23 = anon30;
									phi24 = (__zext uint64_t)anon36;
									phi25 = anon32 * (uint32_t)anon35;
									phi26 = anon32;
								}
							}
						}
						phi_in17 = phi_in17;
						phi_in37 = phi_in17;
					}
					if (anon18 == -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1) || anon18 != -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1) && phi27 == anon22)
					{
						alloca1.field0 = 119;
						phi27 = (uint64_t)&alloca1.field1;
						phi_in37 = phi_in17;
					}
					*(uint8_t*)phi27 = 97;
					uint64_t anon39 = phi_in37 >> 8;
					uint32_t anon38 = (uint32_t)(anon39 << 24) >> 24;
					uint64_t anon40 = anon39 << 56;
					uint64_t anon41 = anon40 >> 56;
					if (((uint32_t)((__sext int64_t)(91 - anon38) * ((anon40 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon41 - 97) * (__sext int64_t)(123 - anon38) >> 31) & 1 ^ 1))
					{
						uint32_t anon44;
						uint32_t anon45;
						uint32_t anon46;
						uint64_t phi42 = anon41 & 0xffffffff;
						do
						{
							putchar((uint32_t)phi42);
							anon45 = getchar();
							anon44 = anon45 << 24 >> 24;
							uint64_t anon43 = (__zext uint64_t)anon44;
							phi42 = anon43;
							anon46 = (uint32_t)((__sext int64_t)(91 - anon44) * ((anon43 << 32) - 279172874240 >> 32)) >> 31 ^ 1;
						}
						while (anon46 != -((anon44 - 97) * (123 - anon44) >> 31 ^ 1));
						phi_in37 = (__zext uint64_t)anon45;
					}
					uint64_t phi47 = phi_in37;
					*(uint8_t*)(phi27 + 1) = 0;
					uint8_t phi48 = alloca1.field0;
					uint64_t phi49 = anon22;
					if (alloca1.field0 != 0)
					{
						uint64_t anon50;
						do
						{
							putchar((__sext int32_t)phi48);
							anon50 = phi49 + 1;
							phi48 = *(uint8_t*)anon50;
							phi49 = anon50;
						}
						while (*(uint8_t*)anon50 != 0);
					}
					uint64_t anon52 = phi47 >> 8;
					anon51 = (uint8_t)anon52;
					if (anon51 != 255)
					{
						int32_t anon53 = (__sext int32_t)anon51;
						uint64_t anon54 = anon52 << 56;
						uint64_t anon55 = anon54 >> 56;
						if (((uint32_t)((__sext int64_t)(91 - anon53) * ((anon54 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon55 - 97) * (__sext int64_t)(123 - anon53) >> 31) & 1 ^ 1))
						{
							uint64_t phi56 = (__zext uint64_t)anon53;
							putchar((uint32_t)phi56);
							uint32_t anon57 = getchar();
							if ((uint8_t)anon57 == 255)
							{
								break;
							}
							uint64_t anon60 = (__zext uint64_t)anon57;
							uint64_t anon59 = anon60 << 56;
							uint64_t anon58 = anon59 >> 56;
							else if (((uint32_t)((91 - anon58) * ((anon59 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon58 - 97) * (123 - anon58) >> 31) & 1 ^ 1))
							{
								phi56 = anon58 & 0xffffffff;
							}
							else 
							{
								phi12 = anon60;
								phi13 = (uint32_t)anon58;
								phi15 = anon58;
							}
						}
						else 
						{
							phi12 = phi47;
							phi13 = (uint32_t)anon55;
							phi15 = anon55;
						}
					}
				}
				while (anon51 != 255);
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
