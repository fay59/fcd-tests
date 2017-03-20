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
	uint64_t phi21;
	uint64_t phi22;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	if (*(uint64_t*)arg1 != 0 && anon2 != 0)
	{
		uint8_t* phi5;
		uint8_t* anon11;
		uint64_t* anon19;
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
						phi4 = anon2;
						uint8_t* anon13 = (uint8_t*)anon2;
						phi5 = anon13;
						if (*anon7 == 0)
						{
							uint64_t phi15;
							uint8_t phi16;
							uint8_t* phi17;
							int64_t anon14 = (__sext int64_t)anon12;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon13 = anon12;
								*(uint8_t*)(arg1 + 19) = 1;
								*(uint8_t*)(arg1 + 17) = 1;
								phi15 = anon2;
								phi16 = 2;
								phi17 = anon13;
							}
							else 
							{
								uint8_t* anon18 = malloc(-anon14);
								anon19 = (uint64_t*)0x600dd0;
								uint64_t anon20 = (uint64_t)anon18;
								*anon19 = anon20;
								phi21 = anon20;
								phi22 = -anon14;
								if (phi22 == 0)
								{
									puts(anon18);
									*(uint8_t*)(*anon1 + 1) = 48;
									*(uint8_t*)(*anon1 + 3) = 0;
									uint8_t* anon23 = (uint8_t*)*anon1;
									*anon23 = *anon11;
									phi15 = *anon1;
									phi16 = 0;
									phi17 = anon23;
								}
							}
							uint64_t phi_in24 = phi15;
							*(uint8_t*)(phi_in24 + 2) = phi16;
							uint8_t* phi_in25 = phi17;
							phi4 = phi_in24;
							phi5 = phi_in25;
						}
					}
				}
			}
		}
		if (*anon7 != 0 || !anon10.field1 && *anon7 != 0 && *anon7 == 0 && anon8 > 127 && anon12 != 0 || !anon10.field1 && *anon7 == 0 && anon8 > 127 && anon12 != 0 && *anon7 == 0 && *anon3 == 0)
		{
			if (*(uint8_t*)(phi4 + 3) == 0)
			{
				uint8_t anon26;
				if (*phi5 == 254)
				{
					anon26 = *(uint8_t*)(phi4 + 1) & 1;
					*(uint8_t*)(*anon19 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)(anon26 ^ 1) & 0xff)) = anon26;
					puts((uint8_t*)*anon19);
					uint8_t anon27 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon19 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)anon27 & 0xff)) = anon27;
					puts((uint8_t*)*anon19);
				}
				else 
				{
					uint8_t* anon30;
					uint8_t phi32;
					uint64_t phi33;
					uint8_t phi37;
					uint8_t phi40;
					*(uint8_t*)phi4 = 2 - anon26 + *phi5;
					main(4195819, arg1);
					uint8_t* anon29 = (uint8_t*)(*anon1 + 1);
					uint8_t anon28 = *anon29 & 1;
					if (anon28 == 0)
					{
						anon30 = (uint8_t*)*anon1;
						uint8_t anon31 = *anon30 - 2;
						*anon30 = anon31;
						phi32 = anon31;
						phi33 = *anon1;
					}
					else 
					{
						*anon30 = (*anon30 & 0xf) + 1;
						*anon29 = anon28 ^ 1;
						main(4195870, arg1);
						uint8_t* anon34 = (uint8_t*)(*anon1 + 1);
						uint8_t anon35 = *anon34 ^ 1;
						*anon34 = anon35;
						uint8_t anon36 = anon35 - 2;
						*(uint8_t*)*anon1 = anon36;
						phi32 = anon36;
						phi33 = *anon1;
					}
					*(uint8_t*)(*anon19 + ((__zext uint64_t)(phi32 & 0xf) - (__zext uint64_t)(*anon11 & 0xf) & 0xff)) = *(uint8_t*)(phi33 + 1);
					puts((uint8_t*)*anon19);
					uint8_t* anon38 = (uint8_t*)*anon1;
					phi37 = *anon38;
					uint8_t* phi39 = anon38;
					uint8_t* anon41 = (uint8_t*)(*anon1 + 1);
					phi40 = *anon41;
					if ((*anon41 & 1) == 0)
					{
						*anon38 = *anon38 + 2;
						*anon41 = 1;
						main(4196225, arg1);
						uint8_t* anon42 = (uint8_t*)(*anon1 + 1);
						uint8_t anon43 = *anon42 ^ 1;
						*anon42 = anon43;
						uint8_t* anon44 = (uint8_t*)*anon1;
						uint8_t anon45 = anon43 - 2;
						*anon44 = anon45;
						phi37 = anon45;
						phi39 = anon44;
						phi40 = anon43;
					}
					*phi39 = (phi40 & 1) + phi37 + 1;
					main(4195974, arg1);
					uint8_t* anon46 = (uint8_t*)*anon1;
					*anon46 = (*anon46 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon47 = (uint8_t*)0x600db9;
				uint8_t* anon49 = (uint8_t*)(phi4 + 2);
				uint8_t anon48 = 6 - *anon49 + *(uint8_t*)(phi4 + 1);
				*anon47 = anon48;
				uint8_t anon50 = *phi5 & 0xf;
				if (anon50 != 1)
				{
					*anon49 = anon48;
					*(uint8_t*)phi4 = anon50 - 1;
					main(4196059, arg1);
					uint8_t* anon51 = (uint8_t*)*anon1;
					*anon51 = *anon51 + 1;
					uint8_t* anon52 = (uint8_t*)(*anon1 + 2);
					*anon52 = *anon49;
					*anon47 = *anon52;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon54 = (uint8_t*)*anon1;
				uint8_t anon53 = *anon54 & 0xf;
				if (anon53 != 1)
				{
					uint8_t anon55 = anon53 - 1;
					*anon54 = anon55;
					uint8_t* anon56 = (uint8_t*)(*anon1 + 1);
					*anon56 = anon55;
					main(4196161, arg1);
					uint8_t* anon57 = (uint8_t*)*anon1;
					*anon57 = *anon57 + 1;
					uint8_t* anon58 = (uint8_t*)(*anon1 + 1);
					*anon58 = *anon56;
					*anon47 = *anon58;
				}
			}
		}
	}
	*(uint8_t*)phi21 = 49;
	phi21 = phi21 + 1;
	phi22 = phi22 - 1;
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
