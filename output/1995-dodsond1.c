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
			uint32_t anon7;
			uint8_t anon8;
			uint32_t anon4 = anon2 << 24 >> 24;
			phi3 = anon4;
			uint32_t phi5 = anon2;
			uint32_t anon6 = (uint32_t)((((__zext uint64_t)anon4 << 32) - 279172874240 >> 32) * (__sext int64_t)(91 - anon4)) >> 31 ^ 1;
			if (anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				putchar(phi3);
				anon7 = getchar();
				anon8 = (uint8_t)anon7;
				if (anon8 == 255)
				{
					break;
				}
				else 
				{
					phi5 = anon7;
				}
			}
			uint64_t anon11 = (__zext uint64_t)anon7 << 56;
			uint64_t anon10 = anon11 >> 56;
			uint32_t anon9 = (uint32_t)((91 - anon10) * ((anon11 >> 24) - 279172874240 >> 32)) >> 31 ^ 1;
			if (anon6 != -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) || anon8 != 255 && anon9 != -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1) && anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				uint32_t phi13;
				uint8_t anon56;
				uint64_t phi12 = (__zext uint64_t)phi5;
				uint32_t anon14 = phi5 >> 8;
				phi13 = anon14 << 24 >> 24;
				uint64_t phi15 = (__zext uint64_t)anon14 << 56 >> 56;
				do
				{
					uint64_t anon22;
					uint64_t phi27;
					uint64_t phi39;
					uint64_t phi40;
					uint64_t phi_in16 = phi12;
					uint64_t phi17 = phi_in16;
					uint32_t anon18 = (uint32_t)(((phi15 << 32) - 416611827712 >> 32) * (__sext int64_t)(123 - phi13)) >> 31 ^ 1;
					uint32_t anon19 = (uint32_t)phi15 - 65;
					uint32_t anon20 = 91 - phi13;
					if (anon18 != -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1))
					{
						uint64_t phi21;
						uint64_t phi28;
						anon22 = (uint64_t)&alloca1;
						phi21 = anon22;
						uint64_t phi23 = phi_in16;
						uint64_t phi24 = phi15 + 4294967199 & 0xffffffff;
						uint32_t phi25 = anon19 * anon20;
						uint32_t phi26 = anon19;
						while (true)
						{
							uint8_t phi29;
							uint64_t anon31;
							uint64_t anon32;
							uint32_t anon33;
							uint32_t anon34;
							uint64_t anon36;
							uint64_t anon37;
							uint32_t anon38;
							if (phi25 > 4294967295)
							{
								phi27 = phi21;
								phi28 = phi23;
								if (*(uint8_t*)((__sext int64_t)phi26 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi29 = (uint8_t)((uint32_t)phi23 + 32 >> 8);
								}
							}
							else 
							{
								phi27 = phi21;
								phi28 = phi23;
								if (*(uint8_t*)((phi24 << 32 >> 32) + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi29 = (uint8_t)(phi23 >> 8);
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi26 + 4196500) != 45 && phi25 > 4294967295 || phi25 <= 4294967295 && *(uint8_t*)((phi24 << 32 >> 32) + 4196500) != 45)
							{
								*(uint8_t*)phi21 = phi29;
								uint32_t anon30 = getchar();
								anon31 = phi21 + 1;
								phi27 = anon31;
								anon32 = (__zext uint64_t)anon30;
								phi28 = anon32;
								anon36 = anon32 << 56 >> 56;
								uint32_t anon35 = (uint32_t)anon36;
								anon34 = anon35 - 65;
								anon37 = 91 - anon36;
								anon33 = (uint32_t)((__sext int64_t)anon34 * anon37) >> 31 ^ 1;
								anon38 = anon35 - 97;
								if (anon33 == -((uint32_t)((__sext int64_t)anon38 * (123 - anon36) >> 31) & 1 ^ 1))
								{
									break;
								}
							}
							if (anon33 != -((uint32_t)((__sext int64_t)anon38 * (123 - anon36) >> 31) & 1 ^ 1) && (*(uint8_t*)((__sext int64_t)phi26 + 4196500) != 45 && phi25 > 4294967295 || phi25 <= 4294967295 && *(uint8_t*)((phi24 << 32 >> 32) + 4196500) != 45))
							{
								phi21 = anon31;
								phi23 = anon32;
								phi24 = (__zext uint64_t)anon38;
								phi25 = anon34 * (uint32_t)anon37;
								phi26 = anon34;
							}
						}
						phi39 = phi28;
						phi17 = phi39;
						phi40 = phi27;
					}
					if (anon18 == -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1) || anon18 != -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1) && phi27 == anon22)
					{
						phi39 = phi17;
						alloca1.field0 = 119;
						phi40 = (uint64_t)&alloca1.field1;
					}
					uint64_t phi_in41 = phi39;
					*(uint8_t*)phi40 = 97;
					uint64_t anon43 = phi_in41 >> 8;
					uint32_t anon42 = (uint32_t)(anon43 << 24) >> 24;
					uint64_t anon44 = anon43 << 56;
					uint64_t anon45 = anon44 >> 56;
					if (((uint32_t)((__sext int64_t)(91 - anon42) * ((anon44 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon45 - 97) * (__sext int64_t)(123 - anon42) >> 31) & 1 ^ 1))
					{
						uint32_t anon47;
						uint32_t anon49;
						uint32_t anon50;
						uint64_t phi46 = anon45 & 0xffffffff;
						do
						{
							putchar((uint32_t)phi46);
							anon47 = getchar();
							anon49 = anon47 << 24 >> 24;
							uint64_t anon48 = (__zext uint64_t)anon49;
							phi46 = anon48;
							anon50 = (uint32_t)((__sext int64_t)(91 - anon49) * ((anon48 << 32) - 279172874240 >> 32)) >> 31 ^ 1;
						}
						while (anon50 != -((anon49 - 97) * (123 - anon49) >> 31 ^ 1));
						phi_in41 = (__zext uint64_t)anon47;
					}
					uint64_t phi51 = phi_in41;
					*(uint8_t*)(phi40 + 1) = 0;
					uint8_t phi52 = alloca1.field0;
					uint64_t phi_in53 = anon22;
					if (alloca1.field0 != 0)
					{
						uint64_t anon55;
						do
						{
							uint64_t phi54 = phi_in53;
							putchar((__sext int32_t)phi52);
							anon55 = phi54 + 1;
							phi52 = *(uint8_t*)anon55;
							phi_in53 = anon55;
						}
						while (*(uint8_t*)anon55 != 0);
					}
					uint64_t anon57 = phi51 >> 8;
					anon56 = (uint8_t)anon57;
					if (anon56 != 255)
					{
						int32_t anon58 = (__sext int32_t)anon56;
						uint64_t anon59 = anon57 << 56;
						uint64_t anon60 = anon59 >> 56;
						if (((uint32_t)((__sext int64_t)(91 - anon58) * ((anon59 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon60 - 97) * (__sext int64_t)(123 - anon58) >> 31) & 1 ^ 1))
						{
							uint64_t phi61 = (__zext uint64_t)anon58;
							putchar((uint32_t)phi61);
							uint32_t anon62 = getchar();
							if ((uint8_t)anon62 == 255)
							{
								break;
							}
							uint64_t anon65 = (__zext uint64_t)anon62;
							uint64_t anon64 = anon65 << 56;
							uint64_t anon63 = anon64 >> 56;
							else if (((uint32_t)((91 - anon63) * ((anon64 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon63 - 97) * (123 - anon63) >> 31) & 1 ^ 1))
							{
								phi61 = anon63 & 0xffffffff;
							}
							else 
							{
								phi12 = anon65;
								phi13 = (uint32_t)anon63;
								phi15 = anon63;
							}
						}
						else 
						{
							phi12 = phi51;
							phi13 = (uint32_t)anon60;
							phi15 = anon60;
						}
					}
				}
				while (anon56 != 255);
				break;
			}
			if (anon8 != 255 && anon6 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) && anon9 == -((uint32_t)((anon10 - 97) * (123 - anon10) >> 31) & 1 ^ 1))
			{
				phi3 = (uint32_t)anon10;
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
