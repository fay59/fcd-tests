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
	l(4195589);
	uint32_t phi1 = 60;
	while (true)
	{
		uint32_t phi6;
		uint32_t anon11;
		uint8_t* anon25;
		uint8_t* anon29;
		uint64_t phi41;
		uint64_t phi42;
		uint32_t phi43;
		uint32_t phi44;
		uint64_t phi2 = phi_in3;
		uint32_t phi_in4 = 1;
		uint32_t phi5 = 0;
		do
		{
			uint32_t anon12;
			phi6 = phi_in4;
			uint32_t phi_in7 = phi5;
			uint32_t phi_in8 = 1;
			do
			{
				uint32_t phi9 = phi_in7;
				uint32_t phi10 = phi_in8;
				anon11 = phi9 + (uint32_t)m.constprop.0(4195644, (__zext uint64_t)phi6, (__zext uint64_t)phi10);
				phi_in7 = anon11;
				anon12 = phi10 + 1;
				phi_in8 = anon12;
			}
			while (anon12 != 9);
			phi_in4 = phi6 + 1;
			phi5 = anon11;
		}
		while (phi6 != 8);
		uint64_t phi13 = phi2;
		uint64_t phi14 = 0;
		uint64_t phi_in15 = 1;
		uint32_t phi_in16 = 1;
		if (anon11 != 0)
		{
			uint64_t anon21;
			uint32_t anon30;
			do
			{
				uint32_t anon17;
				uint32_t anon18;
				uint32_t anon19;
				uint32_t anon20;
				printf((uint8_t*)0x400f81);
				do
				{
					anon17 = getchar();
					anon18 = anon17 - 65;
				}
				while (anon18 >= 8);
				do
				{
					anon19 = getchar();
					anon20 = anon19 - 49;
				}
				while (anon20 >= 8);
				anon21 = m.constprop.0(4195848, (__zext uint64_t)(anon17 - 64), (__zext uint64_t)(anon19 - 48));
			}
			while ((uint32_t)anon21 == 0);
			putchar(10);
			uint64_t phi22 = 65;
			uint64_t phi23 = 6297448;
			while (true)
			{
				putchar((uint32_t)phi22);
				uint64_t phi24 = phi23;
				anon25 = (uint8_t*)0x400f79;
				printf(anon25);
				putchar(10);
				uint64_t anon26 = phi23 + 40;
				if (anon26 != 6297768)
				{
					phi22 = phi22 + 1 & 0xffffffff;
					phi23 = anon26;
				}
				phi24 = phi24 + 4;
				break;
			}
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
			phi13 = phi2;
			phi14 = 0;
			phi_in15 = 1;
			phi_in16 = 1;
		}
		uint64_t phi31 = phi14;
		uint64_t phi32 = phi_in15;
		uint64_t phi33 = 1;
		uint32_t phi34 = phi_in16;
		uint32_t phi35 = 1;
		uint64_t anon36 = m.constprop.1(4195713, (__zext uint64_t)phi34, (__zext uint64_t)phi35);
		uint64_t anon38 = random();
		uint32_t anon37 = (uint32_t)anon36 + (uint32_t)anon38 + ((uint32_t)((anon38 & 0xffffffff) / 6) - (uint32_t)(anon38 << 32 >> 32 >> 31)) * 4294967290;
		uint32_t anon39 = (uint32_t)phi31;
		if (anon37 > anon39)
		{
			uint32_t anon40 = (uint32_t)phi33;
			*(uint32_t*)(arg1 - 72) = anon40;
			phi41 = phi32;
			phi42 = (__zext uint64_t)anon37;
			phi43 = anon37;
			phi44 = anon40;
		}
		else 
		{
			phi41 = phi13;
			phi42 = phi31;
			phi43 = anon39;
			phi44 = (uint32_t)phi33;
		}
		phi13 = phi41;
		phi31 = phi42;
		if (phi43 != 0)
		{
			if ((uint32_t)m.constprop.1(4196072, phi13 & 0xffffffff, 0) != 0)
			{
				uint32_t anon51;
				putchar(10);
				uint64_t phi45 = 65;
				uint64_t phi46 = 6297448;
				while (true)
				{
					putchar((uint32_t)phi45);
					uint64_t phi47 = phi46;
					printf(anon25);
					putchar(10);
					uint64_t anon48 = phi46 + 40;
					if (anon48 != 6297768)
					{
						phi45 = phi45 + 1 & 0xffffffff;
						phi46 = anon48;
					}
					phi47 = phi47 + 4;
					break;
				}
				putchar(32);
				uint32_t phi_in49 = 1;
				do
				{
					uint32_t phi50 = phi_in49;
					printf(anon29);
					anon51 = phi50 + 1;
					phi_in49 = anon51;
				}
				while (anon51 != 9);
				putchar(10);
			}
		}
		uint32_t anon52 = phi1 - 1;
		phi1 = anon52;
		uint64_t phi_in3 = phi13;
		phi14 = phi31;
		uint32_t anon54 = (uint32_t)phi32;
		uint32_t anon53 = anon54 + 1;
		phi_in15 = (__zext uint64_t)anon53;
		phi_in16 = anon53;
		uint32_t anon55 = phi44 + 1;
		phi33 = (__zext uint64_t)anon55;
		phi34 = (uint32_t)phi32;
		phi35 = anon55;
		break;
	}
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
	uint64_t phi_in8;
	uint32_t phi9;
	uint64_t phi10;
	uint64_t phi11;
	uint64_t anon12;
	uint64_t phi15;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		*anon1 = 1;
		uint64_t phi_in4 = 0;
		uint64_t phi5 = 1;
		do
		{
			phi6 = phi_in4;
			uint64_t phi7 = phi5;
			phi5 = phi7;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 4294967295)
			{
				phi_in8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				phi5 = phi7;
				int62_t anon13 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon12 = phi11 + ((__zext uint64_t)(anon13 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon14 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon12 + ((__zext uint64_t)-anon13 << 2) + ((-anon14 << 2) - anon14 << 3)) == 1)
				{
					uint32_t anon20;
					int64_t anon16 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in8 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi15 = anon16 + 6297408;
					uint64_t phi17 = anon16 + 6296960;
					do
					{
						uint64_t phi18 = phi_in8;
						*(uint32_t*)phi15 = 0;
						uint64_t anon19 = (__zext uint64_t)((uint32_t)phi7 + *(uint32_t*)phi17);
						phi5 = anon19;
						anon20 = (uint32_t)phi18 - 1;
						if (anon20 != 0)
						{
							phi7 = anon19;
							phi_in8 = (__zext uint64_t)anon20;
							int64_t anon21 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi15 = phi15 + anon21;
							phi17 = phi17 + anon21;
						}
					}
					while (anon20 != 0);
				}
			}
			phi_in4 = phi6 + 4;
		}
		while (phi6 != 28);
		if ((uint32_t)phi5 == 1)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi5 & 0xffffffff;
		}
	}
	uint32_t anon22 = (uint32_t)phi10 + 1;
	phi_in8 = (__zext uint64_t)anon22;
	phi9 = anon22;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon12;
	if (*anon1 != 0)
	{
		return 0;
	}
}
uint64_t m.constprop.1(uint64_t arg0, uint64_t arg1, uint64_t arg2)
{
	uint64_t phi8;
	uint32_t phi9;
	uint64_t phi10;
	uint64_t phi11;
	uint64_t anon13;
	uint64_t phi17;
	uint64_t anon2 = arg2 << 32 >> 32;
	uint64_t anon3 = arg1 << 32 >> 32;
	uint32_t* anon1 = (uint32_t*)((anon2 + (anon3 & 0x3fffffffffffffff) * 10 << 2) + 6297408);
	if (*anon1 == 0)
	{
		uint64_t phi6;
		uint64_t phi7;
		*anon1 = 4294967295;
		uint64_t phi_in4 = 0;
		uint64_t phi5 = 4294967295;
		do
		{
			phi6 = phi_in4;
			phi7 = phi5;
			if (*(uint32_t*)(((__sext int64_t)((uint32_t)arg2 + *(uint32_t*)(phi6 + 6296832)) + (__sext int64_t)((uint32_t)arg1 + *(uint32_t*)(phi6 + 6296896)) * 10 << 2) + 6297408) == 1)
			{
				phi8 = 1;
				phi9 = 1;
				phi10 = 1;
				phi11 = (((__zext uint64_t)*(uint32_t*)(phi6 + 6296832) << 33 >> 32) + anon2 + (((__zext uint64_t)*(uint32_t*)(phi6 + 6296896) << 33 >> 32) + anon3) * 10 << 2) + 6297408;
				uint64_t phi_in12 = phi8;
				int62_t anon14 = (__sext int62_t)*(uint32_t*)(phi6 + 6296832);
				anon13 = phi11 + ((__zext uint64_t)(anon14 + (__sext int62_t)*(uint32_t*)(phi6 + 6296896) * 10) << 2);
				int64_t anon15 = (__sext int64_t)*(uint32_t*)(phi6 + 6296896);
				if (*(uint32_t*)(anon13 + ((__zext uint64_t)-anon14 << 2) + ((-anon15 << 2) - anon15 << 3)) == 255)
				{
					uint32_t anon22;
					uint64_t phi16 = phi7;
					int64_t anon18 = (__sext int64_t)(phi9 * *(uint32_t*)(phi6 + 6296832)) + anon2 + ((__sext int64_t)((uint32_t)phi_in12 * *(uint32_t*)(phi6 + 6296896)) + anon3) * 10 << 2;
					phi17 = anon18 + 6297408;
					uint64_t phi19 = anon18 + 6296960;
					do
					{
						uint64_t phi20 = phi_in12;
						*(uint32_t*)phi17 = 0;
						uint64_t anon21 = (__zext uint64_t)((uint32_t)phi16 + *(uint32_t*)phi19);
						phi7 = anon21;
						anon22 = (uint32_t)phi20 - 1;
						if (anon22 != 0)
						{
							phi16 = anon21;
							phi_in12 = (__zext uint64_t)anon22;
							int64_t anon23 = (__sext int64_t)-*(uint32_t*)(phi6 + 6296832) + (__sext int64_t)-*(uint32_t*)(phi6 + 6296896) * 10 << 2;
							phi17 = phi17 + anon23;
							phi19 = phi19 + anon23;
						}
					}
					while (anon22 != 0);
				}
			}
			phi_in4 = phi6 + 4;
			phi5 = phi7;
		}
		while (phi6 != 28);
		if ((uint32_t)phi7 == 4294967295)
		{
			*anon1 = 0;
			return (__zext uint64_t)*anon1;
		}
		else 
		{
			return phi7 & 0xffffffff;
		}
	}
	uint32_t anon24 = (uint32_t)phi10 + 1;
	phi8 = (__zext uint64_t)anon24;
	phi9 = anon24;
	phi10 = phi10 + 1 & 0xffffffff;
	phi11 = anon13;
	if (*anon1 != 0)
	{
		return 0;
	}
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
	putchar(10);
	uint64_t phi1 = 65;
	uint64_t phi2 = 6297448;
	while (true)
	{
		uint32_t anon6;
		putchar((uint32_t)phi1);
		uint64_t phi3 = phi2;
		printf((uint8_t*)0x400f79);
		putchar(10);
		putchar(32);
		uint32_t phi_in4 = 1;
		do
		{
			uint32_t phi5 = phi_in4;
			printf((uint8_t*)0x400f7d);
			anon6 = phi5 + 1;
			phi_in4 = anon6;
		}
		while (anon6 != 9);
		phi1 = phi1 + 1 & 0xffffffff;
		uint64_t anon7 = phi2 + 40;
		phi2 = anon7;
		phi3 = phi3 + 4;
		break;
	}
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
