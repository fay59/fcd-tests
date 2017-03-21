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
		uint32_t phi6;
		uint32_t phi7;
		uint32_t* anon8;
		uint32_t phi9;
		uint64_t phi3 = phi_in2;
		uint32_t* anon4 = (uint32_t*)(phi3 + 4);
		if (*anon4 < *phi1)
		{
			*anon4 = *phi1;
			*phi1 = *anon4;
			phi5 = *phi1;
			phi6 = *anon4;
			anon8 = (uint32_t*)(phi3 - 4);
			phi7 = *anon8;
			phi9 = *phi1;
			*anon4 = *anon4;
		}
		else 
		{
			phi5 = *anon4;
			phi6 = *phi1;
			phi10 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8)
		{
			uint32_t phi_in11 = phi5;
			phi7 = phi6;
			*phi1 = *anon8;
			*anon8 = phi7;
			phi9 = phi_in11;
			*anon4 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			phi10 = phi7;
			*phi1 = phi9;
			if (*anon4 > *phi1)
			{
				phi10 = *anon8;
			}
		}
		if (phi10 != 255)
		{
			uint64_t anon12 = phi3 + 12;
			phi1 = (uint32_t*)anon12;
			phi_in2 = anon12;
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
		uint32_t phi16;
		uint64_t phi20;
		uint32_t phi26;
		uint32_t phi33;
		uint64_t phi35;
		uint32_t phi39;
		uint64_t phi50;
		uint32_t phi_in325;
		uint32_t phi_in328;
		uint64_t phi333;
		uint32_t phi_in337;
		uint32_t phi_in340;
		uint64_t phi341;
		uint64_t phi344;
		uint32_t phi345;
		uint32_t phi346;
		uint64_t phi347;
		uint32_t phi348;
		uint32_t phi_in349;
		uint64_t phi350;
		uint32_t phi12 = phi4;
		uint32_t phi13 = phi5;
		int64_t anon15 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon14 = (uint32_t*)((anon15 << 2) + 6300992);
		*anon14 = phi8;
		if (phi9 < *anon14)
		{
			uint32_t phi342;
			uint64_t phi343;
			*(uint64_t*)(phi10 + 16) = anon15 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			phi16 = phi13;
			uint64_t phi17 = (__zext uint64_t)phi12;
			uint32_t phi18 = phi12;
			uint32_t phi19 = phi13;
			phi20 = 0;
			uint64_t phi21 = phi10;
			*(uint32_t*)(phi21 + 68) = phi13;
			uint32_t phi22 = phi18;
			*(uint64_t*)(phi21 + 56) = phi20;
			int64_t anon24 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi21 + 56) + *(uint64_t*)(phi21 + 16) + 6301632);
			uint32_t* anon23 = (uint32_t*)((anon24 << 2) + 6300992);
			if (phi19 < *anon23)
			{
				uint32_t phi329;
				uint32_t phi330;
				uint32_t phi331;
				uint32_t phi332;
				uint32_t phi334;
				uint32_t phi335;
				uint32_t phi336;
				uint64_t phi338;
				uint64_t phi339;
				*anon23 = *(uint32_t*)(phi21 + 4);
				*(uint64_t*)(phi21 + 32) = anon24 * 12;
				*(uint32_t*)(phi21 + 44) = (uint32_t)phi17 + 6;
				uint32_t phi25 = phi22;
				phi26 = phi22;
				uint32_t phi27 = phi22;
				uint32_t phi28 = phi22;
				uint32_t phi29 = phi22;
				uint32_t phi30 = phi22;
				uint32_t phi31 = phi22;
				uint32_t phi32 = phi22;
				phi33 = phi22;
				uint64_t phi34 = (__zext uint64_t)phi22;
				phi35 = 0;
				uint64_t phi36 = phi21;
				uint32_t phi37 = phi22;
				uint32_t phi38 = phi31;
				phi39 = phi32;
				*(uint64_t*)(phi40 + 72) = phi35;
				uint64_t phi40 = phi36;
				int64_t anon42 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi40 + 72) + *(uint64_t*)(phi40 + 32) + 6301632);
				uint32_t* anon41 = (uint32_t*)((anon42 << 2) + 6300992);
				if (*(uint32_t*)(phi40 + 4) < *anon41)
				{
					uint32_t phi314;
					uint32_t phi315;
					uint32_t phi317;
					uint64_t phi318;
					uint32_t phi319;
					uint32_t phi320;
					uint32_t phi321;
					uint32_t phi322;
					uint64_t phi323;
					uint32_t phi324;
					uint32_t phi326;
					uint64_t phi327;
					*anon41 = *(uint32_t*)(phi40 + 24);
					*(uint32_t*)(phi40 + 64) = (uint32_t)phi34 + 7;
					uint32_t phi43 = phi25;
					uint32_t phi44 = phi26;
					uint32_t phi45 = phi27;
					uint32_t phi46 = phi28;
					uint32_t phi47 = phi29;
					uint32_t phi48 = phi30;
					uint32_t phi49 = phi33;
					phi50 = 0;
					uint64_t phi51 = anon42 * 12;
					int64_t anon53 = (__sext int64_t)*(uint32_t*)(phi50 + phi51 + 6301632);
					uint32_t* anon52 = (uint32_t*)((anon53 << 2) + 6300992);
					if (*(uint32_t*)(phi40 + 24) < *anon52)
					{
						uint32_t phi57;
						uint64_t phi316;
						*anon52 = *(uint32_t*)(phi40 + 28);
						uint32_t phi54 = phi43;
						uint32_t phi_in55 = phi44;
						uint32_t phi56 = phi45;
						uint32_t anon58 = (uint32_t)phi34 + 8;
						phi57 = anon58;
						uint32_t phi_in59 = phi46;
						uint32_t phi60 = phi47;
						uint32_t phi61 = anon58;
						uint32_t phi62 = phi48;
						uint32_t phi63 = phi37;
						uint32_t phi64 = anon58;
						uint32_t phi_in65 = anon58;
						uint32_t phi66 = anon58;
						uint32_t phi_in67 = phi38;
						uint32_t phi_in68 = anon58;
						uint32_t phi_in69 = anon58;
						uint32_t phi_in70 = phi39;
						uint32_t phi71 = anon58;
						uint32_t phi72 = anon58;
						uint32_t phi73 = phi49;
						uint64_t phi74 = phi51;
						uint32_t phi75 = anon58;
						uint32_t phi76 = anon58;
						uint32_t phi77 = anon58;
						uint64_t phi78 = phi40;
						uint64_t phi79 = 0;
						uint64_t phi80 = anon53 * 12;
						uint64_t phi81 = phi34;
						do
						{
							uint32_t phi_in82 = phi54;
							uint32_t phi83 = phi_in55;
							uint32_t phi84 = phi56;
							uint32_t phi85 = phi57;
							uint32_t phi86 = phi_in59;
							uint32_t phi_in87 = phi60;
							uint32_t phi_in88 = phi61;
							uint32_t phi89 = phi62;
							uint32_t phi90 = phi64;
							uint32_t phi_in91 = phi66;
							uint32_t phi92 = phi71;
							uint32_t phi93 = phi73;
							uint64_t phi94 = phi74;
							uint32_t phi_in95 = phi77;
							uint64_t phi96 = phi78;
							uint32_t phi97 = phi_in82;
							uint32_t phi_in98 = phi85;
							uint32_t phi99 = phi_in87;
							uint32_t phi100 = phi89;
							uint64_t phi101 = phi80;
							uint64_t phi_in102 = phi79;
							uint32_t phi103 = phi63;
							uint32_t phi104 = phi90;
							uint32_t phi105 = phi_in65;
							phi66 = phi_in91;
							uint32_t phi_in106 = phi_in67;
							uint32_t phi107 = phi_in68;
							uint32_t phi108 = phi_in69;
							uint32_t phi_in109 = phi_in70;
							uint32_t phi110 = phi92;
							phi73 = phi93;
							uint32_t phi111 = phi75;
							uint32_t phi_in112 = phi76;
							uint64_t phi113 = phi96;
							int64_t anon115 = (__sext int64_t)*(uint32_t*)(phi79 + phi80 + 6301632);
							uint32_t* anon114 = (uint32_t*)((anon115 << 2) + 6300992);
							if (*(uint32_t*)(phi96 + 28) < *anon114)
							{
								uint64_t phi134;
								*anon114 = *(uint32_t*)(phi96 + 40);
								*(uint32_t*)(phi96 + 120) = (uint32_t)phi81 + 9;
								uint64_t phi_in116 = 0;
								uint32_t phi117 = phi_in82;
								uint32_t phi118 = phi83;
								uint32_t phi_in119 = phi84;
								uint32_t phi120 = phi86;
								uint32_t phi121 = phi_in87;
								uint32_t phi122 = phi_in88;
								uint32_t phi_in123 = phi_in65;
								uint32_t phi124 = phi_in91;
								uint32_t phi125 = phi_in67;
								uint32_t phi126 = phi_in68;
								uint32_t phi_in127 = phi_in69;
								uint32_t phi128 = phi_in70;
								uint64_t phi_in129 = phi79;
								uint64_t phi130 = phi94;
								uint64_t phi131 = phi80;
								uint32_t phi132 = phi_in95;
								uint64_t phi133 = phi81 & 0xffffffff;
								do
								{
									phi134 = phi_in116;
									uint32_t phi_in135 = phi118;
									uint32_t phi136 = phi85;
									uint32_t phi_in137 = phi120;
									uint32_t phi138 = phi122;
									uint32_t phi139 = phi89;
									uint32_t phi_in140 = phi63;
									uint32_t phi141 = phi90;
									uint32_t phi142 = phi125;
									uint32_t phi_in143 = phi126;
									uint32_t phi144 = phi128;
									uint32_t phi_in145 = phi92;
									uint32_t phi_in146 = phi72;
									uint32_t phi147 = phi93;
									uint64_t phi_in148 = phi130;
									uint32_t phi_in149 = phi75;
									uint32_t phi_in150 = phi76;
									uint32_t phi_in151 = phi132;
									uint64_t phi152 = phi96;
									uint32_t phi153 = phi117;
									uint32_t phi154 = phi_in135;
									uint32_t phi155 = phi_in119;
									phi_in98 = phi136;
									uint32_t phi156 = phi_in137;
									uint32_t phi157 = phi138;
									uint32_t phi158 = phi139;
									uint32_t phi159 = phi_in140;
									uint32_t phi160 = phi141;
									uint32_t phi161 = phi_in123;
									uint32_t phi162 = phi142;
									uint32_t phi163 = phi_in143;
									uint32_t phi164 = phi_in127;
									phi_in70 = phi144;
									uint32_t phi165 = phi_in145;
									uint32_t phi166 = phi_in146;
									uint32_t phi167 = phi147;
									phi94 = phi_in148;
									uint64_t phi168 = phi131;
									uint32_t phi169 = phi_in149;
									phi76 = phi_in150;
									phi_in95 = phi_in151;
									uint64_t phi170 = phi133;
									int64_t anon172 = (__sext int64_t)*(uint32_t*)(phi134 + anon115 * 12 + 6301632);
									uint32_t* anon171 = (uint32_t*)((anon172 << 2) + 6300992);
									if (*(uint32_t*)(phi152 + 40) < *anon171)
									{
										uint64_t phi177;
										uint64_t phi189;
										*anon171 = *(uint32_t*)(phi152 + 44);
										uint64_t phi_in173 = 0;
										uint32_t phi174 = phi_in135;
										uint32_t phi175 = phi_in119;
										uint32_t phi176 = phi_in137;
										*(uint32_t*)(phi177 + 96) = phi_in140;
										uint32_t phi178 = phi_in123;
										uint32_t phi_in179 = phi_in143;
										uint32_t phi180 = phi_in127;
										uint32_t phi181 = phi_in145;
										uint32_t phi182 = phi_in146;
										uint64_t phi183 = phi_in129;
										uint64_t phi184 = phi_in148;
										uint32_t phi_in185 = phi_in149;
										uint32_t phi186 = phi_in150;
										uint32_t phi_in187 = phi_in151;
										uint64_t phi188 = phi152;
										do
										{
											phi189 = phi_in173;
											uint32_t phi_in190 = phi117;
											uint32_t phi191 = phi174;
											uint32_t phi_in192 = phi175;
											uint32_t phi_in193 = phi136;
											uint32_t phi_in194 = phi176;
											uint32_t phi195 = phi121;
											uint32_t phi196 = phi138;
											*(uint32_t*)(phi177 + 124) = phi141;
											int64_t anon200 = (__sext int64_t)*(uint32_t*)(phi189 + anon172 * 12 + 6301632);
											int64_t anon199 = anon200 * 12;
											int64_t anon198 = (__sext int64_t)*(uint32_t*)(anon199 + 6301636);
											uint32_t* anon197 = (uint32_t*)((anon198 << 2) + 6300992);
											*anon197 = phi124;
											uint32_t phi_in201 = phi142;
											uint32_t phi_in202 = phi180;
											uint32_t phi_in203 = phi144;
											uint32_t phi_in204 = phi182;
											uint64_t phi205 = phi183;
											uint32_t phi206 = phi147;
											*(uint64_t*)(phi207 + 104) = phi131;
											uint32_t phi_in208 = phi186;
											phi177 = phi188;
											uint64_t phi209 = phi133;
											phi117 = phi_in190;
											uint32_t phi210 = phi191;
											phi_in119 = phi_in192;
											phi136 = phi_in193;
											uint32_t phi211 = phi_in194;
											uint32_t phi212 = phi195;
											uint32_t phi213 = *(uint32_t*)(phi177 + 96);
											uint32_t phi214 = *(uint32_t*)(phi177 + 124);
											phi178 = phi178;
											uint32_t phi215 = *anon197;
											uint32_t phi216 = phi_in201;
											uint32_t phi217 = phi_in179;
											uint32_t phi218 = phi_in202;
											uint32_t phi219 = phi_in203;
											uint32_t phi220 = phi_in204;
											uint32_t phi221 = phi206;
											uint64_t phi222 = *(uint64_t*)(phi207 + 104);
											phi169 = phi_in185;
											uint32_t phi223 = phi_in208;
											uint32_t phi224 = phi_in187;
											uint64_t phi207 = phi177;
											phi170 = phi209;
											uint32_t* anon225 = (uint32_t*)((anon200 << 2) + 6300992);
											if (*(uint32_t*)(phi177 + 44) < *anon225)
											{
												*anon225 = *(uint32_t*)(phi177 + 64);
												uint32_t phi_in226 = phi_in190;
												uint32_t phi227 = phi_in192;
												*(uint32_t*)(phi207 + 112) = phi_in193;
												uint32_t phi228 = phi_in194;
												uint32_t phi229 = phi195;
												uint32_t phi230 = phi196;
												uint32_t phi231 = phi139;
												uint32_t phi232 = *(uint32_t*)(phi177 + 96);
												uint32_t phi_in233 = *(uint32_t*)(phi177 + 124);
												uint32_t phi_in234 = phi178;
												uint32_t phi_in235 = *anon197;
												uint32_t phi236 = phi_in201;
												uint32_t phi_in237 = phi_in179;
												uint32_t phi238 = phi_in202;
												uint32_t phi239 = phi_in203;
												uint64_t phi240 = phi205;
												uint32_t phi241 = phi206;
												uint64_t phi242 = phi184;
												uint32_t phi_in243 = phi_in185;
												uint32_t phi_in244 = phi_in208;
												uint32_t phi245 = phi_in187;
												uint64_t phi246 = phi209;
												if (*(uint32_t*)(phi177 + 64) < *anon197)
												{
													uint32_t phi247 = phi_in190;
													uint32_t phi_in248 = phi191;
													uint32_t phi_in249 = phi_in192;
													uint32_t phi_in250 = phi_in193;
													uint32_t phi251 = phi_in194;
													uint64_t phi252 = phi177;
													*(uint32_t*)(phi252 + 124) = phi196;
													*(uint64_t*)(phi252 + 80) = anon198;
													uint32_t phi_in253 = *(uint32_t*)(phi177 + 96);
													uint32_t phi254 = phi_in201;
													uint32_t phi255 = phi_in203;
													uint64_t phi256 = phi205;
													*(uint64_t*)(phi252 + 104) = phi184;
													uint64_t phi257 = *(uint64_t*)(phi207 + 104);
													if (phi178 < *anon197)
													{
														*(uint64_t*)(phi177 + 112) = *(uint64_t*)(phi207 + 104);
														*(uint64_t*)(phi177 + 104) = phi184;
														*(uint64_t*)(phi177 + 88) = phi205;
														*(uint64_t*)(phi177 + 80) = anon198;
														uint64_t anon258 = (__zext uint64_t)*anon197;
														w(4197873, anon11, (__sext int64_t)*anon197, anon258, anon258);
														phi247 = *(uint32_t*)(arg1 - 96);
														phi_in248 = *(uint32_t*)(arg1 - 96);
														phi_in249 = *(uint32_t*)(arg1 - 96);
														phi_in250 = *(uint32_t*)(arg1 - 68);
														phi251 = *(uint32_t*)(arg1 - 96);
														phi195 = *(uint32_t*)(arg1 - 96);
														phi252 = anon11;
														*(uint32_t*)(phi252 + 124) = *(uint32_t*)(arg1 - 68);
														phi139 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi252 + 80) = *(uint64_t*)(arg1 - 112);
														phi_in253 = *(uint32_t*)(arg1 - 96);
														phi254 = *(uint32_t*)(arg1 - 96);
														phi255 = *(uint32_t*)(arg1 - 96);
														phi256 = *(uint64_t*)(arg1 - 104);
														phi206 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi252 + 104) = *(uint64_t*)(arg1 - 88);
														phi257 = *(uint64_t*)(arg1 - 80);
														phi209 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in259 = phi247;
													*(uint32_t*)(phi260 + 88) = phi251;
													uint32_t phi261 = phi195;
													uint32_t phi_in262 = phi139;
													uint32_t phi_in263 = phi255;
													*(uint64_t*)(phi252 + 88) = phi256;
													uint32_t phi_in264 = phi206;
													uint64_t phi265 = *(uint64_t*)(phi252 + 104);
													*(uint64_t*)(phi252 + 112) = phi257;
													uint64_t phi266 = phi209;
													uint32_t phi_in267 = phi_in259;
													uint32_t phi268 = phi_in248;
													uint32_t phi_in269 = phi_in249;
													uint32_t phi_in270 = phi_in250;
													uint64_t phi260 = phi252;
													*(uint32_t*)(phi260 + 112) = *(uint32_t*)(phi252 + 124);
													uint32_t phi_in271 = phi_in262;
													uint64_t phi272 = *(uint64_t*)(phi252 + 80);
													uint32_t phi_in273 = phi_in253;
													phi239 = phi_in263;
													uint64_t phi274 = *(uint64_t*)(phi252 + 88);
													uint32_t phi_in275 = phi_in264;
													*(uint64_t*)(phi260 + 104) = *(uint64_t*)(phi252 + 112);
													int64_t anon276 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi252 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi252 + 124) < *(uint32_t*)((anon276 << 2) + 6300992))
													{
														*(uint64_t*)(phi252 + 104) = phi265;
														*(uint32_t*)(phi252 + 96) = phi261;
														uint64_t anon277 = (__zext uint64_t)*(uint32_t*)(phi252 + 120);
														w(4197793, anon11, anon276, anon277, anon277);
														phi_in267 = *(uint32_t*)(arg1 - 96);
														phi268 = *(uint32_t*)(arg1 - 96);
														phi_in269 = *(uint32_t*)(arg1 - 96);
														phi_in270 = alloca1.field14;
														*(uint32_t*)(phi260 + 88) = *(uint32_t*)(arg1 - 96);
														phi260 = anon11;
														phi261 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi260 + 112) = alloca1.field14;
														phi_in271 = *(uint32_t*)(arg1 - 96);
														phi272 = *(uint64_t*)(arg1 - 112);
														phi_in273 = *(uint32_t*)(arg1 - 96);
														phi254 = *(uint32_t*)(arg1 - 96);
														phi239 = *(uint32_t*)(arg1 - 96);
														phi274 = *(uint64_t*)(arg1 - 104);
														phi_in275 = *(uint32_t*)(arg1 - 96);
														phi265 = *(uint64_t*)(arg1 - 88);
														*(uint64_t*)(phi260 + 104) = *(uint64_t*)(arg1 - 80);
														phi266 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													phi191 = phi268;
													phi229 = phi261;
													phi_in234 = *(uint32_t*)(phi260 + 112);
													phi236 = phi254;
													*(uint64_t*)(phi260 + 80) = phi274;
													*(uint64_t*)(phi260 + 96) = phi265;
													uint64_t phi_in278 = phi266;
													phi_in226 = phi_in267;
													phi227 = phi_in269;
													*(uint32_t*)(phi207 + 112) = phi_in270;
													phi177 = phi260;
													phi228 = *(uint32_t*)(phi260 + 88);
													phi230 = phi_in234;
													phi231 = phi_in271;
													phi232 = phi_in273;
													phi_in233 = phi_in234;
													phi_in235 = phi_in234;
													phi_in237 = phi_in234;
													phi238 = phi_in234;
													phi181 = phi_in234;
													phi_in204 = phi_in234;
													phi240 = *(uint64_t*)(phi260 + 80);
													phi241 = phi_in275;
													phi242 = *(uint64_t*)(phi260 + 96);
													*(uint64_t*)(phi207 + 104) = *(uint64_t*)(phi260 + 104);
													phi_in243 = phi_in234;
													phi_in244 = phi_in234;
													phi245 = phi_in234;
													phi246 = phi_in278;
													int64_t anon279 = (__sext int64_t)*(uint32_t*)(phi272 * 12 + 6301640);
													if (phi_in234 < *(uint32_t*)((anon279 << 2) + 6300992))
													{
														*(uint32_t*)(phi260 + 112) = phi_in234;
														uint64_t anon280 = (__zext uint64_t)*(uint32_t*)(phi260 + 120);
														w(4197395, anon11, anon279, anon280, anon280);
														phi_in226 = *(uint32_t*)(arg1 - 104);
														phi191 = *(uint32_t*)(arg1 - 104);
														phi227 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi207 + 112) = *(uint32_t*)(arg1 - 80);
														phi177 = anon11;
														phi228 = *(uint32_t*)(arg1 - 104);
														phi229 = *(uint32_t*)(arg1 - 104);
														phi230 = *(uint32_t*)(arg1 - 80);
														phi231 = *(uint32_t*)(arg1 - 104);
														phi232 = *(uint32_t*)(arg1 - 104);
														phi_in233 = *(uint32_t*)(arg1 - 80);
														phi_in234 = *(uint32_t*)(arg1 - 80);
														phi_in235 = *(uint32_t*)(arg1 - 80);
														phi236 = *(uint32_t*)(arg1 - 104);
														phi_in237 = *(uint32_t*)(arg1 - 80);
														phi238 = *(uint32_t*)(arg1 - 80);
														phi239 = *(uint32_t*)(arg1 - 104);
														phi181 = *(uint32_t*)(arg1 - 80);
														phi_in204 = *(uint32_t*)(arg1 - 80);
														phi240 = *(uint64_t*)(arg1 - 112);
														phi241 = *(uint32_t*)(arg1 - 104);
														phi242 = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi207 + 104) = *(uint64_t*)(arg1 - 88);
														phi_in243 = *(uint32_t*)(arg1 - 80);
														phi_in244 = *(uint32_t*)(arg1 - 80);
														phi245 = *(uint32_t*)(arg1 - 80);
														phi246 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												*(uint32_t*)(phi207 + 88) = phi191;
												uint32_t phi281 = phi227;
												phi136 = *(uint32_t*)(phi207 + 112);
												phi207 = phi177;
												uint32_t phi282 = phi228;
												uint32_t phi_in283 = phi229;
												phi196 = phi230;
												uint32_t phi_in284 = phi231;
												uint32_t phi285 = phi232;
												uint32_t phi_in286 = phi236;
												uint32_t phi_in287 = phi238;
												uint32_t phi_in288 = phi239;
												uint64_t phi289 = phi240;
												uint32_t phi_in290 = phi241;
												*(uint64_t*)(phi207 + 96) = phi242;
												uint64_t phi291 = *(uint64_t*)(phi207 + 104);
												phi224 = phi245;
												uint64_t phi292 = phi246;
												phi117 = phi_in226;
												phi210 = *(uint32_t*)(phi207 + 88);
												phi_in119 = phi281;
												phi211 = phi282;
												phi212 = phi_in283;
												phi139 = phi_in284;
												phi213 = phi285;
												phi214 = phi_in233;
												phi178 = phi_in234;
												phi215 = phi_in235;
												phi216 = phi_in286;
												phi217 = phi_in237;
												phi218 = phi_in287;
												phi219 = phi_in288;
												phi220 = phi_in204;
												phi205 = phi289;
												phi221 = phi_in290;
												phi184 = *(uint64_t*)(phi207 + 96);
												phi222 = phi291;
												phi169 = phi_in243;
												phi223 = phi_in244;
												phi170 = phi292;
												int64_t anon294 = (__sext int64_t)*(uint32_t*)(anon199 + 6301640);
												uint32_t* anon293 = (uint32_t*)((anon294 << 2) + 6300992);
												if (*(uint32_t*)(phi207 + 64) < *anon293)
												{
													*anon293 = phi136;
													*(uint32_t*)(phi295 + 88) = phi_in226;
													uint32_t phi_in296 = *(uint32_t*)(phi207 + 88);
													*(uint32_t*)(phi295 + 112) = phi136;
													uint32_t phi297 = phi_in283;
													uint32_t phi298 = phi_in284;
													uint32_t phi299 = phi_in286;
													uint32_t phi300 = phi_in290;
													uint64_t phi301 = *(uint64_t*)(phi207 + 96);
													uint64_t phi295 = phi207;
													int64_t anon303 = anon294 * 12;
													int64_t anon302 = (__sext int64_t)*(uint32_t*)(anon303 + 6301636);
													if (phi136 < *(uint32_t*)((anon302 << 2) + 6300992))
													{
														*(uint32_t*)(phi207 + 112) = phi136;
														*(uint64_t*)(phi207 + 104) = phi291;
														*(uint64_t*)(phi207 + 80) = phi289;
														uint64_t anon304 = (__zext uint64_t)*(uint32_t*)(phi207 + 120);
														w(4197948, anon11, anon302, anon304, anon304);
														*(uint32_t*)(phi295 + 88) = *(uint32_t*)(arg1 - 104);
														phi_in296 = *(uint32_t*)(arg1 - 104);
														phi281 = *(uint32_t*)(arg1 - 104);
														*(uint32_t*)(phi295 + 112) = *(uint32_t*)(arg1 - 80);
														phi282 = *(uint32_t*)(arg1 - 104);
														phi297 = *(uint32_t*)(arg1 - 104);
														phi298 = *(uint32_t*)(arg1 - 104);
														phi285 = *(uint32_t*)(arg1 - 104);
														phi299 = *(uint32_t*)(arg1 - 104);
														phi_in288 = *(uint32_t*)(arg1 - 104);
														phi289 = *(uint64_t*)(arg1 - 112);
														phi300 = *(uint32_t*)(arg1 - 104);
														phi301 = *(uint64_t*)(arg1 - 96);
														phi291 = *(uint64_t*)(arg1 - 88);
														phi295 = anon11;
														phi292 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													uint32_t phi_in305 = phi281;
													phi220 = *(uint32_t*)(phi295 + 112);
													uint32_t phi_in306 = phi282;
													uint32_t phi_in307 = phi297;
													uint32_t phi_in308 = phi298;
													phi213 = phi285;
													uint32_t phi_in309 = phi299;
													*(uint64_t*)(phi295 + 80) = phi289;
													uint32_t phi_in310 = phi300;
													*(uint64_t*)(phi295 + 96) = phi301;
													*(uint64_t*)(phi295 + 104) = phi291;
													uint64_t phi_in311 = phi292;
													phi117 = *(uint32_t*)(phi295 + 88);
													phi210 = phi_in296;
													phi_in119 = phi_in305;
													phi136 = phi220;
													phi211 = phi_in306;
													phi212 = phi_in307;
													phi196 = phi220;
													phi139 = phi_in308;
													phi214 = phi220;
													phi178 = phi220;
													phi215 = phi220;
													phi216 = phi_in309;
													phi217 = phi220;
													phi218 = phi220;
													phi219 = phi_in288;
													phi181 = phi220;
													phi205 = *(uint64_t*)(phi295 + 80);
													phi221 = phi_in310;
													phi184 = *(uint64_t*)(phi295 + 96);
													phi222 = *(uint64_t*)(phi295 + 104);
													phi169 = phi220;
													phi223 = phi220;
													phi224 = phi220;
													phi207 = phi295;
													phi170 = phi_in311;
													int64_t anon312 = (__sext int64_t)*(uint32_t*)(anon303 + 6301640);
													if (phi220 < *(uint32_t*)((anon312 << 2) + 6300992))
													{
														*(uint32_t*)(phi295 + 112) = phi220;
														uint64_t anon313 = (__zext uint64_t)*(uint32_t*)(phi295 + 120);
														w(4197231, anon11, anon312, anon313, anon313);
														phi117 = alloca1.field8;
														phi210 = alloca1.field8;
														phi_in119 = alloca1.field8;
														phi136 = alloca1.field12;
														phi211 = alloca1.field8;
														phi212 = alloca1.field8;
														phi196 = alloca1.field12;
														phi139 = alloca1.field8;
														phi213 = alloca1.field8;
														phi214 = alloca1.field12;
														phi178 = alloca1.field12;
														phi215 = alloca1.field12;
														phi216 = alloca1.field8;
														phi217 = alloca1.field12;
														phi218 = alloca1.field12;
														phi219 = alloca1.field8;
														phi181 = alloca1.field12;
														phi220 = alloca1.field12;
														phi205 = alloca1.field7;
														phi221 = alloca1.field8;
														phi184 = alloca1.field10;
														phi222 = alloca1.field11;
														phi169 = alloca1.field12;
														phi223 = alloca1.field12;
														phi224 = alloca1.field12;
														phi207 = anon11;
														phi170 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi156 = phi211;
											phi157 = phi196;
											phi159 = phi213;
											phi124 = phi215;
											phi162 = phi216;
											phi166 = phi220;
											phi94 = phi184;
											phi168 = phi222;
											phi_in95 = phi224;
											phi152 = phi207;
											phi153 = phi117;
											phi154 = phi210;
											phi155 = phi_in119;
											phi_in98 = phi136;
											phi121 = phi212;
											phi158 = phi139;
											phi160 = phi214;
											phi161 = phi178;
											phi163 = phi217;
											phi164 = phi218;
											phi_in70 = phi219;
											phi165 = phi181;
											phi_in129 = phi205;
											phi167 = phi221;
											phi76 = phi223;
											phi_in173 = phi189 + 4;
											phi174 = phi210;
											phi175 = phi_in119;
											phi176 = phi156;
											phi121 = phi212;
											phi138 = phi157;
											*(uint32_t*)(phi177 + 96) = phi159;
											phi141 = phi214;
											phi142 = phi162;
											phi_in179 = phi217;
											phi180 = phi218;
											phi144 = phi219;
											phi182 = phi166;
											phi183 = phi205;
											phi147 = phi221;
											phi184 = phi94;
											phi131 = phi168;
											phi_in185 = phi169;
											phi186 = phi223;
											phi_in187 = phi_in95;
											phi188 = phi152;
											phi133 = phi170;
										}
										while (phi189 != 8);
									}
									phi97 = phi153;
									phi83 = phi154;
									phi84 = phi155;
									phi86 = phi156;
									phi_in88 = phi157;
									phi104 = phi160;
									phi_in106 = phi162;
									phi107 = phi163;
									phi108 = phi164;
									phi110 = phi165;
									phi73 = phi167;
									phi111 = phi169;
									phi81 = phi170;
									phi99 = phi121;
									phi100 = phi158;
									phi101 = phi168;
									phi_in102 = phi_in129;
									phi103 = phi159;
									phi105 = phi161;
									phi66 = phi124;
									phi_in109 = phi_in70;
									phi72 = phi166;
									phi_in112 = phi76;
									phi113 = phi152;
									phi_in116 = phi134 + 4;
									phi117 = phi97;
									phi118 = phi83;
									phi_in119 = phi84;
									phi85 = phi_in98;
									phi120 = phi86;
									phi122 = phi_in88;
									phi89 = phi158;
									phi63 = phi159;
									phi90 = phi104;
									phi_in123 = phi161;
									phi125 = phi_in106;
									phi126 = phi107;
									phi_in127 = phi108;
									phi128 = phi_in70;
									phi92 = phi110;
									phi72 = phi166;
									phi93 = phi73;
									phi130 = phi94;
									phi131 = phi168;
									phi75 = phi111;
									phi132 = phi_in95;
									phi96 = phi152;
									phi133 = phi81;
								}
								while (phi134 != 8);
							}
							phi314 = phi83;
							phi315 = phi100;
							phi316 = phi_in102;
							phi317 = phi103;
							phi318 = phi113;
							phi319 = phi97;
							phi320 = phi84;
							phi321 = phi86;
							phi322 = phi99;
							phi323 = phi94;
							phi324 = phi_in106;
							phi_in325 = phi_in109;
							phi326 = phi73;
							phi327 = phi81;
							if (phi316 != 8)
							{
								phi54 = phi97;
								phi_in55 = phi314;
								phi56 = phi84;
								phi57 = phi_in98;
								phi_in59 = phi86;
								phi60 = phi99;
								phi61 = phi_in88;
								phi62 = phi315;
								phi63 = phi317;
								phi64 = phi104;
								phi_in65 = phi105;
								phi_in67 = phi_in106;
								phi_in68 = phi107;
								phi_in69 = phi108;
								phi_in70 = phi_in109;
								phi71 = phi110;
								phi74 = phi94;
								phi75 = phi111;
								phi76 = phi_in112;
								phi77 = phi_in95;
								phi78 = phi318;
								phi79 = phi316 + 4;
								phi80 = phi101;
								phi81 = phi81;
							}
						}
						while (phi316 != 8);
					}
					else 
					{
						phi319 = phi43;
						phi314 = phi44;
						phi320 = phi45;
						phi321 = phi46;
						phi322 = phi47;
						phi315 = phi48;
						phi323 = phi51;
						phi317 = phi37;
						phi324 = phi38;
						phi_in325 = phi39;
						phi326 = phi49;
						phi318 = phi40;
						phi327 = phi34 & 0xffffffff;
					}
					phi43 = phi319;
					phi44 = phi314;
					phi45 = phi320;
					phi46 = phi321;
					phi47 = phi322;
					phi48 = phi315;
					phi51 = phi323;
					phi37 = phi317;
					phi38 = phi324;
					phi49 = phi326;
					phi40 = phi318;
					phi34 = phi327;
					phi25 = phi43;
					phi_in328 = phi44;
					phi329 = phi45;
					phi330 = phi46;
					phi331 = phi47;
					phi332 = phi48;
					phi333 = *(uint64_t*)(phi40 + 72);
					phi334 = phi37;
					phi335 = phi38;
					phi336 = phi_in325;
					phi_in337 = phi49;
					phi338 = phi34;
					phi339 = phi40;
				}
				else 
				{
					phi25 = phi25;
					phi_in328 = phi26;
					phi329 = phi27;
					phi330 = phi28;
					phi331 = phi29;
					phi332 = phi30;
					phi333 = *(uint64_t*)(phi40 + 72);
					phi334 = phi37;
					phi335 = phi38;
					phi336 = phi39;
					phi_in337 = phi33;
					phi338 = phi34 & 0xffffffff;
					phi339 = phi40;
				}
				phi27 = phi329;
				phi28 = phi330;
				phi29 = phi331;
				phi30 = phi332;
				phi22 = phi334;
				phi31 = phi335;
				phi32 = phi336;
				phi34 = phi338;
				phi36 = phi339;
				phi_in340 = *(uint32_t*)(phi36 + 68);
				phi12 = phi30;
				phi341 = *(uint64_t*)(phi36 + 56);
				phi17 = (__zext uint64_t)phi30;
				phi13 = *(uint32_t*)(phi36 + 68);
				phi18 = phi30;
				phi342 = *(uint32_t*)(phi36 + 68);
				phi343 = phi36;
			}
			else 
			{
				phi_in340 = phi16;
				phi12 = phi12;
				phi341 = *(uint64_t*)(phi21 + 56);
				phi17 = phi17 & 0xffffffff;
				phi13 = *(uint32_t*)(phi21 + 68);
				phi18 = phi22;
				phi342 = phi19;
				phi343 = phi21;
			}
			phi19 = phi342;
			phi21 = phi343;
			phi344 = *(uint64_t*)(phi21 + 48);
			phi345 = phi12;
			phi346 = phi_in340;
			phi347 = (__zext uint64_t)phi12;
			phi348 = phi_in340;
			phi_in349 = phi12;
			phi350 = phi21;
		}
		else 
		{
			phi344 = *(uint64_t*)(phi10 + 48);
			phi345 = phi12;
			phi346 = phi13;
			phi347 = phi7 & 0xffffffff;
			phi348 = *anon14;
			phi_in349 = phi9;
			phi350 = phi10;
		}
		if (phi344 != 8)
		{
			phi4 = phi345;
			phi5 = phi346;
			phi7 = phi347;
			phi8 = phi348;
			phi9 = phi_in349;
			*(uint64_t*)(phi10 + 48) = phi344 + 4;
			phi10 = phi350;
		}
		phi16 = phi_in340;
		phi20 = phi341 + 4;
		phi26 = phi_in328;
		phi33 = phi_in337;
		phi35 = phi333 + 4;
		phi39 = phi_in325;
		phi50 = phi50 + 4;
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
			uint64_t anon7;
			do
			{
				uint64_t anon8 = random();
				uint64_t anon9 = anon8 << 32;
				anon7 = anon8 + (((anon8 & 0xffffffff) * 2290649225 + anon9 >> 32 >> 4) - (anon9 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon7 + 6301504) != 0);
			anon10 = (uint32_t*)(anon7 + 6300864);
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
		uint64_t phi26;
		uint32_t anon27;
		uint32_t anon43;
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
			uint32_t phi_in16;
			uint32_t phi17;
			uint32_t phi18;
			uint32_t* anon19;
			uint32_t phi_in20;
			uint32_t phi21;
			uint32_t phi22;
			uint32_t phi23;
			uint32_t phi24;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi14 = *phi10;
				phi_in15 = *phi10;
				phi_in16 = *anon13;
				phi17 = *anon13;
				anon19 = (uint32_t*)(phi12 - 4);
				phi18 = *anon19;
			}
			else 
			{
				phi_in20 = *anon19;
				if (*phi10 < *anon19)
				{
					phi14 = *anon13 & 0xf;
					phi_in15 = *anon13;
					phi_in16 = *phi10 & 0xf;
					phi17 = *phi10;
					phi18 = *anon19 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19)
			{
				phi21 = phi14;
				*anon19 = phi17;
				*phi10 = phi18;
				phi22 = phi_in16;
				phi23 = *anon19;
				phi24 = phi_in15;
			}
			if (*anon13 >= *anon19 && *anon13 < *phi10)
			{
				phi22 = *anon19 & 0xf;
				phi21 = *phi10;
				phi23 = *anon13;
				phi24 = *phi10;
			}
			if (*anon13 >= *phi10 && *phi10 < *anon19 || *anon13 < *phi10 && *anon13 < *anon19 || *anon13 >= *anon19 && *anon13 < *phi10)
			{
				phi_in20 = phi22;
				*phi10 = phi21;
				*anon13 = phi23;
				if (phi24 - *anon13 <= 4294967295)
				{
					phi_in20 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi25 = phi_in20;
			phi26 = 6301636;
			anon27 = phi25 + 1 & 0xff;
			if (anon27 != 0)
			{
				phi26 = 6301636;
				uint64_t anon28 = phi12 + 12;
				phi10 = (uint32_t*)(anon28 & 0xc);
				phi_in11 = anon28;
				if (phi12 == 6301984)
				{
					break;
				}
			}
		}
		while (anon27 != 0);
		do
		{
			uint32_t phi31;
			uint32_t phi32;
			uint32_t phi_in33;
			uint32_t* anon34;
			uint32_t phi35;
			uint32_t phi_in36;
			uint32_t phi39;
			uint32_t phi40;
			uint32_t phi41;
			uint32_t* anon29 = (uint32_t*)(phi26 + 4);
			uint32_t* anon30 = (uint32_t*)phi26;
			if (*anon29 < *anon30)
			{
				*anon30 = *anon29;
				*anon29 = *anon30;
				phi31 = *anon30;
				phi32 = *anon30;
				phi_in33 = *anon29;
				anon34 = (uint32_t*)(phi26 - 4);
				*anon34 = *anon29;
				phi35 = *anon34;
			}
			else 
			{
				phi_in36 = *anon34;
				if (*anon30 < *anon34)
				{
					phi31 = *anon29 & 0xf;
					phi32 = *anon29;
					phi_in33 = *anon30 & 0xf;
					*anon34 = *anon30;
					phi35 = *anon34 & 0xf;
				}
			}
			if (*anon29 >= *anon30 && *anon30 < *anon34 || *anon29 < *anon30 && *anon29 < *anon34)
			{
				uint32_t phi_in37 = phi31;
				uint32_t phi_in38 = phi32;
				*anon30 = phi35;
				phi39 = phi_in33;
				phi40 = phi_in37;
				*anon29 = *anon34;
				phi41 = phi_in38;
			}
			if (*anon29 >= *anon34 && *anon29 < *anon30)
			{
				phi39 = *anon34 & 0xf;
				phi40 = *anon30;
				*anon29 = *anon29;
				phi41 = *anon30;
			}
			if (*anon29 >= *anon30 && *anon30 < *anon34 || *anon29 < *anon30 && *anon29 < *anon34 || *anon29 >= *anon34 && *anon29 < *anon30)
			{
				phi_in36 = phi39;
				*anon30 = phi40;
				if (phi41 - *anon29 <= 4294967295)
				{
					phi_in36 = *(uint32_t*)((phi26 & 0xf) - 4);
				}
			}
			uint32_t phi42 = phi_in36;
			anon43 = phi42 + 1 & 0xff;
			if (anon43 != 0)
			{
				phi26 = phi26 + 12;
			}
		}
		while (anon43 != 0);
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
		if ((*(uint8_t*)(*anon14 + ((__sext int64_t)anon8 << 1 | 1)) & 8) != 0 && (anon8 != 10 || anon11 != 0 && anon8 == 10))
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
		if ((uint8_t)anon18 != 10 && (*(uint32_t*)(((__sext int64_t)phi16 << 2) + 6300992) != 0 || (uint32_t)anon20 + ((uint32_t)((anon20 & 0xffffffff) / 3) - (uint32_t)(anon20 << 32 >> 32 >> 31)) * 4294967293 != 1))
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
		int64_t anon2;
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
							int64_t anon1;
							do
							{
								do
								{
									do
									{
										uint64_t anon4 = random();
										uint32_t anon3 = (uint32_t)anon4;
										anon2 = (__sext int64_t)(anon3 + ((uint32_t)((anon4 & 0xffffffff) * 2290649225 + (anon4 << 32) >> 36) - (anon3 >> 31)) * 4294967266);
										anon1 = anon2 << 2;
									}
									while (*(uint32_t*)(anon1 + 6301504) != 0);
								}
								while (*(uint32_t*)(anon1 + 6300864) != 0);
							}
							while (*(uint32_t*)(anon1 + 6300992) < 3);
							anon6 = anon2 * 12;
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
		phi_in9 = anon2;
		phi_in10 = anon2;
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
				uint64_t anon23 = random();
				uint32_t anon22 = (uint32_t)anon23;
				*anon20 = anon22 + (((uint32_t)((anon23 & 0xffffffff) * 2290649225 >> 32) + anon22 >> 4) - (anon22 >> 31)) * 4294967266;
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
			if (*anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) != phi42)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon25 == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) == phi42 || *anon25 != phi42 && *(uint32_t*)(anon26 + 6301636) != phi42 && *(uint32_t*)(anon26 + 6301640) == phi42)
			{
				int64_t anon45 = (__sext int64_t)phi42;
				phi_in9 = anon45;
				phi_in10 = anon45;
			}
			break;
		}
		uint32_t* anon46 = (uint32_t*)(anon17 + 6301504);
		if (*anon46 != 0 && *(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0 && (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3))
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
