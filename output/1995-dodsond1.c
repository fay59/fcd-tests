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
				uint8_t anon54;
				uint64_t phi12 = (__zext uint64_t)phi5;
				uint32_t anon14 = phi5 >> 8;
				phi13 = anon14 << 24 >> 24;
				uint64_t phi15 = (__zext uint64_t)anon14 << 56 >> 56;
				do
				{
					uint64_t anon22;
					uint64_t phi26;
					uint64_t phi37;
					uint64_t phi_in38;
					uint64_t phi16 = phi12;
					uint64_t phi17 = phi16;
					uint32_t anon18 = (uint32_t)(((phi15 << 32) - 416611827712 >> 32) * (__sext int64_t)(123 - phi13)) >> 31 ^ 1;
					uint32_t anon19 = (uint32_t)phi15 - 65;
					uint32_t anon20 = 91 - phi13;
					if (anon18 != -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1))
					{
						uint64_t phi21;
						anon22 = (uint64_t)&alloca1;
						phi21 = anon22;
						uint64_t phi23 = phi15 + 4294967199 & 0xffffffff;
						uint32_t phi24 = anon19 * anon20;
						uint32_t phi25 = anon19;
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
							if (phi24 > 4294967295)
							{
								phi26 = phi21;
								phi17 = phi16;
								if (*(uint8_t*)((__sext int64_t)phi25 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi27 = (uint8_t)((uint32_t)phi16 + 32 >> 8);
								}
							}
							else 
							{
								phi26 = phi21;
								phi17 = phi16;
								if (*(uint8_t*)((phi23 << 32 >> 32) + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi27 = (uint8_t)(phi16 >> 8);
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi25 + 4196500) != 45 && phi24 > 4294967295 || phi24 <= 4294967295 && *(uint8_t*)((phi23 << 32 >> 32) + 4196500) != 45)
							{
								*(uint8_t*)phi21 = phi27;
								uint32_t anon28 = getchar();
								anon29 = phi21 + 1;
								phi26 = anon29;
								anon30 = (__zext uint64_t)anon28;
								phi17 = anon30;
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
								if (*(uint8_t*)((__sext int64_t)phi25 + 4196500) != 45 && phi24 > 4294967295 || phi24 <= 4294967295 && *(uint8_t*)((phi23 << 32 >> 32) + 4196500) != 45)
								{
									phi21 = anon29;
									phi16 = anon30;
									phi23 = (__zext uint64_t)anon36;
									phi24 = anon32 * (uint32_t)anon35;
									phi25 = anon32;
								}
							}
						}
						phi37 = phi26;
						phi_in38 = phi17;
					}
					if (anon18 == -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1) || anon18 != -((uint32_t)((__sext int64_t)anon19 * (__sext int64_t)anon20 >> 31) & 1 ^ 1) && phi26 == anon22)
					{
						uint64_t phi_in39 = phi17;
						alloca1.field0 = 119;
						phi37 = (uint64_t)&alloca1.field1;
						phi_in38 = phi_in39;
					}
					*(uint8_t*)phi37 = 97;
					uint64_t anon41 = phi_in38 >> 8;
					uint32_t anon40 = (uint32_t)(anon41 << 24) >> 24;
					uint64_t anon42 = anon41 << 56;
					uint64_t anon43 = anon42 >> 56;
					if (((uint32_t)((__sext int64_t)(91 - anon40) * ((anon42 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon43 - 97) * (__sext int64_t)(123 - anon40) >> 31) & 1 ^ 1))
					{
						uint32_t anon46;
						uint32_t anon47;
						uint32_t anon48;
						uint64_t phi44 = anon43 & 0xffffffff;
						do
						{
							putchar((uint32_t)phi44);
							anon47 = getchar();
							anon46 = anon47 << 24 >> 24;
							uint64_t anon45 = (__zext uint64_t)anon46;
							phi44 = anon45;
							anon48 = (uint32_t)((__sext int64_t)(91 - anon46) * ((anon45 << 32) - 279172874240 >> 32)) >> 31 ^ 1;
						}
						while (anon48 != -((anon46 - 97) * (123 - anon46) >> 31 ^ 1));
						phi_in38 = (__zext uint64_t)anon47;
					}
					uint64_t phi49 = phi_in38;
					*(uint8_t*)(phi37 + 1) = 0;
					uint8_t phi50 = alloca1.field0;
					uint64_t phi_in51 = anon22;
					if (alloca1.field0 != 0)
					{
						uint64_t anon53;
						do
						{
							uint64_t phi52 = phi_in51;
							putchar((__sext int32_t)phi50);
							anon53 = phi52 + 1;
							phi50 = *(uint8_t*)anon53;
							phi_in51 = anon53;
						}
						while (*(uint8_t*)anon53 != 0);
					}
					uint64_t anon55 = phi49 >> 8;
					anon54 = (uint8_t)anon55;
					if (anon54 != 255)
					{
						int32_t anon56 = (__sext int32_t)anon54;
						uint64_t anon57 = anon55 << 56;
						uint64_t anon58 = anon57 >> 56;
						if (((uint32_t)((__sext int64_t)(91 - anon56) * ((anon57 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon58 - 97) * (__sext int64_t)(123 - anon56) >> 31) & 1 ^ 1))
						{
							uint64_t phi59 = (__zext uint64_t)anon56;
							putchar((uint32_t)phi59);
							uint32_t anon60 = getchar();
							if ((uint8_t)anon60 == 255)
							{
								break;
							}
							uint64_t anon63 = (__zext uint64_t)anon60;
							uint64_t anon62 = anon63 << 56;
							uint64_t anon61 = anon62 >> 56;
							else if (((uint32_t)((91 - anon61) * ((anon62 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) == -((uint32_t)((anon61 - 97) * (123 - anon61) >> 31) & 1 ^ 1))
							{
								phi59 = anon61 & 0xffffffff;
							}
							else 
							{
								phi12 = anon63;
								phi13 = (uint32_t)anon61;
								phi15 = anon61;
							}
						}
						else 
						{
							phi12 = phi49;
							phi13 = (uint32_t)anon58;
							phi15 = anon58;
						}
					}
				}
				while (anon54 != 255);
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
