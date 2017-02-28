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
	uint64_t phi_in70;
	uint64_t phi_in1 = 0;
	uint8_t phi2 = 9;
	while (true)
	{
		uint64_t anon5;
		uint64_t phi3 = phi_in1;
		anon4 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi2 ^ 0x4c), *anon4);
		if (phi3 < 13)
		{
			anon5 = phi3 + 1;
			phi_in1 = anon5;
			phi2 = *(uint8_t*)(phi3 + 4196946);
		}
		else 
		{
			uint64_t phi_in13;
			uint64_t phi_in14;
			uint64_t phi15;
			uint64_t phi_in16;
			uint16_t phi17;
			uint32_t dispatch18;
			uint64_t phi19;
			uint64_t phi20;
			uint64_t phi21;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t* phi28;
			uint64_t phi29;
			uint16_t phi30;
			uint64_t phi31;
			uint64_t phi32;
			uint64_t anon33;
			uint8_t* anon34;
			uint64_t phi_in35;
			uint64_t* phi_in36;
			uint64_t phi_in37;
			uint64_t phi77;
			uint64_t phi80;
			uint64_t phi81;
			uint64_t* phi82;
			uint64_t* phi83;
			uint64_t phi_in84;
			uint64_t phi85;
			scanf((uint8_t*)0x400a4e);
			uint8_t* anon6 = malloc(2016);
			*(uint64_t*)anon6 = 0;
			uint64_t anon7 = (uint64_t)anon6;
			*(uint64_t*)(anon7 + 8) = 0;
			uint8_t* anon8 = malloc(2016);
			*(uint64_t*)anon8 = 0;
			uint64_t anon9 = (uint64_t)anon8;
			*(uint64_t*)(anon9 + 8) = 0;
			uint64_t anon10 = anon7 + 16;
			*(uint16_t*)anon10 = 1;
			*(uint16_t*)(anon7 + 18) = 65535;
			uint64_t phi11 = anon7;
			uint64_t phi12 = anon7;
			if (anon5 >= 2)
			{
				uint64_t phi39;
				uint64_t phi_in40;
				uint64_t phi41;
				phi_in13 = anon9;
				phi_in14 = anon9 + 16;
				phi15 = anon10;
				phi_in16 = 2;
				phi_in13 = anon7;
				phi17 = 1;
				dispatch18 = 0;
				while (true)
				{
					uint64_t phi42;
					uint64_t phi43;
					uint64_t* phi44;
					uint64_t phi45;
					uint64_t phi46;
					uint64_t phi_in47;
					uint64_t anon48;
					if (dispatch18 == 0)
					{
						phi19 = phi_in13;
						phi20 = phi_in14;
						phi21 = phi_in16;
						uint16_t phi_in22 = phi17;
						phi23 = phi20;
						phi24 = 0;
						phi25 = phi19;
						uint64_t* anon27 = (uint64_t*)phi19;
						phi26 = anon27;
						phi28 = anon27;
						phi29 = phi15;
						phi30 = phi_in22;
						phi31 = 0;
						phi32 = *(uint64_t*)phi_in13;
					}
					if (dispatch18 == 1 || dispatch18 == 0)
					{
						anon34 = malloc(2016);
						anon33 = (uint64_t)anon34;
						*(uint64_t*)(anon33 + 8) = phi19;
						phi_in35 = phi25;
						phi_in36 = phi26;
						phi_in37 = phi32;
					}
					bool anon38 = phi_in37 == 0 & phi30 == 65535;
					if (anon38 && (dispatch18 == 1 || dispatch18 == 0))
					{
						phi39 = *(uint64_t*)(anon33 + 8);
						phi_in40 = phi_in35;
						phi41 = phi23;
						phi42 = *(uint64_t*)(anon33 + 8);
						phi43 = phi_in35;
						phi44 = phi_in36;
						phi45 = phi23;
						phi46 = phi31;
						phi_in47 = phi24;
						anon48 = phi24 & 0xffff;
						if (anon48 == 0)
						{
							break;
						}
					}
					if (dispatch18 == 2 || anon48 != 0 && dispatch18 == 1 && anon38 || anon48 != 0 && dispatch18 == 0 && anon38)
					{
						uint8_t* anon50 = malloc(2016);
						uint64_t anon49 = (uint64_t)anon50;
						*(uint64_t*)(anon49 + 8) = phi42;
						uint64_t phi_in51 = phi43;
						uint64_t phi52 = phi_in47;
						uint128_t anon53 = (__zext uint128_t)(phi52 & 0xffff) * 3777893186295716171 >> 75;
						*(uint16_t*)phi45 = (uint16_t)phi52 + (uint16_t)anon53 * 55536;
						uint64_t phi54 = *(uint64_t*)(anon49 + 8);
						uint64_t phi55 = phi_in51;
						uint64_t phi56 = phi45 + 2;
						uint64_t* phi57 = phi44;
						uint64_t phi58 = phi46 + 1;
						if (phi46 >= 999)
						{
							uint64_t phi59 = *phi44;
							if (*phi44 == 0)
							{
								*(uint64_t*)*(uint64_t*)(anon49 + 8) = anon49;
								*(uint64_t*)anon50 = 0;
								phi59 = anon49;
							}
							phi54 = phi59;
							phi55 = phi59;
							phi56 = phi59 + 16;
							phi57 = (uint64_t*)phi59;
							phi58 = 0;
						}
						phi42 = phi54;
						phi43 = phi55;
						phi45 = phi56;
						phi44 = phi57;
						phi46 = phi58;
						phi39 = phi42;
						phi_in40 = phi43;
						phi41 = phi45;
						uint64_t anon60 = (uint64_t)anon53;
						phi_in47 = anon60;
						dispatch18 = 2;
						if (anon60 == 0)
						{
							break;
						}
					}
				}
				phi11 = phi39;
				*(uint16_t*)phi41 = 65535;
				phi12 = phi_in40;
			}
			uint64_t phi61 = phi12;
			uint64_t phi62 = phi11;
			uint64_t phi63 = 0;
			uint64_t phi64 = 0;
			uint64_t phi_in65 = 1;
			uint32_t dispatch66 = 0;
			if (*(uint16_t*)(phi61 + 16) != 65535)
			{
				uint64_t phi67;
				do
				{
					phi67 = phi_in65;
					phi62 = phi11;
					phi63 = 0;
					phi64 = phi67;
					dispatch66 = 0;
					if (*(uint16_t*)(phi61 + (phi67 << 1) + 16) != 65535)
					{
						phi62 = phi11;
						phi63 = 0;
						phi64 = 1000;
						phi_in65 = phi67 + 1;
						dispatch66 = 0;
						if (phi67 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi61 + (phi67 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi_in69;
				while (true)
				{
					uint64_t phi_in68;
					uint64_t anon71;
					uint64_t phi72;
					if (dispatch66 == 0)
					{
						phi_in68 = phi63;
						phi_in69 = phi61;
						anon71 = phi64 - 1;
						phi_in70 = anon71;
						phi72 = phi_in68;
						phi63 = phi_in68;
						if (anon71 <= -1)
						{
							break;
						}
					}
					if (dispatch66 == 1 || dispatch66 == 0 && anon71 > -1)
					{
						uint64_t phi73 = phi_in70;
						uint8_t* phi74 = (uint8_t*)0x400a44;
						uint64_t phi75 = 1;
						if (phi72 != 0)
						{
							phi74 = (uint8_t*)0x400a48;
							phi75 = 20;
							if (phi72 != ((uint64_t)((__zext uint128_t)phi72 * 970881267037344822 >> 64) - (phi72 >> 63)) * 19)
							{
								phi74 = (uint8_t*)0x400a49;
								phi75 = phi72 + 1;
							}
						}
						phi_in68 = phi75;
						printf(phi74);
						uint64_t anon76 = phi73 - 1;
						phi_in70 = anon76;
						phi72 = phi_in68;
						phi63 = phi_in68;
						phi_in69 = phi62;
						dispatch66 = 1;
						if (anon76 <= -1)
						{
							break;
						}
					}
				}
				phi77 = phi_in69;
				phi62 = *(uint64_t*)(phi77 + 8);
				phi61 = *(uint64_t*)(phi77 + 8);
				phi64 = 1000;
				dispatch66 = 0;
			}
			while (*(uint64_t*)(phi77 + 8) != 0);
			phi_in14 = phi15;
			phi15 = phi20;
			phi_in16 = (phi21 & 0xffff) + 1;
			phi_in13 = phi19;
			phi17 = 65535;
			dispatch18 = 0;
			uint16_t anon78 = (uint16_t)phi24 + phi30 * (uint16_t)phi21;
			uint128_t anon79 = (__zext uint128_t)anon78 * 3777893186295716171 >> 75;
			*(uint16_t*)phi23 = anon78 + (uint16_t)anon79 * 55536;
			if (phi31 < 1000)
			{
				phi80 = *(uint64_t*)(anon33 + 8);
				phi23 = phi23 + 2;
				phi81 = phi_in35;
				phi82 = phi_in36;
				phi83 = phi28;
				phi_in84 = phi_in37;
				phi85 = phi29 + 2;
				phi31 = phi31 + 1;
			}
			else 
			{
				uint64_t phi86 = *phi28;
				uint64_t phi87 = phi_in37;
				if (*phi28 == 0)
				{
					*(uint64_t*)*(uint64_t*)(anon33 + 8) = anon33;
					*(uint64_t*)anon34 = 0;
					phi86 = anon33;
					phi87 = anon33;
				}
				phi80 = phi86;
				phi23 = phi86 + 16;
				phi81 = phi86;
				uint64_t* anon88 = (uint64_t*)phi86;
				phi82 = anon88;
				phi83 = anon88;
				phi_in84 = *(uint64_t*)phi87;
				phi85 = phi87 + 16;
				phi31 = 0;
			}
			phi19 = phi80;
			phi25 = phi81;
			uint64_t* phi26 = phi82;
			phi28 = phi83;
			phi24 = (uint64_t)anon79;
			phi29 = phi85;
			phi30 = *(uint16_t*)phi85;
			phi32 = phi_in84;
			dispatch18 = 1;
		}
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
