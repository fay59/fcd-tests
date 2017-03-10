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
	uint64_t phi_in60;
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
			uint64_t phi28;
			uint64_t* phi29;
			uint16_t phi30;
			uint64_t phi31;
			uint64_t phi_in32;
			uint64_t anon33;
			uint8_t* anon34;
			uint64_t phi_in35;
			uint64_t* phi_in36;
			uint64_t phi67;
			uint64_t phi70;
			uint64_t* phi71;
			uint64_t* phi_in72;
			uint64_t phi73;
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
				uint64_t phi_in37;
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
				uint16_t phi_in22 = phi18;
				phi23 = phi19;
				phi24 = 0;
				phi25 = phi19;
				uint64_t* anon27 = (uint64_t*)phi19;
				phi26 = anon27;
				phi28 = phi_in14;
				phi29 = anon27;
				phi30 = phi_in22;
				phi31 = 0;
				phi_in32 = *(uint64_t*)phi_in13;
				anon34 = malloc(2016);
				anon33 = (uint64_t)anon34;
				*(uint64_t*)(anon33 + 8) = phi23;
				phi_in35 = phi25;
				phi_in36 = phi26;
				if (phi_in32 == 0 & phi30 == 65535)
				{
					phi_in37 = *(uint64_t*)(anon33 + 8);
					phi38 = phi_in35;
					phi39 = phi20;
					uint8_t* anon41 = malloc(2016);
					uint64_t anon40 = (uint64_t)anon41;
					*(uint64_t*)(anon40 + 8) = *(uint64_t*)(anon33 + 8);
					uint64_t phi42 = phi_in35;
					uint64_t* phi43 = phi_in36;
					uint64_t phi44 = phi20;
					uint64_t phi45 = phi31;
					uint64_t phi_in46 = phi24;
					if ((phi24 & 0xffff) != 0)
					{
						uint64_t anon52;
						do
						{
							uint64_t phi47 = phi42;
							uint64_t* phi48 = phi43;
							uint64_t phi49 = phi_in46;
							uint128_t anon50 = (__zext uint128_t)(phi49 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi44 = (uint16_t)phi49 + (uint16_t)anon50 * 55536;
							phi44 = phi44 + 2;
							uint64_t phi51 = phi45 + 1;
							if (phi45 >= 999)
							{
								phi47 = *phi48;
								if (*phi48 == 0)
								{
									*(uint64_t*)*(uint64_t*)(anon40 + 8) = anon40;
									*(uint64_t*)anon41 = 0;
									phi47 = anon40;
								}
								*(uint64_t*)(anon40 + 8) = phi47;
								phi44 = phi47 + 16;
								phi48 = (uint64_t*)phi47;
								phi51 = 0;
							}
							phi38 = phi47;
							phi_in37 = *(uint64_t*)(anon40 + 8);
							phi39 = phi44;
							phi42 = phi38;
							phi43 = phi48;
							phi45 = phi51;
							anon52 = (uint64_t)anon50;
							phi_in46 = anon52;
						}
						while (anon52 != 0);
					}
				}
				phi11 = phi38;
				*(uint16_t*)phi39 = 65535;
				phi10 = phi_in37;
			}
			uint64_t phi53 = phi10;
			uint64_t phi54 = 0;
			uint64_t phi_in55 = phi11;
			uint64_t phi56 = 0;
			uint64_t phi_in57 = 1;
			if (*(uint16_t*)(phi11 + 16) != 65535)
			{
				uint64_t phi58;
				do
				{
					phi58 = phi_in57;
					phi54 = 0;
					phi_in55 = phi11;
					phi56 = phi58;
					if (*(uint16_t*)(phi11 + (phi58 << 1) + 16) != 65535)
					{
						phi54 = 0;
						phi_in55 = phi11;
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
				uint64_t anon61 = phi56 - 1;
				phi_in60 = anon61;
				uint64_t phi62 = phi59;
				if (anon61 > -1)
				{
					uint64_t anon66;
					do
					{
						uint64_t phi63 = phi_in60;
						uint8_t* phi64 = (uint8_t*)0x400a44;
						uint64_t phi65 = 1;
						if (phi62 != 0)
						{
							phi64 = (uint8_t*)0x400a48;
							phi65 = 20;
							if (phi62 != ((uint64_t)((__zext uint128_t)phi62 * 970881267037344822 >> 64) - (phi62 >> 63)) * 19)
							{
								phi64 = (uint8_t*)0x400a49;
								phi65 = phi62 + 1;
							}
						}
						phi59 = phi65;
						printf(phi64);
						anon66 = phi63 - 1;
						phi_in60 = anon66;
						phi62 = phi59;
						phi_in55 = phi53;
					}
					while (anon66 > -1);
				}
				phi67 = phi_in55;
				phi53 = *(uint64_t*)(phi67 + 8);
				phi54 = phi59;
				phi_in55 = *(uint64_t*)(phi67 + 8);
				phi56 = 1000;
			}
			while (*(uint64_t*)(phi67 + 8) != 0);
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi18 = 65535;
			uint16_t anon68 = (uint16_t)phi24 + phi30 * (uint16_t)phi21;
			uint128_t anon69 = (__zext uint128_t)anon68 * 3777893186295716171 >> 75;
			*(uint16_t*)phi20 = anon68 + (uint16_t)anon69 * 55536;
			if (phi31 < 1000)
			{
				phi23 = *(uint64_t*)(anon33 + 8);
				phi20 = phi20 + 2;
				phi70 = phi_in35;
				phi71 = phi_in36;
				phi_in72 = phi29;
				phi73 = phi_in32;
				phi74 = phi28 + 2;
				phi31 = phi31 + 1;
			}
			else 
			{
				uint64_t phi75 = *phi29;
				uint64_t phi76 = phi_in32;
				if (*phi29 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon33 + 8) = anon33;
					*(uint64_t*)anon34 = 0;
					phi75 = anon33;
					phi76 = anon33;
				}
				phi23 = phi75;
				phi20 = phi23 + 16;
				phi70 = phi23;
				uint64_t* anon77 = (uint64_t*)phi23;
				phi71 = anon77;
				phi_in72 = anon77;
				phi73 = *(uint64_t*)phi76;
				phi74 = phi76 + 16;
				phi31 = 0;
			}
			phi25 = phi70;
			uint64_t* phi26 = phi71;
			phi_in32 = phi73;
			phi28 = phi74;
			phi24 = (uint64_t)anon69;
			phi29 = phi_in72;
			phi30 = *(uint16_t*)phi28;
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
