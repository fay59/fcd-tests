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
								uint64_t anon19 = (__zext uint64_t)-anon10;
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
							phi11 = phi16;
							uint64_t phi_in26 = phi17;
							phi13 = phi_in26;
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
					*(uint8_t*)(*anon20 + (__zext uint64_t)-*anon9 - 1) = *(uint8_t*)(phi13 + 1);
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
					uint8_t* anon28;
					uint8_t phi30;
					uint64_t phi31;
					uint8_t* anon32;
					uint8_t* anon33;
					uint8_t phi38;
					uint8_t* phi39;
					uint8_t phi40;
					*phi11 = 2 - (*(uint8_t*)(phi13 + 1) & 1) + *phi11;
					main(4195819, arg1);
					uint8_t* anon27 = (uint8_t*)(*anon1 + 1);
					if ((*anon27 & 1) == 0)
					{
						anon28 = (uint8_t*)*anon1;
						uint8_t anon29 = *anon28 - 2;
						*anon28 = anon29;
						phi30 = anon29;
						phi31 = *anon1;
						anon32 = (uint8_t*)*anon1;
						*anon32 = *anon32 + 2;
						anon33 = (uint8_t*)(*anon1 + 1);
						*anon33 = *anon33 ^ 1;
						main(4196225, arg1);
						uint8_t* anon34 = (uint8_t*)(*anon1 + 1);
						uint8_t anon35 = *anon34 ^ 1;
						*anon34 = anon35;
						uint8_t* anon36 = (uint8_t*)*anon1;
						uint8_t anon37 = anon35 - 2;
						*anon36 = anon37;
						phi38 = anon37;
						phi39 = anon36;
						phi40 = anon35;
					}
					else 
					{
						*anon28 = *anon28 + 1;
						*anon27 = *anon27 ^ 1;
						main(4195870, arg1);
						uint8_t* anon41 = (uint8_t*)(*anon1 + 1);
						uint8_t anon42 = *anon41 ^ 1;
						*anon41 = anon42;
						uint8_t anon43 = anon42 - 2;
						*(uint8_t*)*anon1 = anon43;
						phi30 = anon43;
						phi31 = *anon1;
					}
					*(uint8_t*)(*anon20 + ((__zext uint64_t)phi30 - (__zext uint64_t)*anon9 & 0xff)) = *(uint8_t*)(phi31 + 1);
					puts((uint8_t*)*anon20);
					phi38 = *anon32;
					phi39 = anon32;
					phi40 = *anon33;
					*phi39 = (phi40 & 1) + phi38 + 1;
					main(4195974, arg1);
					uint8_t* anon44 = (uint8_t*)*anon1;
					*anon44 = *anon44 - 1 - (*(uint8_t*)(*anon1 + 1) & 1);
				}
			}
			else 
			{
				uint8_t* anon45 = (uint8_t*)0x600db9;
				uint8_t* anon47 = (uint8_t*)(phi13 + 2);
				uint8_t anon46 = 6 - *anon47 + *(uint8_t*)(phi13 + 1);
				*anon45 = anon46;
				if (*phi11 != 1)
				{
					*anon47 = anon46;
					*(uint8_t*)phi13 = *phi11 - 1;
					main(4196059, arg1);
					uint8_t* anon48 = (uint8_t*)*anon1;
					*anon48 = *anon48 + 1;
					uint8_t* anon49 = (uint8_t*)(*anon1 + 2);
					*anon49 = *anon47;
					*anon45 = *anon49;
				}
				printf((uint8_t*)0x600d88);
				uint8_t* anon50 = (uint8_t*)*anon1;
				if (*anon50 != 1)
				{
					uint8_t anon51 = *anon50 - 1;
					*anon50 = anon51;
					uint8_t* anon52 = (uint8_t*)(*anon1 + 1);
					*anon52 = anon51;
					main(4196161, arg1);
					uint8_t* anon53 = (uint8_t*)*anon1;
					*anon53 = *anon53 + 1;
					uint8_t* anon54 = (uint8_t*)(*anon1 + 1);
					*anon54 = *anon52;
					*anon45 = *anon54;
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
