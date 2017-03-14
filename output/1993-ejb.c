#include "tests/bin/1993-ejb.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600d08 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint8_t* anon4;
	uint64_t* anon5;
	uint32_t anon6;
	struct { uint32_t field0; bool field1; } anon8;
	uint8_t* anon9;
	uint8_t anon10;
	uint8_t* phi11;
	uint64_t phi13;
	uint64_t* anon16;
	bool phi22;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	uint64_t anon3 = arg1 + 8;
	if (*(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0)
	{
		anon4 = (uint8_t*)0x600db8;
		*anon4 = 0;
		anon5 = (uint64_t*)anon2;
		if (*anon5 == 0)
		{
			anon6 = atoi((uint8_t*)*(uint64_t*)anon3);
			if (anon6 > 127)
			{
				uint32_t anon7 = atoi(*(uint8_t**)anon3);
				anon8 = llvm.ssub.with.overflow.i32(anon7, 127);
				if (!anon8.field1)
				{
					anon9 = (uint8_t*)0x600dc8;
					anon10 = (uint8_t)anon7;
					*anon9 = anon10;
					if (anon10 != 0)
					{
						*anon4 = 0;
						uint8_t* anon12 = (uint8_t*)*anon1;
						phi11 = anon12;
						phi13 = *anon1;
						if (*anon5 == 0)
						{
							uint8_t* phi23;
							uint64_t phi24;
							int64_t anon14 = (__sext int64_t)anon10;
							if ((anon14 & 0x40000000) != 0 | (anon14 & 0x7f) == 0)
							{
								uint64_t phi20;
								uint8_t* anon15 = malloc(-anon14);
								anon16 = (uint64_t*)0x600dd0;
								uint64_t anon17 = (uint64_t)anon15;
								*anon16 = anon17;
								uint64_t phi18 = anon17;
								uint64_t phi_in19 = -anon14;
								do
								{
									phi20 = phi_in19;
									if (phi20 != 0)
									{
										*(uint8_t*)phi18 = 49;
										phi18 = phi18 + 1;
										phi_in19 = phi20 - 1;
									}
								}
								while (phi20 != 0);
								puts(anon15);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon21 = (uint8_t*)*anon1;
								*anon21 = *anon9;
								*(uint8_t*)(*anon1 + 2) = 0;
								phi22 = *anon4 == 0;
								phi23 = anon21;
								phi24 = *anon1;
							}
							else 
							{
								*anon12 = anon10;
								*(uint8_t*)(*anon1 + 3) = 1;
								*(uint8_t*)(*anon1 + 1) = 1;
								*(uint8_t*)(*anon1 + 2) = 2;
								phi22 = 1;
								phi23 = anon12;
								phi24 = *anon1;
							}
							phi11 = phi23;
							phi13 = phi24;
						}
					}
				}
			}
		}
	}
	if (anon6 <= 127 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 == 0 || !anon8.field1 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon10 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon8.field1 || *(uint64_t*)arg1 == 0)
	{
		puts((uint8_t*)0x600d80);
		*anon4 = 1;
	}
	if (*(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0)
	{
		if (*anon5 != 0)
		{
			phi11 = (uint8_t*)anon2;
			phi13 = anon2;
		}
		if (*anon5 != 0 || !anon8.field1 && *anon5 != 0 && *anon5 == 0 && anon6 > 127 && anon10 != 0 || !anon8.field1 && *anon5 == 0 && anon6 > 127 && anon10 != 0 && *anon5 == 0 && phi22)
		{
			if (*(uint8_t*)(phi13 + 3) == 0)
			{
				uint8_t anon25;
				if (*phi11 == 254)
				{
					anon25 = *(uint8_t*)(phi13 + 1) & 1;
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(*anon9 & 0xf ^ 0xf) - (__zext uint64_t)(anon25 ^ 1) & 0xff)) = anon25;
					puts((uint8_t*)*anon16);
					uint8_t anon26 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(*anon9 & 0xf ^ 0xf) - (__zext uint64_t)anon26 & 0xff)) = anon26;
					puts((uint8_t*)*anon16);
				}
				else 
				{
					uint8_t* anon29;
					uint8_t phi31;
					uint64_t phi32;
					uint8_t* anon33;
					uint8_t* anon34;
					uint8_t phi39;
					uint8_t* phi40;
					uint8_t phi41;
					*phi11 = 2 - anon25 + *phi11;
					main(4195819, arg1);
					uint8_t* anon28 = (uint8_t*)(*anon1 + 1);
					uint8_t anon27 = *anon28 & 1;
					if (anon27 == 0)
					{
						anon29 = (uint8_t*)*anon1;
						uint8_t anon30 = *anon29 - 2;
						*anon29 = anon30;
						phi31 = anon30;
						phi32 = *anon1;
						anon33 = (uint8_t*)*anon1;
						*anon33 = *anon33 + 2;
						anon34 = (uint8_t*)(*anon1 + 1);
						*anon34 = 1;
						main(4196225, arg1);
						uint8_t* anon35 = (uint8_t*)(*anon1 + 1);
						uint8_t anon36 = *anon35 ^ 1;
						*anon35 = anon36;
						uint8_t* anon37 = (uint8_t*)*anon1;
						uint8_t anon38 = anon36 - 2;
						*anon37 = anon38;
						phi39 = anon38;
						phi40 = anon37;
						phi41 = anon36;
					}
					else 
					{
						*anon29 = (*anon29 & 0xf) + 1;
						*anon28 = anon27 ^ 1;
						main(4195870, arg1);
						uint8_t* anon42 = (uint8_t*)(*anon1 + 1);
						uint8_t anon43 = *anon42 ^ 1;
						*anon42 = anon43;
						uint8_t anon44 = anon43 - 2;
						*(uint8_t*)*anon1 = anon44;
						phi31 = anon44;
						phi32 = *anon1;
					}
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(phi31 & 0xf) - (__zext uint64_t)(*anon9 & 0xf) & 0xff)) = *(uint8_t*)(phi32 + 1);
					puts((uint8_t*)*anon16);
					phi39 = *anon33;
					phi40 = anon33;
					phi41 = *anon34;
					*phi40 = (phi41 & 1) + phi39 + 1;
					main(4195974, arg1);
					uint8_t* anon45 = (uint8_t*)*anon1;
					*anon45 = (*anon45 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon46 = (uint8_t*)0x600db9;
				uint8_t* anon48 = (uint8_t*)(phi13 + 2);
				uint8_t anon47 = 6 - *anon48 + *(uint8_t*)(phi13 + 1);
				*anon46 = anon47;
				uint8_t anon49 = *phi11 & 0xf;
				if (anon49 != 1)
				{
					*anon48 = anon47;
					*(uint8_t*)phi13 = anon49 - 1;
					main(4196059, arg1);
					uint8_t* anon50 = (uint8_t*)*anon1;
					*anon50 = *anon50 + 1;
					uint8_t* anon51 = (uint8_t*)(*anon1 + 2);
					*anon51 = *anon48;
					*anon46 = *anon51;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon53 = (uint8_t*)*anon1;
				uint8_t anon52 = *anon53 & 0xf;
				if (anon52 != 1)
				{
					uint8_t anon54 = anon52 - 1;
					*anon53 = anon54;
					uint8_t* anon55 = (uint8_t*)(*anon1 + 1);
					*anon55 = anon54;
					main(4196161, arg1);
					uint8_t* anon56 = (uint8_t*)*anon1;
					*anon56 = *anon56 + 1;
					uint8_t* anon57 = (uint8_t*)(*anon1 + 1);
					*anon57 = *anon55;
					*anon46 = *anon57;
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
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004e0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400960, (void(*)())0x4009d0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600db0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196642);
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
	_init(4196755);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600b20)(arg1 & 0xffffffff, arg2, arg3);
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
