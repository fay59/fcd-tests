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
	uint32_t phi58;
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
				uint8_t phi67;
				uint32_t anon15 = phi13 >> 8;
				alloca14 = (__zext uint64_t)(anon15 << 24 >> 24);
				uint32_t phi16 = 91;
				uint64_t phi17 = phi_in12;
				uint32_t phi18 = anon15;
				uint64_t* phi19 = &alloca5;
				*phi19 = 91;
				do
				{
					uint64_t anon33;
					uint64_t phi37;
					uint64_t phi_in38;
					uint8_t phi_in51;
					uint64_t phi52;
					uint64_t phi_in53;
					uint8_t phi54;
					uint64_t phi_in20 = phi17;
					uint32_t phi21 = phi16;
					uint64_t phi22 = phi_in20;
					uint8_t phi23 = (uint8_t)phi18;
					uint64_t phi24 = alloca14;
					uint64_t anon26 = phi24 << 32;
					uint64_t anon27 = anon26 - 279172874240 >> 32;
					uint32_t anon29 = (uint32_t)phi24;
					uint32_t anon28 = phi21 - anon29;
					uint32_t anon25 = ((uint32_t)((anon26 - 416611827712 >> 32) * (123 - phi24 << 32 >> 32)) >> 31 ^ 1) + ((uint32_t)(anon27 * (__sext int64_t)anon28 >> 31) & 1 ^ 1);
					alloca14 = (__zext uint64_t)anon25;
					uint64_t phi30 = phi22;
					uint8_t phi31 = phi23;
					if (anon25 != 0)
					{
						uint64_t phi32;
						uint8_t phi39;
						anon33 = (uint64_t)&alloca1;
						phi32 = anon33;
						uint32_t phi34 = anon29 - 65;
						uint32_t phi35 = anon29 - 97;
						uint32_t phi36 = (uint32_t)anon27 * anon28;
						while (true)
						{
							uint8_t phi40;
							if (phi36 > 4294967295)
							{
								phi37 = phi32;
								phi_in38 = phi22;
								phi39 = phi23;
								if (*(uint8_t*)((__sext int64_t)phi34 + 4196500) == 45)
								{
									break;
								}
								else 
								{
									phi40 = (uint8_t)((uint32_t)phi22 + 32 >> 8);
								}
							}
							else 
							{
								phi37 = phi32;
								phi_in38 = phi22;
								phi39 = phi23;
								phi40 = phi23;
								if (*(uint8_t*)((__sext int64_t)phi35 + 4196500) == 45)
								{
									break;
								}
							}
							if (*(uint8_t*)((__sext int64_t)phi35 + 4196500) != 45 && true)
							{
								*(uint8_t*)phi32 = phi40;
								uint32_t anon41 = getchar();
								uint64_t anon47 = (__zext uint64_t)anon41;
								uint64_t anon46 = anon47 << 56 >> 56;
								uint32_t anon45 = (uint32_t)anon46;
								uint32_t anon44 = anon45 - 65;
								uint32_t anon43 = anon44 * (phi21 - anon45);
								uint32_t anon48 = anon45 - 97;
								uint32_t anon42 = (anon43 >> 31 ^ 1) + ((uint32_t)((__sext int64_t)anon48 * (123 - anon46) >> 31) & 1 ^ 1);
								alloca14 = (__zext uint64_t)anon42;
								uint64_t anon49 = phi32 + 1;
								phi37 = anon49;
								phi_in38 = anon47;
								uint8_t anon50 = (uint8_t)(anon41 >> 8);
								phi39 = anon50;
								phi32 = anon49;
								phi22 = anon47;
								phi23 = anon50;
								phi34 = anon44;
								phi35 = anon48;
								phi36 = anon43;
								if (anon42 == 0)
								{
									break;
								}
							}
						}
						phi_in51 = phi39;
						phi30 = phi_in38;
						phi31 = phi_in51;
						phi52 = phi37;
						phi_in53 = phi_in38;
						phi54 = phi_in51;
					}
					if (anon25 != 0 && phi37 == anon33 || anon25 == 0)
					{
						phi_in38 = phi30;
						phi_in51 = phi31;
						alloca1.field0 = 119;
						phi52 = (uint64_t)&alloca1.field1;
						phi_in53 = phi_in38;
						phi54 = phi_in51;
					}
					*(uint8_t*)phi52 = 97;
					uint32_t phi55 = phi21;
					uint64_t phi56 = phi_in53;
					uint8_t phi57 = phi54;
					int32_t anon59 = (__sext int32_t)phi54;
					phi58 = anon59;
					if (((uint32_t)((__sext int64_t)(phi21 - anon59) * (((__zext uint64_t)anon59 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon59 - 97) * (123 - anon59) >> 31 ^ 1))
					{
						uint32_t anon60;
						uint32_t anon61;
						do
						{
							putchar(phi58);
							anon60 = getchar();
							anon61 = anon60 << 24 >> 24;
							phi58 = anon61;
						}
						while (((uint32_t)((__sext int64_t)(phi16 - anon61) * (((__zext uint64_t)anon61 << 32) - 279172874240 >> 32)) >> 31 ^ 1) != -((anon61 - 97) * (123 - anon61) >> 31 ^ 1));
						phi55 = phi16;
						phi56 = (__zext uint64_t)anon60;
						phi57 = (uint8_t)(anon60 >> 8);
					}
					phi21 = phi55;
					phi22 = phi56;
					uint8_t phi_in62 = phi57;
					*(uint8_t*)(phi52 + 1) = 0;
					uint8_t phi63 = alloca1.field0;
					uint64_t phi_in64 = anon33;
					if (alloca1.field0 != 0)
					{
						uint64_t anon66;
						do
						{
							uint64_t phi65 = phi_in64;
							putchar((__sext int32_t)phi63);
							anon66 = phi65 + 1;
							phi63 = *(uint8_t*)anon66;
							phi_in64 = anon66;
						}
						while (*(uint8_t*)anon66 != 0);
						phi_in62 = (uint8_t)(phi22 >> 8);
					}
					phi67 = phi_in62;
					if (phi67 != 255)
					{
						int32_t anon69 = (__sext int32_t)phi67;
						uint64_t anon68 = (__zext uint64_t)anon69;
						alloca14 = anon68;
						uint32_t phi70 = anon69;
						phi23 = phi67;
						phi24 = (__sext int64_t)phi67 & 0xffffffff;
						if (((uint32_t)((__sext int64_t)(phi21 - anon69) * ((anon68 << 32) - 279172874240 >> 32)) >> 31 ^ 1) == -((anon69 - 97) * (123 - anon69) >> 31 ^ 1))
						{
							putchar(phi70);
							uint32_t anon71 = getchar();
							if ((uint8_t)anon71 == 255)
							{
								break;
							}
							else 
							{
								uint64_t anon73 = (__zext uint64_t)anon71;
								uint64_t anon72 = anon73 << 56 >> 56;
								phi70 = (uint32_t)anon72;
								phi16 = *(uint32_t*)&alloca5;
								phi17 = anon73;
								phi18 = anon71 >> 8 & 0xff;
								phi19 = &alloca14;
								*phi19 = anon72 & 0xffffffff;
							}
						}
					}
				}
				while (phi67 != 255);
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
