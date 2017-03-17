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
			*phi1 = *phi1;
			phi9 = *anon4;
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
			*phi1 = phi_in11;
			phi9 = *anon8;
		}
		if (*anon4 < *phi1 && *anon4 < *anon8 || *anon4 >= *phi1 && *phi1 < *anon8 || *anon4 >= *anon8 && *anon4 < *phi1)
		{
			uint32_t phi_in12 = phi7;
			*anon4 = phi9;
			phi10 = phi_in12;
			if (*anon4 > *phi1)
			{
				phi10 = *anon8;
			}
		}
		if (phi10 != 255)
		{
			uint64_t anon13 = phi3 + 12;
			phi1 = (uint32_t*)anon13;
			phi_in2 = anon13;
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
		uint64_t phi15;
		uint32_t phi16;
		uint32_t phi25;
		uint64_t phi31;
		uint32_t phi38;
		uint32_t phi39;
		uint32_t phi40;
		uint64_t phi43;
		uint32_t phi_in313;
		uint32_t phi_in317;
		uint32_t phi_in322;
		uint64_t phi329;
		uint32_t phi_in334;
		uint64_t phi337;
		uint64_t phi_in338;
		uint32_t phi_in340;
		uint64_t phi342;
		uint32_t phi343;
		uint32_t phi344;
		uint64_t phi345;
		uint32_t phi346;
		int64_t anon13 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 48) + *(uint64_t*)(phi10 + 8) + 6301632);
		uint32_t* anon12 = (uint32_t*)((anon13 << 2) + 6300992);
		*anon12 = phi8;
		if (phi9 < *anon12)
		{
			uint32_t phi335;
			uint32_t phi336;
			uint32_t phi339;
			uint64_t phi341;
			*(uint64_t*)(phi10 + 16) = anon13 * 12;
			*(uint32_t*)(phi10 + 40) = (uint32_t)phi7 + 5;
			uint32_t phi14 = phi4;
			phi15 = (__zext uint64_t)phi4;
			*(uint32_t*)(phi10 + 68) = phi5;
			phi16 = phi4;
			uint32_t phi17 = phi5;
			*(uint64_t*)(phi10 + 56) = 0;
			uint32_t phi18 = phi16;
			int64_t anon20 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi10 + 56) + *(uint64_t*)(phi10 + 16) + 6301632);
			uint32_t* anon19 = (uint32_t*)((anon20 << 2) + 6300992);
			if (phi17 < *anon19)
			{
				uint32_t phi323;
				uint32_t phi324;
				uint32_t phi325;
				uint32_t phi326;
				uint32_t phi327;
				uint32_t phi328;
				uint32_t phi330;
				uint32_t phi331;
				uint32_t phi332;
				uint32_t phi333;
				*anon19 = *(uint32_t*)(phi10 + 4);
				*(uint64_t*)(phi10 + 32) = anon20 * 12;
				*(uint32_t*)(phi10 + 44) = (uint32_t)phi15 + 6;
				uint32_t phi21 = phi18;
				uint32_t phi22 = phi18;
				uint32_t phi23 = phi18;
				uint32_t phi24 = phi18;
				phi25 = phi18;
				uint32_t phi26 = phi18;
				uint32_t phi27 = phi18;
				uint32_t phi28 = phi18;
				uint32_t phi29 = phi18;
				uint64_t phi30 = (__zext uint64_t)phi18;
				phi31 = 0;
				uint32_t phi32 = phi18;
				uint32_t phi33 = phi23;
				uint32_t phi34 = phi25;
				*(uint64_t*)(phi35 + 72) = phi31;
				uint64_t phi35 = phi10;
				int64_t anon37 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi35 + 72) + *(uint64_t*)(phi35 + 32) + 6301632);
				uint32_t* anon36 = (uint32_t*)((anon37 << 2) + 6300992);
				if (*(uint32_t*)(phi35 + 4) < *anon36)
				{
					uint32_t phi90;
					uint32_t phi100;
					uint32_t phi314;
					uint32_t phi315;
					uint64_t phi316;
					uint32_t phi318;
					uint32_t phi319;
					uint64_t phi320;
					uint64_t phi321;
					*anon36 = *(uint32_t*)(phi35 + 24);
					*(uint32_t*)(phi35 + 64) = (uint32_t)phi30 + 7;
					phi38 = phi21;
					phi39 = phi22;
					phi40 = phi26;
					uint32_t phi41 = phi27;
					uint32_t phi42 = phi29;
					phi43 = 0;
					uint64_t phi44 = anon37 * 12;
					int64_t anon46 = (__sext int64_t)*(uint32_t*)(phi43 + phi44 + 6301632);
					uint32_t* anon45 = (uint32_t*)((anon46 << 2) + 6300992);
					if (*(uint32_t*)(phi35 + 24) < *anon45)
					{
						uint32_t phi50;
						uint64_t phi312;
						*anon45 = *(uint32_t*)(phi35 + 28);
						uint32_t phi47 = phi38;
						uint32_t phi48 = phi32;
						uint32_t phi49 = phi39;
						uint32_t anon51 = (uint32_t)phi30 + 8;
						phi50 = anon51;
						uint32_t phi52 = phi33;
						uint32_t phi53 = phi24;
						uint32_t phi_in54 = anon51;
						uint32_t phi_in55 = phi34;
						uint32_t phi56 = phi40;
						uint32_t phi57 = anon51;
						uint32_t phi_in58 = anon51;
						uint32_t phi59 = anon51;
						uint32_t phi_in60 = phi41;
						uint32_t phi61 = anon51;
						uint32_t phi_in62 = anon51;
						uint32_t phi63 = phi28;
						uint32_t phi64 = anon51;
						uint32_t phi65 = anon51;
						uint32_t phi_in66 = phi42;
						uint64_t phi67 = phi44;
						uint32_t phi68 = anon51;
						uint32_t phi69 = anon51;
						uint32_t phi70 = anon51;
						uint64_t phi_in71 = phi35;
						uint64_t phi72 = 0;
						uint64_t phi73 = anon46 * 12;
						uint64_t phi74 = phi30;
						do
						{
							uint32_t phi_in75 = phi47;
							uint32_t phi76 = phi49;
							uint32_t phi77 = phi50;
							uint32_t phi78 = phi52;
							uint32_t phi_in79 = phi53;
							uint32_t phi80 = phi57;
							uint32_t phi_in81 = phi59;
							uint32_t phi82 = phi61;
							uint32_t phi_in83 = phi63;
							uint32_t phi_in84 = phi64;
							uint64_t phi85 = phi67;
							uint32_t phi_in86 = phi69;
							uint32_t phi87 = phi70;
							uint64_t phi_in88 = phi72;
							uint64_t phi_in89 = phi74;
							phi90 = phi_in75;
							uint32_t phi91 = phi48;
							phi49 = phi76;
							phi50 = phi77;
							phi53 = phi_in79;
							uint32_t phi92 = phi_in55;
							uint64_t phi93 = phi73;
							uint32_t phi94 = phi56;
							uint32_t phi95 = phi80;
							uint32_t phi_in96 = phi_in58;
							uint32_t phi97 = phi_in81;
							uint32_t phi98 = phi_in62;
							uint32_t phi99 = phi_in83;
							phi64 = phi_in84;
							phi100 = phi_in66;
							uint64_t phi101 = phi85;
							uint32_t phi_in102 = phi68;
							phi69 = phi_in86;
							uint32_t phi103 = phi87;
							uint64_t phi104 = phi_in71;
							int64_t anon106 = (__sext int64_t)*(uint32_t*)(phi_in88 + phi73 + 6301632);
							uint32_t* anon105 = (uint32_t*)((anon106 << 2) + 6300992);
							if (*(uint32_t*)(phi_in71 + 28) < *anon105)
							{
								uint64_t phi124;
								*anon105 = *(uint32_t*)(phi_in71 + 40);
								*(uint32_t*)(phi_in71 + 120) = (uint32_t)phi_in89 + 9;
								uint64_t phi_in107 = 0;
								uint32_t phi_in108 = phi_in75;
								uint32_t phi109 = phi78;
								uint32_t phi110 = phi_in54;
								uint32_t phi111 = phi_in55;
								uint32_t phi_in112 = phi_in58;
								uint32_t phi_in113 = phi_in81;
								uint32_t phi114 = phi_in60;
								uint32_t phi115 = phi82;
								uint32_t phi116 = phi_in62;
								uint32_t phi117 = phi_in84;
								uint32_t phi118 = phi65;
								uint64_t phi_in119 = phi_in88;
								uint32_t phi120 = phi_in66;
								uint64_t phi_in121 = phi73;
								uint64_t phi122 = phi_in71;
								uint64_t phi123 = phi_in89 & 0xffffffff;
								do
								{
									phi124 = phi_in107;
									uint32_t phi_in125 = phi48;
									uint32_t phi_in126 = phi76;
									uint32_t phi127 = phi77;
									uint32_t phi_in128 = phi109;
									uint32_t phi129 = phi110;
									uint32_t phi130 = phi111;
									uint32_t phi_in131 = phi56;
									*(uint32_t*)(phi132 + 124) = phi80;
									uint32_t phi_in133 = phi114;
									uint32_t phi_in134 = phi115;
									uint32_t phi_in135 = phi116;
									uint32_t phi136 = phi_in83;
									uint32_t phi_in137 = phi117;
									uint32_t phi_in138 = phi118;
									uint32_t phi_in139 = phi120;
									uint64_t phi_in140 = phi85;
									uint32_t phi_in141 = phi68;
									uint32_t phi_in142 = phi87;
									uint64_t phi132 = phi122;
									uint64_t phi_in143 = phi123;
									phi_in75 = phi_in108;
									uint32_t phi144 = phi_in125;
									uint32_t phi_in145 = phi_in126;
									uint32_t phi146 = phi_in128;
									uint32_t phi147 = phi_in79;
									phi_in54 = phi129;
									uint32_t phi148 = phi130;
									phi94 = phi_in131;
									uint32_t phi149 = *(uint32_t*)(phi132 + 124);
									uint32_t phi150 = phi_in112;
									uint32_t phi151 = phi_in113;
									phi114 = phi_in133;
									uint32_t phi152 = phi_in134;
									phi116 = phi_in135;
									uint32_t phi153 = phi_in137;
									uint32_t phi154 = phi_in138;
									uint64_t phi155 = phi_in119;
									uint32_t phi156 = phi_in139;
									phi85 = phi_in140;
									uint32_t phi157 = phi_in141;
									phi103 = phi_in142;
									uint64_t phi158 = phi132;
									uint64_t phi159 = phi_in143;
									int64_t anon161 = (__sext int64_t)*(uint32_t*)(phi124 + anon106 * 12 + 6301632);
									uint32_t* anon160 = (uint32_t*)((anon161 << 2) + 6300992);
									if (*(uint32_t*)(phi132 + 40) < *anon160)
									{
										uint64_t phi174;
										*anon160 = *(uint32_t*)(phi132 + 44);
										uint64_t phi_in162 = 0;
										uint32_t phi163 = phi_in108;
										uint32_t phi_in164 = phi_in125;
										uint32_t phi165 = phi127;
										uint32_t phi166 = phi_in128;
										uint32_t phi167 = phi_in79;
										uint32_t phi168 = phi_in131;
										uint32_t phi169 = phi_in112;
										int64_t anon173 = (__sext int64_t)*(uint32_t*)(phi174 + anon161 * 12 + 6301632);
										int64_t anon172 = anon173 * 12;
										int64_t anon171 = (__sext int64_t)*(uint32_t*)(anon172 + 6301636);
										uint32_t* anon170 = (uint32_t*)((anon171 << 2) + 6300992);
										*anon170 = phi_in113;
										uint32_t phi175 = phi_in134;
										uint32_t phi176 = phi_in135;
										uint32_t phi_in177 = phi136;
										uint32_t phi178 = phi_in137;
										uint32_t phi_in179 = phi_in138;
										uint64_t phi180 = phi_in119;
										uint64_t phi181 = phi_in140;
										uint64_t phi182 = phi_in121;
										uint32_t phi_in183 = phi_in141;
										uint32_t phi_in184 = phi_in86;
										uint32_t phi_in185 = phi_in142;
										uint64_t phi_in186 = phi_in143;
										do
										{
											phi174 = phi_in162;
											uint32_t phi_in187 = phi163;
											uint32_t phi188 = phi_in126;
											uint32_t phi_in189 = phi165;
											uint32_t phi_in190 = phi166;
											uint32_t phi191 = phi129;
											uint32_t phi192 = phi130;
											*(uint32_t*)(phi132 + 96) = phi168;
											uint32_t phi193 = phi169;
											uint32_t phi_in194 = phi175;
											uint32_t phi_in195 = phi176;
											uint32_t phi196 = phi_in177;
											uint32_t phi_in197 = phi178;
											uint32_t phi198 = phi_in179;
											uint64_t phi199 = phi180;
											uint32_t phi200 = phi_in139;
											uint64_t phi201 = phi181;
											uint64_t phi202 = phi182;
											phi163 = phi_in187;
											uint32_t phi203 = phi_in164;
											uint32_t phi_in204 = phi188;
											phi127 = phi_in189;
											uint32_t phi205 = phi_in190;
											uint32_t phi206 = phi167;
											uint32_t phi207 = phi191;
											uint32_t phi208 = phi192;
											phi168 = *(uint32_t*)(phi132 + 96);
											uint32_t phi_in209 = *(uint32_t*)(phi132 + 124);
											uint32_t phi210 = phi193;
											phi_in113 = *anon170;
											uint32_t phi_in211 = phi_in133;
											uint32_t phi212 = phi_in194;
											phi_in135 = phi_in195;
											phi_in137 = phi_in197;
											uint64_t phi213 = phi199;
											uint64_t phi214 = phi201;
											phi182 = phi202;
											uint32_t phi215 = phi_in183;
											uint32_t phi216 = phi_in184;
											phi_in142 = phi_in185;
											uint64_t phi217 = phi132;
											uint64_t phi218 = phi_in186;
											uint32_t* anon219 = (uint32_t*)((anon173 << 2) + 6300992);
											if (*(uint32_t*)(phi132 + 44) < *anon219)
											{
												*anon219 = *(uint32_t*)(phi132 + 64);
												uint32_t phi220 = phi_in187;
												uint32_t phi221 = phi_in164;
												uint32_t phi222 = phi_in189;
												uint32_t phi_in223 = phi_in190;
												uint32_t phi224 = phi167;
												uint32_t phi225 = phi191;
												uint32_t phi226 = phi192;
												uint32_t phi227 = *(uint32_t*)(phi132 + 96);
												uint32_t phi228 = *(uint32_t*)(phi132 + 124);
												uint32_t phi229 = *anon170;
												uint32_t phi_in230 = phi_in133;
												uint32_t phi231 = phi_in194;
												uint32_t phi232 = phi_in195;
												uint32_t phi_in233 = phi196;
												uint32_t phi_in234 = phi_in197;
												uint32_t phi235 = phi198;
												uint32_t phi236 = phi200;
												*(uint64_t*)(phi237 + 96) = phi201;
												uint32_t phi_in238 = phi_in183;
												uint32_t phi239 = phi_in184;
												uint32_t phi240 = phi_in185;
												uint64_t phi241 = phi_in186;
												if (*(uint32_t*)(phi132 + 64) < *anon170)
												{
													uint32_t phi242 = phi_in187;
													uint32_t phi_in243 = phi_in164;
													uint32_t phi244 = phi188;
													uint32_t phi245 = phi_in189;
													uint64_t phi246 = phi132;
													uint64_t phi247 = anon171;
													uint32_t phi248 = *(uint32_t*)(phi132 + 96);
													uint32_t phi249 = phi_in133;
													uint32_t phi250 = phi196;
													uint64_t phi251 = phi199;
													uint32_t phi252 = phi200;
													*(uint64_t*)(phi246 + 112) = phi202;
													uint64_t phi_in253 = phi_in186;
													if (phi193 < *anon170)
													{
														*(uint64_t*)(phi132 + 112) = phi202;
														*(uint64_t*)(phi132 + 104) = phi201;
														*(uint64_t*)(phi132 + 88) = phi199;
														*(uint64_t*)(phi132 + 80) = anon171;
														uint64_t anon254 = (__zext uint64_t)*anon170;
														w(4197873, anon11, (__sext int64_t)*anon170, anon254, anon254);
														phi242 = *(uint32_t*)(arg1 - 96);
														phi_in243 = *(uint32_t*)(arg1 - 96);
														phi244 = *(uint32_t*)(arg1 - 96);
														phi245 = *(uint32_t*)(arg1 - 68);
														phi_in190 = *(uint32_t*)(arg1 - 96);
														phi167 = *(uint32_t*)(arg1 - 96);
														phi246 = anon11;
														phi191 = *(uint32_t*)(arg1 - 68);
														phi192 = *(uint32_t*)(arg1 - 96);
														phi247 = *(uint64_t*)(arg1 - 112);
														phi248 = *(uint32_t*)(arg1 - 96);
														phi249 = *(uint32_t*)(arg1 - 96);
														phi250 = *(uint32_t*)(arg1 - 96);
														phi251 = *(uint64_t*)(arg1 - 104);
														phi252 = *(uint32_t*)(arg1 - 96);
														phi201 = *(uint64_t*)(arg1 - 88);
														*(uint64_t*)(phi246 + 112) = *(uint64_t*)(arg1 - 80);
														phi_in253 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi_in255 = phi242;
													uint32_t phi256 = phi245;
													*(uint32_t*)(phi246 + 96) = phi167;
													*(uint32_t*)(phi246 + 124) = phi191;
													uint32_t phi257 = phi192;
													*(uint64_t*)(phi246 + 80) = phi247;
													uint32_t phi_in258 = phi248;
													uint32_t phi_in259 = phi249;
													uint32_t phi260 = phi250;
													*(uint64_t*)(phi246 + 88) = phi251;
													uint32_t phi_in261 = phi252;
													*(uint64_t*)(phi246 + 104) = phi201;
													uint32_t phi_in262 = phi_in243;
													uint32_t phi263 = phi_in190;
													uint64_t phi264 = phi246;
													uint32_t phi_in265 = *(uint32_t*)(phi246 + 96);
													*(uint32_t*)(phi264 + 112) = *(uint32_t*)(phi246 + 124);
													uint64_t phi266 = *(uint64_t*)(phi246 + 80);
													uint32_t phi_in267 = phi_in258;
													uint32_t phi_in268 = phi_in259;
													uint64_t phi269 = *(uint64_t*)(phi246 + 88);
													uint32_t phi270 = phi_in261;
													*(uint64_t*)(phi264 + 96) = *(uint64_t*)(phi246 + 104);
													uint64_t phi271 = *(uint64_t*)(phi246 + 112);
													uint64_t phi_in272 = phi_in253;
													int64_t anon273 = (__sext int64_t)*(uint32_t*)(*(uint64_t*)(phi246 + 80) * 12 + 6301636);
													if (*(uint32_t*)(phi246 + 124) < *(uint32_t*)((anon273 << 2) + 6300992))
													{
														uint64_t anon274 = (__zext uint64_t)*(uint32_t*)(phi246 + 120);
														w(4197793, anon11, anon273, anon274, anon274);
														phi_in255 = *(uint32_t*)(arg1 - 96);
														phi_in262 = *(uint32_t*)(arg1 - 96);
														phi244 = *(uint32_t*)(arg1 - 96);
														phi256 = alloca1.field14;
														phi263 = *(uint32_t*)(arg1 - 96);
														phi264 = anon11;
														phi_in265 = *(uint32_t*)(arg1 - 96);
														*(uint32_t*)(phi264 + 112) = alloca1.field14;
														phi257 = *(uint32_t*)(arg1 - 96);
														phi266 = *(uint64_t*)(arg1 - 112);
														phi_in267 = *(uint32_t*)(arg1 - 96);
														phi_in268 = *(uint32_t*)(arg1 - 96);
														phi260 = *(uint32_t*)(arg1 - 96);
														phi269 = *(uint64_t*)(arg1 - 104);
														phi270 = *(uint32_t*)(arg1 - 96);
														*(uint64_t*)(phi264 + 96) = *(uint64_t*)(arg1 - 88);
														phi271 = *(uint64_t*)(arg1 - 80);
														phi_in272 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													phi188 = phi244;
													phi222 = phi256;
													*(uint32_t*)(phi264 + 88) = phi263;
													phi239 = *(uint32_t*)(phi264 + 112);
													phi226 = phi257;
													uint32_t phi_in275 = phi260;
													phi199 = phi269;
													uint32_t phi_in276 = phi270;
													*(uint64_t*)(phi237 + 96) = *(uint64_t*)(phi264 + 96);
													*(uint64_t*)(phi264 + 104) = phi271;
													phi220 = phi_in255;
													phi221 = phi_in262;
													phi132 = phi264;
													phi_in223 = *(uint32_t*)(phi264 + 88);
													phi224 = phi_in265;
													phi225 = phi239;
													phi227 = phi_in267;
													phi228 = phi239;
													phi193 = phi239;
													phi229 = phi239;
													phi_in230 = phi_in268;
													phi231 = phi239;
													phi232 = phi239;
													phi_in233 = phi_in275;
													phi_in234 = phi239;
													phi235 = phi239;
													phi236 = phi_in276;
													phi202 = *(uint64_t*)(phi264 + 104);
													phi_in238 = phi239;
													phi240 = phi239;
													phi241 = phi_in272;
													int64_t anon277 = (__sext int64_t)*(uint32_t*)(phi266 * 12 + 6301640);
													if (phi239 < *(uint32_t*)((anon277 << 2) + 6300992))
													{
														*(uint32_t*)(phi264 + 112) = phi239;
														*(uint64_t*)(phi264 + 96) = *(uint64_t*)(phi237 + 96);
														*(uint64_t*)(phi264 + 80) = phi199;
														uint64_t anon278 = (__zext uint64_t)*(uint32_t*)(phi264 + 120);
														w(4197395, anon11, anon277, anon278, anon278);
														phi220 = *(uint32_t*)(arg1 - 104);
														phi221 = *(uint32_t*)(arg1 - 104);
														phi188 = *(uint32_t*)(arg1 - 104);
														phi222 = *(uint32_t*)(arg1 - 80);
														phi132 = anon11;
														phi_in223 = *(uint32_t*)(arg1 - 104);
														phi224 = *(uint32_t*)(arg1 - 104);
														phi225 = *(uint32_t*)(arg1 - 80);
														phi226 = *(uint32_t*)(arg1 - 104);
														phi227 = *(uint32_t*)(arg1 - 104);
														phi228 = *(uint32_t*)(arg1 - 80);
														phi193 = *(uint32_t*)(arg1 - 80);
														phi229 = *(uint32_t*)(arg1 - 80);
														phi_in230 = *(uint32_t*)(arg1 - 104);
														phi231 = *(uint32_t*)(arg1 - 80);
														phi232 = *(uint32_t*)(arg1 - 80);
														phi_in233 = *(uint32_t*)(arg1 - 104);
														phi_in234 = *(uint32_t*)(arg1 - 80);
														phi235 = *(uint32_t*)(arg1 - 80);
														phi199 = *(uint64_t*)(arg1 - 112);
														phi236 = *(uint32_t*)(arg1 - 104);
														*(uint64_t*)(phi237 + 96) = *(uint64_t*)(arg1 - 96);
														phi202 = *(uint64_t*)(arg1 - 88);
														phi_in238 = *(uint32_t*)(arg1 - 80);
														phi239 = *(uint32_t*)(arg1 - 80);
														phi240 = *(uint32_t*)(arg1 - 80);
														phi241 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												uint32_t phi_in279 = phi220;
												*(uint32_t*)(phi237 + 88) = phi221;
												phi127 = phi222;
												uint64_t phi237 = phi132;
												uint32_t phi_in280 = phi224;
												uint32_t phi_in281 = phi225;
												uint32_t phi_in282 = phi226;
												uint32_t phi_in283 = phi227;
												uint32_t phi_in284 = phi228;
												phi210 = phi193;
												uint32_t phi_in285 = phi229;
												uint32_t phi_in286 = phi231;
												uint32_t phi_in287 = phi232;
												phi198 = phi235;
												*(uint64_t*)(phi237 + 80) = phi199;
												uint32_t phi_in288 = phi236;
												*(uint64_t*)(phi237 + 104) = phi202;
												uint32_t phi_in289 = phi239;
												phi_in142 = phi240;
												uint64_t phi290 = phi241;
												phi163 = phi_in279;
												phi203 = *(uint32_t*)(phi237 + 88);
												phi_in204 = phi188;
												phi205 = phi_in223;
												phi206 = phi_in280;
												phi207 = phi_in281;
												phi208 = phi_in282;
												phi168 = phi_in283;
												phi_in209 = phi_in284;
												phi_in113 = phi_in285;
												phi_in211 = phi_in230;
												phi212 = phi_in286;
												phi_in135 = phi_in287;
												phi196 = phi_in233;
												phi_in137 = phi_in234;
												phi213 = *(uint64_t*)(phi237 + 80);
												phi200 = phi_in288;
												phi214 = *(uint64_t*)(phi237 + 96);
												phi182 = *(uint64_t*)(phi237 + 104);
												phi215 = phi_in238;
												phi216 = phi_in289;
												phi217 = phi237;
												phi218 = phi290;
												int64_t anon292 = (__sext int64_t)*(uint32_t*)(anon172 + 6301640);
												uint32_t* anon291 = (uint32_t*)((anon292 << 2) + 6300992);
												if (*(uint32_t*)(phi237 + 64) < *anon291)
												{
													*anon291 = phi127;
													*(uint32_t*)(phi217 + 88) = phi_in279;
													uint32_t phi293 = *(uint32_t*)(phi237 + 88);
													uint32_t phi294 = phi127;
													uint32_t phi295 = phi_in223;
													uint32_t phi_in296 = phi_in282;
													uint32_t phi297 = phi_in283;
													uint32_t phi298 = phi_in230;
													uint32_t phi_in299 = phi_in233;
													uint64_t phi300 = *(uint64_t*)(phi237 + 80);
													uint32_t phi301 = phi_in288;
													uint64_t phi302 = *(uint64_t*)(phi237 + 96);
													*(uint64_t*)(phi217 + 104) = *(uint64_t*)(phi237 + 104);
													int64_t anon304 = anon292 * 12;
													int64_t anon303 = (__sext int64_t)*(uint32_t*)(anon304 + 6301636);
													if (phi127 < *(uint32_t*)((anon303 << 2) + 6300992))
													{
														*(uint32_t*)(phi237 + 112) = phi127;
														uint64_t anon305 = (__zext uint64_t)*(uint32_t*)(phi237 + 120);
														w(4197948, anon11, anon303, anon305, anon305);
														*(uint32_t*)(phi217 + 88) = *(uint32_t*)(arg1 - 104);
														phi293 = *(uint32_t*)(arg1 - 104);
														phi188 = *(uint32_t*)(arg1 - 104);
														phi294 = *(uint32_t*)(arg1 - 80);
														phi295 = *(uint32_t*)(arg1 - 104);
														phi_in280 = *(uint32_t*)(arg1 - 104);
														phi_in296 = *(uint32_t*)(arg1 - 104);
														phi297 = *(uint32_t*)(arg1 - 104);
														phi298 = *(uint32_t*)(arg1 - 104);
														phi_in299 = *(uint32_t*)(arg1 - 104);
														phi300 = *(uint64_t*)(arg1 - 112);
														phi301 = *(uint32_t*)(arg1 - 104);
														phi302 = *(uint64_t*)(arg1 - 96);
														*(uint64_t*)(phi217 + 104) = *(uint64_t*)(arg1 - 88);
														phi237 = anon11;
														phi290 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													uint32_t phi_in306 = phi293;
													uint32_t phi_in307 = phi188;
													*(uint32_t*)(phi217 + 112) = phi294;
													phi205 = phi295;
													uint32_t phi_in308 = phi297;
													phi_in211 = phi298;
													*(uint64_t*)(phi217 + 80) = phi300;
													phi200 = phi301;
													*(uint64_t*)(phi217 + 96) = phi302;
													phi217 = phi237;
													uint64_t phi_in309 = phi290;
													phi163 = *(uint32_t*)(phi217 + 88);
													phi203 = phi_in306;
													phi_in204 = phi_in307;
													phi127 = *(uint32_t*)(phi217 + 112);
													phi206 = phi_in280;
													phi207 = *(uint32_t*)(phi217 + 112);
													phi208 = phi_in296;
													phi168 = phi_in308;
													phi_in209 = *(uint32_t*)(phi217 + 112);
													phi210 = *(uint32_t*)(phi217 + 112);
													phi_in113 = *(uint32_t*)(phi217 + 112);
													phi212 = *(uint32_t*)(phi217 + 112);
													phi_in135 = *(uint32_t*)(phi217 + 112);
													phi196 = phi_in299;
													phi_in137 = *(uint32_t*)(phi217 + 112);
													phi198 = *(uint32_t*)(phi217 + 112);
													phi213 = *(uint64_t*)(phi217 + 80);
													phi214 = *(uint64_t*)(phi217 + 96);
													phi182 = *(uint64_t*)(phi217 + 104);
													phi215 = *(uint32_t*)(phi217 + 112);
													phi216 = *(uint32_t*)(phi217 + 112);
													phi_in142 = *(uint32_t*)(phi217 + 112);
													phi218 = phi_in309;
													int64_t anon310 = (__sext int64_t)*(uint32_t*)(anon304 + 6301640);
													if (*(uint32_t*)(phi217 + 112) < *(uint32_t*)((anon310 << 2) + 6300992))
													{
														uint64_t anon311 = (__zext uint64_t)*(uint32_t*)(phi217 + 120);
														w(4197231, anon11, anon310, anon311, anon311);
														phi163 = alloca1.field8;
														phi203 = alloca1.field8;
														phi_in204 = alloca1.field8;
														phi127 = alloca1.field12;
														phi205 = alloca1.field8;
														phi206 = alloca1.field8;
														phi207 = alloca1.field12;
														phi208 = alloca1.field8;
														phi168 = alloca1.field8;
														phi_in209 = alloca1.field12;
														phi210 = alloca1.field12;
														phi_in113 = alloca1.field12;
														phi_in211 = alloca1.field8;
														phi212 = alloca1.field12;
														phi_in135 = alloca1.field12;
														phi196 = alloca1.field8;
														phi_in137 = alloca1.field12;
														phi198 = alloca1.field12;
														phi213 = alloca1.field7;
														phi200 = alloca1.field8;
														phi214 = alloca1.field10;
														phi182 = alloca1.field11;
														phi215 = alloca1.field12;
														phi216 = alloca1.field12;
														phi_in142 = alloca1.field12;
														phi217 = anon11;
														phi218 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											phi148 = phi208;
											phi152 = phi212;
											phi136 = phi196;
											phi155 = phi213;
											phi156 = phi200;
											phi157 = phi215;
											phi158 = phi217;
											phi159 = phi218;
											phi_in75 = phi163;
											phi144 = phi203;
											phi_in145 = phi_in204;
											phi146 = phi205;
											phi147 = phi206;
											phi_in54 = phi207;
											phi94 = phi168;
											phi149 = phi_in209;
											phi150 = phi210;
											phi151 = phi_in113;
											phi114 = phi_in211;
											phi116 = phi_in135;
											phi153 = phi_in137;
											phi154 = phi198;
											phi85 = phi214;
											phi_in121 = phi182;
											phi_in86 = phi216;
											phi103 = phi_in142;
											phi_in162 = phi174 + 4;
											phi_in164 = phi203;
											phi_in126 = phi_in204;
											phi165 = phi127;
											phi166 = phi205;
											phi167 = phi206;
											phi129 = phi207;
											phi130 = phi148;
											*(uint32_t*)(phi132 + 124) = phi_in209;
											phi169 = phi210;
											*anon170 = phi_in113;
											phi_in133 = phi_in211;
											phi175 = phi152;
											phi176 = phi_in135;
											phi_in177 = phi136;
											phi178 = phi_in137;
											phi_in179 = phi198;
											phi180 = phi155;
											phi_in139 = phi156;
											phi181 = phi214;
											phi_in183 = phi157;
											phi_in184 = phi216;
											phi_in185 = phi_in142;
											phi132 = phi158;
											phi_in186 = phi159;
										}
										while (phi174 != 8);
									}
									phi91 = phi144;
									phi95 = phi149;
									phi97 = phi151;
									phi82 = phi152;
									phi65 = phi154;
									phi_in88 = phi155;
									phi_in102 = phi157;
									phi90 = phi_in75;
									phi49 = phi_in145;
									phi50 = phi127;
									phi78 = phi146;
									phi53 = phi147;
									phi92 = phi148;
									phi93 = phi_in121;
									phi_in96 = phi150;
									phi_in60 = phi114;
									phi98 = phi116;
									phi99 = phi136;
									phi64 = phi153;
									phi100 = phi156;
									phi101 = phi85;
									phi69 = phi_in86;
									phi104 = phi158;
									phi_in89 = phi159;
									phi_in107 = phi124 + 4;
									phi_in108 = phi_in75;
									phi48 = phi91;
									phi76 = phi_in145;
									phi77 = phi127;
									phi109 = phi146;
									phi_in79 = phi147;
									phi110 = phi_in54;
									phi111 = phi148;
									phi56 = phi94;
									phi80 = phi95;
									phi_in112 = phi150;
									phi_in113 = phi97;
									phi115 = phi82;
									phi_in83 = phi136;
									phi117 = phi153;
									phi118 = phi65;
									phi_in119 = phi_in88;
									phi120 = phi156;
									phi68 = phi_in102;
									phi87 = phi103;
									phi122 = phi158;
									phi123 = phi159;
								}
								while (phi124 != 8);
							}
							phi312 = phi_in88;
							phi32 = phi91;
							phi_in313 = phi49;
							phi314 = phi78;
							phi24 = phi53;
							phi315 = phi92;
							phi316 = phi101;
							phi_in317 = phi94;
							phi318 = phi_in60;
							phi319 = phi99;
							phi320 = phi104;
							phi321 = phi_in89;
							if (phi312 != 8)
							{
								phi47 = phi90;
								phi48 = phi91;
								phi52 = phi78;
								phi_in55 = phi92;
								phi56 = phi94;
								phi57 = phi95;
								phi_in58 = phi_in96;
								phi59 = phi97;
								phi61 = phi82;
								phi_in62 = phi98;
								phi63 = phi99;
								phi_in66 = phi100;
								phi67 = phi101;
								phi68 = phi_in102;
								phi70 = phi103;
								phi_in71 = phi104;
								phi72 = phi312 + 4;
								phi73 = phi93;
								phi74 = phi_in89;
							}
						}
						while (phi312 != 8);
					}
					else 
					{
						phi90 = phi38;
						phi32 = phi32;
						phi_in313 = phi39;
						phi314 = phi33;
						phi24 = phi24;
						phi315 = phi34;
						phi316 = phi44;
						phi_in317 = phi40;
						phi318 = phi41;
						phi319 = phi28;
						phi100 = phi42;
						phi320 = phi35;
						phi321 = phi30 & 0xffffffff;
					}
					phi_in322 = phi90;
					phi33 = phi314;
					phi34 = phi315;
					phi44 = phi316;
					phi41 = phi318;
					phi28 = phi319;
					phi42 = phi100;
					phi35 = phi320;
					phi30 = phi321;
					phi323 = phi_in322;
					phi324 = phi32;
					phi325 = phi_in313;
					phi326 = phi33;
					phi327 = phi24;
					phi328 = phi34;
					phi329 = *(uint64_t*)(phi35 + 72);
					phi330 = phi_in317;
					phi331 = phi41;
					phi332 = phi28;
					phi333 = phi42;
					phi10 = phi35;
				}
				else 
				{
					phi323 = phi21;
					phi324 = phi32;
					phi325 = phi22;
					phi326 = phi33;
					phi327 = phi24;
					phi328 = phi34;
					phi329 = *(uint64_t*)(phi35 + 72);
					phi330 = phi26;
					phi331 = phi27;
					phi332 = phi28;
					phi333 = phi29;
					phi30 = phi30 & 0xffffffff;
					phi10 = phi35;
				}
				phi21 = phi323;
				phi18 = phi324;
				phi22 = phi325;
				phi23 = phi326;
				phi24 = phi327;
				phi_in334 = phi328;
				phi26 = phi330;
				phi27 = phi331;
				phi28 = phi332;
				phi29 = phi333;
				phi335 = *(uint32_t*)(phi10 + 68);
				phi336 = phi_in334;
				phi337 = *(uint64_t*)(phi10 + 56);
				phi_in338 = (__zext uint64_t)phi_in334;
				phi339 = *(uint32_t*)(phi10 + 68);
				phi_in340 = phi_in334;
				phi17 = *(uint32_t*)(phi10 + 68);
				phi341 = phi10;
			}
			else 
			{
				phi335 = phi5;
				phi336 = phi14;
				phi337 = *(uint64_t*)(phi10 + 56);
				phi_in338 = phi15 & 0xffffffff;
				phi339 = *(uint32_t*)(phi10 + 68);
				phi_in340 = phi18;
				phi17 = phi17;
				phi341 = phi10;
			}
			phi5 = phi335;
			phi14 = phi336;
			*(uint32_t*)(phi10 + 68) = phi339;
			phi10 = phi341;
			phi342 = *(uint64_t*)(phi10 + 48);
			phi343 = phi14;
			phi344 = phi5;
			phi345 = (__zext uint64_t)phi14;
			phi8 = phi5;
			phi346 = phi14;
		}
		else 
		{
			phi342 = *(uint64_t*)(phi10 + 48);
			phi343 = phi4;
			phi344 = phi5;
			phi345 = phi7 & 0xffffffff;
			phi8 = *anon12;
			phi346 = phi9;
		}
		if (phi342 != 8)
		{
			phi4 = phi343;
			phi5 = phi344;
			phi7 = phi345;
			phi9 = phi346;
			*(uint64_t*)(phi10 + 48) = phi342 + 4;
		}
		phi15 = phi_in338;
		phi16 = phi_in340;
		*(uint64_t*)(phi10 + 56) = phi337 + 4;
		phi25 = phi_in334;
		phi31 = phi329 + 4;
		phi38 = phi_in322;
		phi39 = phi_in313;
		phi40 = phi_in317;
		phi43 = phi43 + 4;
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
			phi13 = (__zext uint64_t)((uint32_t)phi13 - 1);
		}
		break;
		phi2 = (__zext uint64_t)((uint32_t)phi2 - 1);
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
		uint32_t anon40;
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
			uint32_t phi_in16;
			uint32_t phi17;
			uint32_t* anon18;
			uint32_t phi_in19;
			uint32_t phi21;
			uint32_t phi22;
			uint32_t phi23;
			uint64_t phi12 = phi_in11;
			uint32_t* anon13 = (uint32_t*)(phi12 + 4);
			if (*anon13 < *phi10)
			{
				*phi10 = *anon13;
				*anon13 = *phi10;
				phi_in14 = *phi10;
				phi15 = *phi10;
				phi_in16 = *anon13;
				phi17 = *anon13;
				anon18 = (uint32_t*)(phi12 - 4);
				*phi10 = *anon18;
			}
			else 
			{
				phi_in19 = *anon18;
				if (*phi10 < *anon18)
				{
					phi_in14 = *anon13 & 0xf;
					phi15 = *anon13;
					phi_in16 = *phi10 & 0xf;
					phi17 = *phi10;
					*phi10 = *anon18 & 0xf;
				}
			}
			if (*anon13 >= *phi10 && *phi10 < *anon18 || *anon13 < *phi10 && *anon13 < *anon18)
			{
				uint32_t phi_in20 = phi15;
				*anon18 = phi17;
				phi_in19 = phi_in16;
				phi21 = phi_in14;
				phi22 = *anon18;
				phi23 = phi_in20;
			}
			if (*anon13 >= *anon18 && *anon13 < *phi10)
			{
				phi_in19 = *anon18 & 0xf;
				phi21 = *phi10;
				phi22 = *anon13;
				phi23 = *phi10;
			}
			if (*anon13 >= *phi10 && *phi10 < *anon18 || *anon13 < *phi10 && *anon13 < *anon18 || *anon13 >= *anon18 && *anon13 < *phi10)
			{
				*phi10 = phi21;
				*anon13 = phi22;
				if (phi23 - *anon13 <= 4294967295)
				{
					phi_in19 = *(uint32_t*)((phi12 & 0xc) - 4);
				}
			}
			uint32_t phi24 = phi_in19;
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
			uint32_t phi31;
			uint32_t phi_in32;
			uint32_t phi33;
			uint32_t* anon34;
			uint32_t phi_in35;
			uint32_t phi37;
			uint32_t phi38;
			uint32_t* anon28 = (uint32_t*)(phi25 + 4);
			uint32_t* anon29 = (uint32_t*)phi25;
			if (*anon28 < *anon29)
			{
				*anon29 = *anon28;
				*anon28 = *anon29;
				phi30 = *anon29;
				phi31 = *anon29;
				phi_in32 = *anon28;
				phi33 = *anon28;
				anon34 = (uint32_t*)(phi25 - 4);
				*anon29 = *anon34;
			}
			else 
			{
				phi_in35 = *anon34;
				if (*anon29 < *anon34)
				{
					phi30 = *anon28 & 0xf;
					phi31 = *anon28;
					phi_in32 = *anon29 & 0xf;
					phi33 = *anon29;
					*anon29 = *anon34 & 0xf;
				}
			}
			if (*anon28 >= *anon29 && *anon29 < *anon34 || *anon28 < *anon29 && *anon28 < *anon34)
			{
				uint32_t phi_in36 = phi30;
				*anon34 = phi33;
				phi37 = phi_in32;
				phi38 = phi_in36;
				*anon28 = *anon34;
			}
			if (*anon28 >= *anon34 && *anon28 < *anon29)
			{
				phi37 = *anon34 & 0xf;
				phi38 = *anon29;
				*anon28 = *anon28;
				phi31 = *anon29;
			}
			if (*anon28 >= *anon29 && *anon29 < *anon34 || *anon28 < *anon29 && *anon28 < *anon34 || *anon28 >= *anon34 && *anon28 < *anon29)
			{
				phi_in35 = phi37;
				*anon29 = phi38;
				if (phi31 - *anon28 <= 4294967295)
				{
					phi_in35 = *(uint32_t*)((phi25 & 0xf) - 4);
				}
			}
			uint32_t phi39 = phi_in35;
			anon40 = phi39 + 1 & 0xff;
			if (anon40 != 0)
			{
				phi25 = phi25 + 12;
			}
		}
		while (anon40 != 0);
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
		uint32_t phi17;
		uint32_t anon18;
		uint32_t* anon19;
		uint32_t* anon20;
		uint32_t* anon24;
		uint64_t anon25;
		uint16_t** phi33;
		uint8_t anon34;
		uint16_t** anon38;
		uint32_t dispatch13 = 0;
		uint32_t* anon14 = (uint32_t*)0x602928;
		*anon14 = *anon14 + 1;
		puts((uint8_t*)0x401d17);
		uint32_t* anon15 = (uint32_t*)0x602490;
		*anon15 = *anon15 + 20;
		uint64_t anon16 = phi11 << 2;
		*(uint32_t*)(anon16 + 6301120) = 0;
		dispatch13 = 0;
		if (dispatch13 == 0)
		{
			puts((uint8_t*)0x401d2a);
			phi17 = 4294967196;
		}
		if (*(uint32_t*)(anon16 + 6300992) != 0)
		{
			dispatch13 = 1;
			anon18 = (uint32_t)phi12;
			anon19 = (uint32_t*)0x60292c;
			if (*(uint32_t*)(anon16 + 6300864) == 0 && anon18 == *anon19)
			{
				if (*anon14 != 0)
				{
					anon20 = (uint32_t*)0x60248c;
					*anon20 = *anon20 + 1;
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
				uint64_t anon21 = random();
				uint32_t anon22 = (uint32_t)anon21;
				*anon19 = anon22 + (((uint32_t)((anon21 & 0xffffffff) * 2290649225 >> 32) + anon22 >> 4) - (anon22 >> 31)) * 4294967266;
			}
		}
		if (*(uint32_t*)(anon16 + 6300992) != 0 && *(uint32_t*)(anon16 + 6300864) == 0)
		{
			if (anon18 == *anon19 && *anon20 == 3)
			{
				puts((uint8_t*)0x401df8);
				*anon14 = 3;
				*anon15 = *anon15 + 200;
				*anon19 = 4294967295;
			}
			if (anon18 != *anon19 || anon18 == *anon19 && *anon20 == 3 || anon18 == *anon19 && *anon20 == 3)
			{
				dispatch13 = 3;
			}
		}
		if (dispatch13 == 3)
		{
			uint64_t phi26;
			if (*(uint32_t*)(anon16 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon25 = phi11 * 12;
			anon24 = (uint32_t*)(anon25 + 6301632);
			int64_t anon23 = (__sext int64_t)*anon24;
			if (*(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
			{
				phi26 = anon23;
			}
			if (*(uint32_t*)((anon23 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon23 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi26 = (__sext int64_t)*anon24;
			}
			if (*(uint32_t*)((phi26 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi26 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi26 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon25 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon27 = (uint32_t*)(anon16 + 6301248);
			if (*anon27 == 0)
			{
				*anon15 = *anon15 + 10;
				*anon27 = 1;
			}
		}
		struct _IO_FILE** anon29 = (struct _IO_FILE**)0x602480;
		uint32_t anon28 = _IO_getc(*anon29);
		uint8_t anon31 = (uint8_t)anon28;
		bool anon30 = anon31 == 108;
		if (anon30)
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
		bool anon35 = anon31 == 105;
		if (anon35)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon36 = anon31 == 115;
		if (anon36)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon37 = anon31 == 115 || anon31 == 108 || anon31 == 105 || anon31 == 113;
		if (!anon37 || anon31 == 105 || anon31 == 115)
		{
			anon38 = __ctype_b_loc();
			phi33 = anon38;
		}
		int64_t anon40 = (__sext int64_t)anon31;
		uint8_t anon39 = *(uint8_t*)(*(uint64_t*)anon38 + (anon40 >> 7 | 1)) & 8;
		if (anon39 != 0 && anon35 || anon39 != 0 && anon36 || anon39 != 0 && (!anon37) || anon34 != 0 && anon30)
		{
			uint32_t phi42;
			uint32_t anon41 = _IO_getc(*anon29);
			uint32_t anon43 = (uint32_t)(anon40 + 4294967248);
			phi42 = anon43;
			uint32_t anon44 = anon41 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi33 + ((__zext uint64_t)anon44 << 1 | 1)) & 8) != 0)
			{
				phi42 = anon43 * 10 + anon44 - 48;
			}
			if (*anon24 != phi42 && *(uint32_t*)(anon25 + 6301636) != phi42)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon24 == phi42 || *anon24 != phi42 && *(uint32_t*)(anon25 + 6301636) == phi42 || *anon24 != phi42 && *(uint32_t*)(anon25 + 6301636) != phi42 && *(uint32_t*)(anon25 + 6301640) == phi42)
			{
				int64_t anon45 = (__sext int64_t)phi42;
				phi_in9 = anon45;
				phi_in10 = anon45;
			}
			break;
		}
		uint32_t* anon46 = (uint32_t*)(anon16 + 6301504);
		if (*anon46 != 0 && *(uint32_t*)(anon16 + 6300992) != 0 && *(uint32_t*)(anon16 + 6300864) == 0 && (anon18 != *anon19 || anon18 == *anon19 && *anon20 == 3 || anon18 == *anon19 && *anon20 == 3))
		{
			*anon46 = 0;
			uint64_t anon47 = random();
			uint32_t anon48 = (uint32_t)anon47;
			*(uint32_t*)(((__sext int64_t)(anon48 + (((uint32_t)((anon47 & 0xffffffff) * 2290649225 >> 32) + anon48 >> 4) - (anon48 >> 31)) * 4294967266) << 2) + 6301504) = 1;
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
			phi17 = 4294967246;
		}
		if (dispatch13 == 1 || dispatch13 == 0)
		{
			*anon15 = *anon15 + phi17;
		}
		if (dispatch13 == 1 || dispatch13 == 0 || anon31 == 113)
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
