#include "tests/bin/1995-garry.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	uint8_t* anon4;
	uint64_t* anon1 = (uint64_t*)0x603b18;
	*anon1 = *(uint64_t*)0x601288;
	*(uint64_t*)0x603b10 = *(uint64_t*)0x601280;
	uint64_t phi_in2 = *(uint64_t*)0x601288;
	do
	{
		uint64_t phi3 = phi_in2;
		anon4 = fgets((uint8_t*)0x603b40, 255, (struct _IO_FILE*)phi3);
		*(uint64_t*)0x603b08 = (uint64_t)anon4;
		if (anon4 != null)
		{
			uint64_t anon5 = cb(4195727);
			*(uint64_t*)0x603b00 = anon5;
			fwrite((uint8_t*)anon5, (__sext int64_t)*(uint32_t*)0x6012c0, 1, *(struct _IO_FILE**)0x603b10);
			phi_in2 = *anon1;
		}
	}
	while (anon4 != null);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400560, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400930, (void(*)())0x4009a0, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x601290;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196002);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t cb(uint64_t arg0)
{
	uint64_t phi6;
	uint32_t* phi7;
	uint64_t anon8;
	uint64_t anon9;
	uint8_t* anon2 = (uint8_t*)0x603b40;
	uint8_t* anon3 = (uint8_t*)0x601248;
	uint8_t* anon1 = strchr(anon2, (__sext int32_t)*anon3);
	uint64_t phi_in4 = 6306624;
	uint32_t* phi_in5 = (uint32_t*)0x603b40;
	do
	{
		phi6 = phi_in4;
		phi7 = phi_in5;
		anon8 = (phi6 & 0xffffffff) + 4;
		phi_in4 = anon8;
		phi_in5 = (uint32_t*)anon8;
		uint64_t anon10 = (__zext uint64_t)*phi7;
		anon9 = (anon10 ^ 0x80808080) & anon10 + 4278124287 & 0x80808080;
	}
	while (anon9 == 0);
	uint16_t anon13 = (uint16_t)*phi7;
	uint8_t anon12 = (uint8_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? anon9 >> 16 : anon9);
	struct { uint8_t field0; bool field1; } anon11 = llvm.uadd.with.overflow.i8(anon12, anon12);
	uint32_t* anon14 = (uint32_t*)0x6012c0;
	*anon14 = (uint32_t)((anon13 - 257 & (anon13 ^ 0x8080) & 0x8080) == 0 ? phi6 + 6 : anon8) - 3 - (__zext uint32_t)anon11.field1 - 6306624;
	uint64_t phi15 = 6306624;
	uint64_t phi16 = 6296320;
	uint8_t* phi17 = (uint8_t*)0x601300;
	uint8_t* phi_in18 = anon2;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint8_t* phi22;
		uint64_t phi23;
		do
		{
			uint64_t phi_in19 = phi15;
			uint64_t phi_in20 = phi16;
			uint8_t* phi_in21 = phi17;
			phi22 = phi_in18;
			phi23 = phi_in20;
			uint64_t phi24 = phi_in19;
			uint64_t phi25 = phi_in20;
			uint8_t* phi26 = phi_in21;
			if (*phi22 != 0)
			{
				uint64_t anon29;
				if (*phi22 == *anon3)
				{
					anon29 = phi24 + 1;
					uint8_t* anon28 = (uint8_t*)anon29;
					uint8_t* anon27 = strchr(anon28, (__sext int32_t)*phi22);
					if (anon27 == null)
					{
						*(uint8_t*)phi25 = *phi22;
						phi15 = anon29;
						uint64_t anon30 = phi25 + 1;
						phi16 = anon30;
						phi17 = (uint8_t*)anon30;
						phi_in18 = anon28;
					}
					else 
					{
						*anon27 = 0;
						uint8_t* anon31 = strchr(anon28, 32);
						if (anon31 == null)
						{
							uint8_t* anon32 = getenv(anon28);
							if (anon32 == null)
							{
								*anon27 = *anon3;
								*(uint8_t*)phi25 = *anon3;
								*(uint8_t*)(phi25 + 1) = *anon3;
								uint64_t anon33 = phi24 + 2;
								phi15 = anon33;
								uint64_t anon34 = phi25 + 2;
								phi16 = anon34;
								phi17 = (uint8_t*)anon34;
								phi_in18 = (uint8_t*)anon33;
							}
							else 
							{
								uint64_t phi37;
								uint64_t phi38;
								uint8_t* anon47;
								uint64_t phi_in35 = (uint64_t)anon32;
								uint64_t phi_in36 = phi25;
								do
								{
									phi37 = phi_in35;
									phi38 = phi_in36;
									if (*(uint8_t*)phi37 != 0)
									{
										uint64_t anon39;
										uint64_t anon48;
										if (*(uint8_t*)phi37 == 92)
										{
											anon39 = phi37 + 1;
											uint8_t anon40 = *(uint8_t*)anon39 - 48;
											if (*(uint8_t*)anon39 == 57 | anon40 < 9)
											{
												uint64_t anon42 = phi37 + 2;
												uint64_t anon41 = (__zext uint64_t)*(uint8_t*)anon42 + 4294967248;
												if ((uint8_t)anon41 < 10)
												{
													uint64_t phi43;
													uint64_t phi45;
													uint64_t anon44 = anon41 + ((__zext uint64_t)*(uint8_t*)anon39 << 3) + 34359737984;
													phi43 = anon44;
													uint64_t anon46 = phi37 + 3;
													phi45 = anon46;
													if (((__zext uint8_t)(*(uint8_t*)anon46 != 57) & (__zext uint8_t)(*(uint8_t*)anon46 - 48 > 8)) == 0)
													{
														phi43 = (__zext uint64_t)*(uint8_t*)anon46 + 4294967248 + (anon44 << 3) & 0xffffffff;
														phi45 = phi37 + 4;
													}
													anon47 = (uint8_t*)phi38;
													*anon47 = (uint8_t)phi43;
													phi_in35 = phi45;
													anon48 = phi38 + 1;
													phi_in36 = anon48;
												}
												else 
												{
													*anon47 = anon40;
													phi_in35 = anon42;
													phi_in36 = anon48;
												}
											}
											else 
											{
												*anon47 = 92;
												phi_in35 = anon39;
												phi_in36 = anon48;
											}
										}
										else 
										{
											*anon47 = *(uint8_t*)phi37;
											phi_in35 = anon39;
											phi_in36 = anon48;
										}
									}
								}
								while (*(uint8_t*)phi37 != 0);
								uint64_t anon49 = (uint64_t)anon27 + 1;
								phi15 = anon49;
								phi16 = phi38;
								phi17 = anon47;
								phi_in18 = (uint8_t*)anon49;
							}
						}
						else 
						{
							*(uint8_t*)phi25 = *phi22;
							*anon27 = *phi22;
							phi15 = anon29;
							uint64_t anon50 = phi25 + 1;
							phi16 = anon50;
							phi17 = (uint8_t*)anon50;
							phi_in18 = anon28;
						}
					}
				}
				else 
				{
					*phi26 = *phi22;
					uint64_t anon51 = (uint64_t)phi26 + 1;
					phi23 = anon51;
					phi24 = anon29;
					phi25 = anon51;
					phi26 = (uint8_t*)anon51;
					if (*phi22 == 0)
					{
						break;
					}
				}
			}
		}
		while (*phi22 != 0);
		*anon14 = (uint32_t)phi23 - 6296320;
		return 6296320;
	}
}
void tng(uint64_t arg0)
{
	uint64_t anon1 = cb(4196603);
	*(uint64_t*)0x603b00 = anon1;
	*(uint64_t*)0x601248 = 14981091566371624;
	uint32_t* anon2 = (uint32_t*)0x6012c0;
	uint64_t anon5 = (__zext uint64_t)*anon2;
	uint64_t anon4 = anon5 >> 1 & 0x1f;
	uint32_t anon3 = anon4 == 0 ? *anon2 : (uint32_t)(anon5 << anon4);
	*anon2 = anon3 * anon3;
	return;
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4196707);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601000)(arg1 & 0xffffffff, arg2, arg3);
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
