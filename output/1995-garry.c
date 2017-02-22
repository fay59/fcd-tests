#include "tests/bin/1995-garry.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6011e8 != 0)
	{
		__gmon_start__(4195557);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x601228);
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
	uint64_t anon8;
	uint32_t* phi7;
	uint64_t anon9;
	uint64_t phi6;
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
	uint64_t phi_in15 = 6306624;
	uint64_t phi_in16 = 6296320;
	uint8_t* phi_in17 = (uint8_t*)0x601300;
	uint8_t* phi_in18 = anon2;
	uint32_t dispatch19 = 0;
	if (anon1 == null)
	{
		return 6306624;
	}
	else 
	{
		uint64_t phi_in24;
		while (true)
		{
			uint64_t phi_in25;
			uint64_t phi_in40;
			uint8_t* anon32;
			uint64_t phi_in26;
			uint8_t* anon31;
			uint8_t* anon36;
			uint64_t phi_in39;
			uint8_t* phi_in27;
			uint64_t phi29;
			uint8_t* anon35;
			uint8_t* phi30;
			uint64_t phi28;
			uint8_t* phi23;
			uint64_t anon33;
			if (dispatch19 == 0)
			{
				uint64_t phi20 = phi_in15;
				uint64_t phi21 = phi_in16;
				uint8_t* phi22 = phi_in17;
				phi23 = phi_in18;
				phi_in24 = phi21;
				phi_in25 = phi20;
				phi_in26 = phi21;
				phi_in27 = phi22;
				if (*phi23 == 0)
				{
					break;
				}
			}
			if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
			{
				phi28 = phi_in25;
				phi29 = phi_in26;
				phi30 = phi_in27;
			}
			if (*phi23 == *anon3)
			{
				if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
				{
					anon33 = phi28 + 1;
					anon32 = (uint8_t*)anon33;
					anon31 = strchr(anon32, (__sext int32_t)*phi23);
				}
				if (anon31 == null)
				{
					if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
					{
						*(uint8_t*)phi29 = *phi23;
						phi_in15 = anon33;
						uint64_t anon34 = phi29 + 1;
						phi_in16 = anon34;
						phi_in17 = (uint8_t*)anon34;
						phi_in18 = anon32;
						dispatch19 = 0;
					}
				}
				else 
				{
					if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
					{
						*anon31 = 0;
						anon35 = strchr(anon32, 32);
					}
					if (anon35 == null)
					{
						if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
						{
							anon36 = getenv(anon32);
						}
						if (anon36 == null)
						{
							if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
							{
								*anon31 = *anon3;
								*(uint8_t*)phi29 = *anon3;
								*(uint8_t*)(phi29 + 1) = *anon3;
								uint64_t anon37 = phi28 + 2;
								phi_in15 = anon37;
								uint64_t anon38 = phi29 + 2;
								phi_in16 = anon38;
								phi_in17 = (uint8_t*)anon38;
								phi_in18 = (uint8_t*)anon37;
								dispatch19 = 0;
							}
						}
						else if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
						{
							phi_in39 = (uint64_t)anon36;
							phi_in40 = phi29;
						}
					}
				}
			}
			if (dispatch19 == 2 || anon31 != null && anon36 != null && dispatch19 == 1 && *phi23 == *anon3 && anon35 == null || *phi23 != 0 && anon31 != null && anon36 != null && dispatch19 == 0 && *phi23 == *anon3 && anon35 == null)
			{
				uint64_t anon45;
				uint8_t* anon44;
				uint64_t anon55;
				uint64_t phi41 = phi_in39;
				uint64_t phi42 = phi_in40;
				if (*(uint8_t*)phi41 == 0)
				{
					uint64_t anon43 = (uint64_t)anon31 + 1;
					phi_in15 = anon43;
					phi_in16 = phi42;
					anon44 = (uint8_t*)phi42;
					phi_in17 = anon44;
					phi_in18 = (uint8_t*)anon43;
					dispatch19 = 0;
				}
				else if (*(uint8_t*)phi41 == 92)
				{
					anon45 = phi41 + 1;
					uint8_t anon46 = *(uint8_t*)anon45 - 48;
					if (*(uint8_t*)anon45 == 57 | anon46 < 9)
					{
						uint64_t anon48 = phi41 + 2;
						uint64_t anon47 = (__zext uint64_t)*(uint8_t*)anon48 + 4294967248;
						if ((uint8_t)anon47 < 10)
						{
							uint64_t phi_in51;
							uint64_t phi_in49;
							uint64_t anon50 = anon47 + ((__zext uint64_t)*(uint8_t*)anon45 << 3) + 34359737984;
							phi_in49 = anon50;
							uint64_t anon52 = phi41 + 3;
							phi_in51 = anon52;
							if (((__zext uint8_t)(*(uint8_t*)anon52 != 57) & (__zext uint8_t)(*(uint8_t*)anon52 - 48 > 8)) == 0)
							{
								phi_in49 = (__zext uint64_t)*(uint8_t*)anon52 + 4294967248 + (anon50 << 3) & 0xffffffff;
								phi_in51 = phi41 + 4;
							}
							uint64_t phi53 = phi_in49;
							uint64_t phi54 = phi_in51;
							*anon44 = (uint8_t)phi53;
							phi_in39 = phi54;
							anon55 = phi42 + 1;
							phi_in40 = anon55;
							dispatch19 = 2;
						}
						else 
						{
							*anon44 = anon46;
							phi_in39 = anon48;
							phi_in40 = anon55;
							dispatch19 = 2;
						}
					}
					else 
					{
						*anon44 = 92;
						phi_in39 = anon45;
						phi_in40 = anon55;
						dispatch19 = 2;
					}
				}
				else 
				{
					*anon44 = *(uint8_t*)phi41;
					phi_in39 = anon45;
					phi_in40 = anon55;
					dispatch19 = 2;
				}
			}
			if (*phi23 == *anon3)
			{
				if (anon31 != null && anon35 != null && (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0))
				{
					*(uint8_t*)phi29 = *phi23;
					*anon31 = *phi23;
					phi_in15 = anon33;
					uint64_t anon56 = phi29 + 1;
					phi_in16 = anon56;
					phi_in17 = (uint8_t*)anon56;
					phi_in18 = anon32;
					dispatch19 = 0;
				}
			}
			else if (dispatch19 == 1 || *phi23 != 0 && dispatch19 == 0)
			{
				*phi30 = *phi23;
				uint64_t anon57 = (uint64_t)phi30 + 1;
				phi_in24 = anon57;
				phi_in25 = anon33;
				phi_in26 = anon57;
				phi_in27 = (uint8_t*)anon57;
				dispatch19 = 1;
				if (*phi23 == 0)
				{
					break;
				}
			}
		}
		uint64_t phi58 = phi_in24;
		*anon14 = (uint32_t)phi58 - 6296320;
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
