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
			uint64_t phi15;
			uint64_t phi_in16;
			uint64_t phi17;
			uint16_t phi_in18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t* phi24;
			uint64_t phi26;
			uint64_t* phi27;
			uint16_t phi28;
			uint64_t phi29;
			uint64_t phi30;
			uint64_t phi_in31;
			uint64_t* phi_in32;
			uint64_t phi_in33;
			uint64_t phi68;
			uint64_t phi_in71;
			uint64_t phi72;
			uint64_t* phi73;
			uint64_t phi74;
			uint64_t phi75;
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
				uint64_t phi_in34;
				uint64_t phi35;
				uint64_t phi36;
				uint64_t phi_in13 = anon8;
				uint64_t phi_in14 = anon8 + 16;
				phi15 = anon9;
				phi_in16 = 2;
				phi17 = anon6;
				phi_in18 = 1;
				phi19 = phi_in13;
				phi20 = phi_in14;
				phi_in14 = phi15;
				phi21 = phi_in16;
				phi_in13 = phi17;
				phi22 = phi19;
				phi23 = 0;
				uint64_t* anon25 = (uint64_t*)phi19;
				phi24 = anon25;
				phi26 = phi_in14;
				phi27 = anon25;
				phi28 = phi_in18;
				phi29 = 0;
				phi30 = *(uint64_t*)phi_in13;
				phi_in31 = phi19;
				phi_in32 = phi24;
				phi_in33 = phi30;
				if (phi_in33 == 0 & phi28 == 65535)
				{
					phi_in34 = phi22;
					phi35 = phi_in31;
					phi36 = phi20;
					uint8_t* anon38 = malloc(2016);
					uint64_t anon37 = (uint64_t)anon38;
					*(uint64_t*)(anon37 + 8) = phi22;
					uint64_t phi_in39 = phi_in31;
					uint64_t* phi40 = phi_in32;
					uint64_t phi41 = phi20;
					uint64_t phi42 = phi29;
					uint64_t phi_in43 = phi23;
					if ((phi23 & 0xffff) != 0)
					{
						uint64_t anon52;
						do
						{
							uint64_t* phi44 = phi40;
							uint64_t phi45 = phi_in43;
							uint128_t anon46 = (__zext uint128_t)(phi45 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi41 = (uint16_t)phi45 + (uint16_t)anon46 * 55536;
							uint64_t phi47 = *(uint64_t*)(anon37 + 8);
							uint64_t phi48 = phi_in39;
							uint64_t phi_in49 = phi41 + 2;
							uint64_t phi_in50 = phi42 + 1;
							if (phi42 >= 999)
							{
								uint64_t phi51 = *phi44;
								if (*phi44 == 0)
								{
									*(uint64_t*)*(uint64_t*)(anon37 + 8) = anon37;
									*(uint64_t*)anon38 = 0;
									phi51 = anon37;
								}
								phi47 = phi51;
								phi48 = phi51;
								phi_in49 = phi51 + 16;
								phi44 = (uint64_t*)phi51;
								phi_in50 = 0;
							}
							phi_in34 = phi47;
							phi35 = phi48;
							phi36 = phi_in49;
							*(uint64_t*)(anon37 + 8) = phi47;
							phi_in39 = phi48;
							phi40 = phi44;
							phi41 = phi_in49;
							phi42 = phi_in50;
							anon52 = (uint64_t)anon46;
							phi_in43 = anon52;
						}
						while (anon52 != 0);
					}
				}
				phi11 = phi35;
				*(uint16_t*)phi36 = 65535;
				phi10 = phi_in34;
			}
			uint64_t phi53 = phi10;
			uint64_t phi_in54 = 0;
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
					phi_in54 = 0;
					phi55 = phi11;
					phi56 = phi58;
					if (*(uint16_t*)(phi11 + (phi58 << 1) + 16) != 65535)
					{
						phi53 = phi10;
						phi_in54 = 0;
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
				uint64_t phi59 = phi_in54;
				uint64_t phi_in60 = phi55;
				uint64_t anon62 = phi56 - 1;
				phi_in61 = anon62;
				uint64_t phi63 = phi59;
				if (anon62 > -1)
				{
					uint64_t anon67;
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
						phi63 = phi66;
						printf(phi65);
						anon67 = phi64 - 1;
						phi_in61 = anon67;
						phi59 = phi63;
						phi_in60 = phi53;
					}
					while (anon67 > -1);
				}
				phi68 = phi_in60;
				phi53 = *(uint64_t*)(phi68 + 8);
				phi_in54 = phi63;
				phi55 = *(uint64_t*)(phi68 + 8);
				phi56 = 1000;
			}
			while (*(uint64_t*)(phi68 + 8) != 0);
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi_in18 = 65535;
			uint16_t anon69 = (uint16_t)phi23 + phi28 * (uint16_t)phi21;
			uint128_t anon70 = (__zext uint128_t)anon69 * 3777893186295716171 >> 75;
			*(uint16_t*)phi20 = anon69 + (uint16_t)anon70 * 55536;
			if (phi29 < 1000)
			{
				phi_in71 = phi20 + 2;
				phi72 = phi_in31;
				phi24 = phi_in32;
				phi73 = phi27;
				phi74 = phi_in33;
				phi75 = phi26 + 2;
				phi29 = phi29 + 1;
			}
			else 
			{
				uint64_t phi76 = *phi27;
				uint64_t phi77 = phi_in33;
				if (*phi27 == 0)
				{
					uint8_t* anon78 = malloc(2016);
					uint64_t anon79 = (uint64_t)anon78;
					*(uint64_t*)phi22 = anon79;
					*(uint64_t*)anon78 = 0;
					*(uint64_t*)(anon79 + 8) = phi22;
					phi76 = anon79;
					phi77 = anon79;
				}
				phi22 = phi76;
				phi_in71 = phi76 + 16;
				phi72 = phi76;
				uint64_t* anon80 = (uint64_t*)phi76;
				phi24 = anon80;
				phi73 = anon80;
				phi74 = *(uint64_t*)phi77;
				phi75 = phi77 + 16;
				phi29 = 0;
			}
			phi19 = phi72;
			phi27 = phi73;
			phi30 = phi74;
			phi26 = phi75;
			phi20 = phi_in71;
			phi23 = (uint64_t)anon70;
			phi28 = *(uint16_t*)phi26;
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
