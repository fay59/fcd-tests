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
	uint64_t phi_in65;
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
			uint64_t phi25;
			uint64_t phi26;
			uint64_t* phi29;
			uint64_t phi30;
			uint64_t phi31;
			uint64_t phi32;
			uint64_t anon33;
			uint8_t* anon34;
			uint64_t phi_in35;
			uint64_t* phi_in36;
			uint64_t phi_in37;
			uint64_t phi72;
			uint64_t phi75;
			uint64_t phi76;
			uint64_t phi77;
			uint64_t* phi_in78;
			uint64_t* phi79;
			uint64_t phi80;
			uint64_t phi_in81;
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
				uint64_t phi_in38;
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
				phi22 = phi18;
				phi23 = phi19;
				phi24 = phi20;
				phi25 = 0;
				phi26 = phi19;
				uint64_t* anon28 = (uint64_t*)phi19;
				phi27 = anon28;
				phi29 = anon28;
				phi30 = phi_in14;
				phi31 = 0;
				phi32 = *(uint64_t*)phi_in13;
				anon34 = malloc(2016);
				anon33 = (uint64_t)anon34;
				*(uint64_t*)(anon33 + 8) = phi23;
				phi_in35 = phi26;
				phi_in36 = phi27;
				phi_in37 = phi32;
				if (phi_in37 == 0 & phi22 == 65535)
				{
					phi_in38 = *(uint64_t*)(anon33 + 8);
					phi39 = phi_in35;
					phi40 = phi24;
					uint64_t phi41 = *(uint64_t*)(anon33 + 8);
					uint64_t phi42 = phi_in35;
					uint64_t* phi43 = phi_in36;
					uint64_t phi44 = phi24;
					uint64_t phi45 = phi31;
					uint64_t phi_in46 = phi25;
					if ((phi25 & 0xffff) != 0)
					{
						uint64_t anon55;
						do
						{
							uint64_t phi_in47 = phi42;
							uint64_t phi48 = phi_in46;
							uint128_t anon49 = (__zext uint128_t)(phi48 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi44 = (uint16_t)phi48 + (uint16_t)anon49 * 55536;
							uint64_t phi50 = phi_in47;
							phi44 = phi44 + 2;
							phi43 = phi43;
							uint64_t phi51 = phi45 + 1;
							if (phi45 >= 999)
							{
								uint64_t phi52 = *phi43;
								if (*phi43 == 0)
								{
									uint8_t* anon53 = malloc(2016);
									uint64_t anon54 = (uint64_t)anon53;
									*(uint64_t*)phi41 = anon54;
									*(uint64_t*)anon53 = 0;
									*(uint64_t*)(anon54 + 8) = phi41;
									phi52 = anon54;
								}
								phi41 = phi52;
								phi50 = phi52;
								phi44 = phi52 + 16;
								phi43 = (uint64_t*)phi52;
								phi51 = 0;
							}
							phi39 = phi50;
							phi_in38 = phi41;
							phi40 = phi44;
							phi41 = phi41;
							phi42 = phi39;
							phi45 = phi51;
							anon55 = (uint64_t)anon49;
							phi_in46 = anon55;
						}
						while (anon55 != 0);
					}
				}
				uint64_t phi_in56 = phi39;
				*(uint16_t*)phi40 = 65535;
				phi10 = phi_in38;
				phi11 = phi_in56;
			}
			uint64_t phi57 = phi10;
			uint64_t phi58 = 0;
			uint64_t phi59 = phi11;
			uint64_t phi60 = 0;
			uint64_t phi_in61 = 1;
			if (*(uint16_t*)(phi11 + 16) != 65535)
			{
				uint64_t phi62;
				do
				{
					phi62 = phi_in61;
					phi57 = phi10;
					phi58 = 0;
					phi59 = phi11;
					phi60 = phi62;
					if (*(uint16_t*)(phi11 + (phi62 << 1) + 16) != 65535)
					{
						phi57 = phi10;
						phi58 = 0;
						phi59 = phi11;
						phi60 = 1000;
						phi_in61 = phi62 + 1;
						if (phi62 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi11 + (phi62 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi63 = phi58;
				uint64_t phi_in64 = phi59;
				uint64_t anon66 = phi60 - 1;
				phi_in65 = anon66;
				uint64_t phi67 = phi63;
				if (anon66 > -1)
				{
					uint64_t anon71;
					do
					{
						uint64_t phi68 = phi_in65;
						uint8_t* phi69 = (uint8_t*)0x400a44;
						uint64_t phi70 = 1;
						if (phi67 != 0)
						{
							phi69 = (uint8_t*)0x400a48;
							phi70 = 20;
							if (phi67 != ((uint64_t)((__zext uint128_t)phi67 * 970881267037344822 >> 64) - (phi67 >> 63)) * 19)
							{
								phi69 = (uint8_t*)0x400a49;
								phi70 = phi67 + 1;
							}
						}
						phi63 = phi70;
						printf(phi69);
						anon71 = phi68 - 1;
						phi_in65 = anon71;
						phi67 = phi63;
						phi_in64 = phi57;
					}
					while (anon71 > -1);
				}
				phi72 = phi_in64;
				phi57 = *(uint64_t*)(phi72 + 8);
				phi58 = phi63;
				phi59 = *(uint64_t*)(phi72 + 8);
				phi60 = 1000;
			}
			while (*(uint64_t*)(phi72 + 8) != 0);
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi17 = phi19;
			phi18 = 65535;
			uint16_t anon73 = (uint16_t)phi25 + phi22 * (uint16_t)phi21;
			uint128_t anon74 = (__zext uint128_t)anon73 * 3777893186295716171 >> 75;
			*(uint16_t*)phi24 = anon73 + (uint16_t)anon74 * 55536;
			if (phi31 < 1000)
			{
				phi75 = *(uint64_t*)(anon33 + 8);
				phi76 = phi24 + 2;
				phi77 = phi_in35;
				phi_in78 = phi_in36;
				phi79 = phi29;
				phi80 = phi_in37;
				phi30 = phi30 + 2;
				phi_in81 = phi31 + 1;
			}
			else 
			{
				uint64_t phi82 = *phi29;
				uint64_t phi83 = phi_in37;
				if (*phi29 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon33 + 8) = anon33;
					*(uint64_t*)anon34 = 0;
					phi82 = anon33;
					phi83 = anon33;
				}
				phi75 = phi82;
				phi76 = phi82 + 16;
				phi77 = phi82;
				uint64_t* anon84 = (uint64_t*)phi82;
				phi_in78 = anon84;
				phi79 = anon84;
				phi80 = *(uint64_t*)phi83;
				phi30 = phi83 + 16;
				phi_in81 = 0;
			}
			phi23 = phi75;
			phi24 = phi76;
			phi26 = phi77;
			phi29 = phi79;
			phi32 = phi80;
			phi25 = (uint64_t)anon74;
			uint64_t* phi27 = phi_in78;
			phi22 = *(uint16_t*)phi30;
			phi31 = phi_in81;
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
