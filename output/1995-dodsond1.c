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
	uint64_t alloca15;
	uint32_t phi59;
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
			uint64_t phi12;
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
					phi12 = anon11;
					phi13 = anon7;
				}
			}
			else 
			{
				phi12 = (__zext uint64_t)anon2;
				phi13 = anon2;
			}
			if (anon3 != -((anon4 - 97) * (123 - anon4) >> 31 ^ 1) || anon8 != 255 && ((uint32_t)((91 - anon9) * ((anon10 >> 24) - 279172874240 >> 32)) >> 31 ^ 1) != -((uint32_t)((anon9 - 97) * (123 - anon9) >> 31) & 1 ^ 1) && anon3 == -((anon4 - 97) * (123 - anon4) >> 31 ^ 1))
			{
				uint8_t phi68;
				uint64_t phi_in14 = phi12;
				uint32_t anon16 = phi13 >> 8;
				alloca15 = (__zext uint64_t)(anon16 << 24 >> 24);
				uint32_t phi17 = 91;
				uint64_t phi_in18 = phi_in14;
				uint32_t phi19 = anon16;
				uint64_t* phi20 = &alloca5;
				uint64_t phi21 = 91;
				do
				{
					uint64_t anon35;
					uint64_t phi42;
					uint64_t phi53;
					uint64_t phi54;
					uint8_t phi55;
					*phi20 = phi21;
					uint32_t phi22 = phi17;
					uint64_t phi_in23 = phi_in18;
					uint8_t phi24 = (uint8_t)phi19;
					uint64_t phi25 = alloca15;
					uint8_t phi_in26 = phi24;
					uint64_t anon28 = phi25 << 32;
					uint64_t anon29 = anon28 - 279172874240 >> 32;
					uint32_t anon31 = (uint32_t)phi25;
					uint32_t anon30 = phi22 - anon31;
					uint32_t anon27 = ((uint32_t)((anon28 - 416611827712 >> 32) * (123 - phi25 << 32 >> 32)) >> 31 ^ 1) + ((uint32_t)(anon29 * (__sext int64_t)anon30 >> 31) & 1 ^ 1);
					alloca15 = (__zext uint64_t)anon27;
					uint64_t phi_in32 = phi_in23;
					uint8_t phi_in33 = phi_in26;
					if (anon27 != 0)
					{
						uint64_t phi34;
						uint64_t phi41;
						anon35 = (uint64_t)&alloca1;
						phi34 = anon35;
						uint64_t phi36 = phi_in23;
						uint8_t phi37 = phi_in26;
						uint32_t phi38 = anon31 - 65;
						uint32_t phi39 = anon31 - 97;
						uint32_t phi40 = (uint32_t)anon29 * anon30;
						while (true)
						{
							phi41 = phi36;
							if (phi40 > 4294967295)
							{
								phi42 = phi34;
								phi_in33 = phi37;
								if (*(uint8_t*)((__sext int64_t)phi38 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi34 = (uint8_t)((uint32_t)phi41 + 32 >> 8);
								}
							}
							else 
							{
								phi42 = phi34;
								phi_in33 = phi37;
								*(uint8_t*)phi34 = phi37;
								if (*(uint8_t*)((__sext int64_t)phi39 + 4196500) == 45)
								{
									break;
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi39 + 4196500) != 45 && true)
							{
								uint32_t anon43 = getchar();
								uint64_t anon49 = (__zext uint64_t)anon43;
								uint64_t anon48 = anon49 << 56 >> 56;
								uint32_t anon47 = (uint32_t)anon48;
								uint32_t anon46 = anon47 - 65;
								uint32_t anon45 = anon46 * (phi22 - anon47);
								uint32_t anon50 = anon47 - 97;
								uint32_t anon44 = (anon45 >> 31 ^ 1) + ((uint32_t)((__sext int64_t)anon50 * (123 - anon48) >> 31) & 1 ^ 1);
								alloca15 = (__zext uint64_t)anon44;
								uint64_t anon51 = phi34 + 1;
								phi42 = anon51;
								phi41 = anon49;
								uint8_t anon52 = (uint8_t)(anon43 >> 8);
								phi_in33 = anon52;
								phi34 = anon51;
								phi36 = anon49;
								phi37 = anon52;
								phi38 = anon46;
								phi39 = anon50;
								phi40 = anon45;
								if (anon44 == 0)
								{
									break;
								}
							}
						}
						phi_in32 = phi41;
						phi_in32 = phi_in32;
						phi_in33 = phi_in33;
						phi53 = phi42;
						phi54 = phi_in32;
						phi55 = phi_in33;
					}
					if (anon27 != 0 && phi42 == anon35 || anon27 == 0)
					{
						alloca1.field0 = 119;
						phi53 = (uint64_t)&alloca1.field1;
						phi54 = phi_in32;
						phi55 = phi_in33;
					}
					uint64_t phi56 = phi54;
					uint8_t phi57 = phi55;
					*(uint8_t*)phi53 = 97;
					uint32_t phi58 = phi22;
					int32_t anon60 = (__sext int32_t)phi57;
					phi59 = anon60;
					if (((uint32_t)((__sext int64_t)(phi22 - anon60) * (((__zext uint64_t)anon60 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon60 - 97) * (123 - anon60) >> 31 ^ 1))
					{
						uint32_t anon61;
						uint32_t anon62;
						do
						{
							putchar(phi59);
							anon61 = getchar();
							anon62 = anon61 << 24 >> 24;
							phi59 = anon62;
						}
						while (((uint32_t)((__sext int64_t)(phi17 - anon62) * (((__zext uint64_t)anon62 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon62 - 97) * (123 - anon62) >> 31 ^ 1));
						phi58 = phi17;
						phi56 = (__zext uint64_t)anon61;
						phi57 = (uint8_t)(anon61 >> 8);
					}
					phi22 = phi58;
					phi_in23 = phi56;
					uint8_t phi_in63 = phi57;
					*(uint8_t*)(phi53 + 1) = 0;
					uint8_t phi64 = alloca1.field0;
					uint64_t phi_in65 = anon35;
					if (alloca1.field0 != 0)
					{
						uint64_t anon67;
						do
						{
							uint64_t phi66 = phi_in65;
							putchar((__sext int32_t)phi64);
							anon67 = phi66 + 1;
							phi64 = *(uint8_t*)anon67;
							phi_in65 = anon67;
						}
						while (*(uint8_t*)anon67 != 0);
						phi_in63 = (uint8_t)(phi_in23 >> 8);
					}
					phi68 = phi_in63;
					if (phi68 != 255)
					{
						int32_t anon70 = (__sext int32_t)phi68;
						uint64_t anon69 = (__zext uint64_t)anon70;
						alloca15 = anon69;
						uint32_t phi71 = anon70;
						phi24 = phi68;
						phi25 = (__sext int64_t)phi68 & 0xffffffff;
						if (((uint32_t)((__sext int64_t)(phi22 - anon70) * ((anon69 << 32) - 279172874240 >> 32)) >> 31 ^ 1) == -((anon70 - 97) * (123 - anon70) >> 31 ^ 1))
						{
							putchar(phi71);
							uint32_t anon72 = getchar();
							if ((uint8_t)anon72 == 255)
							{
								break;
							}
							else 
							{
								uint64_t anon74 = (__zext uint64_t)anon72;
								uint64_t anon73 = anon74 << 56 >> 56;
								phi71 = (uint32_t)anon73;
								phi17 = *(uint32_t*)&alloca5;
								phi_in18 = anon74;
								phi19 = anon72 >> 8 & 0xff;
								phi20 = &alloca15;
								phi21 = anon73 & 0xffffffff;
							}
						}
					}
				}
				while (phi68 != 255);
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
