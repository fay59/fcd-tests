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
	uint32_t dispatch19 = 0;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint64_t phi24;
		while (true)
		{
			uint8_t* phi22;
			uint8_t* phi23;
			uint64_t phi25;
			uint64_t phi26;
			uint8_t* anon27;
			uint8_t* anon28;
			uint64_t anon29;
			uint8_t* anon31;
			uint8_t* anon32;
			uint64_t phi_in35;
			uint64_t phi_in36;
			if (dispatch19 == 0)
			{
				uint64_t phi_in20 = phi15;
				uint64_t phi_in21 = phi16;
				phi22 = phi17;
				phi23 = phi_in18;
				phi24 = phi_in21;
				phi25 = phi_in20;
				phi26 = phi_in21;
				if (*phi23 == 0)
				{
					break;
				}
			}
			if (*phi23 == *anon3)
			{
				if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
				{
					anon29 = phi25 + 1;
					anon28 = (uint8_t*)anon29;
					anon27 = strchr(anon28, (__sext int32_t)*phi23);
				}
				if (anon27 == null)
				{
					if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
					{
						*(uint8_t*)phi26 = *phi23;
						phi15 = anon29;
						uint64_t anon30 = phi26 + 1;
						phi16 = anon30;
						phi17 = (uint8_t*)anon30;
						phi_in18 = anon28;
						dispatch19 = 0;
					}
				}
				else 
				{
					if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
					{
						*anon27 = 0;
						anon31 = strchr(anon28, 32);
					}
					if (anon31 == null)
					{
						if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
						{
							anon32 = getenv(anon28);
						}
						if (anon32 == null)
						{
							if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
							{
								*anon27 = *anon3;
								*(uint8_t*)phi26 = *anon3;
								*(uint8_t*)(phi26 + 1) = *anon3;
								uint64_t anon33 = phi25 + 2;
								phi15 = anon33;
								uint64_t anon34 = phi26 + 2;
								phi16 = anon34;
								phi17 = (uint8_t*)anon34;
								phi_in18 = (uint8_t*)anon33;
								dispatch19 = 0;
							}
						}
						else if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
						{
							phi_in35 = (uint64_t)anon32;
							phi_in36 = phi26;
						}
					}
				}
			}
			if (dispatch19 == 2 || anon27 != null && anon32 != null && dispatch19 == 1 && *phi23 == *anon3 && anon31 == null || *phi23 != 0 && anon27 != null && anon32 != null && dispatch19 == 0 && *phi23 == *anon3 && anon31 == null)
			{
				uint8_t* anon40;
				uint64_t anon41;
				uint64_t anon48;
				uint64_t phi37 = phi_in35;
				uint64_t phi38 = phi_in36;
				if (*(uint8_t*)phi37 == 0)
				{
					uint64_t anon39 = (uint64_t)anon27 + 1;
					phi15 = anon39;
					phi16 = phi38;
					anon40 = (uint8_t*)phi38;
					phi17 = anon40;
					phi_in18 = (uint8_t*)anon39;
					dispatch19 = 0;
				}
				else if (*(uint8_t*)phi37 == 92)
				{
					anon41 = phi37 + 1;
					uint8_t anon42 = *(uint8_t*)anon41 - 48;
					if (*(uint8_t*)anon41 == 57 | anon42 < 9)
					{
						uint64_t anon44 = phi37 + 2;
						uint64_t anon43 = (__zext uint64_t)*(uint8_t*)anon44 + 4294967248;
						if ((uint8_t)anon43 < 10)
						{
							uint64_t phi45;
							uint64_t anon46 = anon43 + ((__zext uint64_t)*(uint8_t*)anon41 << 3) + 34359737984;
							phi45 = anon46;
							uint64_t anon47 = phi37 + 3;
							phi_in35 = anon47;
							if (((__zext uint8_t)(*(uint8_t*)anon47 != 57) & (__zext uint8_t)(*(uint8_t*)anon47 - 48 > 8)) == 0)
							{
								phi45 = (__zext uint64_t)*(uint8_t*)anon47 + 4294967248 + (anon46 << 3) & 0xffffffff;
								phi_in35 = phi37 + 4;
							}
							*anon40 = (uint8_t)phi45;
							anon48 = phi38 + 1;
							phi_in36 = anon48;
							dispatch19 = 2;
						}
						else 
						{
							*anon40 = anon42;
							phi_in35 = anon44;
							phi_in36 = anon48;
							dispatch19 = 2;
						}
					}
					else 
					{
						*anon40 = 92;
						phi_in35 = anon41;
						phi_in36 = anon48;
						dispatch19 = 2;
					}
				}
				else 
				{
					*anon40 = *(uint8_t*)phi37;
					phi_in35 = anon41;
					phi_in36 = anon48;
					dispatch19 = 2;
				}
			}
			if (*phi23 == *anon3)
			{
				if (anon27 != null && anon31 != null && (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0))
				{
					*(uint8_t*)phi26 = *phi23;
					*anon27 = *phi23;
					phi15 = anon29;
					uint64_t anon49 = phi26 + 1;
					phi16 = anon49;
					phi17 = (uint8_t*)anon49;
					phi_in18 = anon28;
					dispatch19 = 0;
				}
			}
			else if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
			{
				*phi22 = *phi23;
				uint64_t anon50 = (uint64_t)phi22 + 1;
				phi24 = anon50;
				phi25 = anon29;
				phi26 = anon50;
				phi22 = (uint8_t*)anon50;
				dispatch19 = 1;
				if (*phi23 == 0)
				{
					break;
				}
			}
		}
		*anon14 = (uint32_t)phi24 - 6296320;
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
