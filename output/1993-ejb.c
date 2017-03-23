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
	uint64_t phi21;
	uint64_t phi22;
	uint64_t* anon1 = (uint64_t*)0x600dc0;
	uint64_t anon2 = arg1 + 16;
	*anon1 = anon2;
	if (*(uint64_t*)arg1 != 0 && anon2 != 0)
	{
		uint8_t* phi5;
		uint8_t* anon11;
		uint64_t* anon18;
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
								anon18 = (uint64_t*)0x600dd0;
								uint8_t* anon20 = malloc(-anon14);
								uint64_t anon19 = (uint64_t)anon20;
								*anon18 = anon19;
								phi21 = anon19;
								phi22 = -anon14;
								if (phi22 == 0)
								{
									puts(anon20);
									*(uint8_t*)(*anon1 + 1) = 48;
									*(uint8_t*)(*anon1 + 3) = 0;
									uint8_t* anon23 = (uint8_t*)*anon1;
									*anon23 = *anon11;
									phi15 = *anon1;
									phi16 = 0;
									phi17 = anon23;
								}
							}
							phi4 = phi15;
							*(uint8_t*)(phi4 + 2) = phi16;
							phi5 = phi17;
						}
					}
				}
			}
		}
		if (*anon7 != 0 || !anon9 && *anon7 != 0 && *anon7 == 0 && anon8 > 127 && anon12 != 0 || !anon9 && *anon7 == 0 && anon8 > 127 && anon12 != 0 && *anon7 == 0 && *anon3 == 0)
		{
			if (*(uint8_t*)(phi4 + 3) == 0)
			{
				uint8_t anon24;
				if (*phi5 == 254)
				{
					anon24 = *(uint8_t*)(phi4 + 1) & 1;
					*(uint8_t*)(*anon18 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)(anon24 ^ 1) & 0xff)) = anon24;
					puts((uint8_t*)*anon18);
					uint8_t anon25 = *(uint8_t*)(*anon1 + 1) & 1;
					*(uint8_t*)(*anon18 + ((__zext uint64_t)(*anon11 & 0xf ^ 0xf) - (__zext uint64_t)anon25 & 0xff)) = anon25;
					puts((uint8_t*)*anon18);
				}
				else 
				{
					uint8_t* anon28;
					uint8_t phi30;
					uint64_t phi31;
					uint8_t phi35;
					uint8_t phi38;
					*(uint8_t*)phi4 = 2 - anon24 + *phi5;
					main(4195819, arg1);
					uint8_t* anon27 = (uint8_t*)(*anon1 + 1);
					uint8_t anon26 = *anon27 & 1;
					if (anon26 == 0)
					{
						anon28 = (uint8_t*)*anon1;
						uint8_t anon29 = *anon28 - 2;
						*anon28 = anon29;
						phi30 = anon29;
						phi31 = *anon1;
					}
					else 
					{
						*anon28 = (*anon28 & 0xf) + 1;
						*anon27 = anon26 ^ 1;
						main(4195870, arg1);
						uint8_t* anon32 = (uint8_t*)(*anon1 + 1);
						uint8_t anon33 = *anon32 ^ 1;
						*anon32 = anon33;
						uint8_t anon34 = anon33 - 2;
						*(uint8_t*)*anon1 = anon34;
						phi30 = anon34;
						phi31 = *anon1;
					}
					*(uint8_t*)(*anon18 + ((__zext uint64_t)(phi30 & 0xf) - (__zext uint64_t)(*anon11 & 0xf) & 0xff)) = *(uint8_t*)(phi31 + 1);
					puts((uint8_t*)*anon18);
					uint8_t* anon36 = (uint8_t*)*anon1;
					phi35 = *anon36;
					uint8_t* phi37 = anon36;
					uint8_t* anon39 = (uint8_t*)(*anon1 + 1);
					phi38 = *anon39;
					if ((*anon39 & 1) == 0)
					{
						*anon36 = *anon36 + 2;
						*anon39 = 1;
						main(4196225, arg1);
						uint8_t* anon40 = (uint8_t*)(*anon1 + 1);
						uint8_t anon41 = *anon40 ^ 1;
						*anon40 = anon41;
						uint8_t* anon42 = (uint8_t*)*anon1;
						uint8_t anon43 = anon41 - 2;
						*anon42 = anon43;
						phi35 = anon43;
						phi37 = anon42;
						phi38 = anon41;
					}
					*phi37 = (phi38 & 1) + phi35 + 1;
					main(4195974, arg1);
					uint8_t* anon44 = (uint8_t*)*anon1;
					*anon44 = (*anon44 + 15 & 0xf) - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon45 = (uint8_t*)0x600db9;
				uint8_t* anon47 = (uint8_t*)(phi4 + 2);
				uint8_t anon46 = 6 - *anon47 + *(uint8_t*)(phi4 + 1);
				*anon45 = anon46;
				uint8_t anon48 = *phi5 & 0xf;
				if (anon48 != 1)
				{
					*anon47 = anon46;
					*(uint8_t*)phi4 = anon48 - 1;
					main(4196059, arg1);
					uint8_t* anon49 = (uint8_t*)*anon1;
					*anon49 = *anon49 + 1;
					uint8_t* anon50 = (uint8_t*)(*anon1 + 2);
					*anon50 = *anon47;
					*anon45 = *anon50;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon52 = (uint8_t*)*anon1;
				uint8_t anon51 = *anon52 & 0xf;
				if (anon51 != 1)
				{
					uint8_t anon53 = anon51 - 1;
					*anon52 = anon53;
					uint8_t* anon54 = (uint8_t*)(*anon1 + 1);
					*anon54 = anon53;
					main(4196161, arg1);
					uint8_t* anon55 = (uint8_t*)*anon1;
					*anon55 = *anon55 + 1;
					uint8_t* anon56 = (uint8_t*)(*anon1 + 1);
					*anon56 = *anon54;
					*anon45 = *anon56;
				}
			}
		}
	}
	*(uint8_t*)phi21 = 49;
	phi21 = phi21 + 1;
	phi22 = phi22 - 1;
	if (*(uint64_t*)arg1 == 0 || *(uint64_t*)arg1 != 0 && anon2 == 0 || *(uint64_t*)arg1 != 0 && anon2 != 0 && anon8 <= 127 && *anon7 == 0 || *(uint64_t*)arg1 != 0 && anon2 != 0 && *anon7 == 0 && anon8 > 127 && anon9 || *(uint64_t*)arg1 != 0 && anon2 != 0 && !anon9 && *anon7 == 0 && anon8 > 127 && anon12 == 0)
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
