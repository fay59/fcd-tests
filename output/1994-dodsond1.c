#include "tests/bin/1994-dodsond1.h"

void _init(uint64_t arg0)
{
	if (*(uint64_t*)0x601470 != 0)
	{
		__gmon_start__();
	}
	return;
}
void main(uint64_t arg0, uint64_t arg1)
{
	uint32_t anon55;
	l(4195589);
	uint32_t phi_in1 = 60;
	do
	{
		uint32_t phi7;
		uint32_t anon12;
		uint8_t* anon25;
		uint8_t* anon29;
		uint64_t phi36;
		uint32_t phi40;
		uint32_t anon43;
		uint32_t phi2 = phi_in1;
		uint64_t phi_in3 = phi_in4;
		uint32_t phi_in5 = 1;
		uint32_t phi_in6 = 0;
		do
		{
			uint32_t anon13;
			phi7 = phi_in5;
			uint32_t phi_in8 = 1;
			do
			{
				uint32_t phi9 = phi_in6;
				uint32_t phi10 = phi_in8;
				uint64_t anon11 = m.constprop.0(4195644, (__zext uint64_t)phi7, (__zext uint64_t)phi10);
				anon12 = phi9 + (uint32_t)anon11;
				phi_in6 = anon12;
				anon13 = phi10 + 1;
				phi_in8 = anon13;
			}
			while (anon13 != 9);
			phi_in5 = phi7 + 1;
			phi_in6 = anon12;
		}
		while (phi7 != 8);
		uint64_t phi_in14 = 0;
		uint64_t phi_in15 = 1;
		uint32_t phi_in16 = 1;
		if (anon12 != 0)
		{
			uint64_t anon19;
			uint64_t anon26;
			uint32_t anon30;
			do
			{
				uint32_t anon17;
				uint32_t anon18;
				printf((uint8_t*)0x400f81);
				do
				{
					anon17 = getchar();
				}
				while (anon17 - 65 >= 8);
				do
				{
					anon18 = getchar();
				}
				while (anon18 - 49 >= 8);
				anon19 = m.constprop.0(4195848, (__zext uint64_t)(anon17 - 64), (__zext uint64_t)(anon18 - 48));
			}
			while ((uint32_t)anon19 == 0);
			putchar(10);
			uint64_t phi20 = 65;
			uint64_t phi_in21 = 6297448;
			do
			{
				uint64_t phi24;
				uint64_t phi22 = phi_in21;
				putchar((uint32_t)phi20);
				uint64_t phi_in23 = phi22;
				do
				{
					phi24 = phi_in23;
					anon25 = (uint8_t*)0x400f79;
					printf(anon25);
					phi_in23 = phi24 + 4;
				}
				while (phi22 + 28 != phi24);
				putchar(10);
				phi20 = phi20 + 1 & 0xffffffff;
				anon26 = phi22 + 40;
				phi_in21 = anon26;
			}
			while (anon26 != 6297768);
			putchar(32);
			uint32_t phi_in27 = 1;
			do
			{
				uint32_t phi28 = phi_in27;
				anon29 = (uint8_t*)0x400f7d;
				printf(anon29);
				anon30 = phi28 + 1;
				phi_in27 = anon30;
			}
			while (anon30 != 9);
			putchar(10);
			phi_in14 = 0;
			phi_in15 = 1;
			phi_in16 = 1;
		}
		do
		{
			uint64_t phi37;
			uint64_t phi31 = phi_in15;
			uint64_t phi32 = phi_in3;
			uint64_t phi33 = phi_in14;
			uint32_t phi_in34 = 1;
			uint32_t phi35 = phi_in16;
			do
			{
				phi36 = phi32;
				phi37 = phi33;
				*(uint32_t*)(arg1 - 72) = phi_in34;
				uint64_t anon38 = m.constprop.1(4195713, (__zext uint64_t)phi35, (__zext uint64_t)*(uint32_t*)(arg1 - 72));
				uint64_t anon39 = random();
				uint32_t anon41 = (uint32_t)phi37;
				phi40 = anon41;
				uint32_t anon42 = (uint32_t)anon38 + (uint32_t)anon39 + ((uint32_t)((anon39 & 0xffffffff) / 6) - (uint32_t)(anon39 << 32 >> 32 >> 31)) * 4294967290;
				if (anon42 > anon41)
				{
					phi36 = phi31;
					phi37 = (__zext uint64_t)anon42;
					phi40 = anon42;
				}
				phi32 = phi36;
				phi33 = phi37;
				phi_in34 = *(uint32_t*)(arg1 - 72) + 1;
				anon43 = (uint32_t)phi31;
				phi35 = anon43;
			}
			while (*(uint32_t*)(arg1 - 72) != 8);
			phi_in3 = phi36;
			phi_in14 = phi37;
			uint32_t anon44 = anon43 + 1;
			phi_in15 = (__zext uint64_t)anon44;
			phi_in16 = anon44;
		}
		while (anon43 != 8);
		if (phi40 != 0)
		{
			uint64_t anon45 = m.constprop.1(4196072, phi36 & 0xffffffff, 0);
			if ((uint32_t)anon45 != 0)
			{
				uint64_t anon51;
				uint32_t anon54;
				putchar(10);
				uint64_t phi46 = 65;
				uint64_t phi_in47 = 6297448;
				do
				{
					uint64_t phi50;
					uint64_t phi48 = phi_in47;
					putchar((uint32_t)phi46);
					uint64_t phi_in49 = phi48;
					do
					{
						phi50 = phi_in49;
						printf(anon25);
						phi_in49 = phi50 + 4;
					}
					while (phi48 + 28 != phi50);
					putchar(10);
					phi46 = phi46 + 1 & 0xffffffff;
					anon51 = phi48 + 40;
					phi_in47 = anon51;
				}
				while (anon51 != 6297768);
				putchar(32);
				uint32_t phi_in52 = 1;
				do
				{
					uint32_t phi53 = phi_in52;
					printf(anon29);
					anon54 = phi53 + 1;
					phi_in52 = anon54;
				}
				while (anon54 != 9);
				putchar(10);
			}
		}
		anon55 = phi2 - 1;
		phi_in1 = anon55;
		uint64_t phi_in4 = phi36;
	}
	while (anon55 != 0);
	return;
}
void _start(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	*(uint64_t*)(arg1 - 8) = arg0;
	uint64_t anon2 = arg1 & 0xfffffffffffffff0;
	uint64_t anon1 = anon2 - 16;
	*(uint64_t*)anon1 = anon2 - 8;
	__libc_start_main((uint32_t(*)(uint32_t, uint8_t**, uint8_t**))0x4004f0, (uint32_t)arg0, (uint8_t**)arg1, (void(*)())0x400ef0, (void(*)())0x400f60, (void(*)())arg2, *(uint8_t**)anon1);
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
	uint8_t* anon1 = (uint8_t*)0x6018d0;
	if (*anon1 == 0)
	{
		deregister_tm_clones(4196434);
		*anon1 = 1;
	}
	return;
}
void frame_dummy(uint64_t arg0)
{
	return;
}
uint64_t m.constprop.0(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in9;
	uint32_t phi10;
	uint64_t phi11;
	uint64_t phi12;
	uint64_t anon13;
	uint64_t phi16;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi7;
		uint64_t phi8;
		*anon1 = 1;
		uint64_t phi_in5 = 0;
		uint64_t phi6 = 1;
		do
		{
			phi7 = phi_in5;
			phi8 = phi6;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi7 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi7 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi_in9 = 1;
				phi10 = 1;
				phi11 = 1;
				phi12 = (((__zext uint64_t)*(uint32_t*)(phi7 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi7 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				int62_t anon14 = (__sext int62_t)*(uint32_t*)(phi7 + 6296832);
				anon13 = phi12 + ((__zext uint64_t)(anon14 + (__sext int62_t)*(uint32_t*)(phi7 + 6296896) * 10) << 2);
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi7 + 6296896);
				if (*(uint32_t*)(anon13 + ((__zext uint64_t)-anon14 << 2) + ((-anon15 << 2) - anon15 << 3)) == 1)
				{
					uint32_t anon21;
					phi6 = phi8;
					int64_t anon17 = (__sext int64_t)(phi10 * *(uint32_t*)(phi7 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi_in9 * *(uint32_t*)(phi7 + 6296896)) + anon4) * 10 << 2;
					phi16 = anon17 + 6297408;
					uint64_t phi18 = anon17 + 6296960;
					do
					{
						uint64_t phi19 = phi_in9;
						*(uint32_t*)phi16 = 0;
						uint64_t anon20 = (__zext uint64_t)((uint32_t)phi6 + *(uint32_t*)phi18);
						phi8 = anon20;
						phi6 = anon20;
						anon21 = (uint32_t)phi19 - 1;
						phi_in9 = (__zext uint64_t)anon21;
						int64_t anon22 = (__sext int64_t)-*(uint32_t*)(phi7 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi7 + 6296896) * 10 << 2;
						phi16 = phi16 + anon22;
						phi18 = phi18 + anon22;
					}
					while (anon21 != 0);
				}
			}
			phi_in5 = phi7 + 4;
			phi6 = phi8;
		}
		while (phi7 != 28);
		if ((uint32_t)phi8 == 1)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi8 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
	uint32_t anon23 = (uint32_t)phi11 + 1;
	phi_in9 = (__zext uint64_t)anon23;
	phi10 = anon23;
	phi11 = phi11 + 1 & 0xffffffff;
	phi12 = anon13;
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in9;
	uint32_t phi10;
	uint64_t phi11;
	uint64_t phi12;
	uint64_t anon13;
	uint64_t phi17;
	uint64_t anon3 = arg2 << 32 >> 32;
	uint64_t anon4 = arg1 << 32 >> 32;
	uint64_t anon2 = anon3 + (anon4 & 0x3fffffffffffffff) * 10;
	uint32_t* anon1 = (uint32_t*)((anon2 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi7;
		uint64_t phi8;
		*anon1 = 4294967295;
		uint64_t phi_in5 = 0;
		uint64_t phi_in6 = 4294967295;
		do
		{
			phi7 = phi_in5;
			phi8 = phi_in6;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi7 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi7 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi_in9 = 1;
				phi10 = 1;
				phi11 = 1;
				phi12 = (((__zext uint64_t)*(uint32_t*)(phi7 + 6296832) << 33 >> 32) + anon3 + (((__zext uint64_t)*(uint32_t*)(phi7 + 6296896) << 33 >> 32) + anon4) * 10 << 2) + 6297408;
				phi8 = phi_in6;
				int62_t anon14 = (__sext int62_t)*(uint32_t*)(phi7 + 6296832);
				anon13 = phi12 + ((__zext uint64_t)(anon14 + (__sext int62_t)*(uint32_t*)(phi7 + 6296896) * 10) << 2);
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi7 + 6296896);
				if (*(uint32_t*)(anon13 + ((__zext uint64_t)-anon14 << 2) + ((-anon15 << 2) - anon15 << 3)) == 255)
				{
					uint32_t anon22;
					uint64_t phi16 = phi_in6;
					int64_t anon18 = (__sext int64_t)(phi10 * *(uint32_t*)(phi7 + 6296832)) + anon3 + ((__sext int64_t)((uint32_t)phi_in9 * *(uint32_t*)(phi7 + 6296896)) + anon4) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						uint64_t phi20 = phi_in9;
						*(uint32_t*)phi17 = 0;
						uint64_t anon21 = (__zext uint64_t)((uint32_t)phi16 + *(uint32_t*)phi19);
						phi8 = anon21;
						phi16 = anon21;
						anon22 = (uint32_t)phi20 - 1;
						phi_in9 = (__zext uint64_t)anon22;
						int64_t anon23 = (__sext int64_t)-*(uint32_t*)(phi7 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi7 + 6296896) * 10 << 2;
						phi17 = phi17 + anon23;
						phi19 = phi19 + anon23;
					}
					while (anon22 != 0);
				}
			}
			phi_in5 = phi7 + 4;
			phi_in6 = phi8;
		}
		while (phi7 != 28);
		if ((uint32_t)phi8 == 4294967295)
		{
			*(uint32_t*)((anon2 << 2) + 6297408) = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi8 & 0xffffffff;
		}
	}
	else 
	{
		return 0;
	}
	uint32_t anon24 = (uint32_t)phi11 + 1;
	phi_in9 = (__zext uint64_t)anon24;
	phi10 = anon24;
	phi11 = phi11 + 1 & 0xffffffff;
	phi12 = anon13;
}
void m(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi_in1 = 0;
	uint32_t* anon2 = (uint32_t*)(((arg2 << 32 >> 32) + (arg1 << 32 >> 32 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon2 == 0)
	{
		uint64_t phi3;
		do
		{
			phi3 = phi_in1;
			phi_in1 = phi3 + 4;
		}
		while (phi3 != 28);
		*anon2 = 0;
		return;
	}
	else 
	{
		return;
	}
}
void l(uint64_t arg0)
{
	uint64_t anon6;
	uint32_t anon9;
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi_in2 = 6297448;
	do
	{
		uint64_t phi5;
		uint64_t phi3 = phi_in2;
		putchar((uint32_t)phi1);
		uint64_t phi_in4 = phi3;
		do
		{
			phi5 = phi_in4;
			printf((uint8_t*)0x400f79);
			phi_in4 = phi5 + 4;
		}
		while (phi5 != phi3 + 28);
		putchar(10);
		phi1 = phi1 + 1 & 0xffffffff;
		anon6 = phi3 + 40;
		phi_in2 = anon6;
	}
	while (anon6 != 6297768);
	putchar(32);
	uint32_t phi_in7 = 1;
	do
	{
		uint32_t phi8 = phi_in7;
		printf((uint8_t*)0x400f7d);
		anon9 = phi8 + 1;
		phi_in7 = anon9;
	}
	while (anon9 != 9);
	__indirect_jump(*(uint64_t*)0x601490);
}
void __libc_csu_init(uint64_t arg0, uint64_t arg1, uint64_t arg2, uint64_t arg3)
{
	_init(4198179);
	(*(void(**)(uint64_t, uint64_t, uint64_t))0x601288)(arg1 & 0xffffffff, arg2, arg3);
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
