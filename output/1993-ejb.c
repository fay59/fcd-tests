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
	uint64_t* anon20;
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
							uint8_t* phi16;
							uint64_t phi17;
							int64_t anon14 = (__sext int64_t)anon10;
							if (((uint32_t)(anon14 >> 30) & 1 | (__zext uint32_t)((anon14 & 0x7f) == 0)) == 0)
							{
								*anon12 = anon10;
								*(uint8_t*)(*anon1 + 3) = 1;
								*(uint8_t*)(*anon1 + 1) = 1;
								*(uint8_t*)(*anon1 + 2) = 2;
								phi15 = 1;
								phi16 = anon12;
								phi17 = *anon1;
							}
							else 
							{
								uint64_t phi24;
								uint64_t anon19 = (__zext uint64_t)(0 - anon10);
								uint8_t* anon18 = malloc(anon19);
								anon20 = (uint64_t*)0x600dd0;
								uint64_t anon21 = (uint64_t)anon18;
								*anon20 = anon21;
								uint64_t phi22 = anon21;
								uint64_t phi_in23 = anon19;
								do
								{
									phi24 = phi_in23;
									if (phi24 != 0)
									{
										*(uint8_t*)phi22 = 49;
										phi22 = phi22 + 1;
										phi_in23 = phi24 - 1;
									}
								}
								while (phi24 != 0);
								puts(anon18);
								*(uint8_t*)(*anon1 + 1) = 48;
								*(uint8_t*)(*anon1 + 3) = 0;
								uint8_t* anon25 = (uint8_t*)*anon1;
								*anon25 = *anon9;
								*(uint8_t*)(*anon1 + 2) = 0;
								phi15 = *anon4 == 0;
								phi16 = anon25;
								phi17 = *anon1;
							}
							uint8_t* phi_in26 = phi16;
							uint64_t phi_in27 = phi17;
							phi11 = phi_in26;
							phi13 = phi_in27;
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
					*(uint8_t*)(*anon20 + (__zext uint64_t)(0 - *anon9) - 1) = *(uint8_t*)(phi13 + 1);
					puts((uint8_t*)*anon20);
				}
				if (*phi11 == 254)
				{
					*(uint8_t*)(*anon20 + (((__zext uint64_t)*anon9 ^ 0xff) - ((__zext uint64_t)*(uint8_t*)(phi13 + 1) & 1 ^ 1) & 0xff)) = *(uint8_t*)(phi13 + 1);
					puts((uint8_t*)*anon20);
					*(uint8_t*)(*anon20 + (((__zext uint64_t)*anon9 ^ 0xff) - ((__zext uint64_t)*(uint8_t*)(*anon1 + 1) & 1) & 0xff)) = *(uint8_t*)(*anon1 + 1);
					puts((uint8_t*)*anon20);
				}
				if (!(*phi11 == 254 || *phi11 == 255))
				{
					uint8_t* anon29;
					uint8_t phi31;
					uint64_t phi32;
					uint8_t* anon33;
					uint8_t* anon34;
					uint8_t phi39;
					uint8_t* phi40;
					uint8_t phi41;
					*phi11 = 2 - (*(uint8_t*)(phi13 + 1) & 1) + *phi11;
					main(4195819, arg1);
					uint8_t* anon28 = (uint8_t*)(*anon1 + 1);
					if ((*anon28 & 1) == 0)
					{
						anon29 = (uint8_t*)*anon1;
						uint8_t anon30 = *anon29 - 2;
						*anon29 = anon30;
						phi31 = anon30;
						phi32 = *anon1;
						anon33 = (uint8_t*)*anon1;
						*anon33 = *anon33 + 2;
						anon34 = (uint8_t*)(*anon1 + 1);
						*anon34 = *anon34 ^ 1;
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
						*anon29 = *anon29 + 1;
						*anon28 = *anon28 ^ 1;
						main(4195870, arg1);
						uint8_t* anon42 = (uint8_t*)(*anon1 + 1);
						uint8_t anon43 = *anon42 ^ 1;
						*anon42 = anon43;
						uint8_t anon44 = anon43 - 2;
						*(uint8_t*)*anon1 = anon44;
						phi31 = anon44;
						phi32 = *anon1;
					}
					*(uint8_t*)(*anon20 + ((__zext uint64_t)phi31 - (__zext uint64_t)*anon9 & 0xff)) = *(uint8_t*)(phi32 + 1);
					puts((uint8_t*)*anon20);
					phi39 = *anon33;
					phi40 = anon33;
					phi41 = *anon34;
					*phi40 = (phi41 & 1) + phi39 + 1;
					main(4195974, arg1);
					uint8_t* anon45 = (uint8_t*)*anon1;
					*anon45 = *anon45 - 1 - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon46 = (uint8_t*)0x600db9;
				uint8_t* anon48 = (uint8_t*)(phi13 + 2);
				uint8_t anon47 = 6 - *anon48 + *(uint8_t*)(phi13 + 1);
				*anon46 = anon47;
				if (*phi11 != 1)
				{
					*anon48 = anon47;
					*(uint8_t*)phi13 = *phi11 - 1;
					main(4196059, arg1);
					uint8_t* anon49 = (uint8_t*)*anon1;
					*anon49 = *anon49 + 1;
					uint8_t* anon50 = (uint8_t*)(*anon1 + 2);
					*anon50 = *anon48;
					*anon46 = *anon50;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon51 = (uint8_t*)*anon1;
				if (*anon51 != 1)
				{
					uint8_t anon52 = *anon51 - 1;
					*anon51 = anon52;
					uint8_t* anon53 = (uint8_t*)(*anon1 + 1);
					*anon53 = anon52;
					main(4196161, arg1);
					uint8_t* anon54 = (uint8_t*)*anon1;
					*anon54 = *anon54 + 1;
					uint8_t* anon55 = (uint8_t*)(*anon1 + 1);
					*anon55 = *anon53;
					*anon46 = *anon55;
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
