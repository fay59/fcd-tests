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
				uint8_t anon55;
				uint64_t phi12 = (__zext uint64_t)phi5;
				uint32_t anon14 = phi5 >> 8;
				phi13 = anon14 << 24 >> 24;
				uint64_t phi15 = (__zext uint64_t)anon14 << 56 >> 56;
				do
				{
					uint64_t anon21;
					uint64_t phi26;
					uint64_t phi_in37;
					uint64_t phi38;
					uint64_t phi39;
					uint64_t phi16 = phi12;
					uint32_t anon17 = (uint32_t)(((phi15 << 32) - 416611827712 >> 32) * (__sext int64_t)(123 - phi13)) >> 31 ^ 1;
					uint32_t anon18 = (uint32_t)phi15 - 65;
					uint32_t anon19 = 91 - phi13;
					if (anon17 != -((uint32_t)((__sext int64_t)anon18 * (__sext int64_t)anon19 >> 31) & 1 ^ 1))
					{
						uint64_t phi20;
						uint64_t phi25;
						anon21 = (uint64_t)&alloca1;
						phi20 = anon21;
						uint64_t phi22 = phi15 + 4294967199 & 0xffffffff;
						uint32_t phi23 = anon18 * anon19;
						uint32_t phi24 = anon18;
						while (true)
						{
							uint8_t phi27;
							uint64_t anon29;
							uint64_t anon30;
							uint32_t anon31;
							uint32_t anon32;
							uint64_t anon34;
							uint64_t anon35;
							uint32_t anon36;
							phi25 = phi12;
							if (phi23 > 4294967295)
							{
								phi26 = phi20;
								if (*(uint8_t*)((__sext int64_t)phi24 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi27 = (uint8_t)((uint32_t)phi25 + 32 >> 8);
								}
							}
							else 
							{
								phi26 = phi20;
								if (*(uint8_t*)((phi22 << 32 >> 32) + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi27 = (uint8_t)(phi25 >> 8);
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi24 + 4196500) != 45 && phi23 > 4294967295 || phi23 <= 4294967295 && *(uint8_t*)((phi22 << 32 >> 32) + 4196500) != 45)
							{
								*(uint8_t*)phi20 = phi27;
								uint32_t anon28 = getchar();
								anon29 = phi20 + 1;
								phi26 = anon29;
								anon30 = (__zext uint64_t)anon28;
								phi25 = anon30;
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
							if (anon31 != -((uint32_t)((__sext int64_t)anon36 * (123 - anon34) >> 31) & 1 ^ 1) && (*(uint8_t*)((__sext int64_t)phi24 + 4196500) != 45 && phi23 > 4294967295 || phi23 <= 4294967295 && *(uint8_t*)((phi22 << 32 >> 32) + 4196500) != 45))
							{
								phi20 = anon29;
								phi12 = anon30;
								phi22 = (__zext uint64_t)anon36;
								phi23 = anon32 * (uint32_t)anon35;
								phi24 = anon32;
							}
						}
						phi_in37 = phi25;
						phi16 = phi_in37;
						phi38 = phi26;
						phi39 = phi_in37;
					}
					if (anon17 == -((uint32_t)((__sext int64_t)anon18 * (__sext int64_t)anon19 >> 31) & 1 ^ 1) || anon17 != -((uint32_t)((__sext int64_t)anon18 * (__sext int64_t)anon19 >> 31) & 1 ^ 1) && phi26 == anon21)
					{
						phi_in37 = phi16;
						alloca1.field0 = 119;
						phi38 = (uint64_t)&alloca1.field1;
						phi39 = phi_in37;
					}
					uint64_t phi_in40 = phi39;
					*(uint8_t*)phi38 = 97;
					uint64_t anon42 = phi_in40 >> 8;
					uint32_t anon41 = (uint32_t)(anon42 << 24) >> 24;
					uint64_t anon43 = anon42 << 56;
					uint64_t anon44 = anon43 >> 56;
					if (((uint32_t)((__sext int64_t)(91 - anon41) * ((anon43 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon44 - 97) * (__sext int64_t)(123 - anon41) >> 31) & 1 ^ 1))
					{
						uint32_t anon46;
						uint32_t anon48;
						uint32_t anon49;
						uint64_t phi45 = anon44 & 0xffffffff;
						do
						{
							putchar((uint32_t)phi45);
							anon46 = getchar();
							anon48 = anon46 << 24 >> 24;
							uint64_t anon47 = (__zext uint64_t)anon48;
							phi45 = anon47;
							anon49 = (uint32_t)((__sext int64_t)(91 - anon48) * ((anon47 << 32) - 279172874240 >> 32)) >> 31 ^ 1;
						}
						while (anon49 != -((anon48 - 97) * (123 - anon48) >> 31 ^ 1));
						phi_in40 = (__zext uint64_t)anon46;
					}
					uint64_t phi50 = phi_in40;
					*(uint8_t*)(phi38 + 1) = 0;
					uint8_t phi51 = alloca1.field0;
					uint64_t phi_in52 = anon21;
					if (alloca1.field0 != 0)
					{
						uint64_t anon54;
						do
						{
							uint64_t phi53 = phi_in52;
							putchar((__sext int32_t)phi51);
							anon54 = phi53 + 1;
							phi51 = *(uint8_t*)anon54;
							phi_in52 = anon54;
						}
						while (*(uint8_t*)anon54 != 0);
					}
					uint64_t anon56 = phi50 >> 8;
					anon55 = (uint8_t)anon56;
					if (anon55 != 255)
					{
						int32_t anon57 = (__sext int32_t)anon55;
						uint64_t anon58 = anon56 << 56;
						uint64_t anon59 = anon58 >> 56;
						if (((uint32_t)((__sext int64_t)(91 - anon57) * ((anon58 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon59 - 97) * (__sext int64_t)(123 - anon57) >> 31) & 1 ^ 1))
						{
							uint64_t phi60 = (__zext uint64_t)anon57;
							putchar((uint32_t)phi60);
							uint32_t anon61 = getchar();
							if ((uint8_t)anon61 == 255)
							{
								break;
							}
							uint64_t anon64 = (__zext uint64_t)anon61;
							uint64_t anon63 = anon64 << 56;
							uint64_t anon62 = anon63 >> 56;
							else if (((uint32_t)((91 - anon62) * ((anon63 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon62 - 97) * (123 - anon62) >> 31) & 1 ^ 1))
							{
								phi60 = anon62 & 0xffffffff;
							}
							else 
							{
								phi12 = anon64;
								phi13 = (uint32_t)anon62;
								phi15 = anon62;
							}
						}
						else 
						{
							phi12 = phi50;
							phi13 = (uint32_t)anon59;
							phi15 = anon59;
						}
					}
				}
				while (anon55 != 255);
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
