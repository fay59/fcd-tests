#include "tests/bin/1995-savastio.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600da8 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0)
{
	struct _IO_FILE** anon4;
	uint64_t phi_in61;
	uint64_t phi_in1 = 0;
	uint8_t phi2 = 9;
	while (true)
	{
		uint64_t anon12;
		uint64_t phi3 = phi_in1;
		anon4 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon4);
		if (phi3 >= 13)
		{
			uint64_t phi_in13;
			uint64_t phi15;
			uint64_t phi_in16;
			uint16_t phi17;
			uint64_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint16_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t* phi26;
			uint64_t phi27;
			uint64_t phi28;
			uint64_t phi29;
			uint64_t anon30;
			uint8_t* anon31;
			uint64_t* phi_in32;
			uint64_t* phi33;
			uint64_t phi34;
			uint64_t phi69;
			uint64_t phi72;
			uint64_t* phi73;
			uint64_t phi74;
			scanf((uint8_t*)0x400a4e);
			uint8_t* anon5 = malloc(2016);
			*(uint64_t*)anon5 = 0;
			uint64_t anon6 = (uint64_t)anon5;
			*(uint64_t*)(anon6 + 8) = 0;
			uint8_t* anon7 = malloc(2016);
			*(uint64_t*)anon7 = 0;
			uint64_t anon8 = (uint64_t)anon7;
			*(uint64_t*)(anon8 + 8) = 0;
			uint64_t anon9 = anon6 + 16;
			*(uint16_t*)anon9 = 1;
			*(uint16_t*)(anon6 + 18) = 65535;
			uint64_t phi10 = anon6;
			uint64_t phi11 = anon6;
			anon12 = phi3 + 1;
			if (anon12 >= 2)
			{
				uint64_t phi_in35;
				uint64_t phi36;
				uint64_t phi37;
				phi_in13 = anon8;
				uint64_t phi_in14 = anon8 + 16;
				phi15 = anon9;
				phi_in16 = 2;
				phi_in13 = anon6;
				phi17 = 1;
				phi18 = phi_in13;
				phi19 = phi_in14;
				phi_in14 = phi15;
				phi20 = phi_in16;
				phi21 = phi17;
				phi22 = phi18;
				phi23 = 0;
				uint64_t* anon25 = (uint64_t*)phi18;
				phi24 = anon25;
				phi26 = anon25;
				phi27 = phi_in14;
				phi28 = 0;
				phi29 = *(uint64_t*)phi_in13;
				anon31 = malloc(2016);
				anon30 = (uint64_t)anon31;
				*(uint64_t*)(anon30 + 8) = phi22;
				phi_in32 = phi24;
				phi33 = phi26;
				phi34 = phi29;
				if (phi34 == 0 & phi21 == 65535)
				{
					phi_in35 = *(uint64_t*)(anon30 + 8);
					phi36 = phi18;
					phi37 = phi19;
					uint64_t phi38 = *(uint64_t*)(anon30 + 8);
					uint64_t phi39 = phi18;
					uint64_t* phi40 = phi_in32;
					uint64_t phi41 = phi19;
					uint64_t phi42 = phi28;
					uint64_t phi_in43 = phi23;
					if ((phi23 & 0xffff) != 0)
					{
						uint64_t anon52;
						do
						{
							uint8_t* anon45 = malloc(2016);
							uint64_t anon44 = (uint64_t)anon45;
							*(uint64_t*)(anon44 + 8) = phi38;
							uint64_t phi46 = phi39;
							uint64_t* phi47 = phi40;
							uint64_t phi48 = phi_in43;
							uint128_t anon49 = (__zext uint128_t)(phi48 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi41 = (uint16_t)phi48 + (uint16_t)anon49 * 55536;
							uint64_t phi50 = *(uint64_t*)(anon44 + 8);
							uint64_t phi51 = phi41 + 2;
							phi42 = phi42 + 1;
							if (phi42 >= 999)
							{
								phi46 = *phi47;
								if (*phi47 == 0)
								{
									*(uint64_t*)*(uint64_t*)(anon44 + 8) = anon44;
									*(uint64_t*)anon45 = 0;
									phi46 = anon44;
								}
								phi50 = phi46;
								phi51 = phi46 + 16;
								phi47 = (uint64_t*)phi46;
								phi42 = 0;
							}
							phi37 = phi51;
							phi_in35 = phi50;
							phi36 = phi46;
							phi38 = phi50;
							phi39 = phi46;
							phi40 = phi47;
							phi41 = phi37;
							anon52 = (uint64_t)anon49;
							phi_in43 = anon52;
						}
						while (anon52 != 0);
					}
				}
				phi11 = phi36;
				*(uint16_t*)phi37 = 65535;
				phi10 = phi_in35;
			}
			uint64_t phi53 = phi10;
			uint64_t phi54 = 0;
			uint64_t phi55 = phi11;
			uint64_t phi56 = 0;
			uint64_t phi_in57 = 1;
			if (*(uint16_t*)(phi11 + 16) != 65535)
			{
				uint64_t phi58;
				do
				{
					phi58 = phi_in57;
					phi53 = phi10;
					phi54 = 0;
					phi55 = phi11;
					phi56 = phi58;
					if (*(uint16_t*)(phi11 + (phi58 << 1) + 16) != 65535)
					{
						phi53 = phi10;
						phi54 = 0;
						phi55 = phi11;
						phi56 = 1000;
						phi_in57 = phi58 + 1;
						if (phi58 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi11 + (phi58 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi59 = phi54;
				uint64_t phi_in60 = phi55;
				uint64_t anon62 = phi56 - 1;
				phi_in61 = anon62;
				uint64_t phi63 = phi59;
				if (anon62 > -1)
				{
					uint64_t anon68;
					do
					{
						uint64_t phi64 = phi_in61;
						uint8_t* phi65 = (uint8_t*)0x400a44;
						uint64_t phi66 = 1;
						if (phi59 != 0)
						{
							phi65 = (uint8_t*)0x400a48;
							phi66 = 20;
							if (phi59 != ((uint64_t)((__zext uint128_t)phi59 * 970881267037344822 >> 64) - (phi59 >> 63)) * 19)
							{
								phi65 = (uint8_t*)0x400a49;
								phi66 = phi59 + 1;
							}
						}
						uint64_t phi_in67 = phi66;
						printf(phi65);
						anon68 = phi64 - 1;
						phi_in61 = anon68;
						phi59 = phi_in67;
						phi63 = phi_in67;
						phi_in60 = phi53;
					}
					while (anon68 > -1);
				}
				phi69 = phi_in60;
				phi53 = *(uint64_t*)(phi69 + 8);
				phi54 = phi63;
				phi55 = *(uint64_t*)(phi69 + 8);
				phi56 = 1000;
			}
			while (*(uint64_t*)(phi69 + 8) != 0);
			phi15 = phi19;
			phi_in16 = (phi20 & 0xffff) + 1;
			phi_in13 = phi18;
			phi17 = 65535;
			uint16_t anon70 = (uint16_t)phi23 + phi21 * (uint16_t)phi20;
			uint128_t anon71 = (__zext uint128_t)anon70 * 3777893186295716171 >> 75;
			*(uint16_t*)phi19 = anon70 + (uint16_t)anon71 * 55536;
			if (phi28 < 1000)
			{
				phi72 = *(uint64_t*)(anon30 + 8);
				phi19 = phi19 + 2;
				phi73 = phi_in32;
				phi27 = phi27 + 2;
				phi74 = phi28 + 1;
			}
			else 
			{
				uint64_t phi75 = *phi33;
				uint64_t phi76 = phi34;
				if (*phi33 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon30 + 8) = anon30;
					*(uint64_t*)anon31 = 0;
					phi75 = anon30;
					phi76 = anon30;
				}
				phi18 = phi75;
				phi72 = phi18;
				phi19 = phi18 + 16;
				uint64_t* anon77 = (uint64_t*)phi18;
				phi73 = anon77;
				phi33 = anon77;
				phi34 = *(uint64_t*)phi76;
				phi27 = phi76 + 16;
				phi74 = 0;
			}
			phi22 = phi72;
			uint64_t* phi24 = phi73;
			phi26 = phi33;
			phi29 = phi34;
			uint64_t phi_in78 = phi74;
			phi23 = (uint64_t)anon71;
			phi21 = *(uint16_t*)phi27;
			phi28 = phi_in78;
		}
		break;
		phi_in1 = anon12;
		phi2 = *(uint8_t*)(phi3 + 4196946);
	}
	_IO_putc(10, *anon4);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400530, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x4009c0, (void(*)())0x400a30, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x600e18;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196738);
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
	_init(4196851);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x600bc0)(arg1 & 0xffffffff, arg2, arg3);
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
