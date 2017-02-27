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
	uint32_t anon8;
	uint8_t* anon9;
	uint8_t anon10;
	uint8_t* phi11;
	uint64_t phi13;
	bool phi15;
	uint64_t* anon19;
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
				anon8 = (__zext uint32_t)(anon7 > 126) & (__zext uint32_t)((anon7 + 129 & 0xff) != 0);
				if (anon8 == 0)
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
							uint64_t phi16;
							int64_t anon14 = (__sext int64_t)anon10;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon12 = anon10;
								*(uint8_t*)(*anon1 + 3) = 1;
								*(uint8_t*)(*anon1 + 1) = 1;
								*(uint8_t*)(*anon1 + 2) = 2;
								phi15 = 1;
								phi11 = anon12;
								phi16 = *anon1;
							}
							else 
							{
								uint64_t phi23;
								uint64_t anon18 = (__zext uint64_t)(0 - anon10);
								uint8_t* anon17 = malloc(anon18);
								anon19 = (uint64_t*)0x600dd0;
								uint64_t anon20 = (uint64_t)anon17;
								*anon19 = anon20;
								uint64_t phi21 = anon20;
								uint64_t phi_in22 = anon18;
								do
								{
									phi23 = phi_in22;
									if (phi23 != 0)
									{
										*(uint8_t*)phi21 = 49;
										phi21 = phi21 + 1;
										phi_in22 = phi23 - 1;
									}
								}
								while (phi23 != 0);
								puts(anon17);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon24 = (uint8_t*)*anon1;
								*anon24 = *anon9;
								*(uint8_t*)(*anon1 + 2) = 0;
								phi15 = *anon4 == 0;
								phi11 = anon24;
								phi16 = *anon1;
							}
							phi13 = phi16;
						}
					}
				}
			}
		}
	}
	if (anon6 <= 127 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 || anon8 != 0 && *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 == 0 || *(uint64_t*)arg1 != 0 && *(uint64_t*)anon3 != 0 && *anon5 == 0 && anon6 > 127 && anon8 == 0 && anon10 == 0 || *(uint64_t*)arg1 == 0)
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
		if (*anon5 != 0 || *anon5 != 0 && *anon5 == 0 && anon6 > 127 && anon8 == 0 && anon10 != 0 || *anon5 == 0 && anon6 > 127 && anon8 == 0 && anon10 != 0 && *anon5 == 0 && phi15)
		{
			if (*(uint8_t*)(phi13 + 3) == 0)
			{
				if (*phi11 == 255)
				{
					*(uint8_t*)(*anon19 + (__zext uint64_t)(0 - *anon9) - 1) = *(uint8_t*)(phi13 + 1);
					puts((uint8_t*)*anon19);
				}
				if (*phi11 == 254)
				{
					*(uint8_t*)(*anon19 + (((__zext uint64_t)*anon9 ^ 0xff) - ((__zext uint64_t)*(uint8_t*)(phi13 + 1) & 1 ^ 1) & 0xff)) = *(uint8_t*)(phi13 + 1);
					puts((uint8_t*)*anon19);
					*(uint8_t*)(*anon19 + (((__zext uint64_t)*anon9 ^ 0xff) - ((__zext uint64_t)*(uint8_t*)(*anon1 + 1) & 1) & 0xff)) = *(uint8_t*)(*anon1 + 1);
					puts((uint8_t*)*anon19);
				}
				if (!(*phi11 == 254 || *phi11 == 255))
				{
					uint8_t* anon26;
					uint8_t phi28;
					uint64_t phi29;
					uint8_t* anon30;
					uint8_t* anon31;
					uint8_t phi36;
					uint8_t* phi37;
					uint8_t phi38;
					*phi11 = 2 - (*(uint8_t*)(phi13 + 1) & 1) + *phi11;
					main(4195819, arg1);
					uint8_t* anon25 = (uint8_t*)(*anon1 + 1);
					if ((*anon25 & 1) == 0)
					{
						anon26 = (uint8_t*)*anon1;
						uint8_t anon27 = *anon26 - 2;
						*anon26 = anon27;
						phi28 = anon27;
						phi29 = *anon1;
						anon30 = (uint8_t*)*anon1;
						*anon30 = *anon30 + 2;
						anon31 = (uint8_t*)(*anon1 + 1);
						*anon31 = *anon31 ^ 1;
						main(4196225, arg1);
						uint8_t* anon32 = (uint8_t*)(*anon1 + 1);
						uint8_t anon33 = *anon32 ^ 1;
						*anon32 = anon33;
						uint8_t* anon34 = (uint8_t*)*anon1;
						uint8_t anon35 = anon33 - 2;
						*anon34 = anon35;
						phi36 = anon35;
						phi37 = anon34;
						phi38 = anon33;
					}
					else 
					{
						*anon26 = *anon26 + 1;
						*anon25 = *anon25 ^ 1;
						main(4195870, arg1);
						uint8_t* anon39 = (uint8_t*)(*anon1 + 1);
						uint8_t anon40 = *anon39 ^ 1;
						*anon39 = anon40;
						uint8_t anon41 = anon40 - 2;
						*(uint8_t*)*anon1 = anon41;
						phi28 = anon41;
						phi29 = *anon1;
					}
					*(uint8_t*)(*anon19 + ((__zext uint64_t)phi28 - (__zext uint64_t)*anon9 & 0xff)) = *(uint8_t*)(phi29 + 1);
					puts((uint8_t*)*anon19);
					phi36 = *anon30;
					phi37 = anon30;
					phi38 = *anon31;
					*phi37 = (phi38 & 1) + phi36 + 1;
					main(4195974, arg1);
					uint8_t* anon42 = (uint8_t*)*anon1;
					*anon42 = *anon42 - 1 - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon43 = (uint8_t*)0x600db9;
				uint8_t* anon45 = (uint8_t*)(phi13 + 2);
				uint8_t anon44 = 6 - *anon45 + *(uint8_t*)(phi13 + 1);
				*anon43 = anon44;
				if (*phi11 != 1)
				{
					*anon45 = anon44;
					*(uint8_t*)phi13 = *phi11 - 1;
					main(4196059, arg1);
					uint8_t* anon46 = (uint8_t*)*anon1;
					*anon46 = *anon46 + 1;
					uint8_t* anon47 = (uint8_t*)(*anon1 + 2);
					*anon47 = *anon45;
					*anon43 = *anon47;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon48 = (uint8_t*)*anon1;
				if (*anon48 != 1)
				{
					uint8_t anon49 = *anon48 - 1;
					*anon48 = anon49;
					uint8_t* anon50 = (uint8_t*)(*anon1 + 1);
					*anon50 = anon49;
					main(4196161, arg1);
					uint8_t* anon51 = (uint8_t*)*anon1;
					*anon51 = *anon51 + 1;
					uint8_t* anon52 = (uint8_t*)(*anon1 + 1);
					*anon52 = *anon50;
					*anon43 = *anon52;
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
	llvm.trap();
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
