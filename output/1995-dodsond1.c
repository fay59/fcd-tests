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
	uint32_t phi57;
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
				uint8_t phi66;
				uint64_t phi_in14 = phi12;
				uint32_t anon16 = phi13 >> 8;
				alloca15 = (__zext uint64_t)(anon16 << 24 >> 24);
				uint32_t phi17 = 91;
				uint64_t phi18 = phi_in14;
				uint32_t phi19 = anon16;
				uint64_t* phi20 = &alloca5;
				*phi20 = 91;
				do
				{
					uint64_t anon34;
					uint8_t phi_in40;
					uint64_t phi51;
					uint64_t phi52;
					uint8_t phi53;
					uint32_t phi21 = phi17;
					uint8_t phi22 = (uint8_t)phi19;
					uint64_t phi23 = alloca15;
					uint64_t phi24 = phi18;
					uint8_t phi25 = phi22;
					uint64_t anon27 = phi23 << 32;
					uint64_t anon28 = anon27 - 279172874240 >> 32;
					uint32_t anon30 = (uint32_t)phi23;
					uint32_t anon29 = phi21 - anon30;
					uint32_t anon26 = ((uint32_t)((anon27 - 416611827712 >> 32) * (123 - phi23 << 32 >> 32)) >> 31 ^ 1) + ((uint32_t)(anon28 * (__sext int64_t)anon29 >> 31) & 1 ^ 1);
					alloca15 = (__zext uint64_t)anon26;
					uint64_t phi31 = phi24;
					uint8_t phi32 = phi25;
					if (anon26 != 0)
					{
						uint64_t phi33;
						uint64_t phi38;
						uint64_t phi39;
						anon34 = (uint64_t)&alloca1;
						phi33 = anon34;
						uint32_t phi35 = anon30 - 65;
						uint32_t phi36 = anon30 - 97;
						uint32_t phi37 = (uint32_t)anon28 * anon29;
						while (true)
						{
							if (phi37 > 4294967295)
							{
								phi38 = phi33;
								phi39 = phi24;
								phi_in40 = phi25;
								if (*(uint8_t*)((__sext int64_t)phi35 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									*(uint8_t*)phi33 = (uint8_t)((uint32_t)phi24 + 32 >> 8);
								}
							}
							else 
							{
								phi38 = phi33;
								phi39 = phi24;
								phi_in40 = phi25;
								*(uint8_t*)phi33 = phi25;
								if (*(uint8_t*)((__sext int64_t)phi36 + 4196500) == 45)
								{
									break;
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi36 + 4196500) != 45 && true)
							{
								uint32_t anon41 = getchar();
								uint64_t anon47 = (__zext uint64_t)anon41;
								uint64_t anon46 = anon47 << 56 >> 56;
								uint32_t anon45 = (uint32_t)anon46;
								uint32_t anon44 = anon45 - 65;
								uint32_t anon43 = anon44 * (phi21 - anon45);
								uint32_t anon48 = anon45 - 97;
								uint32_t anon42 = (anon43 >> 31 ^ 1) + ((uint32_t)((__sext int64_t)anon48 * (123 - anon46) >> 31) & 1 ^ 1);
								alloca15 = (__zext uint64_t)anon42;
								uint64_t anon49 = phi33 + 1;
								phi38 = anon49;
								phi39 = anon47;
								uint8_t anon50 = (uint8_t)(anon41 >> 8);
								phi_in40 = anon50;
								phi33 = anon49;
								phi24 = anon47;
								phi25 = anon50;
								phi35 = anon44;
								phi36 = anon48;
								phi37 = anon43;
								if (anon42 == 0)
								{
									break;
								}
							}
						}
						phi51 = phi38;
						phi52 = phi39;
						phi31 = phi52;
						phi32 = phi_in40;
						phi53 = phi_in40;
					}
					if (anon26 != 0 && phi51 == anon34 || anon26 == 0)
					{
						phi52 = phi31;
						phi_in40 = phi32;
						alloca1.field0 = 119;
						phi51 = (uint64_t)&alloca1.field1;
						phi53 = phi_in40;
					}
					uint64_t phi_in54 = phi52;
					uint8_t phi55 = phi53;
					*(uint8_t*)phi51 = 97;
					uint32_t phi56 = phi21;
					phi18 = phi_in54;
					int32_t anon58 = (__sext int32_t)phi55;
					phi57 = anon58;
					if (((uint32_t)((__sext int64_t)(phi21 - anon58) * (((__zext uint64_t)anon58 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon58 - 97) * (123 - anon58) >> 31 ^ 1))
					{
						uint32_t anon59;
						uint32_t anon60;
						do
						{
							putchar(phi57);
							anon59 = getchar();
							anon60 = anon59 << 24 >> 24;
							phi57 = anon60;
						}
						while (((uint32_t)((__sext int64_t)(phi17 - anon60) * (((__zext uint64_t)anon60 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon60 - 97) * (123 - anon60) >> 31 ^ 1));
						phi56 = phi17;
						phi18 = (__zext uint64_t)anon59;
						phi55 = (uint8_t)(anon59 >> 8);
					}
					uint8_t phi_in61 = phi55;
					*(uint8_t*)(phi51 + 1) = 0;
					uint8_t phi62 = alloca1.field0;
					uint64_t phi_in63 = anon34;
					if (alloca1.field0 != 0)
					{
						uint64_t anon65;
						do
						{
							uint64_t phi64 = phi_in63;
							putchar((__sext int32_t)phi62);
							anon65 = phi64 + 1;
							phi62 = *(uint8_t*)anon65;
							phi_in63 = anon65;
						}
						while (*(uint8_t*)anon65 != 0);
						phi_in61 = (uint8_t)(phi18 >> 8);
					}
					phi66 = phi_in61;
					if (phi66 != 255)
					{
						int32_t anon68 = (__sext int32_t)phi66;
						uint64_t anon67 = (__zext uint64_t)anon68;
						alloca15 = anon67;
						uint32_t phi69 = anon68;
						phi21 = phi56;
						phi22 = phi66;
						phi23 = (__sext int64_t)phi66 & 0xffffffff;
						if (((uint32_t)((__sext int64_t)(phi56 - anon68) * ((anon67 << 32) - 279172874240 >> 32)) >> 31 ^ 1) == -((anon68 - 97) * (123 - anon68) >> 31 ^ 1))
						{
							putchar(phi69);
							uint32_t anon70 = getchar();
							if ((uint8_t)anon70 == 255)
							{
								break;
							}
							else 
							{
								uint64_t anon72 = (__zext uint64_t)anon70;
								uint64_t anon71 = anon72 << 56 >> 56;
								phi69 = (uint32_t)anon71;
								phi17 = *(uint32_t*)&alloca5;
								phi18 = anon72;
								phi19 = anon70 >> 8 & 0xff;
								phi20 = &alloca15;
								*phi20 = anon71 & 0xffffffff;
							}
						}
					}
				}
				while (phi66 != 255);
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
