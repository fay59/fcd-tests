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
	uint64_t phi_in122;
	struct _IO_FILE** anon5;
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
			uint64_t phi135;
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
				uint64_t anon108;
				uint64_t phi_in14 = anon10;
				uint64_t phi_in15 = anon10 + 16;
				uint64_t phi_in16 = anon11;
				uint64_t phi_in17 = 2;
				uint64_t phi_in18 = anon8;
				uint16_t phi_in19 = 1;
				uint32_t dispatch20 = 0;
				do
				{
					uint64_t phi_in51;
					uint64_t phi_in50;
					uint64_t phi_in49;
					uint64_t phi25;
					uint64_t phi23;
					uint64_t phi24;
					uint64_t phi21;
					uint64_t phi22;
					while (true)
					{
						uint64_t phi_in36;
						uint64_t* phi42;
						uint64_t phi_in57;
						uint64_t phi_in55;
						uint64_t phi_in52;
						uint64_t phi46;
						uint16_t phi45;
						uint64_t phi38;
						uint64_t phi_in29;
						uint64_t* phi_in33;
						uint64_t phi40;
						uint64_t phi_in30;
						uint64_t phi47;
						uint64_t phi44;
						uint64_t phi41;
						uint64_t phi_in28;
						uint64_t phi_in27;
						uint64_t phi39;
						uint64_t anon58;
						uint64_t* phi_in54;
						uint64_t phi_in53;
						uint64_t* phi_in31;
						uint64_t phi_in34;
						uint64_t phi_in56;
						uint16_t phi_in35;
						uint64_t* phi43;
						uint64_t phi_in37;
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
						if (dispatch20 == 2 || dispatch20 == 0)
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
						if (anon48)
						{
							if (dispatch20 == 2 || dispatch20 == 0)
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
						}
						else if (dispatch20 == 2 || dispatch20 == 0)
						{
							uint64_t phi_in66;
							uint64_t phi_in68;
							uint64_t phi_in67;
							uint64_t* phi_in64;
							uint64_t phi_in63;
							uint64_t phi_in61;
							uint64_t phi_in62;
							uint64_t* phi_in65;
							uint16_t anon59 = (uint16_t)phi40 + phi45 * (uint16_t)phi24;
							uint128_t anon60 = (__zext uint128_t)anon59 * 3777893186295716171 >> 75;
							*(uint16_t*)phi39 = anon59 + (uint16_t)anon60 * 55536;
							if (phi46 < 1000)
							{
								phi_in61 = phi38;
								phi_in62 = phi39 + 2;
								phi_in63 = phi41;
								phi_in64 = phi42;
								phi_in65 = phi43;
								phi_in66 = phi47;
								phi_in67 = phi44 + 2;
								phi_in68 = phi46 + 1;
							}
							else 
							{
								uint64_t phi_in69 = *phi43;
								uint64_t phi_in70 = phi47;
								if (*phi43 == 0)
								{
									uint8_t* anon71 = malloc(2016);
									uint64_t anon72 = (uint64_t)anon71;
									*(uint64_t*)phi38 = anon72;
									*(uint64_t*)anon71 = 0;
									*(uint64_t*)(anon72 + 8) = phi38;
									phi_in69 = anon72;
									phi_in70 = anon72;
								}
								uint64_t phi73 = phi_in69;
								uint64_t phi74 = phi_in70;
								phi_in61 = phi73;
								phi_in62 = phi73 + 16;
								phi_in63 = phi73;
								uint64_t* anon75 = (uint64_t*)phi73;
								phi_in64 = anon75;
								phi_in65 = anon75;
								phi_in66 = *(uint64_t*)phi74;
								phi_in67 = phi74 + 16;
								phi_in68 = 0;
							}
							uint64_t phi76 = phi_in61;
							uint64_t phi77 = phi_in62;
							uint64_t phi78 = phi_in63;
							uint64_t* phi79 = phi_in64;
							uint64_t* phi80 = phi_in65;
							uint64_t phi81 = phi_in66;
							uint64_t phi82 = phi_in67;
							uint64_t phi83 = phi_in68;
							phi_in27 = phi76;
							phi_in28 = phi77;
							phi_in29 = (uint64_t)anon60;
							phi_in30 = phi78;
							phi_in31 = phi79;
							phi_in33 = phi80;
							phi_in34 = phi82;
							phi_in35 = *(uint16_t*)phi82;
							phi_in36 = phi83;
							phi_in37 = phi81;
							dispatch20 = 2;
						}
						if (dispatch20 == 1 || anon58 != 0 && dispatch20 == 2 && anon48 || anon58 != 0 && dispatch20 == 0 && anon48)
						{
							uint64_t phi84 = phi_in52;
							uint64_t phi85 = phi_in53;
							uint64_t* phi86 = phi_in54;
							uint64_t phi87 = phi_in55;
							uint64_t phi88 = phi_in56;
							uint64_t phi89 = phi_in57;
							uint128_t anon90 = (__zext uint128_t)(phi89 & 0xffff) * 3777893186295716171 >> 75;
							*(uint16_t*)phi87 = (uint16_t)phi89 + (uint16_t)anon90 * 55536;
							uint64_t phi_in91 = phi84;
							uint64_t phi_in92 = phi85;
							uint64_t phi_in93 = phi87 + 2;
							uint64_t* phi_in94 = phi86;
							uint64_t phi_in95 = phi88 + 1;
							if (phi88 >= 999)
							{
								uint64_t phi_in96 = *phi86;
								if (*phi86 == 0)
								{
									uint8_t* anon97 = malloc(2016);
									uint64_t anon98 = (uint64_t)anon97;
									*(uint64_t*)phi84 = anon98;
									*(uint64_t*)anon97 = 0;
									*(uint64_t*)(anon98 + 8) = phi84;
									phi_in96 = anon98;
								}
								uint64_t phi99 = phi_in96;
								phi_in91 = phi99;
								phi_in92 = phi99;
								phi_in93 = phi99 + 16;
								phi_in94 = (uint64_t*)phi99;
								phi_in95 = 0;
							}
							uint64_t phi100 = phi_in91;
							uint64_t phi101 = phi_in92;
							uint64_t phi102 = phi_in93;
							uint64_t* phi103 = phi_in94;
							uint64_t phi104 = phi_in95;
							phi_in49 = phi100;
							phi_in50 = phi101;
							phi_in51 = phi102;
							phi_in52 = phi100;
							phi_in53 = phi101;
							phi_in54 = phi103;
							phi_in55 = phi102;
							phi_in56 = phi104;
							phi_in57 = (uint64_t)anon90;
							dispatch20 = 1;
							if (anon90 == 0)
							{
								break;
							}
						}
					}
					uint64_t phi105 = phi_in49;
					uint64_t phi106 = phi_in50;
					uint64_t phi107 = phi_in51;
					*(uint16_t*)phi107 = 65535;
					phi_in12 = phi105;
					phi_in13 = phi106;
					anon108 = phi24 & 0xffff;
					if (anon6 > anon108)
					{
						phi_in14 = phi25;
						phi_in15 = phi23;
						phi_in16 = phi22;
						phi_in17 = anon108 + 1;
						phi_in18 = phi21;
						phi_in19 = 65535;
						dispatch20 = 0;
					}
				}
				while (anon6 > anon108);
			}
			uint64_t phi109 = phi_in12;
			uint64_t phi110 = phi_in13;
			uint64_t phi_in111 = phi109;
			uint64_t phi_in112 = 0;
			uint64_t phi_in113 = phi110;
			uint64_t phi_in114 = 0;
			uint64_t phi_in115 = 1;
			uint32_t dispatch116 = 0;
			if (*(uint16_t*)(phi110 + 16) != 65535)
			{
				uint64_t phi117;
				do
				{
					phi117 = phi_in115;
					phi_in111 = phi109;
					phi_in112 = 0;
					phi_in113 = phi110;
					phi_in114 = phi117;
					dispatch116 = 0;
					if (*(uint16_t*)(phi110 + (phi117 << 1) + 16) != 65535)
					{
						phi_in111 = phi109;
						phi_in112 = 0;
						phi_in113 = phi110;
						phi_in114 = 1000;
						phi_in115 = phi117 + 1;
						dispatch116 = 0;
						if (phi117 == 999)
						{
							break;
						}
					}
				}
				while (*(uint16_t*)(phi110 + (phi117 << 1) + 16) != 65535);
			}
			do
			{
				uint64_t phi_in126;
				uint64_t phi_in125;
				while (true)
				{
					uint64_t anon123;
					uint64_t phi118;
					uint64_t phi_in124;
					if (dispatch116 == 0)
					{
						phi118 = phi_in111;
						uint64_t phi119 = phi_in112;
						uint64_t phi120 = phi_in113;
						uint64_t phi121 = phi_in114;
						anon123 = phi121 - 1;
						phi_in122 = anon123;
						phi_in124 = phi119;
						phi_in125 = phi119;
						phi_in126 = phi120;
						if (anon123 <= -1)
						{
							break;
						}
					}
					if (dispatch116 == 1 || dispatch116 == 0 && anon123 > -1)
					{
						uint64_t phi127 = phi_in122;
						uint64_t phi128 = phi_in124;
						uint8_t* phi_in129 = (uint8_t*)0x400a44;
						uint64_t phi_in130 = 1;
						if (phi128 != 0)
						{
							phi_in129 = (uint8_t*)0x400a48;
							phi_in130 = 20;
							if (phi128 != ((uint64_t)((__zext uint128_t)phi128 * 970881267037344822 >> 64) - (phi128 >> 63)) * 19)
							{
								phi_in129 = (uint8_t*)0x400a49;
								phi_in130 = phi128 + 1;
							}
						}
						uint8_t* phi131 = phi_in129;
						uint64_t phi132 = phi_in130;
						printf(phi131);
						uint64_t anon133 = phi127 - 1;
						phi_in122 = anon133;
						phi_in124 = phi132;
						phi_in125 = phi132;
						phi_in126 = phi118;
						dispatch116 = 1;
						if (anon133 <= -1)
						{
							break;
						}
					}
				}
				uint64_t phi134 = phi_in125;
				phi135 = phi_in126;
				phi_in111 = *(uint64_t*)(phi135 + 8);
				phi_in112 = phi134;
				phi_in113 = *(uint64_t*)(phi135 + 8);
				phi_in114 = 1000;
				dispatch116 = 0;
			}
			while (*(uint64_t*)(phi135 + 8) != 0);
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
