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
	uint8_t* anon3;
	uint64_t* anon7;
	uint32_t anon8;
	struct { uint32_t field0; bool field1; } anon10;
	uint8_t anon12;
	uint64_t phi_in21;
	uint64_t phi_in22;
	uint64_t phi23;
	uint64_t phi24;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	if (*(uint64_t*)arg1 != 0 && anon2 != 0)
	{
		uint8_t* phi_in5;
		uint8_t* anon11;
		uint64_t* anon19;
		anon3 = (uint8_t*)0x600db8;
		*anon3 = 0;
		uint64_t phi_in4 = anon2;
		uint8_t* anon6 = (uint8_t*)anon2;
		phi_in5 = anon6;
		anon7 = (uint64_t*)anon2;
		if (*anon7 == 0)
		{
			anon8 = atoi(anon6);
			if (anon8 > 127)
			{
				uint32_t anon9 = atoi(*(uint8_t**)(arg1 + 8));
				anon10 = llvm.ssub.with.overflow.i32(anon9, 127);
				if (!anon10.field1)
				{
					anon11 = (uint8_t*)0x600dc8;
					anon12 = (uint8_t)anon9;
					*anon11 = anon12;
					if (anon12 != 0)
					{
						*anon3 = 0;
						phi_in4 = anon2;
						uint8_t* anon13 = (uint8_t*)anon2;
						phi_in5 = anon13;
						if (*anon7 == 0)
						{
							uint64_t phi_in15;
							uint8_t phi_in16;
							uint8_t* phi_in17;
							int64_t anon14 = (__sext int64_t)anon12;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon13 = anon12;
								*(uint8_t*)(arg1 + 19) = 1;
								*(uint8_t*)(arg1 + 17) = 1;
								phi_in15 = anon2;
								phi_in16 = 2;
								phi_in17 = anon13;
							}
							else 
							{
								uint8_t* anon18 = malloc(-anon14);
								anon19 = (uint64_t*)0x600dd0;
								uint64_t anon20 = (uint64_t)anon18;
								*anon19 = anon20;
								phi_in21 = anon20;
								phi_in22 = -anon14;
								phi23 = phi_in21;
								phi24 = phi_in22;
								if (phi24 == 0)
								{
									puts(anon18);
									*(uint8_t*)(*anon1 + 1) = 48;
									*(uint8_t*)(*anon1 + 3) = 0;
									uint8_t* anon25 = (uint8_t*)*anon1;
									*anon25 = *anon11;
									phi_in15 = *anon1;
									phi_in16 = 0;
									phi_in17 = anon25;
								}
							}
							uint64_t phi26 = phi_in15;
							uint8_t phi27 = phi_in16;
							uint8_t* phi28 = phi_in17;
							*(uint8_t*)(phi26 + 2) = phi27;
							phi_in4 = phi26;
							phi_in5 = phi28;
						}
					}
				}
			}
		}
		if (*anon7 != 0 || !anon10.field1 && *anon7 != 0 && *anon7 == 0 && anon8 > 127 && anon12 != 0 || !anon10.field1 && *anon7 == 0 && anon8 > 127 && anon12 != 0 && *anon7 == 0 && *anon3 == 0)
		{
			uint64_t phi29 = phi_in4;
			uint8_t* phi30 = phi_in5;
			if (*(uint8_t*)(phi29 + 3) == 0)
			{
				uint8_t anon31;
				if (*phi30 == 254)
				{
					anon31 = *(uint8_t*)(phi29 + 1) & 1;
					*(uint8_t*)(*anon19 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)(anon31 ^ 1) & 0xff)) = anon31;
					puts((uint8_t*)*anon19);
					uint8_t anon32 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon19 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)anon32 & 0xff)) = anon32;
					puts((uint8_t*)*anon19);
				}
				else 
				{
					uint8_t* anon35;
					uint8_t phi_in37;
					uint64_t phi_in38;
					uint8_t phi_in44;
					uint8_t phi_in47;
					*(uint8_t*)phi29 = 2 - anon31 + *phi30;
					main(4195819, arg1);
					uint8_t* anon34 = (uint8_t*)(*anon1 + 1);
					uint8_t anon33 = *anon34 & 1;
					if (anon33 == 0)
					{
						anon35 = (uint8_t*)*anon1;
						uint8_t anon36 = *anon35 - 2;
						*anon35 = anon36;
						phi_in37 = anon36;
						phi_in38 = *anon1;
					}
					else 
					{
						*anon35 = (*anon35 & 0xf) + 1;
						*anon34 = anon33 ^ 1;
						main(4195870, arg1);
						uint8_t* anon39 = (uint8_t*)(*anon1 + 1);
						uint8_t anon40 = *anon39 ^ 1;
						*anon39 = anon40;
						uint8_t anon41 = anon40 - 2;
						*(uint8_t*)*anon1 = anon41;
						phi_in37 = anon41;
						phi_in38 = *anon1;
					}
					uint8_t phi42 = phi_in37;
					uint64_t phi43 = phi_in38;
					*(uint8_t*)(*anon19 + ((__zext uint64_t)(phi42 & 0xf) - (__zext uint64_t)(*anon11 & 0xf) & 0xff)) = *(uint8_t*)(phi43 + 1);
					puts((uint8_t*)*anon19);
					uint8_t* anon45 = (uint8_t*)*anon1;
					phi_in44 = *anon45;
					uint8_t* phi_in46 = anon45;
					uint8_t* anon48 = (uint8_t*)(*anon1 + 1);
					phi_in47 = *anon48;
					if ((*anon48 & 1) == 0)
					{
						*anon45 = *anon45 + 2;
						*anon48 = 1;
						main(4196225, arg1);
						uint8_t* anon49 = (uint8_t*)(*anon1 + 1);
						uint8_t anon50 = *anon49 ^ 1;
						*anon49 = anon50;
						uint8_t* anon51 = (uint8_t*)*anon1;
						uint8_t anon52 = anon50 - 2;
						*anon51 = anon52;
						phi_in44 = anon52;
						phi_in46 = anon51;
						phi_in47 = anon50;
					}
					uint8_t phi53 = phi_in44;
					uint8_t* phi54 = phi_in46;
					uint8_t phi55 = phi_in47;
					*phi54 = (phi55 & 1) + phi53 + 1;
					main(4195974, arg1);
					uint8_t* anon56 = (uint8_t*)*anon1;
					*anon56 = (*anon56 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon57 = (uint8_t*)0x600db9;
				uint8_t* anon59 = (uint8_t*)(phi29 + 2);
				uint8_t anon58 = 6 - *anon59 + *(uint8_t*)(phi29 + 1);
				*anon57 = anon58;
				uint8_t anon60 = *phi30 & 0xf;
				if (anon60 != 1)
				{
					*anon59 = anon58;
					*(uint8_t*)phi29 = anon60 - 1;
					main(4196059, arg1);
					uint8_t* anon61 = (uint8_t*)*anon1;
					*anon61 = *anon61 + 1;
					uint8_t* anon62 = (uint8_t*)(*anon1 + 2);
					*anon62 = *anon59;
					*anon57 = *anon62;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon64 = (uint8_t*)*anon1;
				uint8_t anon63 = *anon64 & 0xf;
				if (anon63 != 1)
				{
					uint8_t anon65 = anon63 - 1;
					*anon64 = anon65;
					uint8_t* anon66 = (uint8_t*)(*anon1 + 1);
					*anon66 = anon65;
					main(4196161, arg1);
					uint8_t* anon67 = (uint8_t*)*anon1;
					*anon67 = *anon67 + 1;
					uint8_t* anon68 = (uint8_t*)(*anon1 + 1);
					*anon68 = *anon66;
					*anon57 = *anon68;
				}
			}
		}
	}
	*(uint8_t*)phi23 = 49;
	phi_in21 = phi23 + 1;
	phi_in22 = phi24 - 1;
	if (*(uint64_t*)arg1 == 0 || *(uint64_t*)arg1 != 0 && anon2 == 0 || *(uint64_t*)arg1 != 0 && anon2 != 0 && anon8 <= 127 && *anon7 == 0 || *(uint64_t*)arg1 != 0 && anon2 != 0 && *anon7 == 0 && anon8 > 127 && anon10.field1 || *(uint64_t*)arg1 != 0 && anon2 != 0 && !anon10.field1 && *anon7 == 0 && anon8 > 127 && anon12 == 0)
	{
		puts((uint8_t*)0x600d80);
		*anon3 = 1;
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
