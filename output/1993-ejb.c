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
		uint8_t* phi_in5;
		uint8_t* anon11;
		uint64_t* anon15;
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
						phi_in4 = anon2;
						uint8_t* anon13 = (uint8_t*)anon2;
						phi_in5 = anon13;
						if (*anon7 == 0)
						{
							int64_t anon14 = (__sext int64_t)anon12;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon13 = anon12;
								*(uint8_t*)(arg1 + 19) = 1;
								*(uint8_t*)(arg1 + 17) = 1;
								phi_in4 = anon2;
								*(uint8_t*)(phi_in4 + 2) = 2;
								phi_in5 = anon13;
							}
							else 
							{
								anon15 = (uint64_t*)0x600dd0;
								uint8_t* anon17 = malloc(-anon14);
								uint64_t anon16 = (uint64_t)anon17;
								*anon15 = anon16;
								uint64_t phi_in18 = anon16;
								uint64_t phi_in19 = -anon14;
								while (phi_in19 != 0)
								{
									*(uint8_t*)phi_in18 = 49;
									phi_in18 = phi_in18 + 1;
									phi_in19 = phi_in19 - 1;
								}
								puts(anon17);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon20 = (uint8_t*)*anon1;
								*anon20 = *anon11;
								phi_in4 = *anon1;
								*(uint8_t*)(phi_in4 + 2) = 0;
								phi_in5 = anon20;
							}
						}
					}
				}
			}
		}
		if (*anon7 != 0 || !anon9 && anon12 != 0 && anon8 > 127 && (*anon7 != 0 || *anon3 == 0))
		{
			if (*(uint8_t*)(phi_in4 + 3) == 0)
			{
				uint8_t anon21;
				if (*phi_in5 == 254)
				{
					anon21 = *(uint8_t*)(phi_in4 + 1) & 1;
					*(uint8_t*)(*anon15 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)(anon21 ^ 1) & 0xff)) = anon21;
					puts((uint8_t*)*anon15);
					uint8_t anon22 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon15 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)anon22 & 0xff)) = anon22;
					puts((uint8_t*)*anon15);
				}
				else 
				{
					uint8_t* anon25;
					uint8_t phi_in27;
					uint64_t phi_in28;
					uint8_t phi_in32;
					uint8_t phi_in35;
					*(uint8_t*)phi_in4 = 2 - anon21 + *phi_in5;
					main(4195819, arg1);
					uint8_t* anon24 = (uint8_t*)(*anon1 + 1);
					uint8_t anon23 = *anon24 & 1;
					if (anon23 == 0)
					{
						anon25 = (uint8_t*)*anon1;
						uint8_t anon26 = *anon25 - 2;
						*anon25 = anon26;
						phi_in27 = anon26;
						phi_in28 = *anon1;
					}
					else 
					{
						*anon25 = (*anon25 & 0xf) + 1;
						*anon24 = anon23 ^ 1;
						main(4195870, arg1);
						uint8_t* anon29 = (uint8_t*)(*anon1 + 1);
						uint8_t anon30 = *anon29 ^ 1;
						*anon29 = anon30;
						uint8_t anon31 = anon30 - 2;
						*(uint8_t*)*anon1 = anon31;
						phi_in27 = anon31;
						phi_in28 = *anon1;
					}
					*(uint8_t*)(*anon15 + ((__zext uint64_t)(phi_in27 & 0xf) - (__zext uint64_t)(*anon11 & 0xf) & 0xff)) = *(uint8_t*)(phi_in28 + 1);
					puts((uint8_t*)*anon15);
					uint8_t* anon33 = (uint8_t*)*anon1;
					phi_in32 = *anon33;
					uint8_t* phi_in34 = anon33;
					uint8_t* anon36 = (uint8_t*)(*anon1 + 1);
					phi_in35 = *anon36;
					if ((*anon36 & 1) == 0)
					{
						*anon33 = *anon33 + 2;
						*anon36 = 1;
						main(4196225, arg1);
						uint8_t* anon37 = (uint8_t*)(*anon1 + 1);
						uint8_t anon38 = *anon37 ^ 1;
						*anon37 = anon38;
						uint8_t* anon39 = (uint8_t*)*anon1;
						uint8_t anon40 = anon38 - 2;
						*anon39 = anon40;
						phi_in32 = anon40;
						phi_in34 = anon39;
						phi_in35 = anon38;
					}
					*phi_in34 = (phi_in35 & 1) + phi_in32 + 1;
					main(4195974, arg1);
					uint8_t* anon41 = (uint8_t*)*anon1;
					*anon41 = (*anon41 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon42 = (uint8_t*)0x600db9;
				uint8_t* anon44 = (uint8_t*)(phi_in4 + 2);
				uint8_t anon43 = 6 - *anon44 + *(uint8_t*)(phi_in4 + 1);
				*anon42 = anon43;
				uint8_t anon45 = *phi_in5 & 0xf;
				if (anon45 != 1)
				{
					*anon44 = anon43;
					*(uint8_t*)phi_in4 = anon45 - 1;
					main(4196059, arg1);
					uint8_t* anon46 = (uint8_t*)*anon1;
					*anon46 = *anon46 + 1;
					uint8_t* anon47 = (uint8_t*)(*anon1 + 2);
					*anon47 = *anon44;
					*anon42 = *anon47;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon49 = (uint8_t*)*anon1;
				uint8_t anon48 = *anon49 & 0xf;
				if (anon48 != 1)
				{
					uint8_t anon50 = anon48 - 1;
					*anon49 = anon50;
					uint8_t* anon51 = (uint8_t*)(*anon1 + 1);
					*anon51 = anon50;
					main(4196161, arg1);
					uint8_t* anon52 = (uint8_t*)*anon1;
					*anon52 = *anon52 + 1;
					uint8_t* anon53 = (uint8_t*)(*anon1 + 1);
					*anon53 = *anon51;
					*anon42 = *anon53;
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
