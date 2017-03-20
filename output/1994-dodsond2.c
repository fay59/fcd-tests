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
	struct nanon2 = n(4195954);
	uint64_t anon4 = anon1 & 0xfffffffffffffff0;
	uint64_t anon3 = anon4 - 8;
	*(uint64_t*)anon3 = anon2.rax;
	uint64_t anon5 = anon4 - 16;
	*(uint64_t*)anon5 = anon3;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x400660, (uint32_t)arg0, (uint8_t**)anon1, (void(*)())0x401c10, (void(*)())0x401c80, (void(*)())anon2.rdx, *(uint8_t**)anon5);
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
		uint32_t phi_in5;
		uint32_t phi6;
		uint32_t phi_in7;
		uint32_t* anon8;
		uint32_t phi9;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi_in5 = *phi1;
			phi6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi_in7 = *anon8;
			*phi1 = *phi1;
			phi9 = *anon4;
		}
		else 
		{
			phi_in5 = *anon4;
			phi6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			*anon8 = phi6;
			*phi1 = *anon8;
			phi_in7 = *anon8;
			*phi1 = phi_in5;
			phi9 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			*anon4 = phi9;
			phi10 = phi_in7;
			if (*anon4 > *phi1)
			{
				phi10 = *anon8;
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
	uint64_t phi11;
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
	uint64_t anon12 = (uint64_t)&alloca1;
	phi11 = anon12;
	while (true)
	{
		uint32_t phi27;
		uint64_t phi33;
		uint32_t phi38;
		uint32_t phi42;
		uint64_t phi48;
		uint32_t phi_in99;
		uint32_t phi_in306;
		uint32_t phi_in316;
		uint64_t phi318;
		uint64_t phi326;
		uint64_t phi330;
		uint32_t phi331;
		uint32_t phi332;
		uint64_t phi333;
		uint32_t phi334;
		uint32_t phi335;
		uint32_t phi13 = phi4;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		phi10 = phi11;
		if (phi9 < *anon14)
		{
			uint32_t phi325;
			uint64_t phi327;
			uint32_t phi328;
			uint32_t phi329;
			*(uint64_t*)(phi10 + 16) = anon15 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint64_t phi16 = (__zext uint64_t)phi13;
			uint32_t phi17 = phi5;
			uint32_t phi18 = phi13;
			uint32_t phi19 = phi5;
			*(uint64_t*)(phi10 + 56) = 0;
			*(uint32_t*)(phi10 + 68) = phi17;
			uint32_t phi20 = phi18;
			int64_t anon22 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 56) + *(uint64_t*)(phi10 + 16) + 6301632);
			uint32_t* anon21 = (uint32_t*)((anon22 << 2) + 6300992);
			if (phi19 < *anon21)
			{
				uint32_t phi312;
				uint32_t phi313;
				uint32_t phi314;
				uint32_t phi315;
				uint32_t phi317;
				uint32_t phi319;
				uint32_t phi320;
				uint32_t phi321;
				uint32_t phi322;
				uint64_t phi323;
				uint64_t phi324;
				*anon21 = *(uint32_t*)(phi10 + 4);
				*(uint64_t*)(phi10 + 32) = anon22 * 12;
				*(uint32_t*)(phi10 + 44) = (uint32_t)phi16 + 6;
				uint32_t phi23 = phi20;
				uint32_t phi24 = phi20;
				uint32_t phi25 = phi20;
				uint32_t phi26 = phi20;
				phi27 = phi20;
				uint32_t phi28 = phi20;
				uint32_t phi29 = phi20;
				uint32_t phi30 = phi20;
				uint32_t phi31 = phi20;
				uint64_t phi32 = (__zext uint64_t)phi20;
				phi33 = 0;
				uint64_t phi34 = phi10;
				uint32_t phi35 = phi31;
				*(uint64_t*)(phi34 + 72) = phi33;
				int64_t anon37 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi34 + 72) + *(uint64_t*)(phi34 + 32) + 6301632);
				uint32_t* anon36 = (uint32_t*)((anon37 << 2) + 6300992);
				if (*(uint32_t*)(phi34 + 4) < *anon36)
				{
					uint32_t phi303;
					uint64_t phi304;
					uint64_t phi305;
					uint32_t phi307;
					uint32_t phi308;
					uint64_t phi309;
					uint32_t phi310;
					uint32_t phi311;
					*anon36 = *(uint32_t*)(phi34 + 24);
					*(uint32_t*)(phi34 + 64) = (uint32_t)phi32 + 7;
					phi38 = phi23;
					uint32_t phi39 = phi24;
					uint32_t phi40 = phi25;
					uint32_t phi41 = phi26;
					phi42 = phi27;
					uint32_t phi43 = phi28;
					uint32_t phi44 = phi29;
					uint32_t phi45 = phi20;
					uint32_t phi46 = phi30;
					uint64_t phi47 = phi34;
					phi48 = 0;
					uint64_t phi49 = anon37 * 12;
					uint64_t phi50 = phi32;
					int64_t anon52 = (__sext int64_t)*(uint32_t*)(phi48 + phi49 + 6301632);
					uint32_t* anon51 = (uint32_t*)((anon52 << 2) + 6300992);
					if (*(uint32_t*)(phi47 + 24) < *anon51)
					{
						uint32_t phi56;
						uint64_t phi302;
						*anon51 = *(uint32_t*)(phi47 + 28);
						uint32_t phi_in53 = phi38;
						uint32_t phi54 = phi39;
						uint32_t phi55 = phi40;
						uint32_t anon57 = (uint32_t)phi50 + 8;
						phi56 = anon57;
						uint32_t phi58 = phi41;
						uint32_t phi59 = phi42;
						uint32_t phi_in60 = anon57;
						uint32_t phi61 = phi43;
						uint32_t phi62 = phi44;
						uint32_t phi63 = anon57;
						uint32_t phi64 = anon57;
						uint32_t phi65 = anon57;
						uint32_t phi66 = phi45;
						uint32_t phi67 = anon57;
						uint32_t phi_in68 = anon57;
						uint32_t phi69 = phi46;
						uint32_t phi70 = anon57;
						uint32_t phi_in71 = anon57;
						uint32_t phi72 = phi35;
						uint64_t phi73 = phi49;
						uint32_t phi74 = anon57;
						uint32_t phi75 = anon57;
						uint32_t phi76 = anon57;
						uint64_t phi_in77 = phi47;
						uint64_t phi_in78 = 0;
						uint64_t phi79 = anon52 * 12;
						uint64_t phi80 = phi50;
						do
						{
							uint32_t phi81 = phi_in53;
							uint32_t phi_in82 = phi54;
							uint32_t phi_in83 = phi55;
							uint32_t phi_in84 = phi58;
							uint32_t phi_in85 = phi59;
							uint32_t phi_in86 = phi62;
							uint32_t phi87 = phi63;
							uint32_t phi88 = phi64;
							uint32_t phi89 = phi66;
							uint32_t phi90 = phi70;
							uint32_t phi91 = phi72;
							uint64_t phi92 = phi73;
							uint32_t phi93 = phi74;
							uint32_t phi94 = phi75;
							uint32_t phi_in95 = phi76;
							uint64_t phi96 = phi79;
							uint32_t phi97 = phi_in82;
							uint32_t phi98 = phi_in83;
							phi58 = phi_in84;
							phi_in99 = phi_in85;
							uint32_t phi100 = phi_in60;
							phi62 = phi_in86;
							phi63 = phi87;
							uint32_t phi101 = phi88;
							uint32_t phi102 = phi65;
							uint32_t phi_in103 = phi_in68;
							uint32_t phi_in104 = phi69;
							uint32_t phi105 = phi91;
							uint64_t phi106 = phi92;
							phi74 = phi93;
							uint32_t phi107 = phi94;
							uint32_t phi108 = phi_in95;
							uint64_t phi109 = phi_in77;
							uint64_t phi110 = phi80;
							int64_t anon112 = (__sext int64_t)*(uint32_t*)(phi_in78 + phi96 + 6301632);
							uint32_t* anon111 = (uint32_t*)((anon112 << 2) + 6300992);
							if (*(uint32_t*)(phi_in77 + 28) < *anon111)
							{
								uint64_t phi128;
								*anon111 = *(uint32_t*)(phi_in77 + 40);
								*(uint32_t*)(phi_in77 + 120) = (uint32_t)phi80 + 9;
								uint64_t phi_in113 = 0;
								uint32_t phi114 = phi81;
								uint32_t phi_in115 = phi_in82;
								uint32_t phi116 = phi_in85;
								uint32_t phi117 = phi_in60;
								uint32_t phi_in118 = phi61;
								uint32_t phi119 = phi_in86;
								uint32_t phi120 = phi89;
								uint32_t phi121 = phi_in68;
								uint32_t phi_in122 = phi90;
								uint32_t phi123 = phi_in71;
								uint64_t phi_in124 = phi_in78;
								uint64_t phi125 = phi96;
								uint64_t phi126 = phi_in77;
								uint64_t phi_in127 = phi80 & 0xffffffff;
								do
								{
									phi128 = phi_in113;
									uint32_t phi_in129 = phi114;
									uint32_t phi_in130 = phi56;
									uint32_t phi_in131 = phi119;
									uint32_t phi_in132 = phi87;
									uint32_t phi133 = phi65;
									uint32_t phi_in134 = phi67;
									uint32_t phi_in135 = phi121;
									uint32_t phi136 = phi69;
									uint32_t phi137 = phi123;
									uint32_t phi138 = phi91;
									uint64_t phi139 = phi92;
									uint64_t phi_in140 = phi125;
									uint32_t phi141 = phi93;
									phi81 = phi_in129;
									phi_in82 = phi_in115;
									phi56 = phi_in130;
									uint32_t phi142 = phi116;
									uint32_t phi143 = phi_in118;
									uint32_t phi144 = phi_in131;
									phi87 = phi_in132;
									uint32_t phi145 = phi88;
									uint32_t phi146 = phi133;
									uint32_t phi147 = phi120;
									uint32_t phi148 = phi_in134;
									phi_in103 = phi_in135;
									uint32_t phi149 = phi_in122;
									uint32_t phi150 = phi137;
									uint64_t phi151 = phi_in124;
									uint32_t phi152 = phi138;
									phi92 = phi139;
									uint64_t phi153 = phi_in140;
									phi107 = phi94;
									uint32_t phi154 = phi_in95;
									uint64_t phi155 = phi126;
									uint64_t phi_in156 = phi_in127;
									int64_t anon158 = (__sext int64_t)*(uint32_t*)(phi128 + anon112 * 12 + 6301632);
									uint32_t* anon157 = (uint32_t*)((anon158 << 2) + 6300992);
									if (*(uint32_t*)(phi126 + 40) < *anon157)
									{
										uint64_t phi172;
										uint64_t phi177;
										*anon157 = *(uint32_t*)(phi126 + 44);
										uint64_t phi_in159 = 0;
										uint32_t phi160 = phi_in129;
										uint32_t phi161 = phi_in115;
										uint32_t phi162 = phi_in83;
										uint32_t phi_in163 = phi_in130;
										uint32_t phi164 = phi_in84;
										uint32_t phi165 = phi117;
										uint32_t phi166 = phi_in118;
										uint32_t phi167 = phi_in131;
										uint32_t phi168 = phi_in132;
										uint32_t phi_in169 = phi_in135;
										uint32_t phi170 = phi136;
										uint32_t phi_in171 = phi_in122;
										*(uint64_t*)(phi172 + 88) = phi_in124;
										uint64_t phi173 = phi_in140;
										uint32_t phi174 = phi141;
										uint32_t phi_in175 = phi_in95;
										uint64_t phi176 = phi_in127;
										do
										{
											phi177 = phi_in159;
											uint32_t phi178 = phi160;
											uint32_t phi_in179 = phi161;
											uint32_t phi180 = phi_in163;
											uint32_t phi181 = phi164;
											uint32_t phi182 = phi116;
											uint32_t phi_in183 = phi165;
											uint32_t phi184 = phi166;
											*(uint32_t*)(phi172 + 124) = phi168;
											uint32_t phi185 = phi88;
											int64_t anon189 = (__sext int64_t)*(uint32_t*)(phi177 + anon158 * 12 + 6301632);
											int64_t anon188 = anon189 * 12;
											int64_t anon187 = (__sext int64_t)*(uint32_t*)(anon188 + 6301636);
											uint32_t* anon186 = (uint32_t*)((anon187 << 2) + 6300992);
											*anon186 = phi133;
											uint32_t phi190 = phi120;
											uint32_t phi_in191 = phi_in134;
											uint32_t phi192 = phi_in169;
											uint32_t phi193 = phi170;
											uint32_t phi194 = phi137;
											uint32_t phi_in195 = phi138;
											*(uint64_t*)(phi172 + 104) = phi139;
											*(uint64_t*)(phi172 + 112) = phi173;
											uint32_t phi196 = phi174;
											uint32_t phi_in197 = phi94;
											phi172 = phi126;
											uint64_t phi198 = phi176;
											uint32_t phi199 = phi_in179;
											phi116 = phi182;
											phi117 = phi_in183;
											phi_in118 = phi184;
											uint32_t phi200 = phi167;
											phi_in132 = *(uint32_t*)(phi172 + 124);
											uint32_t phi_in201 = phi185;
											phi133 = *anon186;
											uint32_t phi202 = phi193;
											uint32_t phi203 = phi194;
											uint64_t phi204 = *(uint64_t*)(phi172 + 88);
											uint32_t phi_in205 = phi_in195;
											uint64_t phi_in206 = *(uint64_t*)(phi172 + 104);
											phi153 = *(uint64_t*)(phi172 + 112);
											phi174 = phi196;
											uint32_t phi207 = phi_in197;
											phi154 = phi_in175;
											uint64_t phi208 = phi172;
											phi176 = phi198;
											uint32_t* anon209 = (uint32_t*)((anon189 << 2) + 6300992);
											if (*(uint32_t*)(phi172 + 44) < *anon209)
											{
												*anon209 = *(uint32_t*)(phi172 + 64);
												uint32_t phi210 = phi178;
												uint32_t phi211 = phi_in179;
												uint32_t phi_in212 = phi162;
												uint32_t phi213 = phi180;
												uint64_t phi214 = phi172;
												uint32_t phi215 = phi181;
												uint32_t phi216 = phi182;
												uint32_t phi217 = phi_in183;
												uint32_t phi218 = phi184;
												phi_in132 = *(uint32_t*)(phi172 + 124);
												uint32_t phi219 = *anon186;
												uint32_t phi220 = phi190;
												phi_in134 = phi_in191;
												uint32_t phi221 = phi192;
												uint32_t phi222 = phi_in171;
												*(uint64_t*)(phi223 + 80) = *(uint64_t*)(phi172 + 88);
												uint32_t phi224 = phi_in195;
												uint64_t phi225 = *(uint64_t*)(phi172 + 104);
												uint64_t phi226 = *(uint64_t*)(phi172 + 112);
												uint32_t phi227 = phi_in175;
												uint64_t phi228 = phi198;
												if (*(uint32_t*)(phi172 + 64) < *anon186)
												{
													uint32_t phi_in229 = phi178;
													uint32_t phi230 = phi_in179;
													uint32_t phi231 = phi180;
													phi164 = phi181;
													uint32_t phi232 = phi_in183;
													uint64_t phi233 = anon187;
													uint32_t phi_in234 = phi167;
													uint32_t phi_in235 = phi190;
													uint32_t phi236 = phi193;
													uint64_t phi237 = *(uint64_t*)(phi172 + 88);
													*(uint64_t*)(phi172 + 104) = *(uint64_t*)(phi172 + 104);
													*(uint64_t*)(phi172 + 112) = *(uint64_t*)(phi172 + 112);
													if (phi185 < *anon186)
													{
														*(uint32_t*)(phi172 + 96) = phi167;
														*(uint64_t*)(phi172 + 80) = anon187;
														uint64_t anon238 = (__zext uint64_t)*anon186;
														w(4197873, anon12, (__sext int64_t)*anon186, anon238, anon238);
														phi_in229 = *(uint32_t*)(arg1 - 96);
														phi230 = *(uint32_t*)(arg1 - 96);
														phi162 = *(uint32_t*)(arg1 - 96);
														phi231 = *(uint32_t*)(arg1 - 68);
														phi164 = *(uint32_t*)(arg1 - 96);
														phi182 = *(uint32_t*)(arg1 - 96);
														phi172 = anon12;
														phi232 = *(uint32_t*)(arg1 - 68);
														phi184 = *(uint32_t*)(arg1 - 96);
														phi233 = *(uint64_t*)(arg1 - 112);
														phi_in234 = *(uint32_t*)(arg1 - 96);
														phi_in235 = *(uint32_t*)(arg1 - 96);
														phi236 = *(uint32_t*)(arg1 - 96);
														phi237 = *(uint64_t*)(arg1 - 104);
														phi_in195 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi172 + 104) = *(uint64_t*)(arg1 - 88);
														*(uint64_t*)(phi172 + 112) = *(uint64_t*)(arg1 - 80);
														phi198 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi239 = phi230;
													uint32_t phi_in240 = phi162;
													uint32_t phi241 = phi231;
													uint32_t phi_in242 = phi164;
													*(uint32_t*)(phi172 + 96) = phi182;
													*(uint32_t*)(phi172 + 124) = phi232;
													uint32_t phi_in243 = phi184;
													*(uint64_t*)(phi172 + 80) = phi233;
													uint32_t phi_in244 = phi236;
													uint64_t phi245 = phi237;
													uint64_t phi246 = *(uint64_t*)(phi172 + 104);
													uint64_t phi247 = *(uint64_t*)(phi172 + 112);
													uint64_t phi_in248 = phi198;
													uint32_t phi249 = phi_in229;
													uint32_t phi250 = phi_in240;
													*(uint32_t*)(phi172 + 88) = phi_in242;
													uint32_t phi251 = *(uint32_t*)(phi172 + 96);
													uint32_t phi252 = *(uint32_t*)(phi172 + 124);
													uint32_t phi253 = phi_in243;
													uint64_t phi254 = *(uint64_t*)(phi172 + 80);
													phi167 = phi_in234;
													uint32_t phi_in255 = phi_in235;
													uint32_t phi256 = phi_in244;
													uint32_t phi257 = phi_in195;
													uint64_t phi258 = phi_in248;
													int64_t anon259 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi172 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi172 + 124) < *(uint32_t*)((anon259 << 2) + 6300992))
													{
														*(uint64_t*)(phi172 + 112) = phi247;
														*(uint64_t*)(phi172 + 104) = phi246;
														*(uint64_t*)(phi172 + 88) = phi245;
														uint64_t anon260 = (__zext uint64_t)*(uint32_t*)(phi172 + 120);
														w(4197793, anon12, anon259, anon260, anon260);
														phi249 = *(uint32_t*)(arg1 - 96);
														phi239 = *(uint32_t*)(arg1 - 96);
														phi250 = *(uint32_t*)(arg1 - 96);
														phi241 = alloca1.field14;
														*(uint32_t*)(phi172 + 88) = *(uint32_t*)(arg1 - 96);
														phi172 = anon12;
														phi251 = *(uint32_t*)(arg1 - 96);
														phi252 = alloca1.field14;
														phi253 = *(uint32_t*)(arg1 - 96);
														phi254 = *(uint64_t*)(arg1 - 112);
														phi167 = *(uint32_t*)(arg1 - 96);
														phi_in255 = *(uint32_t*)(arg1 - 96);
														phi256 = *(uint32_t*)(arg1 - 96);
														phi245 = *(uint64_t*)(arg1 - 104);
														phi257 = *(uint32_t*)(arg1 - 96);
														phi246 = *(uint64_t*)(arg1 - 88);
														phi247 = *(uint64_t*)(arg1 - 80);
														phi258 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													phi210 = phi249;
													uint32_t phi_in261 = phi239;
													uint32_t phi_in262 = phi250;
													phi213 = phi241;
													phi216 = phi251;
													phi194 = phi252;
													uint32_t phi_in263 = phi253;
													phi193 = phi256;
													*(uint64_t*)(phi172 + 80) = phi245;
													uint32_t phi_in264 = phi257;
													*(uint64_t*)(phi172 + 96) = phi246;
													*(uint64_t*)(phi172 + 104) = phi247;
													uint64_t phi_in265 = phi258;
													phi211 = phi_in261;
													phi_in212 = phi_in262;
													phi214 = phi172;
													phi215 = *(uint32_t*)(phi172 + 88);
													phi217 = phi194;
													phi218 = phi_in263;
													phi_in132 = phi194;
													phi185 = phi194;
													phi219 = phi194;
													phi220 = phi_in255;
													phi_in134 = phi194;
													phi221 = phi194;
													phi222 = phi194;
													*(uint64_t*)(phi223 + 80) = *(uint64_t*)(phi172 + 80);
													phi224 = phi_in264;
													phi225 = *(uint64_t*)(phi172 + 96);
													phi226 = *(uint64_t*)(phi172 + 104);
													phi196 = phi194;
													phi_in197 = phi194;
													phi227 = phi194;
													phi228 = phi_in265;
													int64_t anon266 = (__sext int64_t)*(uint32_t*)(phi254 * 12 + 6301640);
													if (phi194 < *(uint32_t*)((anon266 << 2) + 6300992))
													{
														*(uint32_t*)(phi172 + 112) = phi194;
														uint64_t anon267 = (__zext uint64_t)*(uint32_t*)(phi172 + 120);
														w(4197395, anon12, anon266, anon267, anon267);
														phi210 = *(uint32_t*)(arg1 - 104);
														phi211 = *(uint32_t*)(arg1 - 104);
														phi_in212 = *(uint32_t*)(arg1 - 104);
														phi213 = *(uint32_t*)(arg1 - 80);
														phi214 = anon12;
														phi215 = *(uint32_t*)(arg1 - 104);
														phi216 = *(uint32_t*)(arg1 - 104);
														phi217 = *(uint32_t*)(arg1 - 80);
														phi218 = *(uint32_t*)(arg1 - 104);
														phi167 = *(uint32_t*)(arg1 - 104);
														phi_in132 = *(uint32_t*)(arg1 - 80);
														phi185 = *(uint32_t*)(arg1 - 80);
														phi219 = *(uint32_t*)(arg1 - 80);
														phi220 = *(uint32_t*)(arg1 - 104);
														phi_in134 = *(uint32_t*)(arg1 - 80);
														phi221 = *(uint32_t*)(arg1 - 80);
														phi193 = *(uint32_t*)(arg1 - 104);
														phi222 = *(uint32_t*)(arg1 - 80);
														phi194 = *(uint32_t*)(arg1 - 80);
														*(uint64_t*)(phi223 + 80) = *(uint64_t*)(arg1 - 112);
														phi224 = *(uint32_t*)(arg1 - 104);
														phi225 = *(uint64_t*)(arg1 - 96);
														phi226 = *(uint64_t*)(arg1 - 88);
														phi196 = *(uint32_t*)(arg1 - 80);
														phi_in197 = *(uint32_t*)(arg1 - 80);
														phi227 = *(uint32_t*)(arg1 - 80);
														phi228 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												phi178 = phi210;
												phi199 = phi211;
												*(uint32_t*)(phi223 + 112) = phi213;
												uint64_t phi223 = phi214;
												uint32_t phi_in268 = phi215;
												uint32_t phi_in269 = phi216;
												phi117 = phi217;
												uint32_t phi_in270 = phi218;
												uint32_t phi271 = phi167;
												uint32_t phi_in272 = phi185;
												uint32_t phi_in273 = phi219;
												phi190 = phi220;
												phi192 = phi221;
												phi202 = phi193;
												uint32_t phi_in274 = phi222;
												uint32_t phi_in275 = phi194;
												*(uint64_t*)(phi223 + 80) = *(uint64_t*)(phi223 + 80);
												uint32_t phi_in276 = phi224;
												*(uint64_t*)(phi223 + 96) = phi225;
												*(uint64_t*)(phi223 + 104) = phi226;
												uint32_t phi_in277 = phi196;
												uint32_t phi_in278 = phi227;
												uint64_t phi_in279 = phi228;
												phi162 = phi_in212;
												phi180 = *(uint32_t*)(phi223 + 112);
												phi181 = phi_in268;
												phi116 = phi_in269;
												phi_in118 = phi_in270;
												phi200 = phi271;
												phi_in201 = phi_in272;
												phi133 = phi_in273;
												phi_in191 = phi_in134;
												phi_in171 = phi_in274;
												phi203 = phi_in275;
												phi204 = *(uint64_t*)(phi223 + 80);
												phi_in205 = phi_in276;
												phi_in206 = *(uint64_t*)(phi223 + 96);
												phi153 = *(uint64_t*)(phi223 + 104);
												phi174 = phi_in277;
												phi207 = phi_in197;
												phi154 = phi_in278;
												phi208 = phi223;
												phi176 = phi_in279;
												int64_t anon281 = (__sext int64_t)*(uint32_t*)(anon188 + 6301640);
												uint32_t* anon280 = (uint32_t*)((anon281 << 2) + 6300992);
												if (*(uint32_t*)(phi223 + 64) < *anon280)
												{
													*anon280 = *(uint32_t*)(phi223 + 112);
													*(uint32_t*)(phi223 + 88) = phi178;
													uint32_t phi282 = phi199;
													uint32_t phi283 = phi_in212;
													uint32_t phi284 = *(uint32_t*)(phi223 + 112);
													uint32_t phi285 = phi_in268;
													uint32_t phi286 = phi_in269;
													uint32_t phi287 = phi_in270;
													uint32_t phi288 = phi190;
													phi_in205 = phi_in276;
													*(uint64_t*)(phi223 + 96) = *(uint64_t*)(phi223 + 96);
													*(uint64_t*)(phi223 + 104) = *(uint64_t*)(phi223 + 104);
													uint64_t phi289 = phi_in279;
													int64_t anon291 = anon281 * 12;
													int64_t anon290 = (__sext int64_t)*(uint32_t*)(anon291 + 6301636);
													if (*(uint32_t*)(phi223 + 112) < *(uint32_t*)((anon290 << 2) + 6300992))
													{
														*(uint32_t*)(phi223 + 88) = phi199;
														*(uint64_t*)(phi223 + 80) = *(uint64_t*)(phi223 + 80);
														uint64_t anon292 = (__zext uint64_t)*(uint32_t*)(phi223 + 120);
														w(4197948, anon12, anon290, anon292, anon292);
														*(uint32_t*)(phi223 + 88) = *(uint32_t*)(arg1 - 104);
														phi282 = *(uint32_t*)(arg1 - 104);
														phi283 = *(uint32_t*)(arg1 - 104);
														phi284 = *(uint32_t*)(arg1 - 80);
														phi285 = *(uint32_t*)(arg1 - 104);
														phi286 = *(uint32_t*)(arg1 - 104);
														phi287 = *(uint32_t*)(arg1 - 104);
														phi271 = *(uint32_t*)(arg1 - 104);
														phi288 = *(uint32_t*)(arg1 - 104);
														phi202 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi223 + 80) = *(uint64_t*)(arg1 - 112);
														phi_in205 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi223 + 96) = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi223 + 104) = *(uint64_t*)(arg1 - 88);
														phi223 = anon12;
														phi289 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													phi178 = *(uint32_t*)(phi223 + 88);
													uint32_t phi_in293 = phi282;
													uint32_t phi_in294 = phi283;
													*(uint32_t*)(phi223 + 112) = phi284;
													phi181 = phi285;
													uint32_t phi_in295 = phi286;
													uint32_t phi_in296 = phi287;
													uint32_t phi_in297 = phi271;
													uint32_t phi_in298 = phi288;
													uint64_t phi_in299 = phi289;
													phi199 = phi_in293;
													phi162 = phi_in294;
													phi180 = *(uint32_t*)(phi223 + 112);
													phi116 = phi_in295;
													phi117 = *(uint32_t*)(phi223 + 112);
													phi_in118 = phi_in296;
													phi200 = phi_in297;
													phi_in132 = *(uint32_t*)(phi223 + 112);
													phi_in201 = *(uint32_t*)(phi223 + 112);
													phi133 = *(uint32_t*)(phi223 + 112);
													phi190 = phi_in298;
													phi_in191 = *(uint32_t*)(phi223 + 112);
													phi192 = *(uint32_t*)(phi223 + 112);
													phi_in171 = *(uint32_t*)(phi223 + 112);
													phi203 = *(uint32_t*)(phi223 + 112);
													phi204 = *(uint64_t*)(phi223 + 80);
													phi_in206 = *(uint64_t*)(phi223 + 96);
													phi153 = *(uint64_t*)(phi223 + 104);
													phi174 = *(uint32_t*)(phi223 + 112);
													phi207 = *(uint32_t*)(phi223 + 112);
													phi154 = *(uint32_t*)(phi223 + 112);
													phi208 = phi223;
													phi176 = phi_in299;
													int64_t anon300 = (__sext int64_t)*(uint32_t*)(anon291 + 6301640);
													if (*(uint32_t*)(phi223 + 112) < *(uint32_t*)((anon300 << 2) + 6300992))
													{
														*(uint32_t*)(phi223 + 88) = phi178;
														uint64_t anon301 = (__zext uint64_t)*(uint32_t*)(phi223 + 120);
														w(4197231, anon12, anon300, anon301, anon301);
														phi178 = alloca1.field8;
														phi199 = alloca1.field8;
														phi162 = alloca1.field8;
														phi180 = alloca1.field12;
														phi181 = alloca1.field8;
														phi116 = alloca1.field8;
														phi117 = alloca1.field12;
														phi_in118 = alloca1.field8;
														phi200 = alloca1.field8;
														phi_in132 = alloca1.field12;
														phi_in201 = alloca1.field12;
														phi133 = alloca1.field12;
														phi190 = alloca1.field8;
														phi_in191 = alloca1.field12;
														phi192 = alloca1.field12;
														phi202 = alloca1.field8;
														phi_in171 = alloca1.field12;
														phi203 = alloca1.field12;
														phi204 = alloca1.field7;
														phi_in205 = alloca1.field8;
														phi_in206 = alloca1.field10;
														phi153 = alloca1.field11;
														phi174 = alloca1.field12;
														phi207 = alloca1.field12;
														phi154 = alloca1.field12;
														phi208 = anon12;
														phi176 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi144 = phi200;
											phi147 = phi190;
											phi136 = phi202;
											phi150 = phi203;
											phi107 = phi207;
											phi81 = phi178;
											phi_in82 = phi199;
											phi_in83 = phi162;
											phi56 = phi180;
											phi_in84 = phi181;
											phi142 = phi116;
											phi143 = phi_in118;
											phi87 = phi_in132;
											phi145 = phi_in201;
											phi146 = phi133;
											phi148 = phi_in191;
											phi_in103 = phi192;
											phi149 = phi_in171;
											phi151 = phi204;
											phi152 = phi_in205;
											phi92 = phi_in206;
											phi141 = phi174;
											phi155 = phi208;
											phi_in156 = phi176;
											phi_in159 = phi177 + 4;
											phi160 = phi178;
											phi161 = phi199;
											phi_in163 = phi180;
											phi164 = phi181;
											phi165 = phi117;
											phi166 = phi_in118;
											phi167 = phi144;
											phi168 = phi_in132;
											phi88 = phi_in201;
											phi120 = phi147;
											phi_in134 = phi_in191;
											phi_in169 = phi192;
											phi170 = phi136;
											phi137 = phi150;
											*(uint64_t*)(phi172 + 88) = phi204;
											phi138 = phi_in205;
											phi139 = phi_in206;
											phi173 = phi153;
											phi94 = phi107;
											phi_in175 = phi154;
											phi126 = phi208;
										}
										while (phi177 != 8);
									}
									phi61 = phi143;
									phi62 = phi144;
									phi101 = phi145;
									phi102 = phi146;
									phi89 = phi147;
									phi90 = phi149;
									phi_in78 = phi151;
									phi105 = phi152;
									phi96 = phi153;
									phi108 = phi154;
									phi97 = phi_in82;
									phi98 = phi_in83;
									phi58 = phi_in84;
									phi_in99 = phi142;
									phi100 = phi117;
									phi63 = phi87;
									phi67 = phi148;
									phi_in104 = phi136;
									phi_in71 = phi150;
									phi106 = phi92;
									phi74 = phi141;
									phi109 = phi155;
									phi110 = phi_in156;
									phi_in113 = phi128 + 4;
									phi114 = phi81;
									phi_in115 = phi_in82;
									phi116 = phi142;
									phi117 = phi117;
									phi_in118 = phi61;
									phi119 = phi62;
									phi88 = phi101;
									phi65 = phi102;
									phi120 = phi89;
									phi67 = phi148;
									phi121 = phi_in103;
									phi69 = phi136;
									phi_in122 = phi90;
									phi123 = phi150;
									phi_in124 = phi_in78;
									phi91 = phi105;
									phi125 = phi96;
									phi93 = phi141;
									phi94 = phi107;
									phi_in95 = phi108;
									phi126 = phi155;
									phi_in127 = phi_in156;
								}
								while (phi128 != 8);
							}
							phi302 = phi_in78;
							phi303 = phi105;
							phi304 = phi109;
							phi305 = phi110;
							phi_in306 = phi81;
							phi307 = phi97;
							phi308 = phi98;
							phi41 = phi58;
							phi43 = phi61;
							phi309 = phi106;
							phi310 = phi62;
							phi45 = phi89;
							phi311 = phi_in104;
							if (phi302 != 8)
							{
								phi_in53 = phi81;
								phi54 = phi97;
								phi55 = phi98;
								phi59 = phi_in99;
								phi_in60 = phi100;
								phi61 = phi61;
								phi64 = phi101;
								phi65 = phi102;
								phi66 = phi89;
								phi_in68 = phi_in103;
								phi69 = phi_in104;
								phi70 = phi90;
								phi72 = phi303;
								phi73 = phi106;
								phi75 = phi107;
								phi76 = phi108;
								phi_in77 = phi304;
								phi_in78 = phi302 + 4;
								phi79 = phi96;
								phi80 = phi305;
							}
						}
						while (phi302 != 8);
					}
					else 
					{
						phi_in306 = phi38;
						phi307 = phi39;
						phi308 = phi40;
						phi41 = phi41;
						phi_in99 = phi42;
						phi43 = phi43;
						phi309 = phi49;
						phi310 = phi44;
						phi45 = phi45;
						phi311 = phi46;
						phi303 = phi35;
						phi304 = phi47;
						phi305 = phi50 & 0xffffffff;
					}
					phi39 = phi307;
					phi40 = phi308;
					phi49 = phi309;
					phi44 = phi310;
					phi46 = phi311;
					phi35 = phi303;
					phi47 = phi304;
					phi50 = phi305;
					phi312 = phi_in306;
					phi313 = phi39;
					phi314 = phi40;
					phi315 = phi41;
					phi_in316 = phi_in99;
					phi317 = phi43;
					phi318 = *(uint64_t*)(phi47 + 72);
					phi319 = phi44;
					phi320 = phi45;
					phi321 = phi46;
					phi322 = phi35;
					phi323 = phi50;
					phi324 = phi47;
				}
				else 
				{
					phi312 = phi23;
					phi313 = phi24;
					phi314 = phi25;
					phi315 = phi26;
					phi_in316 = phi27;
					phi317 = phi28;
					phi318 = *(uint64_t*)(phi34 + 72);
					phi319 = phi29;
					phi320 = phi20;
					phi321 = phi30;
					phi322 = phi35;
					phi323 = phi32 & 0xffffffff;
					phi324 = phi34;
				}
				phi23 = phi312;
				phi24 = phi313;
				phi25 = phi314;
				phi26 = phi315;
				phi28 = phi317;
				phi29 = phi319;
				phi20 = phi320;
				phi30 = phi321;
				phi31 = phi322;
				phi32 = phi323;
				phi34 = phi324;
				phi5 = *(uint32_t*)(phi34 + 68);
				phi325 = phi28;
				phi326 = *(uint64_t*)(phi34 + 56);
				phi327 = (__zext uint64_t)phi28;
				phi328 = *(uint32_t*)(phi34 + 68);
				phi18 = phi28;
				phi329 = *(uint32_t*)(phi34 + 68);
				phi10 = phi34;
			}
			else 
			{
				phi5 = phi5;
				phi325 = phi13;
				phi326 = *(uint64_t*)(phi10 + 56);
				phi327 = phi16 & 0xffffffff;
				phi328 = *(uint32_t*)(phi10 + 68);
				phi18 = phi20;
				phi329 = phi19;
				phi10 = phi10;
			}
			phi13 = phi325;
			phi16 = phi327;
			phi17 = phi328;
			phi19 = phi329;
			phi330 = *(uint64_t*)(phi10 + 48);
			phi331 = phi13;
			phi332 = phi5;
			phi333 = (__zext uint64_t)phi13;
			phi334 = phi5;
			phi335 = phi13;
			phi11 = phi10;
		}
		else 
		{
			phi330 = *(uint64_t*)(phi10 + 48);
			phi331 = phi13;
			phi332 = phi5;
			phi333 = phi7 & 0xffffffff;
			phi334 = *anon14;
			phi335 = phi9;
			phi11 = phi10;
		}
		if (phi330 != 8)
		{
			phi4 = phi331;
			phi5 = phi332;
			phi7 = phi333;
			phi8 = phi334;
			phi9 = phi335;
			*(uint64_t*)(phi10 + 48) = phi330 + 4;
		}
		*(uint64_t*)(phi10 + 56) = phi326 + 4;
		phi27 = phi_in316;
		phi33 = phi318 + 4;
		phi38 = phi_in306;
		phi42 = phi_in99;
		phi48 = phi48 + 4;
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
		uint64_t phi24;
		uint32_t anon25;
		uint32_t anon41;
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
			uint32_t phi14;
			uint32_t phi_in15;
			uint32_t phi16;
			uint32_t* anon17;
			uint32_t phi_in18;
			uint32_t phi20;
			uint32_t phi21;
			uint32_t phi22;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi14 = *phi10;
				phi_in15 = *phi10;
				phi16 = *anon13;
				anon17 = (uint32_t*)(phi12 - 4);
				*anon17 = *anon13;
				*phi10 = *anon17;
			}
			else 
			{
				phi_in18 = *anon17;
				if (*phi10 < *anon17)
				{
					phi14 = *anon13 & 0xf;
					phi_in15 = *anon13;
					phi16 = *phi10 & 0xf;
					*anon17 = *phi10;
					*phi10 = *anon17 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17)
			{
				*phi10 = phi14;
				uint32_t phi_in19 = phi16;
				phi20 = phi_in19;
				phi21 = *anon17;
				phi22 = phi_in15;
			}
			if (*anon13 >= *anon17 && *anon13 < *phi10)
			{
				phi20 = *anon17 & 0xf;
				*phi10 = *phi10;
				phi21 = *anon13;
				phi22 = *phi10;
			}
			if (*anon13 >= *phi10 && *phi10 < *anon17 || *anon13 < *phi10 && *anon13 < *anon17 || *anon13 >= *anon17 && *anon13 < *phi10)
			{
				phi_in18 = phi20;
				*anon13 = phi21;
				if (phi22 - *anon13 <= 4294967295)
				{
					phi_in18 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi23 = phi_in18;
			phi24 = 6301636;
			anon25 = phi23 + 1 & 0xff;
			if (anon25 != 0)
			{
				phi24 = 6301636;
				uint64_t anon26 = phi12 + 12;
				phi10 = (uint32_t*)(anon26 & 0xc);
				phi_in11 = anon26;
				if (phi12 == 6301984)
				{
					break;
				}
			}
		}
		while (anon25 != 0);
		do
		{
			uint32_t phi29;
			uint32_t phi_in30;
			uint32_t phi_in31;
			uint32_t phi32;
			uint32_t phi33;
			uint32_t* anon34;
			uint32_t phi_in35;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t phi39;
			uint32_t* anon27 = (uint32_t*)(phi24 + 4);
			uint32_t* anon28 = (uint32_t*)phi24;
			if (*anon27 < *anon28)
			{
				*anon28 = *anon27;
				*anon27 = *anon28;
				phi29 = *anon28;
				phi_in30 = *anon28;
				phi_in31 = *anon27;
				phi32 = *anon27;
				anon34 = (uint32_t*)(phi24 - 4);
				phi33 = *anon34;
			}
			else 
			{
				phi_in35 = *anon34;
				if (*anon28 < *anon34)
				{
					phi29 = *anon27 & 0xf;
					phi_in30 = *anon27;
					phi_in31 = *anon28 & 0xf;
					phi32 = *anon28;
					phi33 = *anon34 & 0xf;
				}
			}
			if (*anon27 >= *anon28 && *anon28 < *anon34 || *anon27 < *anon28 && *anon27 < *anon34)
			{
				uint32_t phi_in36 = phi29;
				*anon34 = phi32;
				*anon28 = phi33;
				phi_in35 = phi_in31;
				phi37 = phi_in36;
				phi38 = *anon34;
				phi39 = phi_in30;
			}
			if (*anon27 >= *anon34 && *anon27 < *anon28)
			{
				phi_in35 = *anon34 & 0xf;
				phi37 = *anon28;
				phi38 = *anon27;
				phi39 = *anon28;
			}
			if (*anon27 >= *anon28 && *anon28 < *anon34 || *anon27 < *anon28 && *anon27 < *anon34 || *anon27 >= *anon34 && *anon27 < *anon28)
			{
				*anon28 = phi37;
				*anon27 = phi38;
				if (phi39 - *anon27 <= 4294967295)
				{
					phi_in35 = *(uint32_t*)((phi24 & 0xf) - 4);
				}
			}
			uint32_t phi40 = phi_in35;
			anon41 = phi40 + 1 & 0xff;
			if (anon41 != 0)
			{
				phi24 = phi24 + 12;
			}
		}
		while (anon41 != 0);
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
		struct _IO_FILE** anon9 = (struct _IO_FILE**)0x602480;
		uint32_t anon8 = _IO_getc(*anon9);
		uint8_t anon10 = (uint8_t)anon8;
		if (anon10 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon11 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon10 != 10 || anon11 != 0 && anon10 == 10)
		{
			anon12 = __ctype_b_loc();
			dispatch13 = 0;
		}
		uint64_t* anon14 = (uint64_t*)anon12;
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon10 << 1 | 1)) & 8) != 0 && (anon10 != 10 || anon11 != 0 && anon10 == 10))
		{
			uint32_t anon15 = _IO_getc(*anon9);
			uint32_t anon17 = (anon8 << 24 >> 24) - 48;
			phi16 = anon17;
			if ((*(uint8_t*)(*anon14 + ((__zext uint64_t)anon15 << 56 >> 55 | 1)) & 8) != 0)
			{
				anon18 = anon15 >> 8;
				phi16 = (anon18 << 24 >> 24) + anon17 * 10 - 48;
			}
		}
	}
	while (true)
	{
		uint64_t phi19;
		uint8_t* anon20;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0)
		{
			phi19 = (__zext uint64_t)phi16;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon7 = *anon3 * 100 + *anon7 + 500;
			anon20 = (uint8_t*)0x401cf1;
			printf(anon20);
			exit(0);
		}
		uint64_t anon21 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon7 = *anon7 - 100;
			printf(anon20);
			exit(0);
		}
		if ((uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
			uint64_t anon22 = random();
			uint64_t anon23 = anon22 << 32;
			w(4199968, (uint64_t)&alloca1, anon22 + (((anon22 & 0xffffffff) * 2290649225 + anon23 >> 32 >> 4) - (anon23 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon7 = *anon7 - 100;
			phi19 = phi4;
		}
		if (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi4 = phi19;
			dispatch2 = 1;
		}
		if ((uint8_t)anon18 != 10 && (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon21 + ((uint32_t)((anon21 & 0xffffffff) / 3) - (uint32_t)(anon21 << 32 >> 32 >> 31)) * 4294967293 != 1))
		{
			phi_in5 = phi6 - 20;
			dispatch13 = 1;
			dispatch2 = 3;
			if (phi6 != 196)
			{
				break;
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
		uint16_t** phi34;
		uint8_t anon35;
		uint16_t** anon39;
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
			anon19 = (uint32_t)phi12;
			anon20 = (uint32_t*)0x60292c;
			if (*(uint32_t*)(anon17 + 6300864) == 0 && anon19 == *anon20)
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
		if (dispatch13 == 2)
		{
			puts((uint8_t*)0x401d62);
			while (true)
			{
				uint64_t anon22 = random();
				uint32_t anon23 = (uint32_t)anon22;
				*anon20 = anon23 + (((uint32_t)((anon22 & 0xffffffff) * 2290649225 >> 32) + anon23 >> 4) - (anon23 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0)
		{
			if (anon19 == *anon20 && *anon21 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon14 = 3;
				*anon15 = *anon15 + 200;
				*anon20 = 4294967295;
			}
			if (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3)
			{
				dispatch13 = 3;
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
			if (*(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				phi27 = anon24;
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
		struct _IO_FILE** anon30 = (struct _IO_FILE**)0x602480;
		uint32_t anon29 = _IO_getc(*anon30);
		uint8_t anon32 = (uint8_t)anon29;
		bool anon31 = anon32 == 108;
		if (anon31)
		{
			uint16_t** anon33 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi34 = anon33;
			anon35 = *(uint8_t*)(*(uint64_t*)anon33 + 217) & 8;
			if (anon35 == 0)
			{
				break;
			}
		}
		bool anon36 = anon32 == 105;
		if (anon36)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon37 = anon32 == 115;
		if (anon37)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon38 = anon32 == 115 || anon32 == 108 || anon32 == 105 || anon32 == 113;
		if (!anon38 || anon32 == 105 || anon32 == 115)
		{
			anon39 = __ctype_b_loc();
			phi34 = anon39;
		}
		int64_t anon41 = (__sext int64_t)anon32;
		uint8_t anon40 = *(uint8_t*)(*(uint64_t*)anon39 + (anon41 >> 7 | 1)) & 8;
		if (anon40 != 0 && anon36 || anon40 != 0 && anon37 || anon40 != 0 && (!anon38) || anon35 != 0 && anon31)
		{
			uint32_t phi43;
			uint32_t anon42 = _IO_getc(*anon30);
			uint32_t anon44 = (uint32_t)(anon41 + 4294967248);
			phi43 = anon44;
			uint32_t anon45 = anon42 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi34 + ((__zext uint64_t)anon45 << 1 | 1)) & 8) != 0)
			{
				phi43 = anon44 * 10 + anon45 - 48;
			}
			if (*anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) != phi43)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon25 == phi43 || *anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) == phi43 || *anon25 != phi43 && *(uint32_t*)(anon26 + 6301636) != phi43 && *(uint32_t*)(anon26 + 6301640) == phi43)
			{
				int64_t anon46 = (__sext int64_t)phi43;
				phi_in9 = anon46;
				phi_in10 = anon46;
			}
			break;
		}
		uint32_t* anon47 = (uint32_t*)(anon17 + 6301504);
		if (*anon47 != 0 && *(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0 && (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3))
		{
			*anon47 = 0;
			uint64_t anon48 = random();
			uint32_t anon49 = (uint32_t)anon48;
			*(uint32_t*)(((__sext int64_t)(anon49 + (((uint32_t)((anon48 & 0xffffffff) * 2290649225 >> 32) + anon49 >> 4) - (anon49 >> 31)) * 4294967266) << 2) + 6301504) = 1;
			uint64_t anon50 = random();
			printf((uint8_t*)0x401e28);
			*anon15 = *anon15 - 10;
			uint32_t anon52 = (uint32_t)anon50;
			int64_t anon51 = (__sext int64_t)(anon52 + ((uint32_t)((anon50 & 0xffffffff) * 2290649225 + (anon50 << 32) >> 36) - (anon52 >> 31)) * 4294967266);
			phi_in9 = anon51;
			phi_in10 = anon51;
			break;
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
		if (dispatch13 == 1 || dispatch13 == 0 || anon32 == 113)
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
