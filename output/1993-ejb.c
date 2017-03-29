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
	bool anon9;
	uint8_t anon12;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	if (*(uint64_t*)arg1 != 0 && anon2 != 0)
	{
		uint8_t* phi5;
		uint8_t* anon11;
		uint64_t* anon16;
		anon3 = (uint8_t*)0x600db8;
		*anon3 = 0;
		uint64_t phi4 = anon2;
		uint8_t* anon6 = (uint8_t*)anon2;
		phi5 = anon6;
		anon7 = (uint64_t*)anon2;
		if (*anon7 == 0)
		{
			anon8 = atoi(anon6);
			if (anon8 > 127)
			{
				uint32_t anon10 = atoi(*(uint8_t**)(arg1 + 8));
				anon9 = llvm.ssub.with.overflow.i32(anon10, 127).field1;
				if (!anon9)
				{
					anon11 = (uint8_t*)0x600dc8;
					anon12 = (uint8_t)anon10;
					*anon11 = anon12;
					if (anon12 != 0)
					{
						*anon3 = 0;
						phi4 = anon2;
						uint8_t* anon13 = (uint8_t*)anon2;
						phi5 = anon13;
						if (*anon7 == 0)
						{
							uint8_t* phi15;
							int64_t anon14 = (__sext int64_t)anon12;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon13 = anon12;
								*(uint8_t*)(arg1 + 19) = 1;
								*(uint8_t*)(arg1 + 17) = 1;
								phi4 = anon2;
								*(uint8_t*)(phi4 + 2) = 2;
								phi15 = anon13;
							}
							else 
							{
								anon16 = (uint64_t*)0x600dd0;
								uint8_t* anon18 = malloc(-anon14);
								uint64_t anon17 = (uint64_t)anon18;
								*anon16 = anon17;
								uint64_t phi19 = anon17;
								uint64_t phi20 = -anon14;
								while (phi20 != 0)
								{
									*(uint8_t*)phi19 = 49;
									phi19 = phi19 + 1;
									phi20 = phi20 - 1;
								}
								puts(anon18);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon21 = (uint8_t*)*anon1;
								*anon21 = *anon11;
								phi4 = *anon1;
								*(uint8_t*)(phi4 + 2) = 0;
								phi15 = anon21;
							}
							uint8_t* phi_in22 = phi15;
							phi5 = phi_in22;
						}
					}
				}
			}
		}
		if (*anon7 != 0 || !anon9 && anon12 != 0 && anon8 > 127 && (*anon7 != 0 || *anon3 == 0))
		{
			if (*(uint8_t*)(phi4 + 3) == 0)
			{
				uint8_t anon23;
				if (*phi5 == 254)
				{
					anon23 = *(uint8_t*)(phi4 + 1) & 1;
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)(anon23 ^ 1) & 0xff)) = anon23;
					puts((uint8_t*)*anon16);
					uint8_t anon24 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)anon24 & 0xff)) = anon24;
					puts((uint8_t*)*anon16);
				}
				else 
				{
					uint8_t* anon27;
					uint8_t phi29;
					uint64_t phi30;
					uint8_t phi34;
					uint8_t phi37;
					*(uint8_t*)phi4 = 2 - anon23 + *phi5;
					main(4195819, arg1);
					uint8_t* anon26 = (uint8_t*)(*anon1 + 1);
					uint8_t anon25 = *anon26 & 1;
					if (anon25 == 0)
					{
						anon27 = (uint8_t*)*anon1;
						uint8_t anon28 = *anon27 - 2;
						*anon27 = anon28;
						phi29 = anon28;
						phi30 = *anon1;
					}
					else 
					{
						*anon27 = (*anon27 & 0xf) + 1;
						*anon26 = anon25 ^ 1;
						main(4195870, arg1);
						uint8_t* anon31 = (uint8_t*)(*anon1 + 1);
						uint8_t anon32 = *anon31 ^ 1;
						*anon31 = anon32;
						uint8_t anon33 = anon32 - 2;
						*(uint8_t*)*anon1 = anon33;
						phi29 = anon33;
						phi30 = *anon1;
					}
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(phi29 & 0xf) - (__zext uint64_t)(*anon11 & 0xf) & 0xff)) = *(uint8_t*)(phi30 + 1);
					puts((uint8_t*)*anon16);
					uint8_t* anon35 = (uint8_t*)*anon1;
					phi34 = *anon35;
					uint8_t* phi36 = anon35;
					uint8_t* anon38 = (uint8_t*)(*anon1 + 1);
					phi37 = *anon38;
					if ((*anon38 & 1) == 0)
					{
						*anon35 = *anon35 + 2;
						*anon38 = 1;
						main(4196225, arg1);
						uint8_t* anon39 = (uint8_t*)(*anon1 + 1);
						uint8_t anon40 = *anon39 ^ 1;
						*anon39 = anon40;
						uint8_t* anon41 = (uint8_t*)*anon1;
						uint8_t anon42 = anon40 - 2;
						*anon41 = anon42;
						phi34 = anon42;
						phi36 = anon41;
						phi37 = anon40;
					}
					*phi36 = (phi37 & 1) + phi34 + 1;
					main(4195974, arg1);
					uint8_t* anon43 = (uint8_t*)*anon1;
					*anon43 = (*anon43 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon44 = (uint8_t*)0x600db9;
				uint8_t* anon46 = (uint8_t*)(phi4 + 2);
				uint8_t anon45 = 6 - *anon46 + *(uint8_t*)(phi4 + 1);
				*anon44 = anon45;
				uint8_t anon47 = *phi5 & 0xf;
				if (anon47 != 1)
				{
					*anon46 = anon45;
					*(uint8_t*)phi4 = anon47 - 1;
					main(4196059, arg1);
					uint8_t* anon48 = (uint8_t*)*anon1;
					*anon48 = *anon48 + 1;
					uint8_t* anon49 = (uint8_t*)(*anon1 + 2);
					*anon49 = *anon46;
					*anon44 = *anon49;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon51 = (uint8_t*)*anon1;
				uint8_t anon50 = *anon51 & 0xf;
				if (anon50 != 1)
				{
					uint8_t anon52 = anon50 - 1;
					*anon51 = anon52;
					uint8_t* anon53 = (uint8_t*)(*anon1 + 1);
					*anon53 = anon52;
					main(4196161, arg1);
					uint8_t* anon54 = (uint8_t*)*anon1;
					*anon54 = *anon54 + 1;
					uint8_t* anon55 = (uint8_t*)(*anon1 + 1);
					*anon55 = *anon53;
					*anon44 = *anon55;
				}
			}
		}
	}
	if (anon2 != 0 && *anon7 == 0 && (anon8 <= 127 || anon9 || !anon9 && anon12 == 0) || *(uint64_t*)arg1 == 0 || anon2 == 0)
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
