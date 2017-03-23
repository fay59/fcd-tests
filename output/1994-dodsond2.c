#include "tests/bin/1994-dodsond2.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x6023d0 != 0)
	{
		__gmon_start__();
	}
	return;
}
void getpid(uint64_t arg0)
{
	__indirect_jump(*(uint64_t*)0x602400);
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint64_t anon1 = arg1 - 8;
	*(uint64_t*)anon1 = arg0;
	m(4195947);
	uint64_t anon3 = anon1 & 0xfffffffffffffff0;
	uint64_t anon2 = anon3 - 8;
	struct nanon5 = n(4195954);
	uint64_t anon4 = anon5.rax;
	*(uint64_t*)anon2 = anon4;
	uint64_t anon6 = anon3 - 16;
	*(uint64_t*)anon6 = anon2;
	uint64_t anon7 = anon5.rdx;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)anon1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())anon7, *(uint8_t**)anon6);
	__builtin_trap();
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x602488;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196146);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
void s(uint64_t arg0)
{
	uint32_t phi10;
	uint32_t* phi1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi5;
		uint32_t* anon6;
		uint32_t phi7;
		uint32_t phi8;
		uint32_t phi9;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi5 = *phi1;
			anon6 = (uint32_t*)(phi3 - 4);
			*anon6 = *anon4;
			phi7 = *anon6;
			phi8 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			*anon6 = *phi1;
			phi10 = *anon6;
		}
		if (*anon4 < *phi1 && *anon4 < *anon6 || *anon4 >= *phi1 && *phi1 < *anon6)
		{
			phi8 = phi5;
			*phi1 = *anon6;
			phi7 = *anon6;
			phi9 = *anon6;
		}
		if (*anon4 < *phi1 && *anon4 < *anon6 || *anon4 >= *phi1 && *phi1 < *anon6 || *anon4 >= *anon6 && *anon4 < *phi1)
		{
			phi10 = phi7;
			*phi1 = phi8;
			*anon4 = phi9;
			if (*anon4 > *phi1)
			{
				phi10 = *anon6;
			}
		}
		if (phi10 != 255)
		{
			uint64_t anon11 = phi3 + 12;
			phi1 = (uint32_t*)anon11;
			phi_in2 = anon11;
			if (phi3 == 6301984)
			{
				break;
			}
		}
	}
	while (phi10 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi5;
	uint64_t phi10;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg4;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi5 = anon6;
	uint64_t phi7 = arg4 & 0xffffffff;
	uint32_t phi8 = anon6;
	uint32_t phi9 = anon3;
	*(uint64_t*)(phi10 + 48) = 0;
	uint64_t anon11 = (uint64_t)&alloca1;
	phi10 = anon11;
	while (true)
	{
		uint64_t phi20;
		uint64_t phi35;
		uint32_t phi42;
		uint64_t phi45;
		uint64_t phi46;
		uint32_t phi_in301;
		uint64_t phi_in303;
		uint64_t phi308;
		uint64_t phi317;
		uint64_t phi320;
		uint32_t phi321;
		uint64_t phi322;
		uint32_t phi323;
		uint32_t phi12 = phi4;
		int64_t anon14 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon13 = (uint32_t*)((anon14 << 2) + 6300992);
		*anon13 = phi8;
		if (phi9 < *anon13)
		{
			uint32_t phi315;
			uint32_t phi316;
			uint32_t phi318;
			uint32_t phi319;
			*(uint64_t*)(phi10 + 16) = anon14 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi15 = phi5;
			uint64_t phi16 = (__zext uint64_t)phi12;
			*(uint32_t*)(phi17 + 68) = phi5;
			uint32_t phi18 = phi12;
			uint32_t phi19 = phi5;
			phi20 = 0;
			uint64_t phi21 = phi10;
			uint32_t phi22 = phi18;
			*(uint64_t*)(phi17 + 56) = phi20;
			uint64_t phi17 = phi21;
			int64_t anon24 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi17 + 56) + *(uint64_t*)(phi17 + 16) + 6301632);
			uint32_t* anon23 = (uint32_t*)((anon24 << 2) + 6300992);
			if (phi19 < *anon23)
			{
				uint32_t phi305;
				uint32_t phi306;
				uint32_t phi307;
				uint32_t phi309;
				uint32_t phi310;
				uint32_t phi311;
				uint32_t phi312;
				uint64_t phi313;
				uint64_t phi314;
				*anon23 = *(uint32_t*)(phi17 + 4);
				*(uint64_t*)(phi17 + 32) = anon24 * 12;
				*(uint32_t*)(phi17 + 44) = (uint32_t)phi16 + 6;
				uint32_t phi25 = phi22;
				uint32_t phi26 = phi22;
				uint32_t phi27 = phi22;
				uint32_t phi28 = phi22;
				uint32_t phi29 = phi22;
				uint32_t phi30 = phi22;
				uint32_t phi31 = phi22;
				uint32_t phi32 = phi22;
				uint32_t phi33 = phi22;
				uint64_t phi34 = (__zext uint64_t)phi22;
				phi35 = 0;
				uint32_t phi36 = phi28;
				uint32_t phi37 = phi31;
				*(uint64_t*)(phi17 + 72) = phi35;
				int64_t anon39 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi17 + 72) + *(uint64_t*)(phi17 + 32) + 6301632);
				uint32_t* anon38 = (uint32_t*)((anon39 << 2) + 6300992);
				if (*(uint32_t*)(phi17 + 4) < *anon38)
				{
					uint64_t phi104;
					uint32_t phi296;
					uint32_t phi298;
					uint32_t phi299;
					uint32_t phi300;
					uint32_t phi302;
					uint64_t phi304;
					*anon38 = *(uint32_t*)(phi17 + 24);
					*(uint32_t*)(phi17 + 64) = (uint32_t)phi34 + 7;
					uint32_t phi40 = phi26;
					uint32_t phi41 = phi27;
					phi42 = phi22;
					uint32_t phi43 = phi32;
					uint32_t phi44 = phi33;
					phi45 = phi17;
					phi46 = 0;
					uint64_t phi47 = anon39 * 12;
					uint64_t phi48 = phi34;
					int64_t anon50 = (__sext int64_t)*(uint32_t*)(phi46 + phi47 + 6301632);
					uint32_t* anon49 = (uint32_t*)((anon50 << 2) + 6300992);
					if (*(uint32_t*)(phi45 + 24) < *anon49)
					{
						uint32_t phi54;
						uint64_t phi297;
						*anon49 = *(uint32_t*)(phi45 + 28);
						uint32_t phi51 = phi25;
						uint32_t phi52 = phi40;
						uint32_t phi53 = phi41;
						uint32_t anon55 = (uint32_t)phi48 + 8;
						phi54 = anon55;
						uint32_t phi56 = phi36;
						uint32_t phi_in57 = phi29;
						uint32_t phi58 = anon55;
						uint32_t phi59 = phi30;
						uint32_t phi_in60 = phi42;
						uint32_t phi_in61 = anon55;
						uint32_t phi_in62 = anon55;
						uint32_t phi_in63 = anon55;
						uint32_t phi64 = phi37;
						uint32_t phi65 = anon55;
						uint32_t phi66 = anon55;
						uint32_t phi67 = phi43;
						uint32_t phi_in68 = anon55;
						uint32_t phi69 = anon55;
						uint32_t phi70 = phi44;
						uint64_t phi71 = phi47;
						uint32_t phi_in72 = anon55;
						uint32_t phi73 = anon55;
						uint32_t phi74 = anon55;
						uint64_t phi_in75 = phi45;
						uint64_t phi76 = 0;
						uint64_t phi77 = anon50 * 12;
						uint64_t phi78 = phi48;
						do
						{
							uint32_t phi_in79 = phi51;
							uint32_t phi_in80 = phi54;
							uint32_t phi81 = phi58;
							uint32_t phi82 = phi59;
							uint32_t phi83 = phi64;
							uint32_t phi_in84 = phi65;
							uint32_t phi85 = phi67;
							uint32_t phi86 = phi69;
							uint32_t phi_in87 = phi70;
							uint64_t phi88 = phi71;
							uint32_t phi89 = phi73;
							uint32_t phi_in90 = phi74;
							uint64_t phi_in91 = phi76;
							phi51 = phi_in79;
							uint32_t phi92 = phi52;
							phi54 = phi_in80;
							uint32_t phi93 = phi_in57;
							uint32_t phi94 = phi81;
							phi30 = phi82;
							uint64_t phi95 = phi77;
							uint32_t phi96 = phi_in61;
							uint32_t phi_in97 = phi_in63;
							uint32_t phi_in98 = phi83;
							uint32_t phi_in99 = phi_in84;
							uint32_t phi_in100 = phi66;
							uint32_t phi101 = phi85;
							uint32_t phi_in102 = phi_in68;
							phi69 = phi86;
							uint32_t phi103 = phi_in87;
							phi104 = phi88;
							uint32_t phi105 = phi_in72;
							uint32_t phi106 = phi89;
							uint32_t phi107 = phi_in90;
							uint64_t phi_in108 = phi_in75;
							phi78 = phi78;
							int64_t anon110 = (__sext int64_t)*(uint32_t*)(phi_in91 + phi77 + 6301632);
							uint32_t* anon109 = (uint32_t*)((anon110 << 2) + 6300992);
							if (*(uint32_t*)(phi_in75 + 28) < *anon109)
							{
								uint64_t phi129;
								*anon109 = *(uint32_t*)(phi_in75 + 40);
								*(uint32_t*)(phi_in75 + 120) = (uint32_t)phi78 + 9;
								uint64_t phi_in111 = 0;
								uint32_t phi112 = phi_in79;
								uint32_t phi113 = phi53;
								uint32_t phi114 = phi_in80;
								uint32_t phi115 = phi56;
								uint32_t phi116 = phi_in57;
								uint32_t phi_in117 = phi_in60;
								uint32_t phi_in118 = phi_in61;
								uint32_t phi_in119 = phi_in62;
								uint32_t phi120 = phi_in63;
								uint32_t phi121 = phi_in68;
								uint64_t phi122 = phi_in91;
								uint32_t phi123 = phi_in87;
								uint64_t phi124 = phi77;
								uint32_t phi_in125 = phi_in72;
								uint32_t phi126 = phi_in90;
								uint64_t phi_in127 = phi_in75;
								uint64_t phi_in128 = phi78 & 0xffffffff;
								do
								{
									uint64_t phi140;
									phi129 = phi_in111;
									uint32_t phi130 = phi52;
									uint32_t phi_in131 = phi113;
									uint32_t phi_in132 = phi114;
									uint32_t phi_in133 = phi115;
									uint32_t phi_in134 = phi116;
									uint32_t phi_in135 = phi81;
									int64_t anon141 = (__sext int64_t)*(uint32_t*)(phi129 + anon110 * 12 + 6301632);
									int64_t anon139 = (__sext int64_t)*(uint32_t*)(phi140 + anon141 * 12 + 6301632);
									int64_t anon138 = anon139 * 12;
									int64_t anon137 = (__sext int64_t)*(uint32_t*)(anon138 + 6301636);
									uint32_t* anon136 = (uint32_t*)((anon137 << 2) + 6300992);
									*anon136 = phi120;
									uint32_t phi142 = phi83;
									uint32_t phi143 = phi66;
									uint32_t phi_in144 = phi85;
									uint32_t phi_in145 = phi86;
									uint64_t phi146 = phi122;
									uint32_t phi_in147 = phi123;
									uint64_t phi_in148 = phi88;
									uint32_t phi149 = phi89;
									phi_in79 = phi112;
									phi52 = phi130;
									uint32_t phi150 = phi_in131;
									phi114 = phi_in132;
									uint32_t phi151 = phi_in133;
									uint32_t phi152 = phi_in134;
									phi94 = phi_in135;
									phi_in60 = phi_in117;
									uint32_t phi153 = phi_in118;
									uint32_t phi154 = phi_in119;
									uint32_t phi155 = *anon136;
									uint32_t phi156 = phi142;
									uint32_t phi157 = phi_in84;
									uint32_t phi158 = phi_in144;
									uint32_t phi159 = phi121;
									phi86 = phi_in145;
									phi_in91 = phi146;
									uint32_t phi160 = phi_in147;
									uint64_t phi161 = phi_in148;
									uint64_t phi_in162 = phi124;
									phi_in72 = phi_in125;
									uint32_t phi163 = phi149;
									phi_in90 = phi126;
									phi_in75 = phi_in127;
									uint64_t phi164 = phi_in128;
									uint32_t* anon165 = (uint32_t*)((anon141 << 2) + 6300992);
									if (*(uint32_t*)(phi_in127 + 40) < *anon165)
									{
										*anon165 = *(uint32_t*)(phi_in127 + 44);
										uint64_t phi_in166 = 0;
										uint32_t phi_in167 = phi_in131;
										uint32_t phi_in168 = phi_in132;
										uint32_t phi_in169 = phi_in133;
										uint32_t phi170 = phi_in134;
										uint32_t phi171 = phi_in135;
										*(uint32_t*)(phi172 + 96) = phi_in117;
										*(uint32_t*)(phi172 + 124) = phi_in118;
										uint32_t phi173 = phi_in119;
										uint32_t phi174 = phi_in84;
										uint32_t phi175 = phi143;
										uint32_t phi_in176 = phi_in144;
										uint32_t phi177 = phi_in145;
										uint32_t phi178 = phi_in147;
										*(uint64_t*)(phi172 + 104) = phi_in148;
										uint64_t phi172 = phi_in127;
										uint64_t phi179 = phi_in128;
										do
										{
											uint64_t phi185;
											phi140 = phi_in166;
											uint32_t phi180 = phi112;
											uint32_t phi_in181 = phi130;
											uint32_t phi182 = phi_in167;
											uint32_t phi183 = phi_in168;
											uint32_t phi184 = phi_in169;
											*(uint32_t*)(phi185 + 96) = phi170;
											uint32_t phi_in186 = phi171;
											phi_in118 = *(uint32_t*)(phi172 + 124);
											uint32_t phi187 = phi142;
											phi_in84 = phi174;
											uint32_t phi_in188 = phi175;
											uint32_t phi189 = phi_in176;
											uint32_t phi_in190 = phi121;
											uint32_t phi_in191 = phi177;
											*(uint64_t*)(phi172 + 88) = phi146;
											uint32_t phi_in192 = phi178;
											*(uint64_t*)(phi185 + 104) = *(uint64_t*)(phi172 + 104);
											*(uint64_t*)(phi172 + 112) = phi124;
											uint32_t phi193 = phi_in125;
											uint32_t phi_in194 = phi149;
											uint32_t phi_in195 = phi126;
											uint64_t phi_in196 = phi179;
											phi112 = phi180;
											uint32_t phi197 = phi_in181;
											phi_in131 = phi182;
											uint32_t phi198 = *(uint32_t*)(phi185 + 96);
											phi171 = phi_in186;
											uint32_t phi199 = phi173;
											uint32_t phi200 = *anon136;
											uint32_t phi201 = phi187;
											uint32_t phi202 = phi_in188;
											uint32_t phi203 = phi_in190;
											uint32_t phi204 = phi_in191;
											uint64_t phi205 = *(uint64_t*)(phi172 + 88);
											uint32_t phi206 = phi_in192;
											uint64_t phi207 = *(uint64_t*)(phi185 + 104);
											uint64_t phi208 = *(uint64_t*)(phi172 + 112);
											uint32_t phi_in209 = phi_in194;
											phi126 = phi_in195;
											uint64_t phi210 = phi172;
											phi179 = phi_in196;
											uint32_t* anon211 = (uint32_t*)((anon139 << 2) + 6300992);
											if (*(uint32_t*)(phi172 + 44) < *anon211)
											{
												*anon211 = *(uint32_t*)(phi172 + 64);
												uint32_t phi212 = phi180;
												*(uint32_t*)(phi213 + 88) = phi_in181;
												uint32_t phi214 = phi183;
												uint64_t phi213 = phi172;
												uint32_t phi215 = phi184;
												uint32_t phi216 = *(uint32_t*)(phi185 + 96);
												uint32_t phi_in217 = phi_in186;
												uint32_t phi218 = phi82;
												uint32_t phi219 = *(uint32_t*)(phi172 + 96);
												uint32_t phi220 = phi_in118;
												uint32_t phi221 = phi173;
												uint32_t phi_in222 = *anon136;
												uint32_t phi223 = phi187;
												phi174 = phi_in84;
												uint32_t phi224 = phi_in188;
												uint32_t phi225 = phi189;
												phi203 = phi_in190;
												uint32_t phi_in226 = phi_in191;
												uint64_t phi227 = *(uint64_t*)(phi172 + 88);
												uint32_t phi228 = phi_in192;
												*(uint64_t*)(phi213 + 96) = *(uint64_t*)(phi185 + 104);
												uint64_t phi229 = *(uint64_t*)(phi172 + 112);
												uint32_t phi_in230 = phi193;
												uint32_t phi_in231 = phi_in194;
												uint32_t phi_in232 = phi_in195;
												uint64_t phi_in233 = phi_in196;
												if (*(uint32_t*)(phi172 + 64) < *anon136)
												{
													uint32_t phi_in234 = phi_in181;
													uint32_t phi235 = phi182;
													uint32_t phi_in236 = phi183;
													uint32_t phi_in237 = phi184;
													*(uint32_t*)(phi213 + 112) = phi_in186;
													uint32_t phi238 = phi82;
													uint64_t phi239 = anon137;
													uint32_t phi_in240 = *(uint32_t*)(phi172 + 96);
													uint32_t phi241 = phi189;
													*(uint64_t*)(phi185 + 88) = *(uint64_t*)(phi172 + 88);
													uint32_t phi_in242 = phi_in192;
													*(uint64_t*)(phi185 + 112) = *(uint64_t*)(phi172 + 112);
													if (phi173 < *anon136)
													{
														*(uint32_t*)(phi172 + 124) = phi_in118;
														*(uint64_t*)(phi172 + 104) = *(uint64_t*)(phi185 + 104);
														*(uint64_t*)(phi172 + 80) = anon137;
														uint64_t anon243 = (__zext uint64_t)*anon136;
														w(4197873, anon11, (__sext int64_t)*anon136, anon243, anon243);
														phi180 = *(uint32_t*)(arg1 - 96);
														phi_in234 = *(uint32_t*)(arg1 - 96);
														phi235 = *(uint32_t*)(arg1 - 96);
														phi_in236 = *(uint32_t*)(arg1 - 68);
														phi_in237 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi185 + 96) = *(uint32_t*)(arg1 - 96);
														phi172 = anon11;
														*(uint32_t*)(phi213 + 112) = *(uint32_t*)(arg1 - 68);
														phi238 = *(uint32_t*)(arg1 - 96);
														phi239 = *(uint64_t*)(arg1 - 112);
														phi_in240 = *(uint32_t*)(arg1 - 96);
														phi187 = *(uint32_t*)(arg1 - 96);
														phi241 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi185 + 88) = *(uint64_t*)(arg1 - 104);
														phi_in242 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi185 + 104) = *(uint64_t*)(arg1 - 88);
														*(uint64_t*)(phi185 + 112) = *(uint64_t*)(arg1 - 80);
														phi_in196 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi244 = phi180;
													uint32_t phi_in245 = phi235;
													phi185 = phi172;
													uint32_t phi_in246 = phi238;
													*(uint64_t*)(phi185 + 80) = phi239;
													uint32_t phi_in247 = phi187;
													uint32_t phi248 = phi241;
													*(uint64_t*)(phi213 + 104) = *(uint64_t*)(phi185 + 112);
													uint32_t phi_in249 = phi_in234;
													uint32_t phi250 = phi_in245;
													uint32_t phi251 = phi_in236;
													uint32_t phi252 = phi_in237;
													uint32_t phi253 = *(uint32_t*)(phi185 + 96);
													uint64_t phi254 = *(uint64_t*)(phi185 + 80);
													uint32_t phi_in255 = phi_in240;
													uint32_t phi256 = phi_in247;
													*(uint64_t*)(phi213 + 80) = *(uint64_t*)(phi185 + 88);
													uint32_t phi_in257 = phi_in242;
													*(uint64_t*)(phi213 + 96) = *(uint64_t*)(phi185 + 104);
													uint64_t phi258 = phi_in196;
													int64_t anon259 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi185 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi213 + 112) < *(uint32_t*)((anon259 << 2) + 6300992))
													{
														*(uint32_t*)(phi185 + 124) = *(uint32_t*)(phi213 + 112);
														*(uint64_t*)(phi185 + 112) = *(uint64_t*)(phi213 + 104);
														uint64_t anon260 = (__zext uint64_t)*(uint32_t*)(phi185 + 120);
														w(4197793, anon11, anon259, anon260, anon260);
														phi244 = *(uint32_t*)(arg1 - 96);
														phi_in249 = *(uint32_t*)(arg1 - 96);
														phi250 = *(uint32_t*)(arg1 - 96);
														phi251 = alloca1.field14;
														phi252 = *(uint32_t*)(arg1 - 96);
														phi185 = anon11;
														phi253 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi213 + 112) = alloca1.field14;
														phi_in246 = *(uint32_t*)(arg1 - 96);
														phi254 = *(uint64_t*)(arg1 - 112);
														phi_in255 = *(uint32_t*)(arg1 - 96);
														phi256 = *(uint32_t*)(arg1 - 96);
														phi248 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi213 + 80) = *(uint64_t*)(arg1 - 104);
														phi_in257 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi213 + 96) = *(uint64_t*)(arg1 - 88);
														*(uint64_t*)(phi213 + 104) = *(uint64_t*)(arg1 - 80);
														phi258 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in261 = phi244;
													phi182 = phi250;
													uint32_t phi_in262 = phi251;
													*(uint32_t*)(phi213 + 88) = phi252;
													phi213 = phi185;
													uint32_t phi_in263 = phi253;
													phi_in230 = *(uint32_t*)(phi213 + 112);
													uint32_t phi_in264 = phi256;
													phi225 = phi248;
													phi_in233 = phi258;
													phi212 = phi_in261;
													*(uint32_t*)(phi213 + 88) = phi_in249;
													phi214 = phi_in262;
													phi215 = *(uint32_t*)(phi213 + 88);
													phi216 = phi_in263;
													phi_in217 = phi_in230;
													phi218 = phi_in246;
													phi219 = phi_in255;
													phi220 = phi_in230;
													phi221 = phi_in230;
													phi_in222 = phi_in230;
													phi223 = phi_in264;
													phi174 = phi_in230;
													phi224 = phi_in230;
													phi203 = phi_in230;
													phi_in226 = phi_in230;
													phi227 = *(uint64_t*)(phi213 + 80);
													phi228 = phi_in257;
													*(uint64_t*)(phi213 + 96) = *(uint64_t*)(phi213 + 96);
													phi229 = *(uint64_t*)(phi213 + 104);
													phi_in231 = phi_in230;
													phi_in232 = phi_in230;
													int64_t anon265 = (__sext int64_t)*(uint32_t*)(phi254 * 12 + 6301640);
													if (phi_in230 < *(uint32_t*)((anon265 << 2) + 6300992))
													{
														*(uint32_t*)(phi213 + 112) = phi_in230;
														uint64_t anon266 = (__zext uint64_t)*(uint32_t*)(phi213 + 120);
														w(4197395, anon11, anon265, anon266, anon266);
														phi212 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi213 + 88) = *(uint32_t*)(arg1 - 104);
														phi182 = *(uint32_t*)(arg1 - 104);
														phi214 = *(uint32_t*)(arg1 - 80);
														phi213 = anon11;
														phi215 = *(uint32_t*)(arg1 - 104);
														phi216 = *(uint32_t*)(arg1 - 104);
														phi_in217 = *(uint32_t*)(arg1 - 80);
														phi218 = *(uint32_t*)(arg1 - 104);
														phi219 = *(uint32_t*)(arg1 - 104);
														phi220 = *(uint32_t*)(arg1 - 80);
														phi221 = *(uint32_t*)(arg1 - 80);
														phi_in222 = *(uint32_t*)(arg1 - 80);
														phi223 = *(uint32_t*)(arg1 - 104);
														phi174 = *(uint32_t*)(arg1 - 80);
														phi224 = *(uint32_t*)(arg1 - 80);
														phi225 = *(uint32_t*)(arg1 - 104);
														phi203 = *(uint32_t*)(arg1 - 80);
														phi_in226 = *(uint32_t*)(arg1 - 80);
														phi227 = *(uint64_t*)(arg1 - 112);
														phi228 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi213 + 96) = *(uint64_t*)(arg1 - 96);
														phi229 = *(uint64_t*)(arg1 - 88);
														phi_in230 = *(uint32_t*)(arg1 - 80);
														phi_in231 = *(uint32_t*)(arg1 - 80);
														phi_in232 = *(uint32_t*)(arg1 - 80);
														phi_in233 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												uint32_t phi267 = phi212;
												uint32_t phi_in268 = *(uint32_t*)(phi213 + 88);
												uint32_t phi_in269 = phi182;
												int64_t anon271 = (__sext int64_t)*(uint32_t*)(anon138 + 6301640);
												uint32_t* anon270 = (uint32_t*)((anon271 << 2) + 6300992);
												*anon270 = phi214;
												uint32_t phi_in272 = phi215;
												uint32_t phi_in273 = phi216;
												uint32_t phi274 = phi218;
												uint32_t phi_in275 = phi219;
												phi_in118 = phi220;
												uint32_t phi_in276 = phi221;
												uint32_t phi_in277 = phi223;
												phi_in84 = phi174;
												uint32_t phi_in278 = phi224;
												phi189 = phi225;
												*(uint64_t*)(phi213 + 80) = phi227;
												uint32_t phi279 = phi228;
												*(uint64_t*)(phi213 + 104) = phi229;
												phi112 = phi267;
												phi197 = phi_in268;
												phi_in131 = phi_in269;
												phi183 = *anon270;
												phi184 = phi_in272;
												phi198 = phi_in273;
												phi171 = phi_in217;
												phi82 = phi274;
												*(uint32_t*)(phi172 + 96) = phi_in275;
												phi199 = phi_in276;
												phi200 = phi_in222;
												phi201 = phi_in277;
												phi202 = phi_in278;
												phi204 = phi_in226;
												phi205 = *(uint64_t*)(phi213 + 80);
												phi206 = phi279;
												phi207 = *(uint64_t*)(phi213 + 96);
												phi208 = *(uint64_t*)(phi213 + 104);
												phi193 = phi_in230;
												phi_in209 = phi_in231;
												phi126 = phi_in232;
												phi210 = phi213;
												phi179 = phi_in233;
												if (*(uint32_t*)(phi213 + 64) < *anon270)
												{
													uint32_t phi_in280 = phi_in269;
													uint32_t phi281 = *anon270;
													uint32_t phi_in282 = phi_in272;
													phi198 = phi_in273;
													uint32_t phi283 = phi_in275;
													uint32_t phi284 = phi_in277;
													uint32_t phi285 = phi189;
													*(uint64_t*)(phi210 + 80) = *(uint64_t*)(phi213 + 80);
													uint64_t phi286 = *(uint64_t*)(phi213 + 96);
													uint64_t phi287 = *(uint64_t*)(phi213 + 104);
													uint64_t phi288 = phi213;
													uint64_t phi_in289 = phi_in233;
													int64_t anon291 = anon271 * 12;
													int64_t anon290 = (__sext int64_t)*(uint32_t*)(anon291 + 6301636);
													if (*anon270 < *(uint32_t*)((anon290 << 2) + 6300992))
													{
														*(uint32_t*)(phi213 + 112) = *anon270;
														*(uint32_t*)(phi213 + 88) = phi_in268;
														uint64_t anon292 = (__zext uint64_t)*(uint32_t*)(phi213 + 120);
														w(4197948, anon11, anon290, anon292, anon292);
														phi267 = *(uint32_t*)(arg1 - 104);
														phi_in268 = *(uint32_t*)(arg1 - 104);
														phi_in280 = *(uint32_t*)(arg1 - 104);
														phi281 = *(uint32_t*)(arg1 - 80);
														phi_in282 = *(uint32_t*)(arg1 - 104);
														phi198 = *(uint32_t*)(arg1 - 104);
														phi274 = *(uint32_t*)(arg1 - 104);
														phi283 = *(uint32_t*)(arg1 - 104);
														phi284 = *(uint32_t*)(arg1 - 104);
														phi285 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi210 + 80) = *(uint64_t*)(arg1 - 112);
														phi279 = *(uint32_t*)(arg1 - 104);
														phi286 = *(uint64_t*)(arg1 - 96);
														phi287 = *(uint64_t*)(arg1 - 88);
														phi288 = anon11;
														phi_in289 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													*(uint32_t*)(phi210 + 88) = phi267;
													phi193 = phi281;
													phi82 = phi274;
													uint32_t phi_in293 = phi283;
													phi201 = phi284;
													phi189 = phi285;
													phi205 = *(uint64_t*)(phi210 + 80);
													phi206 = phi279;
													*(uint64_t*)(phi210 + 96) = phi286;
													*(uint64_t*)(phi210 + 104) = phi287;
													phi210 = phi288;
													phi112 = *(uint32_t*)(phi210 + 88);
													phi197 = phi_in268;
													phi_in131 = phi_in280;
													phi183 = phi193;
													phi184 = phi_in282;
													phi171 = phi193;
													*(uint32_t*)(phi172 + 96) = phi_in293;
													phi_in118 = phi193;
													phi199 = phi193;
													phi200 = phi193;
													phi_in84 = phi193;
													phi202 = phi193;
													phi203 = phi193;
													phi204 = phi193;
													phi207 = *(uint64_t*)(phi210 + 96);
													phi208 = *(uint64_t*)(phi210 + 104);
													phi_in209 = phi193;
													phi126 = phi193;
													phi179 = phi_in289;
													int64_t anon294 = (__sext int64_t)*(uint32_t*)(anon291 + 6301640);
													if (phi193 < *(uint32_t*)((anon294 << 2) + 6300992))
													{
														*(uint32_t*)(phi210 + 112) = phi193;
														*(uint64_t*)(phi210 + 80) = phi205;
														uint64_t anon295 = (__zext uint64_t)*(uint32_t*)(phi210 + 120);
														w(4197231, anon11, anon294, anon295, anon295);
														phi112 = alloca1.field8;
														phi197 = alloca1.field8;
														phi_in131 = alloca1.field8;
														phi183 = alloca1.field12;
														phi184 = alloca1.field8;
														phi198 = alloca1.field8;
														phi171 = alloca1.field12;
														phi82 = alloca1.field8;
														*(uint32_t*)(phi172 + 96) = alloca1.field8;
														phi_in118 = alloca1.field12;
														phi199 = alloca1.field12;
														phi200 = alloca1.field12;
														phi201 = alloca1.field8;
														phi_in84 = alloca1.field12;
														phi202 = alloca1.field12;
														phi189 = alloca1.field8;
														phi203 = alloca1.field12;
														phi204 = alloca1.field12;
														phi205 = alloca1.field7;
														phi206 = alloca1.field8;
														phi207 = alloca1.field10;
														phi208 = alloca1.field11;
														phi193 = alloca1.field12;
														phi_in209 = alloca1.field12;
														phi126 = alloca1.field12;
														phi210 = anon11;
														phi179 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi151 = phi184;
											phi152 = phi198;
											phi154 = phi199;
											phi155 = phi200;
											phi156 = phi201;
											phi143 = phi202;
											phi159 = phi203;
											phi_in91 = phi205;
											phi160 = phi206;
											phi161 = phi207;
											phi_in79 = phi112;
											phi52 = phi197;
											phi150 = phi_in131;
											phi114 = phi183;
											phi94 = phi171;
											phi_in60 = *(uint32_t*)(phi172 + 96);
											phi153 = phi_in118;
											phi157 = phi_in84;
											phi158 = phi189;
											phi86 = phi204;
											phi_in162 = phi208;
											phi_in72 = phi193;
											phi163 = phi_in209;
											phi_in90 = phi126;
											phi_in75 = phi210;
											phi164 = phi179;
											phi_in166 = phi140 + 4;
											phi130 = phi197;
											phi_in167 = phi_in131;
											phi_in168 = phi183;
											phi_in169 = phi151;
											phi170 = phi152;
											*(uint32_t*)(phi172 + 124) = phi_in118;
											phi173 = phi154;
											*anon136 = phi155;
											phi142 = phi156;
											phi174 = phi_in84;
											phi175 = phi143;
											phi_in176 = phi189;
											phi121 = phi159;
											phi177 = phi204;
											phi146 = phi_in91;
											phi178 = phi160;
											*(uint64_t*)(phi172 + 104) = phi161;
											phi124 = phi208;
											phi_in125 = phi193;
											phi149 = phi_in209;
											phi172 = phi210;
										}
										while (phi140 != 8);
									}
									phi53 = phi150;
									phi56 = phi151;
									phi96 = phi153;
									phi_in99 = phi157;
									phi_in102 = phi159;
									phi103 = phi160;
									phi106 = phi163;
									phi51 = phi_in79;
									phi92 = phi52;
									phi54 = phi114;
									phi93 = phi152;
									phi30 = phi82;
									phi95 = phi_in162;
									phi_in62 = phi154;
									phi_in97 = phi155;
									phi_in98 = phi156;
									phi_in100 = phi143;
									phi101 = phi158;
									phi69 = phi86;
									phi104 = phi161;
									phi105 = phi_in72;
									phi107 = phi_in90;
									phi_in108 = phi_in75;
									phi78 = phi164;
									phi_in111 = phi129 + 4;
									phi112 = phi_in79;
									phi113 = phi53;
									phi115 = phi56;
									phi116 = phi152;
									phi81 = phi94;
									phi_in117 = phi_in60;
									phi_in118 = phi96;
									phi_in119 = phi154;
									phi120 = phi155;
									phi83 = phi156;
									phi_in84 = phi_in99;
									phi66 = phi143;
									phi85 = phi158;
									phi121 = phi_in102;
									phi122 = phi_in91;
									phi123 = phi103;
									phi88 = phi161;
									phi124 = phi_in162;
									phi_in125 = phi_in72;
									phi89 = phi106;
									phi126 = phi_in90;
									phi_in127 = phi_in75;
									phi_in128 = phi164;
								}
								while (phi129 != 8);
							}
							phi296 = phi53;
							phi297 = phi_in91;
							phi298 = phi51;
							phi299 = phi92;
							phi36 = phi56;
							phi300 = phi93;
							phi_in301 = phi_in60;
							phi37 = phi_in98;
							phi302 = phi101;
							phi44 = phi103;
							phi_in303 = phi_in108;
							phi304 = phi78;
							if (phi297 != 8)
							{
								phi52 = phi92;
								phi53 = phi296;
								phi56 = phi56;
								phi_in57 = phi93;
								phi58 = phi94;
								phi59 = phi30;
								phi_in61 = phi96;
								phi_in63 = phi_in97;
								phi64 = phi_in98;
								phi65 = phi_in99;
								phi66 = phi_in100;
								phi67 = phi101;
								phi_in68 = phi_in102;
								phi70 = phi103;
								phi71 = phi104;
								phi_in72 = phi105;
								phi73 = phi106;
								phi74 = phi107;
								phi_in75 = phi_in108;
								phi76 = phi297 + 4;
								phi77 = phi95;
							}
						}
						while (phi297 != 8);
					}
					else 
					{
						phi298 = phi25;
						phi299 = phi40;
						phi296 = phi41;
						phi36 = phi36;
						phi300 = phi29;
						phi30 = phi30;
						phi104 = phi47;
						phi_in301 = phi42;
						phi37 = phi37;
						phi302 = phi43;
						phi44 = phi44;
						phi_in303 = phi45;
						phi304 = phi48 & 0xffffffff;
					}
					phi25 = phi298;
					phi40 = phi299;
					phi41 = phi296;
					phi29 = phi300;
					phi47 = phi104;
					phi43 = phi302;
					phi48 = phi304;
					phi305 = phi40;
					phi27 = phi41;
					phi306 = phi36;
					phi307 = phi29;
					phi308 = *(uint64_t*)(phi_in303 + 72);
					phi309 = phi_in301;
					phi310 = phi37;
					phi311 = phi43;
					phi312 = phi44;
					phi313 = phi48;
					phi314 = phi_in303;
				}
				else 
				{
					phi305 = phi26;
					phi27 = phi27;
					phi306 = phi36;
					phi307 = phi29;
					phi308 = *(uint64_t*)(phi17 + 72);
					phi309 = phi22;
					phi310 = phi37;
					phi311 = phi32;
					phi312 = phi33;
					phi313 = phi34 & 0xffffffff;
					phi314 = phi17;
				}
				phi26 = phi305;
				phi28 = phi306;
				phi29 = phi307;
				phi22 = phi309;
				phi31 = phi310;
				phi32 = phi311;
				phi33 = phi312;
				phi34 = phi313;
				phi17 = phi314;
				phi315 = *(uint32_t*)(phi17 + 68);
				phi316 = phi30;
				phi317 = *(uint64_t*)(phi17 + 56);
				phi16 = (__zext uint64_t)phi30;
				phi318 = *(uint32_t*)(phi17 + 68);
				phi319 = phi30;
				phi19 = *(uint32_t*)(phi17 + 68);
				phi21 = phi17;
			}
			else 
			{
				phi315 = phi15;
				phi316 = phi12;
				phi317 = *(uint64_t*)(phi17 + 56);
				phi16 = phi16 & 0xffffffff;
				phi318 = *(uint32_t*)(phi17 + 68);
				phi319 = phi22;
				phi19 = phi19;
				phi21 = phi17;
			}
			phi15 = phi315;
			phi12 = phi316;
			*(uint32_t*)(phi17 + 68) = phi318;
			phi18 = phi319;
			phi320 = *(uint64_t*)(phi21 + 48);
			phi4 = phi12;
			phi321 = phi15;
			phi322 = (__zext uint64_t)phi12;
			phi323 = phi15;
			phi9 = phi12;
			phi10 = phi21;
		}
		else 
		{
			phi320 = *(uint64_t*)(phi10 + 48);
			phi4 = phi12;
			phi321 = phi5;
			phi322 = phi7 & 0xffffffff;
			phi323 = *anon13;
			phi9 = phi9;
			phi10 = phi10;
		}
		if (phi320 != 8)
		{
			phi5 = phi321;
			phi7 = phi322;
			phi8 = phi323;
			*(uint64_t*)(phi10 + 48) = phi320 + 4;
		}
		phi20 = phi317 + 4;
		phi35 = phi308 + 4;
		phi42 = phi_in301;
		phi45 = phi_in303;
		phi46 = phi46 + 4;
		break;
	}
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	alloca1.field1 = arg0;
	uint64_t phi2 = 4;
	while (true)
	{
		uint32_t* anon4;
		uint64_t anon5;
		uint32_t* anon10;
		do
		{
			do
			{
				uint64_t anon3 = random();
				phi2 = phi2;
				uint64_t anon6 = anon3 << 32;
				anon5 = anon3 + (((anon3 & 0xffffffff) * 2290649225 + anon6 >> 32 >> 4) - (anon6 >> 32 >> 31)) * -30 << 32 >> 30;
				anon4 = (uint32_t*)(anon5 + 6301504);
			}
			while (*anon4 != 0);
			phi2 = phi2;
		}
		while (*(uint32_t*)(anon5 + 6300864) != 0);
		*anon4 = 1;
		do
		{
			uint64_t anon8;
			do
			{
				uint64_t anon7 = random();
				uint64_t anon9 = anon7 << 32;
				anon8 = anon7 + (((anon7 & 0xffffffff) * 2290649225 + anon9 >> 32 >> 4) - (anon9 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon8 + 6301504) != 0);
			anon10 = (uint32_t*)(anon8 + 6300864);
		}
		while (*anon10 != 0);
		*anon10 = 1;
		uint64_t anon11 = random();
		uint64_t anon12 = anon11 << 32;
		w(4198271, (uint64_t)&alloca1, anon11 + (((anon11 & 0xffffffff) * 2290649225 + anon12 >> 32 >> 4) - (anon12 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
		uint64_t phi13 = 3;
		while (true)
		{
			uint64_t anon15;
			uint32_t* anon17;
			do
			{
				do
				{
					do
					{
						do
						{
							uint64_t anon14 = random();
							phi13 = phi13;
							uint64_t anon16 = anon14 << 32;
							anon15 = anon14 + (((anon14 & 0xffffffff) * 2290649225 + anon16 >> 32 >> 4) - (anon16 >> 32 >> 31)) * -30 << 32 >> 30;
						}
						while (*(uint32_t*)(anon15 + 6301504) != 0);
						phi13 = phi13;
					}
					while (*(uint32_t*)(anon15 + 6300864) != 0);
					phi13 = phi13;
					anon17 = (uint32_t*)(anon15 + 6301120);
				}
				while (*anon17 != 0);
				phi13 = phi13;
			}
			while (*(uint32_t*)(anon15 + 6300992) == 0);
			*anon17 = 1;
			while (true)
			{
				uint64_t anon18 = random();
				uint64_t anon19 = anon18 << 32;
				*(uint32_t*)0x60292c = (uint32_t)anon18 + (uint32_t)(((anon18 & 0xffffffff) * 2290649225 + anon19 >> 32 >> 4) - (anon19 >> 32 >> 31)) * 4294967266;
			}
			break;
			uint32_t anon20 = (uint32_t)phi13 - 1;
			phi13 = (__zext uint64_t)anon20;
		}
		break;
		uint32_t anon21 = (uint32_t)phi2 - 1;
		phi2 = (__zext uint64_t)anon21;
	}
}
void r(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi_in2;
	uint32_t phi6;
	uint32_t phi1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	do
	{
		uint32_t phi_in5 = phi1;
		phi6 = phi_in2;
		if (phi6 != 0)
		{
			*anon3 = phi6 - 1;
			uint32_t phi_in7 = 3;
			uint32_t phi8 = phi_in5;
			uint32_t phi9 = phi_in7;
			uint64_t anon10 = random();
			if (phi8 > 1000)
			{
				break;
			}
			else 
			{
				uint32_t anon11 = phi8 + 1;
				phi_in5 = anon11;
				uint32_t anon12 = phi9 - (__zext uint32_t)(anon11 == (anon11 / 100 - (uint32_t)((__zext uint64_t)anon11 << 32 >> 63)) * 100);
				phi_in7 = anon12;
				uint64_t anon15 = anon10 << 32;
				uint64_t anon14 = anon10 + (((anon10 & 0xffffffff) * 2290649225 + anon15 >> 36) - (anon15 >> 32 >> 31)) * 4294967266;
				uint32_t anon13 = (uint32_t)anon14;
				uint64_t anon17 = anon4 >> 32;
				uint32_t anon16 = (uint32_t)anon17;
				if (anon13 != anon16)
				{
					phi_in5 = anon11;
					phi_in7 = anon12;
					uint64_t anon19 = anon14 << 32;
					uint32_t* anon18 = (uint32_t*)((anon19 >> 30) + 6301376);
					if ((*anon18 >> 31 | (__zext uint32_t)(*anon18 == 0)) == 0)
					{
						phi_in5 = anon11;
						phi_in7 = anon12;
						uint64_t anon20 = anon17 * 12;
						if (!(*(uint32_t*)(anon20 + 6301640) == anon13 | anon12 > *anon18))
						{
							phi_in5 = anon11;
							phi_in7 = anon12;
							if (anon13 != *(uint32_t*)(anon20 + 6301636))
							{
								uint32_t anon21 = *anon18 - 1;
								*anon18 = anon21;
								uint64_t anon22 = anon17 * 3;
								*(uint32_t*)(((__sext int64_t)anon21 + anon22 << 2) + 6301632) = anon13;
								uint62_t anon23 = (uint62_t)(anon19 >> 32) * 3;
								*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon21 + anon23) << 2) + 6301632) = anon16;
								r(4198736, anon14 & 0xffffffff);
								uint32_t* anon24 = (uint32_t*)((anon19 >> 30) + 6301376);
								*(uint32_t*)(((__zext uint64_t)(anon23 + (__sext int62_t)*anon24) << 2) + 6301632) = 4294967295;
								*anon24 = *anon24 + 1;
								*(uint32_t*)(((__sext int64_t)*anon3 + anon22 << 2) + 6301632) = 4294967295;
								*anon3 = 0;
								phi1 = anon11;
								phi_in2 = 0;
							}
						}
					}
				}
			}
		}
	}
	while (phi6 != 0);
	return;
}
void m(uint64_t arg0)
{
	getpid(4198911);
	srandom(0);
	(__asm "pcmpeqd xmm0, xmm0")();
	(__asm "movdqa xmm2, xmmword ptr [rip + 0xc6c]")();
	(__asm "movdqa xmm1, xmmword ptr [rip + 0xc74]")();
	while (true)
	{
		uint64_t phi3;
		uint64_t phi6;
		uint64_t phi7;
		uint64_t phi_in8;
		uint64_t phi9;
		uint64_t phi25;
		uint32_t anon26;
		uint32_t anon39;
		(__asm "movaps xmmword ptr [rip + 0x20158f], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x201598], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015a1], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2012fa], xmm2")();
		(__asm "movaps xmmword ptr [rip + 0x201473], xmm1")();
		(__asm "movaps xmmword ptr [rip + 0x20159c], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015a5], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015ae], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2012e7], xmm2")();
		(__asm "movaps xmmword ptr [rip + 0x201460], xmm1")();
		(__asm "movaps xmmword ptr [rip + 0x2015a9], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015b2], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015bb], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2012d4], xmm2")();
		(__asm "movaps xmmword ptr [rip + 0x20144d], xmm1")();
		(__asm "movaps xmmword ptr [rip + 0x2015b6], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015bf], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015c8], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2012c1], xmm2")();
		(__asm "movaps xmmword ptr [rip + 0x20143a], xmm1")();
		(__asm "movaps xmmword ptr [rip + 0x2015c3], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015cc], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015d5], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2012ae], xmm2")();
		(__asm "movaps xmmword ptr [rip + 0x201427], xmm1")();
		(__asm "movaps xmmword ptr [rip + 0x2015d0], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015d9], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015e2], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x20129b], xmm2")();
		(__asm "movaps xmmword ptr [rip + 0x201414], xmm1")();
		(__asm "movaps xmmword ptr [rip + 0x2015dd], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015e6], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x2015ef], xmm0")();
		(__asm "movaps xmmword ptr [rsp + 0x20], xmm0")();
		(__asm "movaps xmmword ptr [rip + 0x201283], xmm2")();
		(__asm "movaps xmmword ptr [rsp + 0x10], xmm2")();
		(__asm "movaps xmmword ptr [rip + 0x2013f7], xmm1")();
		(__asm "movaps xmmword ptr [rsp], xmm1")();
		uint64_t phi1 = 6301504;
		uint64_t phi_in2 = 15;
		do
		{
			phi3 = phi_in2;
			if (phi3 != 0)
			{
				*(uint64_t*)phi1 = 0;
				phi1 = phi1 + 8;
				phi_in2 = phi3 - 1;
			}
		}
		while (phi3 != 0);
		*(uint32_t*)0x602918 = 4294967295;
		*(uint32_t*)0x602914 = 4294967295;
		*(uint32_t*)0x602910 = 4294967295;
		*(uint32_t*)0x6025b0 = 60;
		*(uint32_t*)0x602730 = 3;
		*(uint32_t*)0x602924 = 4294967295;
		*(uint32_t*)0x602920 = 4294967295;
		*(uint32_t*)0x60291c = 4294967295;
		*(uint32_t*)0x6025b4 = 60;
		*(uint32_t*)0x602734 = 3;
		uint64_t phi_in4 = 15;
		uint64_t phi5 = 6300864;
		do
		{
			phi6 = phi_in4;
			phi7 = 6301248;
			phi_in8 = 15;
			if (phi6 != 0)
			{
				*(uint64_t*)phi5 = 0;
				phi_in4 = phi6 - 1;
				phi5 = phi5 + 8;
			}
		}
		while (phi6 != 0);
		do
		{
			phi9 = phi_in8;
			if (phi9 != 0)
			{
				*(uint64_t*)phi7 = 0;
				phi7 = phi7 + 8;
				phi_in8 = phi9 - 1;
			}
		}
		while (phi9 != 0);
		r(4199339, 0);
		(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
		(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
		(__asm "movdqa xmm1, xmmword ptr [rsp]")();
		uint32_t* phi10 = (uint32_t*)0x6027c4;
		uint64_t phi_in11 = 6301636;
		do
		{
			uint32_t phi_in14;
			uint32_t phi15;
			uint32_t phi16;
			uint32_t phi17;
			uint32_t phi18;
			uint32_t* anon19;
			uint32_t phi_in20;
			uint32_t phi21;
			uint32_t phi23;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi_in14 = *phi10;
				phi15 = *phi10;
				phi16 = *anon13;
				phi17 = *anon13;
				anon19 = (uint32_t*)(phi12 - 4);
				phi18 = *anon19;
			}
			else 
			{
				phi_in20 = *anon19;
				if (*phi10 < *anon19)
				{
					phi_in14 = *anon13 & 0xf;
					phi15 = *anon13;
					phi16 = *phi10 & 0xf;
					phi17 = *phi10;
					phi18 = *anon19 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19)
			{
				phi21 = phi15;
				uint32_t phi_in22 = phi16;
				*anon19 = phi17;
				*phi10 = phi18;
				phi_in20 = phi_in22;
				*phi10 = phi_in14;
				phi23 = *anon19;
			}
			if (*anon13 < *phi10)
			{
				if (*anon13 >= *anon19)
				{
					phi_in20 = *anon19 & 0xf;
					*phi10 = *phi10;
					phi23 = *anon13;
					phi21 = *phi10;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19 || *anon13 < *phi10 && *anon13 >= *anon19)
			{
				*anon13 = phi23;
				if (phi21 - *anon13 <= 4294967295)
				{
					phi_in20 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi24 = phi_in20;
			phi25 = 6301636;
			anon26 = phi24 + 1 & 0xff;
			if (anon26 != 0)
			{
				phi25 = 6301636;
				uint64_t anon27 = phi12 + 12;
				phi10 = (uint32_t*)(anon27 & 0xc);
				phi_in11 = anon27;
				if (phi12 == 6301984)
				{
					break;
				}
			}
		}
		while (anon26 != 0);
		do
		{
			uint32_t phi30;
			uint32_t phi_in31;
			uint32_t phi32;
			uint32_t* anon33;
			uint32_t phi_in34;
			uint32_t phi37;
			uint32_t* anon28 = (uint32_t*)(phi25 + 4);
			uint32_t* anon29 = (uint32_t*)phi25;
			if (*anon28 < *anon29)
			{
				*anon29 = *anon28;
				*anon28 = *anon29;
				phi30 = *anon29;
				phi_in31 = *anon29;
				phi32 = *anon28;
				anon33 = (uint32_t*)(phi25 - 4);
				*anon33 = *anon28;
				*anon29 = *anon33;
			}
			else 
			{
				phi_in34 = *anon33;
				if (*anon29 < *anon33)
				{
					phi30 = *anon28 & 0xf;
					phi_in31 = *anon28;
					phi32 = *anon29 & 0xf;
					*anon33 = *anon29;
					*anon29 = *anon33 & 0xf;
				}
			}
			if (*anon28 >= *anon29 && *anon29 < *anon33 || *anon28 < *anon29 && *anon28 < *anon33)
			{
				uint32_t phi_in35 = phi30;
				uint32_t phi_in36 = phi32;
				phi_in34 = phi_in36;
				*anon29 = phi_in35;
				*anon28 = *anon33;
				phi37 = phi_in31;
			}
			if (*anon28 < *anon29)
			{
				if (*anon28 >= *anon33)
				{
					phi_in34 = *anon33 & 0xf;
					*anon29 = *anon29;
					*anon28 = *anon28;
					phi37 = *anon29;
				}
			}
			if (*anon28 >= *anon29 && *anon29 < *anon33 || *anon28 < *anon29 && *anon28 < *anon33 || *anon28 < *anon29 && *anon28 >= *anon33)
			{
				if (phi37 - *anon28 <= 4294967295)
				{
					phi_in34 = *(uint32_t*)((phi25 & 0xf) - 4);
				}
			}
			uint32_t phi38 = phi_in34;
			anon39 = phi38 + 1 & 0xff;
			if (anon39 != 0)
			{
				phi25 = phi25 + 12;
			}
		}
		while (anon39 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi4;
	uint32_t phi_in5;
	uint32_t phi6;
	uint32_t* anon7;
	uint32_t dispatch13;
	uint32_t phi16;
	uint32_t anon18;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		uint16_t** anon12;
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi4 = arg1 & 0xffffffff;
		phi_in5 = 0;
		phi6 = phi_in5;
		anon7 = (uint32_t*)0x602490;
		*anon7 = *anon7 + phi6;
		struct _IO_FILE** anon10 = (struct _IO_FILE**)0x602480;
		uint32_t anon9 = _IO_getc(*anon10);
		uint8_t anon8 = (uint8_t)anon9;
		if (anon8 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon11 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon8 != 10 || anon11 != 0 && anon8 == 10)
		{
			anon12 = __ctype_b_loc();
			dispatch13 = 0;
		}
		uint64_t* anon14 = (uint64_t*)anon12;
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon8 << 1 | 1)) & 8) != 0)
		{
			if (anon8 != 10 || anon11 != 0 && anon8 == 10)
			{
				uint32_t anon15 = _IO_getc(*anon10);
				uint32_t anon17 = (anon9 << 24 >> 24) - 48;
				phi16 = anon17;
				if ((*(uint8_t*)(*anon14 + ((__zext uint64_t)anon15 << 56 >> 55 | 1)) & 8) != 0)
				{
					anon18 = anon15 >> 8;
					phi16 = (anon18 << 24 >> 24) + anon17 * 10 - 48;
				}
			}
		}
	}
	while (true)
	{
		uint8_t* anon19;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0)
		{
			phi4 = (__zext uint64_t)phi16;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon19 = (uint8_t*)0x401cf1;
			printf(anon19);
			exit(0);
		}
		uint64_t anon20 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon19);
			exit(0);
		}
		if ((uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			(__asm "movdqa xmm0, xmmword ptr [rip + 0x8cf]")();
			*(uint32_t*)0x6025b0 = 60;
			*(uint32_t*)0x6025b4 = 60;
			(__asm "movaps xmmword ptr [rip + 0x200f72], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x200f7b], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x200f84], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x200f8d], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x200f96], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x200f9f], xmm0")();
			(__asm "movaps xmmword ptr [rip + 0x200fa8], xmm0")();
			uint64_t anon21 = random();
			uint64_t anon22 = anon21 << 32;
			w(4199968, (uint64_t)&alloca1, anon21 + (((anon21 & 0xffffffff) * 2290649225 + anon22 >> 32 >> 4) - (anon22 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon7 = *anon7 - 100;
			phi4 = phi4;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10)
		{
			if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1)
			{
				phi_in5 = phi6 - 20;
				dispatch13 = 1;
				dispatch2 = 3;
				if (phi6 != 196)
				{
					break;
				}
			}
		}
		if (dispatch2 == 3)
		{
			return;
		}
		if (dispatch2 == 1)
		{
			*anon7 = *anon7 - 50;
			__indirect_jump(*(uint64_t*)0x602408);
		}
		if (dispatch2 == 0)
		{
			__indirect_jump(*(uint64_t*)0x6023f8);
		}
	}
}
struct nn(uint64_t arg0)
{
	int64_t anon8;
	uint64_t phi_in9;
	uint64_t phi_in10;
	do
	{
		int64_t anon3;
		int64_t anon7;
		do
		{
			int64_t anon5;
			do
			{
				do
				{
					int64_t anon6;
					do
					{
						do
						{
							int64_t anon2;
							do
							{
								do
								{
									do
									{
										uint64_t anon1 = random();
										uint32_t anon4 = (uint32_t)anon1;
										anon3 = (__sext int64_t)(anon4 + ((uint32_t)((anon1 & 0xffffffff) * 2290649225 + (anon1 << 32) >> 36) - (anon4 >> 31)) * 4294967266);
										anon2 = anon3 << 2;
									}
									while (*(uint32_t*)(anon2 + 6301504) != 0);
								}
								while (*(uint32_t*)(anon2 + 6300864) != 0);
							}
							while (*(uint32_t*)(anon2 + 6300992) < 3);
							anon6 = anon3 * 12;
							anon5 = (__sext int64_t)*(uint32_t*)(anon6 + 6301632) << 2;
						}
						while (*(uint32_t*)(anon5 + 6300864) != 0);
						anon7 = (__sext int64_t)*(uint32_t*)(anon6 + 6301636) << 2;
					}
					while (*(uint32_t*)(anon7 + 6300864) != 0);
					anon8 = (__sext int64_t)*(uint32_t*)(anon6 + 6301640) << 2;
				}
				while (*(uint32_t*)(anon8 + 6300864) != 0);
			}
			while (*(uint32_t*)(anon5 + 6301504) != 0);
		}
		while (*(uint32_t*)(anon7 + 6301504) != 0);
		phi_in9 = anon3;
		phi_in10 = anon3;
	}
	while (*(uint32_t*)(anon8 + 6301504) != 0);
	uint64_t phi11 = phi_in9;
	uint64_t phi12 = phi_in10;
	printf((uint8_t*)0x401d03);
	while (true)
	{
		uint32_t phi18;
		uint32_t anon19;
		uint32_t* anon20;
		uint32_t* anon21;
		uint32_t* anon25;
		uint64_t anon26;
		uint16_t** phi33;
		uint8_t anon34;
		uint16_t** anon38;
		uint32_t dispatch13 = 0;
		uint32_t* anon14 = (uint32_t*)0x602928;
		*anon14 = *anon14 + 1;
		puts((uint8_t*)0x401d17);
		uint32_t* anon15 = (uint32_t*)0x602490;
		*anon15 = *anon15 + 20;
		uint64_t anon17 = phi11 << 2;
		uint32_t* anon16 = (uint32_t*)(anon17 + 6301120);
		*anon16 = 0;
		dispatch13 = 0;
		if (dispatch13 == 0)
		{
			puts((uint8_t*)0x401d2a);
			phi18 = 4294967196;
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			dispatch13 = 1;
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				anon19 = (uint32_t)phi12;
				anon20 = (uint32_t*)0x60292c;
				if (anon19 == *anon20)
				{
					if (*anon14 != 0)
					{
						anon21 = (uint32_t*)0x60248c;
						*anon21 = *anon21 + 1;
						*anon14 = *anon14 - 1;
						*anon15 = *anon15 - 20;
						puts((uint8_t*)0x401d48);
					}
					dispatch13 = 2;
				}
			}
		}
		if (dispatch13 == 2)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon23 = random();
				uint32_t anon22 = (uint32_t)anon23;
				*anon20 = anon22 + (((uint32_t)((anon23 & 0xffffffff) * 2290649225 >> 32) + anon22 >> 4) - (anon22 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				if (anon19 == *anon20)
				{
					if (*anon21 == 3)
					{
						puts((uint8_t*)0x401df8);
						*anon14 = 3;
						*anon15 = *anon15 + 200;
						*anon20 = 4294967295;
					}
				}
				if (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3)
				{
					dispatch13 = 3;
				}
			}
		}
		if (dispatch13 == 3)
		{
			uint64_t phi27;
			if (*(uint32_t*)(anon17 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon26 = phi11 * 12;
			anon25 = (uint32_t*)(anon26 + 6301632);
			int64_t anon24 = (__sext int64_t)*anon25;
			if (*(uint32_t*)((anon24 << 2) + 6300864) == 0)
			{
				if (*(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
				{
					phi27 = anon24;
				}
			}
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi27 = (__sext int64_t)*anon25;
			}
			if (*(uint32_t*)((phi27 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi27 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon28 = (uint32_t*)(anon17 + 6301248);
			if (*anon28 == 0)
			{
				*anon15 = *anon15 + 10;
				*anon28 = 1;
			}
		}
		struct _IO_FILE** anon31 = (struct _IO_FILE**)0x602480;
		uint8_t anon30 = (uint8_t)_IO_getc(*anon31);
		bool anon29 = anon30 == 108;
		if (anon29)
		{
			uint16_t** anon32 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi33 = anon32;
			anon34 = *(uint8_t*)(*(uint64_t*)anon32 + 217) & 8;
			if (anon34 == 0)
			{
				break;
			}
		}
		bool anon35 = anon30 == 105;
		if (anon35)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon36 = anon30 == 115;
		if (anon36)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon37 = anon30 == 115 || anon30 == 108 || anon30 == 105 || anon30 == 113;
		if (!anon37 || anon30 == 105 || anon30 == 115)
		{
			anon38 = __ctype_b_loc();
			phi33 = anon38;
		}
		int64_t anon40 = (__sext int64_t)anon30;
		uint8_t anon39 = *(uint8_t*)(*(uint64_t*)anon38 + (anon40 >> 7 | 1)) & 8;
		if (anon39 != 0 && anon35 || anon39 != 0 && anon36 || anon39 != 0 && (!anon37) || anon34 != 0 && anon29)
		{
			uint32_t phi42;
			uint32_t anon41 = _IO_getc(*anon31);
			uint32_t anon43 = (uint32_t)(anon40 + 4294967248);
			phi42 = anon43;
			uint32_t anon44 = anon41 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi33 + ((__zext uint64_t)anon44 << 1 | 1)) & 8) != 0)
			{
				phi42 = anon43 * 10 + anon44 - 48;
			}
			if (*anon25 != phi42)
			{
				if (*(uint32_t*)(anon26 + 6301636) != phi42)
				{
					phi_in9 = phi11;
					phi_in10 = phi12;
				}
			}
			if (*anon25 == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) != phi42 && *(uint32_t*)(anon26 + 6301640) == phi42)
			{
				int64_t anon45 = (__sext int64_t)phi42;
				phi_in9 = anon45;
				phi_in10 = anon45;
			}
			break;
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0)
		{
			if (*(uint32_t*)(anon17 + 6300864) == 0)
			{
				uint32_t* anon46 = (uint32_t*)(anon17 + 6301504);
				if (*anon46 != 0)
				{
					if (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3)
					{
						*anon46 = 0;
						uint64_t anon48 = random();
						uint32_t anon47 = (uint32_t)anon48;
						*(uint32_t*)(((__sext int64_t)(anon47 + (((uint32_t)((anon48 & 0xffffffff) * 2290649225 >> 32) + anon47 >> 4) - (anon47 >> 31)) * 4294967266) << 2) + 6301504) = 1;
						uint64_t anon49 = random();
						printf((uint8_t*)0x401e28);
						*anon15 = *anon15 - 10;
						uint32_t anon51 = (uint32_t)anon49;
						int64_t anon50 = (__sext int64_t)(anon51 + ((uint32_t)((anon49 & 0xffffffff) * 2290649225 + (anon49 << 32) >> 36) - (anon51 >> 31)) * 4294967266);
						phi_in9 = anon50;
						phi_in10 = anon50;
						break;
					}
				}
			}
		}
		if (dispatch13 == 1)
		{
			puts((uint8_t*)0x401d36);
			phi18 = 4294967246;
		}
		if (dispatch13 == 1 || dispatch13 == 0)
		{
			*anon15 = *anon15 + phi18;
		}
		if (dispatch13 == 1 || dispatch13 == 0 || anon30 == 113)
		{
			printf((uint8_t*)0x401cf1);
			exit(0);
		}
	}
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4201539);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x6021e8)(arg1 & 0xffffffff, arg2, arg3);
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
