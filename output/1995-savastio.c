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
	uint64_t phi_in63;
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
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t phi26;
			uint64_t* phi27;
			uint64_t phi29;
			uint64_t* phi30;
			uint16_t phi31;
			uint64_t phi32;
			uint64_t phi33;
			uint64_t anon34;
			uint8_t* anon35;
			uint64_t phi_in36;
			uint64_t* phi_in37;
			uint64_t phi38;
			uint64_t phi69;
			uint64_t phi_in72;
			uint64_t phi73;
			uint64_t phi74;
			uint64_t* phi75;
			uint64_t phi_in76;
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
				uint64_t phi39;
				uint64_t phi40;
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
				uint16_t phi_in22 = phi18;
				phi23 = phi19;
				phi24 = phi20;
				phi25 = 0;
				phi26 = phi19;
				uint64_t* anon28 = (uint64_t*)phi19;
				phi27 = anon28;
				phi29 = phi_in14;
				phi30 = anon28;
				phi31 = phi_in22;
				phi32 = 0;
				phi33 = *(uint64_t*)phi_in13;
				anon35 = malloc(2016);
				anon34 = (uint64_t)anon35;
				*(uint64_t*)(anon34 + 8) = phi23;
				phi_in36 = phi26;
				phi_in37 = phi27;
				phi38 = phi33;
				if (phi38 == 0 & phi31 == 65535)
				{
					phi39 = *(uint64_t*)(anon34 + 8);
					phi11 = phi_in36;
					phi40 = phi24;
					uint8_t* anon42 = malloc(2016);
					uint64_t anon41 = (uint64_t)anon42;
					*(uint64_t*)(anon41 + 8) = *(uint64_t*)(anon34 + 8);
					uint64_t phi_in43 = phi_in36;
					uint64_t* phi44 = phi_in37;
					uint64_t phi45 = phi24;
					uint64_t phi46 = phi32;
					uint64_t phi_in47 = phi25;
					if ((phi25 & 0xffff) != 0)
					{
						uint64_t anon55;
						do
						{
							uint64_t phi48 = phi_in47;
							uint128_t anon49 = (__zext uint128_t)(phi48 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi45 = (uint16_t)phi48 + (uint16_t)anon49 * 55536;
							uint64_t phi_in50 = *(uint64_t*)(anon41 + 8);
							uint64_t phi_in51 = phi_in43;
							uint64_t phi52 = phi45 + 2;
							phi44 = phi44;
							uint64_t phi53 = phi46 + 1;
							if (phi46 >= 999)
							{
								uint64_t phi54 = *phi44;
								if (*phi44 == 0)
								{
									*(uint64_t*)*(uint64_t*)(anon41 + 8) = anon41;
									*(uint64_t*)anon42 = 0;
									phi54 = anon41;
								}
								phi_in51 = phi54;
								phi_in50 = phi_in51;
								phi52 = phi_in51 + 16;
								phi44 = (uint64_t*)phi_in51;
								phi53 = 0;
							}
							phi39 = phi_in50;
							phi11 = phi_in51;
							phi40 = phi52;
							*(uint64_t*)(anon41 + 8) = phi_in50;
							phi_in43 = phi_in51;
							phi45 = phi52;
							phi46 = phi53;
							anon55 = (uint64_t)anon49;
							phi_in47 = anon55;
						}
						while (anon55 != 0);
					}
				}
				phi10 = phi39;
				*(uint16_t*)phi40 = 65535;
			}
			uint64_t phi56 = phi10;
			uint64_t phi_in57 = phi11;
			uint64_t phi58 = 0;
			uint64_t phi59 = 0;
			uint64_t phi_in60 = 1;
			if (*(uint16_t*)(phi_in57 + 16) != 65535)
			{
				uint64_t phi61;
				do
				{
					phi61 = phi_in60;
					phi58 = 0;
					phi59 = phi61;
					if (*(uint16_t*)(phi_in57 + (phi61 << 1) + 16) != 65535)
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
				while (*(uint16_t*)(phi_in57 + (phi61 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi62 = phi58;
				uint64_t anon64 = phi59 - 1;
				phi_in63 = anon64;
				uint64_t phi65 = phi62;
				if (anon64 > -1)
				{
					uint64_t anon68;
					do
					{
						uint64_t phi66 = phi_in63;
						uint8_t* phi67 = (uint8_t*)0x400a44;
						phi62 = 1;
						if (phi65 != 0)
						{
							phi67 = (uint8_t*)0x400a48;
							phi62 = 20;
							if (phi65 != ((uint64_t)((__zext uint128_t)phi65 * 970881267037344822 >> 64) - (phi65 >> 63)) * 19)
							{
								phi67 = (uint8_t*)0x400a49;
								phi62 = phi65 + 1;
							}
						}
						printf(phi67);
						anon68 = phi66 - 1;
						phi_in63 = anon68;
						phi65 = phi62;
						phi_in57 = phi56;
					}
					while (anon68 > -1);
				}
				phi69 = phi_in57;
				phi56 = *(uint64_t*)(phi69 + 8);
				phi58 = phi62;
				phi_in57 = *(uint64_t*)(phi69 + 8);
				phi59 = 1000;
			}
			while (*(uint64_t*)(phi69 + 8) != 0);
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi18 = 65535;
			uint16_t anon70 = (uint16_t)phi25 + phi31 * (uint16_t)phi21;
			uint128_t anon71 = (__zext uint128_t)anon70 * 3777893186295716171 >> 75;
			*(uint16_t*)phi24 = anon70 + (uint16_t)anon71 * 55536;
			if (phi32 < 1000)
			{
				phi_in72 = *(uint64_t*)(anon34 + 8);
				phi73 = phi24 + 2;
				phi74 = phi_in36;
				phi27 = phi_in37;
				phi75 = phi30;
				phi29 = phi29 + 2;
				phi_in76 = phi32 + 1;
			}
			else 
			{
				uint64_t phi77 = *phi30;
				uint64_t phi78 = phi38;
				if (*phi30 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon34 + 8) = anon34;
					*(uint64_t*)anon35 = 0;
					phi77 = anon34;
					phi78 = anon34;
				}
				phi_in72 = phi77;
				phi73 = phi77 + 16;
				phi74 = phi77;
				uint64_t* anon79 = (uint64_t*)phi77;
				phi27 = anon79;
				phi75 = anon79;
				phi38 = *(uint64_t*)phi78;
				phi29 = phi78 + 16;
				phi_in76 = 0;
			}
			phi24 = phi73;
			phi26 = phi74;
			phi30 = phi75;
			phi33 = phi38;
			phi23 = phi_in72;
			phi25 = (uint64_t)anon71;
			phi31 = *(uint16_t*)phi29;
			phi32 = phi_in76;
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
