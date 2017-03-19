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
	uint32_t phi18;
	uint32_t* phi_in1 = (uint32_t*)0x6027c4;
	uint64_t phi_in2 = 6301636;
	do
	{
		uint32_t phi_in6;
		uint32_t phi_in7;
		uint32_t phi_in8;
		uint32_t* anon9;
		uint32_t phi_in10;
		uint32_t phi_in11;
		uint32_t phi_in12;
		uint32_t* phi3 = phi_in1;
		uint64_t phi4 = phi_in2;
		uint32_t* anon5 = (uint32_t*)(phi4 + 4);
		if (*anon5 < *phi3)
		{
			*anon5 = *phi3;
			*phi3 = *anon5;
			phi_in6 = *phi3;
			phi_in7 = *anon5;
			anon9 = (uint32_t*)(phi4 - 4);
			phi_in8 = *anon9;
			phi_in10 = *phi3;
			phi_in11 = *anon5;
		}
		else 
		{
			phi_in6 = *anon5;
			phi_in7 = *phi3;
			phi_in12 = *anon9;
		}
		if (*anon5 < *phi3 && *anon5 < *anon9 || *anon5 >= *phi3 && *phi3 < *anon9)
		{
			uint32_t phi13 = phi_in6;
			uint32_t phi14 = phi_in7;
			*phi3 = *anon9;
			*anon9 = phi14;
			phi_in8 = phi14;
			phi_in10 = phi13;
			phi_in11 = *anon9;
		}
		if (*anon5 < *phi3 && *anon5 < *anon9 || *anon5 >= *phi3 && *phi3 < *anon9 || *anon5 >= *anon9 && *anon5 < *phi3)
		{
			uint32_t phi15 = phi_in8;
			uint32_t phi16 = phi_in10;
			uint32_t phi17 = phi_in11;
			phi_in12 = phi15;
			if (phi17 > phi16)
			{
				*anon5 = phi17;
				*phi3 = phi16;
				phi_in12 = *anon9;
			}
		}
		phi18 = phi_in12;
		if (phi18 != 255)
		{
			uint64_t anon19 = phi4 + 12;
			phi_in1 = (uint32_t*)anon19;
			phi_in2 = anon19;
			if (phi4 == 6301984)
			{
				break;
			}
		}
	}
	while (phi18 != 255);
	return;
}
void w(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4)
{
	struct { uint8_t field0[4]; uint32_t field1; uint64_t field2; uint8_t field3[8]; uint32_t field4; uint32_t field5; uint8_t field6[48]; uint64_t field7; uint32_t field8; uint8_t field9[4]; uint64_t field10; uint64_t field11; uint32_t field12; uint8_t field13[8]; uint32_t field14; uint8_t field15[56]; uint64_t field16; } alloca1;
	uint32_t phi_in5;
	uint64_t phi_in11;
	alloca1.field16 = arg0;
	uint64_t anon2 = arg2 << 32;
	uint32_t anon3 = (uint32_t)arg4;
	*(uint32_t*)((anon2 >> 30) + 6300992) = anon3;
	alloca1.field2 = (anon2 >> 32) * 12;
	alloca1.field1 = anon3 + 2;
	alloca1.field4 = anon3 + 3;
	alloca1.field5 = anon3 + 4;
	uint32_t phi_in4 = anon3;
	uint32_t anon6 = anon3 + 1;
	phi_in5 = anon6;
	uint64_t phi_in7 = arg4 & 0xffffffff;
	uint32_t phi_in8 = anon6;
	uint32_t phi_in9 = anon3;
	uint64_t phi_in10 = 0;
	uint64_t anon12 = (uint64_t)&alloca1;
	phi_in11 = anon12;
	while (true)
	{
		uint32_t phi_in22;
		uint32_t phi_in23;
		uint64_t phi_in24;
		uint32_t phi_in25;
		uint32_t phi_in26;
		uint32_t phi_in27;
		uint64_t phi_in28;
		uint64_t phi_in29;
		uint32_t phi_in40;
		uint32_t phi_in41;
		uint32_t phi_in42;
		uint32_t phi_in43;
		uint32_t phi_in44;
		uint32_t phi_in45;
		uint32_t phi_in46;
		uint32_t phi_in47;
		uint32_t phi_in48;
		uint32_t phi_in49;
		uint64_t phi_in50;
		uint64_t phi_in51;
		uint64_t phi_in52;
		uint32_t phi_in68;
		uint32_t phi_in69;
		uint32_t phi_in70;
		uint32_t phi_in71;
		uint32_t phi_in72;
		uint32_t phi_in73;
		uint32_t phi_in74;
		uint32_t phi_in75;
		uint32_t phi_in76;
		uint32_t phi_in77;
		uint64_t phi_in78;
		uint64_t phi_in79;
		uint64_t phi_in80;
		uint64_t phi_in81;
		uint64_t phi93;
		uint32_t phi619;
		uint32_t phi620;
		uint32_t phi621;
		uint32_t phi622;
		uint32_t phi623;
		uint32_t phi624;
		uint64_t phi625;
		uint32_t phi626;
		uint32_t phi627;
		uint32_t phi628;
		uint32_t phi629;
		uint64_t phi630;
		uint64_t phi631;
		uint32_t phi645;
		uint32_t phi646;
		uint32_t phi647;
		uint32_t phi648;
		uint32_t phi649;
		uint32_t phi650;
		uint64_t phi651;
		uint32_t phi652;
		uint32_t phi653;
		uint32_t phi654;
		uint32_t phi655;
		uint64_t phi656;
		uint64_t phi657;
		uint32_t phi666;
		uint32_t phi667;
		uint64_t phi668;
		uint64_t phi669;
		uint32_t phi670;
		uint32_t phi671;
		uint32_t phi672;
		uint64_t phi673;
		uint64_t phi_in674;
		uint32_t phi_in675;
		uint32_t phi_in676;
		uint64_t phi_in677;
		uint32_t phi_in678;
		uint32_t phi_in679;
		uint64_t phi_in680;
		uint32_t phi13 = phi_in4;
		uint32_t phi14 = phi_in5;
		uint64_t phi15 = phi_in7;
		uint32_t phi16 = phi_in8;
		uint32_t phi17 = phi_in9;
		uint64_t phi18 = phi_in10;
		uint64_t phi19 = phi_in11;
		int64_t anon21 = (__sext int64_t)*(uint32_t*)(phi18 + *(uint64_t*)(phi19 + 8) + 6301632);
		uint32_t* anon20 = (uint32_t*)((anon21 << 2) + 6300992);
		if (phi17 < *anon20)
		{
			uint32_t phi_in658;
			uint32_t phi_in659;
			uint64_t phi_in660;
			uint64_t phi_in661;
			uint32_t phi_in662;
			uint32_t phi_in663;
			uint32_t phi_in664;
			uint64_t phi_in665;
			*anon20 = phi16;
			*(uint64_t*)(phi19 + 48) = phi18;
			*(uint64_t*)(phi19 + 16) = anon21 * 12;
			*(uint32_t*)(phi19 + 40) = (uint32_t)phi15 + 5;
			phi_in22 = phi14;
			phi_in23 = phi13;
			phi_in24 = (__zext uint64_t)phi13;
			phi_in25 = phi14;
			phi_in26 = phi13;
			phi_in27 = phi14;
			phi_in28 = 0;
			phi_in29 = phi19;
			uint32_t phi30 = phi_in22;
			uint32_t phi31 = phi_in23;
			uint64_t phi32 = phi_in24;
			uint32_t phi33 = phi_in25;
			uint32_t phi34 = phi_in26;
			uint32_t phi35 = phi_in27;
			uint64_t phi36 = phi_in28;
			uint64_t phi37 = phi_in29;
			int64_t anon39 = (__sext int64_t)*(uint32_t*)(phi36 + *(uint64_t*)(phi37 + 16) + 6301632);
			uint32_t* anon38 = (uint32_t*)((anon39 << 2) + 6300992);
			if (phi35 < *anon38)
			{
				uint32_t phi_in632;
				uint32_t phi_in633;
				uint32_t phi_in634;
				uint32_t phi_in635;
				uint32_t phi_in636;
				uint32_t phi_in637;
				uint64_t phi_in638;
				uint32_t phi_in639;
				uint32_t phi_in640;
				uint32_t phi_in641;
				uint32_t phi_in642;
				uint64_t phi_in643;
				uint64_t phi_in644;
				*(uint64_t*)(phi37 + 56) = phi36;
				*(uint32_t*)(phi37 + 68) = phi33;
				*anon38 = *(uint32_t*)(phi37 + 4);
				*(uint64_t*)(phi37 + 32) = anon39 * 12;
				*(uint32_t*)(phi37 + 44) = (uint32_t)phi32 + 6;
				phi_in40 = phi34;
				phi_in41 = phi34;
				phi_in42 = phi34;
				phi_in43 = phi34;
				phi_in44 = phi34;
				phi_in45 = phi34;
				phi_in46 = phi34;
				phi_in47 = phi34;
				phi_in48 = phi34;
				phi_in49 = phi34;
				phi_in50 = (__zext uint64_t)phi34;
				phi_in51 = 0;
				phi_in52 = phi37;
				uint32_t phi53 = phi_in40;
				uint32_t phi54 = phi_in41;
				uint32_t phi55 = phi_in42;
				uint32_t phi56 = phi_in43;
				uint32_t phi57 = phi_in44;
				uint32_t phi58 = phi_in45;
				uint32_t phi59 = phi_in46;
				uint32_t phi60 = phi_in47;
				uint32_t phi61 = phi_in48;
				uint32_t phi62 = phi_in49;
				uint64_t phi63 = phi_in50;
				uint64_t phi64 = phi_in51;
				uint64_t phi65 = phi_in52;
				int64_t anon67 = (__sext int64_t)*(uint32_t*)(phi64 + *(uint64_t*)(phi65 + 32) + 6301632);
				uint32_t* anon66 = (uint32_t*)((anon67 << 2) + 6300992);
				if (*(uint32_t*)(phi65 + 4) < *anon66)
				{
					uint32_t phi_in606;
					uint32_t phi_in607;
					uint32_t phi_in608;
					uint32_t phi_in609;
					uint32_t phi_in610;
					uint32_t phi_in611;
					uint64_t phi_in612;
					uint32_t phi_in613;
					uint32_t phi_in614;
					uint32_t phi_in615;
					uint32_t phi_in616;
					uint64_t phi_in617;
					uint64_t phi_in618;
					*(uint64_t*)(phi65 + 72) = phi64;
					*anon66 = *(uint32_t*)(phi65 + 24);
					*(uint32_t*)(phi65 + 64) = (uint32_t)phi63 + 7;
					phi_in68 = phi53;
					phi_in69 = phi54;
					phi_in70 = phi55;
					phi_in71 = phi56;
					phi_in72 = phi57;
					phi_in73 = phi58;
					phi_in74 = phi59;
					phi_in75 = phi60;
					phi_in76 = phi61;
					phi_in77 = phi62;
					phi_in78 = phi65;
					phi_in79 = 0;
					phi_in80 = anon67 * 12;
					phi_in81 = phi63;
					uint32_t phi82 = phi_in68;
					uint32_t phi83 = phi_in69;
					uint32_t phi84 = phi_in70;
					uint32_t phi85 = phi_in71;
					uint32_t phi86 = phi_in72;
					uint32_t phi87 = phi_in73;
					uint32_t phi88 = phi_in74;
					uint32_t phi89 = phi_in75;
					uint32_t phi90 = phi_in76;
					uint32_t phi91 = phi_in77;
					uint64_t phi92 = phi_in78;
					phi93 = phi_in79;
					uint64_t phi94 = phi_in80;
					uint64_t phi95 = phi_in81;
					int64_t anon97 = (__sext int64_t)*(uint32_t*)(phi93 + phi94 + 6301632);
					uint32_t* anon96 = (uint32_t*)((anon97 << 2) + 6300992);
					if (*(uint32_t*)(phi92 + 24) < *anon96)
					{
						uint32_t phi_in101;
						uint64_t phi588;
						*anon96 = *(uint32_t*)(phi92 + 28);
						uint32_t phi_in98 = phi82;
						uint32_t phi_in99 = phi83;
						uint32_t phi_in100 = phi84;
						uint32_t anon102 = (uint32_t)phi95 + 8;
						phi_in101 = anon102;
						uint32_t phi_in103 = phi85;
						uint32_t phi_in104 = phi86;
						uint32_t phi_in105 = anon102;
						uint32_t phi_in106 = phi87;
						uint32_t phi_in107 = phi88;
						uint32_t phi_in108 = anon102;
						uint32_t phi_in109 = anon102;
						uint32_t phi_in110 = anon102;
						uint32_t phi_in111 = phi89;
						uint32_t phi_in112 = anon102;
						uint32_t phi_in113 = anon102;
						uint32_t phi_in114 = phi90;
						uint32_t phi_in115 = anon102;
						uint32_t phi_in116 = anon102;
						uint32_t phi_in117 = phi91;
						uint64_t phi_in118 = phi94;
						uint32_t phi_in119 = anon102;
						uint32_t phi_in120 = anon102;
						uint32_t phi_in121 = anon102;
						uint64_t phi_in122 = phi92;
						uint64_t phi_in123 = 0;
						uint64_t phi_in124 = anon97 * 12;
						uint64_t phi_in125 = phi95;
						do
						{
							uint32_t phi126 = phi_in98;
							uint32_t phi127 = phi_in99;
							uint32_t phi128 = phi_in100;
							uint32_t phi129 = phi_in101;
							uint32_t phi130 = phi_in103;
							uint32_t phi131 = phi_in104;
							uint32_t phi132 = phi_in105;
							uint32_t phi133 = phi_in106;
							uint32_t phi134 = phi_in107;
							uint32_t phi135 = phi_in108;
							uint32_t phi136 = phi_in109;
							uint32_t phi137 = phi_in110;
							uint32_t phi138 = phi_in111;
							uint32_t phi139 = phi_in112;
							uint32_t phi140 = phi_in113;
							uint32_t phi141 = phi_in114;
							uint32_t phi142 = phi_in115;
							uint32_t phi143 = phi_in116;
							uint32_t phi144 = phi_in117;
							uint64_t phi145 = phi_in118;
							uint32_t phi146 = phi_in119;
							uint32_t phi147 = phi_in120;
							uint32_t phi148 = phi_in121;
							uint64_t phi149 = phi_in122;
							uint64_t phi150 = phi_in123;
							uint64_t phi151 = phi_in124;
							uint64_t phi152 = phi_in125;
							uint32_t phi_in153 = phi126;
							uint32_t phi_in154 = phi127;
							uint32_t phi_in155 = phi128;
							uint32_t phi_in156 = phi129;
							uint32_t phi_in157 = phi130;
							uint32_t phi_in158 = phi131;
							uint32_t phi_in159 = phi132;
							uint32_t phi_in160 = phi133;
							uint64_t phi_in161 = phi151;
							uint64_t phi_in162 = phi150;
							uint32_t phi_in163 = phi134;
							uint32_t phi_in164 = phi135;
							uint32_t phi_in165 = phi136;
							uint32_t phi_in166 = phi137;
							uint32_t phi_in167 = phi138;
							uint32_t phi_in168 = phi139;
							uint32_t phi_in169 = phi140;
							uint32_t phi_in170 = phi141;
							uint32_t phi_in171 = phi142;
							uint32_t phi_in172 = phi143;
							uint32_t phi_in173 = phi144;
							uint64_t phi_in174 = phi145;
							uint32_t phi_in175 = phi146;
							uint32_t phi_in176 = phi147;
							uint32_t phi_in177 = phi148;
							uint64_t phi_in178 = phi149;
							uint64_t phi_in179 = phi152;
							int64_t anon181 = (__sext int64_t)*(uint32_t*)(phi150 + phi151 + 6301632);
							uint32_t* anon180 = (uint32_t*)((anon181 << 2) + 6300992);
							if (*(uint32_t*)(phi149 + 28) < *anon180)
							{
								uint64_t phi210;
								*anon180 = *(uint32_t*)(phi149 + 40);
								*(uint32_t*)(phi149 + 120) = (uint32_t)phi152 + 9;
								uint64_t phi_in182 = 0;
								uint32_t phi_in183 = phi126;
								uint32_t phi_in184 = phi127;
								uint32_t phi_in185 = phi128;
								uint32_t phi_in186 = phi129;
								uint32_t phi_in187 = phi130;
								uint32_t phi_in188 = phi131;
								uint32_t phi_in189 = phi132;
								uint32_t phi_in190 = phi133;
								uint32_t phi_in191 = phi134;
								uint32_t phi_in192 = phi135;
								uint32_t phi_in193 = phi136;
								uint32_t phi_in194 = phi137;
								uint32_t phi_in195 = phi138;
								uint32_t phi_in196 = phi139;
								uint32_t phi_in197 = phi140;
								uint32_t phi_in198 = phi141;
								uint32_t phi_in199 = phi142;
								uint32_t phi_in200 = phi143;
								uint64_t phi_in201 = phi150;
								uint32_t phi_in202 = phi144;
								uint64_t phi_in203 = phi145;
								uint64_t phi_in204 = phi151;
								uint32_t phi_in205 = phi146;
								uint32_t phi_in206 = phi147;
								uint32_t phi_in207 = phi148;
								uint64_t phi_in208 = phi149;
								uint64_t phi_in209 = phi152 & 0xffffffff;
								do
								{
									phi210 = phi_in182;
									uint32_t phi211 = phi_in183;
									uint32_t phi212 = phi_in184;
									uint32_t phi213 = phi_in185;
									uint32_t phi214 = phi_in186;
									uint32_t phi215 = phi_in187;
									uint32_t phi216 = phi_in188;
									uint32_t phi217 = phi_in189;
									uint32_t phi218 = phi_in190;
									uint32_t phi219 = phi_in191;
									uint32_t phi220 = phi_in192;
									uint32_t phi221 = phi_in193;
									uint32_t phi222 = phi_in194;
									uint32_t phi223 = phi_in195;
									uint32_t phi224 = phi_in196;
									uint32_t phi225 = phi_in197;
									uint32_t phi226 = phi_in198;
									uint32_t phi227 = phi_in199;
									uint32_t phi228 = phi_in200;
									uint64_t phi229 = phi_in201;
									uint32_t phi230 = phi_in202;
									uint64_t phi231 = phi_in203;
									uint64_t phi232 = phi_in204;
									uint32_t phi233 = phi_in205;
									uint32_t phi234 = phi_in206;
									uint32_t phi235 = phi_in207;
									uint64_t phi236 = phi_in208;
									uint64_t phi237 = phi_in209;
									uint32_t phi_in238 = phi211;
									uint32_t phi_in239 = phi212;
									uint32_t phi_in240 = phi213;
									uint32_t phi_in241 = phi214;
									uint32_t phi_in242 = phi215;
									uint32_t phi_in243 = phi216;
									uint32_t phi_in244 = phi217;
									uint32_t phi_in245 = phi218;
									uint32_t phi_in246 = phi219;
									uint32_t phi_in247 = phi220;
									uint32_t phi_in248 = phi221;
									uint32_t phi_in249 = phi222;
									uint32_t phi_in250 = phi223;
									uint32_t phi_in251 = phi224;
									uint32_t phi_in252 = phi225;
									uint32_t phi_in253 = phi226;
									uint32_t phi_in254 = phi227;
									uint32_t phi_in255 = phi228;
									uint64_t phi_in256 = phi229;
									uint32_t phi_in257 = phi230;
									uint64_t phi_in258 = phi231;
									uint64_t phi_in259 = phi232;
									uint32_t phi_in260 = phi233;
									uint32_t phi_in261 = phi234;
									uint32_t phi_in262 = phi235;
									uint64_t phi_in263 = phi236;
									uint64_t phi_in264 = phi237;
									int64_t anon266 = (__sext int64_t)*(uint32_t*)(phi210 + anon181 * 12 + 6301632);
									uint32_t* anon265 = (uint32_t*)((anon266 << 2) + 6300992);
									if (*(uint32_t*)(phi236 + 40) < *anon265)
									{
										uint64_t phi295;
										*anon265 = *(uint32_t*)(phi236 + 44);
										uint64_t phi_in267 = 0;
										uint32_t phi_in268 = phi211;
										uint32_t phi_in269 = phi212;
										uint32_t phi_in270 = phi213;
										uint32_t phi_in271 = phi214;
										uint32_t phi_in272 = phi215;
										uint32_t phi_in273 = phi216;
										uint32_t phi_in274 = phi217;
										uint32_t phi_in275 = phi218;
										uint32_t phi_in276 = phi219;
										uint32_t phi_in277 = phi220;
										uint32_t phi_in278 = phi221;
										uint32_t phi_in279 = phi222;
										uint32_t phi_in280 = phi223;
										uint32_t phi_in281 = phi224;
										uint32_t phi_in282 = phi225;
										uint32_t phi_in283 = phi226;
										uint32_t phi_in284 = phi227;
										uint32_t phi_in285 = phi228;
										uint64_t phi_in286 = phi229;
										uint32_t phi_in287 = phi230;
										uint64_t phi_in288 = phi231;
										uint64_t phi_in289 = phi232;
										uint32_t phi_in290 = phi233;
										uint32_t phi_in291 = phi234;
										uint32_t phi_in292 = phi235;
										uint64_t phi_in293 = phi236;
										uint64_t phi_in294 = phi237;
										do
										{
											phi295 = phi_in267;
											uint32_t phi296 = phi_in268;
											uint32_t phi297 = phi_in269;
											uint32_t phi298 = phi_in270;
											uint32_t phi299 = phi_in271;
											uint32_t phi300 = phi_in272;
											uint32_t phi301 = phi_in273;
											uint32_t phi302 = phi_in274;
											uint32_t phi303 = phi_in275;
											uint32_t phi304 = phi_in276;
											uint32_t phi305 = phi_in277;
											uint32_t phi306 = phi_in278;
											uint32_t phi307 = phi_in279;
											uint32_t phi308 = phi_in280;
											uint32_t phi309 = phi_in281;
											uint32_t phi310 = phi_in282;
											uint32_t phi311 = phi_in283;
											uint32_t phi312 = phi_in284;
											uint32_t phi313 = phi_in285;
											uint64_t phi314 = phi_in286;
											uint32_t phi315 = phi_in287;
											uint64_t phi316 = phi_in288;
											uint64_t phi317 = phi_in289;
											uint32_t phi318 = phi_in290;
											uint32_t phi319 = phi_in291;
											uint32_t phi320 = phi_in292;
											uint64_t phi321 = phi_in293;
											uint64_t phi322 = phi_in294;
											uint32_t phi_in323 = phi296;
											uint32_t phi_in324 = phi297;
											uint32_t phi_in325 = phi298;
											uint32_t phi_in326 = phi299;
											uint32_t phi_in327 = phi300;
											uint32_t phi_in328 = phi301;
											uint32_t phi_in329 = phi302;
											uint32_t phi_in330 = phi303;
											uint32_t phi_in331 = phi304;
											uint32_t phi_in332 = phi305;
											uint32_t phi_in333 = phi306;
											uint32_t phi_in334 = phi307;
											uint32_t phi_in335 = phi308;
											uint32_t phi_in336 = phi309;
											uint32_t phi_in337 = phi310;
											uint32_t phi_in338 = phi311;
											uint32_t phi_in339 = phi312;
											uint32_t phi_in340 = phi313;
											uint64_t phi_in341 = phi314;
											uint32_t phi_in342 = phi315;
											uint64_t phi_in343 = phi316;
											uint64_t phi_in344 = phi317;
											uint32_t phi_in345 = phi318;
											uint32_t phi_in346 = phi319;
											uint32_t phi_in347 = phi320;
											uint64_t phi_in348 = phi321;
											uint64_t phi_in349 = phi322;
											int64_t anon351 = (__sext int64_t)*(uint32_t*)(phi295 + anon266 * 12 + 6301632);
											uint32_t* anon350 = (uint32_t*)((anon351 << 2) + 6300992);
											if (*(uint32_t*)(phi321 + 44) < *anon350)
											{
												*anon350 = *(uint32_t*)(phi321 + 64);
												uint32_t phi_in352 = phi296;
												uint32_t phi_in353 = phi297;
												uint32_t phi_in354 = phi298;
												uint32_t phi_in355 = phi299;
												uint64_t phi_in356 = phi321;
												uint32_t phi_in357 = phi300;
												uint32_t phi_in358 = phi301;
												uint32_t phi_in359 = phi302;
												uint32_t phi_in360 = phi303;
												uint32_t phi_in361 = phi304;
												uint32_t phi_in362 = phi305;
												uint32_t phi_in363 = phi306;
												uint32_t phi_in364 = phi307;
												uint32_t phi_in365 = phi308;
												uint32_t phi_in366 = phi309;
												uint32_t phi_in367 = phi310;
												uint32_t phi_in368 = phi311;
												uint32_t phi_in369 = phi312;
												uint32_t phi_in370 = phi313;
												uint64_t phi_in371 = phi314;
												uint32_t phi_in372 = phi315;
												uint64_t phi_in373 = phi316;
												uint64_t phi_in374 = phi317;
												uint32_t phi_in375 = phi318;
												uint32_t phi_in376 = phi319;
												uint32_t phi_in377 = phi320;
												uint64_t phi_in378 = phi322;
												int64_t anon381 = anon351 * 12;
												int64_t anon380 = (__sext int64_t)*(uint32_t*)(anon381 + 6301636);
												uint32_t* anon379 = (uint32_t*)((anon380 << 2) + 6300992);
												if (*(uint32_t*)(phi321 + 64) < *anon379)
												{
													*anon379 = phi307;
													uint32_t phi_in382 = phi296;
													uint32_t phi_in383 = phi297;
													uint32_t phi_in384 = phi298;
													uint32_t phi_in385 = phi299;
													uint32_t phi_in386 = phi300;
													uint32_t phi_in387 = phi301;
													uint64_t phi_in388 = phi321;
													uint32_t phi_in389 = phi302;
													uint32_t phi_in390 = phi303;
													uint64_t phi_in391 = anon380;
													uint32_t phi_in392 = phi304;
													uint32_t phi_in393 = phi308;
													uint32_t phi_in394 = phi311;
													uint64_t phi_in395 = phi314;
													uint32_t phi_in396 = phi315;
													uint64_t phi_in397 = phi316;
													uint64_t phi_in398 = phi317;
													uint64_t phi_in399 = phi322;
													if (phi306 < phi307)
													{
														*(uint32_t*)(phi321 + 124) = phi305;
														*(uint64_t*)(phi321 + 112) = phi317;
														*(uint64_t*)(phi321 + 104) = phi316;
														*(uint32_t*)(phi321 + 96) = phi304;
														*(uint64_t*)(phi321 + 88) = phi314;
														*(uint64_t*)(phi321 + 80) = anon380;
														uint64_t anon400 = (__zext uint64_t)phi307;
														w(4197873, anon12, (__sext int64_t)phi307, anon400, anon400);
														phi_in382 = *(uint32_t*)(arg1 - 96);
														phi_in383 = *(uint32_t*)(arg1 - 96);
														phi_in384 = *(uint32_t*)(arg1 - 96);
														phi_in385 = *(uint32_t*)(arg1 - 68);
														phi_in386 = *(uint32_t*)(arg1 - 96);
														phi_in387 = *(uint32_t*)(arg1 - 96);
														phi_in388 = anon12;
														phi_in389 = *(uint32_t*)(arg1 - 68);
														phi_in390 = *(uint32_t*)(arg1 - 96);
														phi_in391 = *(uint64_t*)(arg1 - 112);
														phi_in392 = *(uint32_t*)(arg1 - 96);
														phi_in393 = *(uint32_t*)(arg1 - 96);
														phi_in394 = *(uint32_t*)(arg1 - 96);
														phi_in395 = *(uint64_t*)(arg1 - 104);
														phi_in396 = *(uint32_t*)(arg1 - 96);
														phi_in397 = *(uint64_t*)(arg1 - 88);
														phi_in398 = *(uint64_t*)(arg1 - 80);
														phi_in399 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi401 = phi_in382;
													uint32_t phi402 = phi_in383;
													uint32_t phi403 = phi_in384;
													uint32_t phi404 = phi_in385;
													uint32_t phi405 = phi_in386;
													uint32_t phi406 = phi_in387;
													uint64_t phi407 = phi_in388;
													uint32_t phi408 = phi_in389;
													uint32_t phi409 = phi_in390;
													uint64_t phi410 = phi_in391;
													uint32_t phi411 = phi_in392;
													uint32_t phi412 = phi_in393;
													uint32_t phi413 = phi_in394;
													uint64_t phi414 = phi_in395;
													uint32_t phi415 = phi_in396;
													uint64_t phi416 = phi_in397;
													uint64_t phi417 = phi_in398;
													uint64_t phi418 = phi_in399;
													uint32_t phi_in419 = phi401;
													uint32_t phi_in420 = phi402;
													uint32_t phi_in421 = phi403;
													uint32_t phi_in422 = phi404;
													uint32_t phi_in423 = phi405;
													uint64_t phi_in424 = phi407;
													uint32_t phi_in425 = phi406;
													uint32_t phi_in426 = phi408;
													uint32_t phi_in427 = phi409;
													uint64_t phi_in428 = phi410;
													uint32_t phi_in429 = phi411;
													uint32_t phi_in430 = phi412;
													uint32_t phi_in431 = phi413;
													uint64_t phi_in432 = phi414;
													uint32_t phi_in433 = phi415;
													uint64_t phi_in434 = phi416;
													uint64_t phi_in435 = phi417;
													uint64_t phi_in436 = phi418;
													int64_t anon437 = (__sext int64_t)*(uint32_t*)(phi410 * 12 + 6301636);
													if (phi408 < *(uint32_t*)((anon437 << 2) + 6300992))
													{
														*(uint32_t*)(phi407 + 124) = phi408;
														*(uint64_t*)(phi407 + 112) = phi417;
														*(uint64_t*)(phi407 + 104) = phi416;
														*(uint32_t*)(phi407 + 96) = phi406;
														*(uint64_t*)(phi407 + 88) = phi414;
														*(uint64_t*)(phi407 + 80) = phi410;
														uint64_t anon438 = (__zext uint64_t)*(uint32_t*)(phi407 + 120);
														w(4197793, anon12, anon437, anon438, anon438);
														phi_in419 = *(uint32_t*)(arg1 - 96);
														phi_in420 = *(uint32_t*)(arg1 - 96);
														phi_in421 = *(uint32_t*)(arg1 - 96);
														phi_in422 = alloca1.field14;
														phi_in423 = *(uint32_t*)(arg1 - 96);
														phi_in424 = anon12;
														phi_in425 = *(uint32_t*)(arg1 - 96);
														phi_in426 = alloca1.field14;
														phi_in427 = *(uint32_t*)(arg1 - 96);
														phi_in428 = *(uint64_t*)(arg1 - 112);
														phi_in429 = *(uint32_t*)(arg1 - 96);
														phi_in430 = *(uint32_t*)(arg1 - 96);
														phi_in431 = *(uint32_t*)(arg1 - 96);
														phi_in432 = *(uint64_t*)(arg1 - 104);
														phi_in433 = *(uint32_t*)(arg1 - 96);
														phi_in434 = *(uint64_t*)(arg1 - 88);
														phi_in435 = *(uint64_t*)(arg1 - 80);
														phi_in436 = (__zext uint64_t)*(uint32_t*)(arg1 - 96);
													}
													uint32_t phi439 = phi_in419;
													uint32_t phi440 = phi_in420;
													uint32_t phi441 = phi_in421;
													uint32_t phi442 = phi_in422;
													uint32_t phi443 = phi_in423;
													uint64_t phi444 = phi_in424;
													uint32_t phi445 = phi_in425;
													uint32_t phi446 = phi_in426;
													uint32_t phi447 = phi_in427;
													uint64_t phi448 = phi_in428;
													uint32_t phi449 = phi_in429;
													uint32_t phi450 = phi_in430;
													uint32_t phi451 = phi_in431;
													uint64_t phi452 = phi_in432;
													uint32_t phi453 = phi_in433;
													uint64_t phi454 = phi_in434;
													uint64_t phi455 = phi_in435;
													uint64_t phi456 = phi_in436;
													phi_in352 = phi439;
													phi_in353 = phi440;
													phi_in354 = phi441;
													phi_in355 = phi442;
													phi_in356 = phi444;
													phi_in357 = phi443;
													phi_in358 = phi445;
													phi_in359 = phi446;
													phi_in360 = phi447;
													phi_in361 = phi449;
													phi_in362 = phi446;
													phi_in363 = phi446;
													phi_in364 = phi446;
													phi_in365 = phi450;
													phi_in366 = phi446;
													phi_in367 = phi446;
													phi_in368 = phi451;
													phi_in369 = phi446;
													phi_in370 = phi446;
													phi_in371 = phi452;
													phi_in372 = phi453;
													phi_in373 = phi454;
													phi_in374 = phi455;
													phi_in375 = phi446;
													phi_in376 = phi446;
													phi_in377 = phi446;
													phi_in378 = phi456;
													int64_t anon457 = (__sext int64_t)*(uint32_t*)(phi448 * 12 + 6301640);
													if (phi446 < *(uint32_t*)((anon457 << 2) + 6300992))
													{
														*(uint32_t*)(phi444 + 112) = phi446;
														*(uint64_t*)(phi444 + 104) = phi455;
														*(uint64_t*)(phi444 + 96) = phi454;
														*(uint32_t*)(phi444 + 88) = phi443;
														*(uint64_t*)(phi444 + 80) = phi452;
														uint64_t anon458 = (__zext uint64_t)*(uint32_t*)(phi444 + 120);
														w(4197395, anon12, anon457, anon458, anon458);
														phi_in352 = *(uint32_t*)(arg1 - 104);
														phi_in353 = *(uint32_t*)(arg1 - 104);
														phi_in354 = *(uint32_t*)(arg1 - 104);
														phi_in355 = *(uint32_t*)(arg1 - 80);
														phi_in356 = anon12;
														phi_in357 = *(uint32_t*)(arg1 - 104);
														phi_in358 = *(uint32_t*)(arg1 - 104);
														phi_in359 = *(uint32_t*)(arg1 - 80);
														phi_in360 = *(uint32_t*)(arg1 - 104);
														phi_in361 = *(uint32_t*)(arg1 - 104);
														phi_in362 = *(uint32_t*)(arg1 - 80);
														phi_in363 = *(uint32_t*)(arg1 - 80);
														phi_in364 = *(uint32_t*)(arg1 - 80);
														phi_in365 = *(uint32_t*)(arg1 - 104);
														phi_in366 = *(uint32_t*)(arg1 - 80);
														phi_in367 = *(uint32_t*)(arg1 - 80);
														phi_in368 = *(uint32_t*)(arg1 - 104);
														phi_in369 = *(uint32_t*)(arg1 - 80);
														phi_in370 = *(uint32_t*)(arg1 - 80);
														phi_in371 = *(uint64_t*)(arg1 - 112);
														phi_in372 = *(uint32_t*)(arg1 - 104);
														phi_in373 = *(uint64_t*)(arg1 - 96);
														phi_in374 = *(uint64_t*)(arg1 - 88);
														phi_in375 = *(uint32_t*)(arg1 - 80);
														phi_in376 = *(uint32_t*)(arg1 - 80);
														phi_in377 = *(uint32_t*)(arg1 - 80);
														phi_in378 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
												}
												uint32_t phi459 = phi_in352;
												uint32_t phi460 = phi_in353;
												uint32_t phi461 = phi_in354;
												uint32_t phi462 = phi_in355;
												uint64_t phi463 = phi_in356;
												uint32_t phi464 = phi_in357;
												uint32_t phi465 = phi_in358;
												uint32_t phi466 = phi_in359;
												uint32_t phi467 = phi_in360;
												uint32_t phi468 = phi_in361;
												uint32_t phi469 = phi_in362;
												uint32_t phi470 = phi_in363;
												uint32_t phi471 = phi_in364;
												uint32_t phi472 = phi_in365;
												uint32_t phi473 = phi_in366;
												uint32_t phi474 = phi_in367;
												uint32_t phi475 = phi_in368;
												uint32_t phi476 = phi_in369;
												uint32_t phi477 = phi_in370;
												uint64_t phi478 = phi_in371;
												uint32_t phi479 = phi_in372;
												uint64_t phi480 = phi_in373;
												uint64_t phi481 = phi_in374;
												uint32_t phi482 = phi_in375;
												uint32_t phi483 = phi_in376;
												uint32_t phi484 = phi_in377;
												uint64_t phi485 = phi_in378;
												phi_in323 = phi459;
												phi_in324 = phi460;
												phi_in325 = phi461;
												phi_in326 = phi462;
												phi_in327 = phi464;
												phi_in328 = phi465;
												phi_in329 = phi466;
												phi_in330 = phi467;
												phi_in331 = phi468;
												phi_in332 = phi469;
												phi_in333 = phi470;
												phi_in334 = phi471;
												phi_in335 = phi472;
												phi_in336 = phi473;
												phi_in337 = phi474;
												phi_in338 = phi475;
												phi_in339 = phi476;
												phi_in340 = phi477;
												phi_in341 = phi478;
												phi_in342 = phi479;
												phi_in343 = phi480;
												phi_in344 = phi481;
												phi_in345 = phi482;
												phi_in346 = phi483;
												phi_in347 = phi484;
												phi_in348 = phi463;
												phi_in349 = phi485;
												int64_t anon487 = (__sext int64_t)*(uint32_t*)(anon381 + 6301640);
												uint32_t* anon486 = (uint32_t*)((anon487 << 2) + 6300992);
												if (*(uint32_t*)(phi463 + 64) < *anon486)
												{
													*anon486 = phi462;
													uint32_t phi_in488 = phi459;
													uint32_t phi_in489 = phi460;
													uint32_t phi_in490 = phi461;
													uint32_t phi_in491 = phi462;
													uint32_t phi_in492 = phi464;
													uint32_t phi_in493 = phi465;
													uint32_t phi_in494 = phi467;
													uint32_t phi_in495 = phi468;
													uint32_t phi_in496 = phi472;
													uint32_t phi_in497 = phi475;
													uint64_t phi_in498 = phi478;
													uint32_t phi_in499 = phi479;
													uint64_t phi_in500 = phi480;
													uint64_t phi_in501 = phi481;
													uint64_t phi_in502 = phi463;
													uint64_t phi_in503 = phi485;
													int64_t anon505 = anon487 * 12;
													int64_t anon504 = (__sext int64_t)*(uint32_t*)(anon505 + 6301636);
													if (phi462 < *(uint32_t*)((anon504 << 2) + 6300992))
													{
														*(uint32_t*)(phi463 + 112) = phi462;
														*(uint64_t*)(phi463 + 104) = phi481;
														*(uint64_t*)(phi463 + 96) = phi480;
														*(uint32_t*)(phi463 + 88) = phi460;
														*(uint64_t*)(phi463 + 80) = phi478;
														uint64_t anon506 = (__zext uint64_t)*(uint32_t*)(phi463 + 120);
														w(4197948, anon12, anon504, anon506, anon506);
														phi_in488 = *(uint32_t*)(arg1 - 104);
														phi_in489 = *(uint32_t*)(arg1 - 104);
														phi_in490 = *(uint32_t*)(arg1 - 104);
														phi_in491 = *(uint32_t*)(arg1 - 80);
														phi_in492 = *(uint32_t*)(arg1 - 104);
														phi_in493 = *(uint32_t*)(arg1 - 104);
														phi_in494 = *(uint32_t*)(arg1 - 104);
														phi_in495 = *(uint32_t*)(arg1 - 104);
														phi_in496 = *(uint32_t*)(arg1 - 104);
														phi_in497 = *(uint32_t*)(arg1 - 104);
														phi_in498 = *(uint64_t*)(arg1 - 112);
														phi_in499 = *(uint32_t*)(arg1 - 104);
														phi_in500 = *(uint64_t*)(arg1 - 96);
														phi_in501 = *(uint64_t*)(arg1 - 88);
														phi_in502 = anon12;
														phi_in503 = (__zext uint64_t)*(uint32_t*)(arg1 - 104);
													}
													uint32_t phi507 = phi_in488;
													uint32_t phi508 = phi_in489;
													uint32_t phi509 = phi_in490;
													uint32_t phi510 = phi_in491;
													uint32_t phi511 = phi_in492;
													uint32_t phi512 = phi_in493;
													uint32_t phi513 = phi_in494;
													uint32_t phi514 = phi_in495;
													uint32_t phi515 = phi_in496;
													uint32_t phi516 = phi_in497;
													uint64_t phi517 = phi_in498;
													uint32_t phi518 = phi_in499;
													uint64_t phi519 = phi_in500;
													uint64_t phi520 = phi_in501;
													uint64_t phi521 = phi_in502;
													uint64_t phi522 = phi_in503;
													phi_in323 = phi507;
													phi_in324 = phi508;
													phi_in325 = phi509;
													phi_in326 = phi510;
													phi_in327 = phi511;
													phi_in328 = phi512;
													phi_in329 = phi510;
													phi_in330 = phi513;
													phi_in331 = phi514;
													phi_in332 = phi510;
													phi_in333 = phi510;
													phi_in334 = phi510;
													phi_in335 = phi515;
													phi_in336 = phi510;
													phi_in337 = phi510;
													phi_in338 = phi516;
													phi_in339 = phi510;
													phi_in340 = phi510;
													phi_in341 = phi517;
													phi_in342 = phi518;
													phi_in343 = phi519;
													phi_in344 = phi520;
													phi_in345 = phi510;
													phi_in346 = phi510;
													phi_in347 = phi510;
													phi_in348 = phi521;
													phi_in349 = phi522;
													int64_t anon523 = (__sext int64_t)*(uint32_t*)(anon505 + 6301640);
													if (phi510 < *(uint32_t*)((anon523 << 2) + 6300992))
													{
														*(uint32_t*)(phi521 + 112) = phi510;
														*(uint64_t*)(phi521 + 104) = phi520;
														*(uint64_t*)(phi521 + 96) = phi519;
														*(uint32_t*)(phi521 + 88) = phi507;
														*(uint64_t*)(phi521 + 80) = phi517;
														uint64_t anon524 = (__zext uint64_t)*(uint32_t*)(phi521 + 120);
														w(4197231, anon12, anon523, anon524, anon524);
														phi_in323 = alloca1.field8;
														phi_in324 = alloca1.field8;
														phi_in325 = alloca1.field8;
														phi_in326 = alloca1.field12;
														phi_in327 = alloca1.field8;
														phi_in328 = alloca1.field8;
														phi_in329 = alloca1.field12;
														phi_in330 = alloca1.field8;
														phi_in331 = alloca1.field8;
														phi_in332 = alloca1.field12;
														phi_in333 = alloca1.field12;
														phi_in334 = alloca1.field12;
														phi_in335 = alloca1.field8;
														phi_in336 = alloca1.field12;
														phi_in337 = alloca1.field12;
														phi_in338 = alloca1.field8;
														phi_in339 = alloca1.field12;
														phi_in340 = alloca1.field12;
														phi_in341 = alloca1.field7;
														phi_in342 = alloca1.field8;
														phi_in343 = alloca1.field10;
														phi_in344 = alloca1.field11;
														phi_in345 = alloca1.field12;
														phi_in346 = alloca1.field12;
														phi_in347 = alloca1.field12;
														phi_in348 = anon12;
														phi_in349 = (__zext uint64_t)alloca1.field8;
													}
												}
											}
											uint32_t phi525 = phi_in323;
											uint32_t phi526 = phi_in324;
											uint32_t phi527 = phi_in325;
											uint32_t phi528 = phi_in326;
											uint32_t phi529 = phi_in327;
											uint32_t phi530 = phi_in328;
											uint32_t phi531 = phi_in329;
											uint32_t phi532 = phi_in330;
											uint32_t phi533 = phi_in331;
											uint32_t phi534 = phi_in332;
											uint32_t phi535 = phi_in333;
											uint32_t phi536 = phi_in334;
											uint32_t phi537 = phi_in335;
											uint32_t phi538 = phi_in336;
											uint32_t phi539 = phi_in337;
											uint32_t phi540 = phi_in338;
											uint32_t phi541 = phi_in339;
											uint32_t phi542 = phi_in340;
											uint64_t phi543 = phi_in341;
											uint32_t phi544 = phi_in342;
											uint64_t phi545 = phi_in343;
											uint64_t phi546 = phi_in344;
											uint32_t phi547 = phi_in345;
											uint32_t phi548 = phi_in346;
											uint32_t phi549 = phi_in347;
											uint64_t phi550 = phi_in348;
											uint64_t phi551 = phi_in349;
											phi_in238 = phi525;
											phi_in239 = phi526;
											phi_in240 = phi527;
											phi_in241 = phi528;
											phi_in242 = phi529;
											phi_in243 = phi530;
											phi_in244 = phi531;
											phi_in245 = phi532;
											phi_in246 = phi533;
											phi_in247 = phi534;
											phi_in248 = phi535;
											phi_in249 = phi536;
											phi_in250 = phi537;
											phi_in251 = phi538;
											phi_in252 = phi539;
											phi_in253 = phi540;
											phi_in254 = phi541;
											phi_in255 = phi542;
											phi_in256 = phi543;
											phi_in257 = phi544;
											phi_in258 = phi545;
											phi_in259 = phi546;
											phi_in260 = phi547;
											phi_in261 = phi548;
											phi_in262 = phi549;
											phi_in263 = phi550;
											phi_in264 = phi551;
											phi_in267 = phi295 + 4;
											phi_in268 = phi525;
											phi_in269 = phi526;
											phi_in270 = phi527;
											phi_in271 = phi528;
											phi_in272 = phi529;
											phi_in273 = phi530;
											phi_in274 = phi531;
											phi_in275 = phi532;
											phi_in276 = phi533;
											phi_in277 = phi534;
											phi_in278 = phi535;
											phi_in279 = phi536;
											phi_in280 = phi537;
											phi_in281 = phi538;
											phi_in282 = phi539;
											phi_in283 = phi540;
											phi_in284 = phi541;
											phi_in285 = phi542;
											phi_in286 = phi543;
											phi_in287 = phi544;
											phi_in288 = phi545;
											phi_in289 = phi546;
											phi_in290 = phi547;
											phi_in291 = phi548;
											phi_in292 = phi549;
											phi_in293 = phi550;
											phi_in294 = phi551;
										}
										while (phi295 != 8);
									}
									uint32_t phi552 = phi_in238;
									uint32_t phi553 = phi_in239;
									uint32_t phi554 = phi_in240;
									uint32_t phi555 = phi_in241;
									uint32_t phi556 = phi_in242;
									uint32_t phi557 = phi_in243;
									uint32_t phi558 = phi_in244;
									uint32_t phi559 = phi_in245;
									uint32_t phi560 = phi_in246;
									uint32_t phi561 = phi_in247;
									uint32_t phi562 = phi_in248;
									uint32_t phi563 = phi_in249;
									uint32_t phi564 = phi_in250;
									uint32_t phi565 = phi_in251;
									uint32_t phi566 = phi_in252;
									uint32_t phi567 = phi_in253;
									uint32_t phi568 = phi_in254;
									uint32_t phi569 = phi_in255;
									uint64_t phi570 = phi_in256;
									uint32_t phi571 = phi_in257;
									uint64_t phi572 = phi_in258;
									uint64_t phi573 = phi_in259;
									uint32_t phi574 = phi_in260;
									uint32_t phi575 = phi_in261;
									uint32_t phi576 = phi_in262;
									uint64_t phi577 = phi_in263;
									uint64_t phi578 = phi_in264;
									phi_in153 = phi552;
									phi_in154 = phi553;
									phi_in155 = phi554;
									phi_in156 = phi555;
									phi_in157 = phi556;
									phi_in158 = phi557;
									phi_in159 = phi558;
									phi_in160 = phi559;
									phi_in161 = phi573;
									phi_in162 = phi570;
									phi_in163 = phi560;
									phi_in164 = phi561;
									phi_in165 = phi562;
									phi_in166 = phi563;
									phi_in167 = phi564;
									phi_in168 = phi565;
									phi_in169 = phi566;
									phi_in170 = phi567;
									phi_in171 = phi568;
									phi_in172 = phi569;
									phi_in173 = phi571;
									phi_in174 = phi572;
									phi_in175 = phi574;
									phi_in176 = phi575;
									phi_in177 = phi576;
									phi_in178 = phi577;
									phi_in179 = phi578;
									phi_in182 = phi210 + 4;
									phi_in183 = phi552;
									phi_in184 = phi553;
									phi_in185 = phi554;
									phi_in186 = phi555;
									phi_in187 = phi556;
									phi_in188 = phi557;
									phi_in189 = phi558;
									phi_in190 = phi559;
									phi_in191 = phi560;
									phi_in192 = phi561;
									phi_in193 = phi562;
									phi_in194 = phi563;
									phi_in195 = phi564;
									phi_in196 = phi565;
									phi_in197 = phi566;
									phi_in198 = phi567;
									phi_in199 = phi568;
									phi_in200 = phi569;
									phi_in201 = phi570;
									phi_in202 = phi571;
									phi_in203 = phi572;
									phi_in204 = phi573;
									phi_in205 = phi574;
									phi_in206 = phi575;
									phi_in207 = phi576;
									phi_in208 = phi577;
									phi_in209 = phi578;
								}
								while (phi210 != 8);
							}
							uint32_t phi579 = phi_in153;
							uint32_t phi580 = phi_in154;
							uint32_t phi581 = phi_in155;
							uint32_t phi582 = phi_in156;
							uint32_t phi583 = phi_in157;
							uint32_t phi584 = phi_in158;
							uint32_t phi585 = phi_in159;
							uint32_t phi586 = phi_in160;
							uint64_t phi587 = phi_in161;
							phi588 = phi_in162;
							uint32_t phi589 = phi_in163;
							uint32_t phi590 = phi_in164;
							uint32_t phi591 = phi_in165;
							uint32_t phi592 = phi_in166;
							uint32_t phi593 = phi_in167;
							uint32_t phi594 = phi_in168;
							uint32_t phi595 = phi_in169;
							uint32_t phi596 = phi_in170;
							uint32_t phi597 = phi_in171;
							uint32_t phi598 = phi_in172;
							uint32_t phi599 = phi_in173;
							uint64_t phi600 = phi_in174;
							uint32_t phi601 = phi_in175;
							uint32_t phi602 = phi_in176;
							uint32_t phi603 = phi_in177;
							uint64_t phi604 = phi_in178;
							uint64_t phi605 = phi_in179;
							phi_in606 = phi579;
							phi_in607 = phi580;
							phi_in608 = phi581;
							phi_in609 = phi583;
							phi_in610 = phi584;
							phi_in611 = phi586;
							phi_in612 = phi600;
							phi_in613 = phi589;
							phi_in614 = phi593;
							phi_in615 = phi596;
							phi_in616 = phi599;
							phi_in617 = phi604;
							phi_in618 = phi605;
							if (phi588 != 8)
							{
								phi_in98 = phi579;
								phi_in99 = phi580;
								phi_in100 = phi581;
								phi_in101 = phi582;
								phi_in103 = phi583;
								phi_in104 = phi584;
								phi_in105 = phi585;
								phi_in106 = phi586;
								phi_in107 = phi589;
								phi_in108 = phi590;
								phi_in109 = phi591;
								phi_in110 = phi592;
								phi_in111 = phi593;
								phi_in112 = phi594;
								phi_in113 = phi595;
								phi_in114 = phi596;
								phi_in115 = phi597;
								phi_in116 = phi598;
								phi_in117 = phi599;
								phi_in118 = phi600;
								phi_in119 = phi601;
								phi_in120 = phi602;
								phi_in121 = phi603;
								phi_in122 = phi604;
								phi_in123 = phi588 + 4;
								phi_in124 = phi587;
								phi_in125 = phi605;
							}
						}
						while (phi588 != 8);
					}
					else 
					{
						phi_in606 = phi82;
						phi_in607 = phi83;
						phi_in608 = phi84;
						phi_in609 = phi85;
						phi_in610 = phi86;
						phi_in611 = phi87;
						phi_in612 = phi94;
						phi_in613 = phi88;
						phi_in614 = phi89;
						phi_in615 = phi90;
						phi_in616 = phi91;
						phi_in617 = phi92;
						phi_in618 = phi95 & 0xffffffff;
					}
					phi619 = phi_in606;
					phi620 = phi_in607;
					phi621 = phi_in608;
					phi622 = phi_in609;
					phi623 = phi_in610;
					phi624 = phi_in611;
					phi625 = phi_in612;
					phi626 = phi_in613;
					phi627 = phi_in614;
					phi628 = phi_in615;
					phi629 = phi_in616;
					phi630 = phi_in617;
					phi631 = phi_in618;
					phi_in632 = phi619;
					phi_in633 = phi620;
					phi_in634 = phi621;
					phi_in635 = phi622;
					phi_in636 = phi623;
					phi_in637 = phi624;
					phi_in638 = *(uint64_t*)(phi630 + 72);
					phi_in639 = phi626;
					phi_in640 = phi627;
					phi_in641 = phi628;
					phi_in642 = phi629;
					phi_in643 = phi631;
					phi_in644 = phi630;
				}
				else 
				{
					phi_in632 = phi53;
					phi_in633 = phi54;
					phi_in634 = phi55;
					phi_in635 = phi56;
					phi_in636 = phi57;
					phi_in637 = phi58;
					phi_in638 = phi64;
					phi_in639 = phi59;
					phi_in640 = phi60;
					phi_in641 = phi61;
					phi_in642 = phi62;
					phi_in643 = phi63 & 0xffffffff;
					phi_in644 = phi65;
				}
				phi645 = phi_in632;
				phi646 = phi_in633;
				phi647 = phi_in634;
				phi648 = phi_in635;
				phi649 = phi_in636;
				phi650 = phi_in637;
				phi651 = phi_in638;
				phi652 = phi_in639;
				phi653 = phi_in640;
				phi654 = phi_in641;
				phi655 = phi_in642;
				phi656 = phi_in643;
				phi657 = phi_in644;
				phi_in658 = *(uint32_t*)(phi657 + 68);
				phi_in659 = phi650;
				phi_in660 = *(uint64_t*)(phi657 + 56);
				phi_in661 = (__zext uint64_t)phi650;
				phi_in662 = *(uint32_t*)(phi657 + 68);
				phi_in663 = phi650;
				phi_in664 = *(uint32_t*)(phi657 + 68);
				phi_in665 = phi657;
			}
			else 
			{
				phi_in658 = phi30;
				phi_in659 = phi31;
				phi_in660 = phi36;
				phi_in661 = phi32 & 0xffffffff;
				phi_in662 = phi33;
				phi_in663 = phi34;
				phi_in664 = phi35;
				phi_in665 = phi37;
			}
			phi666 = phi_in658;
			phi667 = phi_in659;
			phi668 = phi_in660;
			phi669 = phi_in661;
			phi670 = phi_in662;
			phi671 = phi_in663;
			phi672 = phi_in664;
			phi673 = phi_in665;
			phi_in674 = *(uint64_t*)(phi673 + 48);
			phi_in675 = phi667;
			phi_in676 = phi666;
			phi_in677 = (__zext uint64_t)phi667;
			phi_in678 = phi666;
			phi_in679 = phi667;
			phi_in680 = phi673;
		}
		else 
		{
			phi_in674 = phi18;
			phi_in675 = phi13;
			phi_in676 = phi14;
			phi_in677 = phi15 & 0xffffffff;
			phi_in678 = phi16;
			phi_in679 = phi17;
			phi_in680 = phi19;
		}
		uint64_t phi681 = phi_in674;
		uint32_t phi682 = phi_in675;
		uint32_t phi683 = phi_in676;
		uint64_t phi684 = phi_in677;
		uint32_t phi685 = phi_in678;
		uint32_t phi686 = phi_in679;
		uint64_t phi687 = phi_in680;
		if (phi681 != 8)
		{
			phi_in4 = phi682;
			phi_in5 = phi683;
			phi_in7 = phi684;
			phi_in8 = phi685;
			phi_in9 = phi686;
			phi_in10 = phi681 + 4;
			phi_in11 = phi687;
		}
		phi_in22 = phi666;
		phi_in23 = phi667;
		phi_in24 = phi669;
		phi_in25 = phi670;
		phi_in26 = phi671;
		phi_in27 = phi672;
		phi_in28 = phi668 + 4;
		phi_in29 = phi673;
		phi_in40 = phi645;
		phi_in41 = phi646;
		phi_in42 = phi647;
		phi_in43 = phi648;
		phi_in44 = phi649;
		phi_in45 = phi650;
		phi_in46 = phi652;
		phi_in47 = phi653;
		phi_in48 = phi654;
		phi_in49 = phi655;
		phi_in50 = phi656;
		phi_in51 = phi651 + 4;
		phi_in52 = phi657;
		phi_in68 = phi619;
		phi_in69 = phi620;
		phi_in70 = phi621;
		phi_in71 = phi622;
		phi_in72 = phi623;
		phi_in73 = phi624;
		phi_in74 = phi626;
		phi_in75 = phi627;
		phi_in76 = phi628;
		phi_in77 = phi629;
		phi_in78 = phi630;
		phi_in79 = phi93 + 4;
		phi_in80 = phi625;
		phi_in81 = phi631;
		break;
	}
	return;
}
void t(uint64_t arg0)
{
	struct { uint8_t field0[24]; uint64_t field1; } alloca1;
	alloca1.field1 = arg0;
	uint64_t phi_in2 = 4;
	while (true)
	{
		uint64_t phi3;
		uint32_t* anon5;
		uint64_t anon6;
		uint32_t* anon11;
		do
		{
			do
			{
				phi3 = phi_in2;
				uint64_t anon4 = random();
				phi_in2 = phi3;
				uint64_t anon7 = anon4 << 32;
				anon6 = anon4 + (((anon4 & 0xffffffff) * 2290649225 + anon7 >> 32 >> 4) - (anon7 >> 32 >> 31)) * -30 << 32 >> 30;
				anon5 = (uint32_t*)(anon6 + 6301504);
			}
			while (*anon5 != 0);
			phi_in2 = phi3;
		}
		while (*(uint32_t*)(anon6 + 6300864) != 0);
		*anon5 = 1;
		do
		{
			uint64_t anon9;
			do
			{
				uint64_t anon8 = random();
				uint64_t anon10 = anon8 << 32;
				anon9 = anon8 + (((anon8 & 0xffffffff) * 2290649225 + anon10 >> 32 >> 4) - (anon10 >> 32 >> 31)) * -30 << 32 >> 30;
			}
			while (*(uint32_t*)(anon9 + 6301504) != 0);
			anon11 = (uint32_t*)(anon9 + 6300864);
		}
		while (*anon11 != 0);
		*anon11 = 1;
		uint64_t anon12 = random();
		uint64_t anon13 = anon12 << 32;
		w(4198271, (uint64_t)&alloca1, anon12 + (((anon12 & 0xffffffff) * 2290649225 + anon13 >> 32 >> 4) - (anon13 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
		uint64_t phi_in14 = 3;
		while (true)
		{
			uint64_t phi15;
			uint64_t anon17;
			uint32_t* anon19;
			do
			{
				do
				{
					do
					{
						do
						{
							phi15 = phi_in14;
							uint64_t anon16 = random();
							phi_in14 = phi15;
							uint64_t anon18 = anon16 << 32;
							anon17 = anon16 + (((anon16 & 0xffffffff) * 2290649225 + anon18 >> 32 >> 4) - (anon18 >> 32 >> 31)) * -30 << 32 >> 30;
						}
						while (*(uint32_t*)(anon17 + 6301504) != 0);
						phi_in14 = phi15;
					}
					while (*(uint32_t*)(anon17 + 6300864) != 0);
					phi_in14 = phi15;
					anon19 = (uint32_t*)(anon17 + 6301120);
				}
				while (*anon19 != 0);
				phi_in14 = phi15;
			}
			while (*(uint32_t*)(anon17 + 6300992) == 0);
			*anon19 = 1;
			while (true)
			{
				uint64_t anon20 = random();
				uint64_t anon21 = anon20 << 32;
				*(uint32_t*)0x60292c = (uint32_t)anon20 + (uint32_t)(((anon20 & 0xffffffff) * 2290649225 + anon21 >> 32 >> 4) - (anon21 >> 32 >> 31)) * 4294967266;
			}
			break;
			uint32_t anon22 = (uint32_t)phi15 - 1;
			phi_in14 = (__zext uint64_t)anon22;
		}
		break;
		uint32_t anon23 = (uint32_t)phi3 - 1;
		phi_in2 = (__zext uint64_t)anon23;
	}
}
void r(uint64_t arg0, uint64_t arg1)
{
	uint32_t phi_in2;
	uint32_t phi6;
	uint32_t phi_in1 = 0;
	uint64_t anon4 = arg1 << 32;
	uint32_t* anon3 = (uint32_t*)((anon4 >> 30) + 6301376);
	phi_in2 = *anon3;
	do
	{
		uint32_t phi5 = phi_in1;
		phi6 = phi_in2;
		if (phi6 != 0)
		{
			*anon3 = phi6 - 1;
			uint32_t phi_in7 = phi5;
			uint32_t phi_in8 = 3;
			uint32_t phi9 = phi_in7;
			uint32_t phi10 = phi_in8;
			uint64_t anon11 = random();
			if (phi9 > 1000)
			{
				break;
			}
			else 
			{
				uint32_t anon12 = phi9 + 1;
				phi_in7 = anon12;
				uint32_t anon13 = phi10 - (__zext uint32_t)(anon12 == (anon12 / 100 - (uint32_t)((__zext uint64_t)anon12 << 32 >> 63)) * 100);
				phi_in8 = anon13;
				uint64_t anon16 = anon11 << 32;
				uint64_t anon15 = anon11 + (((anon11 & 0xffffffff) * 2290649225 + anon16 >> 36) - (anon16 >> 32 >> 31)) * 4294967266;
				uint32_t anon14 = (uint32_t)anon15;
				uint64_t anon18 = anon4 >> 32;
				uint32_t anon17 = (uint32_t)anon18;
				if (anon14 != anon17)
				{
					phi_in7 = anon12;
					phi_in8 = anon13;
					uint64_t anon20 = anon15 << 32;
					uint32_t* anon19 = (uint32_t*)((anon20 >> 30) + 6301376);
					if ((*anon19 >> 31 | (__zext uint32_t)(*anon19 == 0)) == 0)
					{
						phi_in7 = anon12;
						phi_in8 = anon13;
						uint64_t anon21 = anon18 * 12;
						if (!(*(uint32_t*)(anon21 + 6301640) == anon14 | anon13 > *anon19))
						{
							phi_in7 = anon12;
							phi_in8 = anon13;
							if (anon14 != *(uint32_t*)(anon21 + 6301636))
							{
								uint32_t anon22 = *anon19 - 1;
								*anon19 = anon22;
								uint64_t anon23 = anon18 * 3;
								*(uint32_t*)(((__sext int64_t)anon22 + anon23 << 2) + 6301632) = anon14;
								uint62_t anon24 = (uint62_t)(anon20 >> 32) * 3;
								*(uint32_t*)(((__zext uint64_t)((__sext int62_t)anon22 + anon24) << 2) + 6301632) = anon17;
								r(4198736, anon15 & 0xffffffff);
								uint32_t* anon25 = (uint32_t*)((anon20 >> 30) + 6301376);
								*(uint32_t*)(((__zext uint64_t)(anon24 + (__sext int62_t)*anon25) << 2) + 6301632) = 4294967295;
								*anon25 = *anon25 + 1;
								*(uint32_t*)(((__sext int64_t)*anon3 + anon23 << 2) + 6301632) = 4294967295;
								*anon3 = 0;
								phi_in1 = anon12;
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
		uint64_t phi4;
		uint64_t phi7;
		uint64_t phi_in9;
		uint64_t phi_in10;
		uint64_t phi12;
		uint64_t phi_in39;
		uint32_t anon40;
		uint32_t anon66;
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
		uint64_t phi_in1 = 6301504;
		uint64_t phi_in2 = 15;
		do
		{
			uint64_t phi3 = phi_in1;
			phi4 = phi_in2;
			if (phi4 != 0)
			{
				*(uint64_t*)phi3 = 0;
				phi_in1 = phi3 + 8;
				phi_in2 = phi4 - 1;
			}
		}
		while (phi4 != 0);
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
		uint64_t phi_in5 = 15;
		uint64_t phi_in6 = 6300864;
		do
		{
			phi7 = phi_in5;
			uint64_t phi8 = phi_in6;
			phi_in9 = 6301248;
			phi_in10 = 15;
			if (phi7 != 0)
			{
				*(uint64_t*)phi8 = 0;
				phi_in5 = phi7 - 1;
				phi_in6 = phi8 + 8;
			}
		}
		while (phi7 != 0);
		do
		{
			uint64_t phi11 = phi_in9;
			phi12 = phi_in10;
			if (phi12 != 0)
			{
				*(uint64_t*)phi11 = 0;
				phi_in9 = phi11 + 8;
				phi_in10 = phi12 - 1;
			}
		}
		while (phi12 != 0);
		r(4199339, 0);
		(__asm "movdqa xmm0, xmmword ptr [rsp + 0x20]")();
		(__asm "movdqa xmm2, xmmword ptr [rsp + 0x10]")();
		(__asm "movdqa xmm1, xmmword ptr [rsp]")();
		uint32_t* phi_in13 = (uint32_t*)0x6027c4;
		uint64_t phi_in14 = 6301636;
		do
		{
			uint32_t phi_in18;
			uint32_t phi_in19;
			uint32_t phi_in20;
			uint32_t phi_in21;
			uint32_t phi_in22;
			uint32_t* anon23;
			uint32_t phi_in24;
			uint32_t phi_in30;
			uint32_t phi_in31;
			uint32_t phi_in32;
			uint32_t phi_in33;
			uint32_t* phi15 = phi_in13;
			uint64_t phi16 = phi_in14;
			uint32_t* anon17 = (uint32_t*)(phi16 + 4);
			if (*anon17 < *phi15)
			{
				*phi15 = *anon17;
				*anon17 = *phi15;
				phi_in18 = *phi15;
				phi_in19 = *phi15;
				phi_in20 = *anon17;
				phi_in21 = *anon17;
				anon23 = (uint32_t*)(phi16 - 4);
				phi_in22 = *anon23;
			}
			else 
			{
				phi_in24 = *anon23;
				if (*phi15 < *anon23)
				{
					phi_in18 = *anon17 & 0xf;
					phi_in19 = *anon17;
					phi_in20 = *phi15 & 0xf;
					phi_in21 = *phi15;
					phi_in22 = *anon23 & 0xf;
				}
			}
			if (*anon17 >= *phi15 && *phi15 < *anon23 || *anon17 < *phi15 && *anon17 < *anon23)
			{
				uint32_t phi25 = phi_in18;
				uint32_t phi26 = phi_in19;
				uint32_t phi27 = phi_in20;
				uint32_t phi28 = phi_in21;
				uint32_t phi29 = phi_in22;
				*phi15 = phi29;
				*anon23 = phi28;
				phi_in30 = phi27;
				phi_in31 = phi25;
				phi_in32 = *anon23;
				phi_in33 = phi26;
			}
			if (*anon17 >= *anon23 && *anon17 < *phi15)
			{
				phi_in30 = *anon23 & 0xf;
				phi_in31 = *phi15;
				phi_in32 = *anon17;
				phi_in33 = *phi15;
			}
			if (*anon17 >= *phi15 && *phi15 < *anon23 || *anon17 < *phi15 && *anon17 < *anon23 || *anon17 >= *anon23 && *anon17 < *phi15)
			{
				uint32_t phi34 = phi_in30;
				uint32_t phi35 = phi_in31;
				uint32_t phi36 = phi_in32;
				uint32_t phi37 = phi_in33;
				phi_in24 = phi34;
				if (phi37 - phi36 <= 4294967295)
				{
					*anon17 = phi36;
					*phi15 = phi35;
					phi_in24 = *(uint32_t*)((phi16 & 0xc) - 4);
				}
			}
			uint32_t phi38 = phi_in24;
			phi_in39 = 6301636;
			anon40 = phi38 + 1 & 0xff;
			if (anon40 != 0)
			{
				phi_in39 = 6301636;
				uint64_t anon41 = phi16 + 12;
				phi_in13 = (uint32_t*)(anon41 & 0xc);
				phi_in14 = anon41;
				if (phi16 == 6301984)
				{
					break;
				}
			}
		}
		while (anon40 != 0);
		do
		{
			uint32_t phi_in45;
			uint32_t phi_in46;
			uint32_t phi_in47;
			uint32_t phi_in48;
			uint32_t phi_in49;
			uint32_t* anon50;
			uint32_t phi_in51;
			uint32_t phi_in57;
			uint32_t phi_in58;
			uint32_t phi_in59;
			uint32_t phi_in60;
			uint64_t phi42 = phi_in39;
			uint32_t* anon43 = (uint32_t*)(phi42 + 4);
			uint32_t* anon44 = (uint32_t*)phi42;
			if (*anon43 < *anon44)
			{
				*anon44 = *anon43;
				*anon43 = *anon44;
				phi_in45 = *anon44;
				phi_in46 = *anon44;
				phi_in47 = *anon43;
				phi_in48 = *anon43;
				anon50 = (uint32_t*)(phi42 - 4);
				phi_in49 = *anon50;
			}
			else 
			{
				phi_in51 = *anon50;
				if (*anon44 < *anon50)
				{
					phi_in45 = *anon43 & 0xf;
					phi_in46 = *anon43;
					phi_in47 = *anon44 & 0xf;
					phi_in48 = *anon44;
					phi_in49 = *anon50 & 0xf;
				}
			}
			if (*anon43 >= *anon44 && *anon44 < *anon50 || *anon43 < *anon44 && *anon43 < *anon50)
			{
				uint32_t phi52 = phi_in45;
				uint32_t phi53 = phi_in46;
				uint32_t phi54 = phi_in47;
				uint32_t phi55 = phi_in48;
				uint32_t phi56 = phi_in49;
				*anon44 = phi56;
				*anon50 = phi55;
				phi_in57 = phi54;
				phi_in58 = phi52;
				phi_in59 = *anon50;
				phi_in60 = phi53;
			}
			if (*anon43 >= *anon50 && *anon43 < *anon44)
			{
				phi_in57 = *anon50 & 0xf;
				phi_in58 = *anon44;
				phi_in59 = *anon43;
				phi_in60 = *anon44;
			}
			if (*anon43 >= *anon44 && *anon44 < *anon50 || *anon43 < *anon44 && *anon43 < *anon50 || *anon43 >= *anon50 && *anon43 < *anon44)
			{
				uint32_t phi61 = phi_in57;
				uint32_t phi62 = phi_in58;
				uint32_t phi63 = phi_in59;
				uint32_t phi64 = phi_in60;
				phi_in51 = phi61;
				if (phi64 - phi63 <= 4294967295)
				{
					*anon43 = phi63;
					*anon44 = phi62;
					phi_in51 = *(uint32_t*)((phi42 & 0xf) - 4);
				}
			}
			uint32_t phi65 = phi_in51;
			anon66 = phi65 + 1 & 0xff;
			if (anon66 != 0)
			{
				phi_in39 = phi42 + 12;
			}
		}
		while (anon66 != 0);
	}
}
void q(uint64_t arg0, uint64_t arg1)
{
	struct { uint8_t field0[56]; uint64_t field1; } alloca1;
	uint64_t phi_in4;
	uint32_t phi_in5;
	uint64_t phi6;
	uint32_t phi7;
	uint32_t* anon8;
	uint32_t dispatch14;
	uint32_t phi_in17;
	uint32_t anon19;
	uint32_t phi20;
	alloca1.field1 = arg0;
	uint32_t dispatch2 = 0;
	uint32_t* anon3 = (uint32_t*)0x602928;
	if (*anon3 != 0)
	{
		uint16_t** anon13;
		*anon3 = *anon3 - 1;
		printf((uint8_t*)0x401ca7);
		phi_in4 = arg1 & 0xffffffff;
		phi_in5 = 0;
		phi6 = phi_in4;
		phi7 = phi_in5;
		anon8 = (uint32_t*)0x602490;
		*anon8 = *anon8 + phi7;
		struct _IO_FILE** anon10 = (struct _IO_FILE**)0x602480;
		uint32_t anon9 = _IO_getc(*anon10);
		uint8_t anon11 = (uint8_t)anon9;
		if (anon11 == 10)
		{
			dispatch2 = 1;
		}
		uint32_t anon12 = *anon3 >> 31 | (__zext uint32_t)(*anon3 == 0);
		if (anon11 != 10 || anon12 != 0 && anon11 == 10)
		{
			anon13 = __ctype_b_loc();
			dispatch14 = 0;
		}
		uint64_t* anon15 = (uint64_t*)anon13;
		if ((*(uint8_t*)(*anon15 + ((__sext int64_t)anon11 << 1 | 1)) & 8) != 0 && (anon11 != 10 || anon12 != 0 && anon11 == 10))
		{
			uint32_t anon16 = _IO_getc(*anon10);
			uint32_t anon18 = (anon9 << 24 >> 24) - 48;
			phi_in17 = anon18;
			if ((*(uint8_t*)(*anon15 + ((__zext uint64_t)anon16 << 56 >> 55 | 1)) & 8) != 0)
			{
				anon19 = anon16 >> 8;
				phi_in17 = (anon19 << 24 >> 24) + anon18 * 10 - 48;
			}
			phi20 = phi_in17;
		}
	}
	while (true)
	{
		uint64_t phi_in21;
		uint8_t* anon22;
		uint64_t phi26;
		dispatch2 = 4;
		if (*(uint32_t*)(((__sext int64_t)phi20 << 2) + 6300992) != 0)
		{
			phi_in21 = (__zext uint64_t)phi20;
		}
		if (dispatch2 == 4)
		{
			puts((uint8_t*)0x401cd5);
			*anon8 = *anon3 * 100 + *anon8 + 500;
			anon22 = (uint8_t*)0x401cf1;
			printf(anon22);
			exit(0);
		}
		uint64_t anon23 = random();
		dispatch2 = 2;
		if (dispatch2 == 2)
		{
			puts((uint8_t*)0x401dd0);
			*anon8 = *anon8 - 100;
			printf(anon22);
			exit(0);
		}
		if ((uint32_t)anon23 + ((uint32_t)((anon23 & 0xffffffff) / 3) - (uint32_t)(anon23 << 32 >> 32 >> 31)) * 4294967293 != 1)
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
			uint64_t anon24 = random();
			uint64_t anon25 = anon24 << 32;
			w(4199968, (uint64_t)&alloca1, anon24 + (((anon24 & 0xffffffff) * 2290649225 + anon25 >> 32 >> 4) - (anon25 >> 32 >> 31)) * 4294967266 & 0xffffffff, 0, 0);
			*anon8 = *anon8 - 100;
			phi_in21 = phi6;
		}
		if (*(uint32_t*)(((__sext int64_t)phi20 << 2) + 6300992) != 0 || (uint32_t)anon23 + ((uint32_t)((anon23 & 0xffffffff) / 3) - (uint32_t)(anon23 << 32 >> 32 >> 31)) * 4294967293 != 1)
		{
			phi26 = phi_in21;
			dispatch2 = 1;
		}
		if ((uint8_t)anon19 != 10 && (*(uint32_t*)(((__sext int64_t)phi20 << 2) + 6300992) != 0 || (uint32_t)anon23 + ((uint32_t)((anon23 & 0xffffffff) / 3) - (uint32_t)(anon23 << 32 >> 32 >> 31)) * 4294967293 != 1))
		{
			phi_in4 = phi26;
			phi_in5 = phi7 - 20;
			dispatch14 = 1;
			dispatch2 = 3;
			if (phi7 != 196)
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
			*anon8 = *anon8 - 50;
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
		uint32_t phi_in18;
		uint32_t anon19;
		uint32_t* anon20;
		uint32_t* anon21;
		uint32_t* anon25;
		uint64_t anon26;
		uint16_t** phi_in35;
		uint8_t anon36;
		uint16_t** anon40;
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
			phi_in18 = 4294967196;
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
			uint64_t phi_in27;
			if (*(uint32_t*)(anon17 + 6300992) < 3)
			{
				puts((uint8_t*)0x401d7b);
			}
			anon26 = phi11 * 12;
			anon25 = (uint32_t*)(anon26 + 6301632);
			int64_t anon24 = (__sext int64_t)*anon25;
			if (*(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				phi_in27 = anon24;
			}
			if (*(uint32_t*)((anon24 << 2) + 6300864) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6300864) != 0 && *(uint32_t*)((anon24 << 2) + 6300864) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6300864) == 0)
			{
				puts((uint8_t*)0x401d8e);
				phi_in27 = (__sext int64_t)*anon25;
			}
			uint64_t phi28 = phi_in27;
			if (*(uint32_t*)((phi28 << 2) + 6301504) != 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) != 0 && *(uint32_t*)((phi28 << 2) + 6301504) == 0 || *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301640) << 2) + 6301504) != 0 && *(uint32_t*)((phi28 << 2) + 6301504) == 0 && *(uint32_t*)(((__sext int64_t)*(uint32_t*)(anon26 + 6301636) << 2) + 6301504) == 0)
			{
				puts((uint8_t*)0x401da0);
			}
			printf((uint8_t*)0x401e58);
			uint32_t* anon29 = (uint32_t*)(anon17 + 6301248);
			if (*anon29 == 0)
			{
				*anon15 = *anon15 + 10;
				*anon29 = 1;
			}
		}
		struct _IO_FILE** anon31 = (struct _IO_FILE**)0x602480;
		uint32_t anon30 = _IO_getc(*anon31);
		uint8_t anon33 = (uint8_t)anon30;
		bool anon32 = anon33 == 108;
		if (anon32)
		{
			uint16_t** anon34 = __ctype_b_loc();
			phi_in9 = phi11;
			phi_in10 = phi12;
			phi_in35 = anon34;
			anon36 = *(uint8_t*)(*(uint64_t*)anon34 + 217) & 8;
			if (anon36 == 0)
			{
				break;
			}
		}
		bool anon37 = anon33 == 105;
		if (anon37)
		{
			printf((uint8_t*)0x401dba);
		}
		bool anon38 = anon33 == 115;
		if (anon38)
		{
			q(4200890, phi12 & 0xffffffff);
		}
		bool anon39 = anon33 == 115 || anon33 == 108 || anon33 == 105 || anon33 == 113;
		if (!anon39 || anon33 == 105 || anon33 == 115)
		{
			anon40 = __ctype_b_loc();
			phi_in35 = anon40;
		}
		int64_t anon42 = (__sext int64_t)anon33;
		uint8_t anon41 = *(uint8_t*)(*(uint64_t*)anon40 + (anon42 >> 7 | 1)) & 8;
		if (anon41 != 0 && anon37 || anon41 != 0 && anon38 || anon41 != 0 && (!anon39) || anon36 != 0 && anon32)
		{
			uint32_t phi_in45;
			uint16_t** phi43 = phi_in35;
			uint32_t anon44 = _IO_getc(*anon31);
			uint32_t anon46 = (uint32_t)(anon42 + 4294967248);
			phi_in45 = anon46;
			uint32_t anon47 = anon44 << 24 >> 24;
			if ((*(uint8_t*)(*(uint64_t*)phi43 + ((__zext uint64_t)anon47 << 1 | 1)) & 8) != 0)
			{
				phi_in45 = anon46 * 10 + anon47 - 48;
			}
			uint32_t phi48 = phi_in45;
			if (*anon25 != phi48 && *(uint32_t*)(anon26 + 6301636) != phi48)
			{
				phi_in9 = phi11;
				phi_in10 = phi12;
			}
			if (*anon25 == phi48 || *anon25 != phi48 && *(uint32_t*)(anon26 + 6301636) == phi48 || *anon25 != phi48 && *(uint32_t*)(anon26 + 6301636) != phi48 && *(uint32_t*)(anon26 + 6301640) == phi48)
			{
				int64_t anon49 = (__sext int64_t)phi48;
				phi_in9 = anon49;
				phi_in10 = anon49;
			}
			break;
		}
		uint32_t* anon50 = (uint32_t*)(anon17 + 6301504);
		if (*anon50 != 0 && *(uint32_t*)(anon17 + 6300992) != 0 && *(uint32_t*)(anon17 + 6300864) == 0 && (anon19 != *anon20 || anon19 == *anon20 && *anon21 == 3 || anon19 == *anon20 && *anon21 == 3))
		{
			*anon50 = 0;
			uint64_t anon51 = random();
			uint32_t anon52 = (uint32_t)anon51;
			*(uint32_t*)(((__sext int64_t)(anon52 + (((uint32_t)((anon51 & 0xffffffff) * 2290649225 >> 32) + anon52 >> 4) - (anon52 >> 31)) * 4294967266) << 2) + 6301504) = 1;
			uint64_t anon53 = random();
			printf((uint8_t*)0x401e28);
			*anon15 = *anon15 - 10;
			uint32_t anon55 = (uint32_t)anon53;
			int64_t anon54 = (__sext int64_t)(anon55 + ((uint32_t)((anon53 & 0xffffffff) * 2290649225 + (anon53 << 32) >> 36) - (anon55 >> 31)) * 4294967266);
			phi_in9 = anon54;
			phi_in10 = anon54;
			break;
		}
		if (dispatch13 == 1)
		{
			puts((uint8_t*)0x401d36);
			phi_in18 = 4294967246;
		}
		if (dispatch13 == 1 || dispatch13 == 0)
		{
			uint32_t phi56 = phi_in18;
			*anon15 = *anon15 + phi56;
		}
		if (dispatch13 == 1 || dispatch13 == 0 || anon33 == 113)
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
