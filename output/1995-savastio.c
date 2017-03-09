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
	uint64_t* phi_in25;
	uint64_t phi_in62;
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
			uint64_t phi24;
			uint64_t phi27;
			uint64_t* phi28;
			uint64_t phi29;
			uint64_t phi30;
			uint64_t phi_in31;
			uint64_t* phi32;
			uint64_t phi_in33;
			uint64_t phi68;
			uint64_t phi_in71;
			uint64_t phi72;
			uint64_t phi73;
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
				uint64_t phi34;
				uint64_t phi35;
				uint64_t phi36;
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
				phi23 = phi19;
				phi24 = 0;
				uint64_t* anon26 = (uint64_t*)phi18;
				phi_in25 = anon26;
				phi27 = phi_in14;
				phi28 = anon26;
				phi29 = 0;
				phi30 = *(uint64_t*)phi_in13;
				phi_in31 = phi18;
				phi32 = phi28;
				phi_in33 = phi30;
				if (phi_in33 == 0 & phi21 == 65535)
				{
					phi34 = phi22;
					phi35 = phi_in31;
					phi36 = phi23;
					uint8_t* anon38 = malloc(2016);
					uint64_t anon37 = (uint64_t)anon38;
					*(uint64_t*)(anon37 + 8) = phi22;
					uint64_t phi39 = phi_in31;
					uint64_t* phi40 = phi_in25;
					uint64_t phi41 = phi23;
					uint64_t phi42 = phi29;
					uint64_t phi_in43 = phi24;
					if ((phi24 & 0xffff) != 0)
					{
						uint64_t anon53;
						do
						{
							uint64_t phi44 = *(uint64_t*)(anon37 + 8);
							uint64_t phi_in45 = phi39;
							uint64_t* phi46 = phi40;
							uint64_t phi47 = phi_in43;
							uint128_t anon48 = (__zext uint128_t)(phi47 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi41 = (uint16_t)phi47 + (uint16_t)anon48 * 55536;
							uint64_t phi49 = phi_in45;
							uint64_t phi50 = phi41 + 2;
							uint64_t phi51 = phi42 + 1;
							if (phi42 >= 999)
							{
								uint64_t phi52 = *phi46;
								if (*phi46 == 0)
								{
									*(uint64_t*)phi44 = anon37;
									*(uint64_t*)anon38 = 0;
									*(uint64_t*)(anon37 + 8) = phi44;
									phi52 = anon37;
								}
								phi44 = phi52;
								phi49 = phi44;
								phi50 = phi44 + 16;
								phi46 = (uint64_t*)phi44;
								phi51 = 0;
							}
							phi34 = phi44;
							phi35 = phi49;
							phi36 = phi50;
							*(uint64_t*)(anon37 + 8) = phi44;
							phi39 = phi49;
							phi40 = phi46;
							phi41 = phi50;
							phi42 = phi51;
							anon53 = (uint64_t)anon48;
							phi_in43 = anon53;
						}
						while (anon53 != 0);
					}
				}
				uint64_t phi_in54 = phi34;
				uint64_t phi_in55 = phi35;
				*(uint16_t*)phi36 = 65535;
				phi10 = phi_in54;
				phi11 = phi_in55;
			}
			uint64_t phi56 = phi10;
			uint64_t phi57 = 0;
			uint64_t phi_in58 = phi11;
			uint64_t phi59 = 0;
			uint64_t phi_in60 = 1;
			if (*(uint16_t*)(phi11 + 16) != 65535)
			{
				uint64_t phi61;
				do
				{
					phi61 = phi_in60;
					phi56 = phi10;
					phi57 = 0;
					phi_in58 = phi11;
					phi59 = phi61;
					if (*(uint16_t*)(phi11 + (phi61 << 1) + 16) != 65535)
					{
						phi56 = phi10;
						phi57 = 0;
						phi_in58 = phi11;
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
				uint64_t anon63 = phi59 - 1;
				phi_in62 = anon63;
				uint64_t phi64 = phi57;
				if (anon63 > -1)
				{
					uint64_t anon67;
					do
					{
						uint64_t phi65 = phi_in62;
						uint8_t* phi66 = (uint8_t*)0x400a44;
						phi57 = 1;
						if (phi64 != 0)
						{
							phi66 = (uint8_t*)0x400a48;
							phi57 = 20;
							if (phi64 != ((uint64_t)((__zext uint128_t)phi64 * 970881267037344822 >> 64) - (phi64 >> 63)) * 19)
							{
								phi66 = (uint8_t*)0x400a49;
								phi57 = phi64 + 1;
							}
						}
						printf(phi66);
						anon67 = phi65 - 1;
						phi_in62 = anon67;
						phi64 = phi57;
						phi_in58 = phi56;
					}
					while (anon67 > -1);
				}
				phi68 = phi_in58;
				phi56 = *(uint64_t*)(phi68 + 8);
				phi57 = phi57;
				phi_in58 = *(uint64_t*)(phi68 + 8);
				phi59 = 1000;
			}
			while (*(uint64_t*)(phi68 + 8) != 0);
			phi15 = phi19;
			phi_in16 = (phi20 & 0xffff) + 1;
			phi_in13 = phi18;
			phi17 = 65535;
			uint16_t anon69 = (uint16_t)phi24 + phi21 * (uint16_t)phi20;
			uint128_t anon70 = (__zext uint128_t)anon69 * 3777893186295716171 >> 75;
			*(uint16_t*)phi23 = anon69 + (uint16_t)anon70 * 55536;
			if (phi29 < 1000)
			{
				phi_in71 = phi23 + 2;
				phi72 = phi_in31;
				phi73 = phi_in33;
				phi74 = phi27 + 2;
				phi75 = phi29 + 1;
			}
			else 
			{
				phi22 = *phi32;
				uint64_t phi76 = phi_in33;
				if (*phi32 == 0)
				{
					uint8_t* anon77 = malloc(2016);
					uint64_t anon78 = (uint64_t)anon77;
					*(uint64_t*)phi22 = anon78;
					*(uint64_t*)anon77 = 0;
					*(uint64_t*)(anon78 + 8) = phi22;
					phi22 = anon78;
					phi76 = anon78;
				}
				phi_in71 = phi22 + 16;
				phi72 = phi22;
				uint64_t* anon79 = (uint64_t*)phi22;
				phi_in25 = anon79;
				phi32 = anon79;
				phi73 = *(uint64_t*)phi76;
				phi74 = phi76 + 16;
				phi75 = 0;
			}
			phi18 = phi72;
			phi28 = phi32;
			phi30 = phi73;
			phi29 = phi75;
			phi23 = phi_in71;
			phi24 = (uint64_t)anon70;
			phi27 = phi74;
			phi21 = *(uint16_t*)phi74;
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
