#include "tests/bin/1995-savastio.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x600da8 != 0)
	{
		__gmon_start__(4195501);
	}
	return;
}
void __gmon_start__(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x600de0);
}
void main(uint64_t arg0)
{
	struct _IO_FILE** anon5;
	uint64_t phi_in97;
	uint64_t phi_in1 = 0;
	uint8_t phi_in2 = 9;
	while (true)
	{
		uint64_t anon6;
		uint64_t phi3 = phi_in1;
		uint8_t phi4 = phi_in2;
		anon5 = (struct _IO_FILE**)0x600e10;
		_IO_putc((__sext int32_t)(phi4 ^ 0x4c), *anon5);
		if (phi3 < 13)
		{
			anon6 = phi3 + 1;
			phi_in1 = anon6;
			phi_in2 = *(uint8_t*)(phi3 + 4196946);
		}
		else 
		{
			uint64_t phi_in14;
			uint64_t phi_in15;
			uint64_t phi_in16;
			uint64_t phi_in17;
			uint64_t phi_in18;
			uint16_t phi_in19;
			uint32_t dispatch20;
			uint64_t phi21;
			uint64_t phi22;
			uint64_t phi23;
			uint64_t phi24;
			uint64_t phi25;
			uint64_t phi_in27;
			uint64_t phi_in28;
			uint64_t phi_in29;
			uint64_t phi_in30;
			uint64_t* phi_in33;
			uint64_t phi_in34;
			uint16_t phi_in35;
			uint64_t phi_in36;
			uint64_t phi_in37;
			uint64_t phi38;
			uint64_t phi39;
			uint64_t phi40;
			uint64_t phi41;
			uint64_t* phi42;
			uint64_t* phi43;
			uint64_t phi44;
			uint16_t phi45;
			uint64_t phi46;
			uint64_t phi47;
			uint64_t phi110;
			uint64_t phi_in113;
			uint64_t phi_in114;
			uint64_t phi_in115;
			uint64_t* phi_in116;
			uint64_t* phi_in117;
			uint64_t phi_in118;
			uint64_t phi_in119;
			uint64_t phi_in120;
			scanf((uint8_t*)0x400a4e);
			uint8_t* anon7 = malloc(2016);
			*(uint64_t*)anon7 = 0;
			uint64_t anon8 = (uint64_t)anon7;
			*(uint64_t*)(anon8 + 8) = 0;
			uint8_t* anon9 = malloc(2016);
			*(uint64_t*)anon9 = 0;
			uint64_t anon10 = (uint64_t)anon9;
			*(uint64_t*)(anon10 + 8) = 0;
			uint64_t anon11 = anon8 + 16;
			*(uint16_t*)anon11 = 1;
			*(uint16_t*)(anon8 + 18) = 65535;
			uint64_t phi_in12 = anon8;
			uint64_t phi_in13 = anon8;
			if (anon6 >= 2)
			{
				uint64_t phi_in49;
				uint64_t phi_in50;
				uint64_t phi_in51;
				phi_in14 = anon10;
				phi_in15 = anon10 + 16;
				phi_in16 = anon11;
				phi_in17 = 2;
				phi_in18 = anon8;
				phi_in19 = 1;
				dispatch20 = 0;
				while (true)
				{
					uint64_t phi_in52;
					uint64_t phi_in53;
					uint64_t* phi_in54;
					uint64_t phi_in55;
					uint64_t phi_in56;
					uint64_t phi_in57;
					uint64_t anon58;
					if (dispatch20 == 0)
					{
						phi21 = phi_in14;
						phi22 = phi_in15;
						phi23 = phi_in16;
						phi24 = phi_in17;
						phi25 = phi_in18;
						uint16_t phi26 = phi_in19;
						phi_in27 = phi21;
						phi_in28 = phi22;
						phi_in29 = 0;
						phi_in30 = phi21;
						uint64_t* anon32 = (uint64_t*)phi21;
						phi_in31 = anon32;
						phi_in33 = anon32;
						phi_in34 = phi23;
						phi_in35 = phi26;
						phi_in36 = 0;
						phi_in37 = *(uint64_t*)phi25;
					}
					if (dispatch20 == 1 || dispatch20 == 0)
					{
						phi38 = phi_in27;
						phi39 = phi_in28;
						phi40 = phi_in29;
						phi41 = phi_in30;
						phi42 = phi_in31;
						phi43 = phi_in33;
						phi44 = phi_in34;
						phi45 = phi_in35;
						phi46 = phi_in36;
						phi47 = phi_in37;
					}
					bool anon48 = phi47 == 0 & phi45 == 65535;
					if (anon48 && (dispatch20 == 1 || dispatch20 == 0))
					{
						phi_in49 = phi38;
						phi_in50 = phi41;
						phi_in51 = phi39;
						phi_in52 = phi38;
						phi_in53 = phi41;
						phi_in54 = phi42;
						phi_in55 = phi39;
						phi_in56 = phi46;
						phi_in57 = phi40;
						anon58 = phi40 & 0xffff;
						if (anon58 == 0)
						{
							break;
						}
					}
					if (dispatch20 == 2 || anon58 != 0 && dispatch20 == 1 && anon48 || anon58 != 0 && dispatch20 == 0 && anon48)
					{
						uint64_t phi59 = phi_in52;
						uint64_t phi60 = phi_in53;
						uint64_t* phi61 = phi_in54;
						uint64_t phi62 = phi_in55;
						uint64_t phi63 = phi_in56;
						uint64_t phi64 = phi_in57;
						uint128_t anon65 = (__zext uint128_t)(phi64 & 0xffff) * 3777893186295716171 >> 75;
						*(uint16_t*)phi62 = (uint16_t)phi64 + (uint16_t)anon65 * 55536;
						uint64_t phi_in66 = phi59;
						uint64_t phi_in67 = phi60;
						uint64_t phi_in68 = phi62 + 2;
						uint64_t* phi_in69 = phi61;
						uint64_t phi_in70 = phi63 + 1;
						if (phi63 >= 999)
						{
							uint64_t phi_in71 = *phi61;
							if (*phi61 == 0)
							{
								uint8_t* anon72 = malloc(2016);
								uint64_t anon73 = (uint64_t)anon72;
								*(uint64_t*)phi59 = anon73;
								*(uint64_t*)anon72 = 0;
								*(uint64_t*)(anon73 + 8) = phi59;
								phi_in71 = anon73;
							}
							uint64_t phi74 = phi_in71;
							phi_in66 = phi74;
							phi_in67 = phi74;
							phi_in68 = phi74 + 16;
							phi_in69 = (uint64_t*)phi74;
							phi_in70 = 0;
						}
						uint64_t phi75 = phi_in66;
						uint64_t phi76 = phi_in67;
						uint64_t phi77 = phi_in68;
						uint64_t* phi78 = phi_in69;
						uint64_t phi79 = phi_in70;
						phi_in49 = phi75;
						phi_in50 = phi76;
						phi_in51 = phi77;
						phi_in52 = phi75;
						phi_in53 = phi76;
						phi_in54 = phi78;
						phi_in55 = phi77;
						phi_in56 = phi79;
						uint64_t anon80 = (uint64_t)anon65;
						phi_in57 = anon80;
						dispatch20 = 2;
						if (anon80 == 0)
						{
							break;
						}
					}
				}
				uint64_t phi81 = phi_in49;
				uint64_t phi82 = phi_in50;
				uint64_t phi83 = phi_in51;
				*(uint16_t*)phi83 = 65535;
				phi_in12 = phi81;
				phi_in13 = phi82;
			}
			uint64_t phi84 = phi_in12;
			uint64_t phi85 = phi_in13;
			uint64_t phi_in86 = phi84;
			uint64_t phi_in87 = 0;
			uint64_t phi_in88 = phi85;
			uint64_t phi_in89 = 0;
			uint64_t phi_in90 = 1;
			uint32_t dispatch91 = 0;
			if (*(uint16_t*)(phi85 + 16) != 65535)
			{
				uint64_t phi92;
				do
				{
					phi92 = phi_in90;
					phi_in86 = phi84;
					phi_in87 = 0;
					phi_in88 = phi85;
					phi_in89 = phi92;
					dispatch91 = 0;
					if (*(uint16_t*)(phi85 + (phi92 << 1) + 16) != 65535)
					{
						phi_in86 = phi84;
						phi_in87 = 0;
						phi_in88 = phi85;
						phi_in89 = 1000;
						phi_in90 = phi92 + 1;
						dispatch91 = 0;
						if (phi92 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi85 + (phi92 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi_in100;
				uint64_t phi_in101;
				while (true)
				{
					uint64_t phi93;
					uint64_t anon98;
					uint64_t phi_in99;
					if (dispatch91 == 0)
					{
						phi93 = phi_in86;
						uint64_t phi94 = phi_in87;
						uint64_t phi95 = phi_in88;
						uint64_t phi96 = phi_in89;
						anon98 = phi96 - 1;
						phi_in97 = anon98;
						phi_in99 = phi94;
						phi_in100 = phi94;
						phi_in101 = phi95;
						if (anon98 <= -1)
						{
							break;
						}
					}
					if (dispatch91 == 1 || dispatch91 == 0 && anon98 > -1)
					{
						uint64_t phi102 = phi_in97;
						uint64_t phi103 = phi_in99;
						uint8_t* phi_in104 = (uint8_t*)0x400a44;
						uint64_t phi_in105 = 1;
						if (phi103 != 0)
						{
							phi_in104 = (uint8_t*)0x400a48;
							phi_in105 = 20;
							if (phi103 != ((uint64_t)((__zext uint128_t)phi103 * 970881267037344822 >> 64) - (phi103 >> 63)) * 19)
							{
								phi_in104 = (uint8_t*)0x400a49;
								phi_in105 = phi103 + 1;
							}
						}
						uint8_t* phi106 = phi_in104;
						uint64_t phi107 = phi_in105;
						printf(phi106);
						uint64_t anon108 = phi102 - 1;
						phi_in97 = anon108;
						phi_in99 = phi107;
						phi_in100 = phi107;
						phi_in101 = phi93;
						dispatch91 = 1;
						if (anon108 <= -1)
						{
							break;
						}
					}
				}
				uint64_t phi109 = phi_in100;
				phi110 = phi_in101;
				phi_in86 = *(uint64_t*)(phi110 + 8);
				phi_in87 = phi109;
				phi_in88 = *(uint64_t*)(phi110 + 8);
				phi_in89 = 1000;
				dispatch91 = 0;
			}
			while (*(uint64_t*)(phi110 + 8) != 0);
			phi_in14 = phi25;
			phi_in15 = phi23;
			phi_in16 = phi22;
			phi_in17 = (phi24 & 0xffff) + 1;
			phi_in18 = phi21;
			phi_in19 = 65535;
			dispatch20 = 0;
			uint16_t anon111 = (uint16_t)phi40 + phi45 * (uint16_t)phi24;
			uint128_t anon112 = (__zext uint128_t)anon111 * 3777893186295716171 >> 75;
			*(uint16_t*)phi39 = anon111 + (uint16_t)anon112 * 55536;
			if (phi46 < 1000)
			{
				phi_in113 = phi38;
				phi_in114 = phi39 + 2;
				phi_in115 = phi41;
				phi_in116 = phi42;
				phi_in117 = phi43;
				phi_in118 = phi47;
				phi_in119 = phi44 + 2;
				phi_in120 = phi46 + 1;
			}
			else 
			{
				uint64_t phi_in121 = *phi43;
				uint64_t phi_in122 = phi47;
				if (*phi43 == 0)
				{
					uint8_t* anon123 = malloc(2016);
					uint64_t anon124 = (uint64_t)anon123;
					*(uint64_t*)phi38 = anon124;
					*(uint64_t*)anon123 = 0;
					*(uint64_t*)(anon124 + 8) = phi38;
					phi_in121 = anon124;
					phi_in122 = anon124;
				}
				uint64_t phi125 = phi_in121;
				uint64_t phi126 = phi_in122;
				phi_in113 = phi125;
				phi_in114 = phi125 + 16;
				phi_in115 = phi125;
				uint64_t* anon127 = (uint64_t*)phi125;
				phi_in116 = anon127;
				phi_in117 = anon127;
				phi_in118 = *(uint64_t*)phi126;
				phi_in119 = phi126 + 16;
				phi_in120 = 0;
			}
			uint64_t phi128 = phi_in113;
			uint64_t phi129 = phi_in114;
			uint64_t phi130 = phi_in115;
			uint64_t* phi131 = phi_in116;
			uint64_t* phi132 = phi_in117;
			uint64_t phi133 = phi_in118;
			uint64_t phi134 = phi_in119;
			uint64_t phi135 = phi_in120;
			phi_in27 = phi128;
			phi_in28 = phi129;
			phi_in29 = (uint64_t)anon112;
			phi_in30 = phi130;
			uint64_t* phi_in31 = phi131;
			phi_in33 = phi132;
			phi_in34 = phi134;
			phi_in35 = *(uint16_t*)phi134;
			phi_in36 = phi135;
			phi_in37 = phi133;
			dispatch20 = 1;
		}
	}
	_IO_putc(10, *anon5);
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
