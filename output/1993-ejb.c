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
		uint64_t* anon16;
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
							uint8_t phi_in15;
							int64_t anon14 = (__sext int64_t)anon12;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon13 = anon12;
								*(uint8_t*)(arg1 + 19) = 1;
								*(uint8_t*)(arg1 + 17) = 1;
								phi_in4 = anon2;
								phi_in15 = 2;
								phi_in5 = anon13;
							}
							else 
							{
								anon16 = (uint64_t*)0x600dd0;
								uint8_t* anon18 = malloc(-anon14);
								uint64_t anon17 = (uint64_t)anon18;
								*anon16 = anon17;
								uint64_t phi_in19 = anon17;
								uint64_t phi_in20 = -anon14;
								while (phi_in20 != 0)
								{
									*(uint8_t*)phi_in19 = 49;
									phi_in19 = phi_in19 + 1;
									phi_in20 = phi_in20 - 1;
								}
								puts(anon18);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon21 = (uint8_t*)*anon1;
								*anon21 = *anon11;
								phi_in4 = *anon1;
								phi_in15 = 0;
								phi_in5 = anon21;
							}
						}
					}
				}
			}
		}
		if (*anon7 != 0 || !anon9 && anon8 > 127 && anon12 != 0 && (*anon7 != 0 || *anon3 == 0))
		{
			if (*(uint8_t*)(phi_in4 + 3) == 0)
			{
				uint8_t anon22;
				if (*phi_in5 == 254)
				{
					anon22 = *(uint8_t*)(phi_in4 + 1) & 1;
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)(anon22 ^ 1) & 0xff)) = anon22;
					puts((uint8_t*)*anon16);
					uint8_t anon23 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)anon23 & 0xff)) = anon23;
					puts((uint8_t*)*anon16);
				}
				else 
				{
					uint8_t* anon26;
					uint8_t phi_in28;
					uint64_t phi_in29;
					uint8_t phi_in33;
					uint8_t phi_in36;
					*(uint8_t*)phi_in4 = 2 - anon22 + *phi_in5;
					main(4195819, arg1);
					uint8_t* anon25 = (uint8_t*)(*anon1 + 1);
					uint8_t anon24 = *anon25 & 1;
					if (anon24 == 0)
					{
						anon26 = (uint8_t*)*anon1;
						uint8_t anon27 = *anon26 - 2;
						*anon26 = anon27;
						phi_in28 = anon27;
						phi_in29 = *anon1;
					}
					else 
					{
						*anon26 = (*anon26 & 0xf) + 1;
						*anon25 = anon24 ^ 1;
						main(4195870, arg1);
						uint8_t* anon30 = (uint8_t*)(*anon1 + 1);
						uint8_t anon31 = *anon30 ^ 1;
						*anon30 = anon31;
						uint8_t anon32 = anon31 - 2;
						*(uint8_t*)*anon1 = anon32;
						phi_in28 = anon32;
						phi_in29 = *anon1;
					}
					*(uint8_t*)(*anon16 + ((__zext uint64_t)(phi_in28 & 0xf) - (__zext uint64_t)(*anon11 & 0xf) & 0xff)) = *(uint8_t*)(phi_in29 + 1);
					puts((uint8_t*)*anon16);
					uint8_t* anon34 = (uint8_t*)*anon1;
					phi_in33 = *anon34;
					uint8_t* phi_in35 = anon34;
					uint8_t* anon37 = (uint8_t*)(*anon1 + 1);
					phi_in36 = *anon37;
					if ((*anon37 & 1) == 0)
					{
						*anon34 = *anon34 + 2;
						*anon37 = 1;
						main(4196225, arg1);
						uint8_t* anon38 = (uint8_t*)(*anon1 + 1);
						uint8_t anon39 = *anon38 ^ 1;
						*anon38 = anon39;
						uint8_t* anon40 = (uint8_t*)*anon1;
						uint8_t anon41 = anon39 - 2;
						*anon40 = anon41;
						phi_in33 = anon41;
						phi_in35 = anon40;
						phi_in36 = anon39;
					}
					*phi_in35 = (phi_in36 & 1) + phi_in33 + 1;
					main(4195974, arg1);
					uint8_t* anon42 = (uint8_t*)*anon1;
					*anon42 = (*anon42 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon43 = (uint8_t*)0x600db9;
				uint8_t* anon45 = (uint8_t*)(phi_in4 + 2);
				uint8_t anon44 = 6 - *anon45 + *(uint8_t*)(phi_in4 + 1);
				*anon43 = anon44;
				uint8_t anon46 = *phi_in5 & 0xf;
				if (anon46 != 1)
				{
					*anon45 = anon44;
					*(uint8_t*)phi_in4 = anon46 - 1;
					main(4196059, arg1);
					uint8_t* anon47 = (uint8_t*)*anon1;
					*anon47 = *anon47 + 1;
					uint8_t* anon48 = (uint8_t*)(*anon1 + 2);
					*anon48 = *anon45;
					*anon43 = *anon48;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon50 = (uint8_t*)*anon1;
				uint8_t anon49 = *anon50 & 0xf;
				if (anon49 != 1)
				{
					uint8_t anon51 = anon49 - 1;
					*anon50 = anon51;
					uint8_t* anon52 = (uint8_t*)(*anon1 + 1);
					*anon52 = anon51;
					main(4196161, arg1);
					uint8_t* anon53 = (uint8_t*)*anon1;
					*anon53 = *anon53 + 1;
					uint8_t* anon54 = (uint8_t*)(*anon1 + 1);
					*anon54 = *anon52;
					*anon43 = *anon54;
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
