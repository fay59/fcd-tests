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
	uint64_t phi_in64;
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
			uint64_t phi15;
			uint64_t phi_in16;
			uint64_t phi17;
			uint16_t phi18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint16_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t* phi25;
			uint64_t* phi27;
			uint64_t phi28;
			uint64_t phi29;
			uint64_t phi30;
			uint64_t anon31;
			uint8_t* anon32;
			uint64_t phi_in33;
			uint64_t* phi_in34;
			uint64_t* phi35;
			uint64_t phi_in36;
			uint64_t phi71;
			uint64_t phi74;
			uint64_t phi_in75;
			uint64_t phi76;
			uint64_t phi77;
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
				uint64_t phi37;
				uint64_t phi38;
				uint64_t phi39;
				uint64_t phi_in13 = anon8;
				uint64_t phi_in14 = anon8 + 16;
				phi15 = anon9;
				phi_in16 = 2;
				phi17 = anon6;
				phi18 = 1;
				phi19 = phi_in13;
				phi20 = phi_in14;
				phi_in14 = phi15;
				phi21 = phi_in16;
				phi_in13 = phi17;
				phi22 = phi18;
				phi23 = 0;
				phi24 = phi19;
				uint64_t* anon26 = (uint64_t*)phi19;
				phi25 = anon26;
				phi27 = anon26;
				phi28 = phi_in14;
				phi29 = 0;
				phi30 = *(uint64_t*)phi_in13;
				anon32 = malloc(2016);
				anon31 = (uint64_t)anon32;
				*(uint64_t*)(anon31 + 8) = phi19;
				phi_in33 = phi24;
				phi_in34 = phi25;
				phi35 = phi27;
				phi_in36 = phi30;
				if (phi_in36 == 0 & phi22 == 65535)
				{
					phi37 = *(uint64_t*)(anon31 + 8);
					phi38 = phi_in33;
					phi39 = phi20;
					uint64_t phi40 = *(uint64_t*)(anon31 + 8);
					uint64_t phi_in41 = phi_in33;
					uint64_t* phi42 = phi_in34;
					uint64_t phi43 = phi20;
					uint64_t phi44 = phi29;
					uint64_t phi_in45 = phi23;
					if ((phi23 & 0xffff) != 0)
					{
						uint64_t anon54;
						do
						{
							phi37 = phi40;
							uint64_t phi46 = phi_in45;
							uint128_t anon47 = (__zext uint128_t)(phi46 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi43 = (uint16_t)phi46 + (uint16_t)anon47 * 55536;
							uint64_t phi48 = phi_in41;
							uint64_t phi49 = phi43 + 2;
							phi42 = phi42;
							uint64_t phi50 = phi44 + 1;
							if (phi44 >= 999)
							{
								uint64_t phi51 = *phi42;
								if (*phi42 == 0)
								{
									uint8_t* anon52 = malloc(2016);
									uint64_t anon53 = (uint64_t)anon52;
									*(uint64_t*)phi37 = anon53;
									*(uint64_t*)anon52 = 0;
									*(uint64_t*)(anon53 + 8) = phi37;
									phi51 = anon53;
								}
								phi37 = phi51;
								phi48 = phi51;
								phi49 = phi51 + 16;
								phi42 = (uint64_t*)phi51;
								phi50 = 0;
							}
							phi38 = phi48;
							phi39 = phi49;
							phi40 = phi37;
							phi_in41 = phi48;
							phi43 = phi49;
							phi44 = phi50;
							anon54 = (uint64_t)anon47;
							phi_in45 = anon54;
						}
						while (anon54 != 0);
					}
				}
				uint64_t phi_in55 = phi37;
				uint64_t phi_in56 = phi38;
				*(uint16_t*)phi39 = 65535;
				phi10 = phi_in55;
				phi11 = phi_in56;
			}
			uint64_t phi57 = phi10;
			uint64_t phi58 = 0;
			uint64_t phi59 = 0;
			uint64_t phi_in60 = 1;
			if (*(uint16_t*)(phi11 + 16) != 65535)
			{
				uint64_t phi61;
				do
				{
					phi61 = phi_in60;
					phi58 = 0;
					phi59 = phi61;
					if (*(uint16_t*)(phi11 + (phi61 << 1) + 16) != 65535)
					{
						phi58 = 0;
						phi59 = 1000;
						phi_in60 = phi61 + 1;
						if (phi61 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi11 + (phi61 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi62 = phi58;
				uint64_t phi_in63 = phi11;
				uint64_t anon65 = phi59 - 1;
				phi_in64 = anon65;
				uint64_t phi66 = phi62;
				if (anon65 > -1)
				{
					uint64_t anon70;
					do
					{
						uint64_t phi67 = phi_in64;
						uint8_t* phi68 = (uint8_t*)0x400a44;
						uint64_t phi_in69 = 1;
						if (phi62 != 0)
						{
							phi68 = (uint8_t*)0x400a48;
							phi_in69 = 20;
							if (phi62 != ((uint64_t)((__zext uint128_t)phi62 * 970881267037344822 >> 64) - (phi62 >> 63)) * 19)
							{
								phi68 = (uint8_t*)0x400a49;
								phi_in69 = phi62 + 1;
							}
						}
						printf(phi68);
						anon70 = phi67 - 1;
						phi_in64 = anon70;
						phi62 = phi_in69;
						phi66 = phi_in69;
						phi_in63 = phi57;
					}
					while (anon70 > -1);
				}
				phi71 = phi_in63;
				phi57 = *(uint64_t*)(phi71 + 8);
				phi58 = phi66;
				phi11 = *(uint64_t*)(phi71 + 8);
				phi59 = 1000;
			}
			while (*(uint64_t*)(phi71 + 8) != 0);
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi18 = 65535;
			uint16_t anon72 = (uint16_t)phi23 + phi22 * (uint16_t)phi21;
			uint128_t anon73 = (__zext uint128_t)anon72 * 3777893186295716171 >> 75;
			*(uint16_t*)phi20 = anon72 + (uint16_t)anon73 * 55536;
			if (phi29 < 1000)
			{
				phi19 = *(uint64_t*)(anon31 + 8);
				phi74 = phi20 + 2;
				phi_in75 = phi_in33;
				phi25 = phi_in34;
				phi76 = phi28 + 2;
				phi77 = phi29 + 1;
			}
			else 
			{
				uint64_t phi78 = *phi35;
				uint64_t phi79 = phi_in36;
				if (*phi35 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon31 + 8) = anon31;
					*(uint64_t*)anon32 = 0;
					phi78 = anon31;
					phi79 = anon31;
				}
				phi19 = phi78;
				phi74 = phi78 + 16;
				phi_in75 = phi78;
				uint64_t* anon80 = (uint64_t*)phi78;
				phi25 = anon80;
				phi35 = anon80;
				phi_in36 = *(uint64_t*)phi79;
				phi76 = phi79 + 16;
				phi77 = 0;
			}
			phi20 = phi74;
			phi27 = phi35;
			phi28 = phi76;
			phi29 = phi77;
			phi23 = (uint64_t)anon73;
			phi24 = phi_in75;
			phi22 = *(uint16_t*)phi28;
			phi30 = phi_in36;
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
