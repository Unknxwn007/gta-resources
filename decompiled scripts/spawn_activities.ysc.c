#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	char* sLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = -1;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	BOOL bLocal_120 = 0;
	BOOL bLocal_121 = 0;
	BOOL bLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
#endregion

void main() // Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = (0.05f + 0.275f) - 0.01f;
	iLocal_124 = -1;
	unk_0x51CC1333A10C4E09();
	unk_0xAECC5FA98C879D67(0);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (func_776())
			func_773();
	
		if (_SHOULD_NETWORK_SCRIPT_TERMINATE())
			func_773();
	
		switch (iLocal_119)
		{
			case 0:
				if (Global_2640095.f_27 && Global_1579586 == -1)
				{
				}
				else
				{
					if (!Global_2640095.f_16)
						func_86();
				
					if (!Global_2640095.f_15)
						func_59();
				
					if (func_47())
						iLocal_119 = 1;
				}
				break;
		
			case 1:
				if (func_1())
					func_773();
				break;
		
			case 2:
				break;
		}
	}

	return;
}

BOOL func_1() // Position - 0x11F
{
	var unk;

	if (Global_2640095.f_16)
	{
		if (!unk_0x0721B5D4CF3ACD02() && !unk_0xFD216000DC314A92() && !func_46() && !func_45(unk_0x259BE71D8A81D4FA()))
			unk_0xA6DFB7FC64F53E33(0);
	
		if (func_44())
		{
			if (!bLocal_120)
			{
				if (!unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
				{
					unk_0x44C48AC14D3C09ED(unk_0x4A8C381C258A124D(), 1, 0);
					unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 0);
				}
				else
				{
					unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
				
					if (!unk_0x1C2F771CDC87A3A5(unk, 0) && !unk_0x1C2F771CDC87A3A5(unk_0x4A8C381C258A124D(), 0))
					{
						unk_0x5D7CD709B34C90F0(unk, 0);
						unk_0xC229299217554C78(unk, 1, 1, 0);
						unk_0xE592D924D5438108(unk, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
					
						if (!IS_BIT_SET(Global_1977869, 29))
							unk_0x7C8E9DE09D4AD3FF(unk_0x4A8C381C258A124D(), unk, 20f, 786603);
					
						bLocal_122 = true;
					}
				}
			
				bLocal_120 = true;
			}
		}
	
		func_41();
	
		if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), false, true))
		{
			if (!Global_2640095.f_40)
			{
				Global_2640095.f_41 = unk_0x7E3F74F641EE6B27();
				Global_2640095.f_40 = 1;
			}
		
			switch (Global_2640095)
			{
				case 0:
					if (!Global_2640095.f_17)
					{
						Global_2640095.f_41 = unk_0x7E3F74F641EE6B27();
						Global_2640095.f_17 = 1;
					}
				
					if (func_38() || func_37())
					{
						if (Global_2640095.f_27)
						{
							if (unk_0x78411E34CF90EA8C(uLocal_117))
								unk_0xC289B882CEF4CAC9(0, 0, 3, 0);
						
							if (unk_0x78411E34CF90EA8C(uLocal_117))
								unk_0x85E6A1E36B5E2E4D(uLocal_117, 1);
						}
					
						return true;
					}
					break;
			
				case 1:
					if (func_38() || !func_36(joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) || func_37())
					{
						if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						{
							unk = unk_0x6EF03BE64E058E2F(unk_0x4A8C381C258A124D(), 0);
							unk_0x5D7CD709B34C90F0(unk, 0);
							unk_0x999C62072AF920FD(unk, 1);
						}
					
						Global_2640095.f_10 = 1;
						bLocal_122 = false;
						unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
						return true;
					}
					break;
			
				case 2:
					if (func_38() || !func_36(joaat("SCRIPT_TASK_WANDER_STANDARD")) || func_37())
					{
						unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
						bLocal_122 = false;
						return true;
					}
					else if (Global_2640095.f_39 > 0)
					{
						if (unk_0xE7B45027762DEFE7(unk_0x259BE71D8A81D4FA()) == 0)
						{
							unk_0x3CB52882A241CEA1(1f);
							unk_0x761F56E633460973(unk_0x4A8C381C258A124D(), 1193033728, 0);
						}
					}
					break;
			
				case 8:
					return func_35();
			
				case 9:
					return func_18();
			
				case 7:
					if (IS_BIT_SET(Global_1942781.f_7, 17))
					{
						unk_0xAF28608F1D388164();
						unk_0x43AE50D2A33F6E2A();
						unk_0x7009D885379C8CDF();
						unk_0x0C9B2F8C2BD128C2();
						unk_0xD10838CEA97E4725(19);
						unk_0x66EFB3D6110055C4(2, 199, 1);
						unk_0x66EFB3D6110055C4(2, 200, 1);
					
						if (func_17())
							func_14();
					
						unk_0x64BB72494B9DF6DC(0f);
						unk_0xD815D4BD1AE9E85A(0f, 1065353216);
					
						if (unk_0x643DC062EE904FCA(iLocal_124) == -1 || unk_0xBD3B265153D3BA2D(unk_0x643DC062EE904FCA(iLocal_124)) >= 0.99f)
						{
							unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
							unk_0xE37AF9002E782BA0(0, 1, 3000, 1, 0, 0);
							unk_0x268BE77F77533D03(func_5());
							bLocal_122 = false;
							func_4(10000);
						
							if (Global_2635562.f_3229)
							{
								func_3();
								Global_2635562.f_3229 = 0;
							}
						
							return true;
						}
					}
					else
					{
						unk_0x80813AC549A1E8AE("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
						unk_0x80813AC549A1E8AE("get_up@directional@movement@from_seated@standard");
					
						if (unk_0xE100DD4F82A51BDE("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED") && _DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
							{
								if (!unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 3))
								{
									unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 1090519040, -1056964608, -1, 2, 0, 0, 0, 0);
								}
								else if (unk_0x82E64DE58A6B84A8(unk_0x4A8C381C258A124D(), "get_up@directional@movement@from_seated@standard", "get_up_l_0") > 0.85f)
								{
									unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
									unk_0x268BE77F77533D03("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
									unk_0x268BE77F77533D03("get_up@directional@movement@from_seated@standard");
									bLocal_122 = false;
								
									if (Global_2640095.f_21)
									{
										unk_0xF20AB5C13902BB8A(4);
										Global_2640095.f_21 = 0;
									}
								
									func_4(10000);
								
									if (Global_2635562.f_3229)
									{
										func_3();
										Global_2635562.f_3229 = 0;
									}
								
									return true;
								}
							}
							else if (unk_0x82E64DE58A6B84A8(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front") > 0.85f && unk_0xE100DD4F82A51BDE("get_up@directional@movement@from_seated@standard") && !unk_0x15CCE8886267624F())
							{
								unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 1090519040, -1056964608, -1, 2, 0, 0, 0, 0);
							}
						}
					}
					break;
			
				case 3:
					return true;
			
				case 4:
				case 5:
					if (Global_2640095.f_19)
						return true;
					break;
			
				default:
					return true;
			}
		}
	}

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(var uParam0) // Position - 0x584
{
	if (unk_0xFC8BFE4B41177C22(uParam0))
		if (!unk_0x1C2F771CDC87A3A5(uParam0, 0))
			return 1;

	return 0;
}

void func_3() // Position - 0x5A5
{
	var unk;

	if (unk_0xF40767E41852FB72(Global_2644862.f_6))
		if (!(Global_2644862.f_6 == unk_0x8F76B2250AC806FA()))
			return;

	unk.f_7 = 1;
	unk.f_8 = 1;
	unk.f_21 = 1115815936;
	unk.f_27 = -1082130432;
	Global_2644862 = { unk };
	Global_2644862.f_6 = -1;
	return;
}

void func_4(int iParam0) // Position - 0x602
{
	int num;

	if (!Global_45087)
		return;

	num = unk_0x1DD05E817C89C737();
	Global_45089 = num + iParam0;
	Global_45090 = iParam0;
	return;
}

char* func_5() // Position - 0x627
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()) && func_6(unk_0x4A8C381C258A124D()))
		return "anim@scripted@heist@ig25_beach@heeled@";

	return "anim@scripted@heist@ig25_beach@male@";
}

BOOL func_6(var uParam0) // Position - 0x650
{
	int num;
	Player player;
	int num2;
	int num3;

	num = unk_0x4B423FAA24E8ABF0(uParam0);
	num2 = -1;
	num3 = -1;

	if (num == joaat("MP_F_Freemode_01"))
	{
		player = func_12(uParam0, 6);
	
		if (player >= 256)
		{
			num2 = func_8(num, player, 6, 4);
			num3 = func_7(num2);
		}
	
		if (player >= 0 && player <= 15 || player >= 96 && player <= 111 || player >= 112 && player <= 127 || player >= 128 && player <= 143 || player >= 192 && player <= 207 || player >= 224 && player <= 239 || num3 == 0 || num3 == 6 || num3 == 7 || num3 == 8 || num3 == 12 || num3 == 14 || num2 != -1 && unk_0x304A39EB177D246B(num2, joaat("HIGH_HEELS"), 0))
			return 1;
	}

	return 0;
}

int func_7(int iParam0) // Position - 0x76E
{
	int num;

	num = -1;

	if (iParam0 == 0)
		return num;

	if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_0"), 0))
		num = 0;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_1"), 0))
		num = 1;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_2"), 0))
		num = 2;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_3"), 0))
		num = 3;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_4"), 0))
		num = 4;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_5"), 0))
		num = 5;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_6"), 0))
		num = 6;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_7"), 0))
		num = 7;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_8"), 0))
		num = 8;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_9"), 0))
		num = 9;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_10"), 0))
		num = 10;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_11"), 0))
		num = 11;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_12"), 0))
		num = 12;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_13"), 0))
		num = 13;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_14"), 0))
		num = 14;
	else if (unk_0x304A39EB177D246B(iParam0, joaat("DRAW_15"), 0))
		num = 15;

	return num;
}

int func_8(int iParam0, Player plParam1, int iParam2, int iParam3) // Position - 0x8DB
{
	var unk;
	int num;
	int num2;
	var unk18;
	int num3;
	int num4;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7A491C9A90975007(&unk);
		num = plParam1 - func_11(iParam0);
	
		if (num < 0)
			return -1;
	
		num2 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
	
		if (num2 <= num)
			return -1;
	
		unk_0x2DBB2D25D50A5392(num, &unk);
		return unk.f_1;
	}
	else
	{
		unk_0x15D20F88F06530A5(&unk18);
		num3 = plParam1 - func_9(iParam0, func_10(iParam2));
	
		if (num3 < 0)
			return -1;
	
		if (iParam0 == Global_79181.f_26[iParam2] && plParam1 == Global_79181[iParam2] && Global_79181.f_13[iParam2] != 0)
			return Global_79181.f_13[iParam2];
	
		num4 = unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_10(iParam2));
	
		if (num4 <= num3)
			return -1;
	
		unk_0xD36906FE7BBBDB62(num3, &unk18);
		Global_79181.f_13[iParam2] = unk18.f_1;
		Global_79181[iParam2] = plParam1;
		Global_79181.f_26[iParam2] = iParam0;
		return unk18.f_1;
	}

	return -1;
}

Player func_9(int iParam0, int iParam1) // Position - 0x9F5
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

int func_10(int iParam0) // Position - 0xD9C
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

int func_11(int iParam0) // Position - 0xE4C
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 113;
	
		case joaat("Player_One"):
			return 175;
	
		case joaat("Player_Two"):
			return 155;
	}

	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 327;
	
		case joaat("MP_F_Freemode_01"):
			return 327;
	}

	return -99;
}

Player func_12(Vehicle veParam0, int iParam1) // Position - 0xEAD
{
	int num;
	var unk;
	var unk2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || unk_0x4FAFF4BCB7633475(veParam0))
		return -99;

	num = func_10(iParam1);
	unk = unk_0xC0120BBCC298EA2F(veParam0, num);
	unk2 = unk_0xD6AED6BFCC58AF7F(veParam0, num);
	return func_13(veParam0, unk, unk2, iParam1);
}

Player func_13(Vehicle veParam0, int iParam1, var uParam2, int iParam3) // Position - 0xF0D
{
	int num;
	int num2;
	int num3;
	int i;

	num = func_10(iParam3);
	num2 = unk_0x1A4EFE92822E3123(veParam0, num);

	for (i = 0; i <= num2 - 1; i = i + 1)
	{
		if (i != iParam1)
		{
			num3 = num3 + unk_0x8401C77F508D70FD(veParam0, num, i);
		}
		else
		{
			num3 = num3 + uParam2;
			return num3;
		}
	}

	return -99;
}

void func_14() // Position - 0xF64
{
	int i;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (Global_2672741.f_2518[i /*80*/].f_2 != 0)
		{
			Global_2672741.f_2518[i /*80*/].f_2 = 5;
			func_15(&(Global_2672741.f_2518[i /*80*/].f_69), 1);
		}
	}

	return;
}

void func_15(int iParam0, int iParam1) // Position - 0xFAF
{
	func_16(iParam0, iParam1);
	return;
}

void func_16(int iParam0, int iParam1) // Position - 0xFBF
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_17() // Position - 0xFD0
{
	return Global_2672741.f_2518[0 /*80*/].f_1 != 0;
}

BOOL func_18() // Position - 0xFE6
{
	if (Global_2640095.f_1 == 0)
	{
		unk_0x80813AC549A1E8AE("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
		unk_0x80813AC549A1E8AE("get_up@directional@movement@from_seated@standard");
	
		if (unk_0xE100DD4F82A51BDE("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED") && unk_0xE100DD4F82A51BDE("get_up@directional@movement@from_seated@standard"))
		{
			Global_2640095.f_1 = Global_2640095.f_1 + 1;
		
			if (unk_0x78411E34CF90EA8C(uLocal_117))
				unk_0x85E6A1E36B5E2E4D(uLocal_117, 0);
		
			if (unk_0x78411E34CF90EA8C(uLocal_118))
				unk_0x85E6A1E36B5E2E4D(uLocal_118, 0);
		}
	}

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()))
		return 0;

	if (Global_2640095.f_1 == 1)
	{
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("WEAPON_UNARMED"), 1);
		unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 1000f, -4f, -1, 2, 0, 0, 0, 0);
		Global_2640095.f_1 = Global_2640095.f_1 + 1;
		uLocal_127 = unk_0x1DD05E817C89C737();
		Global_2640095.f_16 = 1;
	}

	if (Global_2640095.f_1 == 2)
	{
		if (unk_0x1DD05E817C89C737() - uLocal_127 >= 1000)
		{
			if (func_33())
			{
				if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
					unk_0x458AA1A01F53901E(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 0.7f);
			
				uLocal_127 = unk_0x1DD05E817C89C737();
				Global_2640095.f_1 = Global_2640095.f_1 + 1;
				return 0;
			}
		}
	
		if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
			unk_0x458AA1A01F53901E(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 0f);
	}

	if (Global_2640095.f_1 == 3)
	{
		if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3) && unk_0x82E64DE58A6B84A8(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front") >= 0.85f || !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
		{
			unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 4f, -4f, -1, 2, 0, 0, 0, 0);
			Global_2640095.f_1 = Global_2640095.f_1 + 1;
			return 0;
		}
	}

	if (Global_2640095.f_1 == 4)
		if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 3) && unk_0x82E64DE58A6B84A8(unk_0x4A8C381C258A124D(), "get_up@directional@movement@from_seated@standard", "get_up_l_0") >= 0.85f || !unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 3))
			Global_2640095.f_1 = Global_2640095.f_1 + 1;
		else if (unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
			unk_0x458AA1A01F53901E(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 0.7f);

	if (Global_2640095.f_1 == 5)
	{
		unk_0x64BB72494B9DF6DC(160f);
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		unk_0x268BE77F77533D03("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
		unk_0x268BE77F77533D03("get_up@directional@movement@from_seated@standard");
		bLocal_122 = false;
		Global_2685249.f_2847.f_229 = -1;
		_SET_PLAYER_CONTROL_EX(unk_0x259BE71D8A81D4FA(), true, 0, 0);
		func_4(10000);
		return 1;
	}

	return 0;
}

void _SET_PLAYER_CONTROL_EX(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, int iParam3) // Position - 0x1275
{
	eSetPlayerControlFlags controlBs;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	BOOL flag25;
	BOOL flag26;
	var unk;
	int num;

	if (bParam1)
		if (unk_0x828F3FAE99DA791A())
			unk_0x6FF322107B12B749(0);

	if (func_32())
		if (bParam1)
			return;
		else
			iParam3 = 1;

	if (!unk_0x76CD105BCAC6EB9F())
	{
		controlBs = espcfParam2;
		unk_0x4686BC3BFDBB5348(plParam0, bParam1, controlBs);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		flag16 = espcfParam2 & 32768 != 0;
		flag17 = espcfParam2 & 65536 != 0;
		flag18 = espcfParam2 & 131072 != 0;
		flag19 = espcfParam2 & 262144 != 0;
		flag20 = espcfParam2 & 524288 != 0;
		flag21 = espcfParam2 & 1048576 != 0;
		flag22 = espcfParam2 & 2097152 != 0;
		flag23 = espcfParam2 & 4194304 != 0;
		flag24 = espcfParam2 & 8388608 != 0;
		flag25 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || unk_0x834C960822A4683F())
			flag = false;
	
		if (!func_33())
		{
			flag26 = false;
		
			if (bParam1 == true)
				flag26 = true;
		
			if (flag16 == false && !flag21)
				flag26 = true;
		
			if (flag10 == true)
				flag26 = true;
		
			if (flag26)
				return;
		}
	
		flag18;
	
		if (unk_0x762604C40829DB72(plParam0) && unk_0x75EAB09F5E974116(plParam0) || iParam3 == 1)
		{
			if (iParam3 && unk_0x1C2F771CDC87A3A5(unk_0x56E414973C2A8C0E(plParam0), 0))
				return;
		
			unk = unk_0x56E414973C2A8C0E(plParam0);
		
			if (!flag20)
			{
				if (flag19 && bParam1 == false && unk_0x76CD105BCAC6EB9F())
					unk_0x6E2FA5434737D22F(1);
				else if (flag14 || !func_28(unk_0x259BE71D8A81D4FA(), 0) && !func_27() && !func_45(unk_0x259BE71D8A81D4FA()))
					unk_0x4285E11B28063EE0(unk, !flag14, 0);
			
				if (!flag14)
				{
					if (unk_0x76CD105BCAC6EB9F() && !flag19)
						unk_0x6E2FA5434737D22F(0);
				
					Global_2657921[plParam0 /*463*/].f_254 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_24(0, 0, 0);
				
					if (flag25)
						unk_0xE3F88173F42C071B();
				}
			
				if (!func_23(unk) && !unk_0xB431D60610E7F85F(unk))
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, 1, 0);
			
				if (!unk_0xA3736D76B0E93E93(unk))
				{
					if (!flag21)
						unk_0x5D7CD709B34C90F0(unk, 0);
				
					unk_0x11C125313CB8ADA2(unk, 1);
				}
				else if (!flag21)
				{
					unk_0x5D7CD709B34C90F0(unk, 0);
				}
			
				unk_0x3F58BFCF656F0DF1(unk, 1);
				unk_0x2B52F77101390E6F(plParam0, 0);
				unk_0x6C4F5AA91D39455C(plParam0, 0);
			
				if (unk_0x4CEC77F224BCD884(unk) && unk_0x69CD279BFCFE278E(unk))
					unk_0xAF8337BF5A296283(unk);
			
				unk_0x9FF00EA9A61211D2(unk, 1);
			
				if (unk_0xE916D57851F785AB(unk_0x259BE71D8A81D4FA()) == 0)
				{
					func_22();
					func_21();
				}
			
				if (unk_0x705A7AB2D4BC0A9B())
					!flag23;
			
				unk_0x787F8EE1F6FBDC6D();
				Global_2657921[plParam0 /*463*/].f_255 = 0;
			
				if (!flag24)
					flag3 = true;
			
				if (Global_2697318)
				{
					unk_0xDD98B34A4A3AFA89(1);
					unk_0xDD98B34A4A3AFA89(1);
					Global_2697318 = false;
				}
			
				if (Global_2635562.f_2981)
					Global_2635562.f_2981 = 0;
			}
			else
			{
				if (!func_23(unk) && !unk_0xB431D60610E7F85F(unk))
				{
					if (!flag22)
						unk_0x44C48AC14D3C09ED(unk, !flag15, 0);
				
					if (!unk_0xA3736D76B0E93E93(unk))
					{
						if (!flag21)
							unk_0x5D7CD709B34C90F0(unk, flag16);
					
						if (!flag16)
							unk_0x11C125313CB8ADA2(unk, 1);
					}
				
					if (func_20(*Global_4718592.f_183007))
						unk_0x5D7CD709B34C90F0(unk, 1);
				}
			
				if (Global_1575052)
					flag10 = false;
			
				if (flag10)
					unk_0x2B52F77101390E6F(plParam0, 0);
				else
					unk_0x2B52F77101390E6F(plParam0, 1);
			
				unk_0x3F58BFCF656F0DF1(unk, flag17);
			
				if (flag3)
					if (!unk_0xBFD01C2045360289(unk) && !unk_0x7F420695E3F776FB(unk, 0))
						unk_0x19626F992DC71FB9(unk);
			}
		
			num = 0;
		
			if (flag2)
				num = num | 2;
		
			if (flag3)
				num = num | 4;
		
			if (flag4)
				num = num | 8;
		
			if (flag5)
				num = num | 16;
		
			if (flag6)
				num = num | 32;
		
			if (flag7)
				num = num | 64;
		
			if (flag8)
				num = num | 128;
		
			if (flag9)
				num = num | 256;
		
			if (flag10)
				num = num | 512;
		
			if (flag11)
				num = num | 1024;
		
			if (flag12)
				num = num | 2048;
		
			if (flag13)
				num = num | 4096;
		
			unk_0x4686BC3BFDBB5348(plParam0, bParam1, num);
		}
	}

	return;
}

BOOL func_20(int iParam0) // Position - 0x1727
{
	return iParam0 == 17;
}

void func_21() // Position - 0x1734
{
	var unk;

	Global_2672741.f_1028 = 0;
	Global_2672741.f_1029 = 0;
	Global_2672741.f_1030 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672741.f_1035 = -1;
	Global_2672741.f_1036 = 0;
	Global_2635562.f_2992 = { unk };
	return;
}

void func_22() // Position - 0x1781
{
	Global_2635562.f_702 = 0;
	Global_2635562.f_3035 = 0;
	Global_2635562.f_515 = 0;
	Global_2635562.f_606 = 0;
	Global_2657921[unk_0x259BE71D8A81D4FA() /*463*/].f_217 = 0;
	Global_2635562.f_2990 = 0;
	return;
}

BOOL func_23(var uParam0) // Position - 0x17BF
{
	int num;

	if (unk_0x7F420695E3F776FB(uParam0, 1))
	{
		return true;
	}
	else
	{
		num = unk_0x9B5C1660CCDF7189(uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (num == 0)
			return true;
	}

	return false;
}

void func_24(int iParam0, int iParam1, int iParam2) // Position - 0x17F0
{
	int num;
	int i;

	unk_0x1C2F771CDC87A3A5(iParam1, 0);

	if (iParam0 == 1)
		if (unk_0xFC8BFE4B41177C22(iParam1))
			if (unk_0x501EBB0523078750(iParam1))
				if (!unk_0xDFAE61B1AEF262C2(unk_0x259BE71D8A81D4FA(), unk_0x1C1C92A1CBAE364B(iParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_26();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = 0; i < 8; i = i + 1)
					{
						unk_0x07938654FF332D78(i, Global_2621446.f_58[i]);
					}
				}
			
				unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_28(unk_0x259BE71D8A81D4FA(), 0))
			unk_0x522EF6D7B4059F2C(iParam0, iParam1, 1);
		else
			unk_0xF11FEC6A04FD7226(iParam0, iParam1);
	
		unk_0x4BDB60141FD6E156(iParam0, iParam1);
		func_25(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}

	return;
}

void func_25(int iParam0, int iParam1) // Position - 0x18C0
{
	int num;

	num = iParam0;

	if (num != 0)
		unk_0xF1D0B0CE940F620D(num, iParam1, 1);

	return;
}

void func_26() // Position - 0x18DC
{
	int i;

	if (!unk_0xAD15761928FCF79C())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = 0; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = unk_0xBCF87EE3DC296C2A(i);
			}
		
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 2);
			unk_0x0B0C9A0F9AAEB7F0(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_27() // Position - 0x1934
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_28(Player plParam0, int iParam1) // Position - 0x1942
{
	BOOL flag;

	if (!func_31(plParam0))
		return false;

	if (plParam0 == unk_0x259BE71D8A81D4FA())
		flag = func_29(-1, false) == 8;
	else
		flag = Global_1845263[plParam0 /*877*/].f_205 == 8;

	if (iParam1 == 1)
		if (unk_0x762604C40829DB72(plParam0))
			flag = unk_0x1864096A95E36EBA(plParam0) == 8;

	return flag;
}

Player func_29(Player plParam0, BOOL bParam1) // Position - 0x199B
{
	Player player;
	Player player2;

	player2 = plParam0;

	if (player2 == -1)
		player2 = func_30();

	if (Global_1575059[player2] == true)
	{
		bParam1;
		player = 8;
	}
	else
	{
		player = Global_1574919[player2];
		bParam1;
	}

	return player;
}

Player func_30() // Position - 0x19DC
{
	return Global_1574925;
}

BOOL func_31(Player plParam0) // Position - 0x19E8
{
	Player player;

	player = plParam0;

	if (player < 0)
		return false;

	if (player >= 32)
		return false;

	return true;
}

BOOL func_32() // Position - 0x1A0A
{
	if (IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 2) && !(Global_2685249.f_2847.f_216 == -1))
		return true;

	return false;
}

BOOL func_33() // Position - 0x1A3B
{
	if (func_34() == 0)
		return true;

	return false;
}

int func_34() // Position - 0x1A50
{
	return Global_1574632.f_18;
}

BOOL func_35() // Position - 0x1A5E
{
	float num;
	Vector3 vector;

	if (Global_2640095.f_1 == 0)
	{
		unk_0x80813AC549A1E8AE("switch@michael@smoking2");
		unk_0xEC9DAA34BBB4658C(joaat("prop_cigar_01"));
	
		if (unk_0xE100DD4F82A51BDE("switch@michael@smoking2") && unk_0x6252BC0DD8A320DB(joaat("prop_cigar_01")))
		{
			Global_2640095.f_1 = Global_2640095.f_1 + 1;
		
			if (unk_0x78411E34CF90EA8C(uLocal_117))
				unk_0x85E6A1E36B5E2E4D(uLocal_117, 0);
		
			if (unk_0x78411E34CF90EA8C(uLocal_118))
				unk_0x85E6A1E36B5E2E4D(uLocal_118, 0);
		}
	}

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()))
		return 0;

	if (Global_2640095.f_1 == 1)
	{
		unk_0x5D7CD709B34C90F0(unk_0x4A8C381C258A124D(), 1);
		unk_0x3C0F448853B71C92(unk_0x4A8C381C258A124D(), joaat("WEAPON_UNARMED"), 1);
		vector = { unk_0xD1A6A821F5AC81DB(unk_0x4A8C381C258A124D(), 1) };
		vector.f_2 = vector.f_2 + -1f;
	
		if (SYSTEM::VDIST(Global_2635562.f_597, vector) > 2f)
			iLocal_124 = unk_0x2EC137C692A52458(vector, unk_0x88124E0D60FB8D11(unk_0x4A8C381C258A124D(), 2), 2);
		else
			iLocal_124 = unk_0x2EC137C692A52458(Global_2635562.f_597, unk_0x88124E0D60FB8D11(unk_0x4A8C381C258A124D(), 2), 2);
	
		uLocal_117 = unk_0xBB209150C6081BBE(joaat("DEFAULT_ANIMATED_CAMERA"), 1);
		unk_0x3DA436E63AB0F541(unk_0x4A8C381C258A124D(), iLocal_124, "switch@michael@smoking2", "exit", 1000f, -1000f, 1, 0, 1148846080, 0);
		unk_0xA7C372501A8A3B23(iLocal_124, 1);
		unk_0xBF3497E24DEAD835(iLocal_124, 1);
		unk_0xF9B66DAE101B699C(uLocal_117, iLocal_124, "exit_cam", "switch@michael@smoking2");
		unk_0xFEA88ACF99028CEA(uLocal_117, 0f);
		uLocal_126 = unk_0x4E55EAB577C13329(joaat("prop_cigar_01"), vector, 0, 1, 0);
		unk_0x4D306DD94DD6FDBA(uLocal_126, unk_0x4A8C381C258A124D(), unk_0x72F7E39FB49FC0BA(unk_0x4A8C381C258A124D(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0);
		unk_0x16B754A9C2FD8E74(iLocal_124, 0f);
		Global_2640095.f_1 = Global_2640095.f_1 + 1;
		uLocal_127 = unk_0x1DD05E817C89C737();
		Global_2640095.f_16 = 1;
	}

	if (Global_2640095.f_1 == 2)
	{
		if (unk_0x1DD05E817C89C737() - uLocal_127 >= 1000)
		{
			if (func_33())
			{
				if (unk_0x5266F1D2AEF6F73A(iLocal_124))
					unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
			
				unk_0x16B754A9C2FD8E74(iLocal_124, 0.7f);
				Global_2640095.f_1 = Global_2640095.f_1 + 1;
			}
		}
	}

	if (Global_2640095.f_1 == 3)
	{
		if (unk_0x5266F1D2AEF6F73A(iLocal_124))
		{
			num = unk_0xBD3B265153D3BA2D(iLocal_124);
		
			if (num >= 0.85f)
			{
				if (unk_0xA3736D76B0E93E93(uLocal_126))
				{
					unk_0x837D67618BF89034(uLocal_126, 1, 1);
					unk_0x5D7CD709B34C90F0(uLocal_126, 0);
					unk_0xC7D381E526A969D3(uLocal_126, 1);
				}
			}
		
			if (num >= 0.99f)
				Global_2640095.f_1 = Global_2640095.f_1 + 1;
		}
		else
		{
			Global_2640095.f_1 = Global_2640095.f_1 + 1;
		}
	}

	if (Global_2640095.f_1 == 4)
	{
		unk_0x64BB72494B9DF6DC(0f);
		unk_0xD815D4BD1AE9E85A(0f, 1065353216);
		unk_0x974022927CB47E68(unk_0x4A8C381C258A124D());
		unk_0xE37AF9002E782BA0(0, 0, 3000, 1, 0, 0);
	
		if (unk_0x78411E34CF90EA8C(uLocal_117))
			unk_0x85E6A1E36B5E2E4D(uLocal_117, 0);
	
		unk_0x268BE77F77533D03("switch@michael@smoking2");
		unk_0xB3B56385ECA230B4(&uLocal_126);
		unk_0x55098D9E9AD58806(joaat("prop_cigar_01"));
		bLocal_122 = false;
		Global_2685249.f_2847.f_229 = -1;
		_SET_PLAYER_CONTROL_EX(unk_0x259BE71D8A81D4FA(), true, 0, 0);
		return 1;
	}

	return 0;
}

BOOL func_36(int iParam0) // Position - 0x1D2A
{
	int num;

	num = unk_0x9B5C1660CCDF7189(unk_0x4A8C381C258A124D(), iParam0);

	if (!(num == 7))
		return true;

	return false;
}

BOOL func_37() // Position - 0x1D4B
{
	if (Global_2640095.f_40)
		if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2640095.f_41)) > 6000)
			return 1;

	return 0;
}

BOOL func_38() // Position - 0x1D79
{
	if (func_39(0))
		return true;

	return false;
}

BOOL func_39(int iParam0) // Position - 0x1D8E
{
	if (unk_0x93D020792180298F(iParam0) < 2000)
		return true;

	return false;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x1DA7
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (unk_0x762604C40829DB72(player))
		{
			if (bIsPlaying)
				if (!unk_0x75EAB09F5E974116(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672741.f_3)
					return Global_2672741.f_2;
				else if (Global_2657921[player /*463*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

void func_41() // Position - 0x1E07
{
	if (Global_2640095 == 0)
	{
		if (Global_2640095.f_27)
		{
			if (func_43())
			{
				if (!unk_0x78411E34CF90EA8C(uLocal_117))
				{
					if (unk_0x78411E34CF90EA8C(uLocal_118))
						unk_0x85E6A1E36B5E2E4D(uLocal_118, 0);
				
					uLocal_117 = unk_0x69D23632E4288DBD("DEFAULT_SCRIPTED_CAMERA", 0);
					func_42(Global_2640095.f_26, uLocal_117);
					unk_0x2A09425009DAD0F5(uLocal_117, "HAND_SHAKE", 0.2f);
					unk_0x4CBC5D1BC117616B(uLocal_117, 1);
					unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
				}
			}
		}
	}

	return;
}

void func_42(int iParam0, var uParam1) // Position - 0x1E79
{
	switch (iParam0)
	{
		case 0:
			unk_0x1761457F86AD0EE2(uParam1, -1589.0736f, -3015.3533f, -74.8535f);
			unk_0x5E5CEC33463AD803(uParam1, -15.8449f, 0f, 78.0001f, 2);
			unk_0x58BDA5D9262F5D30(uParam1, 25.1368f);
			break;
	
		case 2:
			unk_0x1761457F86AD0EE2(uParam1, -1589.8073f, -3008.4263f, -74.9934f);
			unk_0x5E5CEC33463AD803(uParam1, -17.1168f, 0f, 104.7282f, 2);
			unk_0x58BDA5D9262F5D30(uParam1, 34.7654f);
			break;
	
		case 4:
			unk_0x1761457F86AD0EE2(uParam1, -1592.2372f, -3008.1885f, -78.166f);
			unk_0x5E5CEC33463AD803(uParam1, -3.025f, 0f, 121.1804f, 2);
			unk_0x58BDA5D9262F5D30(uParam1, 35.9f);
			break;
	}

	return;
}

BOOL func_43() // Position - 0x1F39
{
	switch (Global_2640095.f_26)
	{
		case 0:
		case 2:
		case 4:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_44() // Position - 0x1F63
{
	if (unk_0x15CCE8886267624F() || unk_0x78ABC1D11B34F324())
		return false;

	if (unk_0x3555462DB47B7AB1())
		if (unk_0x1403FEB4554982F8() != 3)
			if (unk_0x6D231A0D52134FC1() > 9)
				return true;
	else
		return true;

	return false;
}

BOOL func_45(Player plParam0) // Position - 0x1FA4
{
	if (func_28(plParam0, 0))
		return true;

	if (func_27())
		if (plParam0 == unk_0x259BE71D8A81D4FA())
			return true;

	if (IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_199, 2))
		return true;

	return false;
}

BOOL func_46() // Position - 0x1FE3
{
	return Global_101444.f_394 > 0;
}

BOOL func_47() // Position - 0x1FF4
{
	if (Global_2640095.f_18)
	{
		func_58();
		func_53();
		return true;
	}

	if (func_52() || func_51())
	{
		func_58();
		func_53();
		return true;
	}

	if (func_50() && Global_2640095 != 5 && Global_2640095 != 6 && Global_2640095 != 7 && !Global_2640095.f_27 && !Global_2640095.f_28 && !Global_2640095.f_29 && !Global_2640095.f_30 && !Global_2640095.f_31 && !Global_2640095.f_32 && !Global_2640095.f_33 && !Global_2640095.f_35 && !Global_2640095.f_36 && !Global_2640095.f_37 && !(Global_2640095 == 8) && !(Global_2640095 == 9))
	{
		func_49(0);
		func_58();
		func_53();
		return true;
	}

	if (Global_2640095.f_16 && Global_2640095.f_15)
	{
		return true;
	}
	else if (!Global_2640095.f_20)
	{
		if (unk_0x486FF5D06E9659F1(joaat("spawn_activities")) == 0)
			if (func_48("spawn_activities", DEFAULT))
				Global_2640095.f_20 = 1;
	}
	else if (unk_0x486FF5D06E9659F1(joaat("spawn_activities")) == 0)
	{
		func_58();
		func_53();
		return true;
	}

	if (unk_0x510D0699BE9C6D06(unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), Global_2640095.f_3)) > 120000)
	{
		func_58();
		func_53();
		return true;
	}

	unk_0x0B0C9A0F9AAEB7F0(&Global_1936956[1], 22);
	return false;
}

BOOL func_48(char* sParam0, eStackSize essParam1) // Position - 0x2195
{
	int num;

	if (unk_0x61AD5054653814F5(sParam0))
	{
		unk_0x97A5024CE91641F1(sParam0);
	
		if (unk_0xA6E4F7A73ABC4A76(sParam0))
		{
			if (essParam1 <= 0)
				essParam1 = MINI;
		
			num = SYSTEM::START_NEW_SCRIPT(sParam0, essParam1);
			unk_0xFD49725F3FE7EE13(sParam0);
			return true;
		}
	}

	return false;
}

void func_49(int iParam0) // Position - 0x21D8
{
	if (!(Global_2640095 == iParam0))
		Global_2640095.f_1 = 0;

	Global_2640095 = iParam0;

	if (unk_0x76CD105BCAC6EB9F())
		Global_2640095.f_3 = unk_0x7E3F74F641EE6B27();

	return;
}

BOOL func_50() // Position - 0x2209
{
	return Global_2684312.f_846;
}

BOOL func_51() // Position - 0x2218
{
	return Global_2697509;
}

BOOL func_52() // Position - 0x2224
{
	return Global_1575075;
}

void func_53() // Position - 0x2230
{
	if (!func_57(1))
	{
		_STOPWATCH_DESTROY(&(Global_2644803.f_34));
	
		if (unk_0xBBE75ED2B58BB1F7(&(Global_2644803.f_2)))
			unk_0x268BE77F77533D03(&(Global_2644803.f_2));
	
		unk_0x8744D2E3FC95740E(&Global_1942781, 28);
		unk_0x8744D2E3FC95740E(&(Global_1942781.f_5), 20);
		func_55();
		func_54(1);
	}

	return;
}

void func_54(int iParam0) // Position - 0x2281
{
	Global_2644803 = iParam0;
	return;
}

void func_55() // Position - 0x228F
{
	Global_2644803.f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(Global_2644803.f_2), "", 64);
	TEXT_LABEL_ASSIGN_STRING(&(Global_2644803.f_18), "", 64);
	Global_2644803.f_37 = -1;
	return;
}

void _STOPWATCH_DESTROY(int iParam0) // Position - 0x22BD
{
	iParam0->f_1 = 0;
	return;
}

BOOL func_57(int iParam0) // Position - 0x22CA
{
	return Global_2644803 == iParam0;
}

void func_58() // Position - 0x22D9
{
	Global_2640095.f_23 = -1;
	Global_2640095.f_24 = -1;
	return;
}

void func_59() // Position - 0x22EF
{
	if (!(Global_2640095.f_23 > -1) || !(Global_2640095.f_24 > -1) || Global_2640095 == 6)
	{
		Global_2640095.f_15 = 1;
	}
	else
	{
		if (Global_2640095.f_25 == 0)
		{
			if (!func_78(Global_2640095.f_23, Global_2640095.f_24) || func_76(func_77(Global_2640095.f_23, Global_2640095.f_24), -1) > 0 || Global_2640095.f_27)
			{
				if (func_78(Global_2640095.f_23, Global_2640095.f_24))
					if (func_76(func_77(Global_2640095.f_23, Global_2640095.f_24), -1) < 0)
						func_73(func_77(Global_2640095.f_23, Global_2640095.f_24), 0, -1, 1);
			
				if (Global_2640095.f_27)
				{
					if (func_72())
						func_69();
				
					func_61(Global_2640095.f_23, Global_2640095.f_24, 1, true, func_68(), 1, 0, 0, 0, 0, 0, 1);
				}
				else
				{
					func_61(Global_2640095.f_23, Global_2640095.f_24, 1, true, 1, 1, 0, 0, 0, 0, 0, true);
				}
			
				Global_2640095.f_25 = Global_2640095.f_25 + 1;
			}
			else
			{
				Global_2640095.f_15 = 1;
			}
		}
	
		if (Global_2640095.f_25 == 1)
		{
			if (func_60() || Global_4521801 == -1 && Global_4521801.f_1 == -1 || Global_4521801.f_3 == 0)
			{
				Global_2640095.f_25 = Global_2640095.f_25 + 1;
				Global_2640095.f_15 = 1;
			}
		}
	}

	return;
}

BOOL func_60() // Position - 0x2465
{
	if (Global_4521801.f_910 == true)
		return true;

	return false;
}

void func_61(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11) // Position - 0x247D
{
	func_67(iParam0, iParam1);

	if (bParam3)
		if (func_66(&Global_4521801))
			func_65(&Global_4521801);

	Global_4521801.f_3 = 1;

	if (iParam4 || func_64(iParam0, iParam1))
		Global_4521801.f_4 = 1;

	Global_4521801.f_9 = iParam2;
	Global_4521801.f_13 = iParam5;
	Global_4521801.f_14 = iParam6;
	Global_4521801.f_15 = iParam9;
	Global_4521801.f_19 = iParam7;
	Global_4521801.f_16 = iParam10;
	Global_4521801.f_976 = iParam8;
	Global_4521801.f_17 = bParam11;

	if (IS_BIT_SET(Global_8685, 3))
		Global_4521801.f_5 = 1;

	if (bParam11)
		if (func_62(iParam0, iParam1))
			_STOPWATCH_DESTROY(&Global_2707559);

	return;
}

BOOL func_62(int iParam0, int iParam1) // Position - 0x252E
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 67:
					if (_STOPWATCH_IS_INITIALIZED(&Global_2707559))
						return true;
					break;
			}
			break;
	}

	return false;
}

BOOL _STOPWATCH_IS_INITIALIZED(int iParam0) // Position - 0x2566
{
	return iParam0->f_1;
}

int func_64(int iParam0, int iParam1) // Position - 0x2572
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 0;
			
				default:
					return 1;
			}
			break;
	}

	return 0;
}

void func_65(Hash hParam0) // Position - 0x25B8
{
	int num;
	int num2;
	int num3;

	num = func_76(func_77(2, 71), -1);
	num2 = func_76(func_77(2, 70), -1);
	num3 = func_76(func_77(2, 69), -1);

	if (num > 0)
		hParam0->f_1 = 71;
	else if (num2 > 0)
		hParam0->f_1 = 70;
	else if (num3 > 0)
		hParam0->f_1 = 69;

	return;
}

BOOL func_66(Hash hParam0) // Position - 0x2614
{
	if (*hParam0 == 2)
		if (hParam0->f_1 == 69 || hParam0->f_1 == 70 || hParam0->f_1 == 71)
			return true;

	return false;
}

void func_67(Hash hParam0, int iParam1) // Position - 0x264C
{
	Global_4521801 = hParam0;
	Global_4521801.f_1 = iParam1;
	return;
}

int func_68() // Position - 0x2662
{
	switch (Global_2640095.f_26)
	{
		case 0:
		case 2:
			return 0;
	
		case 1:
		case 3:
			return 1;
	
		case 4:
			switch (Global_1579584)
			{
				case 3:
				case 4:
					return 1;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

void func_69() // Position - 0x26BE
{
	int num;

	switch (Global_2640095.f_26)
	{
		case 0:
		case 2:
			Global_2640095.f_24 = 36;
			break;
	
		case 4:
			switch (Global_1579584)
			{
				case 0:
				case 1:
					Global_2640095.f_24 = 36;
					break;
			
				case 2:
					num = unk_0xC5935DFB3F39785A(0, func_71());
				
					switch (num)
					{
						case 0:
							Global_2640095.f_24 = 30;
							break;
					
						case 1:
							Global_2640095.f_24 = 32;
							break;
					
						case 2:
							Global_2640095.f_24 = 33;
							break;
					
						case 3:
							Global_2640095.f_24 = 35;
							break;
					
						case 4:
							Global_2640095.f_24 = 37;
							break;
					
						case 5:
							Global_2640095.f_24 = 38;
							break;
					
						case 6:
							Global_2640095.f_24 = 52;
							break;
					
						case 7:
							Global_2640095.f_24 = 53;
							break;
					
						case 8:
							Global_2640095.f_24 = 54;
							break;
					
						case 9:
							Global_2640095.f_24 = 55;
							break;
					
						case 10:
							Global_2640095.f_24 = 56;
							break;
					
						case 11:
							Global_2640095.f_24 = 57;
							break;
					}
					break;
			
				case 3:
				case 4:
					num = unk_0xC5935DFB3F39785A(0, func_70());
				
					switch (num)
					{
						case 0:
							Global_2640095.f_24 = 36;
							break;
					
						case 1:
							Global_2640095.f_24 = 30;
							break;
					
						case 2:
							Global_2640095.f_24 = 32;
							break;
					
						case 3:
							Global_2640095.f_24 = 33;
							break;
					
						case 4:
							Global_2640095.f_24 = 35;
							break;
					
						case 5:
							Global_2640095.f_24 = 37;
							break;
					
						case 6:
							Global_2640095.f_24 = 38;
							break;
					
						case 7:
							Global_2640095.f_24 = 52;
							break;
					
						case 8:
							Global_2640095.f_24 = 53;
							break;
					
						case 9:
							Global_2640095.f_24 = 54;
							break;
					
						case 10:
							Global_2640095.f_24 = 55;
							break;
					
						case 11:
							Global_2640095.f_24 = 56;
							break;
					
						case 12:
							Global_2640095.f_24 = 57;
							break;
					}
					break;
			}
			break;
	}

	return;
}

int func_70() // Position - 0x28F6
{
	int num;

	num = 7;
	num = 13;
	return num;
}

int func_71() // Position - 0x2907
{
	int num;

	num = 6;
	num = 12;
	return num;
}

BOOL func_72() // Position - 0x2918
{
	if (Global_2640095.f_24 == 2)
	{
		switch (Global_2640095.f_24)
		{
			case 30:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
			case 52:
			case 53:
			case 54:
			case 55:
			case 56:
			case 57:
				return true;
		
			default:
			
		}
	}

	return false;
}

void func_73(int iParam0, Player plParam1, Player plParam2, int iParam3) // Position - 0x298E
{
	int num;

	if (iParam0 != 14626)
	{
		num = func_74(iParam0, plParam2);
	
		if (num != 0)
			unk_0x1164A75E490C27B6(num, plParam1, iParam3);
	}

	return;
}

int func_74(int iParam0, Player plParam1) // Position - 0x29BC
{
	return unk_0xD69CE161FE614531(0, iParam0, func_75(plParam1));
}

Player func_75(Player plParam0) // Position - 0x29D1
{
	Player player;
	Player player2;

	player = plParam0;

	if (player == -1)
	{
		player2 = func_30();
	
		if (player2 > -1)
		{
			Global_2750546 = 0;
			player = player2;
		}
		else
		{
			player = 0;
			Global_2750546 = 1;
		}
	}

	return player;
}

Player func_76(int iParam0, Player plParam1) // Position - 0x2A05
{
	var unk;
	int num;

	if (iParam0 != 14626)
	{
		unk = func_74(iParam0, plParam1);
	
		if (unk_0xDF7F16323520B858(unk, &num, -1))
			return num;
	}

	return 0;
}

int func_77(int iParam0, int iParam1) // Position - 0x2A34
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1098;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 64:
					return 1098;
			
				case 65:
					return 62;
			
				case 66:
					return 63;
			
				case 67:
					return 7870;
			
				case 68:
					return 10405;
			
				case 69:
					return 1276;
			
				case 70:
					return 1277;
			
				case 71:
					return 1278;
			}
			break;
	}

	return 0;
}

BOOL func_78(int iParam0, int iParam1) // Position - 0x2AE9
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return true;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 64:
					if (func_84(unk_0x259BE71D8A81D4FA()) != -1 && func_82(func_84(unk_0x259BE71D8A81D4FA()), 11) && func_80() == 0)
						return !func_79(unk_0x259BE71D8A81D4FA());
				
					return true;
			
				case 65:
				case 66:
				case 67:
				case 68:
				case 69:
				case 70:
				case 71:
					return true;
			}
			break;
	}

	return false;
}

BOOL func_79(int iParam0) // Position - 0x2B9B
{
	return IS_BIT_SET(Global_2657921[iParam0 /*463*/].f_321.f_3, 13);
}

int func_80() // Position - 0x2BB4
{
	return func_81(unk_0x259BE71D8A81D4FA());
}

int func_81(int iParam0) // Position - 0x2BC4
{
	return unk_0x8B5B2BE72A7C0CF6(Global_2657921[iParam0 /*463*/].f_321.f_3, 28, 31);
}

BOOL func_82(Player plParam0, int iParam1) // Position - 0x2BE1
{
	return func_83(plParam0) == iParam1;
}

int func_83(Player plParam0) // Position - 0x2BF2
{
	switch (plParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
	}

	return -1;
}

Player func_84(Player plParam0) // Position - 0x30CC
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657921[plParam0 /*463*/].f_321.f_7;
		else if (Global_1575079 || Global_2635562.f_2980 && plParam0 == unk_0x259BE71D8A81D4FA() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657921[plParam0 /*463*/].f_321.f_7;

	return -1;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x313B
{
	return -1;
}

void func_86() // Position - 0x3144
{
	var unk;
	var unk4;
	int num;

	if (!(Global_2640095 > -1))
	{
		Global_2640095.f_16 = 1;
	}
	else
	{
		switch (Global_2640095)
		{
			case 0:
				switch (Global_2640095.f_1)
				{
					case 0:
						if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), false, false))
							Global_2640095.f_16 = 1;
						break;
				}
				break;
		
			case 1:
				if (Global_2640095.f_1 == 0)
				{
					if (func_727())
					{
						Global_2640095.f_2 = 0;
						Global_2640095.f_8 = 1;
						Global_2640095.f_11 = 1;
						Global_2640095.f_12 = 1;
						Global_2640095.f_9 = 1;
						Global_2640095.f_1 = Global_2640095.f_1 + 1;
					}
					else
					{
						Global_2640095.f_16 = 1;
					}
				}
			
				if (Global_2640095.f_1 == 1)
					if (func_727())
						if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), false, false))
							if (func_725(0))
								Global_2640095.f_1 = Global_2640095.f_1 + 1;
					else
						Global_2640095.f_16 = 1;
			
				if (Global_2640095.f_1 == 2)
					if (unk_0x7F420695E3F776FB(unk_0x4A8C381C258A124D(), 0))
						Global_2640095.f_16 = 1;
				break;
		
			case 2:
				if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), false, false))
				{
					if (Global_2640095.f_39 > 0)
					{
						unk_0x3CB52882A241CEA1(2f);
						unk_0x761F56E633460973(unk_0x4A8C381C258A124D(), 1193033728, 0);
					}
					else
					{
						unk_0x761F56E633460973(unk_0x4A8C381C258A124D(), 1193033728, 0);
					}
				
					bLocal_122 = true;
					Global_2640095.f_16 = 1;
				}
				break;
		
			case 7:
				if (IS_BIT_SET(Global_1942781.f_7, 17))
				{
					if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), false, false))
					{
						if (!IS_BIT_SET(iLocal_125, 0))
						{
							func_366(2);
							unk_0x0B0C9A0F9AAEB7F0(&iLocal_125, 0);
						}
						else if (func_364())
						{
							unk_0x80813AC549A1E8AE(func_5());
						
							if (unk_0xE100DD4F82A51BDE(func_5()))
							{
								switch (Global_2640095.f_38)
								{
									case 0:
										unk = { -1355.0016f, -1673.9679f, 2.1269f };
										unk4 = { 0f, 0f, 313.887f };
										break;
								
									case 1:
										unk = { -1409.1108f, -1574.2098f, 1.1427f };
										unk4 = { 0f, 0f, 302.7025f };
										break;
								
									case 2:
										unk = { -1559.4794f, -1230.7761f, 0.6671f };
										unk4 = { 0f, 0f, 302.0941f };
										break;
								
									case 3:
										unk = { -1545.4159f, -1251.4567f, 1.0141f };
										unk4 = { 0f, 0f, 309.1964f };
										break;
								
									case 4:
										unk = { -1516.5511f, -1326.3306f, 1.0825f };
										unk4 = { 0f, 0f, 290.5325f };
										break;
								
									case 5:
										unk = { -1500.7712f, -1391.5809f, 0.8837f };
										unk4 = { 0f, 0f, 287.5468f };
										break;
								}
							
								unk_0x64BB72494B9DF6DC(0f);
								unk_0xD815D4BD1AE9E85A(0f, 1065353216);
								iLocal_124 = unk_0xBC5D9A293974F095(unk, unk4, 2, 1, 0, 1065353216, 0, 1065353216);
								unk_0x0B94AB707B44E754(unk_0x4A8C381C258A124D(), iLocal_124, func_5(), "action", 1000f, -2f, 13, 16, 2f, 0);
								unk_0xE7101255AD6F1952(iLocal_124);
								uLocal_117 = unk_0xBB209150C6081BBE(joaat("DEFAULT_ANIMATED_CAMERA"), 1);
								unk_0x73D04EA6A13117B7(uLocal_117, "action_camera", func_5(), unk, unk4, 0, 2);
								unk_0xE37AF9002E782BA0(1, 0, 3000, 1, 0, 0);
								Global_2640095.f_16 = 1;
							}
						}
					}
				}
				else if (Global_2640095.f_48)
				{
					bLocal_122 = true;
					unk_0x64BB72494B9DF6DC(160f);
					unk_0xD815D4BD1AE9E85A(0f, 1065353216);
					Global_2640095.f_16 = 1;
					Global_2640095.f_48 = 0;
				}
				else
				{
					if (Global_2635562.f_3226)
					{
						if (!Global_2635562.f_3227 && !Global_2635562.f_3228)
						{
							if (func_363() && func_361() == 0 && func_193(unk_0x259BE71D8A81D4FA(), 243, false) == -1)
							{
								func_178(10);
								Global_2635562.f_3227 = 1;
							}
							else
							{
								Global_2635562.f_3228 = 1;
							}
						}
						else
						{
							if (!Global_2635562.f_3228)
							{
								if (func_177(unk_0x259BE71D8A81D4FA()) == 243)
								{
									num = -1;
								
									switch (func_176(unk_0x259BE71D8A81D4FA()))
									{
										case 31:
											num = 0;
											break;
									
										case 32:
											num = 1;
											break;
									
										case 33:
											num = 2;
											break;
									
										case 34:
											num = 3;
											break;
									}
								
									func_165(&(Global_2635562.f_2987), num);
									func_146(unk_0x4A8C381C258A124D(), 0, 3);
								}
								else if (!func_140(unk_0x259BE71D8A81D4FA(), 243, -1))
								{
									func_165(&(Global_2635562.f_2987), -1);
								}
								else
								{
									return;
								}
							}
							else
							{
								func_165(&(Global_2635562.f_2987), unk_0xC5935DFB3F39785A(0, 4));
							}
						
							Global_2635562.f_3228 = 0;
							Global_2635562.f_3226 = 0;
							Global_2635562.f_3227 = 0;
						}
					}
				
					if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), false, false) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(unk_0x4A8C381C258A124D()))
					{
						unk_0x80813AC549A1E8AE("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
					
						if (unk_0xE100DD4F82A51BDE("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED"))
						{
							if (!unk_0x13CCB1AD131C1082(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
							{
								unk_0x10425721983AE158(unk_0x4A8C381C258A124D(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 1000f, -1056964608, -1, 2, 0.1f, 0, 0, 0);
								bLocal_122 = true;
							}
							else
							{
								unk_0x64BB72494B9DF6DC(160f);
								unk_0xD815D4BD1AE9E85A(0f, 1065353216);
								Global_2640095.f_16 = 1;
							}
						}
					}
				}
				break;
		
			case 8:
				func_35();
				break;
		
			case 9:
				func_18();
				break;
		
			case 3:
			case 4:
			case 5:
			case 6:
				if (_NETWORK_IS_PLAYER_VALID(unk_0x259BE71D8A81D4FA(), false, false))
				{
					if (Global_2640095.f_1 == 0)
					{
						func_139(Global_2640095);
					
						if (!Global_2635562.f_2980 && !func_138() && !func_137())
							Global_2635562.f_2977 = 1;
					
						uLocal_123 = unk_0x7E3F74F641EE6B27();
						Global_2640095.f_1 = Global_2640095.f_1 + 1;
					}
				
					if (Global_2640095.f_1 == 1)
					{
						if (!func_135(Global_2640095) || unk_0x775142054EC39277(unk_0x7E3F74F641EE6B27(), uLocal_123) > 20000)
						{
							Global_1942781.f_4881 = -1;
							Global_2640095.f_16 = 1;
							func_134();
						}
						else
						{
							Global_1578025 = true;
						
							if (!Global_2635562.f_2980 && !func_138() && !func_137())
								func_87();
						
							if (!bLocal_121)
							{
								unk_0x4C38AD1938C28F80(8);
								unk_0x4C38AD1938C28F80(2);
								bLocal_121 = true;
							}
						}
					}
				}
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_87() // Position - 0x3751
{
	eStackSize stackSize;
	var unk;

	stackSize = PROPERTY_INT;

	if (IS_BIT_SET(Global_1844902.f_22, 5) || IS_BIT_SET(Global_1844902.f_22, 6) || IS_BIT_SET(Global_1844902.f_22, 8) || IS_BIT_SET(Global_1844902.f_22, 7) || IS_BIT_SET(Global_1844902.f_22, 9) || IS_BIT_SET(Global_1844902.f_22, 20) || func_133())
	{
		if (!IS_BIT_SET(Global_1310720.f_6, 0))
		{
			if (unk_0x486FF5D06E9659F1(joaat("am_mp_property_int")) <= 0 && !unk_0x99F8FC8A6D8E20C0("AM_MP_PROPERTY_INT", Global_1310720.f_1510, 1, 0))
			{
				unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
			
				if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
					unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
				}
			}
		}
	}
	else if (Global_2635562.f_2977)
	{
		if (!IS_BIT_SET(Global_1310720.f_6, 0))
		{
			if (unk_0x486FF5D06E9659F1(joaat("am_mp_property_int")) <= 0 && !unk_0x99F8FC8A6D8E20C0("AM_MP_PROPERTY_INT", Global_1310720.f_1510, 1, 0))
			{
				unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
			
				if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
					unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
				}
			}
		}
	}
	else if (Global_1844902.f_19 != 0 && func_132(unk_0x259BE71D8A81D4FA(), true, false))
	{
		if (!IS_BIT_SET(Global_1310720.f_6, 0))
		{
			if (unk_0x486FF5D06E9659F1(joaat("am_mp_property_int")) <= 0 && !unk_0x99F8FC8A6D8E20C0("AM_MP_PROPERTY_INT", Global_1310720.f_1510, 1, 0))
			{
				unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
			
				if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
					unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
					unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
				}
			}
		}
	}
	else if (Global_2696429)
	{
		if (unk_0x486FF5D06E9659F1(joaat("am_mp_property_int")) <= 0 && !unk_0x99F8FC8A6D8E20C0("AM_MP_PROPERTY_INT", Global_1310720.f_1510, 1, 0))
		{
			unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
		
			if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
			{
				SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
				unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
				unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
				Global_2696429 = false;
			}
		}
	}
	else if (!IS_BIT_SET(Global_1310720.f_6, 0) && !IS_BIT_SET(Global_2738587.f_445.f_5, 3) && !Global_2635561 || Global_2635561 && Global_2685249.f_1.f_2829.f_13 > 0 && !func_131() && !func_126() && !func_125() && !func_124() && !Global_1574988 && !func_45(unk_0x259BE71D8A81D4FA()) || Global_1575002)
	{
		if (unk_0x486FF5D06E9659F1(joaat("am_mp_property_int")) <= 0 && !unk_0x99F8FC8A6D8E20C0("AM_MP_PROPERTY_INT", Global_1310720.f_1510, 1, 0))
		{
			if (!func_123())
			{
				if (func_119())
				{
					unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
				
					if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
					{
						SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
						unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
						unk_0x0B0C9A0F9AAEB7F0(&(Global_1844902.f_22), 12);
						return;
					}
				
					return;
				}
			}
			else
			{
				if (!func_118(Global_1310720.f_1509) && unk_0xED977E2AE2CB16EE(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), func_116(Global_1310720.f_1509), 1) <= 30f)
				{
					if (func_114(&Global_1312263[Global_1310720.f_1509 /*1951*/], 1, 0))
					{
						if (!IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 12))
						{
							unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
						
							if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
								unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1844902.f_22), 12);
								return;
							}
						
							return;
						}
					}
					else
					{
						unk = { _GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()) };
					}
				}
			
				if (func_110(Global_1310720.f_1509, false, false))
				{
					if (func_101(Global_1310720.f_1509, unk_0x259BE71D8A81D4FA(), false, true) || func_114(&Global_1312263[Global_1310720.f_1509 /*1951*/], 1, 0))
					{
						if (!IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 12))
						{
							unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
						
							if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
								unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1844902.f_22), 12);
								return;
							}
						
							return;
						}
					}
				}
			
				if (unk_0xED977E2AE2CB16EE(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), func_100(2), 1) <= 30f)
				{
					func_99(&unk, 2);
				
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk, unk.f_3, unk.f_6, 0, 1, 0))
					{
						if (!IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 12))
						{
							unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
						
							if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
								unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1844902.f_22), 12);
								return;
							}
						
							return;
						}
					}
				}
			
				if (unk_0xED977E2AE2CB16EE(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), func_100(6), 1) <= 30f)
				{
					func_99(&unk, 6);
				
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk, unk.f_3, unk.f_6, 0, 1, 0))
					{
						if (!IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 12))
						{
							unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
						
							if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
								unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1844902.f_22), 12);
								return;
							}
						
							return;
						}
					}
				}
			
				if (unk_0xED977E2AE2CB16EE(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), func_100(10), 1) <= 30f)
				{
					func_99(&unk, 10);
				
					if (unk_0x5105BE70DEF1F5FB(unk_0x4A8C381C258A124D(), unk, unk.f_3, unk.f_6, 0, 1, 0))
					{
						if (!IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 12))
						{
							unk_0x97A5024CE91641F1("AM_MP_PROPERTY_INT");
						
							if (unk_0xA6E4F7A73ABC4A76("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", stackSize);
								unk_0xFD49725F3FE7EE13("AM_MP_PROPERTY_INT");
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1310720.f_6), 0);
								unk_0x0B0C9A0F9AAEB7F0(&(Global_1844902.f_22), 12);
								return;
							}
						
							return;
						}
					}
				}
			
				Global_1310720.f_1509 = Global_1310720.f_1509 + 1;
			
				if (Global_1310720.f_1509 > 131 || IS_BIT_SET(Global_1310720.f_6, 10))
				{
					Global_1310720.f_1509 = 0;
					Global_1310720.f_1511 = 0;
				
					if (IS_BIT_SET(Global_1310720.f_6, 10))
						unk_0x8744D2E3FC95740E(&(Global_1310720.f_6), 10);
				
					if (Global_2685249.f_1.f_2829.f_13 != 0)
						if (!func_98() && !func_97() && !unk_0xFFB255D6878CB691())
							if (!func_96() && !func_95() && !_IS_FMMC_ACTIVE())
								if (!func_93() && !func_92() && !func_91())
									if (!func_90())
										if (!func_89())
											if (!Global_2685249.f_2847.f_158)
												func_88();
				}
			}
		}
	}

	return;
}

void func_88() // Position - 0x3E8A
{
	Global_2685249.f_1.f_2829.f_13 = 0;
	Global_2685249.f_1.f_2829 = 0;
	Global_2685249.f_1.f_2829.f_1 = 0;
	Global_2685249.f_1.f_2829.f_2 = 0;
	Global_2685249.f_1.f_2829.f_3 = 0;
	Global_2685249.f_1.f_2829.f_4 = 0;
	Global_2685249.f_1.f_2829.f_5 = 0;
	Global_2685249.f_1.f_2829.f_6 = 0;
	Global_2685249.f_1.f_2829.f_7 = 0;
	Global_2685249.f_1.f_2829.f_8 = 0;
	Global_2685249.f_1.f_2829.f_9 = 0;
	Global_2685249.f_1.f_2829.f_10 = 0;
	Global_2685249.f_1.f_2829.f_11 = 0;
	Global_2685249.f_1.f_2829.f_12 = 0;
	return;
}

BOOL func_89() // Position - 0x3F38
{
	return Global_2684312.f_748;
}

BOOL func_90() // Position - 0x3F47
{
	return Global_2684312.f_847;
}

BOOL func_91() // Position - 0x3F56
{
	return IS_BIT_SET(Global_2684312, 20);
}

BOOL func_92() // Position - 0x3F65
{
	return IS_BIT_SET(Global_2684312, 2);
}

BOOL func_93() // Position - 0x3F73
{
	return IS_BIT_SET(Global_2684312, 1);
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x3F81
{
	return Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_192 != 0;
}

BOOL func_95() // Position - 0x3F98
{
	return Global_1919244.f_3;
}

BOOL func_96() // Position - 0x3FA6
{
	return Global_2684312.f_740;
}

BOOL func_97() // Position - 0x3FB5
{
	return Global_2684312.f_691;
}

BOOL func_98() // Position - 0x3FC4
{
	return Global_2684312.f_692;
}

struct<8> func_99(var uParam0, int iParam1) // Position - 0x3FD3
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175.0434f, -998.7965f, -100.225586f };
			uParam0->f_3 = { 175.08784f, -1009.0036f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
	
		case 6:
			*uParam0 = { 212.9084f, -999.67755f, -99.99996f };
			uParam0->f_3 = { 189.68436f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
	
		case 10:
			*uParam0 = { 230.00945f, -1009.12354f, -100.65389f };
			uParam0->f_3 = { 230.59389f, -964.022f, -94.53618f };
			uParam0->f_6 = 23.5f;
			break;
	}

	return *uParam0;
}

Vector3 func_100(int iParam0) // Position - 0x409A
{
	var unk;

	switch (iParam0)
	{
		case 2:
			unk = { 172.7787f, -1003.2102f, -99.9999f };
			break;
	
		case 6:
			unk = { 198.6071f, -1000.5364f, -100f };
			break;
	
		case 10:
			unk = { 227.8602f, -991.1093f, -99.9999f };
			break;
	}

	return unk;
}

BOOL func_101(Player plParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4101
{
	var unk;

	if (func_109(plParam0) || func_110(plParam0, false, false))
	{
		if (_NETWORK_IS_PLAYER_VALID(plParam1, true, true))
		{
			if (unk_0xED977E2AE2CB16EE(Global_1312263[plParam0 /*1951*/].f_146.f_47, _GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), !bParam2) <= 75f)
			{
				unk = 2;
				func_103(plParam0, 971, &unk[0 /*6*/], func_108(plParam0), true);
				func_103(plParam0, 972, &unk[1 /*6*/], func_108(plParam0), true);
			
				if (unk_0x5105BE70DEF1F5FB(unk_0x56E414973C2A8C0E(plParam1), unk[0 /*6*/], unk[1 /*6*/], unk[0 /*6*/].f_3.f_2, 0, 1, 0))
					return true;
				else if (bParam3)
					return false;
			
				if (bParam2)
				{
					if (unk[0 /*6*/].f_2 < unk[1 /*6*/].f_2)
						unk[0 /*6*/].f_2 = unk[0 /*6*/].f_2 - 1000f;
					else
						unk[1 /*6*/].f_2 = unk[1 /*6*/].f_2 - 1000f;
				
					if (unk_0x5105BE70DEF1F5FB(unk_0x56E414973C2A8C0E(plParam1), unk[0 /*6*/], unk[1 /*6*/], 30f, 0, 1, 0))
						return true;
				
					if (unk_0x15CCE8886267624F())
						return true;
				}
			
				if (func_102(unk_0x259BE71D8A81D4FA()))
					return true;
			}
		}
	}

	return false;
}

BOOL func_102(int iParam0) // Position - 0x423C
{
	return IS_BIT_SET(Global_2657921[iParam0 /*463*/].f_200, 5);
}

void func_103(Player plParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x4251
{
	var unk;
	var unk14;

	unk = 2;
	unk[0 /*6*/] = { func_107(iParam3, bParam4) };
	unk[1 /*6*/] = { func_107(plParam0, bParam4) };
	*uParam2 = { func_105(iParam1, iParam3) };
	unk14 = { *uParam2 - unk[0 /*6*/] };
	unk14 = { func_104(unk14, -unk[0 /*6*/].f_3.f_2) };
	unk14 = { func_104(unk14, unk[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0xF10F2A2453AF1DFB(unk[1 /*6*/], 0f, unk14) };

	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (unk[0 /*6*/].f_3.f_2 > 180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[0 /*6*/].f_3.f_2 < -180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 + 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 > 180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 < -180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 + 360f;
			}
		
			uParam2->f_3.f_2 = uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
		
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 - 360f;
			}
		
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 + 360f;
			}
			break;
	}

	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (unk[0 /*6*/].f_3.f_2 > 180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[0 /*6*/].f_3.f_2 < -180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 + 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 > 180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 < -180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 + 360f;
			}
		
			uParam2->f_3.f_2 = uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
		
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 - 360f;
			}
		
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 + 360f;
			}
			break;
	}

	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
			while (unk[0 /*6*/].f_3.f_2 > 180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[0 /*6*/].f_3.f_2 < -180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 + 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 > 180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 < -180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 + 360f;
			}
		
			uParam2->f_3.f_2 = uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
		
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 - 360f;
			}
		
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 + 360f;
			}
			break;
	}

	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 688:
			while (unk[0 /*6*/].f_3.f_2 > 180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[0 /*6*/].f_3.f_2 < -180f)
			{
				unk[0 /*6*/].f_3.f_2 = unk[0 /*6*/].f_3.f_2 + 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 > 180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 - 360f;
			}
		
			while (unk[1 /*6*/].f_3.f_2 < -180f)
			{
				unk[1 /*6*/].f_3.f_2 = unk[1 /*6*/].f_3.f_2 + 360f;
			}
		
			uParam2->f_3.f_2 = uParam2->f_3.f_2 + (unk[1 /*6*/].f_3.f_2 - unk[0 /*6*/].f_3.f_2);
		
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 - 360f;
			}
		
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = uParam2->f_3.f_2 + 360f;
			}
			break;
	}

	return;
}

Vector3 func_104(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x5705
{
	float num;
	float num2;
	float num3;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_105(int iParam0, int iParam1) // Position - 0x5749
{
	var unk;
	var unk7;
	int num;

	num = 0;

	if (func_106(iParam1, &unk7))
		num = 1;

	if (num && unk_0xC557C842E425A746(&unk, &(unk.f_3), iParam0, unk7))
		return unk;

	return unk;
}

BOOL func_106(int iParam0, var uParam1) // Position - 0x578B
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return true;
	
		case 61:
			*uParam1 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return true;
	
		case 73:
			*uParam1 = 2;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return true;
	
		case 77:
			*uParam1 = 3;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return true;
	
		case 83:
			*uParam1 = 4;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return true;
	
		case 86:
			*uParam1 = 5;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return true;
	
		case 88:
			*uParam1 = 6;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return true;
	
		case 91:
			*uParam1 = 7;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return true;
	
		case 97:
			*uParam1 = 8;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return true;
	
		case 109:
			*uParam1 = 9;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return true;
	}

	return false;
}

struct<6> func_107(Player plParam0, BOOL bParam1) // Position - 0x58B1
{
	var unk;

	switch (plParam0)
	{
		case -1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 1:
			unk = { -794.9184f, 339.6266f, 200.4135f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 2:
			unk = { -761.0982f, 317.6259f, 169.59628f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { -761.1888f, 317.6295f, 216.0503f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { -795.3856f, 340.0188f, 152.7941f };
			unk.f_3 = { 0f, 0f, 179.99997f };
			break;
	
		case 61:
			unk = { -778.5056f, 332.3779f, 212.1968f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 5:
			unk = { -258.1807f, -950.6853f, 70.0239f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 6:
			unk = { -285.0051f, -957.6552f, 85.3035f };
			unk.f_3 = { 0f, 0f, -109.99999f };
			break;
	
		case 7:
			unk = { -1471.8821f, -530.7484f, 62.34918f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 34:
			unk = { -1471.8821f, -530.7484f, 49.72156f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 62:
			unk = { -1463.15f, -540.2369f, 74.2439f };
			unk.f_3 = { 0f, 0f, -145f };
			break;
	
		case 35:
			unk = { -885.3702f, -451.4775f, 119.327f };
			unk.f_3 = { 0f, 0f, 27.55617f };
			break;
	
		case 36:
			unk = { -913.0385f, -438.4284f, 114.39966f };
			unk.f_3 = { 0f, 0f, -153.30931f };
			break;
	
		case 37:
			unk = { -892.5499f, -430.4789f, 88.25368f };
			unk.f_3 = { 0f, 0f, 116.9193f };
			break;
	
		case 38:
			unk = { -35.0462f, -576.317f, 82.90739f };
			unk.f_3 = { 0f, 0f, 160f };
			break;
	
		case 39:
			unk = { -10.3788f, -590.7431f, 93.02542f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 65:
			unk = { -22.2487f, -589.1461f, 80.2305f };
			unk.f_3 = { 0f, 0f, 69.88f };
			break;
	
		case 40:
			unk = { -900.6311f, -376.7462f, 78.27306f };
			unk.f_3 = { 0f, 0f, 26.92611f };
			break;
	
		case 41:
			unk = { -929.483f, -374.5104f, 102.23286f };
			unk.f_3 = { 0f, 0f, -152.55307f };
			break;
	
		case 63:
			unk = { -914.4202f, -375.8189f, 114.4743f };
			unk.f_3 = { 0f, 0f, -63f };
			break;
	
		case 42:
			unk = { -617.1647f, 64.6042f, 100.8196f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 43:
			unk = { -584.2015f, 42.7133f, 86.4187f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { -609.5665f, 50.2203f, 98.3998f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 73:
			unk = { -171.3969f, 494.2671f, 134.4935f };
			unk.f_3 = { 0f, 0f, 11f };
			break;
	
		case 74:
			unk = { 339.4982f, 434.0887f, 146.2206f };
			unk.f_3 = { 0f, 0f, -63.5f };
			break;
	
		case 75:
			unk = { -761.3884f, 615.7333f, 140.9805f };
			unk.f_3 = { 0f, 0f, -71.5f };
			break;
	
		case 76:
			unk = { -678.1752f, 591.0076f, 142.2196f };
			unk.f_3 = { 0f, 0f, 40.5f };
			break;
	
		case 77:
			unk = { 120.0541f, 553.793f, 181.0943f };
			unk.f_3 = { 0f, 0f, 6f };
			break;
	
		case 78:
			unk = { -571.4039f, 655.2008f, 142.6293f };
			unk.f_3 = { 0f, 0f, -14.5f };
			break;
	
		case 79:
			unk = { -742.2565f, 587.6547f, 143.0577f };
			unk.f_3 = { 0f, 0f, -29f };
			break;
	
		case 80:
			unk = { -857.2222f, 685.051f, 149.6502f };
			unk.f_3 = { 0f, 0f, 4.5f };
			break;
	
		case 81:
			unk = { -1287.6498f, 443.2707f, 94.6919f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 82:
			unk = { 374.2012f, 416.9688f, 142.6977f };
			unk.f_3 = { 0f, 0f, -14f };
			break;
	
		case 83:
			unk = { -787.7805f, 334.9232f, 186.1134f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 84:
			unk = { -787.7805f, 334.9232f, 215.8384f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 85:
			unk = { -773.2258f, 322.8252f, 194.8862f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 86:
			unk = { -1573.0981f, -4085.806f, 9.7851f };
			unk.f_3 = { 0f, 0f, 162f };
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			unk = { 342.8157f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			unk = { 260.3297f, -997.4288f, -100f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 87:
			unk = { -1572.1869f, -570.8315f, 109.9879f };
			unk.f_3 = { 0f, 0f, -54f };
			break;
	
		case 88:
			unk = { -1383.9543f, -476.7112f, 73.507f };
			unk.f_3 = { 0f, 0f, 8f };
			break;
	
		case 89:
			unk = { -138.0029f, -629.739f, 170.2854f };
			unk.f_3 = { 0f, 0f, -84f };
			break;
	
		case 90:
			unk = { -74.8895f, -817.6883f, 244.8508f };
			unk.f_3 = { 0f, 0f, 70f };
			break;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			unk = { 1100.7644f, -3159.384f, -34.9342f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			unk = { 1005.806f, -3157.6702f, -36.0897f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 103:
			if (!bParam1)
			{
				unk = { -1576.5712f, -569.7595f, 85.5f };
				unk.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 104:
			if (!bParam1)
			{
				unk = { -1571.2538f, -566.5865f, 85.5f };
				unk.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 105:
			if (!bParam1)
			{
				unk = { -1568.0984f, -571.9171f, 85.5f };
				unk.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				unk = { -1578.0225f, -576.4251f, 104.2f };
				unk.f_3 = { 0f, 0f, -144.04f };
			}
			break;
	
		case 106:
			if (!bParam1)
			{
				unk = { -1384.5178f, -475.8657f, 56.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 107:
			if (!bParam1)
			{
				unk = { -1384.5383f, -475.8829f, 48.1f };
				unk.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 108:
			if (!bParam1)
			{
				unk = { -1378.9939f, -477.2481f, 56.1f };
				unk.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				unk = { -1391.245f, -473.9638f, 77.2f };
				unk.f_3 = { 0f, 0f, 98.86f };
			}
			break;
	
		case 109:
			if (!bParam1)
			{
				unk = { -186.5683f, -576.4624f, 135f };
				unk.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 110:
			if (!bParam1)
			{
				unk = { -113.886f, -564.3862f, 135f };
				unk.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 111:
			if (!bParam1)
			{
				unk = { -134.6568f, -635.1774f, 135f };
				unk.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				unk = { -146.6167f, -596.6301f, 166f };
				unk.f_3 = { 0f, 0f, -140f };
			}
			break;
	
		case 112:
			if (!bParam1)
			{
				unk = { -79.0479f, -822.6393f, 221f };
				unk.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 113:
			if (!bParam1)
			{
				unk = { -70.3086f, -819.5784f, 221f };
				unk.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	
		case 114:
			if (!bParam1)
			{
				unk = { -79.9861f, -818.425f, 221f };
				unk.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				unk = { -73.904f, -821.6204f, 284f };
				unk.f_3 = { 0f, 0f, -110f };
			}
			break;
	}

	return unk;
}

int func_108(Player plParam0) // Position - 0x6467
{
	switch (plParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
	
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
	
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
	
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
	
		case 83:
		case 84:
		case 85:
			return 83;
	
		case 86:
			return 86;
	
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
	
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
	
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
	}

	return -1;
}

BOOL func_109(Player plParam0) // Position - 0x66A4
{
	switch (plParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

BOOL func_110(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x66D3
{
	if (bParam2)
		return func_111(unk_0x259BE71D8A81D4FA(), false);

	if (bParam1)
	{
		if (func_111(unk_0x259BE71D8A81D4FA(), false))
			return false;
	
		switch (plParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return true;
		}
	}

	switch (plParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return true;
	}

	return false;
}

BOOL func_111(int iParam0, BOOL bParam1) // Position - 0x67AE
{
	if (Global_1845092 != _INVALID_PLAYER_INDEX())
	{
		if (!func_113(Global_1845092))
			return false;
	
		if (bParam1)
			if (unk_0x259BE71D8A81D4FA() != Global_1845092)
				if (IS_BIT_SET(Global_2657921[Global_1845092 /*463*/].f_199, 24) || func_112(Global_1845092))
					return true;
	}

	return IS_BIT_SET(Global_2657921[iParam0 /*463*/].f_199, 24);
}

BOOL func_112(Player plParam0) // Position - 0x6814
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_199, 9);

	return false;
}

BOOL func_113(Player plParam0) // Position - 0x6837
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_389, 2);

	return false;
}

BOOL func_114(var uParam0, int iParam1, int iParam2) // Position - 0x6860
{
	var unk;

	if (iParam1 == 2 && !func_115(uParam0->f_31, -1))
	{
		if (unk_0xED977E2AE2CB16EE(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), uParam0->f_1742.f_150, 1) <= 30f)
			if (unk_0x26715B0ED6702C87(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), uParam0->f_1742.f_153, uParam0->f_1742.f_153.f_3, uParam0->f_1742.f_153.f_6, 0, 1))
				return true;
	}
	else
	{
		unk = { _GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()) };
	
		if (unk_0xED977E2AE2CB16EE(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), uParam0->f_146.f_47, 1) <= 40f)
			if (unk_0x26715B0ED6702C87(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), uParam0->f_146.f_57[0 /*8*/], uParam0->f_146.f_57[0 /*8*/].f_3, uParam0->f_146.f_57[0 /*8*/].f_6, 0, 1) || unk_0x26715B0ED6702C87(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), uParam0->f_146.f_57[1 /*8*/], uParam0->f_146.f_57[1 /*8*/].f_3, uParam0->f_146.f_57[1 /*8*/].f_6, 0, 1) || unk_0x26715B0ED6702C87(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), uParam0->f_146.f_57[2 /*8*/], uParam0->f_146.f_57[2 /*8*/].f_3, uParam0->f_146.f_57[2 /*8*/].f_6, 0, 1))
				return true;
			else if (unk_0xED977E2AE2CB16EE(unk, uParam0->f_146.f_1592, 1) < uParam0->f_146.f_1595 + iParam2 && unk.f_2 > uParam0->f_146.f_57[2 /*8*/].f_2 && unk.f_2 < uParam0->f_146.f_57[2 /*8*/].f_3.f_2)
				return true;
	}

	return false;
}

BOOL func_115(int iParam0, int iParam1) // Position - 0x69F6
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return true;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return true;
		}
	}

	return false;
}

Vector3 func_116(Player plParam0) // Position - 0x6AD3
{
	var unk;
	var unk7;

	switch (plParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			unk7 = { 348.132f, -997.2031f, -100.1741f };
			break;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			unk7 = { 264.3808f, -997.7274f, -100.0087f };
			break;
	
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	
		case 73:
		case 74:
		case 75:
		case 76:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	
		case 83:
		case 84:
		case 85:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	
		case 86:
			func_103(plParam0, 3, &unk, 86, false);
			unk7 = { unk };
			break;
	
		case 87:
		case 88:
		case 89:
		case 90:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			unk7 = { Global_1312263[plParam0 /*1951*/].f_146.f_47 };
			break;
	}

	return unk7;
}

Vector3 _GET_PLAYER_COORDS(var uParam0) // Position - 0x6D9B
{
	return unk_0xD1A6A821F5AC81DB(unk_0x56E414973C2A8C0E(uParam0), 0);
}

BOOL func_118(Player plParam0) // Position - 0x6DAE
{
	switch (plParam0)
	{
		case 0:
			return false;
	
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return false;
	
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_119() // Position - 0x70E2
{
	if (func_121(Global_1310720.f_1511))
	{
		if (unk_0xED977E2AE2CB16EE(_GET_PLAYER_COORDS(unk_0x259BE71D8A81D4FA()), Global_4196263[Global_1310720.f_1511 /*2012*/].f_146.f_47, 1) <= 30f)
		{
			if (func_120(unk_0x259BE71D8A81D4FA(), false, false))
				if (!Global_2635562.f_2977 && !Global_2635562.f_2979)
					return false;
		
			if (func_114(&Global_4196263[Global_1310720.f_1511 /*2012*/], 1, 0))
				if (!IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 12))
					return true;
		}
	}

	Global_1310720.f_1511 = Global_1310720.f_1511 + 1;

	if (Global_1310720.f_1511 >= 42)
		Global_1310720.f_1511 = -1;

	return false;
}

BOOL func_120(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x71A6
{
	if (Global_2657921[iParam0 /*463*/].f_232 == 99)
		if (bParam2 && Global_2657921[iParam0 /*463*/].f_235 == false || bParam2 == false)
			return false;

	if (bParam1)
		if (Global_2657921[iParam0 /*463*/].f_232 == 13)
			return false;

	return true;
}

BOOL func_121(Player plParam0) // Position - 0x71FD
{
	if (func_122(plParam0))
		return Global_2748596.f_2[plParam0];

	return false;
}

BOOL func_122(Player plParam0) // Position - 0x721C
{
	if (plParam0 > -1 && plParam0 < 42)
		return true;

	return false;
}

BOOL func_123() // Position - 0x723A
{
	if (Global_1310720.f_1511 == -1)
		return true;

	return false;
}

BOOL func_124() // Position - 0x7252
{
	return IS_BIT_SET(Global_1310720.f_6, 11);
}

BOOL func_125() // Position - 0x7263
{
	return Global_1942781.f_544;
}

BOOL func_126() // Position - 0x7272
{
	if (unk_0x834C960822A4683F() && func_97() || func_98() || _IS_FMMC_ACTIVE() && func_130() <= 21 && func_127())
		return true;

	return false;
}

BOOL func_127() // Position - 0x72B8
{
	if (unk_0x834C960822A4683F())
		return func_129();

	return func_128(*Global_4718592.f_126144);
}

BOOL func_128(int iParam0) // Position - 0x72DC
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_4850[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_129() // Position - 0x7316
{
	return Global_2684312.f_17;
}

int func_130() // Position - 0x7324
{
	return Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_192;
}

BOOL func_131() // Position - 0x7339
{
	if (Global_2685249.f_6368 && !Global_2696428)
		return true;

	return false;
}

BOOL func_132(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x735A
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_32, 0))
		return true;

	if (bParam1)
		if (IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_32, 1))
			return true;

	if (bParam2)
		if (Global_2657921[plParam0 /*463*/].f_321.f_7 != -1)
			return true;

	return false;
}

BOOL func_133() // Position - 0x73BE
{
	return Global_2685249.f_1.f_2843;
}

void func_134() // Position - 0x73CF
{
	Global_2640095.f_14 = 0;
	return;
}

BOOL func_135(int iParam0) // Position - 0x73DE
{
	if (iParam0 == func_136())
		return Global_2640095.f_14;

	return false;
}

int func_136() // Position - 0x73F9
{
	return Global_2640095;
}

BOOL func_137() // Position - 0x7405
{
	if (Global_1942781.f_4881 != -1)
		return true;

	return false;
}

BOOL func_138() // Position - 0x741D
{
	return Global_1942781.f_529 != -1;
}

void func_139(int iParam0) // Position - 0x742E
{
	if (iParam0 == func_136())
		Global_2640095.f_14 = 1;

	return;
}

BOOL func_140(Player plParam0, Player plParam1, int iParam2) // Position - 0x7449
{
	Player player;

	if (func_144(plParam0) == plParam1)
	{
		if (iParam2 == -1)
		{
			return true;
		}
		else
		{
			player = func_143(plParam0);
		
			if (player != _INVALID_PLAYER_INDEX())
				return func_141(player) == iParam2;
		}
	}

	return false;
}

int func_141(Player plParam0) // Position - 0x7487
{
	if (func_142(plParam0, false))
		return Global_1886967[plParam0 /*609*/].f_10.f_182;

	return -1;
}

BOOL func_142(Player plParam0, BOOL bParam1) // Position - 0x74AA
{
	if (func_31(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10.f_33 != -1 || bParam1 && Global_1886967[plParam0 /*609*/].f_10.f_32 != -1)
			return true;

	return false;
}

Player func_143(Player plParam0) // Position - 0x74EE
{
	return Global_1886967[plParam0 /*609*/].f_10.f_35;
}

Player func_144(Player plParam0) // Position - 0x7503
{
	if (func_145(plParam0, false))
		return Global_1886967[plParam0 /*609*/].f_10.f_32;

	return -1;
}

BOOL func_145(Player plParam0, BOOL bParam1) // Position - 0x7526
{
	if (func_31(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10.f_32 != -1 || bParam1 && Global_1886967[plParam0 /*609*/].f_10.f_33 != -1)
			return true;

	return false;
}

void func_146(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x756A
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	if (veParam0 == 0)
		return;

	if (!unk_0xFC8BFE4B41177C22(veParam0))
		return;

	if (IS_BIT_SET(Global_45125, 8))
		unk_0x0B0C9A0F9AAEB7F0(&Global_45125, 9);

	if (func_164(veParam0) + iParam2 > 15)
		iParam2 = 15 - func_164(veParam0);

	num = 20000;

	if (unk_0x76CD105BCAC6EB9F())
		num = num * 3;
	else if (unk_0x1B79E937E91F40C3(unk_0x1AF90EB93E0012D6(), "ob_drinking_shots"))
		num = num * 2;

	if (!func_162(veParam0))
	{
		func_160(veParam0, num, false);
		func_157(num, num, 0.3f, func_158(), iParam1, false);
		num2 = func_156(veParam0);
	
		if (num2 == -1)
		{
			num3 = func_155(num2);
		
			if (!(num3 == -1))
				Global_44908[num3 /*5*/].f_3 = Global_44908[num3 /*5*/].f_3 + iParam2;
		}
	}
	else
	{
		num4 = func_156(veParam0);
		num5 = -1;
	
		if (num4 == -1)
		{
			num5 = func_155(num4);
		
			if (!(num5 == -1))
				Global_44908[num5 /*5*/].f_3 = Global_44908[num5 /*5*/].f_3 + iParam2;
		}
	
		if (Global_45089 == 0 || Global_45089 <= unk_0x1DD05E817C89C737())
		{
			func_157(num, num, 0.3f, func_158(), iParam1, false);
		}
		else
		{
			Global_45089 = Global_45089 + num;
			func_152(veParam0, num);
		}
	}

	if (func_164(veParam0) >= 2)
	{
		Global_45095 = 0.25f;
	
		if (unk_0xD6F9DEE4765092A9(&Global_45096))
			TEXT_LABEL_ASSIGN_STRING(&Global_45096, "DRUNK", 16);
	}

	num6 = func_156(veParam0);

	if (num6 == -1)
	{
		num7 = func_155(num6);
		!(num7 == -1);
		return;
	}

	func_147(1, num6, 3, veParam0, iParam2);
	return;
}

void func_147(int iParam0, int iParam1, int iParam2, Vehicle veParam3, int iParam4) // Position - 0x7701
{
	func_148(iParam0, iParam1, iParam2, veParam3, 0, iParam4);
	return;
}

void func_148(int iParam0, int iParam1, int iParam2, Vehicle veParam3, int iParam4, int iParam5) // Position - 0x7718
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_150(iParam0, iParam1, iParam2))
		return;

	num = func_149();

	if (num == -1)
		return;

	Global_44989[num /*6*/] = iParam0;
	Global_44989[num /*6*/].f_1 = iParam1;
	Global_44989[num /*6*/].f_2 = iParam2;
	Global_44989[num /*6*/].f_3 = veParam3;
	Global_44989[num /*6*/].f_4 = iParam4;
	Global_44989[num /*6*/].f_5 = iParam5;
	return;
}

int func_149() // Position - 0x779A
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44989[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_150(int iParam0, int iParam1, int iParam2) // Position - 0x77CB
{
	if (func_151(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_151(int iParam0, int iParam1, int iParam2) // Position - 0x77E6
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44989[i /*6*/].f_2)
			if (iParam0 == Global_44989[i /*6*/])
				if (iParam1 == Global_44989[i /*6*/].f_1)
					return i;
	}

	return -1;
}

void func_152(Vehicle veParam0, int iParam1) // Position - 0x7832
{
	int num;
	int num2;

	if (veParam0 == 0)
		return;

	if (!unk_0xFC8BFE4B41177C22(veParam0))
		return;

	if (iParam1 < 0)
		return;

	num = func_156(veParam0);
	num2 = -1;

	if (num == -1)
	{
		num2 = func_154(veParam0);
	
		if (!(num2 == -1))
		{
			Global_44882[num2 /*5*/].f_3 = Global_44882[num2 /*5*/].f_3 + iParam1;
			Global_44882[num2 /*5*/].f_2 = Global_44882[num2 /*5*/].f_2 + iParam1;
		}
	
		return;
	}

	func_153(1, num, 2, iParam1);
	return;
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x78B1
{
	func_148(iParam0, iParam1, iParam2, 0, iParam3, 1);
	return;
}

int func_154(Vehicle veParam0) // Position - 0x78C7
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44882[i /*5*/].f_1 == veParam0)
			return i;
	}

	return -1;
}

int func_155(int iParam0) // Position - 0x78F8
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44908[i /*5*/] == iParam0)
			return i;
	}

	return -1;
}

int func_156(Vehicle veParam0) // Position - 0x7928
{
	int i;

	if (veParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (veParam0 == Global_44908[i /*5*/].f_1)
			return Global_44908[i /*5*/];
	}

	return -1;
}

void func_157(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, BOOL bParam5) // Position - 0x7969
{
	int num;

	if (Global_4)
		return;

	if (Global_45087)
		return;

	if (!bParam5)
		if (iParam0 < 0)
			return;

	if (fParam2 < 0f || fParam2 > 5f)
		return;

	if (!unk_0x7F2356076C3D052D())
		unk_0xD5681045964A2975("DRUNK_SHAKE", fParam3);

	if (!unk_0x0E9A1CE27A31950D())
		unk_0xE31C735DEE2BF705("DRUNK_SHAKE", fParam3 * Global_45086);

	if (unk_0x78411E34CF90EA8C(iParam4))
	{
		unk_0x2A09425009DAD0F5(iParam4, "DRUNK_SHAKE", fParam3);
		Global_45088 = iParam4;
	}
	else
	{
		Global_45088 = 0;
	}

	Global_45087 = true;
	num = unk_0x1DD05E817C89C737();
	Global_45089 = num + iParam0;

	if (bParam5)
		if (iParam0 == -1)
			Global_45089 = -1;

	Global_45090 = iParam1;
	Global_45091 = fParam2;
	Global_45093 = fParam3;
	Global_45092 = fParam3;
	return;
}

float func_158() // Position - 0x7A24
{
	float num;
	int value;
	int value2;

	num = 0.1f;
	value = func_164(unk_0x4A8C381C258A124D());
	value2 = func_159(unk_0x4A8C381C258A124D());

	if (value2 == 0)
	{
		if (value == 0)
		{
			num = 0.1f;
		}
		else
		{
			num = SYSTEM::TO_FLOAT(value) / SYSTEM::TO_FLOAT(10);
		
			if (num > 1f)
				num = 1f;
		}
	}
	else if (value2 == 0)
	{
		num = 0.1f;
	}
	else
	{
		num = SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(5);
	
		if (num > 1f)
			num = 1f;
	}

	return num;
}

int func_159(Vehicle veParam0) // Position - 0x7AA3
{
	int num;
	int num2;

	if (veParam0 == 0)
		return 0;

	if (!unk_0xFC8BFE4B41177C22(veParam0))
		return 0;

	num = func_156(veParam0);
	num2 = func_155(num);

	if (num2 == -1)
		return -1;

	return Global_44908[num2 /*5*/].f_4;
}

int func_160(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x7AE6
{
	int num;
	int num2;
	int num3;

	if (veParam0 == 0)
		return 0;

	if (!unk_0xFC8BFE4B41177C22(veParam0))
		return 0;

	num = func_156(veParam0);

	if (!(num == -1))
		return 1;

	num2 = func_154(veParam0);

	if (!(num2 == -1))
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	num3 = func_161();

	if (num3 == -1)
		return 0;

	Global_44882[num3 /*5*/] = 0;
	Global_44882[num3 /*5*/].f_1 = veParam0;
	Global_44882[num3 /*5*/].f_2 = iParam1;
	Global_44882[num3 /*5*/].f_3 = iParam1;
	Global_44882[num3 /*5*/].f_4 = 0;

	if (veParam0 == unk_0x4A8C381C258A124D())
		Global_45120 = 1;

	Global_44880 = Global_44880 + 1;
	return 1;
}

int func_161() // Position - 0x7BA2
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44882[i /*5*/] == 13)
			return i;
	}

	return -1;
}

BOOL func_162(Vehicle veParam0) // Position - 0x7BD1
{
	if (veParam0 == 0)
		return false;

	if (func_163(veParam0) == -1)
		return false;

	return true;
}

int func_163(Vehicle veParam0) // Position - 0x7BF2
{
	int i;

	if (veParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_44908[i /*5*/] == -1))
			if (veParam0 == Global_44908[i /*5*/].f_1)
				return i;
	}

	return -1;
}

int func_164(Vehicle veParam0) // Position - 0x7C3B
{
	int num;
	int num2;

	if (veParam0 == 0)
		return 0;

	if (!unk_0xFC8BFE4B41177C22(veParam0))
		return 0;

	num = func_156(veParam0);
	num2 = func_155(num);

	if (num2 == -1)
		return -1;

	return Global_44908[num2 /*5*/].f_3;
}

void func_165(int iParam0, int iParam1) // Position - 0x7C7E
{
	var unk;
	float num;
	int num2;

	if (func_136() == 7)
	{
		if (unk_0x3B5989D5DB08A155() == 4)
		{
			unk_0xF20AB5C13902BB8A(1);
			Global_2640095.f_21 = 1;
		}
		else
		{
			Global_2640095.f_21 = 0;
		}
	
		*iParam0 = 11;
	
		if (iParam1 != -1)
		{
			switch (iParam1)
			{
				case 0:
					unk = { 799.4338f, 4489.4336f, 50.1044f };
					num = 234.7151f;
					break;
			
				case 1:
					unk = { -1780.224f, -898.138f, 5.523f };
					num = 0f;
					break;
			
				case 2:
					unk = { 548.493f, 2675.173f, 42.1963f };
					num = -29.16f;
					break;
			
				case 3:
					unk = { -2510.704f, 1715.879f, 153.946f };
					num = 0f;
					break;
			}
		}
		else
		{
			num2 = unk_0xC5935DFB3F39785A(0, 7);
		
			switch (num2)
			{
				case 0:
					unk = { 1095.7798f, 42.0084f, 79.8909f };
					num = 4.1868f;
					break;
			
				case 1:
					unk = { 1234.7437f, 348.742f, 80.9909f };
					num = 64.0722f;
					break;
			
				case 2:
					unk = { 1078.3181f, 203.7619f, 86.9908f };
					num = 287.8687f;
					break;
			
				case 3:
					unk = { 882.1516f, -280.3958f, 65.4134f };
					num = 322.2067f;
					break;
			
				case 4:
					unk = { 1101.12f, -706.6118f, 55.8202f };
					num = 302.1545f;
					break;
			
				case 5:
					unk = { 958.2682f, 72.5168f, 111.554f };
					num = 235.6346f;
					break;
			
				case 6:
					unk = { 919.9286f, 23.3805f, 113.1937f };
					num = 128.1919f;
					break;
			}
		}
	
		func_166(unk, num, 50f, 1, 0f, 1, 0, 65f, 1, 1, 0, 1, -1082130432);
	}
	else if (func_136() == 0)
	{
		*iParam0 = 23;
	}
	else if (func_136() == 5)
	{
		*iParam0 = 46;
	}
	else
	{
		*iParam0 = 45;
	}

	return;
}

void func_166(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14) // Position - 0x7E92
{
	var unk;

	unk.f_7 = 1;
	unk.f_8 = 1;
	unk.f_21 = 1115815936;
	unk.f_27 = -1082130432;

	if (unk_0xF40767E41852FB72(Global_2644862.f_6))
		if (!(Global_2644862.f_6 == unk_0x8F76B2250AC806FA()))
			return;

	if (SYSTEM::VMAG(vParam0) == 0f)
		return;

	if (!unk_0xF40767E41852FB72(Global_2644862.f_6))
		Global_2644862.f_6 = unk_0x8F76B2250AC806FA();

	unk.f_6 = Global_2644862.f_6;
	unk = { vParam0 };
	unk.f_5 = fParam3;
	unk.f_4 = fParam4;
	unk.f_7 = iParam5;
	unk.f_3 = fParam6;
	unk.f_8 = iParam8;
	unk.f_9 = iParam7;
	unk.f_10 = 0;
	unk.f_11 = { 0f, 0f, 0f };
	unk.f_14 = { 0f, 0f, 0f };
	unk.f_17 = 0f;
	unk.f_21 = fParam9;
	unk.f_22 = iParam10;

	if (func_167(unk_0x259BE71D8A81D4FA()))
		if (iParam13 || iParam7)
			unk.f_23 = 1;
		else
			unk.f_23 = 0;
	else
		unk.f_23 = 0;

	if (unk.f_21 < 1f)
		unk.f_21 = 1f;

	unk.f_24 = iParam11;
	unk.f_26 = iParam12;
	unk.f_27 = iParam14;
	Global_2644862 = { unk };
	return;
}

BOOL func_167(Player plParam0) // Position - 0x7FBB
{
	if (func_170(plParam0, true) || func_169(plParam0) || func_142(plParam0, false) || func_168(plParam0))
		return true;

	return false;
}

BOOL func_168(Player plParam0) // Position - 0x7FF7
{
	if (!_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return false;

	return IS_BIT_SET(Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_873, 2);
}

BOOL func_169(Player plParam0) // Position - 0x8020
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1886967[player /*609*/] != -1;

	return false;
}

BOOL func_170(Player plParam0, BOOL bParam1) // Position - 0x8041
{
	if (func_175() != 0)
		return func_174(plParam0) != 0;

	return func_171(plParam0, bParam1, false);
}

BOOL func_171(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8068
{
	if (bParam1)
		if (func_172(plParam0))
			return 1;

	!bParam2;

	if (Global_1845263[plParam0 /*877*/] == -1)
		return 0;

	return 1;
}

BOOL func_172(Player plParam0) // Position - 0x809A
{
	return func_173(plParam0);
}

BOOL func_173(Player plParam0) // Position - 0x80A8
{
	return IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_11.f_1, 0);
}

int func_174(Player plParam0) // Position - 0x80BF
{
	if (_NETWORK_IS_PLAYER_VALID(plParam0, false, true))
		return Global_2657921[plParam0 /*463*/].f_1;

	return 0;
}

int func_175() // Position - 0x80E1
{
	return Global_32828;
}

int func_176(Player plParam0) // Position - 0x80EC
{
	if (func_142(plParam0, false))
		return Global_1886967[plParam0 /*609*/].f_10.f_193;

	return -1;
}

Player func_177(Player plParam0) // Position - 0x810F
{
	if (func_31(plParam0))
		if (func_142(plParam0, false))
			return Global_1886967[plParam0 /*609*/].f_10.f_33;

	return -1;
}

void func_178(int iParam0) // Position - 0x813B
{
	if (!func_192(unk_0x259BE71D8A81D4FA()))
		return;

	if (iParam0 != -1)
		func_191(iParam0);

	func_179(243, -1);
	return;
}

void func_179(int iParam0, int iParam1) // Position - 0x8165
{
	if (func_363() || !func_188(true) || func_187(iParam0) == 3)
	{
		if (!func_186(unk_0x259BE71D8A81D4FA(), 0) && !func_186(unk_0x259BE71D8A81D4FA(), 3))
		{
			func_185(iParam0);
			func_180(iParam0, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true), func_183(), func_182(), func_181(), iParam1);
		}
	}

	return;
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5) // Position - 0x81CD
{
	int num;

	num = 1613825825;
	num.f_1 = unk_0x259BE71D8A81D4FA();
	num.f_3 = iParam0;
	num.f_4 = iParam2;
	num.f_5 = iParam3;
	num.f_6 = uParam4;
	num.f_7 = iParam5;

	if (!(iParam1 == 0))
		unk_0x71A6F836422FDD2B(1, &num, 8, iParam1, num);

	return;
}

var func_181() // Position - 0x821A
{
	return Global_2738587.f_5234.f_348;
}

int func_182() // Position - 0x822C
{
	return Global_2738587.f_5234.f_347;
}

int func_183() // Position - 0x823E
{
	return Global_2738587.f_5234.f_346;
}

int _GET_LOBBY_SCRIPT_EVENT_BITS(BOOL includeLocalPlayer, BOOL includeSpectators) // Position - 0x8250
{
	int unk;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = unk_0xB23E0F9B63D009A8(i);
	
		if (_NETWORK_IS_PLAYER_VALID(player, false, false))
			if (player != unk_0x259BE71D8A81D4FA() || includeLocalPlayer)
				if (includeSpectators)
					unk_0x0B0C9A0F9AAEB7F0(&unk, i);
				else if (!func_28(player, 0))
					unk_0x0B0C9A0F9AAEB7F0(&unk, i);
	}

	return unk;
}

void func_185(int iParam0) // Position - 0x82B5
{
	Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_32 = iParam0;
	return;
}

BOOL func_186(Player plParam0, int iParam1) // Position - 0x82CE
{
	if (func_142(plParam0, false))
		return func_187(Global_1886967[plParam0 /*609*/].f_10.f_33) == iParam1;

	return false;
}

int func_187(Player plParam0) // Position - 0x82F8
{
	switch (plParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 312:
		case 313:
		case 315:
		case 316:
		case 317:
		case 322:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 330:
		case 331:
		case 332:
		case 333:
			return 0;
	
		case 276:
		case 267:
		case 318:
			return 3;
	
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
	
		case 148:
		case 179:
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_188(BOOL bParam0) // Position - 0x85C4
{
	return func_189(unk_0x259BE71D8A81D4FA(), bParam0);
}

BOOL func_189(Player plParam0, BOOL bParam1) // Position - 0x85D6
{
	if (!func_31(plParam0))
		return false;

	if (!bParam1)
		if (func_190(plParam0))
			return false;

	return Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_190(Player plParam0) // Position - 0x860F
{
	if (func_31(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1886967[plParam0 /*609*/].f_10 == plParam0;

	return false;
}

void func_191(int iParam0) // Position - 0x8644
{
	if (Global_2738587.f_5234.f_346 != iParam0)
		Global_2738587.f_5234.f_346 = iParam0;

	return;
}

BOOL func_192(int iParam0) // Position - 0x8667
{
	return Global_1845263[iParam0 /*877*/].f_267.f_407 != 0;
}

int func_193(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x8680
{
	int num;
	int num2;

	if (!func_230(func_333(iParam1, -1, -1, -1), func_290(iParam1, -1, 1, -1, -1, plParam0), func_239(iParam1, -1, -1, -1, -1, plParam0), false, true))
		return 0;

	num = iParam1;

	if (func_228(plParam0))
		if (iParam1 == 153)
			num = 211;

	if (func_226(iParam1) >= func_225(num))
		return 5;

	if (func_224(plParam0))
		return 6;

	if (_IS_PLAYER_IN_ANIMAL_FORM(plParam0))
		return 14;

	if (func_222(plParam0) && !func_221(plParam0))
		return 17;

	num2 = func_216(plParam0);

	if (num2 != -1)
		return num2;

	if (func_187(iParam1) == 1)
	{
		if (func_215() || func_214() || !bParam2 && func_213() != 0 && func_187(iParam1) == 1)
			return 2;
	}
	else if (func_187(iParam1) == 2)
	{
		if (!func_210(iParam1))
			return 3;
	
		if (!bParam2)
			if (Global_1886967[plParam0 /*609*/].f_10.f_34 != _INVALID_PLAYER_INDEX())
				return 9;
	
		if (func_209(plParam0))
			return 10;
	}
	else if (func_207(iParam1))
	{
		if (func_205(plParam0) <= 0)
			return 4;
	}

	if (func_204(iParam1))
	{
		if (func_203())
			return 13;
	
		if (func_200())
			return 12;
	}

	if (func_205(plParam0) + 1 < func_199(num))
		return 4;

	switch (iParam1)
	{
		case 157:
			break;
	
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_195(plParam0, false))
				return 1;
			break;
	
		case 189:
			if (func_194(plParam0, 21) || func_194(plParam0, 25))
				return 0;
			break;
	}

	return -1;
}

BOOL func_194(Player plParam0, int iParam1) // Position - 0x886F
{
	return IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_218, iParam1);
}

BOOL func_195(Player plParam0, BOOL bParam1) // Position - 0x8885
{
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = unk_0xB23E0F9B63D009A8(i);
	
		if (unk_0x762604C40829DB72(player))
			if (!func_197(player, plParam0, true))
				if (bParam1 || !func_196(player, 31))
					return true;
	}

	return false;
}

BOOL func_196(Player plParam0, int iParam1) // Position - 0x88D7
{
	return IS_BIT_SET(Global_1886967[plParam0 /*609*/].f_10.f_4, iParam1);
}

BOOL func_197(Player plParam0, Player plParam1, BOOL bParam2) // Position - 0x88EF
{
	if (func_31(plParam1))
	{
		if (!bParam2)
			if (func_198(plParam0, plParam1))
				return false;
	
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			return plParam1 == Global_1886967[plParam0 /*609*/].f_10;
	}

	return false;
}

BOOL func_198(Player plParam0, Player plParam1) // Position - 0x8939
{
	if (plParam1 != _INVALID_PLAYER_INDEX())
		if (plParam0 != _INVALID_PLAYER_INDEX())
			if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
				if (Global_1886967[plParam0 /*609*/].f_10 == plParam0)
					return plParam1 == plParam0;

	return false;
}

int func_199(int iParam0) // Position - 0x897E
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_18843;
	
		case 183:
			return Global_262145.f_18851;
	
		case 185:
			return Global_262145.f_18860;
	
		case 182:
			return Global_262145.f_18871;
	
		case 186:
			return Global_262145.f_18880;
	
		case 195:
			return Global_262145.f_18898;
	
		case 198:
			return Global_262145.f_18908;
	
		case 197:
			return Global_262145.f_18920;
	
		case 207:
			return Global_262145.f_18928;
	
		case 209:
			return Global_262145.f_18941;
	
		case 208:
			return Global_262145.f_18949;
	
		case 201:
			return Global_262145.f_18982;
	
		case 211:
			return Global_262145.f_19050;
	
		case 193:
			return Global_262145.f_19073;
	
		case 205:
			return Global_262145.f_19091;
	
		case 189:
			return Global_262145.f_19056;
	
		case 216:
			return 2;
	
		case 220:
			return 2;
	
		default:
		
	}

	return 1;
}

BOOL func_200() // Position - 0x8AA2
{
	if (Global_1942642)
		return false;

	return func_201();
}

BOOL func_201() // Position - 0x8AB9
{
	if (func_202())
		return true;

	return Global_2684312.f_744;
}

BOOL func_202() // Position - 0x8AD3
{
	return Global_1575033 == 10;
}

BOOL func_203() // Position - 0x8AE2
{
	return Global_262145.f_15882;
}

BOOL func_204(int iParam0) // Position - 0x8AF1
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return true;
	
		default:
		
	}

	return false;
}

int func_205(Player plParam0) // Position - 0x8B17
{
	if (func_206(plParam0) == _INVALID_PLAYER_INDEX())
		return 0;

	return Global_1886967[plParam0 /*609*/].f_10.f_19;
}

Player func_206(Player plParam0) // Position - 0x8B3D
{
	if (func_31(plParam0))
		return Global_1886967[plParam0 /*609*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_207(int iParam0) // Position - 0x8B60
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return true;
	
		default:
		
	}

	return func_208(iParam0, 0);
}

BOOL func_208(int iParam0, int iParam1) // Position - 0x8BBA
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
	
		default:
		
	}

	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_209(Player plParam0) // Position - 0x8C0F
{
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = unk_0xB23E0F9B63D009A8(i);
	
		if (unk_0x762604C40829DB72(player))
			if (Global_1886967[plParam0 /*609*/].f_10.f_34 != _INVALID_PLAYER_INDEX() && Global_1886967[plParam0 /*609*/].f_10.f_34 == player && Global_1886967[player /*609*/].f_10.f_34 == plParam0)
				return true;
	}

	return false;
}

BOOL func_210(int iParam0) // Position - 0x8C7F
{
	switch (iParam0)
	{
		case 179:
			if (func_212() < 2)
				return false;
			break;
	
		case 148:
			if (func_211() < 2)
				return false;
			break;
	
		default:
			if (func_211() < 2)
				return false;
			break;
	}

	return true;
}

int func_211() // Position - 0x8CC8
{
	int i;
	int num;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = unk_0xB23E0F9B63D009A8(i);
	
		if (unk_0x762604C40829DB72(player))
			if (func_190(player))
				num = num + 1;
	}

	return num;
}

int func_212() // Position - 0x8D05
{
	int i;
	int num;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = unk_0xB23E0F9B63D009A8(i);
	
		if (unk_0x762604C40829DB72(player))
			if (func_228(player))
				num = num + 1;
	}

	return num;
}

int func_213() // Position - 0x8D42
{
	return Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10.f_103;
}

BOOL func_214() // Position - 0x8D59
{
	return Global_1916087.f_11.f_144 != -1;
}

BOOL func_215() // Position - 0x8D6B
{
	return Global_1916087.f_11.f_143 != -1;
}

int func_216(Player plParam0) // Position - 0x8D7D
{
	int i;
	Player player;

	for (i = 0; i < func_218(); i = i + 1)
	{
		player = Global_1886967[plParam0 /*609*/].f_10.f_11[i];
	
		if (player != _INVALID_PLAYER_INDEX())
		{
			if (unk_0x762604C40829DB72(player))
			{
				if (func_224(player))
					return 7;
			
				if (_IS_PLAYER_IN_ANIMAL_FORM(player))
					return 15;
			
				if (func_217(player))
					return 16;
			}
		}
	}

	return -1;
}

BOOL func_217(Player plParam0) // Position - 0x8DE9
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321.f_4, 2) || IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321.f_4, 3) || IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321.f_4, 5) || IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321.f_4, 6) || IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321.f_4, 7) || IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_407.f_1, 1))
		return true;

	return false;
}

int func_218() // Position - 0x8E87
{
	return func_219() - 1;
}

int func_219() // Position - 0x8E95
{
	return func_220(unk_0x259BE71D8A81D4FA());
}

int func_220(int iParam0) // Position - 0x8EA5
{
	Player player;

	player = Global_1886967[iParam0 /*609*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1886967[player /*609*/].f_10.f_429 == 1)
		return 8;

	return 4;
}

BOOL func_221(Player plParam0) // Position - 0x8EDF
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657921[plParam0 /*463*/].f_321.f_7 != -1)
				return func_83(Global_2657921[plParam0 /*463*/].f_321.f_7) == 23;

	return false;
}

BOOL func_222(Player plParam0) // Position - 0x8F26
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_2657921[plParam0 /*463*/].f_321.f_5, 4);

	return false;
}

BOOL _IS_PLAYER_IN_ANIMAL_FORM(Player plParam0) // Position - 0x8F4B
{
	var unk;
	int num;

	if (!unk_0x76CD105BCAC6EB9F())
		return false;

	if (plParam0 == unk_0x259BE71D8A81D4FA())
	{
		return Global_2707705;
	}
	else
	{
		unk = unk_0x56E414973C2A8C0E(plParam0);
	
		if (unk_0xFC8BFE4B41177C22(unk))
		{
			num = unk_0x4B423FAA24E8ABF0(unk);
		
			if (num == joaat("MP_M_Freemode_01") || num == joaat("MP_F_Freemode_01"))
				return false;
			else
				return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

BOOL func_224(Player plParam0) // Position - 0x8FB7
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1886967[player /*609*/].f_1, 0);

	return false;
}

int func_225(int iParam0) // Position - 0x8FDA
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_13241;
	
		case 155:
			return Global_262145.f_13266;
	
		case 153:
			return Global_262145.f_13230;
	
		case 163:
			return Global_262145.f_13206;
	
		case 160:
			return Global_262145.f_13219;
	
		case 154:
			return Global_262145.f_13276;
	
		case 169:
			return 1;
	
		case 171:
			return Global_262145.f_15709;
	
		case 172:
			return Global_262145.f_15728;
	
		case 148:
			return Global_262145.f_18957;
	
		case 179:
			return Global_262145.f_18965;
	
		case 201:
			return Global_262145.f_18979;
	
		case 200:
			return Global_262145.f_19019;
	
		case 211:
			return Global_262145.f_19048;
	
		case 194:
			return Global_262145.f_19060;
	
		case 193:
			return Global_262145.f_19071;
	
		case 210:
			return Global_262145.f_19083;
	
		case 205:
			return Global_262145.f_19089;
	
		case 199:
			return Global_262145.f_19102;
	
		case 249:
			return 1;
	
		case 238:
			return 1;
	
		default:
		
	}

	return 2147483647;
}

int func_226(int iParam0) // Position - 0x912C
{
	return Global_1916087.f_11.f_147[func_227(iParam0)];
}

int func_227(int iParam0) // Position - 0x9144
{
	switch (iParam0)
	{
		case 148:
			return 0;
	
		case 152:
			return 1;
	
		case 151:
			return 2;
	
		case 142:
			return 3;
	
		case 157:
			return 4;
	
		case 159:
			return 5;
	
		case 164:
			return 6;
	
		case 160:
			return 7;
	
		case 162:
			return 8;
	
		case 163:
			return 9;
	
		case 154:
			return 10;
	
		case 155:
			return 11;
	
		case 153:
			return 12;
	
		case 166:
			return 13;
	
		case 167:
			return 14;
	
		case 168:
			return 15;
	
		case 169:
			return 16;
	
		case 170:
			return 17;
	
		case 171:
			return 18;
	
		case 172:
			return 19;
	
		case 173:
			return 20;
	
		case 178:
			return 21;
	
		case 179:
			return 22;
	
		case 180:
			return 23;
	
		case 182:
			return 24;
	
		case 183:
			return 25;
	
		case 185:
			return 26;
	
		case 186:
			return 27;
	
		case 189:
			return 28;
	
		case 190:
			return 29;
	
		case 191:
			return 30;
	
		case 192:
			return 31;
	
		case 193:
			return 32;
	
		case 194:
			return 33;
	
		case 195:
			return 34;
	
		case 197:
			return 35;
	
		case 198:
			return 36;
	
		case 199:
			return 37;
	
		case 200:
			return 38;
	
		case 201:
			return 39;
	
		case 205:
			return 40;
	
		case 207:
			return 41;
	
		case 208:
			return 42;
	
		case 209:
			return 43;
	
		case 210:
			return 44;
	
		case 214:
			return 45;
	
		case 215:
			return 46;
	
		case 216:
			return 47;
	
		case 217:
			return 48;
	
		case 218:
			return 49;
	
		case 219:
			return 50;
	
		case 220:
			return 51;
	
		case 221:
			return 52;
	
		case 188:
			return 53;
	
		case 225:
			return 54;
	
		case 226:
			return 55;
	
		case 227:
			return 56;
	
		case 229:
			return 57;
	
		case 230:
			return 58;
	
		case 233:
			return 59;
	
		case 237:
			return 60;
	
		case 238:
			return 61;
	
		case 239:
			return 62;
	
		case 240:
			return 63;
	
		case 241:
			return 64;
	
		case 242:
			return 65;
	
		case 244:
			return 66;
	
		case 248:
			return 67;
	
		case 249:
			return 68;
	
		case 250:
			return 69;
	
		case 243:
			return 70;
	
		case 158:
			return 71;
	
		case 256:
			return 72;
	
		case 258:
			return 73;
	
		case 271:
			return 74;
	
		case 276:
			return 75;
	
		case 277:
			return 76;
	
		case 262:
			return 79;
	
		case 263:
			return 78;
	
		case 264:
			return 77;
	
		case 267:
			return 80;
	
		case 291:
			return 81;
	
		case 292:
			return 82;
	
		case 293:
			return 83;
	
		case 294:
			return 84;
	
		case 295:
			return 85;
	
		case 296:
			return 86;
	
		case 297:
			return 87;
	
		case 298:
			return 88;
	
		case 299:
			return 89;
	
		case 300:
			return 90;
	
		case 301:
			return 91;
	
		case 304:
			return 92;
	
		case 305:
			return 93;
	
		case 306:
			return 94;
	
		case 307:
			return 95;
	
		case 308:
			return 96;
	
		case 309:
			return 97;
	
		case 312:
			return 98;
	
		case 313:
			return 99;
	
		case 315:
			return 100;
	
		case 316:
			return 101;
	
		case 317:
			return 102;
	
		case 318:
			return 103;
	
		case 322:
			return 104;
	
		case 323:
			return 105;
	
		case 324:
			return 106;
	
		case 325:
			return 107;
	
		case 326:
			return 108;
	
		case 327:
			return 109;
	
		case 328:
			return 110;
	
		case 329:
			return 111;
	
		case 330:
			return 112;
	
		case 331:
			return 113;
	
		case 332:
			return 114;
	
		case 333:
			return 115;
	
		default:
		
	}

	return -1;
}

BOOL func_228(Player plParam0) // Position - 0x9648
{
	return func_229(plParam0, 1);
}

BOOL func_229(Player plParam0, int iParam1) // Position - 0x9657
{
	if (func_31(plParam0))
		if (Global_1886967[plParam0 /*609*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1886967[plParam0 /*609*/].f_10 == plParam0 && Global_1886967[plParam0 /*609*/].f_10.f_429 == iParam1)
				return 1;

	return 0;
}

BOOL func_230(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x96A6
{
	if (func_238(iParam0, bParam3, bParam4) || func_237(iParam1, bParam3, bParam4) || func_231(iParam2, bParam3, bParam4))
		return true;

	return false;
}

BOOL func_231(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x96E0
{
	return func_232(2, iParam0, false, bParam1, bParam2);
}

BOOL func_232(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x96F4
{
	int num;
	int num2;

	if (!IS_BIT_SET(Global_1681028, 0))
		return 0;

	if (bParam2 && !bParam3 && iParam1 <= func_236(iParam0) - func_235(iParam0, false))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
				num = iParam1 - func_235(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_236(iParam0) - func_234(iParam0);
		}
		else
		{
			if (bParam2)
				num = iParam1 - func_235(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_236(iParam0) - func_235(iParam0, true);
		}
	
		if (!bParam4 && Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/] != 3)
			num2 = num2 - func_233(iParam0);
	
		if (num < num2)
			return 1;
	}

	return 0;
}

int func_233(int iParam0) // Position - 0x97BA
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 10;
	
		case 2:
			return 10;
	}

	return 0;
}

int func_234(int iParam0) // Position - 0x97F4
{
	switch (iParam0)
	{
		case 0:
			return Global_1681028.f_1;
	
		case 1:
			return Global_1681028.f_2;
	
		case 2:
			return Global_1681028.f_3;
	}

	return 0;
}

int func_235(int iParam0, BOOL bParam1) // Position - 0x983A
{
	int num;

	num = unk_0x259BE71D8A81D4FA();

	switch (iParam0)
	{
		case 0:
			if (!unk_0xE8DB952A4BA8F328())
				return Global_2657921[num /*463*/].f_219;
			else
				return unk_0xA0522491D076C1E6(!bParam1, 0);
			break;
	
		case 1:
			if (!unk_0xE8DB952A4BA8F328())
				return Global_2657921[num /*463*/].f_220;
			else
				return unk_0xF46F370442FAD8F9(!bParam1, 0);
			break;
	
		case 2:
			if (!unk_0xE8DB952A4BA8F328())
				return Global_2657921[num /*463*/].f_221;
			else
				return unk_0xD1797191721E17CE(!bParam1, 0);
			break;
	}

	return 0;
}

int func_236(int iParam0) // Position - 0x98D7
{
	switch (iParam0)
	{
		case 0:
			return Global_1681036;
	
		case 1:
			return Global_1681037;
	
		case 2:
			return Global_1681038;
	}

	return 0;
}

int func_237(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9917
{
	return func_232(1, iParam0, false, bParam1, bParam2);
}

int func_238(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x992B
{
	return func_232(0, iParam0, false, bParam1, bParam2);
}

int func_239(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, Player plParam5) // Position - 0x993F
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
	
		case 159:
		case 142:
			return 1;
	
		case 167:
			return func_289(iParam1);
	
		case 170:
			return 2;
	
		case 171:
			return 0;
	
		case 172:
			return 9;
	
		case 173:
			return 0;
	
		case 168:
			return 5;
	
		case 178:
		case 188:
			return func_287(iParam1, iParam2, iParam3);
	
		case 225:
		case 226:
			return func_281(iParam1, iParam2, iParam3, iParam4);
	
		case 227:
			return 0;
	
		case 229:
		case 230:
			return func_269(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(plParam5), iParam4);
	
		case 233:
			return func_262(iParam1, iParam2, iParam3, unk_0xB23E0F9B63D009A8(plParam5), iParam4);
	
		case 179:
			return 0;
	
		case 182:
			return 7;
	
		case 185:
			return 6;
	
		case 186:
			return 2;
	
		case 180:
			return 9;
	
		case 190:
			return 8;
	
		case 191:
			return 0;
	
		case 192:
			return func_255(iParam1, iParam2);
	
		case 193:
			return 0;
	
		case 194:
			return 0;
	
		case 199:
			return 0;
	
		case 195:
			return 9;
	
		case 201:
			return 16;
	
		case 198:
			return 12;
	
		case 205:
			return 8;
	
		case 207:
			return 0;
	
		case 208:
			return 15;
	
		case 209:
			return 0;
	
		case 210:
			return 0;
	
		case 214:
			return 9;
	
		case 215:
			return 0;
	
		case 216:
			return 16;
	
		case 217:
			return 0;
	
		case 218:
			return 0;
	
		case 219:
			return 0;
	
		case 220:
			return 30;
	
		case 221:
			return 30;
	
		case 237:
		case 250:
			return func_252(iParam1, iParam2, iParam3);
	
		case 238:
		case 249:
			return func_251(iParam1);
	
		case 239:
			return 4;
	
		case 240:
			return 1;
	
		case 241:
			return 1;
	
		case 242:
			return 1;
	
		case 244:
			return 4;
	
		case 248:
			return 5;
	
		case 243:
			return func_247(iParam1, iParam2, unk_0xB23E0F9B63D009A8(plParam5), iParam4);
	
		case 158:
			return func_243(iParam1, iParam2, unk_0xB23E0F9B63D009A8(plParam5), iParam4);
	
		case 181:
			return func_240(iParam1, iParam2, unk_0xB23E0F9B63D009A8(plParam5), iParam4);
	
		default:
		
	}

	return 0;
}

int func_240(int iParam0, int iParam1, var uParam2, int iParam3) // Position - 0x9C12
{
	int num;

	num = func_242(iParam0, iParam1, iParam3);
	num = num + func_241(iParam0, uParam2);
	return num;
}

int func_241(int iParam0, var uParam1) // Position - 0x9C35
{
	switch (iParam0)
	{
		case 2:
			return 5;
	
		default:
		
	}

	return 1;
}

int func_242(int iParam0, int iParam1, int iParam2) // Position - 0x9C4F
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_243(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x9C69
{
	int num;

	num = func_246(iParam0, iParam1, iParam3);
	num = num + func_244(iParam0, plParam2);
	return num;
}

int func_244(int iParam0, Player plParam1) // Position - 0x9C8C
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;

	switch (iParam0)
	{
		case 4:
		case 2:
		case 1:
		case 3:
		case 30:
		case 31:
		case 32:
		case 28:
		case 29:
		case 52:
		case 37:
			return 0;
	
		case 19:
		case 20:
			return 1;
	
		case 38:
		case 8:
		case 14:
		case 17:
		case 11:
		case 18:
		case 21:
		case 22:
		case 7:
		case 34:
		case 23:
		case 41:
		case 49:
		case 48:
		case 27:
		case 15:
		case 50:
		case 24:
		case 6:
		case 9:
		case 10:
		case 47:
		case 42:
		case 26:
		case 25:
			return 2;
	
		case 43:
			return 3;
	
		case 16:
			return 4;
	
		case 12:
		case 13:
			if (func_189(plParam1, true))
				unk = { func_245(plParam1) };
		
			if (unk.f_1 == 4)
				return 4;
			else
				return 2;
			break;
	
		case 33:
			return 5;
	}

	return 1;
}

Vector3 func_245(Player plParam0) // Position - 0x9DF3
{
	return Global_1886967[plParam0 /*609*/].f_10.f_306;
}

int func_246(int iParam0, int iParam1, int iParam2) // Position - 0x9E0B
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 24:
			return 1;
	
		case 10:
			switch (iParam1)
			{
				case 30:
					return 11;
			
				case 31:
				case 32:
					return 9;
			
				default:
					break;
			}
			break;
	
		case 36:
			return 0;
	
		case 38:
			return 3;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 8:
			return 13;
	
		case 13:
			switch (iParam1)
			{
				case 38:
				case 39:
					return 10;
			
				case 40:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 35:
			return 5;
	
		case 46:
			return 2;
	
		case 9:
			return 8;
	
		case 4:
			return 7;
	
		case 14:
			return 11;
	
		case 17:
			return 8;
	
		case 47:
			return 11;
	
		case 11:
			return 9;
	
		case 18:
			return 13;
	
		case 6:
			return 17;
	
		case 48:
			return 21;
	
		case 33:
			return 5;
	
		case 44:
			return 2;
	
		case 21:
			return 22;
	
		case 22:
			return 12;
	
		case 7:
			return 10;
	
		case 2:
			return 0;
	
		case 34:
			switch (iParam1)
			{
				case 91:
					return 16;
			
				case 92:
					return 14;
			
				default:
					break;
			}
			break;
	
		case 27:
			return 12;
	
		case 23:
			return 17;
	
		case 31:
			return 3;
	
		case 12:
			return 4;
	
		case 3:
			return 2;
	
		case 49:
			return 15;
	
		case 19:
			return 14;
	
		case 50:
			return 12;
	
		case 20:
			return 12;
	
		case 32:
			return 15;
	
		case 30:
			return 6;
	
		case 16:
			return 12;
	
		case 39:
			return 5;
	
		case 42:
			return 3;
	
		case 37:
			return 19;
	
		case 52:
			return 6;
	
		case 15:
			return 2;
	
		case 25:
			switch (iParam1)
			{
				case 69:
					return 11;
			
				case 70:
					return 12;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_247(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0xA06E
{
	int num;

	num = func_250(iParam0, iParam1, iParam3);

	if (!func_249(iParam0))
		num = num + func_248(iParam0, plParam2);

	return num;
}

int func_248(int iParam0, Player plParam1) // Position - 0xA09B
{
	switch (iParam0)
	{
		case 14:
		case 5:
		case 0:
		case 3:
		case 2:
			return 0;
	
		case 6:
			if (func_205(plParam1) + 1 == 1)
				return 1;
			else
				return 2;
			break;
	}

	return 1;
}

BOOL func_249(int iParam0) // Position - 0xA0ED
{
	return false;
}

int func_250(int iParam0, int iParam1, int iParam2) // Position - 0xA0F6
{
	switch (iParam0)
	{
		case 13:
			return 3;
	
		case 5:
			switch (iParam1)
			{
				case 15:
					return 17;
			
				case 16:
					return 12;
			
				case 17:
					return 12;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 35:
				case 36:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 18:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 12:
			return 15;
	
		case 0:
			return 1;
	
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							return 1;
					
						case 1:
							return 0;
					
						case 2:
							return 3;
					
						default:
							break;
					}
					break;
			
				case 29:
					switch (iParam2)
					{
						case 0:
							return 1;
					
						case 1:
							return 2;
					
						case 2:
							return 0;
					
						default:
							break;
					}
					break;
			
				case 30:
					switch (iParam2)
					{
						case 0:
							return 0;
					
						case 1:
							return 0;
					
						case 2:
							return 0;
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 10:
					return 6;
			
				default:
				
			}
		
			return 5;
	
		case 2:
			switch (iParam1)
			{
				case 6:
					return 22;
			
				case 7:
					return 23;
			
				case 8:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 25:
					return 3;
			
				case 26:
					return 8;
			
				case 27:
					return 4;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_251(int iParam0) // Position - 0xA2A5
{
	switch (iParam0)
	{
		case 0:
			return 3;
	
		case 1:
			return 3;
	
		case 2:
			return 4;
	
		case 3:
			return 0;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		default:
		
	}

	return 0;
}

int func_252(int iParam0, int iParam1, int iParam2) // Position - 0xA2F1
{
	int num;

	num = func_254(iParam0, iParam1);

	if (func_253(iParam0))
		num = num + iParam2;

	return num;
}

BOOL func_253(int iParam0) // Position - 0xA315
{
	return true;
}

int func_254(int iParam0, int iParam1) // Position - 0xA31E
{
	switch (iParam0)
	{
		case 12:
			return 3;
	
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 77:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 102:
				case 103:
				case 104:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 133:
				case 135:
					return 1;
			
				case 136:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 1:
			return 10;
	
		case 18:
			return 3;
	
		case 3:
			return 4;
	
		case 21:
			return 2;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					return 9;
			
				case 1:
					return 9;
			
				case 2:
					return 8;
			
				case 3:
					return 6;
			
				case 4:
					return 8;
			
				case 5:
					return 8;
			
				case 6:
					return 8;
			
				case 7:
					return 8;
			
				case 8:
					return 8;
			
				case 9:
					return 6;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_255(int iParam0, int iParam1) // Position - 0xA46D
{
	int num;

	num = func_261(iParam0, iParam1);

	if (!func_260(iParam0))
		num = num + func_256(iParam0, func_361() + 1);

	if (iParam0 == 14 || func_260(iParam0) && iParam0 != 9 && iParam0 != 16 && iParam0 != 7 && iParam0 != 17)
		num = num + func_256(iParam0, func_361() + 1);

	if (iParam0 == 7)
		num = num + 6;

	if (iParam0 == 17)
		num = num + 2;

	return num;
}

int func_256(int iParam0, int iParam1) // Position - 0xA501
{
	int num;
	int num2;
	int num3;

	if (func_259(iParam0))
	{
		num = 1;
	}
	else
	{
		if (num == 0)
		{
			num = iParam1;
			num2 = func_258(iParam0, iParam1);
			num3 = func_257(iParam0);
		
			if (num > num2)
				num = num2;
			else if (num < num3)
				num = num3;
		}
	
		if (func_260(iParam0))
		{
			if (num > Global_262145.f_18594)
				num = Global_262145.f_18594;
		}
		else
		{
			if (num < Global_262145.f_18593)
				num = Global_262145.f_18593;
		
			if (num > Global_262145.f_18592)
				num = Global_262145.f_18592;
		}
	}

	return num;
}

int func_257(int iParam0) // Position - 0xA59A
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18631;
	
		case 10:
			return Global_262145.f_18656;
	
		default:
		
	}

	return 1;
}

int func_258(int iParam0, int iParam1) // Position - 0xA5CA
{
	if (func_260(iParam0))
	{
		if (iParam1 >= Global_262145.f_18595)
			return 2;
	
		return 1;
	}

	switch (iParam0)
	{
		case 5:
			return Global_262145.f_18632;
	
		case 10:
			return Global_262145.f_18657;
	
		default:
		
	}

	return 8;
}

BOOL func_259(int iParam0) // Position - 0xA618
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_260(int iParam0) // Position - 0xA64A
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return false;
	
		default:
		
	}

	return true;
}

int func_261(int iParam0, int iParam1) // Position - 0xA6A0
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
			
				case 196:
					return 3;
			
				case 197:
					return 3;
			
				case 198:
					return 3;
			
				case 199:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
			
				case 8:
					return 8;
			
				case 9:
					return 7;
			
				case 10:
					return 4;
			
				case 11:
					return 5;
			
				case 12:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
			
				case 2:
					return 10;
			
				case 3:
					return 8;
			
				case 4:
					return 10;
			
				case 5:
					return 10;
			
				case 6:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
			
				case 14:
					return 8;
			
				case 15:
					return 8;
			
				case 16:
					return 8;
			
				case 17:
					return 10;
			
				case 18:
					return 9;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
			
				case 20:
					return 8;
			
				case 21:
					return 4;
			
				case 22:
					return 0;
			
				case 23:
					return 10;
			
				case 24:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
			
				case 26:
					return 15;
			
				case 27:
					return 13;
			
				case 28:
					return 16;
			
				case 29:
					return 14;
			
				case 30:
					return 14;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
			
				case 75:
					return 5;
			
				case 76:
					return 5;
			
				case 77:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
			
				case 67:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
			
				case 39:
					return 6;
			
				case 40:
					return 7;
			
				case 41:
					return 6;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_262(int iParam0, int iParam1, int iParam2, Player plParam3, int iParam4) // Position - 0xA932
{
	int num;

	num = func_268(iParam0, iParam1, iParam2, iParam4);

	if (!func_267(iParam0))
		if (plParam3 != _INVALID_PLAYER_INDEX())
			num = num + func_264(iParam0, func_205(plParam3) + 1, plParam3, -1, iParam2);

	if (func_263(iParam0))
		num = num + iParam2;

	return num;
}

BOOL func_263(int iParam0) // Position - 0xA985
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return true;
	
		default:
		
	}

	return false;
}

int func_264(int iParam0, int iParam1, Player plParam2, int iParam3, int iParam4) // Position - 0xA9AB
{
	int num;

	if (iParam4 > 0)
		return iParam4;

	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			num = 1;
			break;
	
		case 8:
			num = 2;
			break;
	
		case 3:
		case 2:
			num = 4;
			break;
	
		default:
			if (func_267(iParam0))
				num = 2;
			else
				num = 1;
			break;
	}

	if (num > func_266(iParam0))
		num = func_266(iParam0);
	else if (num < func_265(iParam0))
		num = func_265(iParam0);

	return num;
}

int func_265(int iParam0) // Position - 0xAA47
{
	return 1;
}

int func_266(int iParam0) // Position - 0xAA50
{
	return 4;
}

BOOL func_267(int iParam0) // Position - 0xAA59
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return true;
	
		default:
		
	}

	return false;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAA97
{
	int num;

	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 5;
	
		case 3:
			num = 1;
		
			switch (iParam1)
			{
				case 26:
					return num + 1;
			
				case 34:
					return num + 1;
			
				default:
				
			}
		
			return num;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		case 8:
			return 7;
	
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
			
				default:
				
			}
		
			return 2;
	
		case 9:
			return 0;
	
		case 13:
			return 1;
	
		case 10:
			return 12;
	}

	return 0;
}

int func_269(int iParam0, int iParam1, int iParam2, Player plParam3, int iParam4) // Position - 0xAB52
{
	int num;

	num = func_280(iParam0, iParam1, iParam2, iParam4);

	if (!func_279(iParam0))
		if (plParam3 != _INVALID_PLAYER_INDEX())
			num = num + func_271(iParam0, func_205(plParam3) + 1, plParam3, -1, iParam2);

	if (func_270(iParam0))
		num = num + iParam2;

	return num;
}

BOOL func_270(int iParam0) // Position - 0xABA5
{
	switch (iParam0)
	{
		case 23:
			return true;
	
		default:
		
	}

	return false;
}

int func_271(int iParam0, int iParam1, Player plParam2, int iParam3, int iParam4) // Position - 0xABBF
{
	int num;
	int num2;

	if (iParam4 > 0)
		return iParam4;

	if (func_278(iParam0))
	{
		num2 = func_277(iParam3);
	
		switch (iParam0)
		{
			case 21:
				num = 1;
				break;
		
			case 23:
				switch (num2)
				{
					case 1:
						num = 1;
						break;
				
					case 2:
						num = 2;
						break;
				
					case 3:
						num = 2;
						break;
				}
				break;
		
			case 15:
				switch (num2)
				{
					case 1:
						num = 3;
						break;
				
					case 2:
						num = 6;
						break;
				
					case 3:
						num = 8;
						break;
				}
				break;
		
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (num2)
				{
					case 1:
						num = 1;
						break;
				
					case 2:
						num = 2;
						break;
				
					case 3:
						num = 3;
						break;
				}
				break;
		
			case 25:
				switch (num2)
				{
					case 1:
						num = 2;
						break;
				
					case 2:
						num = 3;
						break;
				
					case 3:
						num = 3;
						break;
				}
				break;
		}
	
		return num;
	}
	else if (func_276(iParam0))
	{
		num = 1;
		return num;
	}
	else
	{
		num = iParam1;
	
		if (num > func_275(plParam2))
			num = func_275(plParam2);
	}

	if (num > func_273(iParam0))
		num = func_273(iParam0);
	else if (num < func_272(iParam0))
		num = func_272(iParam0);

	return num;
}

int func_272(int iParam0) // Position - 0xAD3D
{
	switch (iParam0)
	{
		case 15:
			return 3;
	
		default:
		
	}

	return 1;
}

int func_273(int iParam0) // Position - 0xAD57
{
	if (!func_278(iParam0))
	{
		if (func_279(iParam0))
		{
			if (func_274(iParam0))
				return 2;
		
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
		
			case 23:
				return 2;
		
			case 15:
				return 9;
		
			default:
			
		}
	
		return 3;
	}

	return 4;
}

BOOL func_274(int iParam0) // Position - 0xADB1
{
	switch (iParam0)
	{
		case 12:
			return true;
	
		default:
		
	}

	return false;
}

int func_275(Player plParam0) // Position - 0xADCB
{
	if (plParam0 == _INVALID_PLAYER_INDEX() || Global_1845263[plParam0 /*877*/].f_267.f_295 == 0)
		return 50;

	return 50 - Global_1845263[plParam0 /*877*/].f_267.f_295.f_3;
}

BOOL func_276(int iParam0) // Position - 0xAE0D
{
	switch (iParam0)
	{
		case 26:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_277(int iParam0) // Position - 0xAE27
{
	if (iParam0 > 25)
		return 3;
	else if (iParam0 > 10)
		return 2;

	return 1;
}

BOOL func_278(int iParam0) // Position - 0xAE49
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_279(int iParam0) // Position - 0xAE9F
{
	if (func_278(iParam0) || func_276(iParam0))
		return true;

	return false;
}

int func_280(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAEC1
{
	switch (iParam0)
	{
		case 1:
			return 1;
	
		case 2:
			return 12;
	
		case 11:
			return 1;
	
		case 5:
			return 10;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
			
				case 1:
					return 3;
			
				case 2:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
			
				case 35:
					return 20;
			
				case 36:
					return 22;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
			
				case 7:
					return 0;
			
				case 8:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
			
				case 2:
					return 14;
			
				case 3:
					return 14;
			
				case 4:
					return 14;
			
				default:
					break;
			}
			break;
	
		case 8:
			return 2;
	
		case 23:
			return 2 * iParam2;
	
		case 24:
			return 2 * iParam2;
	
		case 26:
			return 2;
	}

	return 0;
}

int func_281(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAFF3
{
	int num;

	num = func_286(iParam0, iParam1, iParam2, iParam3);

	if (!func_285(iParam0))
		num = num + func_283(iParam0, func_361() + 1, -1, iParam2);

	if (func_282(iParam0))
		num = num + iParam2;

	return num;
}

BOOL func_282(int iParam0) // Position - 0xB039
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return true;
	
		default:
		
	}

	return false;
}

int func_283(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB07D
{
	int num;

	if (iParam3 > 0)
		return iParam3;

	if (func_284(iParam0))
	{
		if (iParam2 <= Global_262145.f_21893)
		{
			num = 1;
		
			if (iParam0 == 15)
				num = 2;
		}
		else if (iParam2 <= Global_262145.f_21894)
		{
			num = 2;
		
			if (iParam0 == 18)
				num = 1;
		}
		else
		{
			num = 3;
		
			if (iParam0 == 18)
				num = 2;
			else if (iParam0 == 19 || iParam0 == 2)
				num = 4;
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
			num = 1;
		else
			num = 2;
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		num = 1;
	}
	else if (func_285(iParam0))
	{
		if (iParam1 < Global_262145.f_21853)
			num = 1;
		else
			num = 2;
	}
	else
	{
		num = iParam1;
	}

	if (num == 0)
		num = 1;

	return num;
}

BOOL func_284(int iParam0) // Position - 0xB15A
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_285(int iParam0) // Position - 0xB192
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return true;
	
		default:
		
	}

	return false;
}

int func_286(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB1F4
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
			
				case 1:
					return 6;
			
				case 2:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
			
				case 4:
					return 0;
			
				case 5:
					return 0;
			
				case 6:
					return 0;
			
				case 7:
					return 0;
			
				case 8:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
			
				case 10:
					return 0;
			
				case 11:
					return 0;
			
				case 12:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
			
				case 15:
					return 12;
			
				case 13:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
			
				case 17:
					return 0;
			
				case 18:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
			
				case 20:
					return 15;
			
				case 21:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
			
				case 23:
					return 7;
			
				case 24:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 25:
					return 6 + (iParam2 * 2);
			
				case 26:
					return 7 + (iParam2 * 2);
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
			
				case 28:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
			
				case 30:
					return 6;
			
				case 31:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
			
				case 33:
					return 8;
			
				case 34:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 12:
			return 0;
	
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
			
				case 36:
					return 9;
			
				case 37:
					return 0;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
			
				case 1:
					return 16;
			
				case 2:
					return 6;
			
				case 3:
					return 3;
			
				case 4:
					return 9;
			
				case 5:
					return 6;
			
				case 6:
					return 6;
			
				case 7:
					return 3;
			
				case 8:
					return 3;
			
				case 9:
					return 3;
			
				case 10:
					return 0;
			
				case 11:
					return 9;
			
				case 12:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 15:
			return iParam2;
	
		case 16:
			return 0;
	
		case 17:
			return 0;
	
		case 18:
			return 0;
	
		case 19:
			return 0;
	
		case 20:
			return 13;
	}

	return 0;
}

int func_287(int iParam0, int iParam1, int iParam2) // Position - 0xB540
{
	int num;

	num = func_288(iParam0, iParam1);

	if (iParam0 == 15)
		num = num + 1;

	return num;
}

int func_288(int iParam0, int iParam1) // Position - 0xB561
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
			
				case 19:
					return 7;
			
				case 20:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
			
				case 28:
					return 1;
			
				case 29:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
			
				case 22:
					return 2;
			
				case 23:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
			
				case 37:
					return 7;
			
				case 38:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
			
				case 40:
					return 6;
			
				case 41:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
			
				case 2:
					return 5;
			
				case 3:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
			
				case 43:
					return 1;
			
				case 44:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
			
				case 46:
					return 12;
			
				case 47:
					return 12;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
			
				case 49:
					return 7;
			
				case 50:
					return 7;
			
				default:
					break;
			}
			break;
	
		case 12:
			return 3;
	}

	return 0;
}

int func_289(int iParam0) // Position - 0xB721
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 0;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 3;
	
		case 13:
			return 0;
	
		case 14:
			return 0;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 3;
	
		case 19:
			return 0;
	
		case 18:
			return 0;
	
		default:
		
	}

	return 1;
}

int func_290(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, Player plParam5) // Position - 0xB7F9
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
	
		case 157:
			return 4;
	
		case 167:
			return func_332(iParam1);
	
		case 170:
			return 2;
	
		case 171:
			return 0;
	
		case 172:
			return 5;
	
		case 173:
			return 14;
	
		case 168:
			return 8;
	
		case 178:
		case 188:
			return func_328(iParam1, iParam3, iParam4);
	
		case 225:
		case 226:
			return func_324(iParam1, iParam3, iParam4, false, false);
	
		case 227:
			return 0;
	
		case 229:
		case 230:
			return func_318(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(plParam5), false, false, false);
	
		case 233:
			return func_312(iParam1, iParam3, iParam4, unk_0xB23E0F9B63D009A8(plParam5), false, false, false);
	
		case 190:
			return 18;
	
		case 191:
			return 0;
	
		case 192:
			return func_311(iParam1, iParam3);
	
		case 179:
			return 0;
	
		case 183:
			return 5;
	
		case 182:
			return 14;
	
		case 185:
			return 24;
	
		case 186:
			return 13;
	
		case 180:
			return 6;
	
		case 193:
			return 6;
	
		case 194:
			return 0;
	
		case 197:
			return 4;
	
		case 199:
			return 0;
	
		case 195:
			return 20;
	
		case 201:
			return 0;
	
		case 198:
			return 8;
	
		case 205:
			return 1;
	
		case 207:
			return 8;
	
		case 208:
			return 2;
	
		case 209:
			return 6;
	
		case 210:
			return 0;
	
		case 214:
			return 5;
	
		case 215:
			return 11;
	
		case 216:
			return 8;
	
		case 217:
			return 24;
	
		case 218:
			return 23;
	
		case 219:
			return 1;
	
		case 220:
			return 4;
	
		case 221:
			return 4;
	
		case 237:
		case 250:
			return func_310(iParam1, iParam3, iParam4);
	
		case 238:
		case 249:
			return func_309(iParam1);
	
		case 239:
			return 4;
	
		case 240:
			return 11;
	
		case 241:
			return 3;
	
		case 242:
			return 5;
	
		case 244:
			return 4;
	
		case 248:
			return 1;
	
		case 243:
			return func_303(iParam1, iParam3, unk_0xB23E0F9B63D009A8(plParam5), false, -1, false, false);
	
		case 158:
			return func_297(iParam1, iParam3, unk_0xB23E0F9B63D009A8(plParam5), false, -1, false, false);
	
		case 181:
			return func_291(iParam1, iParam3, unk_0xB23E0F9B63D009A8(plParam5), false, -1, false, false);
	
		default:
		
	}

	return 0;
}

int func_291(int iParam0, int iParam1, Player plParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xBAE8
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 0;
			break;
	}

	if (!bParam5)
		num = num + func_296(iParam0, -1);

	if (!bParam6)
		if (func_295(0, iParam1) != -1)
			num = num + func_294(func_205(plParam2) + 1, iParam0, plParam2);

	if (!bParam3)
		if (func_293(iParam0, iParam1))
			num = num + func_292(iParam0, iParam1);

	return num;
}

int func_292(int iParam0, int iParam1) // Position - 0xBB5E
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_293(int iParam0, int iParam1) // Position - 0xBB78
{
	return func_292(iParam0, iParam1) > 0;
}

int func_294(int iParam0, int iParam1, Player plParam2) // Position - 0xBB8A
{
	switch (iParam1)
	{
		case 2:
			return 3;
	
		default:
		
	}

	return 1;
}

int func_295(int iParam0, int iParam1) // Position - 0xBBA4
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

int func_296(int iParam0, int iParam1) // Position - 0xBBD8
{
	switch (iParam0)
	{
		case 2:
			return 0;
	
		default:
		
	}

	return 0;
}

int func_297(int iParam0, int iParam1, Player plParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xBBF2
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 1;
			break;
	
		case 24:
			num = num + 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 30:
					num = num + 4;
					break;
			
				case 31:
				case 32:
					num = num + 3;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 89:
					num = num + 1;
					break;
			
				case 90:
					num = num + 2;
					break;
			}
			break;
	
		case 36:
			num = num + 2;
			break;
	
		case 37:
			num = num + 2;
			break;
	
		case 38:
			num = num + 1;
			break;
	
		case 8:
			num = num + 7;
			break;
	
		case 13:
			switch (iParam1)
			{
				case 38:
					num = num + 3;
					break;
			
				case 39:
					num = num + 3;
					break;
			
				case 40:
					num = num + 4;
					break;
			}
			break;
	
		case 16:
			num = num + 12;
			break;
	
		case 35:
			num = num + 4;
			break;
	
		case 4:
			num = num + 16;
			break;
	
		case 46:
			num = num + 1;
			break;
	
		case 9:
			num = num + 7;
			break;
	
		case 14:
			num = num + 7;
			break;
	
		case 17:
			num = num + 7;
			break;
	
		case 47:
			num = num + 2;
			break;
	
		case 11:
			num = num + 3;
			break;
	
		case 18:
			num = num + 4;
			break;
	
		case 6:
			num = num + 11;
			break;
	
		case 48:
			num = num + 2;
			break;
	
		case 44:
			num = num + 2;
			break;
	
		case 21:
			num = num + 8;
			break;
	
		case 22:
			num = num + 3;
			break;
	
		case 7:
			num = num + 7;
			break;
	
		case 15:
			num = num + 1;
			break;
	
		case 2:
			num = num + 1;
			break;
	
		case 34:
			num = num + 5;
			break;
	
		case 27:
			num = num + 9;
			break;
	
		case 26:
			num = num + 3;
			break;
	
		case 31:
			num = num + 1;
			break;
	
		case 3:
			num = num + 21;
			break;
	
		case 12:
			num = num + 20;
			break;
	
		case 41:
			num = num + 11;
			break;
	
		case 49:
			num = num + 3;
			break;
	
		case 29:
			num = num + 1;
			break;
	
		case 5:
			num = num + 3;
			break;
	
		case 50:
			num = num + 4;
			break;
	
		case 23:
			num = num + 4;
			break;
	
		case 20:
			num = num + 3;
			break;
	
		case 32:
			num = num + 0;
			break;
	
		case 51:
			num = num + 4;
			break;
	
		case 52:
			num = num + 6;
			break;
	
		case 39:
			num = num + 2;
			break;
	
		case 40:
			num = num + 1;
			break;
	
		case 25:
			num = num + 3;
			break;
	}

	if (!bParam5)
		num = num + func_302(iParam0, -1);

	if (!bParam6)
		if (func_301(0, iParam1) != -1)
			num = num + func_300(func_205(plParam2) + 1, iParam0, plParam2);

	if (!bParam3)
		if (func_299(iParam0, iParam1))
			num = num + func_298(iParam0, iParam1);

	return num;
}

int func_298(int iParam0, int iParam1) // Position - 0xBF7D
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 27:
		case 49:
		case 48:
		case 6:
		case 50:
		case 7:
		case 16:
		case 47:
		case 5:
		case 25:
		case 26:
		case 22:
		case 11:
		case 17:
		case 14:
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_299(int iParam0, int iParam1) // Position - 0xC004
{
	return func_298(iParam0, iParam1) > 0;
}

int func_300(int iParam0, int iParam1, Player plParam2) // Position - 0xC016
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;

	switch (iParam1)
	{
		case 43:
			return 3;
	
		case 17:
		case 18:
		case 15:
			return 2;
	
		case 12:
		case 13:
			if (plParam2 != _INVALID_PLAYER_INDEX())
				if (func_189(plParam2, true))
					unk = { func_245(plParam2) };
			else
				return 4;
		
			if (unk.f_1 == 4)
				return 4;
			else
				return 2;
			break;
	
		case 53:
			iParam0 == 1;
			break;
	}

	return 1;
}

int func_301(int iParam0, int iParam1) // Position - 0xC0AE
{
	switch (iParam1)
	{
		case 96:
		case 97:
		case 98:
		case 108:
		case 109:
		case 110:
		case 118:
		case 119:
		case 120:
		case 105:
		case 106:
		case 107:
			return 0;
	
		case 66:
		case 67:
		case 68:
		case 30:
		case 31:
		case 32:
		case 121:
		case 122:
		case 123:
			return 1;
	
		case 93:
		case 94:
		case 95:
			return 3;
	
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	
		case 116:
		case 117:
			return 2;
	
		case 20:
			return 9;
	
		case 21:
			return 5;
	
		case 27:
		case 28:
		case 29:
			return 7;
	
		case 114:
		case 115:
			return iParam0;
	
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 2;
			
				case 1:
					return 3;
			
				case 2:
					return 4;
			
				case 3:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 38:
		case 39:
		case 40:
			switch (iParam0)
			{
				case 0:
					return 3;
			
				case 1:
					return 4;
			
				case 2:
					return 5;
			
				case 3:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 5;
			
				case 1:
					return 6;
			
				default:
					break;
			}
			break;
	
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 7;
			
				case 1:
					return 8;
			
				default:
					break;
			}
			break;
	
		case 33:
		case 34:
		case 35:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 51:
		case 52:
			switch (iParam0)
			{
				case 0:
					return 1;
			
				case 1:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 43:
		case 44:
		case 45:
			switch (iParam0)
			{
				case 0:
					return 1;
			
				case 1:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 36:
		case 37:
			switch (iParam0)
			{
				case 0:
					return 20;
			
				case 1:
					return 21;
			
				case 2:
					return 22;
			
				case 3:
					return 23;
			
				default:
					break;
			}
			break;
	
		case 17:
		case 18:
		case 19:
			return 3;
	
		case 131:
			return 4;
	}

	return -1;
}

int func_302(int iParam0, int iParam1) // Position - 0xC38D
{
	switch (iParam0)
	{
		case 53:
			return 0;
	
		default:
		
	}

	return 0;
}

int func_303(int iParam0, int iParam1, Player plParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC3A7
{
	int num;

	switch (iParam0)
	{
		case 13:
			num = num + 4;
			break;
	
		case 1:
			num = num + 10;
			break;
	
		case 15:
			num = num + 21;
			break;
	
		case 14:
			num = num + 2;
			break;
	
		case 11:
			switch (iParam1)
			{
				case 35:
					num = num + 4;
					break;
			
				case 36:
					num = num + 5;
					break;
			
				case 37:
					num = num + 5;
					break;
			}
			break;
	
		case 5:
			num = num + 3;
			break;
	
		case 6:
			num = num + 2;
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					num = num + 5;
					break;
			
				case 1:
					num = num + 5;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 31:
					num = num + 2;
					break;
			
				case 32:
					num = num + 1;
					break;
			
				case 33:
					num = num + 2;
					break;
			
				case 34:
					num = num + 2;
					break;
			}
			break;
	
		case 12:
			num = num + 3;
			break;
	
		case 9:
			switch (iParam1)
			{
				case 28:
					switch (iParam4)
					{
						case 0:
							num = num + 3;
							break;
					
						case 1:
							num = num + 4;
							break;
					
						case 2:
							num = num + 3;
							break;
					}
					break;
			
				case 29:
					switch (iParam4)
					{
						case 0:
							num = num + 4;
							break;
					
						case 1:
							num = num + 3;
							break;
					
						case 2:
							num = num + 3;
							break;
					}
					break;
			
				case 30:
					switch (iParam4)
					{
						case 0:
							num = num + 3;
							break;
					
						case 1:
							num = num + 3;
							break;
					
						case 2:
							num = num + 3;
							break;
					}
					break;
			}
			break;
	
		case 3:
			num = num + 6;
			break;
	
		case 4:
			switch (iParam1)
			{
				case 12:
					num = num + 7;
					break;
			
				case 13:
					num = num + 10;
					break;
			
				case 14:
					num = num + 8;
					break;
			}
			break;
	
		case 2:
			num = num + 3;
			break;
	
		case 8:
			num = num + 0;
			break;
	
		case 7:
			num = num + 1;
			break;
	}

	if (!bParam5)
	{
		if (func_249(iParam0))
			num = num + func_248(iParam0, plParam2);
	
		num = num + func_308(iParam0, -1);
	}

	if (!bParam6)
		if (func_307(0, iParam1) != -1)
			num = num + func_306(func_205(plParam2) + 1, iParam0);

	if (!bParam3)
		if (func_305(iParam0, iParam1))
			num = num + func_304(iParam0, iParam1);

	return num;
}

int func_304(int iParam0, int iParam1) // Position - 0xC682
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
	
		default:
		
	}

	switch (iParam1)
	{
		case 37:
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_305(int iParam0, int iParam1) // Position - 0xC6B9
{
	return func_304(iParam0, iParam1) > 0;
}

int func_306(int iParam0, int iParam1) // Position - 0xC6CB
{
	switch (iParam1)
	{
		case 6:
			if (iParam0 == 1)
				return 1;
			else
				return 2;
			break;
	}

	return 1;
}

int func_307(int iParam0, int iParam1) // Position - 0xC6F5
{
	switch (iParam1)
	{
		case 46:
		case 47:
		case 48:
			switch (iParam0)
			{
				case 0:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 35:
		case 36:
		case 37:
			return 0;
	
		case 2:
		case 3:
		case 4:
		case 5:
			return 0;
	
		case 28:
		case 29:
		case 30:
			return 0;
	
		case 18:
		case 19:
		case 20:
		case 21:
			switch (iParam0)
			{
				case 0:
					return 2;
			
				case 1:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 31:
		case 32:
		case 33:
		case 34:
			return 0;
	
		case 38:
		case 39:
		case 40:
			return 0;
	
		case 12:
			return 6;
	
		case 13:
			return 9;
	
		case 14:
			return 7;
	
		case 22:
		case 23:
		case 24:
			return 0;
	
		case 25:
		case 26:
		case 27:
			return 0;
	}

	return -1;
}

int func_308(int iParam0, int iParam1) // Position - 0xC827
{
	switch (iParam0)
	{
		case 16:
			return 0;
	
		default:
		
	}

	return 0;
}

int func_309(int iParam0) // Position - 0xC841
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 4;
	
		case 2:
			return 6;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		default:
		
	}

	return 0;
}

int func_310(int iParam0, int iParam1, int iParam2) // Position - 0xC88D
{
	int num;

	switch (iParam0)
	{
		case 12:
			switch (iParam1)
			{
				case 80:
					num = num + 1;
					break;
			
				case 81:
					num = num + 1;
					break;
			
				case 82:
					num = num + 1;
					break;
			}
			break;
	
		case 22:
			num = num + 4;
			break;
	
		case 18:
			num = num + 4;
			break;
	
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					num = num + 3;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					num = num + 2;
					break;
			}
			break;
	
		case 15:
			num = num + 1;
			break;
	
		case 23:
			num = num + 1;
			break;
	
		case 20:
			num = num + 4;
			break;
	
		case 17:
			num = num + 1;
			break;
	
		case 19:
			num = num + 1;
			break;
	
		case 16:
			num = num + 1;
			break;
	
		case 3:
			num = num + 8;
			break;
	
		case 14:
			num = num + 1;
			break;
	
		case 10:
			num = num + 8;
			break;
	
		case 4:
		case 24:
		case 2:
			num = num + 1;
			break;
	
		case 1:
			num = num + 5;
			break;
	
		case 5:
			num = num + 3;
			break;
	
		case 0:
			num = num + 3;
			break;
	}

	if (func_253(iParam0))
		num = num + iParam2;

	return num;
}

int func_311(int iParam0, int iParam1) // Position - 0xCA2E
{
	int num;

	switch (iParam0)
	{
		case 20:
			num = num + 0;
			break;
	
		case 0:
			switch (iParam1)
			{
				case 1:
					num = num + 7;
					break;
			
				case 2:
					num = num + 6;
					break;
			
				case 3:
					num = num + 4;
					break;
			
				case 4:
					num = num + 2;
					break;
			
				case 5:
					num = num + 3;
					break;
			
				case 6:
					num = num + 2;
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 7:
					num = num + 4;
					break;
			
				case 8:
					num = num + 4;
					break;
			
				case 9:
					num = num + 2;
					break;
			
				case 10:
					num = num + 2;
					break;
			
				case 11:
					num = num + 2;
					break;
			
				case 12:
					num = num + 4;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 13:
					num = num + 2;
					break;
			
				case 14:
					num = num + 4;
					break;
			
				case 15:
					num = num + 6;
					break;
			
				case 16:
					num = num + 3;
					break;
			
				case 17:
					num = num + 3;
					break;
			
				case 18:
					num = num + 2;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 19:
					num = num + 5;
					break;
			
				case 20:
					num = num + 4;
					break;
			
				case 21:
					num = num + 6;
					break;
			
				case 22:
					num = num + 2;
					break;
			
				case 23:
					num = num + 4;
					break;
			
				case 24:
					num = num + 5;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 19:
					num = num + 5;
					break;
			
				case 20:
					num = num + 4;
					break;
			
				case 21:
					num = num + 6;
					break;
			
				case 22:
					num = num + 2;
					break;
			
				case 23:
					num = num + 4;
					break;
			
				case 24:
					num = num + 5;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 31:
					num = num + 5;
					break;
			
				case 32:
					num = num + 2;
					break;
			
				case 33:
					num = num + 3;
					break;
			
				case 34:
					num = num + 5;
					break;
			
				case 35:
					num = num + 5;
					break;
			
				case 36:
					num = num + 5;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 68:
					num = num + 0;
					break;
			
				case 69:
					num = num + 0;
					break;
			
				case 70:
					num = num + 0;
					break;
			
				case 71:
					num = num + 0;
					break;
			
				case 72:
					num = num + 0;
					break;
			
				case 73:
					num = num + 0;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 74:
					num = num + 1;
					break;
			
				case 75:
					num = num + 1;
					break;
			
				case 76:
					num = num + 1;
					break;
			
				case 77:
					num = num + 1;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 78:
					num = num + 0;
					break;
			
				case 79:
					num = num + 0;
					break;
			
				case 80:
					num = num + 0;
					break;
			
				case 81:
					num = num + 0;
					break;
			
				case 82:
					num = num + 0;
					break;
			
				case 83:
					num = num + 0;
					break;
			
				case 84:
					num = num + 0;
					break;
			}
			break;
	
		case 7:
			num = num + 4;
			break;
	
		case 8:
			switch (iParam1)
			{
				case 62:
					num = num + 6;
					break;
			
				case 63:
					num = num + 6;
					break;
			
				case 64:
					num = num + 6;
					break;
			
				case 65:
					num = num + 6;
					break;
			
				case 66:
					num = num + 6;
					break;
			
				case 67:
					num = num + 6;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 85:
					num = num + 0;
					break;
			
				case 86:
					num = num + 0;
					break;
			
				case 87:
					num = num + 0;
					break;
			
				case 88:
					num = num + 0;
					break;
			
				case 89:
					num = num + 0;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 90:
					num = num + 2;
					break;
			
				case 91:
					num = num + 2;
					break;
			
				case 92:
					num = num + 2;
					break;
			
				case 93:
					num = num + 2;
					break;
			
				case 94:
					num = num + 2;
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 37:
					num = num + 3;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 38:
					num = num + 4;
					break;
			
				case 39:
					num = num + 4;
					break;
			
				case 40:
					num = num + 4;
					break;
			
				case 41:
					num = num + 4;
					break;
			}
			break;
	
		case 15:
			num = num + 0;
			break;
	
		case 16:
			num = num + 0;
			break;
	
		case 17:
			num = num + 0;
			break;
	
		case 18:
			num = num + 0;
			break;
	
		case 19:
			num = num + 0;
			break;
	
		default:
			num = num + 0;
			break;
	}

	if (func_260(iParam0) && iParam0 != 7 || iParam0 == 12)
		num = num + func_256(iParam0, func_361() + 1);

	return num;
}

int func_312(int iParam0, int iParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD015
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 0;
			break;
	
		case 1:
			num = num + 5;
			break;
	
		case 2:
			num = num + 2;
			break;
	
		case 3:
			num = num + 1;
			break;
	
		case 4:
			num = num + 3;
			break;
	
		case 5:
			num = num + 2;
			break;
	
		case 8:
			num = num + 3;
			break;
	
		case 6:
			num = num + 1;
			break;
	
		case 12:
			num = num + 2;
			break;
	
		case 7:
			num = num + 6;
			break;
	
		case 9:
			num = num + 0;
			break;
	
		case 11:
			num = num + 0;
			break;
	
		case 13:
			num = num + 2;
			break;
	
		case 10:
			num = num + 4;
			break;
	}

	if (!bParam5)
	{
		if (func_267(iParam0))
			if (plParam3 != _INVALID_PLAYER_INDEX())
				num = num + func_264(iParam0, func_205(plParam3) + 1, plParam3, -1, iParam2);
	
		if (plParam3 != _INVALID_PLAYER_INDEX())
			num = num + func_317(iParam0, func_205(plParam3) + 1);
	}

	if (!bParam6)
		if (func_316(0, iParam1) != -1)
			if (plParam3 != _INVALID_PLAYER_INDEX())
				num = num + func_315(func_205(plParam3) + 1, iParam0);

	if (!bParam4)
		if (func_314(iParam0))
			num = num + func_313(iParam0);

	return num;
}

int func_313(int iParam0) // Position - 0xD18B
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_314(int iParam0) // Position - 0xD1CF
{
	return func_313(iParam0) > 0;
}

int func_315(int iParam0, int iParam1) // Position - 0xD1DF
{
	return 2;
}

int func_316(int iParam0, int iParam1) // Position - 0xD1E8
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 2;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

int func_317(int iParam0, int iParam1) // Position - 0xD230
{
	int num;

	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 8:
			if (iParam1 > 4)
				return 4;
		
			return iParam1;
	
		case 1:
			num = func_76(5329, -1);
		
			if (IS_BIT_SET(num, 7))
			{
				if (iParam1 > 4)
					return 4;
			
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}

	return 0;
}

int func_318(int iParam0, int iParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD28F
{
	int num;

	switch (iParam0)
	{
		case 11:
			num = num + 9;
			break;
	
		case 1:
			num = num + 0;
			break;
	
		case 7:
			num = num + 10;
			break;
	
		case 2:
			num = num + 12;
			break;
	
		case 4:
			num = num + 10;
			break;
	
		case 8:
			num = num + 1;
			break;
	
		case 5:
			num = num + 2;
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					num = num + 1;
					break;
			
				case 1:
					num = num + 1;
					break;
			
				case 2:
					num = num + 0;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 3:
					num = num + 4;
					break;
			
				case 4:
					num = num + 2;
					break;
			
				case 5:
					num = num + 5;
					break;
			}
			break;
	
		case 3:
			if (iParam2 >= 4)
				num = num + 10;
			else if (iParam2 == 3)
				num = num + 8;
			else if (iParam2 == 2)
				num = num + 7;
			else if (iParam2 == 1)
				num = num + 6;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 34:
					num = num + 1;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 6:
					num = num + 1;
					break;
			
				case 7:
					num = num + 4;
					break;
			
				case 8:
					num = num + 2;
					break;
			}
			break;
	
		case 0:
			if (iParam2 >= 3)
				num = num + 2;
			else
				num = num + 1;
			break;
	
		case 23:
			num = num + iParam2;
			break;
	
		case 20:
			num = num + 5;
			break;
	
		case 22:
			num = num + (5 * iParam2);
			break;
	
		case 25:
			num = num + iParam2;
			break;
	
		case 24:
			num = num + (3 * iParam2);
			break;
	
		case 16:
			num = num + (5 * iParam2);
			break;
	
		case 17:
			num = num + 5;
			break;
	
		case 26:
			num = num + 1;
			break;
	}

	if (!bParam5)
	{
		if (func_279(iParam0))
			if (plParam3 != _INVALID_PLAYER_INDEX())
				num = num + func_271(iParam0, func_205(plParam3) + 1, plParam3, -1, iParam2);
	
		if (plParam3 != _INVALID_PLAYER_INDEX())
			num = num + func_323(iParam0, func_205(plParam3) + 1);
	}

	if (!bParam6)
		if (func_322(0, iParam1) != -1)
			if (plParam3 != _INVALID_PLAYER_INDEX())
				num = num + func_321(func_205(plParam3) + 1, iParam0);

	if (!bParam4)
		if (func_320(iParam0))
			num = num + func_319(iParam0);

	return num;
}

int func_319(int iParam0) // Position - 0xD555
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
	
		case 21:
		case 16:
		case 17:
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_320(int iParam0) // Position - 0xD5C7
{
	return func_319(iParam0) > 0;
}

int func_321(int iParam0, int iParam1) // Position - 0xD5D7
{
	switch (iParam0)
	{
		case 1:
			if (func_274(iParam1))
				return 1;
			else
				return 1;
			break;
	
		case 2:
			if (func_274(iParam1))
				return 1;
			else
				return 1;
			break;
	
		case 3:
			if (func_274(iParam1))
				return 2;
			else
				return 2;
			break;
	
		case 4:
			if (func_274(iParam1))
				return 2;
			else
				return 2;
			break;
	
		case 5:
			if (func_274(iParam1))
				return 2;
			else
				return 2;
			break;
	
		case 6:
			if (func_274(iParam1))
				return 2;
			else
				return 2;
			break;
	
		case 7:
			if (func_274(iParam1))
				return 2;
			else
				return 2;
			break;
	
		case 8:
			if (func_274(iParam1))
				return 2;
			else
				return 2;
			break;
	}

	return 1;
}

int func_322(int iParam0, int iParam1) // Position - 0xD6CF
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
			
				case 1:
					return 12;
			
				case 2:
					return 13;
			
				case 3:
					return 13;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
			
				case 1:
					return 12;
			
				case 2:
					return 13;
			
				case 3:
					return 13;
			
				default:
					break;
			}
			break;
	
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
			
				case 1:
					return 12;
			
				case 2:
					return 13;
			
				case 3:
					return 13;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
			
				case 1:
					return 1;
			
				case 2:
					return 2;
			
				case 3:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
			
				case 1:
					return 4;
			
				case 2:
					return 5;
			
				case 3:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
			
				case 1:
					return 2;
			
				case 2:
					return 3;
			
				case 3:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
			
				case 1:
					return 2;
			
				case 2:
					return 3;
			
				case 3:
					return 3;
			
				default:
					break;
			}
			break;
	
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
			
				case 1:
					return 7;
			
				case 2:
					return 8;
			
				case 3:
					return 9;
			
				default:
					break;
			}
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 0;
			
				case 3:
					return 0;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

int func_323(int iParam0, int iParam1) // Position - 0xDA6F
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
				return 2;
		
			return 1;
	
		case 14:
			if (iParam1 > 3)
				return 2;
		
			return 1;
	
		case 7:
			if (iParam1 > 4)
				return 4;
		
			return iParam1;
	
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
				return 4;
		
			return iParam1;
	
		case 10:
			if (iParam1 > 4)
				return 2;
		
			return 1;
	
		case 9:
			return 1;
	
		case 0:
			if (iParam1 > 1)
				return 2;
		
			return 1;
	
		case 8:
			if (iParam1 > 3)
				return 2;
		
			return 1;
	
		case 5:
			if (iParam1 > 2)
				return 2;
		
			return 1;
	
		case 13:
			if (iParam1 > 4)
				return 4;
		
			return iParam1;
	
		case 11:
			if (iParam1 > 2)
				return 2;
		
			return 1;
	
		default:
		
	}

	return SYSTEM::CEIL((float)iParam1 / 2f);
}

int func_324(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDB68
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 0;
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					num = num + 3;
					break;
			
				case 1:
					num = num + 3;
					break;
			
				case 2:
					num = num + 3;
					break;
			}
			break;
	
		case 2:
			if (iParam2 >= 4)
				num = num + iParam2 + 2;
			else
				num = num + 5;
			break;
	
		case 3:
			switch (iParam1)
			{
				case 9:
					num = num + 3;
					break;
			
				case 10:
					num = num + 3;
					break;
			
				case 11:
					num = num + 2;
					break;
			
				case 12:
					num = num + 2;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 14:
					num = num + 2;
					break;
			
				case 15:
					num = num + 4;
					break;
			
				case 13:
					num = num + 2;
					break;
			}
			break;
	
		case 5:
			num = num + 4;
			break;
	
		case 6:
			switch (iParam1)
			{
				case 19:
					num = num + 5;
					break;
			
				case 20:
					num = num + 5;
					break;
			
				case 21:
					num = num + 5;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 22:
					num = num + 4;
					break;
			
				case 23:
					num = num + 3;
					break;
			
				case 24:
					num = num + 3;
					break;
			}
		
			if (func_283(iParam0, func_361() + 1, -1, iParam2) == 1)
				num = num + 1;
			break;
	
		case 8:
			switch (iParam1)
			{
				case 25:
					num = num + 5;
					break;
			
				case 26:
					num = num + 5;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 27:
					num = num + 2;
					break;
			
				case 28:
					num = num + 2;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 29:
					num = num + 4;
					break;
			
				case 30:
					num = num + 4;
					break;
			
				case 31:
					num = num + 4;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 32:
					num = num + 2;
					break;
			
				case 33:
					num = num + 2;
					break;
			
				case 34:
					num = num + 2;
					break;
			}
			break;
	
		case 12:
			num = num + 0;
			break;
	
		case 13:
			switch (iParam1)
			{
				case 35:
					num = num + 3;
					break;
			
				case 36:
					num = num + 3;
					break;
			
				case 37:
					num = num + 2;
					break;
			}
			break;
	
		case 14:
			num = num + 8;
			break;
	
		case 15:
			num = num + 0;
			break;
	
		case 16:
			num = num + 0;
			break;
	
		case 17:
			num = num + 0;
			break;
	
		case 19:
			num = num + 0;
			break;
	
		case 18:
			num = num + iParam2;
			break;
	
		case 20:
			num = num + 5;
			break;
	}

	if (!bParam4)
	{
		if (func_285(iParam0))
			num = num + func_283(iParam0, func_361() + 1, -1, iParam2);
	
		num = num + func_327(iParam0, func_361() + 1);
	}

	if (!bParam3)
		if (func_326(iParam0))
			num = num + func_325(iParam0);

	return num;
}

int func_325(int iParam0) // Position - 0xDEEB
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_326(int iParam0) // Position - 0xDF5F
{
	return func_325(iParam0) > 0;
}

int func_327(int iParam0, int iParam1) // Position - 0xDF6F
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
				return 1;
		
			return SYSTEM::FLOOR((float)iParam1 / 1.5f);
	
		case 5:
			if (iParam1 == 1)
				return 1;
		
			return SYSTEM::FLOOR((float)iParam1 / 2f);
	
		default:
		
	}

	return 0;
}

int func_328(int iParam0, int iParam1, int iParam2) // Position - 0xDFBB
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 0;
			break;
	
		case 1:
			num = num + 0;
			break;
	
		case 7:
			num = num + 0;
			break;
	
		case 8:
			num = num + 0;
			break;
	
		case 5:
			num = num + 0;
			break;
	
		case 11:
			num = num + 3;
			break;
	
		case 13:
			num = num + 0;
			break;
	
		case 4:
			switch (iParam1)
			{
				case 1:
					num = num + 2;
					break;
			
				case 2:
					num = num + 2;
					break;
			
				case 3:
					num = num + 2;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 18:
					num = num + 2;
					break;
			
				case 19:
					num = num + 2;
					break;
			
				case 20:
					num = num + 2;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 21:
					num = num + 7;
					break;
			
				case 22:
					num = num + 7;
					break;
			
				case 23:
					num = num + 7;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 27:
					num = num + 0;
					break;
			
				case 28:
					num = num + 0;
					break;
			
				case 29:
					num = num + 0;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 30:
					num = num + 2;
					break;
			
				case 31:
					num = num + 2;
					break;
			
				case 32:
					num = num + 2;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 36:
					num = num + 7;
					break;
			
				case 37:
					num = num + 7;
					break;
			
				case 38:
					num = num + 7;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 39:
					num = num + 4;
					break;
			
				case 40:
					num = num + 4;
					break;
			
				case 41:
					num = num + 6;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 42:
					num = num + 2;
					break;
			
				case 43:
					num = num + 2;
					break;
			
				case 44:
					num = num + 2;
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 45:
					num = num + 6;
					break;
			
				case 46:
					num = num + 6;
					break;
			
				case 47:
					num = num + 6;
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 48:
					num = num + 2;
					break;
			
				case 49:
					num = num + 2;
					break;
			
				case 50:
					num = num + 2;
					break;
			}
			break;
	
		case 12:
			num = num + 11;
			break;
	}

	num = num + func_331(iParam0, func_361() + 1, iParam2);
	num = num + func_329(iParam0);
	return num;
}

int func_329(int iParam0) // Position - 0xE2C4
{
	if (func_330(iParam0))
		return 2;

	return 0;
}

BOOL func_330(int iParam0) // Position - 0xE2DA
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return true;
	
		default:
		
	}

	return false;
}

int func_331(int iParam0, int iParam1, int iParam2) // Position - 0xE324
{
	int num;

	if (num == 0)
		if (iParam0 == 8)
			num = iParam2;
		else
			num = 1;

	if (num == 0)
		num = 1;

	return num;
}

int func_332(int iParam0) // Position - 0xE34E
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 0;
	
		case 3:
			return 3;
	
		case 4:
			return 8;
	
		case 5:
			return 3;
	
		case 6:
			return 1;
	
		case 7:
			return 1;
	
		case 8:
			return 6;
	
		case 9:
			return 6;
	
		case 10:
			return 3;
	
		case 11:
			return 3;
	
		case 12:
			return 2;
	
		case 13:
			return 1;
	
		case 14:
			return 3;
	
		case 15:
			return 5;
	
		case 16:
			return 6;
	
		case 17:
			return 2;
	
		case 19:
			return 4;
	
		case 18:
			return 5;
	
		default:
		
	}

	return 2;
}

int func_333(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE427
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
	
		case 167:
			return func_360(iParam1);
	
		case 168:
			return 12;
	
		case 170:
			return 4;
	
		case 171:
			return 0;
	
		case 172:
			return 0;
	
		case 173:
			return 4;
	
		case 178:
		case 188:
			return func_357(iParam1, iParam2, iParam3);
	
		case 225:
		case 226:
			return func_354(iParam1, iParam2, iParam3, false);
	
		case 227:
			return 0;
	
		case 229:
		case 230:
			return func_351(iParam1, iParam2, iParam3, false);
	
		case 233:
			return func_348(iParam1, iParam2, iParam3, false);
	
		case 190:
			return 20;
	
		case 191:
			return 4;
	
		case 192:
			return func_347(iParam1, iParam2);
	
		case 179:
			return 0;
	
		case 183:
			return 15;
	
		case 182:
			return 20;
	
		case 185:
			return 21;
	
		case 186:
			return 36;
	
		case 180:
			return 10;
	
		case 193:
			return 10;
	
		case 194:
			return 0;
	
		case 197:
			return 12;
	
		case 199:
			return 6;
	
		case 195:
			return 15;
	
		case 201:
			return 0;
	
		case 198:
			return 18;
	
		case 205:
			return 1;
	
		case 207:
			return 24;
	
		case 208:
			return 14;
	
		case 209:
			return 11;
	
		case 210:
			return 0;
	
		case 214:
			return 12;
	
		case 215:
			return 20;
	
		case 216:
			return 20;
	
		case 217:
			return func_346();
	
		case 218:
			return func_345();
	
		case 219:
			return 0;
	
		case 220:
			return 0;
	
		case 221:
			return 0;
	
		case 237:
		case 250:
			return func_344(iParam1, iParam2, iParam3);
	
		case 238:
		case 249:
			return func_343(iParam1, iParam2);
	
		case 239:
			return 6;
	
		case 240:
			return 11;
	
		case 241:
			return 14;
	
		case 242:
			return 14;
	
		case 244:
			return 9;
	
		case 248:
			return 10;
	
		case 243:
			return func_340(iParam1, iParam2, false, -1);
	
		case 158:
			return func_337(iParam1, iParam2, false, -1);
	
		case 181:
			return func_334(iParam1, iParam2, false, -1);
	
		default:
		
	}

	return 0;
}

int func_334(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xE6EF
{
	int num;

	switch (iParam0)
	{
		case 2:
			num = num + 6;
			break;
	}

	if (!bParam2)
		if (func_293(iParam0, iParam1))
			num = num + func_335(iParam0, iParam1);

	return num;
}

int func_335(int iParam0, int iParam1) // Position - 0xE72D
{
	if (func_293(iParam0, iParam1))
		return func_292(iParam0, iParam1) + func_336(iParam0, iParam1);

	return 0;
}

int func_336(int iParam0, int iParam1) // Position - 0xE755
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_337(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xE76F
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 6;
			break;
	
		case 24:
			num = num + 2;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 30:
					num = num + 12;
					break;
			
				case 31:
				case 32:
					num = num + 10;
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 88:
					num = num + 10;
					break;
			
				case 89:
					num = num + 9;
					break;
			
				case 90:
					num = num + 10;
					break;
			}
			break;
	
		case 36:
			num = num + 9;
			break;
	
		case 43:
			num = num + 6;
			break;
	
		case 38:
			num = num + 6;
			break;
	
		case 40:
			num = num + 6;
			break;
	
		case 8:
			num = num + 16;
			break;
	
		case 16:
			num = num + 14;
			break;
	
		case 35:
			num = num + 13;
			break;
	
		case 4:
			num = num + 32;
			break;
	
		case 45:
			num = num + 2;
			break;
	
		case 46:
			num = num + 9;
			break;
	
		case 9:
			num = num + 15;
			break;
	
		case 14:
			num = num + 16;
			break;
	
		case 17:
			num = num + 14;
			break;
	
		case 47:
			num = num + 13;
			break;
	
		case 11:
			num = num + 11;
			break;
	
		case 18:
			num = num + 24;
			break;
	
		case 6:
			num = num + 14;
			break;
	
		case 48:
			num = num + 15;
			break;
	
		case 44:
			num = num + 9;
			break;
	
		case 21:
			num = num + 20;
			break;
	
		case 22:
			num = num + 14;
			break;
	
		case 7:
			num = num + 22;
			break;
	
		case 15:
			num = num + 10;
			break;
	
		case 2:
			num = num + 2;
			break;
	
		case 34:
			num = num + 18;
			break;
	
		case 27:
			num = num + 16;
			break;
	
		case 26:
			num = num + 10;
			break;
	
		case 23:
			num = num + 10;
			break;
	
		case 31:
			num = num + 20;
			break;
	
		case 3:
			num = num + 14;
			break;
	
		case 12:
			num = num + 7;
			break;
	
		case 41:
			num = num + 10;
			break;
	
		case 49:
			num = num + 30;
			break;
	
		case 19:
			num = num + 15;
			break;
	
		case 5:
			num = num + 7;
			break;
	
		case 30:
			num = num + 1;
			break;
	
		case 13:
			num = num + 20;
			break;
	
		case 29:
			num = num + 9;
			break;
	
		case 50:
			num = num + 24;
			break;
	
		case 20:
			num = num + 26;
			break;
	
		case 32:
			num = num + 30;
			break;
	
		case 28:
			num = num + 3;
			break;
	
		case 42:
			num = num + 13;
			break;
	
		case 52:
			num = num + 12;
			break;
	
		case 39:
			num = num + 5;
			break;
	
		case 37:
			num = num + 6;
			break;
	
		case 25:
			num = num + 6;
			break;
	
		case 51:
			num = num + 20;
			break;
	}

	if (!bParam2)
		if (func_299(iParam0, iParam1))
			num = num + func_338(iParam0, iParam1);

	return num;
}

int func_338(int iParam0, int iParam1) // Position - 0xEAFD
{
	if (func_299(iParam0, iParam1))
		return func_298(iParam0, iParam1) + func_339(iParam0, iParam1);

	return 0;
}

int func_339(int iParam0, int iParam1) // Position - 0xEB25
{
	switch (iParam0)
	{
		case 0:
		case 13:
		case 18:
		case 34:
		case 49:
		case 48:
		case 7:
		case 16:
		case 5:
		case 26:
		case 22:
		case 25:
		case 11:
		case 17:
		case 14:
			return 2;
	
		case 6:
		case 50:
		case 47:
			return 4;
	
		case 27:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_340(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xEBB3
{
	int num;

	switch (iParam0)
	{
		case 13:
			num = num + 8;
			break;
	
		case 1:
			switch (iParam1)
			{
				case 2:
					num = num + 10;
					break;
			
				case 3:
					num = num + 10;
					break;
			
				case 4:
					num = num + 14;
					break;
			
				case 5:
					num = num + 10;
					break;
			}
			break;
	
		case 15:
			num = num + 20;
			break;
	
		case 14:
			num = num + 19;
			break;
	
		case 11:
			switch (iParam1)
			{
				case 35:
					num = num + 6;
					break;
			
				case 36:
					num = num + 7;
					break;
			
				case 37:
					num = num + 17;
					break;
			}
			break;
	
		case 6:
			num = num + 8;
			break;
	
		case 5:
			num = num + 11;
			break;
	
		case 0:
			num = num + 12;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 31:
					num = num + 1;
					break;
			
				case 32:
					num = num + 7;
					break;
			
				case 33:
					num = num + 2;
					break;
			
				case 34:
					num = num + 1;
					break;
			}
			break;
	
		case 12:
			num = num + 30;
			break;
	
		case 9:
			switch (iParam1)
			{
				case 28:
					num = num + 10;
					break;
			
				case 29:
					num = num + 8;
					break;
			
				case 30:
					num = num + 9;
					break;
			}
			break;
	
		case 3:
			num = num + 19;
			break;
	
		case 4:
			switch (iParam1)
			{
				case 12:
					num = num + 12;
					break;
			
				case 13:
					num = num + 14;
					break;
			
				case 14:
					num = num + 12;
					break;
			}
			break;
	
		case 2:
			num = num + 12;
			break;
	
		case 8:
			num = num + 7;
			break;
	
		case 7:
			num = num + 1;
			break;
	}

	if (!bParam2)
		if (func_305(iParam0, iParam1))
			num = num + func_341(iParam0, iParam1);

	return num;
}

int func_341(int iParam0, int iParam1) // Position - 0xEDD6
{
	if (func_305(iParam0, iParam1))
		return func_304(iParam0, iParam1) + func_342(iParam0, iParam1);

	return 0;
}

int func_342(int iParam0, int iParam1) // Position - 0xEDFE
{
	switch (iParam0)
	{
		case 4:
		case 9:
		case 8:
			return 2;
	
		default:
		
	}

	switch (iParam1)
	{
		case 37:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_343(int iParam0, int iParam1) // Position - 0xEE35
{
	switch (iParam0)
	{
		case 0:
			return 14;
	
		case 1:
			return 7;
	
		case 2:
			return 27;
	
		case 3:
			return 3;
	
		case 4:
			return 8;
	
		case 5:
			switch (iParam1)
			{
				case 0:
				case 2:
					return 11;
			
				case 1:
					return 9;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_344(int iParam0, int iParam1, int iParam2) // Position - 0xEEA6
{
	int num;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
					num = num + 19;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 77:
				case 78:
				case 79:
					num = num + 2;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 71:
				case 72:
				case 73:
					num = num + 9;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 80:
				case 81:
				case 82:
					num = num + 3;
					break;
			}
			break;
	
		case 22:
			num = num + 8;
			break;
	
		case 15:
			num = num + 1;
			break;
	
		case 23:
			num = num + 3;
			break;
	
		case 20:
			num = num + 12;
			break;
	
		case 18:
			num = num + 20;
			break;
	
		case 17:
			num = num + 9;
			break;
	
		case 19:
			num = num + 1;
			break;
	
		case 3:
			num = num + 5;
			break;
	
		case 14:
			num = num + 1;
			break;
	
		case 10:
			num = num + 17;
			break;
	
		case 4:
			num = num + 3;
			break;
	
		case 1:
			num = num + 30;
			break;
	
		case 2:
			num = num + 4;
			break;
	
		case 5:
			num = num + 16;
			break;
	}

	return num;
}

int func_345() // Position - 0xF05F
{
	int num;

	num = 32;
	return num;
}

int func_346() // Position - 0xF06D
{
	int num;

	num = 8;
	return num;
}

int func_347(int iParam0, int iParam1) // Position - 0xF07B
{
	int num;

	switch (iParam0)
	{
		case 20:
			num = num + 2;
			break;
	
		case 0:
			switch (iParam1)
			{
				case 1:
					num = num + 16;
					break;
			
				case 2:
					num = num + 14;
					break;
			
				case 3:
					num = num + 13;
					break;
			
				case 4:
					num = num + 12;
					break;
			
				case 5:
					num = num + 12;
					break;
			
				case 6:
					num = num + 12;
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 7:
					num = num + 12;
					break;
			
				case 8:
					num = num + 12;
					break;
			
				case 9:
					num = num + 12;
					break;
			
				case 10:
					num = num + 12;
					break;
			
				case 11:
					num = num + 12;
					break;
			
				case 12:
					num = num + 12;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 13:
					num = num + 17;
					break;
			
				case 14:
					num = num + 12;
					break;
			
				case 15:
					num = num + 13;
					break;
			
				case 16:
					num = num + 14;
					break;
			
				case 17:
					num = num + 12;
					break;
			
				case 18:
					num = num + 14;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 19:
					num = num + 14;
					break;
			
				case 20:
					num = num + 14;
					break;
			
				case 21:
					num = num + 14;
					break;
			
				case 22:
					num = num + 14;
					break;
			
				case 23:
					num = num + 14;
					break;
			
				case 24:
					num = num + 14;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 25:
					num = num + 4;
					break;
			
				case 26:
					num = num + 4;
					break;
			
				case 27:
					num = num + 4;
					break;
			
				case 28:
					num = num + 4;
					break;
			
				case 29:
					num = num + 4;
					break;
			
				case 30:
					num = num + 4;
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 31:
					num = num + 13;
					break;
			
				case 32:
					num = num + 13;
					break;
			
				case 33:
					num = num + 13;
					break;
			
				case 34:
					num = num + 13;
					break;
			
				case 35:
					num = num + 13;
					break;
			
				case 36:
					num = num + 13;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 68:
					num = num + 0;
					break;
			
				case 69:
					num = num + 0;
					break;
			
				case 70:
					num = num + 0;
					break;
			
				case 71:
					num = num + 0;
					break;
			
				case 72:
					num = num + 0;
					break;
			
				case 73:
					num = num + 0;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 74:
					num = num + 10;
					break;
			
				case 75:
					num = num + 10;
					break;
			
				case 76:
					num = num + 10;
					break;
			
				case 77:
					num = num + 10;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 78:
					num = num + 3;
					break;
			
				case 79:
					num = num + 3;
					break;
			
				case 80:
					num = num + 3;
					break;
			
				case 81:
					num = num + 3;
					break;
			
				case 82:
					num = num + 5;
					break;
			
				case 83:
					num = num + 3;
					break;
			
				case 84:
					num = num + 3;
					break;
			}
			break;
	
		case 7:
			num = num + 8;
			break;
	
		case 8:
			switch (iParam1)
			{
				case 62:
					num = num + 8;
					break;
			
				case 63:
					num = num + 8;
					break;
			
				case 64:
					num = num + 8;
					break;
			
				case 65:
					num = num + 8;
					break;
			
				case 66:
					num = num + 8;
					break;
			
				case 67:
					num = num + 8;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 85:
					num = num + 3;
					break;
			
				case 86:
					num = num + 3;
					break;
			
				case 87:
					num = num + 3;
					break;
			
				case 88:
					num = num + 3;
					break;
			
				case 89:
					num = num + 3;
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 90:
					num = num + 2;
					break;
			
				case 91:
					num = num + 2;
					break;
			
				case 92:
					num = num + 2;
					break;
			
				case 93:
					num = num + 2;
					break;
			
				case 94:
					num = num + 2;
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 37:
					num = num + 18;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 38:
					num = num + 8;
					break;
			
				case 39:
					num = num + 8;
					break;
			
				case 40:
					num = num + 8;
					break;
			
				case 41:
					num = num + 8;
					break;
			}
			break;
	
		case 15:
			num = num + 0;
			break;
	
		case 16:
			num = num + 0;
			break;
	
		case 17:
			num = num + 0;
			break;
	
		case 18:
			num = num + 0;
			break;
	
		case 19:
			num = num + 0;
			break;
	
		default:
			num = num + 0;
			break;
	}

	if (iParam0 == 12 || iParam0 == 9)
		num = num + func_256(iParam0, func_361() + 1);

	return num;
}

int func_348(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF658
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 0;
			break;
	
		case 1:
			num = num + 14;
			break;
	
		case 2:
			num = num + 12;
			break;
	
		case 3:
			num = num + 23;
			break;
	
		case 4:
			num = num + 20;
			break;
	
		case 5:
			num = num + 5;
			break;
	
		case 8:
			num = num + 11;
			break;
	
		case 6:
			num = num + 7;
			break;
	
		case 12:
			num = num + 8;
			break;
	
		case 7:
			num = num + 18;
			break;
	
		case 9:
			num = num + 0;
			break;
	
		case 11:
			num = num + 12;
			break;
	
		case 13:
			num = num + 1;
			break;
	
		case 10:
			num = num + 16;
			break;
	}

	if (!bParam3)
		if (func_314(iParam0))
			num = num + func_349(iParam0, iParam1);

	return num;
}

int func_349(int iParam0, int iParam1) // Position - 0xF757
{
	if (func_314(iParam0))
		return func_313(iParam0) + func_350(iParam0, iParam1);

	return 0;
}

int func_350(int iParam0, int iParam1) // Position - 0xF77B
{
	switch (iParam0)
	{
		case 0:
			return 6;
	
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
	
		case 8:
			return 4;
	
		default:
		
	}

	return 0;
}

int func_351(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF7C1
{
	int num;

	switch (iParam0)
	{
		case 12:
			num = num + 16;
			break;
	
		case 11:
			num = num + 21;
			break;
	
		case 1:
			num = num + 4;
			break;
	
		case 14:
			num = num + 15;
			break;
	
		case 7:
			num = num + 10;
			break;
	
		case 2:
			num = num + 15;
			break;
	
		case 4:
			num = num + 9;
			break;
	
		case 10:
			num = num + 20;
			break;
	
		case 3:
			num = num + 7;
			break;
	
		case 8:
			num = num + 2;
			break;
	
		case 5:
			num = num + 10;
			break;
	
		case 9:
			switch (iParam1)
			{
				case 7:
					num = num + 17;
					break;
			
				default:
					num = num + 16;
					break;
			}
			break;
	
		case 0:
			if (iParam2 >= 3)
				num = num + 2;
			else
				num = num + 1;
			break;
	
		case 23:
			num = num + iParam2;
			break;
	
		case 20:
			num = num + 10;
			break;
	
		case 22:
			num = num + (5 * iParam2);
			break;
	
		case 25:
			num = num + iParam2;
			break;
	
		case 24:
			num = num + (3 * iParam2);
			break;
	
		case 26:
			num = num + 2;
			break;
	}

	if (!bParam3)
		if (func_320(iParam0))
			num = num + func_352(iParam0, iParam1);

	return num;
}

int func_352(int iParam0, int iParam1) // Position - 0xF93B
{
	if (func_320(iParam0))
		return func_319(iParam0) + func_353(iParam0, iParam1);

	return 0;
}

int func_353(int iParam0, int iParam1) // Position - 0xF95F
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
	
		case 1:
		case 0:
			return 4;
	
		case 4:
			return 1;
	
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
			
				default:
					break;
			}
			break;
	
		case 21:
			return 2;
	
		case 17:
			return 4;
	}

	return 0;
}

int func_354(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF9D9
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 0;
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					num = num + 18;
					break;
			
				case 1:
					num = num + 18;
					break;
			
				case 2:
					num = num + 18;
					break;
			}
			break;
	
		case 2:
			if (iParam2 >= 4)
				num = num + iParam2 + 2;
			else
				num = num + 5;
			break;
	
		case 3:
			switch (iParam1)
			{
				case 9:
					num = num + 4;
					break;
			
				case 10:
					num = num + 4;
					break;
			
				case 11:
					num = num + 4;
					break;
			
				case 12:
					num = num + 4;
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 13:
					num = num + 20;
					break;
			
				case 14:
					num = num + 20;
					break;
			
				case 15:
					num = num + 20;
					break;
			}
			break;
	
		case 5:
			num = num + 12;
			break;
	
		case 6:
			switch (iParam1)
			{
				case 19:
					num = num + 24;
					break;
			
				case 20:
					num = num + 24;
					break;
			
				case 21:
					num = num + 24;
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 22:
					num = num + 12;
					break;
			
				case 23:
					num = num + 12;
					break;
			
				case 24:
					num = num + 12;
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 25:
					num = num + 16;
					break;
			
				case 26:
					num = num + 15;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 27:
					num = num + 25;
					break;
			
				case 28:
					num = num + 25;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 29:
					num = num + 15;
					break;
			
				case 30:
					num = num + 15;
					break;
			
				case 31:
					num = num + 15;
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 32:
					num = num + 12;
					break;
			
				case 33:
					num = num + 12;
					break;
			
				case 34:
					num = num + 12;
					break;
			}
			break;
	
		case 12:
			num = num + 0;
			break;
	
		case 13:
			switch (iParam1)
			{
				case 35:
					num = num + 22;
					break;
			
				case 36:
					num = num + 22;
					break;
			
				case 37:
					num = num + 22;
					break;
			}
			break;
	
		case 14:
			num = num + 16;
			break;
	
		case 15:
			num = num + 0;
			break;
	
		case 16:
			num = num + 0;
			break;
	
		case 17:
			num = num + 0;
			break;
	
		case 18:
			num = num + 0;
			break;
	
		case 19:
			num = num + 0;
			break;
	
		case 20:
			num = num + 22;
			break;
	}

	if (!bParam3)
		if (func_326(iParam0))
			num = num + func_355(iParam0);

	return num;
}

int func_355(int iParam0) // Position - 0xFD0E
{
	if (func_326(iParam0))
		return func_325(iParam0) + func_356(iParam0);

	return 0;
}

int func_356(int iParam0) // Position - 0xFD30
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
	
		case 15:
		case 16:
		case 19:
			return 3;
	
		case 10:
		case 8:
		case 5:
			return 4;
	
		default:
		
	}

	return 0;
}

int func_357(int iParam0, int iParam1, int iParam2) // Position - 0xFDAC
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = num + 0;
			break;
	
		case 1:
			num = num + 5;
			break;
	
		case 7:
			num = num + 6;
			break;
	
		case 8:
			num = num + 0;
			break;
	
		case 5:
			num = num + 0;
			break;
	
		case 11:
			num = num + 6;
			break;
	
		case 2:
			num = num + 10;
			break;
	
		case 12:
			num = num + 11;
			break;
	
		case 13:
			num = num + 10;
			break;
	
		case 4:
			switch (iParam1)
			{
				case 1:
					num = num + 12;
					break;
			
				case 2:
					num = num + 12;
					break;
			
				case 3:
					num = num + 12;
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 18:
					num = num + 8;
					break;
			
				case 19:
					num = num + 8;
					break;
			
				case 20:
					num = num + 8;
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 21:
					num = num + 14;
					break;
			
				case 22:
					num = num + 14;
					break;
			
				case 23:
					num = num + 14;
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 27:
					num = num + 14;
					break;
			
				case 28:
					num = num + 14;
					break;
			
				case 29:
					num = num + 14;
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 30:
					num = num + 3;
					break;
			
				case 31:
					num = num + 3;
					break;
			
				case 32:
					num = num + 3;
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 36:
					num = num + 18;
					break;
			
				case 37:
					num = num + 18;
					break;
			
				case 38:
					num = num + 18;
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 42:
					num = num + 10;
					break;
			
				case 43:
					num = num + 10;
					break;
			
				case 44:
					num = num + 10;
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 45:
					num = num + 17;
					break;
			
				case 46:
					num = num + 17;
					break;
			
				case 47:
					num = num + 17;
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 48:
					num = num + 11;
					break;
			
				case 49:
					num = num + 11;
					break;
			
				case 50:
					num = num + 11;
					break;
			}
			break;
	}

	num = num + func_358(iParam0);
	return num;
}

int func_358(int iParam0) // Position - 0x1007C
{
	if (func_330(iParam0))
	{
		if (func_359(iParam0))
			return 4;
	
		return 2;
	}

	return 0;
}

BOOL func_359(int iParam0) // Position - 0x1009F
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return true;
	
		default:
		
	}

	return false;
}

int func_360(int iParam0) // Position - 0x100E9
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 5;
	
		case 4:
			return 12;
	
		case 5:
			return 4;
	
		case 6:
			return 4;
	
		case 7:
			return 2;
	
		case 8:
			return 12;
	
		case 9:
			return 12;
	
		case 10:
			return 9;
	
		case 11:
			return 8;
	
		case 12:
			return 7;
	
		case 13:
			return 5;
	
		case 14:
			return 12;
	
		case 15:
			return 13;
	
		case 16:
			return 5;
	
		case 17:
			return 15;
	
		case 19:
			return 4;
	
		case 18:
			return 11;
	
		default:
		
	}

	return 8;
}

int func_361() // Position - 0x101CB
{
	if (func_362() == _INVALID_PLAYER_INDEX())
		return 0;

	return func_205(func_362());
}

Player func_362() // Position - 0x101EA
{
	return Global_1886967[unk_0x259BE71D8A81D4FA() /*609*/].f_10;
}

BOOL func_363() // Position - 0x101FF
{
	return func_190(unk_0x259BE71D8A81D4FA());
}

BOOL func_364() // Position - 0x1020F
{
	int num;

	num = func_365();
	return num == 2 || num == 3;
}

int func_365() // Position - 0x1022B
{
	return Global_1970608;
}

int func_366(int iParam0) // Position - 0x10237
{
	var unk;
	int num;

	if (func_724())
		return 0;

	if (func_722())
		return 0;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = 1424;
	unk.f_5 = 1;
	unk.f_9 = 1176255488;
	unk.f_10 = -1;
	unk.f_11 = 1424;
	unk.f_13 = 1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_17 = 32;
	unk.f_210 = -1;
	unk.f_211 = 1;
	func_369(iParam0, &unk);

	if (func_368(&unk))
		return 0;

	num.f_1 = -1;
	num.f_5 = -971228160;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;
	num.f_9 = -1;
	num = iParam0;
	unk_0xDD7F149F8BAF1260(&(Global_1970608.f_2), &num, 11);
	Global_1970608.f_1 = 0;
	func_367(1);
	Global_1927721 = true;
	return 1;
}

void func_367(int iParam0) // Position - 0x10313
{
	Global_1970608 = iParam0;
	return;
}

BOOL func_368(var uParam0) // Position - 0x10321
{
	if (uParam0->f_212 == 0)
		return false;

	uParam0->f_212();
	return StackVal;
}

void func_369(int iParam0, var uParam1) // Position - 0x1033A
{
	switch (iParam0)
	{
		case 1:
			func_721(uParam1);
			break;
	
		case 2:
			func_720(uParam1);
			break;
	
		case 3:
			func_716(uParam1);
			break;
	
		case 4:
			func_713(uParam1);
			break;
	
		case 5:
			func_712(uParam1);
			break;
	
		case 6:
			func_711(uParam1);
			break;
	
		case 7:
			func_710(uParam1);
			break;
	
		case 8:
			func_370(uParam1);
			break;
	}

	return;
}

void func_370(var uParam0) // Position - 0x103C1
{
	func_708(uParam0, &func_709);
	func_706(18, uParam0);
	func_387(uParam0, &func_388);
	func_382(uParam0, &func_383);
	func_376(uParam0);
	func_373(20, uParam0);
	func_371(uParam0, &func_372);
	return;
}

void func_371(var uParam0, int iParam1) // Position - 0x10407
{
	uParam0->f_217 = iParam1;
	return;
}

int func_372(var uParam0) // Position - 0x10415
{
	if (!unk_0x9390801B06EE998F() && !unk_0xDDED2C93E8FD5B69())
		unk_0x10B228D2FDB7AF16(800);

	return 1;
}

void func_373(int iParam0, var uParam1) // Position - 0x10437
{
	var unk;
	var unk2;
	var unk3;
	var unk4;

	func_375(iParam0, &unk, &unk3, &unk2, &unk4);
	func_374(uParam1, unk, unk2, unk4, unk3);
	return;
}

void func_374(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1045B
{
	uParam0->f_10 = uParam1;
	uParam0->f_11 = uParam2;
	uParam0->f_12 = uParam3;
	uParam0->f_13 = uParam4;
	return;
}

void func_375(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1047B
{
	*uParam3 = 1424;

	switch (iParam0)
	{
		case 0:
			*uParam1 = -1;
			*uParam2 = 1;
			*uParam4 = 0;
			break;
	
		case -1:
			*uParam1 = -1;
			*uParam2 = 1;
			*uParam4 = 0;
			break;
	
		case 1:
			*uParam1 = joaat("am_hs4_vel_lsa_isd");
			*uParam2 = 1;
			*uParam4 = 1;
			break;
	
		case 2:
			*uParam1 = joaat("am_hs4_vel_lsa_isd");
			*uParam2 = 2;
			*uParam4 = 1;
			break;
	
		case 3:
			*uParam1 = joaat("am_hs4_vel_lsa_isd");
			*uParam2 = 4;
			*uParam4 = 1;
			break;
	
		case 4:
			*uParam1 = joaat("am_hs4_vel_lsa_isd");
			*uParam2 = 8;
			*uParam4 = 1;
			break;
	
		case 5:
			*uParam1 = joaat("am_hs4_nimb_lsa_isd_leave");
			*uParam4 = 0;
			break;
	
		case 6:
			*uParam1 = joaat("am_hs4_nimb_lsa_isd_arrive");
			*uParam4 = 1;
			break;
	
		case 7:
			*uParam1 = joaat("am_hi_plane_take_off_cinematic");
			*uParam4 = 0;
			break;
	
		case 8:
			*uParam1 = joaat("am_beach_washup_cinematic");
			*uParam4 = 1;
			break;
	
		case 9:
			*uParam1 = joaat("am_lsia_take_off_cinematic");
			*uParam4 = 0;
			break;
	
		case 10:
			*uParam1 = joaat("am_hs4_nimb_isd_lsa_leave");
			*uParam4 = 0;
			break;
	
		case 11:
			*uParam1 = joaat("am_hs4_lsa_land_nimb_arrive");
			*uParam2 = 1;
			*uParam4 = 1;
			break;
	
		case 12:
			*uParam1 = joaat("am_hs4_lsa_land_nimb_arrive");
			*uParam2 = 2;
			*uParam4 = 1;
			break;
	
		case 13:
			*uParam1 = joaat("am_hs4_lsa_land_nimb_arrive");
			*uParam2 = 4;
			*uParam4 = 1;
			break;
	
		case 14:
			*uParam1 = joaat("am_hi_plane_land_cinematic");
			*uParam4 = 0;
			break;
	
		case 15:
			*uParam1 = joaat("am_hs4_lsa_take_vel");
			*uParam4 = 1;
			*uParam2 = 1;
			break;
	
		case 16:
			*uParam1 = joaat("am_hs4_lsa_take_vel");
			*uParam4 = 1;
			*uParam2 = 2;
			break;
	
		case 17:
			*uParam1 = joaat("am_hs4_isd_take_vel");
			*uParam4 = 1;
			*uParam2 = 1;
			break;
	
		case 18:
			*uParam1 = joaat("am_hs4_isd_take_vel");
			*uParam4 = 1;
			*uParam2 = 2;
			break;
	
		case 19:
			*uParam1 = joaat("am_hs4_lsa_land_vel");
			*uParam4 = 1;
			*uParam2 = 1;
			break;
	
		case 20:
			*uParam1 = joaat("am_hs4_lsa_land_vel");
			*uParam4 = 1;
			*uParam2 = 2;
			break;
	}

	return;
}

void func_376(var uParam0) // Position - 0x10693
{
	var unk;

	unk = 32;
	func_380(&unk);
	func_379(uParam0, unk[0 /*6*/]);
	func_378(uParam0, unk[0 /*6*/].f_3.f_2);
	func_377(uParam0, &unk);
	return;
}

void func_377(var uParam0, var uParam1) // Position - 0x106CB
{
	int i;
	int num;

	uParam0->f_16 = 1;
	num = uParam0->f_17;

	for (i = 0; i < num; i = i + 1)
	{
		uParam0->f_17[i /*6*/] = { uParam1->[i /*6*/] };
	}

	return;
}

void func_378(var uParam0, var uParam1) // Position - 0x10703
{
	uParam0->f_9 = uParam1;
	return;
}

void func_379(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x10711
{
	uParam0->f_6 = { uParam1 };
	return;
}

void func_380(var uParam0) // Position - 0x10723
{
	var unk;
	var unk4;
	int num;
	int i;

	num = *uParam0;
	i = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_381(i, &unk, &unk4))
		{
			uParam0->[i /*6*/] = { unk };
			uParam0->[i /*6*/].f_3 = { 0f, 0f, unk4 };
		}
	}

	return;
}

BOOL func_381(int iParam0, var uParam1, var uParam2) // Position - 0x1076D
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1168.914f, -2751.29f, 13.029f };
			*uParam2 = 293.599f;
			return true;
	
		case 1:
			*uParam1 = { -1170.44f, -2751.165f, 13.029f };
			*uParam2 = 293.599f;
			return true;
	
		case 2:
			*uParam1 = { -1169.351f, -2753.16f, 13.029f };
			*uParam2 = 293.599f;
			return true;
	
		case 3:
			*uParam1 = { -1170.301f, -2752.454f, 13.029f };
			*uParam2 = 286.399f;
			return true;
	
		case 4:
			*uParam1 = { -1170.341f, -2754.707f, 13.028f };
			*uParam2 = 301.399f;
			return true;
	
		case 5:
			*uParam1 = { -1171.393f, -2754.032f, 13.028f };
			*uParam2 = 290.399f;
			return true;
	
		case 6:
			*uParam1 = { -1171.166f, -2755.814f, 13.028f };
			*uParam2 = 301.799f;
			return true;
	
		case 7:
			*uParam1 = { -1172.06f, -2752.855f, 13.029f };
			*uParam2 = 290.198f;
			return true;
	
		case 8:
			*uParam1 = { -1172.149f, -2751.645f, 13.029f };
			*uParam2 = 290.198f;
			return true;
	
		case 9:
			*uParam1 = { -1171.001f, -2750.159f, 13.03f };
			*uParam2 = 248.798f;
			return true;
	
		case 10:
			*uParam1 = { -1173.051f, -2750.556f, 13.03f };
			*uParam2 = 267.998f;
			return true;
	
		case 11:
			*uParam1 = { -1174.508f, -2750.645f, 13.029f };
			*uParam2 = 267.998f;
			return true;
	
		case 12:
			*uParam1 = { -1173.792f, -2751.77f, 13.029f };
			*uParam2 = 278.998f;
			return true;
	
		case 13:
			*uParam1 = { -1173.857f, -2753.473f, 13.029f };
			*uParam2 = 278.998f;
			return true;
	
		case 14:
			*uParam1 = { -1173.324f, -2754.563f, 13.028f };
			*uParam2 = 300.197f;
			return true;
	
		case 15:
			*uParam1 = { -1172.978f, -2755.627f, 13.028f };
			*uParam2 = 300.197f;
			return true;
	
		case 16:
			*uParam1 = { -1172.649f, -2757.042f, 13.027f };
			*uParam2 = 284.597f;
			return true;
	
		case 17:
			*uParam1 = { -1172.12f, -2758.795f, 13.027f };
			*uParam2 = 310.997f;
			return true;
	
		case 18:
			*uParam1 = { -1171.173f, -2757.49f, 13.027f };
			*uParam2 = 299.997f;
			return true;
	
		case 19:
			*uParam1 = { -1173.015f, -2760.178f, 13.026f };
			*uParam2 = 311.997f;
			return true;
	
		case 20:
			*uParam1 = { -1173.806f, -2761.704f, 13.026f };
			*uParam2 = 311.997f;
			return true;
	
		case 21:
			*uParam1 = { -1174.379f, -2760.489f, 13.026f };
			*uParam2 = 284.797f;
			return true;
	
		case 22:
			*uParam1 = { -1173.767f, -2758.594f, 13.027f };
			*uParam2 = 284.797f;
			return true;
	
		case 23:
			*uParam1 = { -1174.496f, -2756.791f, 13.027f };
			*uParam2 = 284.797f;
			return true;
	
		case 24:
			*uParam1 = { -1174.493f, -2755.567f, 13.028f };
			*uParam2 = 257.597f;
			return true;
	
		case 25:
			*uParam1 = { -1175.271f, -2758.269f, 13.027f };
			*uParam2 = 284.796f;
			return true;
	
		case 26:
			*uParam1 = { -1175.742f, -2756.638f, 13.027f };
			*uParam2 = 284.796f;
			return true;
	
		case 27:
			*uParam1 = { -1175.276f, -2754.194f, 13.028f };
			*uParam2 = 284.796f;
			return true;
	
		case 28:
			*uParam1 = { -1175.349f, -2752.471f, 13.029f };
			*uParam2 = 257.596f;
			return true;
	
		case 29:
			*uParam1 = { -1176.517f, -2755.057f, 13.028f };
			*uParam2 = 276.396f;
			return true;
	}

	return false;
}

void func_382(var uParam0, int iParam1) // Position - 0x10C2D
{
	uParam0->f_212 = iParam1;
	return;
}

BOOL func_383() // Position - 0x10C3B
{
	if (func_170(unk_0x259BE71D8A81D4FA(), true) && !Global_1970582)
		return true;

	return Global_262145.f_29603 || !func_384();
}

BOOL func_384() // Position - 0x10C6F
{
	return func_385(unk_0x259BE71D8A81D4FA());
}

BOOL func_385(int iParam0) // Position - 0x10C7F
{
	return func_386(&(Global_2657921[iParam0 /*463*/].f_442), 0);
}

BOOL func_386(int iParam0, int iParam1) // Position - 0x10C98
{
	return IS_BIT_SET(*iParam0, iParam1);
}

void func_387(var uParam0, int iParam1) // Position - 0x10CA6
{
	uParam0->f_214 = iParam1;
	return;
}

int func_388(var uParam0) // Position - 0x10CB4
{
	func_395();

	if (func_393())
		func_389(false);

	return 1;
}

void func_389(BOOL bParam0) // Position - 0x10CCD
{
	func_390(unk_0x259BE71D8A81D4FA(), bParam0);
	return;
}

void func_390(int iParam0, BOOL bParam1) // Position - 0x10CDF
{
	int num;

	num = iParam0;
	func_391(&(Global_2657921[num /*463*/].f_442), 1, bParam1);
	return;
}

void func_391(int iParam0, int iParam1, BOOL bParam2) // Position - 0x10CFE
{
	func_392(iParam0, iParam1, bParam2);
	return;
}

void func_392(int iParam0, int iParam1, BOOL bParam2) // Position - 0x10D10
{
	if (bParam2)
		unk_0x0B0C9A0F9AAEB7F0(iParam0, iParam1);
	else
		unk_0x8744D2E3FC95740E(iParam0, iParam1);

	return;
}

BOOL func_393() // Position - 0x10D30
{
	return func_394(unk_0x259BE71D8A81D4FA());
}

BOOL func_394(int iParam0) // Position - 0x10D40
{
	int num;

	num = iParam0;
	return func_386(&(Global_2657921[num /*463*/].f_442), 1);
}

void func_395() // Position - 0x10D5D
{
	func_705(false);
	func_400();
	func_399();
	func_398();
	func_396(false);
	return;
}

void func_396(BOOL bParam0) // Position - 0x10D7B
{
	func_397(unk_0x259BE71D8A81D4FA(), bParam0);
	return;
}

void func_397(int iParam0, BOOL bParam1) // Position - 0x10D8D
{
	int num;

	num = iParam0;
	func_391(&(Global_2657921[num /*463*/].f_442), 0, bParam1);
	return;
}

void func_398() // Position - 0x10DAC
{
	if (!unk_0x76CD105BCAC6EB9F())
		return;

	if (!unk_0xF859473E4AD09F30())
		return;

	if (!unk_0x6457A0C458E98FFB())
		unk_0x5A80107016E75ABC();

	unk_0x13D997FE205FD704(0);
	return;
}

void func_399() // Position - 0x10DDB
{
	if (unk_0x486FF5D06E9659F1(unk_0x70E57E9927B6BA58("AM_MP_ISLAND")) != 0 || unk_0x99F8FC8A6D8E20C0("AM_MP_ISLAND", -1, 1, 0))
		Global_1970621 = true;

	return;
}

void func_400() // Position - 0x10E0A
{
	if (!func_704())
		return;

	unk_0x105F8712C3E145BF("HeistIsland", 0);
	func_703();
	func_401(true);
	return;
}

void func_401(BOOL bParam0) // Position - 0x10E2F
{
	func_698(false);
	unk_0x7DA9B8DF3A97D040("Heist_Island_Peds", 0);
	unk_0x05E996648244715D(0);
	unk_0x6FAD8BFDFFCEDD65(0);
	unk_0xDAE61414743C8D1D(5);
	unk_0x425BBE19F25A57AB(1f);
	unk_0xE383E18054CA323B(unk_0x259BE71D8A81D4FA(), 1);
	unk_0xCFBD89D2F1F18961("PlayerOnDLCHeist4Island", 0);
	unk_0x6866AF3D8691EDC0("AZL_DLC_Hei4_Island_Zones", 0, 1);
	unk_0x6866AF3D8691EDC0("AZL_DLC_Hei4_Island_Disabled_Zones", 1, 1);
	unk_0x48FA483FE4F18CFE("DLC_HEI4/DLCHEI4_GENERIC_01");
	unk_0xD8D822FF4C3DCD7D(0);
	func_696();

	if (bParam0)
		func_402(true);

	return;
}

void func_402(BOOL bParam0) // Position - 0x10E9A
{
	var unk;
	var unk66;
	Player player;
	Player player2;
	Player player3;
	float num;
	int num2;
	int i;

	if (unk_0xFC8BFE4B41177C22(unk_0x4A8C381C258A124D()))
	{
		unk_0xAAE0CF56E250FA77(unk_0x4A8C381C258A124D(), "", "");
		unk = 12;
		unk.f_13 = 12;
		unk.f_26 = 12;
		unk.f_39 = 9;
		unk.f_49 = 9;
		unk_0xD1C578C204015E1F(unk_0x4A8C381C258A124D(), 5, 0, 0, 0);
		unk_0xCDF42A1B8D2576E8(unk_0x4A8C381C258A124D());
		unk_0x8452AC966C087132(unk_0x4A8C381C258A124D());
		unk_0x7F08C4791E6D6969(unk_0x4A8C381C258A124D(), 0, 0, 0, 0, 1);
		unk_0x09397806857F5DFB(unk_0x4A8C381C258A124D(), 0, 1);
	
		if (unk_0x6DBAC05AFA907A23(unk_0x4A8C381C258A124D()))
			unk_0xE4E1DBF4388028C0(unk_0x4A8C381C258A124D(), 1);
	
		unk_0x445E7F949766A0C7(unk_0x4A8C381C258A124D(), 1);
		func_691(&unk, -1);
		func_542(unk_0x4A8C381C258A124D(), &unk, false, false, true, bParam0);
		unk66 = unk_0x94B8A32AA940A6B5(unk_0x4A8C381C258A124D(), 1, unk_0xC0120BBCC298EA2F(unk_0x4A8C381C258A124D(), 1), unk_0xD6AED6BFCC58AF7F(unk_0x4A8C381C258A124D(), 1));
	
		if (unk_0x304A39EB177D246B(unk66, joaat("SHRINK_HEAD"), 0))
		{
			player = func_76(2100, -1);
			player2 = func_76(2101, -1);
			player3 = func_76(2102, -1);
			num = func_541(135, -1);
			num2 = unk_0x4B423FAA24E8ABF0(unk_0x4A8C381C258A124D());
		
			if (num2 == joaat("MP_M_Freemode_01"))
				unk_0x0A5987DCA39E8BE5(unk_0x4A8C381C258A124D(), 0, 0, 0, player, player2, player3, 0f, num, 0f, 0);
			else if (num2 == joaat("MP_F_Freemode_01"))
				unk_0x0A5987DCA39E8BE5(unk_0x4A8C381C258A124D(), 21, 0, 0, player, player2, player3, 0f, num, 0f, 0);
		
			for (i = 0; i < 20; i = i + 1)
			{
				unk_0xAAF9B08B469F707F(unk_0x4A8C381C258A124D(), i, 0f);
			}
		}
		else
		{
			func_525(unk_0x4A8C381C258A124D(), -1);
		}
	
		func_524(0);
		func_404(unk_0x4A8C381C258A124D(), false, true, -1);
		func_403(2053762110, _GET_LOBBY_SCRIPT_EVENT_BITS(true, true));
	}

	return;
}

void func_403(int iParam0, int iParam1) // Position - 0x11032
{
	int num;

	num = 800157557;
	num.f_1 = unk_0x259BE71D8A81D4FA();
	num.f_3 = iParam0;
	num.f_4 = unk_0xC5935DFB3F39785A(0, 9999);

	if (!(iParam1 == 0))
		if (unk_0x76CD105BCAC6EB9F())
			unk_0x71A6F836422FDD2B(1, &num, 5, iParam1, num);

	return;
}

void func_404(Vehicle veParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x11079
{
	Player player;
	var unk;
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int i;
	int j;
	int num2;
	var unk14;
	int num3;

	if (!unk_0x4FAFF4BCB7633475(veParam0))
	{
		player = Global_79028;
		unk_0x98E00E3ED7D61628(veParam0);
		num = func_523(veParam0);
		flag = func_519(veParam0, false);
		flag2 = func_511(veParam0);
		flag3 = func_443(veParam0, iParam3);
	
		if (bParam1)
			flag2 = true;
	
		if (bParam2)
			flag2 = false;
	
		for (i = 0; i < 127; i = i + 1)
		{
			if (func_440(i, player))
				if (func_433(&unk, i, num, veParam0, -1))
					if (func_430(veParam0, &unk, i, unk.f_4, unk.f_8, flag, flag2, bParam1, flag3))
						unk_0x49A5A17556C31561(veParam0, unk.f_4, unk.f_5);
		}
	
		if (func_440(123, player))
			if (unk_0x50CA4ACB66148FF0(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
				unk_0x49A5A17556C31561(veParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
	
		num2 = unk_0x82D6E3FDBD0A80B6(num);
	
		for (j = 0; j < num2; j = j + 1)
		{
			if (unk_0xC8FF7E3E267EBEF5(num, j, &unk14))
			{
				if (!unk_0x4BFA043D318BF9AE(unk14))
				{
					num3 = 129 + j;
				
					if (func_440(num3, player))
					{
						if (func_430(veParam0, &(unk14.f_7), num3, unk14.f_2, unk14.f_6, flag, flag2, bParam1, flag3))
						{
							if (!func_406(unk14.f_2, unk14.f_3, num3))
							{
								unk_0x49A5A17556C31561(veParam0, unk14.f_2, unk14.f_3);
								func_405(veParam0, unk14.f_2, unk14.f_3);
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_405(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x111E1
{
	switch (iParam1)
	{
		case 1310977332:
			switch (iParam2)
			{
				case -335678317:
					unk_0x49A5A17556C31561(veParam0, 1310977332, -745372680);
					break;
			
				case -679031819:
					unk_0x49A5A17556C31561(veParam0, 1310977332, 842187071);
					break;
			}
			break;
	
		case 1841427399:
			switch (iParam2)
			{
				case -507124931:
					unk_0x49A5A17556C31561(veParam0, 1841427399, -435695677);
					break;
			
				case -2045170715:
					unk_0x49A5A17556C31561(veParam0, 1841427399, 1684098164);
					break;
			}
			break;
	
		case joaat("mpSecurity_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Security_Tee_000_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_M"));
					break;
			
				case joaat("MP_Security_Tee_000_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSecurity_overlays"), joaat("MP_Security_Tee_001_F"));
					break;
			}
			break;
	
		case joaat("mpTuner_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Tuner_Tee_000_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_M"));
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_002_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_003_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_M"));
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_005_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_006_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_M"));
					break;
			
				case joaat("MP_Tuner_Tee_008_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
					break;
			
				case joaat("MP_Tuner_Tee_010_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_M"));
					break;
			
				case joaat("MP_Tuner_Tee_000_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_001_F"));
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_002_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_003_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_004_F"));
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_005_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_006_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_007_F"));
					break;
			
				case joaat("MP_Tuner_Tee_008_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
					break;
			
				case joaat("MP_Tuner_Tee_010_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpTuner_overlays"), joaat("MP_Tuner_Tee_009_F"));
					break;
			}
			break;
	
		case joaat("mpHeist4_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Heist4_Tee_039_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_M"));
					break;
			
				case joaat("MP_Heist4_Tee_041_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_M"));
					break;
			
				case joaat("MP_Heist4_Tee_043_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_M"));
					break;
			
				case joaat("MP_Heist4_Tee_049_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_M"));
					break;
			
				case joaat("MP_Heist4_Tee_051_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_M"));
					break;
			
				case joaat("MP_Heist4_Tee_055_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_M"));
					break;
			
				case joaat("MP_Heist4_Tee_057_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_M"));
					break;
			
				case joaat("MP_Heist4_Tee_059_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_M"));
					break;
			
				case joaat("MP_Heist4_Tee_061_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_M"));
					break;
			
				case joaat("MP_Heist4_Tee_063_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_M"));
					break;
			
				case joaat("MP_Heist4_Tee_065_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_M"));
					break;
			
				case joaat("MP_Heist4_Tee_039_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_040_F"));
					break;
			
				case joaat("MP_Heist4_Tee_041_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_042_F"));
					break;
			
				case joaat("MP_Heist4_Tee_043_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_044_F"));
					break;
			
				case joaat("MP_Heist4_Tee_049_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_050_F"));
					break;
			
				case joaat("MP_Heist4_Tee_051_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_052_F"));
					break;
			
				case joaat("MP_Heist4_Tee_055_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_056_F"));
					break;
			
				case joaat("MP_Heist4_Tee_057_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_058_F"));
					break;
			
				case joaat("MP_Heist4_Tee_059_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_060_F"));
					break;
			
				case joaat("MP_Heist4_Tee_061_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_062_F"));
					break;
			
				case joaat("MP_Heist4_Tee_063_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_064_F"));
					break;
			
				case joaat("MP_Heist4_Tee_065_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist4_overlays"), joaat("MP_Heist4_Tee_066_F"));
					break;
			}
			break;
	
		case joaat("mpVinewood_overlays"):
			switch (iParam2)
			{
				case joaat("CasinoTop_M_0"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_M"));
					break;
			
				case joaat("CasinoTop_M_1"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
			
				case joaat("CasinoTop_M_2"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_M"));
					break;
			
				case joaat("CasinoTop_M_3"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
			
				case joaat("CasinoTop_M_4"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_M"));
					break;
			
				case joaat("CasinoTop_M_5"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
			
				case joaat("CasinoTop_M_6"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_M"));
					break;
			
				case joaat("CasinoTop_M_7"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_M"));
					break;
			
				case joaat("CasinoTop_M_8"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_M"));
					break;
			
				case joaat("CasinoTop_M_9"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
			
				case joaat("CasinoTop_M_10"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_M"));
					break;
			
				case joaat("CasinoTop_M_11"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_M"));
					break;
			
				case joaat("CasinoTop_M_12"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_M"));
					break;
			
				case joaat("CasinoTop_M_13"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_M"));
					break;
			
				case joaat("CasinoTop_M_14"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_M"));
					break;
			
				case joaat("CasinoTop_M_15"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_M"));
					break;
			
				case joaat("CasinoTop_M_16"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_M"));
					break;
			
				case joaat("CasinoTop_M_17"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_M"));
					break;
			
				case joaat("CasinoTop_M_18"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_M"));
					break;
			
				case joaat("CasinoTop_M_19"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_M"));
					break;
			
				case joaat("CasinoTop_M_20"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_M"));
					break;
			
				case joaat("CasinoTop_M_21"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
			
				case joaat("CasinoTop_M_22"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_M"));
					break;
			
				case joaat("CasinoTop_M_23"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_M"));
					break;
			
				case joaat("CasinoTop_M_24"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
			
				case joaat("CasinoTop_M_25"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_M"));
					break;
			
				case joaat("CasinoTop_M_26"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_M"));
					break;
			
				case joaat("CasinoTop_M_27"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
			
				case joaat("CasinoTop_M_28"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_M"));
					break;
			
				case joaat("CasinoTop_M_29"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
			
				case joaat("CasinoTop_M_30"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_M"));
					break;
			
				case joaat("CasinoTop_M_31"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
			
				case joaat("CasinoTop_M_32"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_M"));
					break;
			
				case joaat("CasinoTop_M_33"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
			
				case joaat("CasinoTop_M_34"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_M"));
					break;
			
				case joaat("CasinoTop_M_35"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
			
				case joaat("CasinoTop_M_36"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_M"));
					break;
			
				case joaat("CasinoTop_M_37"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
			
				case joaat("CasinoTop_M_38"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_M"));
					break;
			
				case joaat("CasinoTop_M_39"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
			
				case joaat("CasinoTop_M_40"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_M"));
					break;
			
				case joaat("CasinoTop_M_41"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
			
				case joaat("CasinoTop_M_42"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_M"));
					break;
			
				case joaat("CasinoTop_M_43"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			
				case joaat("CasinoTop_M_44"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_M"));
					break;
			}
		
			switch (iParam2)
			{
				case joaat("CasinoTop_F_0"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_000_F"));
					break;
			
				case joaat("CasinoTop_F_1"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
			
				case joaat("CasinoTop_F_2"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_001_F"));
					break;
			
				case joaat("CasinoTop_F_3"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
			
				case joaat("CasinoTop_F_4"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_002_F"));
					break;
			
				case joaat("CasinoTop_F_5"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
			
				case joaat("CasinoTop_F_6"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_003_F"));
					break;
			
				case joaat("CasinoTop_F_7"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_004_F"));
					break;
			
				case joaat("CasinoTop_F_8"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_005_F"));
					break;
			
				case joaat("CasinoTop_F_9"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
			
				case joaat("CasinoTop_F_10"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_006_F"));
					break;
			
				case joaat("CasinoTop_F_11"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_007_F"));
					break;
			
				case joaat("CasinoTop_F_12"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_008_F"));
					break;
			
				case joaat("CasinoTop_F_13"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_009_F"));
					break;
			
				case joaat("CasinoTop_F_14"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_010_F"));
					break;
			
				case joaat("CasinoTop_F_15"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_011_F"));
					break;
			
				case joaat("CasinoTop_F_16"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_012_F"));
					break;
			
				case joaat("CasinoTop_F_17"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_013_F"));
					break;
			
				case joaat("CasinoTop_F_18"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_014_F"));
					break;
			
				case joaat("CasinoTop_F_19"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_015_F"));
					break;
			
				case joaat("CasinoTop_F_20"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_016_F"));
					break;
			
				case joaat("CasinoTop_F_21"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
			
				case joaat("CasinoTop_F_22"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_017_F"));
					break;
			
				case joaat("CasinoTop_F_23"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_018_F"));
					break;
			
				case joaat("CasinoTop_F_24"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
			
				case joaat("CasinoTop_F_25"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_019_F"));
					break;
			
				case joaat("CasinoTop_F_26"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_020_F"));
					break;
			
				case joaat("CasinoTop_F_27"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
			
				case joaat("CasinoTop_F_28"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_021_F"));
					break;
			
				case joaat("CasinoTop_F_29"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
			
				case joaat("CasinoTop_F_30"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_022_F"));
					break;
			
				case joaat("CasinoTop_F_31"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
			
				case joaat("CasinoTop_F_32"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_023_F"));
					break;
			
				case joaat("CasinoTop_F_33"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
			
				case joaat("CasinoTop_F_34"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_024_F"));
					break;
			
				case joaat("CasinoTop_F_35"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
			
				case joaat("CasinoTop_F_36"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_025_F"));
					break;
			
				case joaat("CasinoTop_F_37"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
			
				case joaat("CasinoTop_F_38"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_026_F"));
					break;
			
				case joaat("CasinoTop_F_39"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
			
				case joaat("CasinoTop_F_40"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_027_F"));
					break;
			
				case joaat("CasinoTop_F_41"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
			
				case joaat("CasinoTop_F_42"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_028_F"));
					break;
			
				case joaat("CasinoTop_F_43"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			
				case joaat("CasinoTop_F_44"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpVinewood_overlays"), joaat("MP_Vinewood_Tee_029_F"));
					break;
			}
			break;
	
		case joaat("mpBattle_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_M"));
					break;
			}
		
			switch (iParam2)
			{
				case joaat("MP_Battle_Clothing_000_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpBattle_overlays"), joaat("MP_Battle_Clothing_001_F"));
					break;
			}
			break;
	
		case joaat("mpSmuggler_overlays"):
			switch (iParam2)
			{
				case joaat("M_TankTop_Smug_5_3_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_17_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_10_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_11_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_12_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_13_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_20_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_21_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_23_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_22_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_5_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_18_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_0_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_3_b"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_25_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_7_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_4_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_1_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_M"));
					break;
			
				case joaat("M_TankTop_Smug_5_9_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_M"));
					break;
			}
		
			switch (iParam2)
			{
				case joaat("F_TankTop_Smug_5_3_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_000_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_17_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_001_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_10_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_002_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_11_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_003_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_12_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_004_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_13_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_005_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_20_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_006_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_21_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_007_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_23_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_008_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_22_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_009_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_5_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_010_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_18_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_011_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_0_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_012_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_3_b"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_013_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_25_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_014_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_7_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_015_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_4_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_016_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_1_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_017_F"));
					break;
			
				case joaat("F_TankTop_Smug_5_9_a"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpSmuggler_overlays"), joaat("MP_Smuggler_Graphic_018_F"));
					break;
			}
			break;
	
		case joaat("mpGunrunning_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_M"));
					break;
			
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpGunrunning_overlays"), joaat("MP_Gunrunning_Award_020_F"));
					break;
			}
			break;
	
		case joaat("mpExecutive_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Securoserv_000_Mb"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_M"));
					break;
			
				case joaat("MP_Securoserv_000_Fb"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpExecutive_overlays"), joaat("MP_Securoserv_000_F"));
					break;
			}
			break;
	
		case joaat("mpHeist_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Elite_M_Tshirt_1"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_M_Tshirt_2"));
					break;
			
				case joaat("MP_Elite_F_Tshirt_1"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpHeist_overlays"), joaat("MP_Elite_F_Tshirt_2"));
					break;
			}
			break;
	
		case joaat("mpLuxe2_overlays"):
			switch (iParam2)
			{
				case joaat("MP_Luxe_Tat_029_M"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_M"));
					unk_0x49A5A17556C31561(veParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_M"));
					break;
			
				case joaat("MP_Luxe_Tat_029_F"):
					unk_0x49A5A17556C31561(veParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_030_F"));
					unk_0x49A5A17556C31561(veParam0, joaat("mpLuxe2_overlays"), joaat("MP_Luxe_Tat_031_F"));
					break;
			}
			break;
	}

	return;
}

BOOL func_406(int iParam0, int iParam1, int iParam2) // Position - 0x124B8
{
	Player player;
	Player player2;
	Player player3;
	Player player4;
	Player player5;
	Player player6;
	Player player7;
	Player player8;
	Player player9;
	Player player10;
	Player player11;
	Player player12;
	Player player13;
	Player player14;
	Player player15;
	Player player16;
	Player player17;
	Player player18;
	Player player19;
	Player player20;

	switch (iParam0)
	{
		case 1310977332:
			switch (iParam1)
			{
				case -963296156:
				case 103826309:
					if (func_429(41897, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -963296156);
			
				case -1488869771:
				case 654910986:
					if (func_429(41899, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -1488869771);
			
				case 72832154:
				case -2075077493:
					if (func_429(41898, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 72832154);
			
				case -953411607:
				case 91788361:
					if (func_429(41900, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -953411607);
			
				case -1404922007:
				case 1231573426:
					if (func_429(41901, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -1404922007);
			
				case 1560564400:
				case -1647356863:
					if (func_429(41902, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 1560564400);
			
				case -335678317:
				case -679031819:
					if (func_429(41894, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -335678317);
			}
			break;
	}

	switch (iParam0)
	{
		case 1841427399:
			switch (iParam1)
			{
				case -507124931:
				case -2045170715:
					if (func_429(36717, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -507124931);
			
				case -187038898:
				case 524638244:
					if (func_429(36767, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -187038898);
			
				case 1797082704:
				case -757817895:
					if (func_429(36766, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 1797082704);
			
				case 1959890413:
				case 1506629605:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 1959890413);
			
				case 1167984459:
				case 568901597:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 1167984459);
			
				case 1006005360:
				case 1403427788:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 1006005360);
			
				case -1295693571:
				case -1940685798:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -1295693571);
			
				case -1825141795:
				case 1441861967:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -1825141795);
			
				case 61080464:
				case -1941007133:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 61080464);
			
				case -1622071979:
				case -1216457341:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -1622071979);
			
				case -899024637:
				case 141030546:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -899024637);
			
				case -569499773:
				case 2065160600:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -569499773);
			
				case -665339429:
				case 222569387:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == -665339429);
			
				case 858185772:
				case -1269669251:
					if (*Global_262145.f_34545)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == 858185772);
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Sum2_Tee_000_M"):
				case joaat("MP_Sum2_Tee_000_F"):
					if (func_429(34505, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_000_M"));
			
				case joaat("MP_Sum2_Tee_001_M"):
				case joaat("MP_Sum2_Tee_001_F"):
					if (func_429(34375, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Sum2_Tee_001_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpTuner_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Tuner_Tee_000_M"):
				case joaat("MP_Tuner_Tee_000_F"):
					if (func_423(116, -1) >= func_422(116, 5, 9) || func_429(31760, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_000_M"));
			
				case joaat("MP_Tuner_Tee_002_M"):
				case joaat("MP_Tuner_Tee_002_F"):
					if (func_420(123, -1) || func_429(31761, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_002_M"));
			
				case joaat("MP_Tuner_Tee_003_M"):
				case joaat("MP_Tuner_Tee_003_F"):
					if (func_420(124, -1) || func_429(31762, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_003_M"));
			
				case joaat("MP_Tuner_Tee_005_M"):
				case joaat("MP_Tuner_Tee_005_F"):
					if (func_420(125, -1) || func_429(31763, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_005_M"));
			
				case joaat("MP_Tuner_Tee_006_M"):
				case joaat("MP_Tuner_Tee_006_F"):
					if (func_420(126, -1) || func_429(31764, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_006_M"));
			
				case joaat("MP_Tuner_Tee_008_M"):
				case joaat("MP_Tuner_Tee_008_F"):
					if (func_429(31768, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_008_M"));
			
				case joaat("MP_Tuner_Tee_010_M"):
				case joaat("MP_Tuner_Tee_010_F"):
					if (func_429(31769, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_010_M"));
			
				case joaat("MP_Tuner_Tee_011_M"):
				case joaat("MP_Tuner_Tee_011_F"):
					if (func_429(31770, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_011_M"));
			
				case joaat("MP_Tuner_Tee_012_M"):
				case joaat("MP_Tuner_Tee_012_F"):
					if (func_429(31771, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_012_M"));
			
				case joaat("MP_Tuner_Tee_013_M"):
				case joaat("MP_Tuner_Tee_013_F"):
					if (func_429(31772, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_013_M"));
			
				case joaat("MP_Tuner_Tee_014_M"):
				case joaat("MP_Tuner_Tee_014_F"):
					if (func_429(31773, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_014_M"));
			
				case joaat("MP_Tuner_Tee_015_M"):
				case joaat("MP_Tuner_Tee_015_F"):
					if (func_429(31774, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_015_M"));
			
				case joaat("MP_Tuner_Tee_016_M"):
				case joaat("MP_Tuner_Tee_016_F"):
					if (func_429(31775, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Tuner_Tee_016_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist4_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Heist4_Tee_030_M"):
				case joaat("MP_Heist4_Tee_030_F"):
					if (func_429(30533, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_030_M"));
			
				case joaat("MP_Heist4_Tee_032_M"):
				case joaat("MP_Heist4_Tee_032_F"):
					if (func_429(30534, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_032_M"));
			
				case joaat("MP_Heist4_Tee_028_M"):
				case joaat("MP_Heist4_Tee_028_F"):
					if (func_429(30535, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_028_M"));
			
				case joaat("MP_Heist4_Tee_029_M"):
				case joaat("MP_Heist4_Tee_029_F"):
					if (func_429(30536, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_029_M"));
			
				case joaat("MP_Heist4_Tee_031_M"):
				case joaat("MP_Heist4_Tee_031_F"):
					if (func_429(30537, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_031_M"));
			
				case joaat("MP_Heist4_Tee_022_M"):
				case joaat("MP_Heist4_Tee_022_F"):
					if (func_429(30538, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_022_M"));
			
				case joaat("MP_Heist4_Tee_023_M"):
				case joaat("MP_Heist4_Tee_023_F"):
					if (func_429(30539, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_023_M"));
			
				case joaat("MP_Heist4_Tee_020_M"):
				case joaat("MP_Heist4_Tee_020_F"):
					if (func_429(30540, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_020_M"));
			
				case joaat("MP_Heist4_Tee_021_M"):
				case joaat("MP_Heist4_Tee_021_F"):
					if (func_429(30541, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_021_M"));
			
				case joaat("MP_Heist4_Tee_003_M"):
				case joaat("MP_Heist4_Tee_003_F"):
					if (func_429(30542, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_003_M"));
			
				case joaat("MP_Heist4_Tee_004_M"):
				case joaat("MP_Heist4_Tee_004_F"):
					if (func_429(30543, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_004_M"));
			
				case joaat("MP_Heist4_Tee_005_M"):
				case joaat("MP_Heist4_Tee_005_F"):
					if (func_429(30544, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_005_M"));
			
				case joaat("MP_Heist4_Tee_006_M"):
				case joaat("MP_Heist4_Tee_006_F"):
					if (func_429(30545, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_006_M"));
			
				case joaat("MP_Heist4_Tee_027_M"):
				case joaat("MP_Heist4_Tee_027_F"):
					if (func_429(30546, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_027_M"));
			
				case joaat("MP_Heist4_Tee_026_M"):
				case joaat("MP_Heist4_Tee_026_F"):
					if (func_429(30547, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_026_M"));
			
				case joaat("MP_Heist4_Tee_025_M"):
				case joaat("MP_Heist4_Tee_025_F"):
					if (func_429(30548, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_025_M"));
			
				case joaat("MP_Heist4_Tee_024_M"):
				case joaat("MP_Heist4_Tee_024_F"):
					if (func_429(30549, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_024_M"));
			
				case joaat("MP_Heist4_Tee_002_M"):
				case joaat("MP_Heist4_Tee_002_F"):
					if (func_429(30550, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_002_M"));
			
				case joaat("MP_Heist4_Tee_001_M"):
				case joaat("MP_Heist4_Tee_001_F"):
					if (func_429(30551, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_001_M"));
			
				case joaat("MP_Heist4_Tee_000_M"):
				case joaat("MP_Heist4_Tee_000_F"):
					if (func_429(30552, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_000_M"));
			
				case joaat("MP_Heist4_Tee_007_M"):
				case joaat("MP_Heist4_Tee_007_F"):
					if (func_429(30553, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_007_M"));
			
				case joaat("ANIML_TPDL_17") /* collision: MP_Heist4_Tee_008_M */:
				case joaat("MP_Heist4_Tee_008_F"):
					if (func_429(30554, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("ANIML_TPDL_17") /* collision: MP_Heist4_Tee_008_M */);
			
				case joaat("MP_Heist4_Tee_009_M"):
				case joaat("MP_Heist4_Tee_009_F"):
					if (func_429(30555, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_009_M"));
			
				case joaat("MP_Heist4_Tee_010_M"):
				case joaat("MP_Heist4_Tee_010_F"):
					if (func_429(30556, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_010_M"));
			
				case joaat("MP_Heist4_Tee_011_M"):
				case joaat("MP_Heist4_Tee_011_F"):
					if (func_429(30557, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_011_M"));
			
				case joaat("MP_Heist4_Tee_012_M"):
				case joaat("MP_Heist4_Tee_012_F"):
					if (func_429(30524, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_012_M"));
			
				case joaat("MP_Heist4_Tee_013_M"):
				case joaat("MP_Heist4_Tee_013_F"):
					if (func_429(30525, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_013_M"));
			
				case joaat("MP_Heist4_Tee_014_M"):
				case joaat("MP_Heist4_Tee_014_F"):
					if (func_429(30526, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_014_M"));
			
				case joaat("MP_Heist4_Tee_015_M"):
				case joaat("MP_Heist4_Tee_015_F"):
					if (func_429(30527, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_015_M"));
			
				case joaat("MP_Heist4_Tee_016_M"):
				case joaat("MP_Heist4_Tee_016_F"):
					if (func_429(30528, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_016_M"));
			
				case joaat("MP_Heist4_Tee_017_M"):
				case joaat("MP_Heist4_Tee_017_F"):
					if (func_429(30529, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_017_M"));
			
				case joaat("MP_Heist4_Tee_018_M"):
				case joaat("MP_Heist4_Tee_018_F"):
					if (func_429(30530, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_018_M"));
			
				case joaat("MP_Heist4_Tee_019_M"):
				case joaat("MP_Heist4_Tee_019_F"):
					if (func_429(30531, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_019_M"));
			
				case joaat("MP_Heist4_Tee_033_M"):
				case joaat("MP_Heist4_Tee_033_F"):
					if (func_429(30532, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_033_M"));
			
				case joaat("MP_Heist4_Tee_045_M"):
				case joaat("MP_Heist4_Tee_045_F"):
					if (func_429(30570, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_045_M"));
			
				case joaat("MP_Heist4_Tee_046_M"):
				case joaat("MP_Heist4_Tee_046_F"):
					if (func_429(30571, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_046_M"));
			
				case joaat("MP_Heist4_Tee_048_M"):
				case joaat("MP_Heist4_Tee_048_F"):
					if (func_429(30568, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_048_M"));
			
				case joaat("MP_Heist4_Tee_047_M"):
				case joaat("MP_Heist4_Tee_047_F"):
					if (func_429(30569, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_047_M"));
			
				case joaat("MP_Heist4_Tee_049_M"):
				case joaat("MP_Heist4_Tee_049_F"):
					if (func_429(30634, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_049_M"));
			
				case joaat("MP_Heist4_Tee_051_M"):
				case joaat("MP_Heist4_Tee_051_F"):
					if (func_429(30635, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_051_M"));
			
				case joaat("MP_Heist4_Tee_053_M"):
				case joaat("MP_Heist4_Tee_053_F"):
					if (func_429(30636, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_053_M"));
			
				case joaat("MP_Heist4_Tee_054_M"):
				case joaat("MP_Heist4_Tee_054_F"):
					if (func_429(30637, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_054_M"));
			
				case joaat("MP_Heist4_Tee_055_M"):
				case joaat("MP_Heist4_Tee_055_F"):
					if (func_429(30703, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_055_M"));
			
				case joaat("MP_Heist4_Tee_057_M"):
				case joaat("MP_Heist4_Tee_057_F"):
					if (func_429(30704, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_057_M"));
			
				case joaat("MP_Heist4_Tee_059_M"):
				case joaat("MP_Heist4_Tee_059_F"):
					if (func_429(30700, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_059_M"));
			
				case joaat("MP_Heist4_Tee_061_M"):
				case joaat("MP_Heist4_Tee_061_F"):
					if (func_429(30701, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_061_M"));
			
				case joaat("MP_Heist4_Tee_063_M"):
				case joaat("MP_Heist4_Tee_063_F"):
					if (func_429(30702, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_063_M"));
			
				case joaat("MP_Heist4_Tee_065_M"):
				case joaat("MP_Heist4_Tee_065_F"):
					if (func_429(30699, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Heist4_Tee_065_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_000_M"):
				case joaat("mpSum_Tee_000_F"):
					if (func_429(30260, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_000_M"));
			
				case joaat("mpSum_Tee_001_M"):
				case joaat("mpSum_Tee_001_F"):
					if (func_429(30261, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_001_M"));
			
				case joaat("mpSum_Tee_002_M"):
				case joaat("mpSum_Tee_002_F"):
					if (func_429(30262, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_002_M"));
			
				case joaat("mpSum_Tee_003_M"):
				case joaat("mpSum_Tee_003_F"):
					if (func_429(30263, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_003_M"));
			
				case joaat("mpSum_Tee_004_M"):
				case joaat("mpSum_Tee_004_F"):
					if (func_429(30264, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_004_M"));
			
				case joaat("mpSum_Tee_005_M"):
				case joaat("mpSum_Tee_005_F"):
					if (func_429(30265, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_005_M"));
			
				case joaat("mpSum_Tee_006_M"):
				case joaat("mpSum_Tee_006_F"):
					if (func_429(30266, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_006_M"));
			
				case joaat("mpSum_Tee_007_M"):
				case joaat("mpSum_Tee_007_F"):
					if (func_429(30267, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_007_M"));
			
				case joaat("mpSum_Tee_008_M"):
				case joaat("mpSum_Tee_008_F"):
					if (func_429(30268, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_008_M"));
			
				case joaat("mpSum_Tee_009_M"):
				case joaat("mpSum_Tee_009_F"):
					if (func_429(30269, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_009_M"));
			
				case joaat("mpSum_Tee_010_M"):
				case joaat("mpSum_Tee_010_F"):
					if (func_429(30270, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_010_M"));
			
				case joaat("mpSum_Tee_011_M"):
				case joaat("mpSum_Tee_011_F"):
					if (func_429(30271, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_011_M"));
			
				case joaat("mpSum_Tee_012_M"):
				case joaat("mpSum_Tee_012_F"):
					if (func_429(30272, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_012_M"));
			
				case joaat("mpSum_Tee_013_M"):
				case joaat("mpSum_Tee_013_F"):
					if (func_429(30273, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_013_M"));
			
				case joaat("mpSum_Tee_014_M"):
				case joaat("mpSum_Tee_014_F"):
					if (func_429(30274, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_014_M"));
			
				case joaat("mpSum_Tee_015_M"):
				case joaat("mpSum_Tee_015_F"):
					if (func_429(30275, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_015_M"));
			
				case joaat("mpSum_Tee_016_M"):
				case joaat("mpSum_Tee_016_F"):
					if (func_429(30276, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_016_M"));
			
				case joaat("mpSum_Tee_017_M"):
				case joaat("mpSum_Tee_017_F"):
					if (func_429(30277, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_017_M"));
			
				case joaat("mpSum_Tee_018_M"):
				case joaat("mpSum_Tee_018_F"):
					if (func_429(30278, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_018_M"));
			
				case joaat("mpSum_Tee_019_M"):
				case joaat("mpSum_Tee_019_F"):
					if (func_429(30279, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_019_M"));
			
				case joaat("mpSum_Tee_020_M"):
				case joaat("mpSum_Tee_020_F"):
					if (func_429(30280, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_020_M"));
			
				case joaat("mpSum_Tee_021_M"):
				case joaat("mpSum_Tee_021_F"):
					if (func_429(30281, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_021_M"));
			
				case joaat("mpSum_Tee_022_M"):
				case joaat("mpSum_Tee_022_F"):
					if (func_429(30282, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_022_M"));
			
				case joaat("mpSum_Tee_023_M"):
				case joaat("mpSum_Tee_023_F"):
					if (func_429(30283, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_023_M"));
			
				case joaat("mpSum_Tee_024_M"):
				case joaat("mpSum_Tee_024_F"):
					if (func_429(30284, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_024_M"));
			
				case joaat("mpSum_Tee_025_M"):
				case joaat("mpSum_Tee_025_F"):
					if (func_429(30285, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_025_M"));
			
				case joaat("mpSum_Tee_026_M"):
				case joaat("mpSum_Tee_026_F"):
					if (func_429(30286, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_026_M"));
			
				case joaat("mpSum_Tee_027_M"):
				case joaat("mpSum_Tee_027_F"):
					if (func_429(30287, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_027_M"));
			
				case joaat("mpSum_Tee_028_M"):
				case joaat("mpSum_Tee_028_F"):
					if (func_429(30288, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_028_M"));
			
				case joaat("mpSum_Tee_029_M"):
				case joaat("mpSum_Tee_029_F"):
					if (func_429(30289, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_029_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_030_M"):
				case joaat("mpSum_Tee_030_F"):
					if (func_429(28255, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_030_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpSum_overlays"):
			switch (iParam1)
			{
				case joaat("mpSum_Tee_031_M"):
				case joaat("mpSum_Tee_031_F"):
					if (func_420(89, -1) || func_429(30254, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_031_M"));
			
				case joaat("mpSum_Tee_032_M"):
				case joaat("mpSum_Tee_032_F"):
					if (func_420(90, -1) || func_429(30255, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_032_M"));
			
				case joaat("mpSum_Tee_033_M"):
				case joaat("mpSum_Tee_033_F"):
					if (func_420(92, -1) || func_429(30256, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_033_M"));
			
				case joaat("mpSum_Tee_034_M"):
				case joaat("mpSum_Tee_034_F"):
					if (func_420(89, -1) && func_420(90, -1) && func_420(92, -1) && func_420(91, -1) || func_429(30257, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpSum_Tee_034_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_001_F"):
				case joaat("mpHeist3_Tee_001_M"):
					if (func_420(78, -1) || func_429(28199, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_001_M"));
			
				case joaat("mpHeist3_Tee_000_F"):
				case joaat("mpHeist3_Tee_000_M"):
					if (func_420(77, -1) && func_420(78, -1) && func_423(92, -1) >= func_422(92, 5, 9) || func_429(28200, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_000_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_007_F"):
				case joaat("mpHeist3_Tee_008_F"):
				case joaat("mpHeist3_Tee_009_F"):
				case joaat("mpHeist3_Tee_007_M"):
				case joaat("mpHeist3_Tee_008_M"):
				case joaat("mpHeist3_Tee_009_M"):
					if (func_423(93, -1) >= func_422(93, 5, 9) && func_420(79, -1) && func_420(80, -1) || func_429(28204, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_007_M") || iParam1 == joaat("mpHeist3_Tee_008_M") || iParam1 == joaat("mpHeist3_Tee_009_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_004_F"):
				case joaat("mpHeist3_Tee_004_M"):
					if (func_420(81, -1) || func_429(28206, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_004_M"));
			
				case joaat("mpHeist3_Tee_005_F"):
				case joaat("mpHeist3_Tee_005_M"):
					if (func_423(94, -1) >= func_422(94, 5, 9) || func_429(28207, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_005_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_006_F"):
				case joaat("mpHeist3_Tee_006_M"):
					if (func_420(84, -1) && func_420(85, -1) && func_423(97, -1) >= func_422(97, 5, 9) || func_429(28212, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_006_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_002_F"):
				case joaat("mpHeist3_Tee_002_M"):
					if (func_429(28249, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_002_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_013_F"):
				case joaat("mpHeist3_Tee_013_M"):
					if (func_429(28183, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_013_M"));
			
				case joaat("mpHeist3_Tee_014_F"):
				case joaat("mpHeist3_Tee_014_M"):
					if (func_429(28182, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_014_M"));
			
				case joaat("mpHeist3_Tee_015_F"):
				case joaat("mpHeist3_Tee_015_M"):
					if (func_429(28184, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_015_M"));
			
				case joaat("mpHeist3_Tee_016_F"):
				case joaat("mpHeist3_Tee_016_M"):
					if (func_429(28181, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_016_M"));
			
				case joaat("mpHeist3_Tee_017_F"):
				case joaat("mpHeist3_Tee_017_M"):
					if (func_429(28178, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_017_M"));
			
				case joaat("mpHeist3_Tee_018_F"):
				case joaat("mpHeist3_Tee_018_M"):
					if (func_429(28177, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_018_M"));
			
				case joaat("mpHeist3_Tee_019_F"):
				case joaat("mpHeist3_Tee_019_M"):
					if (func_429(28176, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_019_M"));
			
				case joaat("mpHeist3_Tee_020_F"):
				case joaat("mpHeist3_Tee_020_M"):
					if (func_429(28180, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_020_M"));
			
				case joaat("mpHeist3_Tee_021_F"):
				case joaat("mpHeist3_Tee_021_M"):
					if (func_429(28179, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_021_M"));
			
				case joaat("mpHeist3_Tee_022_F"):
				case joaat("mpHeist3_Tee_022_M"):
					if (func_429(28176, -1) && func_429(28177, -1) && func_429(28178, -1) && func_429(28179, -1) && func_429(28180, -1) && func_429(28181, -1) && func_429(28182, -1) && func_429(28183, -1) && func_429(28184, -1) || func_429(28221, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_022_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_023_F"):
				case joaat("mpHeist3_Tee_023_M"):
					if (func_429(28191, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_023_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_011_F"):
				case joaat("mpHeist3_Tee_011_M"):
					if (func_429(28190, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_011_M"));
			
				case joaat("mpHeist3_Tee_012_F"):
				case joaat("mpHeist3_Tee_012_M"):
					if (func_429(28189, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_012_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_003_F"):
				case joaat("mpHeist3_Tee_003_M"):
					if (func_417(false, true))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_003_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpHeist3_overlays"):
			switch (iParam1)
			{
				case joaat("mpHeist3_Tee_010_F"):
				case joaat("mpHeist3_Tee_010_M"):
					if (func_420(77, -1) && func_420(78, -1) && func_423(92, -1) >= func_422(92, 5, 9) && func_423(93, -1) >= func_422(93, 5, 9) && func_420(79, -1) && func_420(80, -1) && func_420(81, -1) && func_423(94, -1) >= func_422(94, 5, 9) && func_423(95, -1) >= func_422(95, 5, 9) && func_420(82, -1) && func_420(83, -1) && func_423(96, -1) >= func_422(96, 5, 9) && func_420(84, -1) && func_420(85, -1) && func_423(97, -1) >= func_422(97, 5, 9) && func_420(86, -1) && func_420(87, -1) && func_420(88, -1) || func_429(28222, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("mpHeist3_Tee_010_M"));
			}
			break;
	}

	switch (iParam0)
	{
		case joaat("mpVinewood_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Vinewood_Tat_023_M"):
				case joaat("MP_Vinewood_Tat_023_F"):
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_023_M"));
			
				case joaat("MP_Vinewood_Tat_030_M"):
				case joaat("MP_Vinewood_Tat_030_F"):
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Vinewood_Tat_030_M"));
			
				case joaat("CasinoTop_M_21"):
				case joaat("CasinoTop_F_21"):
					if (func_429(27109, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_21"));
			
				case joaat("CasinoTop_M_23"):
				case joaat("CasinoTop_F_23"):
					if (func_429(27110, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_23"));
			
				case joaat("CasinoTop_M_2"):
				case joaat("CasinoTop_F_2"):
					if (func_429(27111, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_2"));
			
				case joaat("CasinoTop_M_4"):
				case joaat("CasinoTop_F_4"):
					if (func_429(27112, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_4"));
			
				case joaat("CasinoTop_M_6"):
				case joaat("CasinoTop_F_6"):
					if (func_429(27113, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_6"));
			
				case joaat("CasinoTop_M_10"):
				case joaat("CasinoTop_F_10"):
					if (func_429(27114, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_10"));
			
				case joaat("CasinoTop_M_22"):
				case joaat("CasinoTop_F_22"):
					if (func_429(27115, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("CasinoTop_M_22"));
			}
			break;
	
		case joaat("mpChristmas2018_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Christmas2018_Tee_000_M"):
				case joaat("MP_Christmas2018_Tee_000_F"):
					if (func_429(25032, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_000_M"));
			
				case joaat("MP_Christmas2018_Tee_001_M"):
				case joaat("MP_Christmas2018_Tee_001_F"):
					if (func_429(25033, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_001_M"));
			
				case joaat("MP_Christmas2018_Tee_002_M"):
				case joaat("MP_Christmas2018_Tee_002_F"):
					if (func_429(25034, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_002_M"));
			
				case joaat("MP_Christmas2018_Tee_003_M"):
				case joaat("MP_Christmas2018_Tee_003_F"):
					if (func_429(25035, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_003_M"));
			
				case joaat("MP_Christmas2018_Tee_004_M"):
				case joaat("MP_Christmas2018_Tee_004_F"):
					if (func_429(25036, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_004_M"));
			
				case joaat("MP_Christmas2018_Tee_005_M"):
				case joaat("MP_Christmas2018_Tee_005_F"):
					if (func_429(25037, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_005_M"));
			
				case joaat("MP_Christmas2018_Tee_006_M"):
				case joaat("MP_Christmas2018_Tee_006_F"):
					if (func_429(25038, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_006_M"));
			
				case joaat("MP_Christmas2018_Tee_007_M"):
				case joaat("MP_Christmas2018_Tee_007_F"):
					if (func_429(25039, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_007_M"));
			
				case joaat("MP_Christmas2018_Tee_008_M"):
				case joaat("MP_Christmas2018_Tee_008_F"):
					if (func_429(25040, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_008_M"));
			
				case joaat("MP_Christmas2018_Tee_009_M"):
				case joaat("MP_Christmas2018_Tee_009_F"):
					if (func_429(25041, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_009_M"));
			
				case joaat("MP_Christmas2018_Tee_010_M"):
				case joaat("MP_Christmas2018_Tee_010_F"):
					if (func_429(25042, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_010_M"));
			
				case joaat("MP_Christmas2018_Tee_011_M"):
				case joaat("MP_Christmas2018_Tee_011_F"):
					if (func_429(25043, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_011_M"));
			
				case joaat("MP_Christmas2018_Tee_012_M"):
				case joaat("MP_Christmas2018_Tee_012_F"):
					if (func_429(25044, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_012_M"));
			
				case joaat("MP_Christmas2018_Tee_013_M"):
				case joaat("MP_Christmas2018_Tee_013_F"):
					if (func_429(25045, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_013_M"));
			
				case joaat("MP_Christmas2018_Tee_014_M"):
				case joaat("MP_Christmas2018_Tee_014_F"):
					if (func_429(25046, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_014_M"));
			
				case joaat("MP_Christmas2018_Tee_015_M"):
				case joaat("MP_Christmas2018_Tee_015_F"):
					if (func_429(25047, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_015_M"));
			
				case joaat("MP_Christmas2018_Tee_016_M"):
				case joaat("MP_Christmas2018_Tee_016_F"):
					if (func_429(25048, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_016_M"));
			
				case joaat("MP_Christmas2018_Tee_017_M"):
				case joaat("MP_Christmas2018_Tee_017_F"):
					if (func_429(25049, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_017_M"));
			
				case joaat("MP_Christmas2018_Tee_018_M"):
				case joaat("MP_Christmas2018_Tee_018_F"):
					if (func_429(25050, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_018_M"));
			
				case joaat("MP_Christmas2018_Tee_019_M"):
				case joaat("MP_Christmas2018_Tee_019_F"):
					if (func_429(25051, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_019_M"));
			
				case joaat("MP_Christmas2018_Tee_020_M"):
				case joaat("MP_Christmas2018_Tee_020_F"):
					if (func_429(25052, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_020_M"));
			
				case joaat("MP_Christmas2018_Tee_021_M"):
				case joaat("MP_Christmas2018_Tee_021_F"):
					if (func_429(25053, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_021_M"));
			
				case joaat("MP_Christmas2018_Tee_022_M"):
				case joaat("MP_Christmas2018_Tee_022_F"):
					if (func_429(25054, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_022_M"));
			
				case joaat("MP_Christmas2018_Tee_023_M"):
				case joaat("MP_Christmas2018_Tee_023_F"):
					if (func_429(25055, -1))
						return false;
				
					if (func_429(27077, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_023_M"));
			
				case joaat("MP_Christmas2018_Tee_024_M"):
				case joaat("MP_Christmas2018_Tee_024_F"):
					if (func_429(25056, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_024_M"));
			
				case joaat("MP_Christmas2018_Tee_025_M"):
				case joaat("MP_Christmas2018_Tee_025_F"):
					if (func_429(25057, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_025_M"));
			
				case joaat("MP_Christmas2018_Tee_026_M"):
				case joaat("MP_Christmas2018_Tee_026_F"):
					if (func_429(25058, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_026_M"));
			
				case joaat("MP_Christmas2018_Tee_027_M"):
				case joaat("MP_Christmas2018_Tee_027_F"):
					if (func_429(25059, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_027_M"));
			
				case joaat("MP_Christmas2018_Tee_028_M"):
				case joaat("MP_Christmas2018_Tee_028_F"):
					if (func_429(25060, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_028_M"));
			
				case joaat("MP_Christmas2018_Tee_029_M"):
				case joaat("MP_Christmas2018_Tee_029_F"):
					if (func_429(25061, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_029_M"));
			
				case joaat("MP_Christmas2018_Tee_030_M"):
				case joaat("MP_Christmas2018_Tee_030_F"):
					if (func_429(25062, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_030_M"));
			
				case joaat("MP_Christmas2018_Tee_031_M"):
				case joaat("MP_Christmas2018_Tee_031_F"):
					if (func_429(25063, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_031_M"));
			
				case joaat("MP_Christmas2018_Tee_032_M"):
				case joaat("MP_Christmas2018_Tee_032_F"):
					if (func_429(25064, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_032_M"));
			
				case joaat("MP_Christmas2018_Tee_033_M"):
				case joaat("MP_Christmas2018_Tee_033_F"):
					if (func_429(25065, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_033_M"));
			
				case joaat("MP_Christmas2018_Tee_034_M"):
				case joaat("MP_Christmas2018_Tee_034_F"):
					if (func_429(25066, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_034_M"));
			
				case joaat("MP_Christmas2018_Tee_035_M"):
				case joaat("MP_Christmas2018_Tee_035_F"):
					if (func_429(25067, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_035_M"));
			
				case joaat("MP_Christmas2018_Tee_036_M"):
				case joaat("MP_Christmas2018_Tee_036_F"):
					if (func_429(25068, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_036_M"));
			
				case joaat("MP_Christmas2018_Tee_037_M"):
				case joaat("MP_Christmas2018_Tee_037_F"):
					if (func_429(25069, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_037_M"));
			
				case joaat("MP_Christmas2018_Tee_038_M"):
				case joaat("MP_Christmas2018_Tee_038_F"):
					if (func_429(25070, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_038_M"));
			
				case joaat("MP_Christmas2018_Tee_039_M"):
				case joaat("MP_Christmas2018_Tee_039_F"):
					if (func_429(25071, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_039_M"));
			
				case joaat("MP_Christmas2018_Tee_040_M"):
				case joaat("MP_Christmas2018_Tee_040_F"):
					if (func_429(25072, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_040_M"));
			
				case joaat("MP_Christmas2018_Tee_041_M"):
				case joaat("MP_Christmas2018_Tee_041_F"):
					if (func_429(25073, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_041_M"));
			
				case joaat("MP_Christmas2018_Tee_042_M"):
				case joaat("MP_Christmas2018_Tee_042_F"):
					if (func_429(25074, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_042_M"));
			
				case joaat("MP_Christmas2018_Tee_043_M"):
				case joaat("MP_Christmas2018_Tee_043_F"):
					if (func_429(25075, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_043_M"));
			
				case joaat("MP_Christmas2018_Tee_044_M"):
				case joaat("MP_Christmas2018_Tee_044_F"):
					if (func_429(25076, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_044_M"));
			
				case joaat("MP_Christmas2018_Tee_045_M"):
				case joaat("MP_Christmas2018_Tee_045_F"):
					if (func_429(25077, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_045_M"));
			
				case joaat("MP_Christmas2018_Tee_046_M"):
				case joaat("MP_Christmas2018_Tee_046_F"):
					if (func_429(25078, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_046_M"));
			
				case joaat("MP_Christmas2018_Tee_047_M"):
				case joaat("MP_Christmas2018_Tee_047_F"):
					if (func_429(25079, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_047_M"));
			
				case joaat("MP_Christmas2018_Tee_048_M"):
				case joaat("MP_Christmas2018_Tee_048_F"):
					if (func_429(25080, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_048_M"));
			
				case joaat("MP_Christmas2018_Tee_049_M"):
				case joaat("MP_Christmas2018_Tee_049_F"):
					if (func_429(25081, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_049_M"));
			
				case joaat("MP_Christmas2018_Tee_050_M"):
				case joaat("MP_Christmas2018_Tee_050_F"):
					if (func_429(25082, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_050_M"));
			
				case joaat("MP_Christmas2018_Tee_051_M"):
				case joaat("MP_Christmas2018_Tee_051_F"):
					if (func_429(25083, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_051_M"));
			
				case joaat("MP_Christmas2018_Tee_052_M"):
				case joaat("MP_Christmas2018_Tee_052_F"):
					if (func_429(25084, -1) || func_429(41781, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_052_M"));
			
				case joaat("MP_Christmas2018_Tee_053_M"):
				case joaat("MP_Christmas2018_Tee_053_F"):
					if (func_429(25085, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_053_M"));
			
				case joaat("MP_Christmas2018_Tee_054_M"):
				case joaat("MP_Christmas2018_Tee_054_F"):
					if (func_429(25086, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_054_M"));
			
				case joaat("MP_Christmas2018_Tee_055_M"):
				case joaat("MP_Christmas2018_Tee_055_F"):
					if (func_429(25087, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_055_M"));
			
				case joaat("MP_Christmas2018_Tee_056_M"):
				case joaat("MP_Christmas2018_Tee_056_F"):
					if (func_429(25088, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_056_M"));
			
				case joaat("MP_Christmas2018_Tee_057_M"):
				case joaat("MP_Christmas2018_Tee_057_F"):
					if (func_429(25089, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_057_M"));
			
				case joaat("MP_Christmas2018_Tee_058_M"):
				case joaat("MP_Christmas2018_Tee_058_F"):
					if (func_429(25090, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_058_M"));
			
				case joaat("MP_Christmas2018_Tee_059_M"):
				case joaat("MP_Christmas2018_Tee_059_F"):
					if (func_429(25091, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_059_M"));
			
				case joaat("MP_Christmas2018_Tee_060_M"):
				case joaat("MP_Christmas2018_Tee_060_F"):
					if (func_429(25092, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_060_M"));
			
				case joaat("MP_Christmas2018_Tee_061_M"):
				case joaat("MP_Christmas2018_Tee_061_F"):
					if (func_429(25093, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_061_M"));
			
				case joaat("MP_Christmas2018_Tee_062_M"):
				case joaat("MP_Christmas2018_Tee_062_F"):
					if (func_429(25094, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_062_M"));
			
				case joaat("MP_Christmas2018_Tee_063_M"):
				case joaat("MP_Christmas2018_Tee_063_F"):
					if (func_429(25095, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_063_M"));
			
				case joaat("MP_Christmas2018_Tee_064_M"):
				case joaat("MP_Christmas2018_Tee_064_F"):
					if (func_429(25096, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_064_M"));
			
				case joaat("MP_Christmas2018_Tee_065_M"):
				case joaat("MP_Christmas2018_Tee_065_F"):
					if (func_429(25097, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_065_M"));
			
				case joaat("MP_Christmas2018_Tee_066_M"):
				case joaat("MP_Christmas2018_Tee_066_F"):
					if (func_429(25098, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_066_M"));
			
				case joaat("MP_Christmas2018_Tee_067_M"):
				case joaat("MP_Christmas2018_Tee_067_F"):
					if (func_429(25099, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tee_067_M"));
			
				case joaat("MP_Christmas2018_Tat_000_M"):
				case joaat("MP_Christmas2018_Tat_000_F"):
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Christmas2018_Tat_000_M"));
			}
			break;
	
		case joaat("mpBattle_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_000_M"):
				case joaat("MP_Battle_Clothing_000_F"):
					if (func_429(22108, -1) || func_429(25006, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_000_M"));
			
				case joaat("MP_Battle_Clothing_002_M"):
				case joaat("MP_Battle_Clothing_002_F"):
					if (func_429(9481, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_002_M"));
			
				case joaat("MP_Battle_Clothing_003_M"):
				case joaat("MP_Battle_Clothing_003_F"):
					if (func_429(9470, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_003_M"));
			
				case joaat("MP_Battle_Clothing_004_M"):
				case joaat("MP_Battle_Clothing_004_F"):
					if (func_429(9475, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_004_M"));
			
				case joaat("MP_Battle_Clothing_005_M"):
				case joaat("MP_Battle_Clothing_005_F"):
					if (func_429(9472, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_005_M"));
			
				case joaat("MP_Battle_Clothing_006_M"):
				case joaat("MP_Battle_Clothing_006_F"):
					if (func_429(9465, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_006_M"));
			
				case joaat("MP_Battle_Clothing_007_M"):
				case joaat("MP_Battle_Clothing_007_F"):
					if (func_429(9463, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_007_M"));
			
				case joaat("MP_Battle_Clothing_008_M"):
				case joaat("MP_Battle_Clothing_008_F"):
					if (func_429(9464, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_008_M"));
			
				case joaat("MP_Battle_Clothing_009_M"):
				case joaat("MP_Battle_Clothing_009_F"):
					if (func_429(9468, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_009_M"));
			
				case joaat("MP_Battle_Clothing_010_M"):
				case joaat("MP_Battle_Clothing_010_F"):
					if (func_429(9469, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_010_M"));
			
				case joaat("MP_Battle_Clothing_011_M"):
				case joaat("MP_Battle_Clothing_011_F"):
					if (func_429(9479, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_011_M"));
			
				case joaat("MP_Battle_Clothing_012_M"):
				case joaat("MP_Battle_Clothing_012_F"):
					if (func_429(9473, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_012_M"));
			
				case joaat("MP_Battle_Clothing_013_M"):
				case joaat("MP_Battle_Clothing_013_F"):
					if (func_429(9480, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_013_M"));
			
				case joaat("MP_Battle_Clothing_014_M"):
				case joaat("MP_Battle_Clothing_014_F"):
					if (func_429(9476, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_014_M"));
			
				case joaat("MP_Battle_Clothing_015_M"):
				case joaat("MP_Battle_Clothing_015_F"):
					if (func_429(9477, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_015_M"));
			
				case joaat("MP_Battle_Clothing_016_M"):
				case joaat("MP_Battle_Clothing_016_F"):
					if (func_429(9471, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_016_M"));
			
				case joaat("MP_Battle_Clothing_017_M"):
				case joaat("MP_Battle_Clothing_017_F"):
					if (func_429(9474, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_017_M"));
			
				case joaat("MP_Battle_Clothing_018_M"):
				case joaat("MP_Battle_Clothing_018_F"):
					if (func_429(9467, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_018_M"));
			
				case joaat("MP_Battle_Clothing_019_M"):
				case joaat("MP_Battle_Clothing_019_F"):
					if (func_429(9478, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_019_M"));
			
				case joaat("MP_Battle_Clothing_020_M"):
				case joaat("MP_Battle_Clothing_020_F"):
					if (func_429(9462, -1))
						return false;
				
					if (iParam1 == joaat("MP_Battle_Clothing_020_M"))
						if (func_429(27085, -1))
							return false;
					else if (func_429(27084, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_020_M"));
			
				case joaat("MP_Battle_Clothing_021_M"):
				case joaat("MP_Battle_Clothing_021_F"):
					if (func_429(9466, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_021_M"));
			
				case joaat("MP_Battle_Clothing_022_M"):
				case joaat("MP_Battle_Clothing_022_F"):
					if (func_429(22126, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_022_M"));
			
				case joaat("MP_Battle_Clothing_023_M"):
				case joaat("MP_Battle_Clothing_023_F"):
					if (func_429(22127, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_023_M"));
			
				case joaat("MP_Battle_Clothing_024_M"):
				case joaat("MP_Battle_Clothing_024_F"):
					if (func_429(22128, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_024_M"));
			
				case joaat("MP_Battle_Clothing_025_M"):
				case joaat("MP_Battle_Clothing_025_F"):
					if (func_429(22124, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_025_M"));
			
				case joaat("MP_Battle_Clothing_026_M"):
				case joaat("MP_Battle_Clothing_026_F"):
					if (func_429(22130, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_026_M"));
			
				case joaat("MP_Battle_Clothing_027_M"):
				case joaat("MP_Battle_Clothing_027_F"):
					if (func_429(22125, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_027_M"));
			
				case joaat("MP_Battle_Clothing_028_M"):
				case joaat("MP_Battle_Clothing_028_F"):
					if (func_429(22129, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_028_M"));
			
				case joaat("MP_Battle_Clothing_029_M"):
				case joaat("MP_Battle_Clothing_029_F"):
					if (func_429(22131, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_029_M"));
			
				case joaat("MP_Battle_Clothing_030_M"):
				case joaat("MP_Battle_Clothing_030_F"):
					if (func_429(22132, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_030_M"));
			}
		
			switch (iParam1)
			{
				case joaat("MP_Battle_Clothing_031_M"):
				case joaat("MP_Battle_Clothing_031_F"):
					if (func_429(22147, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_031_M"));
			
				case joaat("MP_Battle_Clothing_032_M"):
				case joaat("MP_Battle_Clothing_032_F"):
					if (func_429(22148, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_032_M"));
			
				case joaat("MP_Battle_Clothing_033_M"):
				case joaat("MP_Battle_Clothing_033_F"):
					if (func_429(22149, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_033_M"));
			
				case joaat("MP_Battle_Clothing_034_M"):
				case joaat("MP_Battle_Clothing_034_F"):
					if (func_429(22150, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_034_M"));
			
				case joaat("MP_Battle_Clothing_035_M"):
				case joaat("MP_Battle_Clothing_035_F"):
					if (func_429(22151, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_035_M"));
			
				case joaat("MP_Battle_Clothing_036_M"):
				case joaat("MP_Battle_Clothing_036_F"):
					if (func_429(22152, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_036_M"));
			
				case joaat("MP_Battle_Clothing_037_M"):
				case joaat("MP_Battle_Clothing_037_F"):
					if (func_429(22153, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_037_M"));
			
				case joaat("MP_Battle_Clothing_038_M"):
				case joaat("MP_Battle_Clothing_038_F"):
					if (func_429(22154, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_038_M"));
			
				case joaat("MP_Battle_Clothing_039_M"):
				case joaat("MP_Battle_Clothing_039_F"):
					if (func_429(22155, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_039_M"));
			
				case joaat("MP_Battle_Clothing_040_M"):
				case joaat("MP_Battle_Clothing_040_F"):
					if (func_429(22156, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_040_M"));
			
				case joaat("MP_Battle_Clothing_041_M"):
				case joaat("MP_Battle_Clothing_041_F"):
					if (func_429(22157, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_041_M"));
			
				case joaat("MP_Battle_Clothing_042_M"):
				case joaat("MP_Battle_Clothing_042_F"):
					if (func_429(22158, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_042_M"));
			
				case joaat("MP_Battle_Clothing_043_M"):
				case joaat("MP_Battle_Clothing_043_F"):
					if (func_429(22159, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_043_M"));
			
				case joaat("MP_Battle_Clothing_044_M"):
				case joaat("MP_Battle_Clothing_044_F"):
					if (func_429(22160, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_044_M"));
			
				case joaat("MP_Battle_Clothing_045_M"):
				case joaat("MP_Battle_Clothing_045_F"):
					if (func_429(22161, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_045_M"));
			
				case joaat("MP_Battle_Clothing_046_M"):
				case joaat("MP_Battle_Clothing_046_F"):
					if (func_429(22162, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_046_M"));
			
				case joaat("MP_Battle_Clothing_047_M"):
				case joaat("MP_Battle_Clothing_047_F"):
					if (func_429(22163, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_047_M"));
			
				case joaat("MP_Battle_Clothing_048_M"):
				case joaat("MP_Battle_Clothing_048_F"):
					if (func_429(22164, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_048_M"));
			
				case joaat("MP_Battle_Clothing_049_M"):
				case joaat("MP_Battle_Clothing_049_F"):
					if (func_429(22165, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_049_M"));
			
				case joaat("MP_Battle_Clothing_050_M"):
				case joaat("MP_Battle_Clothing_050_F"):
					if (func_429(22166, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_050_M"));
			
				case joaat("MP_Battle_Clothing_051_M"):
				case joaat("MP_Battle_Clothing_051_F"):
					if (func_429(22167, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_051_M"));
			
				case joaat("MP_Battle_Clothing_052_M"):
				case joaat("MP_Battle_Clothing_052_F"):
					if (func_429(22168, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_052_M"));
			
				case joaat("MP_Battle_Clothing_053_M"):
				case joaat("MP_Battle_Clothing_053_F"):
					if (func_429(22169, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_053_M"));
			
				case joaat("MP_Battle_Clothing_054_M"):
				case joaat("MP_Battle_Clothing_054_F"):
					if (func_429(22170, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_054_M"));
			
				case joaat("MP_Battle_Clothing_055_M"):
				case joaat("MP_Battle_Clothing_055_F"):
					if (func_429(22171, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_055_M"));
			
				case joaat("MP_Battle_Clothing_056_M"):
				case joaat("MP_Battle_Clothing_056_F"):
					if (func_429(22172, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_056_M"));
			
				case joaat("MP_Battle_Clothing_057_M"):
				case joaat("MP_Battle_Clothing_057_F"):
					if (func_429(22173, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_057_M"));
			
				case joaat("MP_Battle_Clothing_058_M"):
				case joaat("MP_Battle_Clothing_058_F"):
					if (func_429(22174, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_058_M"));
			
				case joaat("MP_Battle_Clothing_059_M"):
				case joaat("MP_Battle_Clothing_059_F"):
					if (func_429(22175, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_059_M"));
			
				case joaat("MP_Battle_Clothing_060_M"):
				case joaat("MP_Battle_Clothing_060_F"):
					if (func_429(22176, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_060_M"));
			
				case joaat("MP_Battle_Clothing_061_M"):
				case joaat("MP_Battle_Clothing_061_F"):
					if (func_429(22177, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_061_M"));
			
				case joaat("MP_Battle_Clothing_062_M"):
				case joaat("MP_Battle_Clothing_062_F"):
					if (func_429(22178, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Battle_Clothing_062_M"));
			}
			break;
	
		case joaat("mpGunrunning_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_019_M"):
				case joaat("MP_Gunrunning_Award_025_F"):
					if (func_429(15426, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_019_M"));
			
				case joaat("MP_Gunrunning_Award_020_M"):
				case joaat("MP_Gunrunning_Award_020_F"):
					if (func_429(15422, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M"));
			
				case joaat("MP_Gunrunning_Award_020_M_ALT"):
				case joaat("MP_Gunrunning_Award_020_F_ALT"):
					if (func_429(15423, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_020_M_ALT"));
			
				case joaat("MP_Gunrunning_Award_021_M"):
				case joaat("MP_Gunrunning_Award_021_F"):
					if (func_429(15421, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_021_M"));
			
				case joaat("MP_Gunrunning_Award_022_M"):
				case joaat("MP_Gunrunning_Award_026_F"):
					if (func_429(15427, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_022_M"));
			
				case joaat("MP_Gunrunning_Award_023_M"):
				case joaat("MP_Gunrunning_Award_023_F"):
					if (func_429(15419, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_023_M"));
			
				case joaat("MP_Gunrunning_Award_024_M"):
				case joaat("MP_Gunrunning_Award_024_F"):
					if (func_429(15420, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_024_M"));
			}
		
			switch (iParam1)
			{
				case joaat("MP_Gunrunning_Award_000_M"):
				case joaat("MP_Gunrunning_Award_000_F"):
					if (func_429(15394, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_000_M"));
			
				case joaat("MP_Gunrunning_Award_001_M"):
				case joaat("MP_Gunrunning_Award_001_F"):
					if (func_415(209, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_001_M"));
			
				case joaat("MP_Gunrunning_Award_002_M"):
				case joaat("MP_Gunrunning_Award_002_F"):
					if (func_429(15406, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_002_M"));
			
				case joaat("MP_Gunrunning_Award_003_M"):
				case joaat("MP_Gunrunning_Award_003_F"):
					if (func_429(15395, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_003_M"));
			
				case joaat("MP_Gunrunning_Award_004_M"):
				case joaat("MP_Gunrunning_Award_004_F"):
					if (func_415(209, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_004_M"));
			
				case joaat("MP_Gunrunning_Award_005_M"):
				case joaat("MP_Gunrunning_Award_005_F"):
					if (func_429(15410, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_005_M"));
			
				case joaat("MP_Gunrunning_Award_006_M"):
				case joaat("MP_Gunrunning_Award_006_F"):
					if (func_429(15407, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_006_M"));
			
				case joaat("MP_Gunrunning_Award_007_M"):
				case joaat("MP_Gunrunning_Award_007_F"):
					if (func_415(209, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_007_M"));
			
				case joaat("MP_Gunrunning_Award_008_M"):
				case joaat("MP_Gunrunning_Award_008_F"):
					if (func_415(209, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_008_M"));
			
				case joaat("MP_Gunrunning_Award_009_M"):
				case joaat("MP_Gunrunning_Award_009_F"):
					if (func_429(15414, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_009_M"));
			
				case joaat("MP_Gunrunning_Award_010_M"):
				case joaat("MP_Gunrunning_Award_010_F"):
					if (func_429(15415, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_010_M"));
			
				case joaat("MP_Gunrunning_Award_011_M"):
				case joaat("MP_Gunrunning_Award_011_F"):
					if (func_429(15399, -1) || func_429(41804, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_011_M"));
			
				case joaat("MP_Gunrunning_Award_012_M"):
				case joaat("MP_Gunrunning_Award_012_F"):
					if (func_429(15404, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_012_M"));
			
				case joaat("MP_Gunrunning_Award_013_M"):
				case joaat("MP_Gunrunning_Award_013_F"):
					if (func_415(209, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_013_M"));
			
				case joaat("MP_Gunrunning_Award_014_M"):
				case joaat("MP_Gunrunning_Award_014_F"):
					if (func_429(15392, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_014_M"));
			
				case joaat("MP_Gunrunning_Award_015_M"):
				case joaat("MP_Gunrunning_Award_015_F"):
					if (func_429(15390, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_015_M"));
			
				case joaat("MP_Gunrunning_Award_016_M"):
				case joaat("MP_Gunrunning_Award_016_F"):
					if (func_429(15402, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_016_M"));
			
				case joaat("MP_Gunrunning_Award_017_M"):
				case joaat("MP_Gunrunning_Award_017_F"):
					if (func_429(15416, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_017_M"));
			
				case joaat("MP_Gunrunning_Award_018_M"):
				case joaat("MP_Gunrunning_Award_018_F"):
					if (func_415(209, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Gunrunning_Award_018_M"));
			}
			break;
	
		case joaat("mpBiker_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Biker_Tee_022_M"):
				case joaat("MP_Biker_Tee_022_F"):
					if (func_429(9366, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_022_M"));
			
				case joaat("MP_Biker_Tee_023_M"):
				case joaat("MP_Biker_Tee_023_F"):
					if (func_429(9367, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_023_M"));
			
				case joaat("MP_Biker_Tee_024_M"):
				case joaat("MP_Biker_Tee_024_F"):
					if (func_429(9369, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_024_M"));
			
				case joaat("MP_Biker_Tee_025_M"):
				case joaat("MP_Biker_Tee_025_F"):
					if (func_429(9368, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_025_M"));
			
				case joaat("MP_Biker_Tee_047_M"):
				case joaat("MP_Biker_Tee_047_F"):
					if (func_429(9365, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_047_M"));
			
				case joaat("MP_Biker_Tee_048_M"):
				case joaat("MP_Biker_Tee_048_F"):
					if (func_429(9364, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_048_M"));
			
				case joaat("MP_Biker_Tee_049_M"):
				case joaat("MP_Biker_Tee_049_F"):
					if (func_429(27078, -1))
						return false;
				
					if (func_429(9363, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_049_M"));
			
				case joaat("MP_Biker_Tee_050_M"):
				case joaat("MP_Biker_Tee_050_F"):
					if (func_429(9362, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_050_M"));
			
				case joaat("MP_Biker_Tee_051_M"):
				case joaat("MP_Biker_Tee_051_F"):
					if (func_429(9370, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_051_M"));
			
				case joaat("MP_Biker_Tee_052_M"):
				case joaat("MP_Biker_Tee_052_F"):
					if (func_429(9371, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_052_M"));
			
				case joaat("MP_Biker_Tee_053_M"):
				case joaat("MP_Biker_Tee_053_F"):
					if (func_429(9372, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_053_M"));
			
				case joaat("MP_Biker_Tee_054_M"):
				case joaat("MP_Biker_Tee_054_F"):
					if (func_429(9373, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_054_M"));
			
				case joaat("MP_Biker_Tee_055_M"):
				case joaat("MP_Biker_Tee_055_F"):
					if (func_429(9374, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Tee_055_M"));
			
				case joaat("MP_Biker_Award_000_M"):
				case joaat("MP_Biker_Award_000_F"):
					if (func_429(9384, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_000_M"));
			
				case joaat("MP_Biker_Award_001_M"):
				case joaat("MP_Biker_Award_001_F"):
					if (func_429(9385, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_Biker_Award_001_M"));
			}
			break;
	
		case joaat("mpExecutive_overlays"):
			switch (iParam1)
			{
				case joaat("MP_exec_prizes_015_M"):
				case joaat("MP_exec_prizes_015_F"):
					if (func_429(7551, -1) || func_76(3792, -1) >= Global_262145.f_16976)
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_015_M"));
			
				case joaat("MP_exec_prizes_000_M"):
				case joaat("MP_exec_prizes_000_F"):
					if (func_429(7467, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_000_M"));
			
				case joaat("MP_exec_prizes_001_M"):
				case joaat("MP_exec_prizes_001_F"):
					if (func_429(7468, -1))
						return false;
				
					if (iParam1 == joaat("MP_exec_prizes_001_M"))
						if (func_429(27083, -1))
							return false;
					else if (func_429(27086, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_001_M"));
			
				case joaat("MP_exec_prizes_002_M"):
				case joaat("MP_exec_prizes_002_F"):
					if (func_429(7469, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_002_M"));
			
				case joaat("MP_exec_prizes_003_M"):
				case joaat("MP_exec_prizes_003_F"):
					if (func_429(7470, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_003_M"));
			
				case joaat("MP_exec_prizes_004_M"):
				case joaat("MP_exec_prizes_004_F"):
					if (func_429(7471, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_004_M"));
			
				case joaat("MP_exec_prizes_005_M"):
				case joaat("MP_exec_prizes_005_F"):
					if (func_429(7472, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_005_M"));
			
				case joaat("MP_exec_prizes_006_M"):
				case joaat("MP_exec_prizes_006_F"):
					if (func_429(7473, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_006_M"));
			
				case joaat("MP_exec_prizes_007_M"):
				case joaat("MP_exec_prizes_007_F"):
					if (func_429(7474, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_007_M"));
			
				case joaat("MP_exec_prizes_008_M"):
				case joaat("MP_exec_prizes_008_F"):
					if (func_429(7475, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_008_M"));
			
				case joaat("MP_exec_prizes_009_M"):
				case joaat("MP_exec_prizes_009_F"):
					if (func_429(7476, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_009_M"));
			
				case joaat("MP_exec_prizes_010_M"):
				case joaat("MP_exec_prizes_010_F"):
					if (func_429(7477, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_010_M"));
			
				case joaat("MP_exec_prizes_011_M"):
				case joaat("MP_exec_prizes_011_F"):
					if (func_429(7478, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_011_M"));
			
				case joaat("MP_exec_prizes_012_M"):
				case joaat("MP_exec_prizes_012_F"):
					if (func_429(7479, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_012_M"));
			
				case joaat("MP_exec_prizes_013_M"):
				case joaat("MP_exec_prizes_013_F"):
					if (func_429(7480, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_013_M"));
			
				case joaat("MP_exec_prizes_014_M"):
				case joaat("MP_exec_prizes_014_F"):
					if (func_429(7481, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_exec_prizes_014_M"));
			}
			break;
	
		case joaat("mpHalloween_overlays"):
			switch (iParam1)
			{
				case joaat("HW_Tee_000_F"):
				case joaat("HW_Tee_000_M"):
					if (func_429(4260, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_000_M"));
			
				case joaat("HW_Tee_001_F"):
				case joaat("HW_Tee_001_M"):
					if (func_429(4257, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_001_M"));
			
				case joaat("HW_Tee_002_F"):
				case joaat("HW_Tee_002_M"):
					if (func_429(4269, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_002_M"));
			
				case joaat("HW_Tee_003_F"):
				case joaat("HW_Tee_003_M"):
					if (func_429(4261, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_003_M"));
			
				case joaat("HW_Tee_004_F"):
				case joaat("HW_Tee_004_M"):
					if (func_429(4259, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_004_M"));
			
				case joaat("HW_Tee_005_F"):
				case joaat("HW_Tee_005_M"):
					if (func_429(4268, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_005_M"));
			
				case joaat("HW_Tee_006_F"):
				case joaat("HW_Tee_006_M"):
					if (func_429(4265, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_006_M"));
			
				case joaat("HW_Tee_007_F"):
				case joaat("HW_Tee_007_M"):
					if (func_429(4258, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_007_M"));
			
				case joaat("HW_Tee_008_F"):
				case joaat("HW_Tee_008_M"):
					if (func_429(4264, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_008_M"));
			
				case joaat("HW_Tee_009_F"):
				case joaat("HW_Tee_009_M"):
					if (func_429(4267, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_009_M"));
			
				case joaat("HW_Tee_010_F"):
				case joaat("HW_Tee_010_M"):
					if (func_429(4262, -1))
						return false;
				
					if (func_429(27079, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_010_M"));
			
				case joaat("HW_Tee_011_F"):
				case joaat("HW_Tee_011_M"):
					if (func_429(4263, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_011_M"));
			
				case joaat("HW_Tee_012_F"):
				case joaat("HW_Tee_012_M"):
					if (func_429(4266, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("HW_Tee_012_M"));
			}
			break;
	
		case joaat("mpLowrider_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Bennys_000_M"):
				case joaat("MP_Bennys_001_M"):
					if (func_76(2934, -1) > 0)
						return false;
				
					if (iParam1 == joaat("MP_Bennys_001_M"))
						if (func_429(27068, -1))
							return false;
				
					return !func_425(iParam2, iParam1, true);
			
				case joaat("MP_Bennys_000_F"):
				case joaat("MP_Bennys_001_F"):
					if (func_76(2934, -1) > 0)
						return false;
				
					if (iParam1 == joaat("MP_Bennys_001_F"))
						if (func_429(27068, -1))
							return false;
				
					return !func_425(iParam2, iParam1, false);
			}
			break;
	
		case joaat("mpxmas_604490_overlays"):
			switch (iParam1)
			{
				case joaat("MP_IHeartLC_000_M"):
				case joaat("MP_IHeartLC_001_F"):
					if (func_429(113, -1))
						return false;
				
					return !func_425(iParam2, iParam1, iParam1 == joaat("MP_IHeartLC_000_M"));
			}
			break;
	
		case joaat("mpHeist_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Award_M_Tshirt_004"):
				case joaat("MP_Award_M_Tshirt_005"):
				case joaat("MP_Award_M_Tshirt_006"):
				case joaat("MP_Award_M_Tshirt_007"):
				case joaat("MP_Award_M_Tshirt_008"):
				case joaat("MP_Award_M_Tshirt_009"):
				case joaat("MP_Award_M_Tshirt_010"):
				case joaat("MP_Award_M_Tshirt_011"):
				case joaat("MP_Award_M_Tshirt_012"):
				case joaat("MP_Award_M_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_M_Tshirt_004"))
					{
						if (func_429(27082, -1))
							return false;
					
						if (func_429(3770, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_005"))
					{
						if (func_429(3771, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_006"))
					{
						if (func_429(3772, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_007"))
					{
						if (func_429(3773, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_008"))
					{
						if (func_429(3774, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_009"))
					{
						if (func_429(3775, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_010"))
					{
						if (func_429(3776, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_011"))
					{
						if (func_429(3777, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_012"))
					{
						if (func_429(3778, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_M_Tshirt_013"))
					{
						if (func_429(3779, -1) || func_429(27084, -1))
							return false;
					}
				
					return !func_425(iParam2, iParam1, true);
			
				case joaat("MP_Award_F_Tshirt_004"):
				case joaat("MP_Award_F_Tshirt_005"):
				case joaat("MP_Award_F_Tshirt_006"):
				case joaat("MP_Award_F_Tshirt_007"):
				case joaat("MP_Award_F_Tshirt_008"):
				case joaat("MP_Award_F_Tshirt_009"):
				case joaat("MP_Award_F_Tshirt_010"):
				case joaat("MP_Award_F_Tshirt_011"):
				case joaat("MP_Award_F_Tshirt_012"):
				case joaat("MP_Award_F_Tshirt_013"):
					if (iParam1 == joaat("MP_Award_F_Tshirt_004"))
					{
						if (func_429(3770, -1))
							return false;
					
						if (func_429(27082, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_005"))
					{
						if (func_429(3771, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_006"))
					{
						if (func_429(3772, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_007"))
					{
						if (func_429(3773, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_008"))
					{
						if (func_429(3774, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_009"))
					{
						if (func_429(3775, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_010"))
					{
						if (func_429(3776, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_011"))
					{
						if (func_429(3777, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_012"))
					{
						if (func_429(3778, -1))
							return false;
					}
					else if (iParam1 == joaat("MP_Award_F_Tshirt_013"))
					{
						if (func_429(3779, -1) || func_429(27083, -1))
							return false;
					}
				
					return !func_425(iParam2, iParam1, false);
			
				case joaat("MP_Elite_M_Tshirt"):
				case joaat("MP_Elite_M_Tshirt_1"):
				case joaat("MP_Elite_F_Tshirt"):
				case joaat("MP_Elite_F_Tshirt_1"):
					if (func_429(3765, -1) && func_429(3766, -1) && func_429(3767, -1) && func_429(3768, -1) && func_429(3769, -1))
						return false;
				
					return true;
			}
			break;
	
		case joaat("mpIndependence_overlays"):
			switch (iParam1)
			{
				case joaat("FM_Ind_M_Award_000"):
				case joaat("FM_Ind_F_Award_000"):
					return !func_429(3593, -1);
			}
		
			if (!Global_262145.f_8436 && !func_425(iParam2, iParam1, false))
				return true;
			break;
	
		case joaat("mpHipster_overlays"):
			switch (iParam1)
			{
				case 1443536758:
				case 1333229624:
				case -1665422117:
				case 1100930183:
				case -1595008258:
				case 94055115:
				case -627896761:
				case 1873477305:
					return true;
			
				case joaat("MP_Award_M_Tshirt_000"):
				case joaat("MP_Award_M_Tshirt_001"):
				case joaat("MP_Award_F_Tshirt_000"):
				case joaat("MP_Award_F_Tshirt_001"):
					return true;
			
				case 300677115:
				case 262692161:
				case -1684141219:
				case 390655118:
				case -479442624:
				case -542924311:
				case 1696910411:
				case -1259058037:
					return true;
			
				case joaat("MP_Award_M_Tshirt_002"):
				case joaat("MP_Award_M_Tshirt_003"):
				case joaat("MP_Award_F_Tshirt_002"):
				case joaat("MP_Award_F_Tshirt_003"):
					return true;
			
				case joaat("FM_Hip_M_Retro_010"):
				case joaat("FM_Hip_F_Retro_010"):
					return !func_415(152, -1) && !func_429(9440, -1);
			
				case joaat("FM_Hip_M_Retro_003"):
				case joaat("FM_Hip_F_Retro_003"):
					return !func_415(151, -1) && !func_429(9430, -1);
			
				case joaat("FM_Hip_M_Retro_000"):
				case joaat("FM_Hip_F_Retro_000"):
					return !func_409(iParam2, -1) && !func_429(9426, -1);
			
				case joaat("FM_Hip_M_Retro_001"):
				case joaat("FM_Hip_F_Retro_001"):
					return !func_409(iParam2, -1) && !func_429(9427, -1);
			
				case joaat("FM_Hip_M_Retro_002"):
				case joaat("FM_Hip_F_Retro_002"):
					return !func_409(iParam2, -1) && !func_429(9428, -1);
			
				case joaat("FM_Hip_M_Retro_004"):
				case joaat("FM_Hip_F_Retro_004"):
					return !func_409(iParam2, -1) && !func_429(9431, -1);
			
				case joaat("FM_Hip_M_Retro_005"):
				case joaat("FM_Hip_F_Retro_005"):
					return !func_409(iParam2, -1) && !func_429(9432, -1);
			
				case joaat("FM_Hip_M_Retro_006"):
				case joaat("FM_Hip_F_Retro_006"):
					return !func_409(iParam2, -1) && !func_429(9433, -1);
			
				case joaat("FM_Hip_M_Retro_007"):
				case joaat("FM_Hip_F_Retro_007"):
					return !func_409(iParam2, -1) && !func_429(9439, -1);
			
				case joaat("FM_Hip_M_Retro_008"):
				case joaat("FM_Hip_F_Retro_008"):
					return !func_409(iParam2, -1) && !func_429(9434, -1);
			
				case joaat("FM_Hip_M_Retro_009"):
				case joaat("FM_Hip_F_Retro_009"):
					return !func_409(iParam2, -1) && !func_429(9435, -1);
			
				case joaat("FM_Hip_M_Retro_011"):
				case joaat("FM_Hip_F_Retro_011"):
					return !func_409(iParam2, -1) && !func_429(9436, -1);
			
				case joaat("FM_Hip_M_Retro_012"):
				case joaat("FM_Hip_F_Retro_012"):
					return !func_409(iParam2, -1) && !func_429(9429, -1);
			
				case joaat("FM_Hip_M_Retro_013"):
				case joaat("FM_Hip_F_Retro_013"):
					return !func_409(iParam2, -1) && !func_429(9437, -1);
			
				case joaat("FM_Rstar_M_Tshirt_000"):
				case joaat("FM_Rstar_M_Tshirt_001"):
				case joaat("FM_Rstar_M_Tshirt_002"):
				case joaat("FM_Rstar_F_Tshirt_000"):
				case joaat("FM_Rstar_F_Tshirt_001"):
				case joaat("FM_Rstar_F_Tshirt_002"):
					return !func_408();
			}
			break;
	
		case joaat("mpValentines_overlays"):
			if (!Global_262145.f_7131 && !func_409(iParam2, -1) && !Global_262145.f_12233)
				return true;
			break;
	
		case joaat("mpPilot_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Fli_M_Tshirt_000"):
				case joaat("MP_Fli_F_Tshirt_000"):
					return !func_429(3608, -1);
			}
			break;
	
		case joaat("mpLTS_overlays"):
			switch (iParam1)
			{
				case joaat("FM_LTS_M_Tshirt_000"):
				case joaat("FM_LTS_F_Tshirt_000"):
					return !func_429(3615, -1) && !func_429(9438, -1);
			}
			break;
	
		case joaat("mpLuxe_overlays"):
			if (iParam1 == joaat("MP_LUXE_VDG_006_F"))
				return true;
		
			switch (iParam1)
			{
				case joaat("MP_FAKE_DIS_000_M"):
				case joaat("MP_FAKE_DIS_000_F"):
					return !func_429(3783, -1);
			
				case joaat("MP_FAKE_DIS_001_M"):
				case joaat("MP_FAKE_DIS_001_F"):
					return !func_429(3784, -1);
			
				case joaat("MP_FAKE_DS_000_M"):
				case joaat("MP_FAKE_DS_000_F"):
					return !func_429(3785, -1);
			
				case joaat("MP_FAKE_ENEMA_000_M"):
				case joaat("MP_FAKE_ENEMA_000_F"):
					return !func_429(3786, -1);
			
				case joaat("MP_FAKE_LB_000_M"):
				case joaat("MP_FAKE_LB_000_F"):
					return !func_429(3787, -1);
			
				case joaat("MP_FAKE_LC_000_M"):
				case joaat("MP_FAKE_LC_000_F"):
					return !func_429(3788, -1);
			
				case joaat("MP_FAKE_SC_000_M"):
				case joaat("MP_FAKE_SC_000_F"):
					if (func_429(27081, -1))
						return false;
				
					return !func_429(3789, -1);
			
				case joaat("MP_FAKE_Vap_000_M"):
				case joaat("MP_FAKE_Vap_000_F"):
					return !func_429(3790, -1);
			
				case joaat("MP_FAKE_Per_000_M"):
				case joaat("MP_FAKE_Per_000_F"):
					return !func_429(3791, -1);
			
				case joaat("MP_FAKE_SN_000_M"):
				case joaat("MP_FAKE_SN_000_F"):
					return !func_429(3792, -1);
			
				case joaat("MP_FILM_000_F"):
				case joaat("MP_FILM_000_M"):
					if (iParam1 == joaat("MP_FILM_000_F"))
					{
						player = func_76(2444, -1);
					
						if (IS_BIT_SET(player, 0))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_000_M"))
					{
						player2 = func_76(2424, -1);
					
						if (IS_BIT_SET(player2, 18))
							return false;
					}
				
					return !func_429(3793, -1);
			
				case joaat("MP_FILM_001_F"):
				case joaat("MP_FILM_001_M"):
					if (iParam1 == joaat("MP_FILM_001_F"))
					{
						player3 = func_76(2444, -1);
					
						if (IS_BIT_SET(player3, 1))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_001_M"))
					{
						player4 = func_76(2424, -1);
					
						if (IS_BIT_SET(player4, 19))
							return false;
					}
				
					return !func_429(3794, -1);
			
				case joaat("MP_FILM_002_F"):
				case joaat("MP_FILM_002_M"):
					if (iParam1 == joaat("MP_FILM_002_F"))
					{
						player5 = func_76(2444, -1);
					
						if (IS_BIT_SET(player5, 2))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_002_M"))
					{
						player6 = func_76(2424, -1);
					
						if (IS_BIT_SET(player6, 20))
							return false;
					}
				
					return !func_429(3795, -1);
			
				case joaat("MP_FILM_003_F"):
				case joaat("MP_FILM_003_M"):
					if (iParam1 == joaat("MP_FILM_003_F"))
					{
						player7 = func_76(2444, -1);
					
						if (IS_BIT_SET(player7, 3))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_003_M"))
					{
						player8 = func_76(2424, -1);
					
						if (IS_BIT_SET(player8, 21))
							return false;
					}
				
					return !func_429(3796, -1);
			
				case joaat("MP_FILM_004_F"):
				case joaat("MP_FILM_004_M"):
					if (iParam1 == joaat("MP_FILM_004_F"))
					{
						player9 = func_76(2444, -1);
					
						if (IS_BIT_SET(player9, 4))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_004_M"))
					{
						player10 = func_76(2424, -1);
					
						if (IS_BIT_SET(player10, 22))
							return false;
					}
				
					return !func_429(3797, -1);
			
				case joaat("MP_FILM_005_F"):
				case joaat("MP_FILM_005_M"):
					if (iParam1 == joaat("MP_FILM_005_F"))
					{
						player11 = func_76(2444, -1);
					
						if (IS_BIT_SET(player11, 5))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_005_M"))
					{
						player12 = func_76(2424, -1);
					
						if (IS_BIT_SET(player12, 23))
							return false;
					}
				
					return !func_429(3798, -1);
			
				case joaat("MP_FILM_006_F"):
				case joaat("MP_FILM_006_M"):
					if (iParam1 == joaat("MP_FILM_006_F"))
					{
						player13 = func_76(2444, -1);
					
						if (IS_BIT_SET(player13, 6))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_006_M"))
					{
						player14 = func_76(2424, -1);
					
						if (IS_BIT_SET(player14, 24))
							return false;
					}
				
					return !func_429(3799, -1);
			
				case joaat("MP_FILM_007_F"):
				case joaat("MP_FILM_007_M"):
					if (iParam1 == joaat("MP_FILM_007_F"))
					{
						player15 = func_76(2444, -1);
					
						if (IS_BIT_SET(player15, 7))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_007_M"))
					{
						player16 = func_76(2424, -1);
					
						if (IS_BIT_SET(player16, 25))
							return false;
					}
				
					return !func_429(3800, -1);
			
				case joaat("MP_FILM_008_F"):
				case joaat("MP_FILM_008_M"):
					if (iParam1 == joaat("MP_FILM_008_F"))
					{
						player17 = func_76(2444, -1);
					
						if (IS_BIT_SET(player17, 8))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_008_M"))
					{
						player18 = func_76(2424, -1);
					
						if (IS_BIT_SET(player18, 26))
							return false;
					}
				
					return !func_429(3801, -1);
			
				case joaat("MP_FILM_009_F"):
				case joaat("MP_FILM_009_M"):
					if (iParam1 == joaat("MP_FILM_009_F"))
					{
						player19 = func_76(2444, -1);
					
						if (IS_BIT_SET(player19, 9))
							return false;
					}
					else if (iParam1 == joaat("MP_FILM_009_M"))
					{
						player20 = func_76(2424, -1);
					
						if (IS_BIT_SET(player20, 27))
							return false;
					}
				
					return !func_429(3802, -1);
			}
			break;
	
		case joaat("mpLuxe2_overlays"):
			switch (iParam1)
			{
				case joaat("MP_Luxe_Tat_030_M"):
				case joaat("MP_Luxe_Tat_031_M"):
					return true;
			
				case joaat("MP_Luxe_Tat_030_F"):
				case joaat("MP_Luxe_Tat_031_F"):
					return true;
			}
			break;
	
		case joaat("multiplayer_overlays"):
			switch (iParam1)
			{
				case joaat("MP_FM_OGA_000_m"):
				case joaat("MP_FM_OGA_001_m"):
				case joaat("MP_FM_OGA_002_m"):
				case joaat("MP_FM_OGA_003_m"):
				case joaat("MP_FM_OGA_000_f"):
				case joaat("MP_FM_OGA_001_f"):
				case joaat("MP_FM_OGA_002_f"):
				case joaat("MP_FM_OGA_003_f"):
					return !_IS_EXCLUSIVE_CONTENT_UNLOCKED();
			}
			break;
	}

	return false;
}

BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x17CE8
{
	var unk;

	if (Global_153246 == 2)
		return true;
	else if (Global_153246 == 3)
		return false;

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x5BC93955B6EEBC0B())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 2);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 4);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 6);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 2);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 4);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 6);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 0);
					unk_0xED11291F7127888E(unk);
				}
			
				return true;
			}
		}
	}

	if (unk_0x76CA59C648318506())
		if (IS_BIT_SET(unk_0x38640D2193CB547F(866), 0))
			return true;

	return false;
}

BOOL func_408() // Position - 0x17DA0
{
	return unk_0x087611B922B50F13(-1762644250);
}

BOOL func_409(int iParam0, Player plParam1) // Position - 0x17DB1
{
	int num;
	int num2;

	if (func_412(iParam0) == 14626)
		return false;

	num = func_411(iParam0, plParam1);
	num2 = iParam0;
	return IS_BIT_SET(num, func_410(num2));
}

int func_410(int iParam0) // Position - 0x17DE0
{
	return iParam0 % 32;
}

int func_411(int iParam0, Player plParam1) // Position - 0x17DED
{
	int num;

	num = func_76(func_412(iParam0), plParam1);
	return num;
}

int func_412(int iParam0) // Position - 0x17E05
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_414(num);

	if (func_175() == 0 || func_413() == 0 || func_175() == 999 && func_413() == 999)
	{
		switch (num2)
		{
			case 0:
				return 1039;
		
			case 1:
				return 1040;
		
			case 2:
				return 1041;
		
			case 3:
				return 1042;
		
			case 4:
				return 1043;
		
			case 5:
				return 1503;
		
			case 6:
				return 1758;
		
			case 7:
				return 1952;
		
			case 8:
				return 1953;
		
			case 9:
				return 1954;
		
			case 10:
				return 1955;
		
			case 11:
				return 1956;
		
			case 12:
				return 1957;
		
			case 13:
				return 2424;
		
			case 14:
				return 2444;
		
			case 15:
				return 2447;
		
			case 16:
				return 2450;
		
			case 17:
				return 2614;
		
			case 18:
				return 2617;
		
			case 19:
				return 2620;
		
			case 20:
				return 3786;
		
			case 21:
				return 3789;
		
			case 22:
				return 3864;
		
			case 23:
				return 3867;
		
			case 24:
				return 3870;
		
			case 25:
				return 3873;
		
			case 26:
				return 5364;
		
			case 27:
				return 5367;
		
			case 28:
				return 5469;
		
			case 29:
				return 5472;
		
			case 30:
				return 6431;
		
			case 31:
				return 6434;
		
			case 32:
				return 7255;
		
			case 33:
				return 7258;
		
			case 34:
				return 7261;
		
			case 35:
				return 7970;
		
			case 36:
				return 7973;
		
			case 37:
				return 7976;
		
			case 38:
				return 7979;
		
			case 39:
				return 8501;
		
			case 40:
				return 8504;
		
			case 41:
				return 8507;
		
			case 42:
				return 8510;
		
			case 43:
				return &func_57;
		
			case 44:
				return 8909;
		
			case 45:
				return 8912;
		
			case 46:
				return 10288;
		
			case 47:
				return 10291;
		
			case 48:
				return 10414;
		
			case 49:
				return 10417;
		
			case 50:
				return 11826;
		
			case 51:
				return 11829;
		
			case 52:
				return 12222;
		
			case 53:
				return 12225;
		}
	}

	return 14626;
}

int func_413() // Position - 0x18183
{
	return Global_32829;
}

int func_414(int iParam0) // Position - 0x1818E
{
	return iParam0 / 32;
}

BOOL func_415(int iParam0, Player plParam1) // Position - 0x1819B
{
	var unk;
	BOOL num;

	unk = func_416(iParam0, plParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return false;
}

int func_416(int iParam0, Player plParam1) // Position - 0x181BF
{
	return unk_0xD69CE161FE614531(2, iParam0, func_75(plParam1));
}

BOOL func_417(BOOL bParam0, BOOL bParam1) // Position - 0x181D4
{
	int num;
	int i;
	int num2;

	num = 20 - 1;

	if (bParam1)
		num = 13;

	for (i = 0; i < num; i = i + 1)
	{
		num2 = i;
	
		if (!func_419(num2) || bParam0)
			if (!func_418(unk_0x259BE71D8A81D4FA(), num2, 0))
				return false;
	}

	return true;
}

BOOL func_418(Player plParam0, int iParam1, int iParam2) // Position - 0x18228
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		num = iParam1;
	
		switch (iParam2)
		{
			case 0:
				return IS_BIT_SET(Global_1845263[plParam0 /*877*/].f_267.f_437, num);
		}
	}

	return true;
}

BOOL func_419(int iParam0) // Position - 0x18263
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return true;
	}

	return false;
}

BOOL func_420(int iParam0, Player plParam1) // Position - 0x1828C
{
	var unk;
	BOOL num;

	unk = func_421(iParam0, plParam1);

	if (unk_0xF249567F2E83E093(unk, &num, -1))
		return num;

	return false;
}

var func_421(int iParam0, Player plParam1) // Position - 0x182B0
{
	return unk_0xD69CE161FE614531(10, iParam0, func_75(plParam1));
}

Hash func_422(int iParam0, int iParam1, int iParam2) // Position - 0x182C6
{
	iParam2 == 0;

	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 30;
			
				case 4:
					return 60;
			
				case 5:
					return 120;
			
				default:
					break;
			}
			break;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 2;
			
				case 3:
					return 3;
			
				case 4:
					return 4;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 100;
			
				case 4:
					return 200;
			
				case 5:
					return 500;
			
				default:
					break;
			}
			break;
	
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000;
			
				case 3:
					return 10000;
			
				case 4:
					return 25000;
			
				case 5:
					return 50000;
			
				default:
					break;
			}
			break;
	
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 3;
			
				case 3:
					return 5;
			
				case 4:
					return 7;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 250;
			
				case 4:
					return 500;
			
				case 5:
					return 1000;
			
				default:
					break;
			}
			break;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 144:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 145:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 146:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 147:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 148:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 149:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 151:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 25;
			
				default:
					break;
			}
			break;
	
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 152:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25519;
			
				case 3:
					return Global_262145.f_25520;
			
				case 4:
					return Global_262145.f_25521;
			
				case 5:
					return Global_262145.f_25522;
			
				default:
					break;
			}
			break;
	
		case 153:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25519;
			
				case 3:
					return Global_262145.f_25520;
			
				case 4:
					return Global_262145.f_25521;
			
				case 5:
					return Global_262145.f_25522;
			
				default:
					break;
			}
			break;
	
		case 154:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25519;
			
				case 3:
					return Global_262145.f_25520;
			
				case 4:
					return Global_262145.f_25521;
			
				case 5:
					return Global_262145.f_25522;
			
				default:
					break;
			}
			break;
	
		case 155:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_25519;
			
				case 3:
					return Global_262145.f_25520;
			
				case 4:
					return Global_262145.f_25521;
			
				case 5:
					return Global_262145.f_25522;
			
				default:
					break;
			}
			break;
	
		case 156:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 3;
			
				case 4:
					return 5;
			
				case 5:
					return 10;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 100000;
			
				case 3:
					return 250000;
			
				case 4:
					return 500000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000;
			
				case 3:
					return 3000;
			
				case 4:
					return 15000;
			
				case 5:
					return 55000;
			
				default:
					break;
			}
			break;
	
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 15;
			
				case 5:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 25000;
			
				case 3:
					return 50000;
			
				case 4:
					return 75000;
			
				case 5:
					return 100000;
			
				default:
					break;
			}
			break;
	
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 20;
			
				case 4:
					return 30;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28961;
			
				case 3:
					return Global_262145.f_28962;
			
				case 4:
					return Global_262145.f_28963;
			
				case 5:
					return Global_262145.f_28964;
			
				default:
					break;
			}
			break;
	
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_29128;
			
				case 3:
					return Global_262145.f_29129;
			
				case 4:
					return Global_262145.f_29130;
			
				case 5:
					return Global_262145.f_29131;
			
				default:
					break;
			}
			break;
	
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_29162;
			
				case 3:
					return Global_262145.f_29163;
			
				case 4:
					return Global_262145.f_29164;
			
				case 5:
					return Global_262145.f_29165;
			
				default:
					break;
			}
			break;
	
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_29166;
			
				case 3:
					return Global_262145.f_29167;
			
				case 4:
					return Global_262145.f_29168;
			
				case 5:
					return Global_262145.f_29169;
			
				default:
					break;
			}
			break;
	
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_28857;
			
				case 3:
					return Global_262145.f_28858;
			
				case 4:
					return Global_262145.f_28859;
			
				case 5:
					return Global_262145.f_28860;
			
				default:
					break;
			}
			break;
	
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return Global_262145.f_29132;
			
				case 3:
					return Global_262145.f_29133;
			
				case 4:
					return Global_262145.f_29134;
			
				case 5:
					return Global_262145.f_29135;
			
				default:
					break;
			}
			break;
	
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 50000;
			
				case 3:
					return 250000;
			
				case 4:
					return 750000;
			
				case 5:
					return 1000000;
			
				default:
					break;
			}
			break;
	
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1000000;
			
				case 3:
					return 5000000;
			
				case 4:
					return 10000000;
			
				case 5:
					return 20000000;
			
				default:
					break;
			}
			break;
	
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 40;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 30;
			
				case 3:
					return 60;
			
				case 4:
					return 120;
			
				case 5:
					return 240;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 10;
			
				case 3:
					return 25;
			
				case 4:
					return 50;
			
				case 5:
					return 100;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 25;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 1;
			
				case 3:
					return 2;
			
				case 4:
					return 3;
			
				case 5:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 15;
			
				case 4:
					return 30;
			
				case 5:
					return 60;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 250000;
			
				case 3:
					return 1000000;
			
				case 4:
					return 2500000;
			
				case 5:
					return 5000000;
			
				default:
					break;
			}
			break;
	
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 0;
			
				case 2:
					return 5;
			
				case 3:
					return 10;
			
				case 4:
					return 20;
			
				case 5:
					return 50;
			
				default:
					break;
			}
			break;
	}

	return 999;
}

Hash func_423(int iParam0, Player plParam1) // Position - 0x1B1A6
{
	var unk;
	Hash num;

	unk = func_424(iParam0, plParam1);

	if (unk_0xDF7F16323520B858(unk, &num, -1))
		return num;

	return 0;
}

var func_424(int iParam0, Player plParam1) // Position - 0x1B1CA
{
	return unk_0xD69CE161FE614531(8, iParam0, func_75(plParam1));
}

BOOL func_425(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1B1E0
{
	if (iParam0 == -1)
		if (bParam2)
			iParam0 = func_428(iParam1, 3);
		else
			iParam0 = func_428(iParam1, 4);

	return func_409(iParam0, -1) || func_426(iParam0, -1);
}

BOOL func_426(int iParam0, Player plParam1) // Position - 0x1B21C
{
	return func_429(func_427(iParam0), plParam1);
}

int func_427(int iParam0) // Position - 0x1B230
{
	int num;
	int num2;
	int num3;

	if (iParam0 <= 480)
	{
		num2 = iParam0;
		num = 3112 + num2;
	}
	else if (iParam0 < 864)
	{
		num2 = iParam0 - 480;
		num = 6029 + num2;
	}
	else if (iParam0 < 1248)
	{
		num2 = iParam0 - 864;
		num = 15562 + num2;
	}
	else if (iParam0 < 1372)
	{
		num2 = iParam0 - 1248;
		num = 28355 + num2;
	}
	else if (iParam0 < 1500)
	{
		num2 = iParam0 - 1372;
		num = 30355 + num2;
	}
	else if (iParam0 < 1564)
	{
		num2 = iParam0 - 1500;
		num = 32411 + num2;
	}
	else if (iParam0 < 1628)
	{
		num2 = iParam0 - 1564;
		num = 41251 + num2;
	}
	else if (iParam0 < 1756)
	{
		num2 = iParam0 - 1628;
		num = 51059 + num2;
	}
	else
	{
		num3 = iParam0;
	}

	return num;
}

int func_428(int iParam0, int iParam1) // Position - 0x1B314
{
	int num;

	num = unk_0xE80EBC1CABE1C8A7(iParam1, -1, iParam0);

	if (num != -1)
		return 129 + num;

	return -1;
}

BOOL func_429(int iParam0, Player plParam1) // Position - 0x1B336
{
	if (plParam1 == -1)
		plParam1 = func_30();

	return unk_0xA6D3C21763E25496(iParam0, plParam1);
}

BOOL func_430(Vehicle veParam0, var uParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1B352
{
	int num;
	int num2;

	num = unk_0x4B423FAA24E8ABF0(veParam0);

	if (iParam4 == 0)
	{
		num2 = func_432(num, uParam1, iParam4);
		iParam4 = unk_0x70E57E9927B6BA58(func_431(num2));
	}

	if (iParam3 == joaat("mpDummy"))
		return false;

	switch (iParam4)
	{
		case joaat("CHEST_FULL"):
		case joaat("CHEST_LEFT"):
		case joaat("CHEST_MID"):
		case joaat("CHEST_RIGHT"):
		case joaat("CHEST_STOM"):
		case joaat("CHEST_STOM_FULL"):
		case joaat("SIDE_RIGHT"):
		case joaat("TORSO_SIDE_LEFT"):
		case joaat("TORSO_SIDE_RIGHT"):
		case -1238079313:
		case joaat("STOMACH_FULL"):
		case joaat("STOMACH_LEFT"):
		case joaat("STOMACH_LOWER_LEFT"):
		case joaat("STOMACH_LOWER_RIGHT"):
		case joaat("STOMACH_MID"):
		case joaat("STOMACH_RIGHT"):
			if (bParam5)
				return false;
		
			if (iParam4 == joaat("CHEST_FULL") || iParam4 == joaat("CHEST_MID") && num == joaat("MP_F_Freemode_01") || iParam4 == joaat("CHEST_RIGHT") || iParam4 == joaat("CHEST_STOM") || iParam4 == joaat("CHEST_STOM_FULL"))
			{
				if (!bParam6)
				{
					if (Global_4541313 == -1)
					{
						if (!Global_101444.f_1578)
						{
							if (func_440(13, -1))
							{
								return false;
							}
							else if (func_440(14, -1))
							{
								return false;
							}
							else if (func_440(15, -1))
							{
								return false;
							}
							else if (func_440(16, -1))
							{
								return false;
							}
							else if (func_440(71, -1))
							{
								return false;
							}
							else if (func_440(72, -1))
							{
							}
						}
					}
					else if (Global_4541313 == 13)
					{
						return false;
					}
					else if (Global_4541313 == 14)
					{
						return false;
					}
					else if (Global_4541313 == 15)
					{
						return false;
					}
					else if (Global_4541313 == 16)
					{
						return false;
					}
					else if (Global_4541313 == 71)
					{
						return false;
					}
					else if (Global_4541313 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("CHEST_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4541313 == -1)
					{
						if (!Global_101444.f_1578)
						{
							if (func_440(13, -1))
							{
								return false;
							}
							else if (func_440(14, -1))
							{
								return false;
							}
							else if (func_440(15, -1))
							{
								return false;
							}
							else if (func_440(16, -1))
							{
								return false;
							}
							else if (func_440(71, -1))
							{
								return false;
							}
							else if (func_440(72, -1))
							{
							}
						}
					}
					else if (Global_4541313 == 13)
					{
						return false;
					}
					else if (Global_4541313 == 14)
					{
						return false;
					}
					else if (Global_4541313 == 15)
					{
						return false;
					}
					else if (Global_4541313 == 16)
					{
						return false;
					}
					else if (Global_4541313 == 71)
					{
						return false;
					}
					else if (Global_4541313 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("STOMACH_FULL") || iParam4 == joaat("STOMACH_MID") || iParam4 == joaat("STOMACH_LEFT"))
			{
				if (!bParam6)
				{
					if (Global_4541313 == -1)
					{
						if (!Global_101444.f_1578)
						{
							if (func_440(13, -1))
							{
							}
							else if (func_440(14, -1))
							{
								return false;
							}
							else if (func_440(15, -1))
							{
								return false;
							}
							else if (func_440(16, -1))
							{
							}
							else if (func_440(71, -1))
							{
								return false;
							}
							else if (func_440(72, -1))
							{
							}
						}
					}
					else if (Global_4541313 == 13)
					{
					}
					else if (Global_4541313 == 14)
					{
						return false;
					}
					else if (Global_4541313 == 15)
					{
						return false;
					}
					else if (Global_4541313 == 16)
					{
					}
					else if (Global_4541313 == 71)
					{
						return false;
					}
					else if (Global_4541313 == 72)
					{
					}
				}
			}
			else if (iParam4 == joaat("BACK_UPPER"))
			{
				if (!bParam6)
				{
					if (Global_4541313 == -1)
					{
						if (!Global_101444.f_1578)
						{
							if (func_440(13, -1))
							{
							}
							else if (func_440(14, -1))
							{
							}
							else if (func_440(15, -1))
							{
							}
							else if (func_440(16, -1))
							{
							}
							else if (func_440(71, -1))
							{
							}
							else if (func_440(72, -1))
							{
							}
						}
					}
					else if (Global_4541313 == 13)
					{
					}
					else if (Global_4541313 == 14)
					{
					}
					else if (Global_4541313 == 15)
					{
					}
					else if (Global_4541313 == 16)
					{
					}
					else if (Global_4541313 == 71)
					{
					}
					else if (Global_4541313 == 72)
					{
					}
				}
			}
			break;
	
		case joaat("BACK_1"):
		case joaat("BACK_FULL"):
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
		case joaat("BACK_FULL_SHORT"):
		case joaat("BACK_LOWER"):
		case joaat("BACK_MID"):
		case joaat("BACK_UPPER"):
		case joaat("BACK_UPPER_LEFT"):
		case joaat("BACK_UPPER_RIGHT"):
			if (bParam8)
				return false;
		
			if (!bParam6)
			{
				if (Global_4541313 == -1)
				{
					if (!Global_101444.f_1578)
					{
						if (func_440(13, -1))
						{
						}
						else if (func_440(14, -1))
						{
						}
						else if (func_440(15, -1))
						{
							return false;
						}
						else if (func_440(16, -1))
						{
						}
						else if (func_440(71, -1))
						{
						}
						else if (func_440(72, -1))
						{
							return false;
						}
					}
				}
				else if (Global_4541313 == 13)
				{
				}
				else if (Global_4541313 == 14)
				{
				}
				else if (Global_4541313 == 15)
				{
					return false;
				}
				else if (Global_4541313 == 16)
				{
				}
				else if (Global_4541313 == 71)
				{
				}
				else if (Global_4541313 == 72)
				{
					return false;
				}
			}
			break;
	
		case joaat("crewLogo"):
			if (bParam8)
				if (num == joaat("MP_M_Freemode_01"))
					if (Global_4541313 == -1)
						if (!Global_101444.f_1578)
							if (func_440(15, -1))
								return false;
					else if (Global_4541313 == 15)
						return false;
		
			if (bParam6)
				return false;
		
			if (bParam5)
			{
				if (Global_4541313 == -1)
				{
					if (!Global_101444.f_1578)
					{
						if (func_440(13, -1))
						{
							return false;
						}
						else if (func_440(14, -1))
						{
							return false;
						}
						else if (func_440(15, -1))
						{
							if (!unk_0x1B79E937E91F40C3(uParam1, "TAT_FMM_CLB" /*Crew Emblem Back*/))
								return false;
						}
						else if (func_440(16, -1))
						{
						}
						else if (func_440(71, -1))
						{
						}
						else if (func_440(72, -1))
						{
						}
					}
				}
				else if (Global_4541313 == 13)
				{
					return false;
				}
				else if (Global_4541313 == 14)
				{
					return false;
				}
				else if (Global_4541313 == 15)
				{
					if (!unk_0x1B79E937E91F40C3(uParam1, "TAT_FMM_CLB" /*Crew Emblem Back*/))
						return false;
				}
				else if (Global_4541313 == 16)
				{
				}
				else if (Global_4541313 == 71)
				{
				}
				else if (Global_4541313 == 72)
				{
				}
			}
			break;
	
		case 0:
		case 2:
		case joaat("rank"):
			if (bParam5)
			{
				if (!unk_0xD6F9DEE4765092A9(uParam1))
				{
					switch (unk_0x70E57E9927B6BA58(uParam1))
					{
						case joaat("TAT_FM_011"):
						case joaat("TAT_FM_012"):
						case joaat("TAT_FM_019"):
						case joaat("TAT_FM_020"):
						case joaat("TAT_FM_021"):
						case joaat("TAT_FM_218"):
						case joaat("TAT_FM_219"):
						case joaat("TAT_FM_220"):
						case joaat("TAT_FM_225"):
						case joaat("TAT_FM_226"):
						case joaat("TAT_FM_230"):
						case joaat("TAT_FM_233"):
						case joaat("TAT_FM_235"):
						case joaat("TAT_FM_237"):
						case joaat("TAT_FM_245"):
							return false;
					}
				}
			}
		
			if (num == joaat("MP_M_Freemode_01"))
			{
			}
			else if (num == joaat("MP_F_Freemode_01"))
			{
				if (!bParam6)
				{
					if (Global_4541313 == -1)
					{
						if (!Global_101444.f_1578)
						{
							if (func_440(13, -1))
							{
							}
							else if (func_440(14, -1))
							{
							}
							else if (func_440(15, -1))
							{
							}
							else if (func_440(16, -1))
							{
							}
							else if (func_440(71, -1))
							{
							}
							else if (func_440(72, -1))
							{
							}
						}
					}
					else if (Global_4541313 == 13)
					{
						return false;
					}
					else if (Global_4541313 == 14)
					{
					}
					else if (Global_4541313 == 15)
					{
						return false;
					}
					else if (Global_4541313 == 16)
					{
					}
					else if (Global_4541313 == 71)
					{
					}
					else if (Global_4541313 == 72)
					{
					}
				}
			}
			break;
	
		case joaat("torsoDecal"):
			if (bParam7)
				return false;
			break;
	}

	return true;
}

char* func_431(int iParam0) // Position - 0x1BB7A
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
	
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
	
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
	
		case 3:
			return "ARM_LEFT_LOWER_INNER";
	
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
	
		case 5:
			return "ARM_LEFT_WRIST";
	
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
	
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
	
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
	
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
	
		case 10:
			return "ARM_LEFT_SHOULDER";
	
		case 11:
			return "ARM_LEFT_ELBOW";
	
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
	
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
	
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
	
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
	
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
	
		case 17:
			return "ARM_RIGHT_WRIST";
	
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
	
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
	
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
	
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
	
		case 22:
			return "ARM_RIGHT_SHOULDER";
	
		case 23:
			return "ARM_RIGHT_ELBOW";
	
		case 24:
			return "HAND_LEFT";
	
		case 25:
			return "HAND_RIGHT";
	
		case 26:
			return "BACK_FULL";
	
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
	
		case 28:
			return "BACK_FULL_SHORT";
	
		case 29:
			return "BACK_MID";
	
		case 30:
			return "BACK_UPPER";
	
		case 31:
			return "BACK_UPPER_LEFT";
	
		case 32:
			return "BACK_UPPER_RIGHT";
	
		case 33:
			return "BACK_LOWER";
	
		case 34:
			return "BACK_LOWER_LEFT";
	
		case 35:
			return "BACK_LOWER_MID";
	
		case 36:
			return "BACK_LOWER_RIGHT";
	
		case 37:
			return "CHEST_FULL";
	
		case 38:
			return "CHEST_STOM";
	
		case 39:
			return "CHEST_STOM_FULL";
	
		case 40:
			return "CHEST_LEFT";
	
		case 41:
			return "CHEST_UPPER_LEFT";
	
		case 42:
			return "CHEST_RIGHT";
	
		case 43:
			return "CHEST_UPPER_RIGHT";
	
		case 44:
			return "CHEST_MID";
	
		case 45:
			return "TORSO_SIDE_RIGHT";
	
		case 46:
			return "TORSO_SIDE_LEFT";
	
		case 47:
			return "STOMACH_FULL";
	
		case 48:
			return "STOMACH_UPPER";
	
		case 49:
			return "STOMACH_UPPER_LEFT";
	
		case 50:
			return "STOMACH_UPPER_RIGHT";
	
		case 51:
			return "STOMACH_LOWER";
	
		case 52:
			return "STOMACH_LOWER_LEFT";
	
		case 53:
			return "STOMACH_LOWER_RIGHT";
	
		case 54:
			return "STOMACH_LEFT";
	
		case 55:
			return "STOMACH_RIGHT";
	
		case 56:
			return "FACE";
	
		case 57:
			return "HEAD_LEFT";
	
		case 58:
			return "HEAD_RIGHT";
	
		case 59:
			return "NECK_FRONT";
	
		case 60:
			return "NECK_BACK";
	
		case 61:
			return "NECK_LEFT_FULL";
	
		case 62:
			return "NECK_LEFT_BACK";
	
		case 63:
			return "NECK_RIGHT_FULL";
	
		case 64:
			return "NECK_RIGHT_BACK";
	
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
	
		case 66:
			return "LEG_LEFT_FULL_FRONT";
	
		case 67:
			return "LEG_LEFT_FULL_BACK";
	
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
	
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
	
		case 70:
			return "LEG_LEFT_UPPER_BACK";
	
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
	
		case 72:
			return "LEG_LEFT_UPPER_INNER";
	
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
	
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
	
		case 75:
			return "LEG_LEFT_LOWER_BACK";
	
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
	
		case 77:
			return "LEG_LEFT_LOWER_INNER";
	
		case 78:
			return "LEG_LEFT_KNEE";
	
		case 79:
			return "LEG_LEFT_ANKLE";
	
		case 80:
			return "LEG_LEFT_CALF";
	
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
	
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
	
		case 83:
			return "LEG_RIGHT_FULL_BACK";
	
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
	
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
	
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
	
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
	
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
	
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
	
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
	
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
	
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
	
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
	
		case 94:
			return "LEG_RIGHT_KNEE";
	
		case 95:
			return "LEG_RIGHT_ANKLE";
	
		case 96:
			return "LEG_RIGHT_CALF";
	
		case 97:
			return "FOOT_LEFT";
	
		case 98:
			return "FOOT_RIGHT";
	}

	return "";
}

int func_432(int iParam0, var uParam1, int iParam2) // Position - 0x1C1BF
{
	switch (iParam2)
	{
		case joaat("crewLogo"):
		case joaat("hairOverlay"):
		case joaat("torsoDecal"):
			return -1;
	}

	switch (iParam2)
	{
		case joaat("ARM_LEFT_FULL_SLEEVE"):
			return 0;
	
		case joaat("ARM_LEFT_SHORT_SLEEVE"):
			return 1;
	
		case joaat("ARM_LEFT_LOWER_SLEEVE"):
			return 2;
	
		case joaat("ARM_LEFT_LOWER_INNER"):
			return 3;
	
		case joaat("ARM_LEFT_LOWER_OUTER"):
			return 4;
	
		case joaat("ARM_LEFT_WRIST"):
			return 5;
	
		case joaat("ARM_LEFT_UPPER_SLEEVE"):
			return 6;
	
		case joaat("ARM_LEFT_UPPER_TRICEP"):
			return 7;
	
		case joaat("ARM_LEFT_UPPER_SIDE"):
			return 8;
	
		case joaat("ARM_LEFT_UPPER_BICEP"):
			return 9;
	
		case joaat("ARM_LEFT_SHOULDER"):
			return 10;
	
		case joaat("ARM_LEFT_ELBOW"):
			return 11;
	
		case joaat("ARM_RIGHT_FULL_SLEEVE"):
			return 12;
	
		case joaat("ARM_RIGHT_SHORT_SLEEVE"):
			return 13;
	
		case joaat("ARM_RIGHT_LOWER_SLEEVE"):
			return 14;
	
		case joaat("ARM_RIGHT_LOWER_INNER"):
			return 15;
	
		case joaat("ARM_RIGHT_LOWER_OUTER"):
			return 16;
	
		case joaat("ARM_RIGHT_WRIST"):
			return 17;
	
		case joaat("ARM_RIGHT_UPPER_SLEEVE"):
			return 18;
	
		case joaat("ARM_RIGHT_UPPER_TRICEP"):
			return 19;
	
		case joaat("ARM_RIGHT_UPPER_SIDE"):
			return 20;
	
		case joaat("ARM_RIGHT_UPPER_BICEP"):
			return 21;
	
		case joaat("ARM_RIGHT_SHOULDER"):
			return 22;
	
		case joaat("ARM_RIGHT_ELBOW"):
			return 23;
	
		case joaat("HAND_LEFT"):
			return 24;
	
		case joaat("HAND_RIGHT"):
			return 25;
	
		case joaat("BACK_FULL"):
			return 26;
	
		case joaat("BACK_FULL_ARMS_FULL_BACK"):
			return 27;
	
		case joaat("BACK_FULL_SHORT"):
			return 28;
	
		case joaat("BACK_MID"):
			return 29;
	
		case joaat("BACK_UPPER"):
			return 30;
	
		case joaat("BACK_UPPER_LEFT"):
			return 31;
	
		case joaat("BACK_UPPER_RIGHT"):
			return 32;
	
		case joaat("BACK_LOWER"):
			return 33;
	
		case joaat("BACK_LOWER_LEFT"):
			return 34;
	
		case joaat("BACK_LOWER_MID"):
			return 35;
	
		case joaat("BACK_LOWER_RIGHT"):
			return 36;
	
		case joaat("CHEST_FULL"):
			return 37;
	
		case joaat("CHEST_STOM"):
			return 38;
	
		case joaat("CHEST_STOM_FULL"):
			return 39;
	
		case joaat("CHEST_LEFT"):
			return 40;
	
		case joaat("CHEST_UPPER_LEFT"):
			return 41;
	
		case joaat("CHEST_RIGHT"):
			return 42;
	
		case joaat("CHEST_UPPER_RIGHT"):
			return 43;
	
		case joaat("CHEST_MID"):
			return 44;
	
		case joaat("TORSO_SIDE_RIGHT"):
			return 45;
	
		case joaat("TORSO_SIDE_LEFT"):
			return 46;
	
		case joaat("STOMACH_FULL"):
			return 47;
	
		case joaat("STOMACH_UPPER"):
			return 48;
	
		case joaat("STOMACH_UPPER_LEFT"):
			return 49;
	
		case joaat("STOMACH_UPPER_RIGHT"):
			return 50;
	
		case joaat("STOMACH_LOWER"):
			return 51;
	
		case joaat("STOMACH_LOWER_LEFT"):
			return 52;
	
		case joaat("STOMACH_LOWER_RIGHT"):
			return 53;
	
		case joaat("STOMACH_LEFT"):
			return 54;
	
		case joaat("STOMACH_RIGHT"):
			return 55;
	
		case joaat("Face"):
			return 56;
	
		case joaat("HEAD_LEFT"):
			return 57;
	
		case joaat("HEAD_RIGHT"):
			return 58;
	
		case joaat("NECK_FRONT"):
			return 59;
	
		case joaat("NECK_BACK"):
			return 60;
	
		case joaat("NECK_LEFT_FULL"):
			return 61;
	
		case joaat("NECK_LEFT_BACK"):
			return 62;
	
		case joaat("NECK_RIGHT_FULL"):
			return 63;
	
		case joaat("NECK_RIGHT_BACK"):
			return 64;
	
		case joaat("LEG_LEFT_FULL_SLEEVE"):
			return 65;
	
		case joaat("LEG_LEFT_FULL_FRONT"):
			return 66;
	
		case joaat("LEG_LEFT_FULL_BACK"):
			return 67;
	
		case joaat("LEG_LEFT_UPPER_SLEEVE"):
			return 68;
	
		case joaat("LEG_LEFT_UPPER_FRONT"):
			return 69;
	
		case joaat("LEG_LEFT_UPPER_BACK"):
			return 70;
	
		case joaat("LEG_LEFT_UPPER_OUTER"):
			return 71;
	
		case joaat("LEG_LEFT_UPPER_INNER"):
			return 72;
	
		case joaat("LEG_LEFT_LOWER_SLEEVE"):
			return 73;
	
		case joaat("LEG_LEFT_LOWER_FRONT"):
			return 74;
	
		case joaat("LEG_LEFT_LOWER_BACK"):
			return 75;
	
		case joaat("LEG_LEFT_LOWER_OUTER"):
			return 76;
	
		case joaat("LEG_LEFT_LOWER_INNER"):
			return 77;
	
		case joaat("LEG_LEFT_KNEE"):
			return 78;
	
		case joaat("LEG_LEFT_ANKLE"):
			return 79;
	
		case joaat("LEG_LEFT_CALF"):
			return 80;
	
		case joaat("LEG_RIGHT_FULL_SLEEVE"):
			return 81;
	
		case joaat("LEG_RIGHT_FULL_FRONT"):
			return 82;
	
		case joaat("LEG_RIGHT_FULL_BACK"):
			return 83;
	
		case joaat("LEG_RIGHT_UPPER_SLEEVE"):
			return 84;
	
		case joaat("LEG_RIGHT_UPPER_FRONT"):
			return 85;
	
		case joaat("LEG_RIGHT_UPPER_BACK"):
			return 86;
	
		case joaat("LEG_RIGHT_UPPER_OUTER"):
			return 87;
	
		case joaat("LEG_RIGHT_UPPER_INNER"):
			return 88;
	
		case joaat("LEG_RIGHT_LOWER_SLEEVE"):
			return 89;
	
		case joaat("LEG_RIGHT_LOWER_FRONT"):
			return 90;
	
		case joaat("LEG_RIGHT_LOWER_BACK"):
			return 91;
	
		case joaat("LEG_RIGHT_LOWER_OUTER"):
			return 92;
	
		case joaat("LEG_RIGHT_LOWER_INNER"):
			return 93;
	
		case joaat("LEG_RIGHT_KNEE"):
			return 94;
	
		case joaat("LEG_RIGHT_ANKLE"):
			return 95;
	
		case joaat("LEG_RIGHT_CALF"):
			return 96;
	
		case joaat("FOOT_LEFT"):
			return 97;
	
		case joaat("FOOT_RIGHT"):
			return 98;
	}

	switch (unk_0x70E57E9927B6BA58(uParam1))
	{
		case joaat("NO_LABEL"):
			return -1;
	
		case joaat("TAT_FM_204"):
			return 12;
	
		case joaat("TAT_FM_205"):
			return 12;
	
		case joaat("TAT_FM_209"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 75;
			else
				return 65;
			break;
	
		case joaat("TAT_FM_221"):
			return 26;
	
		case joaat("TAT_FM_219"):
			return 47;
	
		case joaat("TAT_FM_201"):
			return 1;
	
		case joaat("TAT_FM_222"):
			return 75;
	
		case joaat("TAT_FM_202"):
			return 1;
	
		case joaat("TAT_FM_210"):
			return 89;
	
		case joaat("TAT_FM_211"):
			return 73;
	
		case joaat("TAT_FM_247"):
			return 22;
	
		case joaat("TAT_FM_223"):
			return 91;
	
		case joaat("TAT_FM_213"):
			return 26;
	
		case joaat("TAT_FM_224"):
			return 73;
	
		case joaat("TAT_FM_225"):
			return 38;
	
		case joaat("TAT_FM_218"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 40;
			else
				return 42;
			break;
	
		case joaat("TAT_FM_214"):
			return 31;
	
		case joaat("TAT_FM_226"):
			return 42;
	
		case joaat("TAT_FM_220"):
			return 47;
	
		case joaat("TAT_FM_227"):
			return 75;
	
		case joaat("TAT_FM_228"):
			return 20;
	
		case joaat("TAT_FM_215"):
			return 32;
	
		case joaat("TAT_FM_229"):
			return 14;
	
		case joaat("TAT_FM_230"):
			return 52;
	
		case joaat("TAT_FM_231"):
			return 30;
	
		case joaat("TAT_FM_232"):
			return 6;
	
		case joaat("TAT_FM_233"):
			return 80;
	
		case joaat("TAT_FM_207"):
			return 13;
	
		case joaat("TAT_FM_234"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 67;
			else
				return 75;
			break;
	
		case joaat("TAT_FM_235"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 40;
			else
				return 42;
			break;
	
		case joaat("TAT_FM_236"):
			return 73;
	
		case joaat("TAT_FM_237"):
			return 47;
	
		case joaat("TAT_FM_238"):
			return 73;
	
		case joaat("TAT_FM_203"):
			return 10;
	
		case joaat("TAT_FM_216"):
			return 26;
	
		case joaat("TAT_FM_011"):
			return 42;
	
		case joaat("TAT_FM_212"):
			return 89;
	
		case joaat("TAT_FM_239"):
			return 16;
	
		case joaat("TAT_FM_240"):
			return 91;
	
		case joaat("TAT_FM_241"):
			return 82;
	
		case joaat("TAT_FM_208"):
			return 13;
	
		case joaat("TAT_FM_017"):
			return 75;
	
		case joaat("TAT_FM_217"):
			return 26;
	
		case joaat("TAT_FM_242"):
			return 10;
	
		case joaat("TAT_FM_243"):
			return 90;
	
		case joaat("TAT_FM_244"):
			return 89;
	
		case joaat("TAT_FM_245"):
			return 38;
	
		case joaat("TAT_FM_010"):
			return 20;
	
		case joaat("TAT_FM_246"):
			return 26;
	
		case joaat("TAT_FM_206"):
			return 18;
	
		case joaat("TAT_FM_008"):
			return 56;
	
		case joaat("TAT_FM_009"):
			return 3;
	
		case joaat("TAT_FM_012"):
			return 47;
	
		case joaat("TAT_FM_013"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_014"):
			return 89;
	
		case joaat("TAT_FM_015"):
			return 6;
	
		case joaat("TAT_FM_016"):
			return 33;
	
		case joaat("TAT_FM_018"):
			return 16;
	
		case joaat("TAT_FM_019"):
			return 40;
	
		case joaat("TAT_FM_020"):
			return 40;
	
		case joaat("TAT_FM_021"):
			return 40;
	
		case joaat("TAT_FM_022"):
			return 33;
	
		case joaat("TAT_FM_023"):
			return 6;
	
		case joaat("TAT_FM_024"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_025"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_026"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_FM_027"):
			if (iParam0 == joaat("MP_M_Freemode_01"))
				return 28;
			else
				return 26;
			break;
	
		case joaat("TAT_BB_000"):
			return 44;
	
		case joaat("TAT_BB_001"):
			return 32;
	
		case joaat("TAT_BB_002"):
			return 3;
	
		case joaat("TAT_BB_003"):
			return 33;
	
		case joaat("TAT_BB_004"):
			return 31;
	
		case joaat("TAT_BB_005"):
			return 33;
	
		case joaat("TAT_BB_006"):
			return 45;
	
		case joaat("TAT_BB_007"):
			return 89;
	
		case joaat("TAT_BB_008"):
			return 64;
	
		case joaat("TAT_BB_009"):
			return 53;
	
		case joaat("TAT_BB_010"):
			return 52;
	
		case joaat("TAT_BB_011"):
			return 30;
	
		case joaat("TAT_BB_012"):
			return 41;
	
		case joaat("TAT_BB_013"):
			return 43;
	
		case joaat("TAT_BB_014"):
			return 52;
	
		case joaat("TAT_BB_015"):
			return 20;
	
		case joaat("TAT_BB_016"):
			return 8;
	
		case joaat("TAT_BB_017"):
			return 10;
	
		case joaat("TAT_BB_018"):
			return 28;
	
		case joaat("TAT_BB_019"):
			return 40;
	
		case joaat("TAT_BB_020"):
			return 42;
	
		case joaat("TAT_BB_021"):
			return 56;
	
		case joaat("TAT_BB_022"):
			return 57;
	
		case joaat("TAT_BB_023"):
			return 52;
	
		case joaat("TAT_BB_024"):
			return 8;
	
		case joaat("TAT_BB_025"):
			return 91;
	
		case joaat("TAT_BB_026"):
			return 20;
	
		case joaat("TAT_BB_027"):
			return 75;
	
		case joaat("TAT_BB_028"):
			return 62;
	
		case joaat("TAT_BB_029"):
			return 63;
	
		case joaat("TAT_BB_030") /* collision: TORSO_P2_4_4 */:
			return 20;
	
		case joaat("TAT_BB_031") /* collision: TORSO_P2_4_5 */:
			return 58;
	
		case joaat("TAT_BB_032") /* collision: TORSO_P2_4_6 */:
			return 47;
	
		case joaat("TAT_BUS_F_002"):
			return 37;
	
		case joaat("TAT_BUS_F_000"):
			return 33;
	
		case joaat("TAT_BUS_F_006"):
			return 80;
	
		case joaat("TAT_BUS_F_007"):
			return 64;
	
		case joaat("TAT_BUS_F_008"):
			return 62;
	
		case joaat("TAT_BUS_F_010"):
			return 96;
	
		case joaat("TAT_BUS_F_009"):
			return 15;
	
		case joaat("TAT_BUS_F_011"):
			return 48;
	
		case joaat("TAT_BUS_F_003"):
			return 37;
	
		case joaat("TAT_BUS_F_001"):
			return 33;
	
		case joaat("TAT_BUS_F_005"):
			return 3;
	
		case joaat("TAT_BUS_F_004"):
			return 41;
	
		case joaat("TAT_BUS_F_012"):
			return 52;
	
		case joaat("TAT_BUS_F_013"):
			return 53;
	
		case joaat("TAT_BUS_005"):
			return 59;
	
		case joaat("TAT_BUS_003"):
			return 3;
	
		case joaat("TAT_BUS_011"):
			return 48;
	
		case joaat("TAT_BUS_000"):
			return 33;
	
		case joaat("TAT_BUS_006"):
			return 64;
	
		case joaat("TAT_BUS_007"):
			return 62;
	
		case joaat("TAT_BUS_008"):
			return 60;
	
		case joaat("TAT_BUS_009"):
			return 20;
	
		case joaat("TAT_BUS_001"):
			return 40;
	
		case joaat("TAT_BUS_002"):
			return 42;
	
		case joaat("TAT_BUS_004"):
			return 11;
	
		case joaat("TAT_BUS_010"):
			return 15;
	
		case joaat("TAT_BUS_012"):
			return 40;
	
		case joaat("TAT_BUS_013"):
			return 22;
	
		case joaat("TAT_BUS_F_014"):
			return 40;
	
		case joaat("TAT_BUS_F_015"):
			return 22;
	
		case joaat("TAT_HP_000"):
			return 30;
	
		case joaat("TAT_HP_001"):
			return 19;
	
		case joaat("TAT_HP_002"):
			return 40;
	
		case joaat("TAT_HP_003"):
			return 4;
	
		case joaat("TAT_HP_004"):
			return 15;
	
		case joaat("TAT_HP_005"):
			return 62;
	
		case joaat("TAT_HP_006"):
			return 45;
	
		case joaat("TAT_HP_007"):
			return 24;
	
		case joaat("TAT_HP_008"):
			return 22;
	
		case joaat("TAT_HP_009"):
			return 80;
	
		case joaat("TAT_HP_010"):
			return 25;
	
		case joaat("TAT_HP_011"):
			return 30;
	
		case joaat("TAT_HP_012"):
			return 30;
	
		case joaat("TAT_HP_013"):
			return 44;
	
		case joaat("TAT_HP_014"):
			return 15;
	
		case joaat("TAT_HP_015"):
			return 9;
	
		case joaat("TAT_HP_016"):
			return 3;
	
		case joaat("TAT_HP_017"):
			return 16;
	
		case joaat("TAT_HP_018"):
			return 17;
	
		case joaat("TAT_HP_019"):
			return 75;
	
		case joaat("TAT_HP_020"):
			return 23;
	
		case joaat("TAT_HP_021"):
			return 64;
	
		case joaat("TAT_HP_022"):
			return 16;
	
		case joaat("TAT_HP_023"):
			return 25;
	
		case joaat("TAT_HP_024"):
			return 32;
	
		case joaat("TAT_HP_025"):
			return 31;
	
		case joaat("TAT_HP_026"):
			return 10;
	
		case joaat("TAT_HP_027"):
			return 5;
	
		case joaat("TAT_HP_028"):
			return 4;
	
		case joaat("TAT_HP_029"):
			return 52;
	
		case joaat("TAT_HP_030"):
			return 35;
	
		case joaat("TAT_HP_031"):
			return 30;
	
		case joaat("TAT_HP_032"):
			return 32;
	
		case joaat("TAT_HP_033"):
			return 38;
	
		case joaat("TAT_HP_034"):
			return 24;
	
		case joaat("TAT_HP_035"):
			return 52;
	
		case joaat("TAT_HP_036"):
			return 20;
	
		case joaat("TAT_HP_037"):
			return 10;
	
		case joaat("TAT_HP_038"):
			return 92;
	
		case joaat("TAT_HP_039"):
			return 0;
	
		case joaat("TAT_HP_040"):
			return 80;
	
		case joaat("TAT_HP_041"):
			return 34;
	
		case joaat("TAT_HP_042"):
			return 91;
	
		case joaat("TAT_HP_043"):
			return 10;
	
		case joaat("TAT_HP_044"):
			return 22;
	
		case joaat("TAT_HP_045"):
			return 14;
	
		case joaat("TAT_HP_046"):
			return 30;
	
		case joaat("TAT_HP_047"):
			return 40;
	
		case joaat("TAT_HP_048"):
			return 24;
	}

	if (iParam2 == 0 && unk_0xD6F9DEE4765092A9(uParam1))
		return -1;

	switch (iParam2)
	{
		case joaat("rank"):
			return -1;
	}

	return -1;
}

BOOL func_433(char* sParam0, int iParam1, int iParam2, Vehicle veParam3, int iParam4) // Position - 0x1D1F1
{
	int num;
	int num2;

	func_439(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);

	if (unk_0xFC8BFE4B41177C22(veParam3) && !unk_0x4FAFF4BCB7633475(veParam3))
		num = unk_0x4B423FAA24E8ABF0(veParam3);

	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
			
				case 1:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
			
				case 2:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
			
				case 3:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
			
				case 4:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
			
				case 5:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
			
				case 6:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
			
				case 7:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
			
				case 8:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
			
				case 9:
					if (func_438() || func_437())
					{
						num2 = 400;
					
						if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_436() || func_435())
							num2 = 0;
					
						func_439(sParam0, iParam1, veParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, num2, 2);
					}
					break;
			
				case 10:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
			
				case 11:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
			
				case 12:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
			
				case 13:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
			
				case 14:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
			
				case 15:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
			
				case 16:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
			
				case 17:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
			
				case 18:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
			
				case 19:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
			
				case 20:
					func_439(sParam0, iParam1, veParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
			
				default:
					func_434(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_438() || func_437())
					{
						num2 = 450;
					
						if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_436() || func_435())
							num2 = 0;
					
						func_439(sParam0, iParam1, veParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, num2, 0);
					}
					break;
			
				case 1:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
			
				case 2:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
			
				case 3:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
			
				case 4:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
			
				case 5:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
			
				case 6:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
			
				case 7:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
			
				case 8:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
			
				case 9:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
			
				case 10:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
			
				case 11:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
			
				case 12:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
			
				case 13:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
			
				case 14:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
			
				case 15:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
			
				case 16:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
			
				case 17:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
			
				case 18:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
			
				case 19:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
			
				case 20:
					break;
			
				case 21:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
			
				case 22:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
			
				case 23:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
			
				case 24:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
			
				case 25:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
			
				case 26:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
			
				case 27:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
			
				case 28:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
			
				case 29:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
			
				case 30:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
			
				case 31:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
			
				case 32:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
			
				case 33:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
			
				case 34:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
			
				case 35:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
			
				case 36:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
			
				case 37:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
			
				case 38:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
			
				case 39:
					func_439(sParam0, iParam1, veParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
			
				default:
					func_434(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
			
				case 1:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
			
				case 2:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
			
				case 3:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
			
				case 4:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
			
				case 5:
					if (func_438() || func_437())
					{
						num2 = 380;
					
						if (_IS_EXCLUSIVE_CONTENT_UNLOCKED() && func_436() || func_435())
							num2 = 0;
					
						func_439(sParam0, iParam1, veParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, num2, 3);
					}
					break;
			
				case 6:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
			
				case 7:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
			
				case 8:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
			
				case 9:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
			
				case 10:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
			
				case 11:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
			
				case 12:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
			
				case 13:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
			
				case 14:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
			
				case 15:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
			
				case 16:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
			
				case 17:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
			
				case 18:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
			
				case 19:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
			
				case 20:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
			
				case 21:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
			
				case 22:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
			
				case 23:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
			
				case 24:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
			
				case 25:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
			
				case 26:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
			
				case 27:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
			
				case 28:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
			
				case 29:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
			
				case 30:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
			
				case 31:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
			
				case 32:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
			
				case 33:
					func_439(sParam0, iParam1, veParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
			
				default:
					func_434(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
	
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(20000) * Global_262145.f_2917), 0);
					break;
			
				case 1:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1400) * Global_262145.f_2918), 2);
					break;
			
				case 2:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(9750) * Global_262145.f_2919), 3);
					break;
			
				case 3:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2150) * Global_262145.f_2920), 0);
					break;
			
				case 4:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2921), 0);
					break;
			
				case 54:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12400) * Global_262145.f_2922), 1);
					break;
			
				case 5:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2923), 0);
					break;
			
				case 6:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2924), 2);
					break;
			
				case 55:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1350) * Global_262145.f_2925), 1);
					break;
			
				case 7:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1450) * Global_262145.f_2926), 0);
					break;
			
				case 8:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2700) * Global_262145.f_2927), 7);
					break;
			
				case 9:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1200) * Global_262145.f_2928), 0);
					break;
			
				case 10:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1500) * Global_262145.f_2929), 0);
					break;
			
				case 11:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2650) * Global_262145.f_2930), 0);
					break;
			
				case 56:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2931), 1);
					break;
			
				case 12:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2932), 2);
					break;
			
				case 57:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2933), 1);
					break;
			
				case 58:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2934), 1);
					break;
			
				case 59:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7400) * Global_262145.f_2935), 1);
					break;
			
				case 60:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2936), 1);
					break;
			
				case 17:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2941), 2);
					break;
			
				case 18:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2942), 2);
					break;
			
				case 19:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3600) * Global_262145.f_2943), 2);
					break;
			
				case 20:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2944), 3);
					break;
			
				case 21:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12500) * Global_262145.f_2945), 3);
					break;
			
				case 22:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2946), 3);
					break;
			
				case 23:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2947), 3);
					break;
			
				case 24:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2948), 3);
					break;
			
				case 25:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2949), 2);
					break;
			
				case 26:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2950), 3);
					break;
			
				case 27:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4800) * Global_262145.f_2951), 3);
					break;
			
				case 28:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2952), 3);
					break;
			
				case 61:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12350) * Global_262145.f_2953), 1);
					break;
			
				case 62:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2954), 1);
					break;
			
				case 63:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4500) * Global_262145.f_2955), 1);
					break;
			
				case 64:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2956), 1);
					break;
			
				case 65:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12300) * Global_262145.f_2957), 1);
					break;
			
				case 29:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2958), 0);
					break;
			
				case 30:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2959), 0);
					break;
			
				case 31:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2960), 0);
					break;
			
				case 66:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2961), 1);
					break;
			
				case 32:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2962), 2);
					break;
			
				case 33:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2963), 3);
					break;
			
				case 34:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7250) * Global_262145.f_2964), 2);
					break;
			
				case 35:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(11900) * Global_262145.f_2965), 0);
					break;
			
				case 36:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2750) * Global_262145.f_2966), 0);
					break;
			
				case 37:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1750) * Global_262145.f_2967), 0);
					break;
			
				case 38:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2968), 3);
					break;
			
				case 39:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3250) * Global_262145.f_2969), 2);
					break;
			
				case 40:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1000) * Global_262145.f_2970), 0);
					break;
			
				case 67:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2971), 1);
					break;
			
				case 41:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2972), 2);
					break;
			
				case 68:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2973), 1);
					break;
			
				case 42:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5050) * Global_262145.f_2974), 0);
					break;
			
				case 43:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2450) * Global_262145.f_2975), 2);
					break;
			
				case 44:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2976), 0);
					break;
			
				case 45:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2977), 0);
					break;
			
				case 46:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2978), 0);
					break;
			
				case 47:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1150) * Global_262145.f_2979), 3);
					break;
			
				case 48:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2980), 3);
					break;
			
				case 49:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7600) * Global_262145.f_2981), 3);
					break;
			
				case 50:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2600) * Global_262145.f_2982), 2);
					break;
			
				case 51:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2983), 3);
					break;
			
				case 52:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7450) * Global_262145.f_2984), 3);
					break;
			
				case 53:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2985), 0);
					break;
			
				case 69:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2986), 1);
					break;
			
				case 70:
					func_439(sParam0, iParam1, veParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2987), 2);
					break;
			}
		
			if (num == joaat("MP_M_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 74:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 75:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 76:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 77:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 78:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 79:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 80:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 81:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 82:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 83:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 84:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 85:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 86:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 90:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 91:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 124:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 125:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 87:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2988), 0);
						break;
				
					case 88:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2989), 0);
						break;
				
					case 89:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2990), 0);
						break;
				
					case 93:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 94:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 95:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 96:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 97:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 98:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 99:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 100:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 101:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 102:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 103:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 104:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 105:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 106:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 107:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 108:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 109:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 110:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 111:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 112:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 113:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 114:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 115:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 116:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 117:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 123:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 13:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937), 0);
						break;
				
					case 14:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2938), 0);
						break;
				
					case 15:
						func_439(sParam0, iParam1, veParam3, "TAT_FMM_CLB" /*Crew Emblem Back*/, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939), 2);
						break;
				
					case 16:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2940), 0);
						break;
				
					case 71:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
						break;
				
					case 72:
						func_439(sParam0, iParam1, veParam3, "TAT_FMM_CLB" /*Crew Emblem Back*/, "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
						break;
				}
			}
			else if (num == joaat("MP_F_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 74:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 75:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 76:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 77:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 78:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 79:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 80:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 81:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 82:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 83:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 84:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 85:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 92:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 87:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2988), 0);
						break;
				
					case 88:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2989), 0);
						break;
				
					case 89:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2990), 0);
						break;
				
					case 93:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 94:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 95:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 96:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 97:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 98:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 99:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 100:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 101:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 102:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 103:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 104:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 105:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 106:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 107:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 108:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 109:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 110:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 111:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 112:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 113:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 114:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 115:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 116:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 117:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 118:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 119:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 120:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 121:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 122:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 123:
						func_439(sParam0, iParam1, veParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 13:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937), 0);
						break;
				
					case 14:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_100" /*Crew Emblem Small*/, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2938), 0);
						break;
				
					case 15:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939), 2);
						break;
				
					case 16:
						func_439(sParam0, iParam1, veParam3, "TAT_FM_101" /*Crew Emblem Large*/, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
						break;
				}
			}
			break;
	}

	if (iParam2 == 3 || iParam2 == 4 && iParam1 >= 129)
		func_434(sParam0, iParam2, iParam1, 129);

	if (iParam4 == 22)
		sParam0->f_7 = sParam0->f_7 * 2;

	return sParam0->f_11 != -1;
}

void func_434(char* sParam0, int iParam1, int iParam2, int iParam3) // Position - 0x202DE
{
	int num;
	int num2;
	var unk;

	num = iParam2 - iParam3;
	num2 = unk_0x82D6E3FDBD0A80B6(iParam1);

	if (num2 > 0 && num < num2)
	{
		if (unk_0xC8FF7E3E267EBEF5(iParam1, num, &unk))
		{
			if (!unk_0x4BFA043D318BF9AE(unk))
			{
				sParam0->f_11 = iParam2;
				TEXT_LABEL_COPY(sParam0, { unk.f_7 }, 4);
				sParam0->f_5 = unk.f_3;
				sParam0->f_4 = unk.f_2;
				sParam0->f_8 = unk.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = unk.f_4;
				sParam0->f_9 = iParam2 / 32;
				sParam0->f_10 = iParam2 % 32;
				sParam0->f_12 = unk.f_5;
			}
		}
	}

	return;
}

int func_435() // Position - 0x20370
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;

	if (IS_BIT_SET(Global_26, 5))
		if (IS_BIT_SET(Global_26, 1) || IS_BIT_SET(Global_26, 3))
			return 1;
		else
			return 0;

	if (unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &num, -1))
		if (IS_BIT_SET(num, 5))
			if (IS_BIT_SET(num, 1) || IS_BIT_SET(num, 3))
				return 1;
			else
				return 0;

	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_153248.f_3)
		{
			num3 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (unk_0xDF7F16323520B858(num3, &num2, -1))
				if (IS_BIT_SET(num2, 5))
					return 1;
		}
	}

	if (unk_0x76CA59C648318506())
	{
		num4 = unk_0x38640D2193CB547F(866);
	
		if (IS_BIT_SET(num4, 1) || IS_BIT_SET(num4, 3))
			return 1;
	}

	if (unk_0x5F9F81C08516558E())
	{
		if (unk_0x1595D1B690089487())
		{
			if (unk_0x753B42F8D561B8E2())
			{
				unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &unk, -1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 1);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 3);
				unk_0x0B0C9A0F9AAEB7F0(&unk, 5);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 1);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 3);
				unk_0x0B0C9A0F9AAEB7F0(&Global_26, 5);
				unk_0x1164A75E490C27B6(joaat("SP_UNLOCK_EXCLUS_CONTENT"), unk, 1);
			
				if (unk_0x76CA59C648318506())
				{
					unk = unk_0x38640D2193CB547F(866);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 1);
					unk_0x0B0C9A0F9AAEB7F0(&unk, 3);
					unk_0xED11291F7127888E(unk);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

int func_436() // Position - 0x204A9
{
	int num;
	int num2;
	int num3;
	int num4;

	if (IS_BIT_SET(Global_26, 6))
		if (IS_BIT_SET(Global_26, 2) || IS_BIT_SET(Global_26, 4))
			return 1;
		else
			return 0;

	if (unk_0xDF7F16323520B858(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &num, -1))
		if (IS_BIT_SET(num, 6))
			if (IS_BIT_SET(num, 2) || IS_BIT_SET(num, 4))
				return 1;
			else
				return 0;

	if (unk_0x7A207DD1AEF9D26E(0))
	{
		if (Global_153248.f_3)
		{
			num3 = joaat("MPPLY_PLAT_UP_LB_CHECK");
		
			if (unk_0xDF7F16323520B858(num3, &num2, -1))
				if (IS_BIT_SET(num2, 8))
					return 1;
		}
	}

	if (unk_0x76CA59C648318506())
	{
		num4 = unk_0x38640D2193CB547F(866);
	
		if (IS_BIT_SET(num4, 2) || IS_BIT_SET(num4, 4))
			return 1;
	}

	return 0;
}

int func_437() // Position - 0x2055F
{
	return 1;
}

int func_438() // Position - 0x20568
{
	return 1;
}

void func_439(char* sParam0, int iParam1, Vehicle veParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9) // Position - 0x20571
{
	var unk;

	sParam0->f_11 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(sParam0, sParam3, 16);
	sParam0->f_4 = unk_0x70E57E9927B6BA58(sParam4);
	sParam0->f_5 = unk_0x70E57E9927B6BA58(sParam5);
	sParam0->f_8 = unk_0x70E57E9927B6BA58(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = iParam1 / 32;
	sParam0->f_10 = iParam1 % 32;
	sParam0->f_12 = iParam9;

	if (unk_0xFC8BFE4B41177C22(veParam2) && !unk_0x4FAFF4BCB7633475(veParam2))
	{
		if (sParam0->f_6 == 0 || sParam0->f_6 == 1 || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "", 32);
		
			if (sParam0->f_11 == 13 || sParam0->f_11 == 14 || sParam0->f_11 == 15 || sParam0->f_11 == 16 || sParam0->f_11 == 71 || sParam0->f_11 == 72)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "FM_", 32);
				TEXT_LABEL_APPEND_STRING(&unk, "CREW_", 32);
			
				if (unk_0x4B423FAA24E8ABF0(veParam2) == joaat("MP_M_Freemode_01"))
					TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
			
				TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
			}
			else if (unk_0x1B79E937E91F40C3(sParam6, "torsoDecal") || unk_0x1B79E937E91F40C3(sParam6, "hairOverlay"))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, sParam5, 32);
			}
			else
			{
				if (sParam0->f_11 == 0 || sParam0->f_11 == 1 || sParam0->f_11 == 2 || sParam0->f_11 == 4 || sParam0->f_11 == 3 || sParam0->f_11 == 54 || sParam0->f_11 == 5 || sParam0->f_11 == 6 || sParam0->f_11 == 55 || sParam0->f_11 == 7 || sParam0->f_11 == 8 || sParam0->f_11 == 9 || sParam0->f_11 == 10 || sParam0->f_11 == 11 || sParam0->f_11 == 56 || sParam0->f_11 == 12 || sParam0->f_11 == 57 || sParam0->f_11 == 58 || sParam0->f_11 == 59 || sParam0->f_11 == 60)
					TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_Award_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_", 32);
			
				if (unk_0x4B423FAA24E8ABF0(veParam2) == joaat("MP_M_Freemode_01") || sParam0->f_11 == 20)
					TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
			
				TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
			}
		
			sParam0->f_5 = unk_0x70E57E9927B6BA58(&unk);
		
			if (unk_0x50CA4ACB66148FF0(sParam0->f_4, sParam0->f_5) == 7)
				sParam0->f_11 = -1;
		}
	}

	return;
}

BOOL func_440(int iParam0, Player plParam1) // Position - 0x20828
{
	int num;
	int num2;

	if (iParam0 == -1)
		return false;

	num = func_441(iParam0, plParam1);
	num2 = func_410(iParam0);

	if (num2 < 0 || num2 >= 32)
		return false;

	return IS_BIT_SET(num, num2);
}

int func_441(int iParam0, Player plParam1) // Position - 0x20867
{
	int num;
	int num2;

	num = func_442(iParam0);

	if (num == 14626)
		if (func_175() == 2 && func_413() == 2)
			return 0;
		else
			return 0;

	num2 = func_76(num, plParam1);
	return num2;
}

int func_442(int iParam0) // Position - 0x208AD
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_414(num);

	if (func_175() == 0 || func_413() == 0 || func_175() == 999 && func_413() == 999)
	{
		switch (num2)
		{
			case 0:
				return 1049;
		
			case 1:
				return 1050;
		
			case 2:
				return 1051;
		
			case 3:
				return 1052;
		
			case 4:
				return 1053;
		
			case 5:
				return 1054;
		
			case 6:
				return 1488;
		
			case 7:
				return 1489;
		
			case 8:
				return 1490;
		
			case 9:
				return 1491;
		
			case 10:
				return 1949;
		
			case 11:
				return 1950;
		
			case 12:
				return 1951;
		
			case 13:
				return 2425;
		
			case 14:
				return 2445;
		
			case 15:
				return 2448;
		
			case 16:
				return 2451;
		
			case 17:
				return 2615;
		
			case 18:
				return 2618;
		
			case 19:
				return 2621;
		
			case 20:
				return 3787;
		
			case 21:
				return 3790;
		
			case 22:
				return 3865;
		
			case 23:
				return 3868;
		
			case 24:
				return 3871;
		
			case 25:
				return 3874;
		
			case 26:
				return 5365;
		
			case 27:
				return 5368;
		
			case 28:
				return 5470;
		
			case 29:
				return 5473;
		
			case 30:
				return 6432;
		
			case 31:
				return 6435;
		
			case 32:
				return 7256;
		
			case 33:
				return 7259;
		
			case 34:
				return 7262;
		
			case 35:
				return 7971;
		
			case 36:
				return 7974;
		
			case 37:
				return 7977;
		
			case 38:
				return 7980;
		
			case 39:
				return 8502;
		
			case 40:
				return 8505;
		
			case 41:
				return 8508;
		
			case 42:
				return 8511;
		
			case 43:
				return 8907;
		
			case 44:
				return 8910;
		
			case 45:
				return 8913;
		
			case 46:
				return 10289;
		
			case 47:
				return 10292;
		
			case 48:
				return 10415;
		
			case 49:
				return 10418;
		
			case 50:
				return 11827;
		
			case 51:
				return 11830;
		
			case 52:
				return 12223;
		
			case 53:
				return 12226;
		
			case 54:
				break;
		}
	
		return 14626;
	}

	if (func_175() == 2 && func_413() == 2)
		return 14626;

	return 14626;
}

BOOL func_443(Vehicle veParam0, Player plParam1) // Position - 0x20C4E
{
	int num;
	int num2;
	int num3;
	Player player;
	int num4;
	Player player2;
	int num5;

	if (!unk_0x4FAFF4BCB7633475(veParam0))
	{
		if (unk_0x4B423FAA24E8ABF0(veParam0) == joaat("MP_M_Freemode_01"))
		{
			num = unk_0xC0120BBCC298EA2F(veParam0, 11);
			num3 = func_76(1759, -1);
		
			if (plParam1 != -1)
				num3 = plParam1;
		
			if (num > 15)
			{
				player = func_444(veParam0, 11, -1);
			
				if (player >= 237)
				{
					num4 = func_8(joaat("MP_M_Freemode_01"), player, 11, 3);
				
					if (unk_0x304A39EB177D246B(num4, joaat("TAT_DECL"), 0) || unk_0x304A39EB177D246B(num4, joaat("MULTI_DECAL"), 0) || unk_0x304A39EB177D246B(num4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (num3)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
							case -507124931:
								return 1;
						}
					}
					else if (unk_0x304A39EB177D246B(num4, joaat("JACKET"), 0) && !unk_0x304A39EB177D246B(num4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
				
					return 0;
				}
			}
		
			return 0;
		}
		else if (unk_0x4B423FAA24E8ABF0(veParam0) == joaat("MP_F_Freemode_01"))
		{
			num = unk_0xC0120BBCC298EA2F(veParam0, 11);
			num2 = unk_0xD6AED6BFCC58AF7F(veParam0, 11);
			num3 = func_76(1759, -1);
		
			if (plParam1 != -1)
				num3 = plParam1;
		
			if (num == 3)
			{
				if (num2 == 14)
					return 1;
			}
			else if (num > 15)
			{
				player2 = func_444(veParam0, 11, -1);
			
				if (player2 >= 256)
				{
					num5 = func_8(joaat("MP_F_Freemode_01"), player2, 11, 4);
				
					if (unk_0x304A39EB177D246B(num5, joaat("TAT_DECL"), 0) || unk_0x304A39EB177D246B(num5, joaat("MULTI_DECAL"), 0) || unk_0x304A39EB177D246B(num5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (num3)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
							case -2045170715:
								return 1;
						}
					}
					else if (unk_0x304A39EB177D246B(num5, joaat("JACKET"), 0) && !unk_0x304A39EB177D246B(num5, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
				
					return 0;
				}
			}
		
			return 0;
		}
	}

	return 0;
}

Player func_444(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x20F0E
{
	Player i;
	Player j;

	if (!unk_0x4FAFF4BCB7633475(veParam0))
	{
		if (iParam1 == 12)
		{
			for (i = 0; i <= 53; i = i + 1)
			{
				if (func_451(veParam0, iParam1, i))
					return i;
			}
		}
		else if (iParam1 == 13)
		{
			for (j = 0; j <= 19; j = j + 1)
			{
				if (func_451(veParam0, iParam1, j))
					return j;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_445(veParam0, iParam2);
			}
		}
		else
		{
			return func_12(veParam0, iParam1);
		}
	}

	return -99;
}

Player func_445(Vehicle veParam0, int iParam1) // Position - 0x20FAF
{
	int num;
	var unk;

	if (unk_0x4FAFF4BCB7633475(veParam0))
		return -99;

	num = unk_0xB204F40D393426B6(veParam0, iParam1, 1);

	if (num == -1)
		return func_450(iParam1);

	unk = unk_0x0DC23FA727759F9F(veParam0, iParam1);
	return func_446(veParam0, num, unk, iParam1);
}

Player func_446(Vehicle veParam0, Player plParam1, Player plParam2, int iParam3) // Position - 0x20FF6
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int num5;

	if (plParam1 == -1)
		return func_450(iParam3);

	num = unk_0x4B423FAA24E8ABF0(veParam0);
	num2 = unk_0x6B7AEB5F3D578298(veParam0, iParam3, plParam1, plParam2);

	if (num2 != -1 && num2 != 0)
		if (num == joaat("MP_M_Freemode_01"))
			return func_448(unk_0x4B423FAA24E8ABF0(veParam0), num2, 14, 3);
		else if (num == joaat("MP_F_Freemode_01"))
			return func_448(unk_0x4B423FAA24E8ABF0(veParam0), num2, 14, 4);

	num3 = unk_0x4D0F04723A52D0E9(veParam0, iParam3);

	for (i = 0; i <= num3 - 1; i = i + 1)
	{
		num5 = unk_0x1D77F90D87ACD2BA(veParam0, iParam3, i);
	
		if (i != plParam1)
		{
			num4 = num4 + num5;
		}
		else
		{
			for (j = 0; j <= num5 - 1; j = j + 1)
			{
				if (i == plParam1 && j == plParam2)
				{
					num4 = num4 + func_447(veParam0, iParam3);
					return num4;
				}
				else
				{
					num4 = num4 + 1;
				}
			}
		}
	}

	return func_450(iParam3);
}

int func_447(Vehicle veParam0, int iParam1) // Position - 0x210F2
{
	int num;

	num = unk_0x4B423FAA24E8ABF0(veParam0);

	switch (num)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 58;
			
				case 2:
					return 112;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 82;
			
				case 2:
					return 158;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 88;
			
				case 2:
					return 154;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 155;
			
				case 6:
					return 319;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 155;
			
				case 6:
					return 319;
			}
			break;
	}

	return -99;
}

Player func_448(int iParam0, Player plParam1, int iParam2, int iParam3) // Position - 0x21230
{
	var unk;
	int i;
	int num;
	int num2;
	int num3;

	if (iParam2 == 12)
	{
		num = unk_0xF2DDA7CE028AB9CB(iParam3, 0);
	
		for (i = 0; i < num; i = i + 1)
		{
			unk_0x808A8ABE207631DF(i, &unk);
		
			if (unk.f_1 == plParam1)
				return func_449(iParam0) + i;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 1, -1, -1);
		num2 = unk_0x289EDE99827978AD(plParam1);
	
		if (num2 != -1)
			return func_11(iParam0) + num2;
	}
	else
	{
		unk_0x7B6C0A0D604E68FA(iParam3, 10, -1, 0, -1, func_10(iParam2));
		num3 = unk_0x55FF07D3A2FE8317(plParam1);
	
		if (num3 != -1)
			return func_9(iParam0, func_10(iParam2)) + num3;
	}

	return -99;
}

int func_449(int iParam0) // Position - 0x212EB
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 53;
	
		case joaat("Player_One"):
			return 47;
	
		case joaat("Player_Two"):
			return 48;
	}

	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 26;
	
		case joaat("MP_F_Freemode_01"):
			return 28;
	}

	return -99;
}

Player func_450(int iParam0) // Position - 0x2134A
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	}

	return 0;
}

BOOL func_451(Vehicle veParam0, Player plParam1, Player plParam2) // Position - 0x213D0
{
	int num;
	Player player;
	Player player2;
	int num2;
	int num3;
	int i;
	Player j;
	int k;
	var unk;
	var unk18;
	int l;
	var unk28;
	int m;
	int num4;
	var unk38;
	var unk39;
	int num5;
	var unk40;
	Player player3;

	if (unk_0x4FAFF4BCB7633475(veParam0))
		return false;

	num = unk_0x4B423FAA24E8ABF0(veParam0);
	Global_79031[1 /*14*/] = { func_467(num, plParam1, plParam2, -1) };
	player2 = Global_2883588;
	num2 = Global_2883589;

	if (!IS_BIT_SET(Global_79031[1 /*14*/].f_6, 0))
		return false;

	if (plParam1 == 12)
	{
		unk = { func_463(num, plParam2) };
	
		for (k = 0; k < 7; k = k + 1)
		{
			switch (k)
			{
				case 0:
					num3 = 1;
					break;
			
				case 1:
					num3 = 4;
					break;
			
				case 2:
					num3 = 6;
					break;
			
				case 3:
					num3 = 7;
					break;
			
				case 4:
					num3 = 8;
					break;
			
				case 5:
					num3 = 11;
					break;
			
				case 6:
					num3 = 13;
					break;
			}
		
			if (unk[num3] != -99)
			{
				if (!func_451(veParam0, num3, unk[num3]))
				{
					Global_2883588 = player2;
					Global_2883589 = num2;
					return false;
				
					if (num3 == 13)
					{
						unk18 = { func_460(num, unk[num3]) };
					
						for (i = 0; i <= 8; i = i + 1)
						{
							if (!func_451(veParam0, 14, unk18[i]))
							{
								for (j = 0; j <= 19; j = j + 1)
								{
									Global_79031[2 /*14*/] = { func_467(num, 14, j, -1) };
								
									if (Global_79031[2 /*14*/].f_12 == i)
									{
										if (func_451(veParam0, 14, j))
										{
											if (!func_455(num, plParam2, 14, j, &unk, &Global_79031[2 /*14*/]))
											{
												Global_2883588 = player2;
												Global_2883589 = num2;
												return false;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						player = func_12(veParam0, num3);
						Global_79031[2 /*14*/] = { func_467(num, num3, player, -1) };
					
						if (!func_455(num, plParam2, num3, player, &unk, &Global_79031[2 /*14*/]))
						{
							Global_2883588 = player2;
							Global_2883589 = num2;
							return false;
						}
					}
				}
			}
		}
	
		if (unk[10] != 0 && unk[10] != joaat("0") && unk.f_16)
		{
			if (func_76(1759, Global_79028) != unk[10])
			{
				Global_2883588 = player2;
				Global_2883589 = num2;
				return false;
			}
		}
	
		Global_2883588 = player2;
		Global_2883589 = num2;
		return true;
	}
	else if (plParam1 == 13)
	{
		unk28 = { func_460(num, plParam2) };
	
		for (l = 0; l <= 8; l = l + 1)
		{
			if (!func_451(veParam0, 14, unk28[l]))
				return false;
		}
	
		return true;
	}
	else if (plParam1 == 14)
	{
		if (unk_0xB204F40D393426B6(veParam0, Global_79031[1 /*14*/].f_12, 1) == Global_79031[1 /*14*/].f_3 && unk_0x0DC23FA727759F9F(veParam0, Global_79031[1 /*14*/].f_12) == Global_79031[1 /*14*/].f_4 || Global_79031[1 /*14*/].f_3 == -1)
			return true;
	
		if (Global_79031[1 /*14*/].f_12 == 0 && IS_BIT_SET(Global_79031[1 /*14*/].f_6, 6) && unk_0x304A39EB177D246B(Global_2883588, joaat("HELMET"), 1) && unk_0xCD6EB4A3CCA20602(Global_2883588) > 0)
		{
			num5 = unk_0xCD6EB4A3CCA20602(Global_2883588);
		
			for (m = 0; m < num5; m = m + 1)
			{
				unk_0x5C6B8DD2E15C6B3C(Global_2883588, m, &num4, &unk38, &unk39);
			
				if (num4 != 0 && num4 != joaat("0"))
				{
					unk_0x7A491C9A90975007(&unk40);
					unk_0x09A485A642AEADEF(num4, &unk40);
				
					if (unk40.f_3 == unk_0xB204F40D393426B6(veParam0, Global_79031[1 /*14*/].f_12, 1) && unk40.f_4 == unk_0x0DC23FA727759F9F(veParam0, Global_79031[1 /*14*/].f_12))
						return true;
				}
			}
		}
	}
	else
	{
		if (Global_79031[1 /*14*/].f_3 == unk_0xC0120BBCC298EA2F(veParam0, func_10(plParam1)) && Global_79031[1 /*14*/].f_4 == unk_0xD6AED6BFCC58AF7F(veParam0, func_10(plParam1)))
			return true;
	
		if (plParam1 == 4)
		{
			Global_79030 = Global_79030 + 1;
		
			if (Global_79030 == 1)
				if (func_454(num, 11, func_12(veParam0, 11), -1))
					if (func_453(num, 4, plParam2, &player3))
						return func_451(veParam0, 4, player3);
				else if (func_452(num, 4, plParam2, &player3))
					return func_451(veParam0, 4, player3);
		
			Global_79030 = Global_79030 - 1;
		}
	}

	return false;
}

BOOL func_452(int iParam0, int iParam1, Player plParam2, var uParam3) // Position - 0x2182B
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	int num4;

	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (plParam2 >= 256)
					{
						num = func_8(iParam0, plParam2, iParam1, 4);
					
						if (num != -1)
						{
							num2 = unk_0x5A3F0A3B7ECCBD32(num);
						
							for (i = 0; i < num2; i = i + 1)
							{
								unk_0x0249B53AB91BF9D0(num, i, &num3, &unk, &num4);
							
								if (num4 == 4)
								{
									if (num3 != 0 && num3 != joaat("0"))
									{
										if (!unk_0x304A39EB177D246B(num3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_448(iParam0, num3, iParam1, 4);
											return true;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_453(int iParam0, int iParam1, Player plParam2, var uParam3) // Position - 0x218D4
{
	int num;
	int num2;
	int i;
	int num3;
	var unk;
	int num4;

	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (plParam2 >= 256)
					{
						num = func_8(iParam0, plParam2, iParam1, 4);
					
						if (num != -1)
						{
							num2 = unk_0x5A3F0A3B7ECCBD32(num);
						
							for (i = 0; i < num2; i = i + 1)
							{
								unk_0x0249B53AB91BF9D0(num, i, &num3, &unk, &num4);
							
								if (num4 == 4)
								{
									if (num3 != 0 && num3 != joaat("0"))
									{
										if (unk_0x304A39EB177D246B(num3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_448(iParam0, num3, iParam1, 4);
											return true;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_454(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x2197C
{
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (plParam2 >= 256)
					{
						if (iParam3 == -1)
							iParam3 = func_8(iParam0, plParam2, 11, 4);
					
						return unk_0x304A39EB177D246B(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_455(int iParam0, Player plParam1, int iParam2, Player plParam3, var uParam4, int iParam5) // Position - 0x219CF
{
	var unk;
	int i;

	if (uParam4->[iParam2] == plParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (plParam3 == 0 || plParam3 == 1 || plParam3 == 2 || plParam3 == 3 || plParam3 == 4 || plParam3 == 5 || plParam3 == 6 || plParam3 == 7 || plParam3 == 8)
			return true;

	if (plParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		unk = { func_460(iParam0, uParam4->[13]) };
	
		for (i = 0; i <= 8; i = i + 1)
		{
			if (unk[i] == plParam3)
				return true;
		}
	}

	if (func_459(iParam0, iParam2, plParam3))
		return true;

	if (iParam0 == joaat("Player_Zero"))
	{
		if (func_458(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 1 || plParam1 == 2 || plParam1 == 10 || plParam1 == 11 || plParam1 == 12 || plParam1 == 18 || plParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_457(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 1 || plParam1 == 2 || plParam1 == 4 || plParam1 == 5 || plParam1 == 10 || plParam1 == 11 || plParam1 == 12 || plParam1 == 14 || plParam1 == 18 || plParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_456(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 1 || plParam1 == 2 || plParam1 == 4 || plParam1 == 5 || plParam1 == 10 || plParam1 == 11 || plParam1 == 12 || plParam1 == 14 || plParam1 == 18 || plParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (func_458(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 3 || plParam1 == 5 || plParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_457(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 3 || plParam1 == 5 || plParam1 == 7 || plParam1 == 8 || plParam1 == 21)
				if (iParam2 == 8)
					if (plParam3 == 9)
						if (plParam1 == 8 || plParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (plParam1 == 43 || plParam1 == 44 || plParam1 == 45 || plParam1 == 46)
					if (plParam3 >= 5 && plParam3 <= 10)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (plParam1 == 43 || plParam1 == 44 || plParam1 == 45 || plParam1 == 46)
					if (plParam3 >= 26 && plParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_456(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 3 || plParam1 == 3 || plParam1 == 5 || plParam1 == 7 || plParam1 == 8 || plParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (plParam3 >= 159 && plParam3 <= 174)
				return true;
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (plParam1 == 2)
			if (iParam2 == 14 && plParam3 == 0)
				return true;
	
		if (func_458(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 1 || plParam1 == 2 || plParam1 == 6 || plParam1 == 8 || plParam1 == 45 || plParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_457(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 1 || plParam1 == 2 || plParam1 == 3 || plParam1 == 6 || plParam1 == 8 || plParam1 == 11 || plParam1 == 45 || plParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_456(iParam0, iParam2, plParam3, -1))
		{
			if (plParam1 == 1 || plParam1 == 2 || plParam1 == 3 || plParam1 == 6 || plParam1 == 8 || plParam1 == 11 || plParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_456(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x21FD3
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 14:
					if (plParam2 == 16)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 14:
					if (plParam2 == 40 || plParam2 >= 41 && plParam2 <= 56 || plParam2 >= 64 && plParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 14:
					if (plParam2 >= 17 && plParam2 <= 18 || plParam2 >= 71 && plParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (plParam2 >= 18 && plParam2 <= 130)
					{
						return true;
					}
					else if (plParam2 >= 10 && plParam2 <= 17)
					{
						return true;
					}
					else if (plParam2 >= 327)
					{
						if (iParam3 == -1)
							iParam3 = func_8(iParam0, plParam2, 14, 3);
					
						return unk_0x304A39EB177D246B(iParam3, joaat("HAT"), 1) || unk_0x304A39EB177D246B(func_8(iParam0, plParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (plParam2 >= 26)
					{
						if (iParam3 == -1)
							iParam3 = func_8(iParam0, plParam2, 1, 3);
					
						return unk_0x304A39EB177D246B(iParam3, joaat("HAT"), 0) || unk_0x304A39EB177D246B(func_8(iParam0, plParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (plParam2 >= 18 && plParam2 <= 130)
					{
						return true;
					}
					else if (plParam2 >= 10 && plParam2 <= 17)
					{
						return true;
					}
					else if (plParam2 >= 327)
					{
						if (iParam3 == -1)
							iParam3 = func_8(iParam0, plParam2, 14, 4);
					
						return unk_0x304A39EB177D246B(iParam3, joaat("HAT"), 1) || unk_0x304A39EB177D246B(func_8(iParam0, plParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (plParam2 >= 26)
					{
						if (iParam3 == -1)
							iParam3 = func_8(iParam0, plParam2, 1, 4);
					
						return unk_0x304A39EB177D246B(iParam3, joaat("HAT"), 0) || unk_0x304A39EB177D246B(func_8(iParam0, plParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_457(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x22250
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
			if (plParam2 == 10)
				return true;
		else if (iParam1 == 8)
			if (plParam2 == 9 || plParam2 == 7 || plParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (plParam2 >= 9 && plParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (plParam2 == 12 || plParam2 == 59 || plParam2 == 60 || plParam2 == 31 || plParam2 == 32 || plParam2 == 33 || plParam2 == 34 || plParam2 == 35 || plParam2 == 36 || plParam2 == 37 || plParam2 == 38 || plParam2 == 39 || plParam2 == 40 || plParam2 == 41 || plParam2 >= 42 && plParam2 <= 44 || plParam2 == 54 || plParam2 == 55)
				return true;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
			if (plParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (plParam2 == 3 || plParam2 == 5 || plParam2 == 9)
				return true;
		else if (iParam1 == 9)
			if (plParam2 >= 5 && plParam2 <= 10)
				return true;
		else if (iParam1 == 14)
			if (plParam2 == 82 || plParam2 == 10 || plParam2 == 26 || plParam2 == 27 || plParam2 == 28 || plParam2 == 29 || plParam2 == 30 || plParam2 == 31 || plParam2 == 32 || plParam2 == 33 || plParam2 == 34 || plParam2 == 35 || plParam2 == 36 || plParam2 >= 37 && plParam2 <= 39)
				return true;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
			if (plParam2 == 14 || plParam2 == 7)
				return true;
		else if (iParam1 == 9)
			if (plParam2 == 8 || plParam2 >= 9 && plParam2 <= 14 || plParam2 == 15 || plParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (plParam2 == 88 || plParam2 == 12 || plParam2 == 47 || plParam2 == 48 || plParam2 == 49 || plParam2 == 50 || plParam2 == 51 || plParam2 == 52 || plParam2 == 53 || plParam2 == 54 || plParam2 == 55 || plParam2 == 56 || plParam2 == 57 || plParam2 >= 58 && plParam2 <= 60)
				return true;
	}
	else if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (plParam2 > 0)
			{
				if (plParam2 >= 26)
				{
					if (iParam3 == -1)
						iParam3 = func_8(iParam0, plParam2, 1, 3);
				
					if (unk_0x304A39EB177D246B(iParam3, joaat("HAT"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (plParam2 > 0)
			{
				if (plParam2 >= 26)
				{
					if (iParam3 == -1)
						iParam3 = func_8(iParam0, plParam2, 1, 4);
				
					if (unk_0x304A39EB177D246B(iParam3, joaat("HAT"), 0) || unk_0x304A39EB177D246B(iParam3, joaat("HAIR_SHRINK"), 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_458(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x22675
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
				if (plParam2 == 58 || plParam2 == 61 || plParam2 >= 62 && plParam2 <= 69 || plParam2 >= 70 && plParam2 <= 79 || plParam2 >= 80 && plParam2 <= 89 || plParam2 == 90 || plParam2 >= 91 && plParam2 <= 102 || plParam2 >= 103 && plParam2 <= 110 || plParam2 == 111)
					return true;
			break;
	
		case joaat("Player_One"):
			if (iParam1 == 14)
				if (plParam2 >= 83 && plParam2 <= 92 || plParam2 == 93 || plParam2 == 94 || plParam2 >= 95 && plParam2 <= 101 || plParam2 >= 102 && plParam2 <= 111 || plParam2 >= 112 && plParam2 <= 121 || plParam2 >= 122 && plParam2 <= 131 || plParam2 >= 132 && plParam2 <= 139 || plParam2 >= 140 && plParam2 <= 149 || plParam2 >= 150 && plParam2 <= 156 || plParam2 == 157)
					return true;
			break;
	
		case joaat("Player_Two"):
			if (iParam1 == 14)
				if (plParam2 == 89 || plParam2 >= 90 && plParam2 <= 99 || plParam2 >= 100 && plParam2 <= 109 || plParam2 == 111 || plParam2 == 112 || plParam2 >= 113 && plParam2 <= 122 || plParam2 >= 123 && plParam2 <= 132 || plParam2 >= 133 && plParam2 <= 142 || plParam2 >= 143 && plParam2 <= 152 || plParam2 == 153)
					return true;
			break;
	
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (plParam2 >= 155 && plParam2 <= 318)
				{
					return true;
				}
				else if (plParam2 >= 327)
				{
					if (iParam3 == -1)
						iParam3 = func_8(iParam0, plParam2, 14, 3);
				
					return unk_0x304A39EB177D246B(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (plParam2 >= 155 && plParam2 <= 318)
				{
					return true;
				}
				else if (plParam2 >= 327)
				{
					if (iParam3 == -1)
						iParam3 = func_8(iParam0, plParam2, 14, 4);
				
					return unk_0x304A39EB177D246B(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}

	return false;
}

BOOL func_459(int iParam0, int iParam1, Player plParam2) // Position - 0x22968
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 8:
					if (plParam2 == 15)
						return true;
					break;
			
				case 9:
					if (plParam2 == 6)
						return true;
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 8:
					if (plParam2 == 1 || plParam2 == 10)
						return true;
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 8:
					if (plParam2 == 4)
						return true;
					break;
			}
			break;
	}

	return false;
}

struct<10> func_460(int iParam0, Player plParam1) // Position - 0x22A01
{
	int i;
	var unk;

	unk = 9;

	for (i = 0; i <= 8; i = i + 1)
	{
		unk[i] = -99;
	}

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (plParam1)
			{
				case 31:
					func_462(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_462(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_462(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_462(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_462(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_462(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_462(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_462(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_462(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_462(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_462(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_461(&unk, iParam0, plParam1, 10);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (plParam1)
			{
				case 31:
					func_462(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_462(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_462(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_462(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_462(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_462(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_462(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_462(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_462(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_462(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_461(&unk, iParam0, plParam1, 9);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (plParam1)
			{
				case 31:
					func_462(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_462(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_462(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_462(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_462(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_462(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_462(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_462(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_462(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_462(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_461(&unk, iParam0, plParam1, 9);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (plParam1)
			{
				case 31:
					func_462(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_462(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_462(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_462(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_462(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_462(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_462(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_462(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_462(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_462(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_462(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_462(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_462(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_462(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_462(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_462(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_462(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_462(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_462(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_462(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_462(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_462(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_462(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_462(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_462(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_462(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_461(&unk, iParam0, plParam1, 25);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (plParam1)
			{
				case 31:
					func_462(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_462(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_462(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_462(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_462(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_462(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_462(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_462(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_462(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_462(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_462(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_462(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_462(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_462(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_462(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_462(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_462(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_462(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_462(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_462(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_462(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_462(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_462(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_462(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_462(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_461(&unk, iParam0, plParam1, 25);
					break;
			}
			break;
	}

	return unk;
}

void func_461(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x23330
{
	int num;
	var unk;
	int num2;
	int i;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		num = 0;
	
		if (iParam1 == joaat("Player_Zero"))
			num = 0;
		else if (iParam1 == joaat("Player_One"))
			num = 1;
		else if (iParam1 == joaat("Player_Two"))
			num = 2;
		else if (iParam1 == joaat("MP_M_Freemode_01"))
			num = 3;
		else if (iParam1 == joaat("MP_F_Freemode_01"))
			num = 4;
	
		unk_0x565B95D20273E8CD(iParam2, &unk);
	
		if (!unk_0x4BFA043D318BF9AE(unk))
		{
			for (i = 0; i < unk.f_3; i = i + 1)
			{
				if (unk_0xCD4F2395AE80D510(unk.f_1, i, &num2) && num2.f_2 != -1)
					if (num2 != 0 && num2 != -1 && num2 != joaat("0"))
						uParam0->[num2.f_2] = func_448(iParam1, num2, 14, num);
					else if (num2.f_1 != -1)
						uParam0->[num2.f_2] = num2.f_1;
			}
		}
	}

	return;
}

void func_462(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x2345A
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
	return;
}

struct<17> func_463(int iParam0, Player plParam1) // Position - 0x234A2
{
	int i;
	var unk;

	unk = 15;

	for (i = 0; i <= 14; i = i + 1)
	{
		unk[i] = -99;
	}

	unk.f_16 = 0;

	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (plParam1)
			{
				case 0:
					if (Global_114370.f_9088.f_99.f_58[120])
						func_466(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_466(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_466(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_466(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_466(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_466(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_466(&unk, -99, -99, Global_114370.f_2366.f_539.f_196[0], Global_114370.f_2366.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_466(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_466(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_466(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_466(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_466(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_466(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_466(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_466(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_466(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_466(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_466(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_466(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_466(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_466(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_466(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_466(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_466(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_466(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_466(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_466(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_466(&unk, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_466(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_466(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_466(&unk, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_466(&unk, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_466(&unk, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_466(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_466(&unk, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_466(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_466(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_466(&unk, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_466(&unk, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_466(&unk, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_466(&unk, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_466(&unk, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_466(&unk, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_466(&unk, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_466(&unk, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_466(&unk, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_466(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_466(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_466(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_466(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_466(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_466(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_466(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_466(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_464(&unk, iParam0, plParam1, 53);
					break;
			}
			break;
	
		case joaat("Player_One"):
			switch (plParam1)
			{
				case 0:
					func_466(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_466(&unk, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_466(&unk, -99, -99, Global_114370.f_2366.f_539.f_196[1], Global_114370.f_2366.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_466(&unk, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_466(&unk, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_466(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_466(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_466(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_466(&unk, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_466(&unk, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_466(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_466(&unk, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_466(&unk, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_466(&unk, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_466(&unk, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_466(&unk, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_466(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_466(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_466(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_466(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_466(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_466(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_466(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_466(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_466(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_466(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_466(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_466(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_466(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_466(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_466(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_466(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_466(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_466(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_466(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_466(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_466(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_466(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_466(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_466(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_466(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_466(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_466(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_466(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_466(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_466(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_466(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_464(&unk, iParam0, plParam1, 47);
					break;
			}
			break;
	
		case joaat("Player_Two"):
			switch (plParam1)
			{
				case 0:
					func_466(&unk, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_466(&unk, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_466(&unk, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_466(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_466(&unk, -99, -99, Global_114370.f_2366.f_539.f_196[2], Global_114370.f_2366.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_466(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_466(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_466(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_466(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_466(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_466(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_466(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_466(&unk, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_466(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_466(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_466(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_466(&unk, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_466(&unk, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_466(&unk, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_466(&unk, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_466(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_466(&unk, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_466(&unk, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_466(&unk, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_466(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_466(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_466(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_466(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_466(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_466(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_466(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_466(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_466(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_466(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_466(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_466(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_466(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_466(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_466(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_466(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_466(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_466(&unk, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_466(&unk, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_466(&unk, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_466(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_466(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_466(&unk, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_466(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_464(&unk, iParam0, plParam1, 48);
					break;
			}
			break;
	
		case joaat("MP_M_Freemode_01"):
			switch (plParam1)
			{
				case 0:
					func_466(&unk, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_466(&unk, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_466(&unk, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_466(&unk, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_466(&unk, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_466(&unk, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_466(&unk, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_466(&unk, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_466(&unk, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_466(&unk, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_466(&unk, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_466(&unk, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_466(&unk, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_466(&unk, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_466(&unk, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_466(&unk, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_466(&unk, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_466(&unk, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_466(&unk, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_466(&unk, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_466(&unk, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_466(&unk, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_466(&unk, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_466(&unk, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_466(&unk, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_466(&unk, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_464(&unk, iParam0, plParam1, 26);
					break;
			}
			break;
	
		case joaat("MP_F_Freemode_01"):
			switch (plParam1)
			{
				case 0:
					func_466(&unk, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_466(&unk, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_466(&unk, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_466(&unk, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_466(&unk, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_466(&unk, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_466(&unk, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_466(&unk, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_466(&unk, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_466(&unk, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_466(&unk, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_466(&unk, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_466(&unk, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_466(&unk, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_466(&unk, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_466(&unk, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_466(&unk, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_466(&unk, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_466(&unk, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_466(&unk, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_466(&unk, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_466(&unk, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_466(&unk, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_466(&unk, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_466(&unk, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_466(&unk, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_466(&unk, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_466(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_464(&unk, iParam0, plParam1, 28);
					break;
			}
			break;
	}

	return unk;
}

void func_464(var uParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x252EC
{
	int num;
	var unk;
	int num2;
	var unk18;
	int i;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	num = 0;

	if (iParam1 == joaat("Player_Zero"))
	{
		num = 0;
		uParam0->[13] = 10 + (plParam2 - iParam3);
	}
	else if (iParam1 == joaat("Player_One"))
	{
		num = 1;
		uParam0->[13] = 9 + (plParam2 - iParam3);
	}
	else if (iParam1 == joaat("Player_Two"))
	{
		num = 2;
		uParam0->[13] = 9 + (plParam2 - iParam3);
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		num = 3;
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		num = 4;
	}

	unk_0xF2DDA7CE028AB9CB(num, 0);
	unk_0x808A8ABE207631DF(plParam2 - iParam3, &unk);

	if (!unk_0x4BFA043D318BF9AE(unk))
	{
		for (i = 0; i < unk.f_4; i = i + 1)
		{
			if (unk_0xABE43EB6EBE5F2F5(unk.f_1, i, &num2))
			{
				if (num2 != 0 && num2 != -1 && num2 != joaat("0"))
				{
					if (num2.f_2 == 10)
					{
						unk_0x15D20F88F06530A5(&unk18);
						unk_0xA5690D702773BED4(num2, &unk18);
					
						if (num2 != unk18.f_1)
							uParam0->f_16 = 1;
					}
				
					if (num2.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_465(num2.f_2)] = num2;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_465(num2.f_2)] = func_448(iParam1, num2, func_465(num2.f_2), num);
					}
				}
				else if (num2.f_1 != -1)
				{
					uParam0->[func_465(num2.f_2)] = num2.f_1;
				}
			}
		}
	
		if (unk.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = unk.f_1;
	}

	return;
}

int func_465(int iParam0) // Position - 0x254D6
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_466(var uParam0, int iParam1, int iParam2, Player plParam3, Player plParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x25586
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = plParam3;
	uParam0->[4] = plParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
	return;
}

struct<14> func_467(int iParam0, int iParam1, Player plParam2, int iParam3) // Position - 0x255F7
{
	func_510();

	if (iParam0 == joaat("MP_M_Freemode_01"))
		func_494(iParam1, plParam2, iParam3);
	else if (iParam0 == joaat("MP_F_Freemode_01"))
		func_468(iParam1, plParam2, iParam3);

	return Global_79031[0 /*14*/];
}

void func_468(int iParam0, Player plParam1, int iParam2) // Position - 0x25638
{
	switch (iParam0)
	{
		case 2:
			func_493(plParam1, iParam2);
			break;
	
		case 11:
			func_492(plParam1, iParam2);
			break;
	
		case 8:
			func_491(plParam1, iParam2);
			break;
	
		case 9:
			func_490(plParam1, iParam2);
			break;
	
		case 3:
			func_489(plParam1, iParam2);
			break;
	
		case 4:
			func_488(plParam1, iParam2);
			break;
	
		case 6:
			func_487(plParam1, iParam2);
			break;
	
		case 1:
			func_486(plParam1, iParam2);
			break;
	
		case 7:
			func_485(plParam1, iParam2);
			break;
	
		case 10:
			func_484(plParam1, iParam2);
			break;
	
		case 14:
			func_483(plParam1, iParam2);
			break;
	
		case 12:
			func_482(plParam1, iParam2);
			break;
	
		case 5:
			func_481(plParam1, iParam2);
			break;
	
		case 0:
			func_479(plParam1, iParam2);
			break;
	
		case 13:
			func_469(plParam1);
			break;
	}

	return;
}

void func_469(Player plParam0) // Position - 0x25744
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;

	switch (plParam0)
	{
		case 31:
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			break;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_470(int iParam0, int iParam1, Player plParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x258FF
{
	int num;
	int num2;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = plParam2 % 32;
	iParam0->f_2 = plParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_478(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	unk_0x70E57E9927B6BA58(sParam3) != unk_0x70E57E9927B6BA58("NO_LABEL");

	if (bParam7)
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 3);

	if (bParam10)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 5);
	
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 1);
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 2);
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 6);
	
		if (func_477(14))
			return;
	
		if (iParam1 == 1)
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("REBREATHER"), 0))
				unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_475(Global_2883588, 1, true, true, -1))
				unk_0x8744D2E3FC95740E(&(iParam0->f_6), 2);
		
			if (!func_475(Global_2883588, 2, true, true, -1))
				unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_475(Global_2883588, 1, true, true, -1))
				unk_0x8744D2E3FC95740E(&(iParam0->f_6), 2);
		
			if (!func_475(Global_2883588, 2, true, true, -1))
				unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_475(Global_2883588, 1, true, true, -1))
				unk_0x8744D2E3FC95740E(&(iParam0->f_6), 2);
		
			if (!func_475(Global_2883588, 2, true, true, -1))
				unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 4);
		}
	
		if (unk_0x4BFA043D318BF9AE(Global_2883589))
		{
			unk_0x8744D2E3FC95740E(&(iParam0->f_6), 1);
			unk_0x8744D2E3FC95740E(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 0);
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 5);
	
		if (func_474(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 1);
	
		if (func_474(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 2);
	
		if (!func_474(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 4);
	}
	else
	{
		unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_477(14))
				return;
		
			num = func_76(func_473(iParam1, iParam0->f_2), Global_79028);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 1);
		
			num = func_76(func_472(iParam1, iParam0->f_2), Global_79028);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 2);
		
			if (func_471(iParam1, iParam0->f_2, &num2))
			{
				num = func_76(num2, Global_79028);
			
				if (!IS_BIT_SET(num, iParam0->f_1))
					unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 4);
			}
		}
		else
		{
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 1);
			unk_0x0B0C9A0F9AAEB7F0(&(iParam0->f_6), 2);
		}
	}

	return;
}

BOOL func_471(int iParam0, int iParam1, var uParam2) // Position - 0x25CA1
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

int func_472(int iParam0, int iParam1) // Position - 0x260A6
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
			
				case 3:
					return 1415;
			
				case 4:
					return 944;
			
				case 6:
					return 952;
			
				case 8:
					return 1416;
			
				case 9:
					return 1424;
			
				case 10:
					return 1426;
			
				case 1:
					return 960;
			
				case 7:
					return 1427;
			
				case 11:
					return 936;
			
				case 14:
					return 968;
			
				case 12:
					return 979;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
			
				case 4:
					return 945;
			
				case 6:
					return 953;
			
				case 8:
					return 1417;
			
				case 9:
					return 1425;
			
				case 7:
					return 1428;
			
				case 11:
					return 937;
			
				case 14:
					return 969;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
			
				case 4:
					return 946;
			
				case 6:
					return 954;
			
				case 8:
					return 1418;
			
				case 7:
					return 1429;
			
				case 11:
					return 938;
			
				case 14:
					return 970;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
			
				case 6:
					return 955;
			
				case 8:
					return 1419;
			
				case 11:
					return 939;
			
				case 14:
					return 971;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
			
				case 6:
					return 956;
			
				case 8:
					return 1420;
			
				case 11:
					return 940;
			
				case 14:
					return 972;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
			
				case 6:
					return 957;
			
				case 8:
					return 1421;
			
				case 11:
					return 941;
			
				case 14:
					return 973;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
			
				case 6:
					return 958;
			
				case 8:
					return 1422;
			
				case 11:
					return 942;
			
				case 14:
					return 974;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
			
				case 6:
					return 959;
			
				case 8:
					return 1423;
			
				case 11:
					return 943;
			
				case 14:
					return 975;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
			}
			break;
	}

	return 936;
}

int func_473(int iParam0, int iParam1) // Position - 0x264A1
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
			
				case 3:
					return 1400;
			
				case 4:
					return 892;
			
				case 6:
					return 900;
			
				case 8:
					return 1401;
			
				case 9:
					return 1409;
			
				case 10:
					return 1411;
			
				case 1:
					return 908;
			
				case 7:
					return &_DOES_ENTITY_EXIST_AND_IS_ALIVE;
			
				case 11:
					return 884;
			
				case 14:
					return 916;
			
				case 12:
					return 927;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
			
				case 4:
					return 893;
			
				case 6:
					return 901;
			
				case 8:
					return 1402;
			
				case 9:
					return 1410;
			
				case 7:
					return 1413;
			
				case 11:
					return 885;
			
				case 14:
					return 917;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
			
				case 4:
					return 894;
			
				case 6:
					return 902;
			
				case 8:
					return 1403;
			
				case 7:
					return 1414;
			
				case 11:
					return 886;
			
				case 14:
					return 918;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
			
				case 6:
					return 903;
			
				case 8:
					return 1404;
			
				case 11:
					return 887;
			
				case 14:
					return 919;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
			
				case 6:
					return 904;
			
				case 8:
					return 1405;
			
				case 11:
					return 888;
			
				case 14:
					return 920;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
			
				case 6:
					return 905;
			
				case 8:
					return 1406;
			
				case 11:
					return 889;
			
				case 14:
					return 921;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
			
				case 6:
					return 906;
			
				case 8:
					return 1407;
			
				case 11:
					return 890;
			
				case 14:
					return 922;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
			
				case 6:
					return 907;
			
				case 8:
					return 1408;
			
				case 11:
					return 891;
			
				case 14:
					return 923;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
			}
			break;
	}

	return 884;
}

BOOL func_474(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2689C
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/][iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/][iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				unk_0x0B0C9A0F9AAEB7F0(&Global_114370.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				unk_0x8744D2E3FC95740E(&Global_114370.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_114370.f_2366[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}

	return false;
}

BOOL func_475(Player plParam0, int iParam1, BOOL bParam2, BOOL bParam3, Player plParam4) // Position - 0x2773F
{
	Player player;
	int num;
	int num2;
	int num3;

	player = Global_79028;

	if (plParam4 != -1)
		player = plParam4;

	if (func_476(plParam0, iParam1, &num2, &num, bParam2, bParam3))
	{
		num3 = func_76(num2, player);
		return IS_BIT_SET(num3, num);
	}

	return false;
}

BOOL func_476(Player plParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2777D
{
	int value;

	*uParam2 = 14626;

	if (bParam4 && Global_4540169 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (plParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (plParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (plParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (plParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	value = -1;

	if (bParam4)
		if (Global_4540169)
			value = unk_0x82ADFEA98A0C26DC(plParam0);
		else
			value = unk_0x6F4B2AB7CFB2F472(plParam0);
	else if (bParam5)
		value = unk_0x82ADFEA98A0C26DC(plParam0);
	else
		value = unk_0x6F4B2AB7CFB2F472(plParam0);

	if (value == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = 3673;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = 3797;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = 5400;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = &func_24;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = &func_27;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = 8311;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = &func_59;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 231:
					*uParam2 = 10304;
					break;
			
				case 232:
					*uParam2 = 10305;
					break;
			
				case 233:
					*uParam2 = 10306;
					break;
			
				case 234:
					*uParam2 = 10307;
					break;
			
				case 235:
					*uParam2 = 10308;
					break;
			
				case 236:
					*uParam2 = 10309;
					break;
			
				case 237:
					*uParam2 = 10310;
					break;
			
				case 238:
					*uParam2 = 10311;
					break;
			
				case 239:
					*uParam2 = 10312;
					break;
			
				case 240:
					*uParam2 = 10313;
					break;
			
				case 241:
					*uParam2 = 10314;
					break;
			
				case 242:
					*uParam2 = 10315;
					break;
			
				case 243:
					*uParam2 = 10316;
					break;
			
				case 244:
					*uParam2 = 10317;
					break;
			
				case 245:
					*uParam2 = 10318;
					break;
			
				case 246:
					*uParam2 = 10319;
					break;
			
				case 247:
					*uParam2 = 10320;
					break;
			
				case 248:
					*uParam2 = 10321;
					break;
			
				case 249:
					*uParam2 = 10322;
					break;
			
				case 250:
					*uParam2 = 10323;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 251:
					*uParam2 = 10420;
					break;
			
				case 252:
					*uParam2 = 10421;
					break;
			
				case 253:
					*uParam2 = 10422;
					break;
			
				case 254:
					*uParam2 = 10423;
					break;
			
				case 255:
					*uParam2 = 10424;
					break;
			
				case 256:
					*uParam2 = 10425;
					break;
			
				case 257:
					*uParam2 = 10426;
					break;
			
				case 258:
					*uParam2 = 10427;
					break;
			
				case 259:
					*uParam2 = 10428;
					break;
			
				case 260:
					*uParam2 = 10429;
					break;
			
				case 261:
					*uParam2 = 11847;
					break;
			
				case 262:
					*uParam2 = 11848;
					break;
			
				case 263:
					*uParam2 = 11849;
					break;
			
				case 264:
					*uParam2 = 11850;
					break;
			
				case 265:
					*uParam2 = 11851;
					break;
			
				case 266:
					*uParam2 = 11852;
					break;
			
				case 267:
					*uParam2 = 11853;
					break;
			
				case 268:
					*uParam2 = 11854;
					break;
			
				case 269:
					*uParam2 = 11855;
					break;
			
				case 270:
					*uParam2 = 11856;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 271:
					*uParam2 = 11878;
					break;
			
				case 272:
					*uParam2 = 11879;
					break;
			
				case 273:
					*uParam2 = 11880;
					break;
			
				case 274:
					*uParam2 = 11881;
					break;
			
				case 275:
					*uParam2 = 11882;
					break;
			
				case 276:
					*uParam2 = 11883;
					break;
			
				case 277:
					*uParam2 = 11884;
					break;
			
				case 278:
					*uParam2 = 11885;
					break;
			
				case 279:
					*uParam2 = 11886;
					break;
			
				case 280:
					*uParam2 = 11887;
					break;
			
				case 281:
					*uParam2 = 11888;
					break;
			
				case 282:
					*uParam2 = 11889;
					break;
			
				case 283:
					*uParam2 = 11976;
					break;
			
				case 284:
					*uParam2 = 11977;
					break;
			
				case 285:
					*uParam2 = 11978;
					break;
			
				case 286:
					*uParam2 = 11979;
					break;
			
				case 287:
					*uParam2 = 11980;
					break;
			
				case 288:
					*uParam2 = 11981;
					break;
			
				case 289:
					*uParam2 = 11982;
					break;
			
				case 290:
					*uParam2 = 11983;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 291:
					*uParam2 = 11984;
					break;
			
				case 292:
					*uParam2 = 11985;
					break;
			
				case 293:
					*uParam2 = 11986;
					break;
			
				case 294:
					*uParam2 = 11987;
					break;
			
				case 295:
					*uParam2 = 11988;
					break;
			
				case 296:
					*uParam2 = 11989;
					break;
			
				case 297:
					*uParam2 = 11990;
					break;
			
				case 298:
					*uParam2 = 12190;
					break;
			
				case 299:
					*uParam2 = 12191;
					break;
			
				case 300:
					*uParam2 = 12192;
					break;
			
				case 301:
					*uParam2 = 12193;
					break;
			
				case 302:
					*uParam2 = 12194;
					break;
			
				case 303:
					*uParam2 = 12195;
					break;
			
				case 304:
					*uParam2 = 12196;
					break;
			
				case 305:
					*uParam2 = 12197;
					break;
			}
			break;
	
		case 2:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = 2084;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = 5441;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = &func_28;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 231:
					*uParam2 = 10324;
					break;
			
				case 232:
					*uParam2 = 10325;
					break;
			
				case 233:
					*uParam2 = 10326;
					break;
			
				case 234:
					*uParam2 = 10327;
					break;
			
				case 235:
					*uParam2 = 10328;
					break;
			
				case 236:
					*uParam2 = 10329;
					break;
			
				case 237:
					*uParam2 = 10330;
					break;
			
				case 238:
					*uParam2 = 10331;
					break;
			
				case 239:
					*uParam2 = 10332;
					break;
			
				case 240:
					*uParam2 = 10333;
					break;
			
				case 241:
					*uParam2 = 10334;
					break;
			
				case 242:
					*uParam2 = 10335;
					break;
			
				case 243:
					*uParam2 = 10336;
					break;
			
				case 244:
					*uParam2 = 10337;
					break;
			
				case 245:
					*uParam2 = 10338;
					break;
			
				case 246:
					*uParam2 = 10339;
					break;
			
				case 247:
					*uParam2 = 10340;
					break;
			
				case 248:
					*uParam2 = 10341;
					break;
			
				case 249:
					*uParam2 = 10342;
					break;
			
				case 250:
					*uParam2 = 10343;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 251:
					*uParam2 = 10430;
					break;
			
				case 252:
					*uParam2 = 10431;
					break;
			
				case 253:
					*uParam2 = 10432;
					break;
			
				case 254:
					*uParam2 = 10433;
					break;
			
				case 255:
					*uParam2 = 10434;
					break;
			
				case 256:
					*uParam2 = 10435;
					break;
			
				case 257:
					*uParam2 = 10436;
					break;
			
				case 258:
					*uParam2 = 10437;
					break;
			
				case 259:
					*uParam2 = 10438;
					break;
			
				case 260:
					*uParam2 = 10439;
					break;
			
				case 261:
					*uParam2 = 11857;
					break;
			
				case 262:
					*uParam2 = 11858;
					break;
			
				case 263:
					*uParam2 = 11859;
					break;
			
				case 264:
					*uParam2 = 11860;
					break;
			
				case 265:
					*uParam2 = 11861;
					break;
			
				case 266:
					*uParam2 = 11862;
					break;
			
				case 267:
					*uParam2 = 11863;
					break;
			
				case 268:
					*uParam2 = 11864;
					break;
			
				case 269:
					*uParam2 = 11865;
					break;
			
				case 270:
					*uParam2 = 11866;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 271:
					*uParam2 = 11890;
					break;
			
				case 272:
					*uParam2 = 11891;
					break;
			
				case 273:
					*uParam2 = 11892;
					break;
			
				case 274:
					*uParam2 = 11893;
					break;
			
				case 275:
					*uParam2 = 11894;
					break;
			
				case 276:
					*uParam2 = 11895;
					break;
			
				case 277:
					*uParam2 = 11896;
					break;
			
				case 278:
					*uParam2 = 11897;
					break;
			
				case 279:
					*uParam2 = 11898;
					break;
			
				case 280:
					*uParam2 = 11899;
					break;
			
				case 281:
					*uParam2 = 11900;
					break;
			
				case 282:
					*uParam2 = 11901;
					break;
			
				case 283:
					*uParam2 = 11991;
					break;
			
				case 284:
					*uParam2 = 11992;
					break;
			
				case 285:
					*uParam2 = 11993;
					break;
			
				case 286:
					*uParam2 = 11994;
					break;
			
				case 287:
					*uParam2 = 11995;
					break;
			
				case 288:
					*uParam2 = 11996;
					break;
			
				case 289:
					*uParam2 = 11997;
					break;
			
				case 290:
					*uParam2 = 11998;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value) / 32f))
			{
				case 291:
					*uParam2 = 11999;
					break;
			
				case 292:
					*uParam2 = 12000;
					break;
			
				case 293:
					*uParam2 = 12001;
					break;
			
				case 294:
					*uParam2 = 12002;
					break;
			
				case 295:
					*uParam2 = 12003;
					break;
			
				case 296:
					*uParam2 = 12004;
					break;
			
				case 297:
					*uParam2 = 12005;
					break;
			
				case 298:
					*uParam2 = 12198;
					break;
			
				case 299:
					*uParam2 = 12199;
					break;
			
				case 300:
					*uParam2 = 12200;
					break;
			
				case 301:
					*uParam2 = 12201;
					break;
			
				case 302:
					*uParam2 = 12202;
					break;
			
				case 303:
					*uParam2 = 12203;
					break;
			
				case 304:
					*uParam2 = 12204;
					break;
			
				case 305:
					*uParam2 = 12205;
					break;
			}
			break;
	}

	*uParam3 = value % 32;
	return *uParam2 != 14626;
}

BOOL func_477(int iParam0) // Position - 0x2A26C
{
	return Global_43922 == iParam0;
}

int func_478(int iParam0) // Position - 0x2A27A
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_479(Player plParam0, int iParam1) // Position - 0x2A34E
{
	int num;

	num = 0;
	Global_79031[0 /*14*/].f_5 = 4;
	func_480(num, plParam0, 0, iParam1);
	return;
}

void func_480(int iParam0, Player plParam1, int iParam2, int iParam3) // Position - 0x2A36E
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;

	num = plParam1 - iParam2;
	num = num;

	if (num < 0)
		return;

	num2 = Global_79031[0 /*14*/].f_5;

	if (iParam0 == 12)
	{
		num4 = plParam1 - iParam2;
	
		if (num4 >= 0)
		{
			num5 = unk_0xF2DDA7CE028AB9CB(num2, 0);
		
			if (num5 > num4)
			{
				unk_0x808A8ABE207631DF(num4, &num3);
				Global_2883588 = num3.f_1;
				Global_2883589 = num3;
				func_470(&Global_79031[0 /*14*/], iParam0, plParam1, &(num3.f_7), 0, 0, num3.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_470(&Global_79031[0 /*14*/], iParam0, plParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		unk_0x7A491C9A90975007(&num6);
		num8 = plParam1 - iParam2;
	
		if (num8 >= 0)
		{
			num9 = unk_0x7B6C0A0D604E68FA(num2, 10, -1, 1, -1, -1);
		
			if (num9 > num8)
			{
				unk_0x2DBB2D25D50A5392(num8, &num6);
			
				if (num6.f_6 == 0)
					num7 = 9;
				else if (num6.f_6 == 1)
					num7 = 10;
				else if (num6.f_6 == 2)
					num7 = 2;
				else if (num6.f_6 == 3)
					num7 = 3;
				else if (num6.f_6 == 4)
					num7 = 4;
				else if (num6.f_6 == 5)
					num7 = 5;
				else if (num6.f_6 == 6)
					num7 = 6;
				else if (num6.f_6 == 7)
					num7 = 7;
				else if (num6.f_6 == 8)
					num7 = 8;
				else
					num7 = -1;
			
				Global_2883588 = num6.f_1;
				Global_2883589 = num6;
				func_470(&Global_79031[0 /*14*/], iParam0, plParam1, &(num6.f_9), num6.f_3, num6.f_4, num6.f_5, unk_0x304A39EB177D246B(num6.f_1, joaat("OUTFIT_ONLY"), 0), num7, 2, num6.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x15D20F88F06530A5(&num10);
	
		if (iParam3 != -1 && Global_79229)
		{
			unk_0xA5690D702773BED4(iParam3, &num10);
			Global_2883588 = num10.f_1;
			Global_2883589 = num10;
			func_470(&Global_79031[0 /*14*/], iParam0, plParam1, &(num10.f_9), num10.f_3, num10.f_4, num10.f_5, unk_0x304A39EB177D246B(num10.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, num10.f_1 != 0);
			return;
		}
	
		num11 = plParam1 - iParam2;
	
		if (num11 >= 0)
		{
			num12 = unk_0x7B6C0A0D604E68FA(num2, 10, -1, 0, -1, func_10(iParam0));
		
			if (num12 > num11)
			{
				unk_0xD36906FE7BBBDB62(num11, &num10);
				Global_2883588 = num10.f_1;
				Global_2883589 = num10;
				func_470(&Global_79031[0 /*14*/], iParam0, plParam1, &(num10.f_9), num10.f_3, num10.f_4, num10.f_5, unk_0x304A39EB177D246B(num10.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, num10.f_1 != 0);
				return;
			}
		}
	}

	return;
}

void func_481(Player plParam0, int iParam1) // Position - 0x2A5F5
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 4;
			func_480(num6, plParam0, 9, iParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num3, 16);
	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_482(Player plParam0, int iParam1) // Position - 0x2A6F8
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S1" /*The Indie Heart*/, 16);
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S2" /*The Kitten*/, 16);
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S3" /*The Vacation*/, 16);
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S4" /*The Girly*/, 16);
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S5" /*The Standout*/, 16);
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S6" /*The Streetwise*/, 16);
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S7" /*The Butterfly*/, 16);
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_S8" /*The Festival*/, 16);
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P1" /*The Interview*/, 16);
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P2" /*The Red Hot*/, 16);
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P3" /*The Upmarket*/, 16);
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P4" /*The Power Suit*/, 16);
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P5" /*The Versatile*/, 16);
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P6" /*The Egyptian*/, 16);
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P7" /*The Chalet*/, 16);
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P8" /*The Cougar*/, 16);
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P9" /*The Spring Break*/, 16);
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_P10" /*The Yacht Club*/, 16);
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B1" /*The Holla Over*/, 16);
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B2" /*The Tough Chick*/, 16);
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B3" /*The Chica*/, 16);
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B4" /*The Tomboy*/, 16);
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B5" /*The Basics*/, 16);
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B6" /*The Young Luck*/, 16);
			break;
	
		case 25:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B7" /*The Workout*/, 16);
			break;
	
		case 26:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B8" /*The She Devil*/, 16);
			break;
	
		case 27:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMF_B9" /*The Beach Beauty*/, 16);
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 4;
			func_480(num6, plParam0, 28, iParam1);
			return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_483(Player plParam0, int iParam1) // Position - 0x2A9D7
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 14;
	num6 = 0;

	switch (plParam0)
	{
		case 0:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 0;
			break;
	
		case 1:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 1;
			break;
	
		case 2:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 2;
			break;
	
		case 3:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 3;
			break;
	
		case 4:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 4;
			break;
	
		case 5:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 5;
			break;
	
		case 6:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 6;
			break;
	
		case 7:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 7;
			break;
	
		case 8:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_0" /*Red Ear Defenders*/, 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_1" /*Magenta Ear Defenders*/, 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_2" /*Green Ear Defenders*/, 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_3" /*Yellow Ear Defenders*/, 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_4" /*Desert Camo Ear Defenders*/, 16);
			num = 0;
			num2 = 4;
			value = 235;
			num3 = 0;
			num6 = 1;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_5" /*Blue Ear Defenders*/, 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 0;
			num6 = 1;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_6" /*Pale Blue Ear Defenders*/, 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_0_7" /*Orange Ear Defenders*/, 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (plParam0)
	{
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_1_0", 16);
			num = 1;
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_0", 16);
			num = 2;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_1" /*Pink Accent Cowgirl Hat*/, 16);
			num = 2;
			num2 = 1;
			value = 5000;
			num3 = 0;
			num6 = 1;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_2", 16);
			num = 2;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_3", 16);
			num = 2;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_4", 16);
			num = 2;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_5", 16);
			num = 2;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_6", 16);
			num = 2;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_7", 16);
			num = 2;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_0", 16);
			num = 3;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_1", 16);
			num = 3;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_2", 16);
			num = 3;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_3", 16);
			num = 3;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_4", 16);
			num = 3;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_5", 16);
			num = 3;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_6", 16);
			num = 3;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_7" /*Gray Plaid Canvas Hat*/, 16);
			num = 3;
			num2 = 7;
			value = 120;
			num3 = 0;
			num6 = 1;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_0" /*Black LS Fitted Cap*/, 16);
			num = 4;
			num2 = 0;
			value = 400;
			num3 = 0;
			num6 = 1;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_1" /*Fruntalot Fitted Cap*/, 16);
			num = 4;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_2" /*Broker Fitted Cap*/, 16);
			num = 4;
			num2 = 2;
			value = 375;
			num3 = 0;
			num6 = 1;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_3" /*SA Fitted Cap*/, 16);
			num = 4;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_4" /*SA Boars Fitted Cap*/, 16);
			num = 4;
			num2 = 4;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_5" /*Stank Fitted Cap*/, 16);
			num = 4;
			num2 = 5;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_6" /*Red Mist XI Fitted Cap*/, 16);
			num = 4;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_4_7" /*LS Corkers Fitted Cap*/, 16);
			num = 4;
			num2 = 7;
			value = 325;
			num3 = 0;
			num6 = 1;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_0" /*Rearwall Black Beanie*/, 16);
			num = 5;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_1" /*Crevis Ash Beanie*/, 16);
			num = 5;
			num2 = 1;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_2" /*Crevis Pink Beanie*/, 16);
			num = 5;
			num2 = 2;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_3" /*LS Panic Beanie*/, 16);
			num = 5;
			num2 = 3;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_4" /*SA Beanie*/, 16);
			num = 5;
			num2 = 4;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_5" /*Hawaiian Snow Blue Beanie*/, 16);
			num = 5;
			num2 = 5;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_6" /*Rearwall Lime Beanie*/, 16);
			num = 5;
			num2 = 6;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_5_7" /*Hawaiian Snow Plaid Beanie*/, 16);
			num = 5;
			num2 = 7;
			value = 255;
			num3 = 0;
			num6 = 1;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_0" /*Black Military Cap*/, 16);
			num = 6;
			num2 = 0;
			value = 360;
			num3 = 0;
			num6 = 1;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_1" /*Green Military Cap*/, 16);
			num = 6;
			num2 = 1;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_2" /*Leopard Military Cap*/, 16);
			num = 6;
			num2 = 2;
			value = 3970;
			num3 = 0;
			num6 = 1;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_3" /*Tan Military Cap*/, 16);
			num = 6;
			num2 = 3;
			value = 135;
			num3 = 0;
			num6 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_4" /*Denim Military Cap*/, 16);
			num = 6;
			num2 = 4;
			value = 1355;
			num3 = 0;
			num6 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_5" /*Field Camo Military Cap*/, 16);
			num = 6;
			num2 = 5;
			value = 110;
			num3 = 0;
			num6 = 1;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_6" /*Desert Camo Military Cap*/, 16);
			num = 6;
			num2 = 6;
			value = 140;
			num3 = 0;
			num6 = 1;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_6_7" /*Woodland Camo Military Cap*/, 16);
			num = 6;
			num2 = 7;
			value = 130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_0" /*Navy Flat Cap*/, 16);
			num = 7;
			num2 = 0;
			value = 230;
			num3 = 0;
			num6 = 1;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_1" /*White Flat Cap*/, 16);
			num = 7;
			num2 = 1;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_2" /*Gray Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 2;
			value = 515;
			num3 = 0;
			num6 = 1;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_3" /*Brown Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 3;
			value = 545;
			num3 = 0;
			num6 = 1;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_4" /*Red Flat Cap*/, 16);
			num = 7;
			num2 = 4;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_5" /*Pink Flat Cap*/, 16);
			num = 7;
			num2 = 5;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_6" /*Green Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 6;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_7_7" /*Fruity Plaid Flat Cap*/, 16);
			num = 7;
			num2 = 7;
			value = 1440;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (plParam0)
	{
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_0", 16);
			num = 8;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_0" /*Fruit Cap*/, 16);
			num = 9;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_1" /*247 Cap*/, 16);
			num = 9;
			num2 = 1;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_2" /*Fred's Cap*/, 16);
			num = 9;
			num2 = 2;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_3" /*US Post LS Cap*/, 16);
			num = 9;
			num2 = 3;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_4" /*Swallow Cap*/, 16);
			num = 9;
			num2 = 4;
			value = 50;
			num3 = 0;
			num6 = 1;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_5" /*CNT Cap*/, 16);
			num = 9;
			num2 = 5;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_6" /*Peachy Chics Snakeskin Cap*/, 16);
			num = 9;
			num2 = 6;
			value = 575;
			num3 = 0;
			num6 = 1;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_9_7" /*Peachy Chics Leopard Cap*/, 16);
			num = 9;
			num2 = 7;
			value = 605;
			num3 = 0;
			num6 = 1;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_0", 16);
			num = 10;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_1", 16);
			num = 10;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_2", 16);
			num = 10;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_3", 16);
			num = 10;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_4", 16);
			num = 10;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_5", 16);
			num = 10;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_6", 16);
			num = 10;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_7" /*Tan Patterned Cap*/, 16);
			num = 10;
			num2 = 7;
			value = 285;
			num3 = 0;
			num6 = 1;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_1" /*Black Sun Hat*/, 16);
			num = 11;
			num2 = 1;
			value = 2125;
			num3 = 0;
			num6 = 1;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_3", 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_6", 16);
			num = 11;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_0" /*Black Saggy Beanie*/, 16);
			num = 12;
			num2 = 0;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_6" /*Hawaiian Snow Saggy Beanie*/, 16);
			num = 12;
			num2 = 6;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_7" /*Yeti Saggy Beanie*/, 16);
			num = 12;
			num2 = 7;
			value = 295;
			num3 = 0;
			num6 = 1;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_0" /*Tan Straw Hat*/, 16);
			num = 13;
			num2 = 0;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_1" /*Two-Tone Straw Hat*/, 16);
			num = 13;
			num2 = 1;
			value = 200;
			num3 = 0;
			num6 = 1;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_2" /*Brown Straw Hat*/, 16);
			num = 13;
			num2 = 2;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_3" /*Safari Straw Hat*/, 16);
			num = 13;
			num2 = 3;
			value = 855;
			num3 = 0;
			num6 = 1;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_4" /*Gray Patterned Straw Hat*/, 16);
			num = 13;
			num2 = 4;
			value = 1615;
			num3 = 0;
			num6 = 1;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_5" /*Brown Striped Straw Hat*/, 16);
			num = 13;
			num2 = 5;
			value = 1130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_6" /*Gray Straw Hat*/, 16);
			num = 13;
			num2 = 6;
			value = 165;
			num3 = 0;
			num6 = 1;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_13_7" /*Navy Straw Hat*/, 16);
			num = 13;
			num2 = 7;
			value = 215;
			num3 = 0;
			num6 = 1;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_0" /*Black Beret*/, 16);
			num = 14;
			num2 = 0;
			value = 145;
			num3 = 0;
			num6 = 1;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_1" /*Cherry Beret*/, 16);
			num = 14;
			num2 = 1;
			value = 250;
			num3 = 0;
			num6 = 1;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_2" /*Purple Beret*/, 16);
			num = 14;
			num2 = 2;
			value = 110;
			num3 = 0;
			num6 = 1;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_3" /*White Beret*/, 16);
			num = 14;
			num2 = 3;
			value = 145;
			num3 = 0;
			num6 = 1;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_4" /*Gray Beret*/, 16);
			num = 14;
			num2 = 4;
			value = 105;
			num3 = 0;
			num6 = 1;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_5" /*Navy Beret*/, 16);
			num = 14;
			num2 = 5;
			value = 105;
			num3 = 0;
			num6 = 1;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_6" /*Tan Beret*/, 16);
			num = 14;
			num2 = 6;
			value = 115;
			num3 = 0;
			num6 = 1;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_14_7" /*Magenta Beret*/, 16);
			num = 14;
			num2 = 7;
			value = 115;
			num3 = 0;
			num6 = 1;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_0" /*Beat Off White Headphones*/, 16);
			num = 15;
			num2 = 0;
			value = 390;
			num3 = 0;
			num6 = 1;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_1" /*Beat Off Black Headphones*/, 16);
			num = 15;
			num2 = 1;
			value = 395;
			num3 = 0;
			num6 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_2" /*Beat Off Red Headphones*/, 16);
			num = 15;
			num2 = 2;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_3" /*Beat Off Gray Headphones*/, 16);
			num = 15;
			num2 = 3;
			value = 425;
			num3 = 0;
			num6 = 1;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_4" /*Beat Off Navy Headphones*/, 16);
			num = 15;
			num2 = 4;
			value = 600;
			num3 = 0;
			num6 = 1;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_5" /*Beat Off Purple Headphones*/, 16);
			num = 15;
			num2 = 5;
			value = 590;
			num3 = 0;
			num6 = 1;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_6" /*Beat Off Pink Headphones*/, 16);
			num = 15;
			num2 = 6;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_15_7" /*Beat Off Orange Headphones*/, 16);
			num = 15;
			num2 = 7;
			value = 555;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (plParam0)
	{
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_0" /*Western MC Yellow Helmet*/, 16);
			num = 16;
			num2 = 0;
			value = 1060;
			num3 = 0;
			num6 = 2;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_1" /*Steel Horse Blue Helmet*/, 16);
			num = 16;
			num2 = 1;
			value = 1400;
			num3 = 0;
			num6 = 2;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_2" /*Steel Horse Orange Helmet*/, 16);
			num = 16;
			num2 = 2;
			value = 1315;
			num3 = 0;
			num6 = 2;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_3" /*Western MC Green Helmet*/, 16);
			num = 16;
			num2 = 3;
			value = 1230;
			num3 = 0;
			num6 = 2;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_4" /*Western MC Red Helmet*/, 16);
			num = 16;
			num2 = 4;
			value = 1145;
			num3 = 0;
			num6 = 2;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_5" /*Steel Horse Black Helmet*/, 16);
			num = 16;
			num2 = 5;
			value = 8450;
			num3 = 0;
			num6 = 2;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_6" /*Black Helmet*/, 16);
			num = 16;
			num2 = 6;
			value = 675;
			num3 = 0;
			num6 = 2;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_16_7" /*Western MC Lilac Helmet*/, 16);
			num = 16;
			num2 = 7;
			value = 8750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_0" /*Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 0;
			value = 975;
			num3 = 0;
			num6 = 2;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_1" /*Orange Open-Face Helmet*/, 16);
			num = 17;
			num2 = 1;
			value = 750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_2" /*Pale Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 2;
			value = 865;
			num3 = 0;
			num6 = 2;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_3" /*Red Open-Face Helmet*/, 16);
			num = 17;
			num2 = 3;
			value = 890;
			num3 = 0;
			num6 = 2;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_4" /*Gray Open-Face Helmet*/, 16);
			num = 17;
			num2 = 4;
			value = 730;
			num3 = 0;
			num6 = 2;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_5" /*Black Open-Face Helmet*/, 16);
			num = 17;
			num2 = 5;
			value = 650;
			num3 = 0;
			num6 = 2;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_6" /*Pink Open-Face Helmet*/, 16);
			num = 17;
			num2 = 6;
			value = 645;
			num3 = 0;
			num6 = 2;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_17_7" /*White Open-Face Helmet*/, 16);
			num = 17;
			num2 = 7;
			value = 755;
			num3 = 0;
			num6 = 2;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_0" /*Shatter Pattern Helmet*/, 16);
			num = 18;
			num2 = 0;
			value = 13850;
			num3 = 0;
			num6 = 2;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_1" /*Stars Helmet*/, 16);
			num = 18;
			num2 = 1;
			value = 2900;
			num3 = 0;
			num6 = 2;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_2" /*Squared Helmet*/, 16);
			num = 18;
			num2 = 2;
			value = 2895;
			num3 = 0;
			num6 = 2;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_3" /*Crimson Helmet*/, 16);
			num = 18;
			num2 = 3;
			value = 12500;
			num3 = 0;
			num6 = 2;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_4" /*Skull Helmet*/, 16);
			num = 18;
			num2 = 4;
			value = 15000;
			num3 = 0;
			num6 = 2;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_5" /*Ace of Spades Helmet*/, 16);
			num = 18;
			num2 = 5;
			value = 14750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_6" /*Flamejob Helmet*/, 16);
			num = 18;
			num2 = 6;
			value = 13150;
			num3 = 0;
			num6 = 2;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMF_18_7" /*White Helmet*/, 16);
			num = 18;
			num2 = 7;
			value = 2925;
			num3 = 0;
			num6 = 2;
			break;
	}

	switch (plParam0)
	{
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_0" /*Hornet Sports Shades*/, 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_1" /*Two-Tone Sports Shades*/, 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_2" /*Orange Sports Shades*/, 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_3" /*Blue Sports Shades*/, 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_4" /*Marble Sports Shades*/, 16);
			num = 0;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_5" /*Purple Sports Shades*/, 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 1;
			num6 = 3;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_6" /*Topaz Sports Shades*/, 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_0_7" /*Beige Sports Shades*/, 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_8", 16);
			num = 0;
			num2 = 8;
			value = 820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_9", 16);
			num = 0;
			num2 = 9;
			value = 435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_10", 16);
			num = 0;
			num2 = 10;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_0" /*Copper Marbles*/, 16);
			num = 1;
			num2 = 0;
			value = 160;
			num3 = 1;
			num6 = 3;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_1" /*Blue Tint Marbles*/, 16);
			num = 1;
			num2 = 1;
			value = 165;
			num3 = 1;
			num6 = 3;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_2" /*Black Marbles*/, 16);
			num = 1;
			num2 = 2;
			value = 170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_3" /*Purple Marbles*/, 16);
			num = 1;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_4" /*Teal Marbles*/, 16);
			num = 1;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_5" /*Red Tint Marbles*/, 16);
			num = 1;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_6" /*White Marbles*/, 16);
			num = 1;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_1_7" /*Pink Tint Marbles*/, 16);
			num = 1;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_8", 16);
			num = 1;
			num2 = 8;
			value = 970;
			num3 = 1;
			num6 = 3;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_9", 16);
			num = 1;
			num2 = 9;
			value = 585;
			num3 = 1;
			num6 = 3;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_10", 16);
			num = 1;
			num2 = 10;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_0" /*Marble Mademoiselles*/, 16);
			num = 2;
			num2 = 0;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_1" /*Copper Mademoiselles*/, 16);
			num = 2;
			num2 = 1;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_2" /*Orange Tint Mademoiselles*/, 16);
			num = 2;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_3" /*Pink Tint Mademoiselles*/, 16);
			num = 2;
			num2 = 3;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_4" /*Walnut Mademoiselles*/, 16);
			num = 2;
			num2 = 4;
			value = 595;
			num3 = 1;
			num6 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_5" /*Black Mademoiselles*/, 16);
			num = 2;
			num2 = 5;
			value = 160;
			num3 = 1;
			num6 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_6" /*Vintage Red Mademoiselles*/, 16);
			num = 2;
			num2 = 6;
			value = 545;
			num3 = 1;
			num6 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_2_7" /*Gold Mademoiselles*/, 16);
			num = 2;
			num2 = 7;
			value = 590;
			num3 = 1;
			num6 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_8", 16);
			num = 2;
			num2 = 8;
			value = 1125;
			num3 = 1;
			num6 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_9", 16);
			num = 2;
			num2 = 9;
			value = 740;
			num3 = 1;
			num6 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_10", 16);
			num = 2;
			num2 = 10;
			value = 805;
			num3 = 1;
			num6 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_0" /*Zebra Shields*/, 16);
			num = 3;
			num2 = 0;
			value = 6250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_1" /*Ombre Shields*/, 16);
			num = 3;
			num2 = 1;
			value = 4065;
			num3 = 1;
			num6 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_2" /*Flame Shields*/, 16);
			num = 3;
			num2 = 2;
			value = 3585;
			num3 = 1;
			num6 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_3" /*Violet Shields*/, 16);
			num = 3;
			num2 = 3;
			value = 4075;
			num3 = 1;
			num6 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_4" /*Sun Shields*/, 16);
			num = 3;
			num2 = 4;
			value = 4935;
			num3 = 1;
			num6 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_5" /*Silver Accent Shields*/, 16);
			num = 3;
			num2 = 5;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_6" /*Party Shields*/, 16);
			num = 3;
			num2 = 6;
			value = 5600;
			num3 = 1;
			num6 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_3_7" /*Gold Shields*/, 16);
			num = 3;
			num2 = 7;
			value = 4790;
			num3 = 1;
			num6 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_8", 16);
			num = 3;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_9", 16);
			num = 3;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_10", 16);
			num = 3;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_0" /*Deep Walnut Retro*/, 16);
			num = 4;
			num2 = 0;
			value = 2245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_1" /*Marble Retro*/, 16);
			num = 4;
			num2 = 1;
			value = 250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_2" /*Beige Retro*/, 16);
			num = 4;
			num2 = 2;
			value = 210;
			num3 = 1;
			num6 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_3" /*Aqua Retro*/, 16);
			num = 4;
			num2 = 3;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_4" /*Dice Retro*/, 16);
			num = 4;
			num2 = 4;
			value = 1205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_5" /*Black Retro*/, 16);
			num = 4;
			num2 = 5;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_6" /*Toffee Retro*/, 16);
			num = 4;
			num2 = 6;
			value = 2215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_4_7" /*Red Retro*/, 16);
			num = 4;
			num2 = 7;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_8", 16);
			num = 4;
			num2 = 8;
			value = 2835;
			num3 = 1;
			num6 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_9", 16);
			num = 4;
			num2 = 9;
			value = 2450;
			num3 = 1;
			num6 = 3;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_10", 16);
			num = 4;
			num2 = 10;
			value = 2515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_0", 16);
			num = 5;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_1", 16);
			num = 5;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_2", 16);
			num = 5;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_3", 16);
			num = 5;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_4", 16);
			num = 5;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_5", 16);
			num = 5;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_6", 16);
			num = 5;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_7", 16);
			num = 5;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_8", 16);
			num = 5;
			num2 = 8;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_9", 16);
			num = 5;
			num2 = 9;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_10", 16);
			num = 5;
			num2 = 10;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_0" /*Purple Tint Bugs*/, 16);
			num = 6;
			num2 = 0;
			value = 5000;
			num3 = 1;
			num6 = 3;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_1", 16);
			num = 6;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_2", 16);
			num = 6;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_3", 16);
			num = 6;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_4", 16);
			num = 6;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_5", 16);
			num = 6;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_6", 16);
			num = 6;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_7", 16);
			num = 6;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_8", 16);
			num = 6;
			num2 = 8;
			value = 2820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_9", 16);
			num = 6;
			num2 = 9;
			value = 2435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_10", 16);
			num = 6;
			num2 = 10;
			value = 2500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_0" /*Champagne Figure 8s*/, 16);
			num = 7;
			num2 = 0;
			value = 4815;
			num3 = 1;
			num6 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_1" /*Platinum Figure 8s*/, 16);
			num = 7;
			num2 = 1;
			value = 4795;
			num3 = 1;
			num6 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_2" /*Sapphire Figure 8s*/, 16);
			num = 7;
			num2 = 2;
			value = 4305;
			num3 = 1;
			num6 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_3" /*Amethyst Figure 8s*/, 16);
			num = 7;
			num2 = 3;
			value = 4305;
			num3 = 1;
			num6 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_4" /*Gold Figure 8s*/, 16);
			num = 7;
			num2 = 4;
			value = 4965;
			num3 = 1;
			num6 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_5" /*White Figure 8s*/, 16);
			num = 7;
			num2 = 5;
			value = 480;
			num3 = 1;
			num6 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_6" /*Gray Figure 8s*/, 16);
			num = 7;
			num2 = 6;
			value = 465;
			num3 = 1;
			num6 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_7_7" /*Garnet Figure 8s*/, 16);
			num = 7;
			num2 = 7;
			value = 4320;
			num3 = 1;
			num6 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_8", 16);
			num = 7;
			num2 = 8;
			value = 2390;
			num3 = 1;
			num6 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_9", 16);
			num = 7;
			num2 = 9;
			value = 2005;
			num3 = 1;
			num6 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_10", 16);
			num = 7;
			num2 = 10;
			value = 2070;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (plParam0)
	{
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_0" /*Orange Tint Squared*/, 16);
			num = 8;
			num2 = 0;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_8", 16);
			num = 8;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_9", 16);
			num = 8;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_10", 16);
			num = 8;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_0" /*Lime Tint Shooters*/, 16);
			num = 9;
			num2 = 0;
			value = 70;
			num3 = 1;
			num6 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_1" /*Orange Tint Shooters*/, 16);
			num = 9;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_2" /*Blue Shooters*/, 16);
			num = 9;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_3" /*Tropic Shooters*/, 16);
			num = 9;
			num2 = 3;
			value = 570;
			num3 = 1;
			num6 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_4" /*Fly Shooters*/, 16);
			num = 9;
			num2 = 4;
			value = 525;
			num3 = 1;
			num6 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_5" /*Crimson Shooters*/, 16);
			num = 9;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_6" /*Green Tint Shooters*/, 16);
			num = 9;
			num2 = 6;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_9_7" /*Pink Shooters*/, 16);
			num = 9;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_8", 16);
			num = 9;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_9", 16);
			num = 9;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_10", 16);
			num = 9;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_0" /*Luxury Ice Sports*/, 16);
			num = 10;
			num2 = 0;
			value = 4065;
			num3 = 1;
			num6 = 3;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_1" /*Black Sports*/, 16);
			num = 10;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_2" /*Green Sports*/, 16);
			num = 10;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_3" /*Luxury Cowhide Sports*/, 16);
			num = 10;
			num2 = 3;
			value = 4275;
			num3 = 1;
			num6 = 3;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_4" /*Orange Sports*/, 16);
			num = 10;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_5" /*Black Pattern Sports*/, 16);
			num = 10;
			num2 = 5;
			value = 80;
			num3 = 1;
			num6 = 3;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_6" /*Blue Pattern Sports*/, 16);
			num = 10;
			num2 = 6;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_10_7" /*Pink Pattern Sports*/, 16);
			num = 10;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_8", 16);
			num = 10;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_9", 16);
			num = 10;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_10", 16);
			num = 10;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_0" /*Pewter Aviators*/, 16);
			num = 11;
			num2 = 0;
			value = &func_11;
			num3 = 1;
			num6 = 3;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_1" /*Steel Aviators*/, 16);
			num = 11;
			num2 = 1;
			value = 4165;
			num3 = 1;
			num6 = 3;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_2" /*Bronze Aviators*/, 16);
			num = 11;
			num2 = 2;
			value = 3670;
			num3 = 1;
			num6 = 3;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_3" /*Black Aviators*/, 16);
			num = 11;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_4" /*Neon Aviators*/, 16);
			num = 11;
			num2 = 4;
			value = 3620;
			num3 = 1;
			num6 = 3;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_5" /*Copper Aviators*/, 16);
			num = 11;
			num2 = 5;
			value = 3610;
			num3 = 1;
			num6 = 3;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_6" /*Gold Aviators*/, 16);
			num = 11;
			num2 = 6;
			value = 4140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_11_7" /*Slate Aviators*/, 16);
			num = 11;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_0", 16);
			num = 12;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_6", 16);
			num = 12;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_7", 16);
			num = 12;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_0", 16);
			num = 13;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_1", 16);
			num = 13;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_2", 16);
			num = 13;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_3", 16);
			num = 13;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_4", 16);
			num = 13;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_5", 16);
			num = 13;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_6", 16);
			num = 13;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_7", 16);
			num = 13;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_0" /*Black Cat Eyes*/, 16);
			num = 14;
			num2 = 0;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_1" /*Brown Marble Cat Eyes*/, 16);
			num = 14;
			num2 = 1;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_2" /*Pink Cat Eyes*/, 16);
			num = 14;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_3" /*Green Marble Cat Eyes*/, 16);
			num = 14;
			num2 = 3;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_4" /*Red Cat Eyes*/, 16);
			num = 14;
			num2 = 4;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_5" /*Teal Cat Eyes*/, 16);
			num = 14;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_6" /*Purple Cat Eyes*/, 16);
			num = 14;
			num2 = 6;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_14_7" /*Blue Cat Eyes*/, 16);
			num = 14;
			num2 = 7;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_8", 16);
			num = 14;
			num2 = 8;
			value = 1490;
			num3 = 1;
			num6 = 3;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_9", 16);
			num = 14;
			num2 = 9;
			value = 1105;
			num3 = 1;
			num6 = 3;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_10", 16);
			num = 14;
			num2 = 10;
			value = 1170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_0", 16);
			num = 15;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_1", 16);
			num = 15;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_2", 16);
			num = 15;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_3", 16);
			num = 15;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_4", 16);
			num = 15;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_5", 16);
			num = 15;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_6", 16);
			num = 15;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 318:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_7", 16);
			num = 15;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 319:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_0", 16);
			num = 0;
			num2 = 0;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 320:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_1", 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 321:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_2", 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 322:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_3", 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 323:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_4" /*Pewter Watch*/, 16);
			num = 0;
			num2 = 4;
			value = 825;
			num3 = 6;
			num6 = 4;
			break;
	
		case 324:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_0", 16);
			num = 1;
			num2 = 0;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 325:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_1", 16);
			num = 1;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 326:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_2", 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	}

	if (num6 == 1)
	{
		num7 = plParam0 - 10;
	
		if (num7 >= 0 && num7 < 121)
		{
			if (num7 > 8)
				num7 = num7 - 1;
		
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2054[num7] * Global_298659.f_26);
		}
	}
	else if (num6 == 2)
	{
		num8 = plParam0 - 131;
	
		if (num8 >= 0 && num8 < 24)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2175[num8] * Global_298659.f_27);
	}
	else if (num6 == 3)
	{
		num9 = plParam0 - 155;
	
		if (num9 >= 0 && num9 < 128)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2200[num9] * Global_298659.f_56);
	}
	else if (num6 == 4)
	{
		num10 = plParam0 - 319;
	
		if (num10 >= 0 && num10 < 10)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2329[num10] * Global_298659.f_28);
	}

	if (plParam0 >= 327)
	{
		Global_79031[0 /*14*/].f_5 = 4;
		func_480(num5, plParam0, 327, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("HAT"), 1))
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_26);
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("GLASSES"), 1))
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_56);
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("WATCH"), 1))
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_28);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_484(Player plParam0, int iParam1) // Position - 0x2D954
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;

	switch (plParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
			num2 = 0;
			num3 = 0;
			num = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 1;
			num3 = 0;
			num = 10000;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 2;
			num3 = 0;
			num = 5000;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 3;
			num3 = 0;
			num = 10000;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 4;
			num3 = 0;
			num = 5000;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 5;
			num3 = 0;
			num = 10000;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 4;
			func_480(num6, plParam0, 6, iParam1);
			return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_485(Player plParam0, int iParam1) // Position - 0x2DA59
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 7;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
		
			if (Global_262145.f_3974 != -1)
				value = Global_262145.f_3974;
			else
				value = 310;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
		
			if (Global_262145.f_3975 != -1)
				value = Global_262145.f_3975;
			else
				value = 125;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
		
			if (Global_262145.f_3976 != -1)
				value = Global_262145.f_3976;
			else
				value = 145;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
		
			if (Global_262145.f_3977 != -1)
				value = Global_262145.f_3977;
			else
				value = 130;
			break;
	
		case 5:
			num = 1;
			num2 = 4;
		
			if (Global_262145.f_3978 != -1)
				value = Global_262145.f_3978;
			else
				value = 265;
			break;
	
		case 6:
			num = 1;
			num2 = 5;
		
			if (Global_262145.f_3979 != -1)
				value = Global_262145.f_3979;
			else
				value = 280;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
		
			if (Global_262145.f_3980 != -1)
				value = Global_262145.f_3980;
			else
				value = 295;
			break;
	
		case 8:
			num = 2;
			num2 = 1;
		
			if (Global_262145.f_3981 != -1)
				value = Global_262145.f_3981;
			else
				value = 95;
			break;
	
		case 9:
			num = 2;
			num2 = 2;
		
			if (Global_262145.f_3982 != -1)
				value = Global_262145.f_3982;
			else
				value = 85;
			break;
	
		case 10:
			num = 2;
			num2 = 3;
		
			if (Global_262145.f_3983 != -1)
				value = Global_262145.f_3983;
			else
				value = 95;
			break;
	
		case 11:
			num = 2;
			num2 = 4;
		
			if (Global_262145.f_3984 != -1)
				value = Global_262145.f_3984;
			else
				value = 105;
			break;
	
		case 12:
			num = 2;
			num2 = 5;
		
			if (Global_262145.f_3985 != -1)
				value = Global_262145.f_3985;
			else
				value = 95;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
		
			if (Global_262145.f_3986 != -1)
				value = Global_262145.f_3986;
			else
				value = 35;
			break;
	
		case 14:
			num = 3;
			num2 = 1;
		
			if (Global_262145.f_3987 != -1)
				value = Global_262145.f_3987;
			else
				value = 35;
			break;
	
		case 15:
			num = 3;
			num2 = 2;
		
			if (Global_262145.f_3988 != -1)
				value = Global_262145.f_3988;
			else
				value = 30;
			break;
	
		case 16:
			num = 3;
			num2 = 3;
		
			if (Global_262145.f_3989 != -1)
				value = Global_262145.f_3989;
			else
				value = 40;
			break;
	
		case 17:
			num = 3;
			num2 = 4;
		
			if (Global_262145.f_3990 != -1)
				value = Global_262145.f_3990;
			else
				value = 35;
			break;
	
		case 18:
			num = 3;
			num2 = 5;
		
			if (Global_262145.f_3991 != -1)
				value = Global_262145.f_3991;
			else
				value = 35;
			break;
	
		case 19:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 21:
			num = 4;
			num2 = 2;
		
			if (Global_262145.f_3992 != -1)
				value = Global_262145.f_3992;
			else
				value = 355;
			break;
	
		case 22:
			num = 4;
			num2 = 3;
		
			if (Global_262145.f_3993 != -1)
				value = Global_262145.f_3993;
			else
				value = 370;
			break;
	
		case 23:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 24:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 25:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 26:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 28:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 5;
			num2 = 4;
		
			if (Global_262145.f_3994 != -1)
				value = Global_262145.f_3994;
			else
				value = 110;
			break;
	
		case 30:
			num = 5;
			num2 = 5;
		
			if (Global_262145.f_3995 != -1)
				value = Global_262145.f_3995;
			else
				value = 160;
			break;
	
		case 31:
			num = 6;
			num2 = 0;
		
			if (Global_262145.f_3996 != -1)
				value = Global_262145.f_3996;
			else
				value = 385;
			break;
	
		case 32:
			num = 6;
			num2 = 1;
		
			if (Global_262145.f_3997 != -1)
				value = Global_262145.f_3997;
			else
				value = 190;
			break;
	
		case 33:
			num = 6;
			num2 = 2;
		
			if (Global_262145.f_3998 != -1)
				value = Global_262145.f_3998;
			else
				value = 235;
			break;
	
		case 34:
			num = 6;
			num2 = 3;
		
			if (Global_262145.f_3999 != -1)
				value = Global_262145.f_3999;
			else
				value = 220;
			break;
	
		case 35:
			num = 6;
			num2 = 4;
		
			if (Global_262145.f_4000 != -1)
				value = Global_262145.f_4000;
			else
				value = 250;
			break;
	
		case 36:
			num = 6;
			num2 = 5;
		
			if (Global_262145.f_4001 != -1)
				value = Global_262145.f_4001;
			else
				value = 205;
			break;
	
		case 37:
			num = 7;
			num2 = 0;
		
			if (Global_262145.f_4002 != -1)
				value = Global_262145.f_4002;
			else
				value = 445;
			break;
	
		case 38:
			num = 7;
			num2 = 1;
		
			if (Global_262145.f_4003 != -1)
				value = Global_262145.f_4003;
			else
				value = 175;
			break;
	
		case 39:
			num = 7;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 8;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 49:
			num = 9;
			num2 = 0;
		
			if (Global_262145.f_4004 != -1)
				value = Global_262145.f_4004;
			else
				value = 340;
			break;
	
		case 50:
			num = 9;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 51:
			num = 9;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 52:
			num = 9;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 53:
			num = 9;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 9;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 4;
			func_480(num5, plParam0, 55, iParam1);
		
			if (Global_79031[0 /*14*/].f_7 > 0)
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_58);
		
			return;
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298659.f_58);
	TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_486(Player plParam0, int iParam1) // Position - 0x2E235
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 1;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 965;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 960;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 9500;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 975;
			break;
	
		case 5:
			num = 2;
			num2 = 0;
			value = 1185;
			break;
	
		case 6:
			num = 2;
			num2 = 1;
			value = 15000;
			break;
	
		case 7:
			num = 2;
			num2 = 2;
			value = 1115;
			break;
	
		case 8:
			num = 2;
			num2 = 3;
			value = 1105;
			break;
	
		case 9:
			num = 3;
			num2 = 0;
			value = 25000;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 510;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 530;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 5500;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 535;
			break;
	
		case 14:
			num = 5;
			num2 = 0;
			value = 1510;
			break;
	
		case 15:
			num = 5;
			num2 = 1;
			value = 1530;
			break;
	
		case 16:
			num = 5;
			num2 = 2;
			value = 14500;
			break;
	
		case 17:
			num = 5;
			num2 = 3;
			value = 13000;
			break;
	
		case 18:
			num = 6;
			num2 = 0;
			value = 8000;
			break;
	
		case 19:
			num = 6;
			num2 = 1;
			value = 1265;
			break;
	
		case 20:
			num = 6;
			num2 = 2;
			value = 8500;
			break;
	
		case 21:
			num = 6;
			num2 = 3;
			value = 1210;
			break;
	
		case 22:
			num = 7;
			num2 = 0;
			value = 2360;
			break;
	
		case 23:
			num = 7;
			num2 = 1;
			value = 22500;
			break;
	
		case 24:
			num = 7;
			num2 = 2;
			value = 2375;
			break;
	
		case 25:
			num = 7;
			num2 = 3;
			value = 2485;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 4;
			func_480(num5, plParam0, 26, iParam1);
		
			if (Global_79031[0 /*14*/].f_7 > 0)
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_29);
		
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = plParam0 - 1;

	if (num6 >= 0 && num6 < 26)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2027[num6] * Global_298659.f_29);

	func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_487(Player plParam0, int iParam1) // Position - 0x2E51A
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 6;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 1765;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 760;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 760;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 765;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 85;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 80;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 90;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 90;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 95;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 100;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 60;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 55;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 100;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 1255;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 65;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 1050;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 1895;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 185;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 190;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 115;
			break;
	}

	switch (plParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 415;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 115;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 135;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 125;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 105;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 130;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 3530;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 2610;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 1295;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 120;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 160;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 160;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 145;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 105;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 115;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 150;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 540;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 115;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 110;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 120;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 460;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 120;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 120;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 415;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 135;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 140;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 160;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 120;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 1025;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 1560;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 145;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 120;
			break;
	}

	switch (plParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 365;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 100;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 65;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 85;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 50;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 35;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 50;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 50;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 2395;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 3675;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 320;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 3875;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 112:
			num = 7;
			num2 = 0;
			value = 2050;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 375;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 2105;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 345;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 380;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 340;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 385;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 4135;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 370;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 375;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 385;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 365;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 325;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 325;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 370;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 330;
			break;
	}

	switch (plParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 1025;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 390;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 400;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 390;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 365;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 410;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 4125;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 4365;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 5365;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 6225;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 3755;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 405;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 4115;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 2240;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 3850;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 3110;
			break;
	
		case 144:
			num = 9;
			num2 = 0;
			value = 1950;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 455;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 405;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 410;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 415;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 4425;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 115;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 65;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 85;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 75;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 0;
			value = 115;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 360;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 135;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 175;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 675;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 100;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 400;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 340;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 195;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 215;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 120;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 165;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 100;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 1040;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 100;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 120;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 210;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 205;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 200;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 100;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 1420;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 445;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 435;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 420;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 425;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 435;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 425;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 430;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 3215;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 3320;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 440;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 440;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 445;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 450;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 450;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 1255;
			break;
	
		case 240:
			num = 15;
			num2 = 0;
			value = 750;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 165;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 460;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 190;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 195;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 200;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 205;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 210;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 215;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 220;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 455;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 175;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 800;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 790;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 175;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 190;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	player = plParam0;

	if (player >= 0 && player < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1770[player] * Global_298659.f_25);

	if (plParam0 >= 256)
	{
		Global_79031[0 /*14*/].f_5 = 4;
		func_480(num5, plParam0, 256, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_25);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_488(Player plParam0, int iParam1) // Position - 0x2FB41
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 4;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 270;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 750;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 450;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 4875;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 1760;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 1090;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 2465;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 305;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 290;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 410;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 255;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 255;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 405;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 5000;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 4480;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 4335;
			break;
	}

	switch (plParam0)
	{
		case 16:
			num = 1;
			num2 = 0;
			value = 375;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 265;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 275;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 280;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 300;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 265;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 255;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 250;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 260;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 250;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 225;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 230;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 215;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 650;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 425;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 345;
			break;
	}

	switch (plParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 115;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 110;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 250;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 290;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 115;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 135;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 125;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 120;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 130;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 110;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 525;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 115;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 535;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 135;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 120;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 130;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 140;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 130;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 520;
			break;
	}

	switch (plParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 215;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 220;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 225;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 245;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 215;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 630;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 250;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 260;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 200;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 225;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 230;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 725;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 650;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 230;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 230;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 280;
			break;
	}

	switch (plParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 330;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 320;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 315;
			break;
	}

	switch (plParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 850;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 535;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 530;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 890;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 440;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 455;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 295;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 180;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 150;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 150;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 155;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 840;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 205;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 150;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 950;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 580;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 200;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 665;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 780;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 615;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 250;
			break;
	}

	switch (plParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 495;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 435;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 420;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 390;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 485;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 380;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 1295;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 1135;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 1425;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 1645;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 1925;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 2250;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 365;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 360;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 2245;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 2170;
			break;
	
		case 160:
			num = 10;
			num2 = 0;
			value = 50;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 100;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 65;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 275;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 300;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 145;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 150;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 110;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 95;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 155;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 155;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 510;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 165;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 465;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 250;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 110;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 470;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 480;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 155;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 275;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 395;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 285;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 560;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 595;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 295;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 230;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 215;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 270;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 295;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 285;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 215;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 210;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 290;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 230;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 215;
			break;
	}

	switch (plParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 90;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 105;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 100;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 105;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 230;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 130;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 350;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 335;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	player = plParam0;

	if (player >= 0 && player < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1256[player] * Global_298659.f_23);

	if (plParam0 >= 256)
	{
		Global_79031[0 /*14*/].f_5 = 4;
		func_480(num5, plParam0, 256, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_23);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_489(Player plParam0, int iParam1) // Position - 0x311A2
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		case 9:
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			num2 = 11;
			num3 = 0;
			break;
	
		case 12:
			num2 = 12;
			num3 = 0;
			break;
	
		case 13:
			num2 = 13;
			num3 = 0;
			break;
	
		case 14:
			num2 = 14;
			num3 = 0;
			break;
	
		case 15:
			num2 = 15;
			num3 = 0;
			break;
	}

	if (plParam0 >= 16)
	{
		Global_79031[0 /*14*/].f_5 = 4;
		func_480(num6, plParam0, 16, iParam1);
		return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_490(Player plParam0, int iParam1) // Position - 0x312FD
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			num2 = 1;
			num3 = 4;
			break;
	
		case 6:
			num2 = 2;
			num3 = 0;
			break;
	
		case 7:
			num2 = 2;
			num3 = 1;
			break;
	
		case 8:
			num2 = 2;
			num3 = 2;
			break;
	
		case 9:
			num2 = 2;
			num3 = 3;
			break;
	
		case 10:
			num2 = 2;
			num3 = 4;
			break;
	
		case 11:
			num2 = 3;
			num3 = 0;
			break;
	
		case 12:
			num2 = 3;
			num3 = 1;
			break;
	
		case 13:
			num2 = 3;
			num3 = 2;
			break;
	
		case 14:
			num2 = 3;
			num3 = 3;
			break;
	
		case 15:
			num2 = 3;
			num3 = 4;
			break;
	
		case 16:
			num2 = 4;
			num3 = 0;
			break;
	
		case 17:
			num2 = 4;
			num3 = 1;
			break;
	
		case 18:
			num2 = 4;
			num3 = 2;
			break;
	
		case 19:
			num2 = 4;
			num3 = 3;
			break;
	
		case 20:
			num2 = 4;
			num3 = 4;
			break;
	
		case 21:
			num2 = 5;
			num3 = 0;
			break;
	
		case 22:
			num2 = 5;
			num3 = 1;
			break;
	
		case 23:
			num2 = 5;
			num3 = 2;
			break;
	
		case 24:
			num2 = 5;
			num3 = 3;
			break;
	
		case 25:
			num2 = 5;
			num3 = 4;
			break;
	
		case 26:
			num2 = 6;
			num3 = 0;
			break;
	
		case 27:
			num2 = 6;
			num3 = 1;
			break;
	
		case 28:
			num2 = 6;
			num3 = 2;
			break;
	
		case 29:
			num2 = 6;
			num3 = 3;
			break;
	
		case 30:
			num2 = 6;
			num3 = 4;
			break;
	
		case 31:
			num2 = 7;
			num3 = 0;
			break;
	
		case 32:
			num2 = 7;
			num3 = 1;
			break;
	
		case 33:
			num2 = 7;
			num3 = 2;
			break;
	
		case 34:
			num2 = 7;
			num3 = 3;
			break;
	
		case 35:
			num2 = 7;
			num3 = 4;
			break;
	}

	if (plParam0 >= 36)
	{
		Global_79031[0 /*14*/].f_5 = 4;
		func_480(num6, plParam0, 36, iParam1);
		return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_491(Player plParam0, int iParam1) // Position - 0x3157D
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 8;

	switch (plParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
			num = 0;
			num2 = 1;
			value = 225;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
			num = 0;
			num2 = 3;
			value = 40;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
			num = 0;
			num2 = 4;
			value = 40;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
			num = 0;
			num2 = 5;
			value = 40;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
			num = 0;
			num2 = 6;
			value = 40;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
			num = 0;
			num2 = 7;
			value = 45;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
			num = 0;
			num2 = 8;
			value = 40;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
			num = 0;
			num2 = 9;
			value = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
			num = 0;
			num2 = 10;
			value = 135;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
			num = 0;
			num2 = 11;
			value = 60;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
			num = 0;
			num2 = 12;
			value = 220;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
			num = 0;
			num2 = 13;
			value = 45;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
			num = 0;
			num2 = 14;
			value = 45;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
			num = 0;
			num2 = 15;
			value = 125;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_0" /*Crew T-Shirt*/, 16);
			num = 1;
			num2 = 0;
			value = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_1" /*Salamanders T-Shirt*/, 16);
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_2" /*The Feud T-Shirt*/, 16);
			num = 1;
			num2 = 2;
			value = 50;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_3" /*Yellow T-Shirt*/, 16);
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_4" /*Red T-Shirt*/, 16);
			num = 1;
			num2 = 4;
			value = 40;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_5" /*Cyan T-Shirt*/, 16);
			num = 1;
			num2 = 5;
			value = 40;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_6" /*Blue T-Shirt*/, 16);
			num = 1;
			num2 = 6;
			value = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_7" /*Tan T-Shirt*/, 16);
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_8" /*Pink T-Shirt*/, 16);
			num = 1;
			num2 = 8;
			value = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_9" /*Mint T-Shirt*/, 16);
			num = 1;
			num2 = 9;
			value = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_10" /*Ash T-Shirt*/, 16);
			num = 1;
			num2 = 10;
			value = 135;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_11" /*Gray T-Shirt*/, 16);
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_12" /*Leopard T-Shirt*/, 16);
			num = 1;
			num2 = 12;
			value = 220;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_13" /*Two-Tone T-Shirt*/, 16);
			num = 1;
			num2 = 13;
			value = 45;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_14" /*Baby Blue T-Shirt*/, 16);
			num = 1;
			num2 = 14;
			value = 45;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_0_15" /*Two-Tone Striped T-Shirt*/, 16);
			num = 1;
			num2 = 15;
			value = 125;
			break;
	
		case 32:
			num = 2;
			num2 = 0;
			break;
	
		case 33:
			num = 3;
			num2 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_0", 16);
			num = 4;
			num2 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_1", 16);
			num = 4;
			num2 = 1;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_2", 16);
			num = 4;
			num2 = 2;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_3", 16);
			num = 4;
			num2 = 3;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_4", 16);
			num = 4;
			num2 = 4;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_5", 16);
			num = 4;
			num2 = 5;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_6", 16);
			num = 4;
			num2 = 6;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_7", 16);
			num = 4;
			num2 = 7;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_8", 16);
			num = 4;
			num2 = 8;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_9", 16);
			num = 4;
			num2 = 9;
			flag = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_10", 16);
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_11", 16);
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_12", 16);
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_13" /*Red Two-Tone Tank*/, 16);
			num = 4;
			num2 = 13;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[77]);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_14" /*Two-Tone Tank*/, 16);
			num = 4;
			num2 = 14;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[78]);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_15", 16);
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_0" /*Off-White Cropped Tank*/, 16);
			num = 5;
			num2 = 0;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[80]);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_1" /*Ash Cropped Tank*/, 16);
			num = 5;
			num2 = 1;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[81]);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_2", 16);
			num = 5;
			num2 = 2;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_3", 16);
			num = 5;
			num2 = 3;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_4", 16);
			num = 5;
			num2 = 4;
			flag = true;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_5", 16);
			num = 5;
			num2 = 5;
			flag = true;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_6", 16);
			num = 5;
			num2 = 6;
			flag = true;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_7" /*Snakeskin Cropped Tank*/, 16);
			num = 5;
			num2 = 7;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[87]);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_8", 16);
			num = 5;
			num2 = 8;
			flag = true;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_9" /*White Stripe Cropped Tank*/, 16);
			num = 5;
			num2 = 9;
			value = 90;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[89]);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_10", 16);
			num = 5;
			num2 = 10;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_11", 16);
			num = 5;
			num2 = 11;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_12", 16);
			num = 5;
			num2 = 12;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_13", 16);
			num = 5;
			num2 = 13;
			flag = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_14", 16);
			num = 5;
			num2 = 14;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_15", 16);
			num = 5;
			num2 = 15;
			flag = true;
			break;
	
		case 66:
			num = 6;
			num2 = 0;
			break;
	
		case 67:
			num = 7;
			num2 = 0;
			break;
	
		case 68:
			num = 8;
			num2 = 0;
			break;
	
		case 69:
			num = 9;
			num2 = 0;
			break;
	
		case 70:
			num = 10;
			num2 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_0" /*Sky Blue Racerback*/, 16);
			num = 11;
			num2 = 0;
			value = 90;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[176]);
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_1" /*Purple Racerback*/, 16);
			num = 11;
			num2 = 1;
			value = 95;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[177]);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_2" /*Gray Racerback*/, 16);
			num = 11;
			num2 = 2;
			value = 95;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[178]);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_3", 16);
			num = 11;
			num2 = 3;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_4", 16);
			num = 11;
			num2 = 4;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_5", 16);
			num = 11;
			num2 = 5;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_6", 16);
			num = 11;
			num2 = 6;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_7", 16);
			num = 11;
			num2 = 7;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_8", 16);
			num = 11;
			num2 = 8;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_9", 16);
			num = 11;
			num2 = 9;
			flag = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_10" /*Los Santos 01 Racerback*/, 16);
			num = 11;
			num2 = 10;
			value = 150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[186]);
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_11" /*LS Racerback*/, 16);
			num = 11;
			num2 = 11;
			value = 65;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[187]);
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_12", 16);
			num = 11;
			num2 = 12;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_13", 16);
			num = 11;
			num2 = 13;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_14", 16);
			num = 11;
			num2 = 14;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_15" /*LC Penetrators Racerback*/, 16);
			num = 11;
			num2 = 15;
			value = 145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[191]);
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_0", 16);
			num = 12;
			num2 = 0;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_6", 16);
			num = 12;
			num2 = 6;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_7" /*Neon Camisole*/, 16);
			num = 12;
			num2 = 7;
			value = 1560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[199]);
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_8" /*Red Spotted Camisole*/, 16);
			num = 12;
			num2 = 8;
			value = 195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[200]);
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_9" /*Black Spotted Camisole*/, 16);
			num = 12;
			num2 = 9;
			value = 200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[201]);
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_10", 16);
			num = 12;
			num2 = 10;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_11", 16);
			num = 12;
			num2 = 11;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_12", 16);
			num = 12;
			num2 = 12;
			flag = true;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_13", 16);
			num = 12;
			num2 = 13;
			flag = true;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_14", 16);
			num = 12;
			num2 = 14;
			flag = true;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_15", 16);
			num = 12;
			num2 = 15;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_0" /*Black Bustier*/, 16);
			num = 13;
			num2 = 0;
			value = 975;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[208]);
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_1" /*Pink Rose Bustier*/, 16);
			num = 13;
			num2 = 1;
			value = 2670;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[209]);
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_2" /*Olive Bustier*/, 16);
			num = 13;
			num2 = 2;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[210]);
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_3" /*Gray Bustier*/, 16);
			num = 13;
			num2 = 3;
			value = 400;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[211]);
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_4" /*Floral Bustier*/, 16);
			num = 13;
			num2 = 4;
			value = 2500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[212]);
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_5" /*Red Plaid Bustier*/, 16);
			num = 13;
			num2 = 5;
			value = 2060;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[213]);
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_6" /*Studded Bustier*/, 16);
			num = 13;
			num2 = 6;
			value = 2620;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[214]);
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_7" /*Pink Bustier*/, 16);
			num = 13;
			num2 = 7;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[215]);
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_8" /*White Bustier*/, 16);
			num = 13;
			num2 = 8;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[216]);
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_9" /*Vivid Blue Bustier*/, 16);
			num = 13;
			num2 = 9;
			value = 2280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[217]);
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_10" /*Denim Bustier*/, 16);
			num = 13;
			num2 = 10;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[218]);
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_11" /*Pink Tribal Bustier*/, 16);
			num = 13;
			num2 = 11;
			value = 2390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[219]);
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_12" /*Camo Bustier*/, 16);
			num = 13;
			num2 = 12;
			value = 2610;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[220]);
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_13" /*Blue Bustier*/, 16);
			num = 13;
			num2 = 13;
			value = 1450;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[221]);
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_14" /*Black & White Bustier*/, 16);
			num = 13;
			num2 = 14;
			value = 2720;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[222]);
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_13_15" /*Leopard Bustier*/, 16);
			num = 13;
			num2 = 15;
			value = 4995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[223]);
			break;
	
		case 119:
			num = 14;
			num2 = 0;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_0" /*Black Bikini*/, 16);
			num = 15;
			num2 = 0;
			value = 325;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[240]);
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_1", 16);
			num = 15;
			num2 = 1;
			flag = true;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_2", 16);
			num = 15;
			num2 = 2;
			flag = true;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_3" /*Gray Bikini*/, 16);
			num = 15;
			num2 = 3;
			value = 130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[243]);
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_4", 16);
			num = 15;
			num2 = 4;
			flag = true;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_5", 16);
			num = 15;
			num2 = 5;
			flag = true;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_6", 16);
			num = 15;
			num2 = 6;
			flag = true;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_7", 16);
			num = 15;
			num2 = 7;
			flag = true;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_8", 16);
			num = 15;
			num2 = 8;
			flag = true;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_9", 16);
			num = 15;
			num2 = 9;
			flag = true;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_10" /*Aqua Bikini*/, 16);
			num = 15;
			num2 = 10;
			value = 450;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[250]);
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_11" /*Orange Bikini*/, 16);
			num = 15;
			num2 = 11;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[251]);
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_12", 16);
			num = 15;
			num2 = 12;
			flag = true;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_13", 16);
			num = 15;
			num2 = 13;
			flag = true;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_14", 16);
			num = 15;
			num2 = 14;
			flag = true;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_15", 16);
			num = 15;
			num2 = 15;
			flag = true;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 4;
			func_480(num5, plParam0, 136, iParam1);
		
			if (Global_79031[0 /*14*/].f_7 > 0)
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_24);
		
			return;
	}

	if (plParam0 == 4 || plParam0 == 20)
	{
		if (func_409(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4]);
		}
	}
	else if (plParam0 == 7 || plParam0 == 23)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
	}
	else if (plParam0 == 9 || plParam0 == 25)
	{
		if (func_409(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9]);
		}
	}
	else if (plParam0 >= 0 && plParam0 < 16)
	{
		player = plParam0;
	
		if (player >= 0 && player < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[player]);
	}
	else if (plParam0 >= 16 && plParam0 < 32)
	{
		num6 = plParam0 - 16;
	
		if (num6 >= 0 && num6 < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num6]);
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298659.f_24);
	func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_492(Player plParam0, int iParam1) // Position - 0x3291F
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 11;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 225;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 40;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 40;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 40;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 40;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 45;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 40;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 40;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 135;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 60;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 220;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 45;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 45;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 125;
			break;
	}

	switch (plParam0)
	{
		case 16:
			num = 1;
			num2 = 0;
			value = 390;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 230;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 355;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 5000;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 2725;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 3265;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 3625;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 4220;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 310;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 45;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 210;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 75;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 50;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 60;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 50;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 295;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 80;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 75;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 2250;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 275;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 445;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 50;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 40;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 45;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 470;
			break;
	}

	switch (plParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 95;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 95;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 360;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 100;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 60;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 295;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 460;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 1980;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 2110;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 95;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 40;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 40;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 45;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 60;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 375;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 90;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 900;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 1000;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 1050;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 1000;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 2975;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 1100;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 1825;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 1750;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 1025;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 1075;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 2805;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 2250;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 495;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 95;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 95;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 525;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 100;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 110;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 100;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 110;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 130;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 560;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 295;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 975;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 160;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 100;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 1700;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 380;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 95;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 95;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 110;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 95;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 90;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 85;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 215;
			break;
	}

	switch (plParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 90;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 95;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 95;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 150;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 65;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 145;
			break;
	}

	switch (plParam0)
	{
		case 192:
			num = 12;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 1560;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 195;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 200;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 975;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 2670;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 480;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 400;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 2500;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 2060;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 2620;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 475;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 490;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 2280;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 485;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 2390;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 2610;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 1450;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 2720;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 4995;
			break;
	}

	switch (plParam0)
	{
		case 224:
			num = 14;
			num2 = 0;
			value = 265;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 385;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 345;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 330;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 430;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 375;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 375;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 295;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 360;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 325;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 340;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 435;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 300;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 315;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 415;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 420;
			break;
	}

	switch (plParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 325;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 130;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 450;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 465;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (plParam0 == 4)
	{
		if (func_409(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_298659.f_24);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4] * Global_298659.f_24);
		}
	}
	else if (plParam0 == 7)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_298659.f_24);
	}
	else if (plParam0 == 9)
	{
		if (func_409(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_298659.f_24);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9] * Global_298659.f_24);
		}
	}
	else
	{
		player = plParam0;
	
		if (player >= 0 && player < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[player] * Global_298659.f_24);
	}

	if (plParam0 >= 256)
	{
		Global_79031[0 /*14*/].f_5 = 4;
		func_480(num5, plParam0, 256, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_24);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_493(Player plParam0, int iParam1) // Position - 0x34088
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 2;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[0]);
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[1]);
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 495;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[2]);
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[3]);
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[4]);
			break;
	
		case 5:
			num = 1;
			num2 = 4;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[5]);
			break;
	
		case 6:
			num = 1;
			num2 = 5;
			value = 0;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
			value = 440;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[6]);
			break;
	
		case 8:
			num = 2;
			num2 = 1;
			value = 435;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[7]);
			break;
	
		case 9:
			num = 2;
			num2 = 2;
			value = 430;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[8]);
			break;
	
		case 10:
			num = 2;
			num2 = 3;
			value = 425;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[9]);
			break;
	
		case 11:
			num = 2;
			num2 = 4;
			value = 420;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[10]);
			break;
	
		case 12:
			num = 2;
			num2 = 5;
			value = 0;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
			value = 190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[11]);
			break;
	
		case 14:
			num = 3;
			num2 = 1;
			value = 185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[12]);
			break;
	
		case 15:
			num = 3;
			num2 = 2;
			value = 180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[13]);
			break;
	
		case 16:
			num = 3;
			num2 = 3;
			value = 175;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[14]);
			break;
	
		case 17:
			num = 3;
			num2 = 4;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[15]);
			break;
	
		case 18:
			num = 4;
			num2 = 0;
			value = 295;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[16]);
			break;
	
		case 19:
			num = 4;
			num2 = 1;
			value = 290;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[17]);
			break;
	
		case 20:
			num = 4;
			num2 = 2;
			value = 285;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[18]);
			break;
	
		case 21:
			num = 4;
			num2 = 3;
			value = 280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[19]);
			break;
	
		case 22:
			num = 4;
			num2 = 4;
			value = 275;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[20]);
			break;
	
		case 23:
			num = 4;
			num2 = 5;
			value = 0;
			break;
	
		case 24:
			num = 5;
			num2 = 0;
			value = 2000;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[21]);
			break;
	
		case 25:
			num = 5;
			num2 = 1;
			value = 1995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[22]);
			break;
	
		case 26:
			num = 5;
			num2 = 2;
			value = 1990;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[23]);
			break;
	
		case 27:
			num = 5;
			num2 = 3;
			value = 1985;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[24]);
			break;
	
		case 28:
			num = 5;
			num2 = 4;
			value = 1980;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[25]);
			break;
	
		case 29:
			num = 5;
			num2 = 5;
			value = 0;
			break;
	
		case 30:
			num = 6;
			num2 = 0;
			value = 1150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[26]);
			break;
	
		case 31:
			num = 6;
			num2 = 1;
			value = 1145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[27]);
			break;
	
		case 32:
			num = 6;
			num2 = 2;
			value = 1140;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[28]);
			break;
	
		case 33:
			num = 6;
			num2 = 3;
			value = 1135;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[29]);
			break;
	
		case 34:
			num = 6;
			num2 = 4;
			value = 1130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[30]);
			break;
	
		case 35:
			num = 7;
			num2 = 0;
			value = 550;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[31]);
			break;
	
		case 36:
			num = 7;
			num2 = 1;
			value = 545;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[32]);
			break;
	
		case 37:
			num = 7;
			num2 = 2;
			value = 540;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[33]);
			break;
	
		case 38:
			num = 7;
			num2 = 3;
			value = 535;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[34]);
			break;
	
		case 39:
			num = 7;
			num2 = 4;
			value = 530;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[35]);
			break;
	
		case 40:
			num = 7;
			num2 = 5;
			value = 0;
			break;
	
		case 41:
			num = 8;
			num2 = 0;
			value = 580;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[36]);
			break;
	
		case 42:
			num = 8;
			num2 = 1;
			value = 575;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[37]);
			break;
	
		case 43:
			num = 8;
			num2 = 2;
			value = 570;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[38]);
			break;
	
		case 44:
			num = 8;
			num2 = 3;
			value = 565;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[39]);
			break;
	
		case 45:
			num = 8;
			num2 = 4;
			value = 560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[40]);
			break;
	
		case 46:
			num = 8;
			num2 = 5;
			value = 0;
			break;
	
		case 47:
			num = 9;
			num2 = 0;
			value = 1100;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[41]);
			break;
	
		case 48:
			num = 9;
			num2 = 1;
			value = 1095;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[42]);
			break;
	
		case 49:
			num = 9;
			num2 = 2;
			value = 1090;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[43]);
			break;
	
		case 50:
			num = 9;
			num2 = 3;
			value = 1085;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[44]);
			break;
	
		case 51:
			num = 9;
			num2 = 4;
			value = 1080;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[45]);
			break;
	
		case 52:
			num = 9;
			num2 = 5;
			value = 0;
			break;
	
		case 53:
			num = 10;
			num2 = 0;
			value = 520;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[46]);
			break;
	
		case 54:
			num = 10;
			num2 = 1;
			value = 515;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[47]);
			break;
	
		case 55:
			num = 10;
			num2 = 2;
			value = 510;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[48]);
			break;
	
		case 56:
			num = 10;
			num2 = 3;
			value = 505;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[49]);
			break;
	
		case 57:
			num = 10;
			num2 = 4;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[50]);
			break;
	
		case 58:
			num = 10;
			num2 = 5;
			value = 0;
			break;
	
		case 59:
			num = 10;
			num2 = 6;
			value = 0;
			break;
	
		case 60:
			num = 11;
			num2 = 0;
			value = 395;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[51]);
			break;
	
		case 61:
			num = 11;
			num2 = 1;
			value = 390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[52]);
			break;
	
		case 62:
			num = 11;
			num2 = 2;
			value = 385;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[53]);
			break;
	
		case 63:
			num = 11;
			num2 = 3;
			value = 380;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[54]);
			break;
	
		case 64:
			num = 11;
			num2 = 4;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[55]);
			break;
	
		case 65:
			num = 11;
			num2 = 5;
			value = 0;
			break;
	
		case 66:
			num = 11;
			num2 = 6;
			value = 0;
			break;
	
		case 67:
			num = 12;
			num2 = 0;
			value = 1050;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[56]);
			break;
	
		case 68:
			num = 12;
			num2 = 1;
			value = 1045;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[57]);
			break;
	
		case 69:
			num = 12;
			num2 = 2;
			value = 1040;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[58]);
			break;
	
		case 70:
			num = 12;
			num2 = 3;
			value = 1035;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[59]);
			break;
	
		case 71:
			num = 12;
			num2 = 4;
			value = 1030;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[60]);
			break;
	
		case 72:
			num = 12;
			num2 = 5;
			value = 0;
			break;
	
		case 73:
			num = 13;
			num2 = 0;
			value = 1200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[61]);
			break;
	
		case 74:
			num = 13;
			num2 = 1;
			value = 1195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[62]);
			break;
	
		case 75:
			num = 13;
			num2 = 2;
			value = 1190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[63]);
			break;
	
		case 76:
			num = 13;
			num2 = 3;
			value = 1185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[64]);
			break;
	
		case 77:
			num = 13;
			num2 = 4;
			value = 1180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[65]);
			break;
	
		case 78:
			num = 13;
			num2 = 5;
			value = 0;
			break;
	
		case 79:
			num = 14;
			num2 = 0;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[66]);
			break;
	
		case 80:
			num = 14;
			num2 = 1;
			value = 470;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[67]);
			break;
	
		case 81:
			num = 14;
			num2 = 2;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[68]);
			break;
	
		case 82:
			num = 14;
			num2 = 3;
			value = 460;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[69]);
			break;
	
		case 83:
			num = 14;
			num2 = 4;
			value = 455;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[70]);
			break;
	
		case 84:
			num = 14;
			num2 = 5;
			value = 0;
			break;
	
		case 85:
			num = 15;
			num2 = 0;
			value = 950;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[71]);
			break;
	
		case 86:
			num = 15;
			num2 = 1;
			value = 945;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[72]);
			break;
	
		case 87:
			num = 15;
			num2 = 2;
			value = 940;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[73]);
			break;
	
		case 88:
			num = 15;
			num2 = 3;
			value = 935;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[74]);
			break;
	
		case 89:
			num = 15;
			num2 = 4;
			value = 930;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[75]);
			break;
	
		case 90:
			num = 15;
			num2 = 5;
			value = 0;
			break;
	
		case 91:
			num = 15;
			num2 = 6;
			value = 0;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 4;
			func_480(num5, plParam0, 92, iParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_494(int iParam0, Player plParam1, int iParam2) // Position - 0x34F59
{
	switch (iParam0)
	{
		case 2:
			func_509(plParam1, iParam2);
			break;
	
		case 11:
			func_508(plParam1, iParam2);
			break;
	
		case 8:
			func_507(plParam1, iParam2);
			break;
	
		case 9:
			func_506(plParam1, iParam2);
			break;
	
		case 3:
			func_505(plParam1, iParam2);
			break;
	
		case 4:
			func_504(plParam1, iParam2);
			break;
	
		case 6:
			func_503(plParam1, iParam2);
			break;
	
		case 1:
			func_502(plParam1, iParam2);
			break;
	
		case 7:
			func_501(plParam1, iParam2);
			break;
	
		case 10:
			func_500(plParam1, iParam2);
			break;
	
		case 14:
			func_499(plParam1, iParam2);
			break;
	
		case 12:
			func_498(plParam1, iParam2);
			break;
	
		case 5:
			func_497(plParam1, iParam2);
			break;
	
		case 0:
			func_496(plParam1, iParam2);
			break;
	
		case 13:
			func_495(plParam1);
			break;
	}

	return;
}

void func_495(Player plParam0) // Position - 0x35065
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;

	switch (plParam0)
	{
		case 31:
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			break;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_496(Player plParam0, int iParam1) // Position - 0x3522F
{
	int num;

	num = 0;
	Global_79031[0 /*14*/].f_5 = 3;
	func_480(num, plParam0, 0, iParam1);
	return;
}

void func_497(Player plParam0, int iParam1) // Position - 0x3524F
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num6, plParam0, 9, iParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num3, 16);
	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_498(Player plParam0, int iParam1) // Position - 0x35352
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S1" /*The Beat Maker*/, 16);
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S2" /*The Brand*/, 16);
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S3" /*The Skater*/, 16);
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S4" /*The Roller*/, 16);
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S5" /*The Camo Kid*/, 16);
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S6" /*The Vibe*/, 16);
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S7" /*The Color Junky*/, 16);
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S8" /*The Classic T*/, 16);
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_S9" /*The Worker*/, 16);
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P1" /*The Ladies Man*/, 16);
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P2" /*The Office*/, 16);
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P3" /*The After Party*/, 16);
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P4" /*The Rebel*/, 16);
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P5" /*The Trendsetter*/, 16);
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P6" /*The Artist*/, 16);
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P7" /*The Icon*/, 16);
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_P8" /*The Nightlife*/, 16);
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B1" /*The Sun Bather*/, 16);
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B2" /*The Stoop*/, 16);
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B3" /*The Street G*/, 16);
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B4" /*The Effortless*/, 16);
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B5" /*The Everyday*/, 16);
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B6" /*The Hood*/, 16);
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B7" /*The Jock*/, 16);
			break;
	
		case 25:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, "O_FMM_B8" /*The Pounders Fan*/, 16);
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num6, plParam0, 26, iParam1);
			return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_499(Player plParam0, int iParam1) // Position - 0x35603
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 14;
	num6 = 0;

	switch (plParam0)
	{
		case 0:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 0;
			break;
	
		case 1:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 1;
			break;
	
		case 2:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 2;
			break;
	
		case 3:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 3;
			break;
	
		case 4:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 4;
			break;
	
		case 5:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 5;
			break;
	
		case 6:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 6;
			break;
	
		case 7:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 7;
			break;
	
		case 8:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_0" /*Red Ear Defenders*/, 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_1" /*Blue Ear Defenders*/, 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_2" /*Green Ear Defenders*/, 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_3" /*Yellow Ear Defenders*/, 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_4" /*Desert Camo Ear Defenders*/, 16);
			num = 0;
			num2 = 4;
			value = 235;
			num3 = 0;
			num6 = 1;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_5" /*Black Ear Defenders*/, 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 0;
			num6 = 1;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_6" /*Gray Ear Defenders*/, 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_0_7" /*White Ear Defenders*/, 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (plParam0)
	{
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_1_0" /*White Dunce Cap*/, 16);
			num = 1;
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_0" /*Black Winter Hat*/, 16);
			num = 2;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_1" /*Gray Winter Hat*/, 16);
			num = 2;
			num2 = 1;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_2" /*Blue Winter Hat*/, 16);
			num = 2;
			num2 = 2;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_3" /*Rasta Winter Hat*/, 16);
			num = 2;
			num2 = 3;
			value = 320;
			num3 = 0;
			num6 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_4" /*Gray Striped Winter Hat*/, 16);
			num = 2;
			num2 = 4;
			value = 185;
			num3 = 0;
			num6 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_5" /*Trio Knit Winter Hat*/, 16);
			num = 2;
			num2 = 5;
			value = 245;
			num3 = 0;
			num6 = 1;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_6" /*White Winter Hat*/, 16);
			num = 2;
			num2 = 6;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_2_7" /*Maroon Winter Hat*/, 16);
			num = 2;
			num2 = 7;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_0", 16);
			num = 3;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_1" /*Black Canvas Hat*/, 16);
			num = 3;
			num2 = 1;
			value = 60;
			num3 = 0;
			num6 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_2" /*Tan Canvas Hat*/, 16);
			num = 3;
			num2 = 2;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_3", 16);
			num = 3;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_4", 16);
			num = 3;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_5", 16);
			num = 3;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_6", 16);
			num = 3;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_7", 16);
			num = 3;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_0" /*Black LS Fitted Cap*/, 16);
			num = 4;
			num2 = 0;
			value = 415;
			num3 = 0;
			num6 = 1;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_1" /*Gray LS Fitted Cap*/, 16);
			num = 4;
			num2 = 1;
			value = 315;
			num3 = 0;
			num6 = 1;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_2", 16);
			num = 4;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_3", 16);
			num = 4;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_4", 16);
			num = 4;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_5", 16);
			num = 4;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_6", 16);
			num = 4;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_7", 16);
			num = 4;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_0" /*Black Saggy Beanie*/, 16);
			num = 5;
			num2 = 0;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_1" /*Gray Saggy Beanie*/, 16);
			num = 5;
			num2 = 1;
			value = 60;
			num3 = 0;
			num6 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_2", 16);
			num = 5;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_3", 16);
			num = 5;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_4", 16);
			num = 5;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_5", 16);
			num = 5;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_6", 16);
			num = 5;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_7", 16);
			num = 5;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_0" /*Green Army Cap*/, 16);
			num = 6;
			num2 = 0;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_1" /*Black Army Cap*/, 16);
			num = 6;
			num2 = 1;
			value = 265;
			num3 = 0;
			num6 = 1;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_2" /*Gray Army Cap*/, 16);
			num = 6;
			num2 = 2;
			value = 170;
			num3 = 0;
			num6 = 1;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_3" /*Blue Army Cap*/, 16);
			num = 6;
			num2 = 3;
			value = 135;
			num3 = 0;
			num6 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_4" /*Desert Army Cap*/, 16);
			num = 6;
			num2 = 4;
			value = 570;
			num3 = 0;
			num6 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_5" /*Woodland Army Cap*/, 16);
			num = 6;
			num2 = 5;
			value = 560;
			num3 = 0;
			num6 = 1;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_6" /*Ranch Beige Army Cap*/, 16);
			num = 6;
			num2 = 6;
			value = 140;
			num3 = 0;
			num6 = 1;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_6_7" /*Ranch Brown Army Cap*/, 16);
			num = 6;
			num2 = 7;
			value = 130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_0" /*White Flat Cap*/, 16);
			num = 7;
			num2 = 0;
			value = 260;
			num3 = 0;
			num6 = 1;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_1" /*Gray Flat Cap*/, 16);
			num = 7;
			num2 = 1;
			value = 215;
			num3 = 0;
			num6 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_2" /*Black Flat Cap*/, 16);
			num = 7;
			num2 = 2;
			value = 430;
			num3 = 0;
			num6 = 1;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_3" /*Navy Flat Cap*/, 16);
			num = 7;
			num2 = 3;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_4" /*Red Flat Cap*/, 16);
			num = 7;
			num2 = 4;
			value = 200;
			num3 = 0;
			num6 = 1;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_5" /*Brown Flat Cap*/, 16);
			num = 7;
			num2 = 5;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_6" /*Green Flat Cap*/, 16);
			num = 7;
			num2 = 6;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_7_7" /*Yellow Flat Cap*/, 16);
			num = 7;
			num2 = 7;
			value = 165;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (plParam0)
	{
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_0", 16);
			num = 8;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_0", 16);
			num = 9;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_1", 16);
			num = 9;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_2", 16);
			num = 9;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_3", 16);
			num = 9;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_4", 16);
			num = 9;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_5" /*Fruntalot Green Cap*/, 16);
			num = 9;
			num2 = 5;
			value = 100;
			num3 = 0;
			num6 = 1;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_6", 16);
			num = 9;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_7" /*Stank Purple Cap*/, 16);
			num = 9;
			num2 = 7;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_0", 16);
			num = 10;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_1", 16);
			num = 10;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_2", 16);
			num = 10;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_3", 16);
			num = 10;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_4", 16);
			num = 10;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_5" /*Fruntalot Green Cap*/, 16);
			num = 10;
			num2 = 5;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_6", 16);
			num = 10;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_7" /*Stank Purple Cap*/, 16);
			num = 10;
			num2 = 7;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_1" /*Black Pork Pie*/, 16);
			num = 11;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_3" /*Olive Pork Pie*/, 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_6" /*Blue Pork Pie*/, 16);
			num = 11;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_0" /*Black Fedora*/, 16);
			num = 12;
			num2 = 0;
			value = 1715;
			num3 = 0;
			num6 = 1;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_1" /*White Fedora*/, 16);
			num = 12;
			num2 = 1;
			value = 3900;
			num3 = 0;
			num6 = 1;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_2" /*Ash Fedora*/, 16);
			num = 12;
			num2 = 2;
			value = 1550;
			num3 = 0;
			num6 = 1;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_4" /*Brown Fedora*/, 16);
			num = 12;
			num2 = 4;
			value = 4250;
			num3 = 0;
			num6 = 1;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_6" /*Green Fedora*/, 16);
			num = 12;
			num2 = 6;
			value = 4460;
			num3 = 0;
			num6 = 1;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_7" /*Navy Fedora*/, 16);
			num = 12;
			num2 = 7;
			value = 4970;
			num3 = 0;
			num6 = 1;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_0" /*Black Cowboy Hat*/, 16);
			num = 13;
			num2 = 0;
			value = 290;
			num3 = 0;
			num6 = 1;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_1" /*Brown Cowboy Hat*/, 16);
			num = 13;
			num2 = 1;
			value = 305;
			num3 = 0;
			num6 = 1;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_2" /*Chocolate Cowboy Hat*/, 16);
			num = 13;
			num2 = 2;
			value = 4170;
			num3 = 0;
			num6 = 1;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_3" /*White Cowboy Hat*/, 16);
			num = 13;
			num2 = 3;
			value = 335;
			num3 = 0;
			num6 = 1;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_4" /*Chestnut Cowboy Hat*/, 16);
			num = 13;
			num2 = 4;
			value = 4940;
			num3 = 0;
			num6 = 1;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_5" /*Beige Cowboy Hat*/, 16);
			num = 13;
			num2 = 5;
			value = 275;
			num3 = 0;
			num6 = 1;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_6" /*Red Cowboy Hat*/, 16);
			num = 13;
			num2 = 6;
			value = 5000;
			num3 = 0;
			num6 = 1;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_13_7" /*Tan Cowboy Hat*/, 16);
			num = 13;
			num2 = 7;
			value = 3620;
			num3 = 0;
			num6 = 1;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_0" /*White Paisley Bandana*/, 16);
			num = 14;
			num2 = 0;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_1" /*Black Paisley Bandana*/, 16);
			num = 14;
			num2 = 1;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_2" /*Navy Bandana*/, 16);
			num = 14;
			num2 = 2;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_3" /*Red Bandana*/, 16);
			num = 14;
			num2 = 3;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_4" /*Green Bandana*/, 16);
			num = 14;
			num2 = 4;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_5" /*Purple Bandana*/, 16);
			num = 14;
			num2 = 5;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_6" /*Camo Bandana*/, 16);
			num = 14;
			num2 = 6;
			value = 350;
			num3 = 0;
			num6 = 1;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_14_7" /*Yellow Bandana*/, 16);
			num = 14;
			num2 = 7;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_0" /*Beat Off White Headphones*/, 16);
			num = 15;
			num2 = 0;
			value = 365;
			num3 = 0;
			num6 = 1;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_1" /*Beat Off Black Headphones*/, 16);
			num = 15;
			num2 = 1;
			value = 380;
			num3 = 0;
			num6 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_2" /*Beat Off Red Headphones*/, 16);
			num = 15;
			num2 = 2;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_3" /*Beat Off Blue Headphones*/, 16);
			num = 15;
			num2 = 3;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_4" /*Beat Off Yellow Headphones*/, 16);
			num = 15;
			num2 = 4;
			value = 600;
			num3 = 0;
			num6 = 1;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_5" /*Beat Off Purple Headphones*/, 16);
			num = 15;
			num2 = 5;
			value = 590;
			num3 = 0;
			num6 = 1;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_6" /*Beat Off Gray Headphones*/, 16);
			num = 15;
			num2 = 6;
			value = 395;
			num3 = 0;
			num6 = 1;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_15_7" /*Beat Off Green Headphones*/, 16);
			num = 15;
			num2 = 7;
			value = 555;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (plParam0)
	{
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_0" /*Western MC Yellow Helmet*/, 16);
			num = 16;
			num2 = 0;
			value = 1060;
			num3 = 0;
			num6 = 2;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_1" /*Steel Horse Blue Helmet*/, 16);
			num = 16;
			num2 = 1;
			value = 1400;
			num3 = 0;
			num6 = 2;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_2" /*Steel Horse Orange Helmet*/, 16);
			num = 16;
			num2 = 2;
			value = 1315;
			num3 = 0;
			num6 = 2;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_3" /*Western MC Green Helmet*/, 16);
			num = 16;
			num2 = 3;
			value = 1230;
			num3 = 0;
			num6 = 2;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_4" /*Western MC Red Helmet*/, 16);
			num = 16;
			num2 = 4;
			value = 1145;
			num3 = 0;
			num6 = 2;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_5" /*Steel Horse Black Helmet*/, 16);
			num = 16;
			num2 = 5;
			value = 8450;
			num3 = 0;
			num6 = 2;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_6" /*Black Helmet*/, 16);
			num = 16;
			num2 = 6;
			value = 675;
			num3 = 0;
			num6 = 2;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_16_7" /*Western MC Lilac Helmet*/, 16);
			num = 16;
			num2 = 7;
			value = 8750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_0" /*Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 0;
			value = 975;
			num3 = 0;
			num6 = 2;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_1" /*Orange Open-Face Helmet*/, 16);
			num = 17;
			num2 = 1;
			value = 750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_2" /*Pale Blue Open-Face Helmet*/, 16);
			num = 17;
			num2 = 2;
			value = 865;
			num3 = 0;
			num6 = 2;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_3" /*Red Open-Face Helmet*/, 16);
			num = 17;
			num2 = 3;
			value = 890;
			num3 = 0;
			num6 = 2;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_4" /*Gray Open-Face Helmet*/, 16);
			num = 17;
			num2 = 4;
			value = 730;
			num3 = 0;
			num6 = 2;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_5" /*Black Open-Face Helmet*/, 16);
			num = 17;
			num2 = 5;
			value = 650;
			num3 = 0;
			num6 = 2;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_6" /*Pink Open-Face Helmet*/, 16);
			num = 17;
			num2 = 6;
			value = 645;
			num3 = 0;
			num6 = 2;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_17_7" /*White Open-Face Helmet*/, 16);
			num = 17;
			num2 = 7;
			value = 755;
			num3 = 0;
			num6 = 2;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_0" /*Shatter Pattern Helmet*/, 16);
			num = 18;
			num2 = 0;
			value = 13850;
			num3 = 0;
			num6 = 2;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_1" /*Stars Helmet*/, 16);
			num = 18;
			num2 = 1;
			value = 2900;
			num3 = 0;
			num6 = 2;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_2" /*Squared Helmet*/, 16);
			num = 18;
			num2 = 2;
			value = 2895;
			num3 = 0;
			num6 = 2;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_3" /*Crimson Helmet*/, 16);
			num = 18;
			num2 = 3;
			value = 12500;
			num3 = 0;
			num6 = 2;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_4" /*Skull Helmet*/, 16);
			num = 18;
			num2 = 4;
			value = 15000;
			num3 = 0;
			num6 = 2;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_5" /*Ace of Spades Helmet*/, 16);
			num = 18;
			num2 = 5;
			value = 14750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_6" /*Flamejob Helmet*/, 16);
			num = 18;
			num2 = 6;
			value = 13150;
			num3 = 0;
			num6 = 2;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HE_FMM_18_7" /*White Helmet*/, 16);
			num = 18;
			num2 = 7;
			value = 2925;
			num3 = 0;
			num6 = 2;
			break;
	}

	switch (plParam0)
	{
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_0", 16);
			num = 0;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_1", 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_2", 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_3", 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_4", 16);
			num = 0;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_5", 16);
			num = 0;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_6", 16);
			num = 0;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_7", 16);
			num = 0;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_8", 16);
			num = 0;
			num2 = 8;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_9", 16);
			num = 0;
			num2 = 9;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_10", 16);
			num = 0;
			num2 = 10;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_0", 16);
			num = 1;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_1" /*Black Wraparounds*/, 16);
			num = 1;
			num2 = 1;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_2", 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_3", 16);
			num = 1;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_4", 16);
			num = 1;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_5", 16);
			num = 1;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_6", 16);
			num = 1;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_7", 16);
			num = 1;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_0" /*Black Winter Shades*/, 16);
			num = 2;
			num2 = 0;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_1" /*White Silver Shades*/, 16);
			num = 2;
			num2 = 1;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_2" /*Crimson Polarized Shades*/, 16);
			num = 2;
			num2 = 2;
			value = 380;
			num3 = 1;
			num6 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_3" /*Black Summer Shades*/, 16);
			num = 2;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_4" /*Black Autumn Shades*/, 16);
			num = 2;
			num2 = 4;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_5" /*White Rust Shades*/, 16);
			num = 2;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_6" /*White Steel Shades*/, 16);
			num = 2;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_2_7" /*Green Polarized Shades*/, 16);
			num = 2;
			num2 = 7;
			value = 390;
			num3 = 1;
			num6 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_8", 16);
			num = 2;
			num2 = 8;
			value = 950;
			num3 = 1;
			num6 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_9", 16);
			num = 2;
			num2 = 9;
			value = 565;
			num3 = 1;
			num6 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_10", 16);
			num = 2;
			num2 = 10;
			value = 630;
			num3 = 1;
			num6 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_0" /*Slate Janitor Frames*/, 16);
			num = 3;
			num2 = 0;
			value = 70;
			num3 = 1;
			num6 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_1" /*Black Janitor Frames*/, 16);
			num = 3;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_2" /*Gray Janitor Frames*/, 16);
			num = 3;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_3" /*Ash Janitor Frames*/, 16);
			num = 3;
			num2 = 3;
			value = 95;
			num3 = 1;
			num6 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_4" /*Tan Janitor Frames*/, 16);
			num = 3;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_5" /*Smoke Janitor Frames*/, 16);
			num = 3;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_6" /*Charcoal Janitor Frames*/, 16);
			num = 3;
			num2 = 6;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_3_7" /*White Janitor Frames*/, 16);
			num = 3;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_8", 16);
			num = 3;
			num2 = 8;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_9", 16);
			num = 3;
			num2 = 9;
			value = 265;
			num3 = 1;
			num6 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_10", 16);
			num = 3;
			num2 = 10;
			value = 330;
			num3 = 1;
			num6 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_0" /*Enema Brown Glasses*/, 16);
			num = 4;
			num2 = 0;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_1" /*Enema Gray Glasses*/, 16);
			num = 4;
			num2 = 1;
			value = 250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_2" /*Enema Black Glasses*/, 16);
			num = 4;
			num2 = 2;
			value = 210;
			num3 = 1;
			num6 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_3" /*Enema Tortoiseshell Glasses*/, 16);
			num = 4;
			num2 = 3;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_4" /*Enema Walnut Glasses*/, 16);
			num = 4;
			num2 = 4;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_5" /*Enema Marble Glasses*/, 16);
			num = 4;
			num2 = 5;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_6" /*Enema Smoke Glasses*/, 16);
			num = 4;
			num2 = 6;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_4_7" /*Enema Smoke Shades*/, 16);
			num = 4;
			num2 = 7;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_8", 16);
			num = 4;
			num2 = 8;
			value = 995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_9", 16);
			num = 4;
			num2 = 9;
			value = 610;
			num3 = 1;
			num6 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_10", 16);
			num = 4;
			num2 = 10;
			value = 675;
			num3 = 1;
			num6 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_0" /*Gold Aviators*/, 16);
			num = 5;
			num2 = 0;
			value = 4050;
			num3 = 1;
			num6 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_1" /*Steel Aviators*/, 16);
			num = 5;
			num2 = 1;
			value = 4060;
			num3 = 1;
			num6 = 3;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_2" /*Silver Aviators, Brown Tint*/, 16);
			num = 5;
			num2 = 2;
			value = 170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_3" /*Gray Aviators, Green Tint*/, 16);
			num = 5;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_4" /*Silver Aviators, Blue Tint*/, 16);
			num = 5;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_5" /*Tan Aviators, Dark Tint*/, 16);
			num = 5;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_6" /*Steel Aviators, Blue Tint*/, 16);
			num = 5;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_5_7" /*Silver Aviators, Copper Tint*/, 16);
			num = 5;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_8", 16);
			num = 5;
			num2 = 8;
			value = 1760;
			num3 = 1;
			num6 = 3;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_9", 16);
			num = 5;
			num2 = 9;
			value = 1375;
			num3 = 1;
			num6 = 3;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_10", 16);
			num = 5;
			num2 = 10;
			value = 1440;
			num3 = 1;
			num6 = 3;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_0", 16);
			num = 6;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_1", 16);
			num = 6;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_2", 16);
			num = 6;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_3", 16);
			num = 6;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_4", 16);
			num = 6;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_5", 16);
			num = 6;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_6", 16);
			num = 6;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_7", 16);
			num = 6;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_0" /*Black Casuals*/, 16);
			num = 7;
			num2 = 0;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_1" /*Zap Casuals*/, 16);
			num = 7;
			num2 = 1;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_2" /*Tortoiseshell Casuals*/, 16);
			num = 7;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_3" /*Red Casuals*/, 16);
			num = 7;
			num2 = 3;
			value = 220;
			num3 = 1;
			num6 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_4" /*White Casuals*/, 16);
			num = 7;
			num2 = 4;
			value = 185;
			num3 = 1;
			num6 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_5" /*Camo Collection Casuals*/, 16);
			num = 7;
			num2 = 5;
			value = &func_3;
			num3 = 1;
			num6 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_6" /*Lemon Casuals*/, 16);
			num = 7;
			num2 = 6;
			value = 530;
			num3 = 1;
			num6 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_7_7" /*Blood Casuals*/, 16);
			num = 7;
			num2 = 7;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_8", 16);
			num = 7;
			num2 = 8;
			value = 1170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_9", 16);
			num = 7;
			num2 = 9;
			value = 785;
			num3 = 1;
			num6 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_10", 16);
			num = 7;
			num2 = 10;
			value = 850;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (plParam0)
	{
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_0" /*Brown Eyewear*/, 16);
			num = 8;
			num2 = 0;
			value = 4260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_1" /*Silver Eyewear*/, 16);
			num = 8;
			num2 = 1;
			value = 4310;
			num3 = 1;
			num6 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_2" /*Gray Eyewear*/, 16);
			num = 8;
			num2 = 2;
			value = 4130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_3" /*Smoke Cop Frames*/, 16);
			num = 8;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_4" /*Coffee Cop Frames*/, 16);
			num = 8;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_5" /*Black Cop Frames*/, 16);
			num = 8;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_6" /*Slate Cop Frames*/, 16);
			num = 8;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_8_7" /*Charcoal Cop Frames*/, 16);
			num = 8;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_8", 16);
			num = 8;
			num2 = 8;
			value = 1885;
			num3 = 1;
			num6 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_9", 16);
			num = 8;
			num2 = 9;
			value = 1500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_10", 16);
			num = 8;
			num2 = 10;
			value = 1565;
			num3 = 1;
			num6 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_0" /*Hawaiian Snow Black*/, 16);
			num = 9;
			num2 = 0;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_1" /*Hawaiian Snow Gray*/, 16);
			num = 9;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_2" /*Hawaiian Snow White*/, 16);
			num = 9;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_3" /*Hawaiian Snow Ash*/, 16);
			num = 9;
			num2 = 3;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_4" /*Hawaiian Snow Copper*/, 16);
			num = 9;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_5" /*Hawaiian Snow Tortoiseshell*/, 16);
			num = 9;
			num2 = 5;
			value = 4290;
			num3 = 1;
			num6 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_6" /*Hawaiian Snow Marble*/, 16);
			num = 9;
			num2 = 6;
			value = 4150;
			num3 = 1;
			num6 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_9_7" /*Hawaiian Snow Walnut*/, 16);
			num = 9;
			num2 = 7;
			value = 4295;
			num3 = 1;
			num6 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_8", 16);
			num = 9;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_9", 16);
			num = 9;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_10", 16);
			num = 9;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_0" /*Gold Bull Emic*/, 16);
			num = 10;
			num2 = 0;
			value = 6240;
			num3 = 1;
			num6 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_1" /*Gray Bull Emic*/, 16);
			num = 10;
			num2 = 1;
			value = 4955;
			num3 = 1;
			num6 = 3;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_2" /*Silver Bull Emic*/, 16);
			num = 10;
			num2 = 2;
			value = 5590;
			num3 = 1;
			num6 = 3;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_3" /*Black Bull Emic*/, 16);
			num = 10;
			num2 = 3;
			value = 4920;
			num3 = 1;
			num6 = 3;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_4" /*Brown Bull Emic*/, 16);
			num = 10;
			num2 = 4;
			value = 4990;
			num3 = 1;
			num6 = 3;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_5" /*Slate Bull Emic*/, 16);
			num = 10;
			num2 = 5;
			value = 4780;
			num3 = 1;
			num6 = 3;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_6" /*White Bull Emic*/, 16);
			num = 10;
			num2 = 6;
			value = 4775;
			num3 = 1;
			num6 = 3;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_10_7" /*Purple Tint Bull Emic*/, 16);
			num = 10;
			num2 = 7;
			value = 4800;
			num3 = 1;
			num6 = 3;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_8", 16);
			num = 10;
			num2 = 8;
			value = 2835;
			num3 = 1;
			num6 = 3;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_9", 16);
			num = 10;
			num2 = 9;
			value = 2450;
			num3 = 1;
			num6 = 3;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_10", 16);
			num = 10;
			num2 = 10;
			value = 2515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_1", 16);
			num = 11;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_3", 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_0" /*Orange Elvis*/, 16);
			num = 12;
			num2 = 0;
			value = 385;
			num3 = 1;
			num6 = 3;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_1" /*Gray Elvis*/, 16);
			num = 12;
			num2 = 1;
			value = 310;
			num3 = 1;
			num6 = 3;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_2" /*Slate Elvis*/, 16);
			num = 12;
			num2 = 2;
			value = 3655;
			num3 = 1;
			num6 = 3;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_3" /*Black Elvis*/, 16);
			num = 12;
			num2 = 3;
			value = 4055;
			num3 = 1;
			num6 = 3;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_4" /*White Elvis*/, 16);
			num = 12;
			num2 = 4;
			value = 3595;
			num3 = 1;
			num6 = 3;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_5" /*Blue Tint Elvis*/, 16);
			num = 12;
			num2 = 5;
			value = 3605;
			num3 = 1;
			num6 = 3;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_6" /*Pink Tint Elvis*/, 16);
			num = 12;
			num2 = 6;
			value = 3645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_12_7" /*Copper Elvis*/, 16);
			num = 12;
			num2 = 7;
			value = 320;
			num3 = 1;
			num6 = 3;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_8", 16);
			num = 12;
			num2 = 8;
			value = 2820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_9", 16);
			num = 12;
			num2 = 9;
			value = 2435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_10", 16);
			num = 12;
			num2 = 10;
			value = 2500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_0" /*Broker Black Hipsters*/, 16);
			num = 13;
			num2 = 0;
			value = 230;
			num3 = 1;
			num6 = 3;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_1" /*White Polarized Hipsters*/, 16);
			num = 13;
			num2 = 1;
			value = 1605;
			num3 = 1;
			num6 = 3;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_2" /*Choco Polarized Hipsters*/, 16);
			num = 13;
			num2 = 2;
			value = 2230;
			num3 = 1;
			num6 = 3;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_3" /*Slate Hipsters*/, 16);
			num = 13;
			num2 = 3;
			value = 220;
			num3 = 1;
			num6 = 3;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_4" /*Charcoal Hipsters*/, 16);
			num = 13;
			num2 = 4;
			value = 185;
			num3 = 1;
			num6 = 3;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_5" /*Olive Polarized Hipsters*/, 16);
			num = 13;
			num2 = 5;
			value = 2070;
			num3 = 1;
			num6 = 3;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_6" /*Gold Polarized Hipsters*/, 16);
			num = 13;
			num2 = 6;
			value = 2205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_13_7" /*Candy Polarized Hipsters*/, 16);
			num = 13;
			num2 = 7;
			value = 1690;
			num3 = 1;
			num6 = 3;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_8", 16);
			num = 13;
			num2 = 8;
			value = 2715;
			num3 = 1;
			num6 = 3;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_9", 16);
			num = 13;
			num2 = 9;
			value = 2330;
			num3 = 1;
			num6 = 3;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_10", 16);
			num = 13;
			num2 = 10;
			value = 2395;
			num3 = 1;
			num6 = 3;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_0", 16);
			num = 14;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_1", 16);
			num = 14;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_2", 16);
			num = 14;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_3", 16);
			num = 14;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_4", 16);
			num = 14;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_5", 16);
			num = 14;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_6", 16);
			num = 14;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_7", 16);
			num = 14;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_0" /*Yellow Guns*/, 16);
			num = 15;
			num2 = 0;
			value = 515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_1" /*White Guns*/, 16);
			num = 15;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_2" /*Gray Guns*/, 16);
			num = 15;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_3" /*Red Guns*/, 16);
			num = 15;
			num2 = 3;
			value = 95;
			num3 = 1;
			num6 = 3;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_4" /*Blue Guns*/, 16);
			num = 15;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_5" /*Hornet Guns*/, 16);
			num = 15;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_6" /*Orange Guns*/, 16);
			num = 15;
			num2 = 6;
			value = 485;
			num3 = 1;
			num6 = 3;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_15_7" /*Pink Guns*/, 16);
			num = 15;
			num2 = 7;
			value = 545;
			num3 = 1;
			num6 = 3;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_8", 16);
			num = 15;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_9", 16);
			num = 15;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 318:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_10", 16);
			num = 15;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (plParam0)
	{
		case 319:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_0" /*Deep Sea Watch*/, 16);
			num = 0;
			num2 = 0;
			value = 5000;
			num3 = 6;
			num6 = 4;
			break;
	
		case 320:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_1" /*Gold Watch*/, 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 321:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_2" /*Silver Watch*/, 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 322:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_3" /*Black Watch*/, 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 323:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_0_4" /*Gold Faced Silver Watch*/, 16);
			num = 0;
			num2 = 4;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 324:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_0" /*White LED, Black Strap*/, 16);
			num = 1;
			num2 = 0;
			value = 695;
			num3 = 6;
			num6 = 4;
			break;
	
		case 325:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_1" /*Red LED, White Strap*/, 16);
			num = 1;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 326:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMM_1_2" /*Red LED, Brown Strap*/, 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	}

	if (num6 == 1)
	{
		num7 = plParam0 - 10;
	
		if (num7 >= 0 && num7 < 121)
		{
			if (num7 > 8)
				num7 = num7 - 1;
		
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_965[num7] * Global_298659.f_18);
		}
	}
	else if (num6 == 2)
	{
		num8 = plParam0 - 131;
	
		if (num8 >= 0 && num8 < 24)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1086[num8] * Global_298659.f_19);
	}
	else if (num6 == 3)
	{
		num9 = plParam0 - 155;
	
		if (num9 >= 0 && num9 < 128)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1111[num9] * Global_298659.f_20);
	}
	else if (num6 == 4)
	{
		num10 = plParam0 - 319;
	
		if (num10 >= 0 && num10 < 15)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1240[num10] * Global_298659.f_21);
	}

	if (plParam0 >= 327)
	{
		Global_79031[0 /*14*/].f_5 = 3;
		func_480(num5, plParam0, 327, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			if (unk_0x304A39EB177D246B(Global_2883588, joaat("HAT"), 1))
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_18);
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("GLASSES"), 1))
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_20);
			else if (unk_0x304A39EB177D246B(Global_2883588, joaat("WATCH"), 1))
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_21);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_500(Player plParam0, int iParam1) // Position - 0x383C4
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;

	switch (plParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_0_0" /*No Crew Emblem*/, 16);
			num2 = 0;
			num3 = 0;
			num = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 1;
			num3 = 0;
			num = 5000;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 2;
			num3 = 0;
			num = 10000;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 3;
			num3 = 0;
			num = 5000;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 4;
			num3 = 0;
			num = 10000;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_1_0" /*Small Crew Emblem*/, 16);
			num2 = 5;
			num3 = 0;
			num = 5000;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "D_FMM_2_0" /*Large Crew Emblem*/, 16);
			num2 = 6;
			num3 = 0;
			num = 10000;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num6, plParam0, 7, iParam1);
			return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_501(Player plParam0, int iParam1) // Position - 0x384E5
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 7;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 4:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 3;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 3;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 3;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 17:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 18:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 19:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 21:
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 22:
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 23:
			num = 4;
			num2 = 13;
			flag = true;
			break;
	
		case 24:
			num = 4;
			num2 = 14;
			flag = true;
			break;
	
		case 25:
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 26:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 28:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 31:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 32:
			num = 6;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 6;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 7;
			num2 = 0;
			break;
	
		case 39:
			num = 8;
			num2 = 0;
			break;
	
		case 40:
			num = 9;
			num2 = 0;
			break;
	
		case 41:
			num = 10;
			num2 = 0;
		
			if (Global_262145.f_4005 != -1)
				value = Global_262145.f_4005;
			else
				value = 115;
			break;
	
		case 42:
			num = 10;
			num2 = 1;
		
			if (Global_262145.f_4006 != -1)
				value = Global_262145.f_4006;
			else
				value = 125;
			break;
	
		case 43:
			num = 10;
			num2 = 2;
		
			if (Global_262145.f_4007 != -1)
				value = Global_262145.f_4007;
			else
				value = 130;
			break;
	
		case 44:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 49:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 50:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 51:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 52:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 53:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 55:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 56:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 57:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 58:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 59:
			num = 11;
			num2 = 2;
		
			if (Global_262145.f_4011 != -1)
				value = Global_262145.f_4011;
			else
				value = 725;
			break;
	
		case 60:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 61:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 62:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 63:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 64:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 65:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 67:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 12;
			num2 = 0;
		
			if (Global_262145.f_4008 != -1)
				value = Global_262145.f_4008;
			else
				value = 65;
			break;
	
		case 74:
			num = 12;
			num2 = 1;
		
			if (Global_262145.f_4009 != -1)
				value = Global_262145.f_4009;
			else
				value = 65;
			break;
	
		case 75:
			num = 12;
			num2 = 2;
		
			if (Global_262145.f_4010 != -1)
				value = Global_262145.f_4010;
			else
				value = 95;
			break;
	
		case 76:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 12;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 81:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 82:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 13;
			num2 = 0;
			break;
	
		case 90:
			num = 14;
			num2 = 0;
			break;
	
		case 91:
			num = 15;
			num2 = 0;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num5, plParam0, 92, iParam1);
		
			if (Global_79031[0 /*14*/].f_7 > 0)
				Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_57);
		
			return;
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298659.f_57);
	TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_502(Player plParam0, int iParam1) // Position - 0x38DDD
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 1;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 965;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 960;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 9500;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 975;
			break;
	
		case 5:
			num = 2;
			num2 = 0;
			value = 1185;
			break;
	
		case 6:
			num = 2;
			num2 = 1;
			value = 15000;
			break;
	
		case 7:
			num = 2;
			num2 = 2;
			value = 1115;
			break;
	
		case 8:
			num = 2;
			num2 = 3;
			value = 1105;
			break;
	
		case 9:
			num = 3;
			num2 = 0;
			value = 25000;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 510;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 530;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 5500;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 535;
			break;
	
		case 14:
			num = 5;
			num2 = 0;
			value = 1510;
			break;
	
		case 15:
			num = 5;
			num2 = 1;
			value = 1530;
			break;
	
		case 16:
			num = 5;
			num2 = 2;
			value = 14500;
			break;
	
		case 17:
			num = 5;
			num2 = 3;
			value = 13000;
			break;
	
		case 18:
			num = 6;
			num2 = 0;
			value = 8000;
			break;
	
		case 19:
			num = 6;
			num2 = 1;
			value = 1265;
			break;
	
		case 20:
			num = 6;
			num2 = 2;
			value = 8500;
			break;
	
		case 21:
			num = 6;
			num2 = 3;
			value = 1210;
			break;
	
		case 22:
			num = 7;
			num2 = 0;
			value = 2360;
			break;
	
		case 23:
			num = 7;
			num2 = 1;
			value = 22500;
			break;
	
		case 24:
			num = 7;
			num2 = 2;
			value = 2375;
			break;
	
		case 25:
			num = 7;
			num2 = 3;
			value = 2485;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num5, plParam0, 26, iParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = plParam0 - 1;

	if (num6 >= 0 && num6 < 26)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_938[num6] * Global_298659.f_22);

	func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_503(Player plParam0, int iParam1) // Position - 0x39094
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 6;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 300;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 285;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 180;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 190;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 190;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 165;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 200;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 480;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 155;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 350;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 290;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 165;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 165;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 170;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 155;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 165;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 165;
			break;
	}

	switch (plParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 160;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 205;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 560;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 275;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 290;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 300;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 360;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 270;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 265;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 295;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 355;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 340;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 285;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 310;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 350;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 305;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 280;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 320;
			break;
	}

	switch (plParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 115;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 115;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 110;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 125;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 50;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 35;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 50;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 50;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 65;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 65;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 112:
			num = 7;
			num2 = 0;
			value = 165;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 165;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 185;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 175;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 185;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 460;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 185;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 190;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 165;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 165;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 185;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 175;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 235;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 445;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 185;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 190;
			break;
	}

	switch (plParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 175;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 215;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 225;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 230;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 235;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 215;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 205;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 245;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 225;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 215;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 225;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 230;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 235;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 215;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 425;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 245;
			break;
	
		case 144:
			num = 9;
			num2 = 0;
			value = 225;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 135;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 130;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 110;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 140;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 95;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 100;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 110;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 95;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 105;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 105;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 115;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 115;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 115;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 500;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 440;
			break;
	}

	switch (plParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 1090;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 600;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 1865;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 490;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 470;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 1795;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 1830;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 455;
			break;
	}

	switch (plParam0)
	{
		case 192:
			num = 12;
			num2 = 0;
			value = 455;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 2110;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 380;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 1655;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 2500;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 415;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 730;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 445;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 425;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 410;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 480;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 485;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 480;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 395;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 495;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 2090;
			break;
	
		case 208:
			num = 13;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 224:
			num = 14;
			num2 = 0;
			value = 450;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 685;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 420;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 365;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 465;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 405;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 400;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 440;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 385;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 435;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 375;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 390;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 475;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 430;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 490;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 490;
			break;
	
		case 240:
			num = 15;
			num2 = 0;
			value = 615;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 315;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 415;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 425;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 435;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 445;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 640;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 460;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 465;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 745;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 845;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 1420;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 475;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 470;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 1000;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 690;
			break;
	}

	player = plParam0;

	if (player >= 0 && player < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_681[player] * Global_298659.f_17);

	TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (plParam0 >= 256)
	{
		Global_79031[0 /*14*/].f_5 = 3;
		func_480(num5, plParam0, 256, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_17);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_504(Player plParam0, int iParam1) // Position - 0x3A6D1
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 4;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 335;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 460;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 455;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 470;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 650;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 385;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 455;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 2150;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 375;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 2190;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 285;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 295;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 445;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 2240;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 465;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 1740;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 1415;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 325;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 345;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 355;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 395;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 315;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 275;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 265;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 305;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 255;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 235;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 245;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 215;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 1865;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 450;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 415;
			break;
	
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 100;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 55;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 60;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 100;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 65;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 65;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 100;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 100;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 65;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 90;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 75;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 65;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 100;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 100;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 225;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 205;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 215;
			break;
	
		case 64:
			num = 4;
			num2 = 0;
			value = 490;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 485;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 2500;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 485;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 100;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 105;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 80;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 90;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 100;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 95;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 100;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 90;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 85;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 80;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 80;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 100;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 95;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 440;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 380;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 80;
			break;
	
		case 96:
			num = 6;
			num2 = 0;
			value = 115;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 140;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 135;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 255;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 325;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 115;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 135;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 125;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 120;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 130;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 110;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 345;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 745;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 120;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 135;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 345;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 130;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 140;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 130;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 660;
			break;
	
		case 128:
			num = 8;
			num2 = 0;
			value = 150;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 150;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 150;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 150;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 75;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 90;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 145;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 150;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 110;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 95;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 155;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 255;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 165;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 1150;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 1150;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 1210;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 1125;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 1135;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 1145;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 1145;
			break;
	
		case 160:
			num = 10;
			num2 = 0;
			value = 845;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 480;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 475;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 220;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 100;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 65;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 50;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 100;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 460;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 475;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 470;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 50;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 100;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 100;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 100;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 90;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 105;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 100;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 240;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 95;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 95;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 100;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 105;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 100;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 295;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 250;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 285;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 275;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 105;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 100;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 95;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	player = plParam0;

	if (player >= 0 && player < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_186[player] * Global_298659.f_15);

	if (plParam0 >= 256)
	{
		Global_79031[0 /*14*/].f_5 = 3;
		func_480(num5, plParam0, 256, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_15);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_505(Player plParam0, int iParam1) // Position - 0x3BD04
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		case 9:
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			num2 = 11;
			num3 = 0;
			break;
	
		case 12:
			num2 = 12;
			num3 = 0;
			break;
	
		case 13:
			num2 = 13;
			num3 = 0;
			break;
	
		case 14:
			num2 = 14;
			num3 = 0;
			break;
	
		case 15:
			num2 = 15;
			num3 = 0;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num6, plParam0, 16, iParam1);
			return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_506(Player plParam0, int iParam1) // Position - 0x3BE5B
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;

	switch (plParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			num2 = 1;
			num3 = 4;
			break;
	
		case 6:
			num2 = 2;
			num3 = 0;
			break;
	
		case 7:
			num2 = 2;
			num3 = 1;
			break;
	
		case 8:
			num2 = 2;
			num3 = 2;
			break;
	
		case 9:
			num2 = 2;
			num3 = 3;
			break;
	
		case 10:
			num2 = 2;
			num3 = 4;
			break;
	
		case 11:
			num2 = 3;
			num3 = 0;
			break;
	
		case 12:
			num2 = 3;
			num3 = 1;
			break;
	
		case 13:
			num2 = 3;
			num3 = 2;
			break;
	
		case 14:
			num2 = 3;
			num3 = 3;
			break;
	
		case 15:
			num2 = 3;
			num3 = 4;
			break;
	
		case 16:
			num2 = 4;
			num3 = 0;
			break;
	
		case 17:
			num2 = 4;
			num3 = 1;
			break;
	
		case 18:
			num2 = 4;
			num3 = 2;
			break;
	
		case 19:
			num2 = 4;
			num3 = 3;
			break;
	
		case 20:
			num2 = 4;
			num3 = 4;
			break;
	
		case 21:
			num2 = 5;
			num3 = 0;
			break;
	
		case 22:
			num2 = 5;
			num3 = 1;
			break;
	
		case 23:
			num2 = 5;
			num3 = 2;
			break;
	
		case 24:
			num2 = 5;
			num3 = 3;
			break;
	
		case 25:
			num2 = 5;
			num3 = 4;
			break;
	
		case 26:
			num2 = 6;
			num3 = 0;
			break;
	
		case 27:
			num2 = 6;
			num3 = 1;
			break;
	
		case 28:
			num2 = 6;
			num3 = 2;
			break;
	
		case 29:
			num2 = 6;
			num3 = 3;
			break;
	
		case 30:
			num2 = 6;
			num3 = 4;
			break;
	
		case 31:
			num2 = 7;
			num3 = 0;
			break;
	
		case 32:
			num2 = 7;
			num3 = 1;
			break;
	
		case 33:
			num2 = 7;
			num3 = 2;
			break;
	
		case 34:
			num2 = 7;
			num3 = 3;
			break;
	
		case 35:
			num2 = 7;
			num3 = 4;
			break;
	
		case 36:
			num2 = 8;
			num3 = 0;
			break;
	
		case 37:
			num2 = 8;
			num3 = 1;
			break;
	
		case 38:
			num2 = 8;
			num3 = 2;
			break;
	
		case 39:
			num2 = 8;
			num3 = 3;
			break;
	
		case 40:
			num2 = 8;
			num3 = 4;
			break;
	
		case 41:
			num2 = 9;
			num3 = 0;
			break;
	
		case 42:
			num2 = 9;
			num3 = 1;
			break;
	
		case 43:
			num2 = 9;
			num3 = 2;
			break;
	
		case 44:
			num2 = 9;
			num3 = 3;
			break;
	
		case 45:
			num2 = 9;
			num3 = 4;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num6, plParam0, 46, iParam1);
			return;
	}

	func_470(&Global_79031[0 /*14*/], num6, plParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_507(Player plParam0, int iParam1) // Position - 0x3C178
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;
	int num6;
	int num7;
	int num8;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 8;

	switch (plParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
			num = 0;
			num2 = 1;
			value = 210;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
			num = 0;
			num2 = 3;
			value = 90;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
			num = 0;
			num2 = 4;
			value = 210;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
			num = 0;
			num2 = 5;
			value = 200;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
			num = 0;
			num2 = 6;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
			num = 0;
			num2 = 7;
			value = 130;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
			num = 0;
			num2 = 8;
			value = 220;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
			num = 0;
			num2 = 9;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
			num = 0;
			num2 = 10;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
			num = 0;
			num2 = 11;
			value = 220;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
			num = 0;
			num2 = 12;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
			num = 0;
			num2 = 13;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
			num = 0;
			num2 = 14;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
			num = 0;
			num2 = 15;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
			num = 1;
			num2 = 0;
			value = 45;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
			num = 1;
			num2 = 2;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
			num = 1;
			num2 = 4;
			value = 315;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
			num = 1;
			num2 = 5;
			value = 215;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
			num = 1;
			num2 = 6;
			value = 265;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
			num = 1;
			num2 = 8;
			value = 205;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
			num = 1;
			num2 = 9;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
			num = 1;
			num2 = 10;
			flag = true;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
			num = 1;
			num2 = 12;
			value = 55;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
			num = 1;
			num2 = 13;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
			num = 1;
			num2 = 14;
			value = 170;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
			num = 1;
			num2 = 15;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_0" /*Crew T-Shirt*/, 16);
			num = 2;
			num2 = 0;
			value = 250;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_1" /*Yeti T-Shirt*/, 16);
			num = 2;
			num2 = 1;
			value = 210;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_2" /*Charcoal T-Shirt*/, 16);
			num = 2;
			num2 = 2;
			value = 50;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_3" /*Stank T-Shirt*/, 16);
			num = 2;
			num2 = 3;
			value = 90;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_4" /*Ranch T-Shirt*/, 16);
			num = 2;
			num2 = 4;
			value = 210;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_5" /*Pikeys T-Shirt*/, 16);
			num = 2;
			num2 = 5;
			value = 200;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
			num = 2;
			num2 = 6;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_7" /*Multi-Logo T-Shirt*/, 16);
			num = 2;
			num2 = 7;
			value = 130;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_8" /*Sweatbox T-Shirt*/, 16);
			num = 2;
			num2 = 8;
			value = 220;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
			num = 2;
			num2 = 9;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
			num = 2;
			num2 = 10;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_11" /*Eris T-Shirt*/, 16);
			num = 2;
			num2 = 11;
			value = 220;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
			num = 2;
			num2 = 12;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
			num = 2;
			num2 = 13;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
			num = 2;
			num2 = 14;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
			num = 2;
			num2 = 15;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
			num = 3;
			num2 = 0;
		
			if (Global_262145.f_4014 != -1)
				value = Global_262145.f_4014;
			else
				value = 165;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
			num = 3;
			num2 = 1;
		
			if (Global_262145.f_4022 != -1)
				value = Global_262145.f_4022;
			else
				value = 120;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
			num = 3;
			num2 = 2;
		
			if (Global_262145.f_4017 != -1)
				value = Global_262145.f_4017;
			else
				value = 115;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
			num = 3;
			num2 = 3;
			flag = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
			num = 3;
			num2 = 4;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
			num = 3;
			num2 = 5;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
			num = 3;
			num2 = 6;
			flag = true;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
			num = 3;
			num2 = 7;
			flag = true;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
			num = 3;
			num2 = 8;
			flag = true;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
			num = 3;
			num2 = 9;
			flag = true;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
			num = 3;
			num2 = 10;
			flag = true;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
			num = 3;
			num2 = 11;
			flag = true;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
			num = 3;
			num2 = 12;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
			num = 3;
			num2 = 13;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
			num = 3;
			num2 = 14;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
			num = 3;
			num2 = 15;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_0" /*Black Vest*/, 16);
			num = 4;
			num2 = 0;
		
			if (Global_262145.f_4014 != -1)
				value = Global_262145.f_4014;
			else
				value = 165;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_1" /*Gray Vest*/, 16);
			num = 4;
			num2 = 1;
		
			if (Global_262145.f_4022 != -1)
				value = Global_262145.f_4022;
			else
				value = 120;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_2" /*Blue Vest*/, 16);
			num = 4;
			num2 = 2;
		
			if (Global_262145.f_4017 != -1)
				value = Global_262145.f_4017;
			else
				value = 115;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
			num = 4;
			num2 = 3;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
			num = 4;
			num2 = 4;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
			num = 4;
			num2 = 5;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
			num = 4;
			num2 = 6;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
			num = 4;
			num2 = 7;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
			num = 4;
			num2 = 8;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
			num = 4;
			num2 = 9;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
			num = 4;
			num2 = 13;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
			num = 4;
			num2 = 14;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_0" /*White Tank*/, 16);
			num = 5;
			num2 = 0;
			value = 80;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[80]);
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_1" /*Gray Tank*/, 16);
			num = 5;
			num2 = 1;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[81]);
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_2" /*Black Tank*/, 16);
			num = 5;
			num2 = 2;
			value = 50;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[82]);
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_3", 16);
			num = 5;
			num2 = 3;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_4", 16);
			num = 5;
			num2 = 4;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_5", 16);
			num = 5;
			num2 = 5;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_6", 16);
			num = 5;
			num2 = 6;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_7" /*Red Tank*/, 16);
			num = 5;
			num2 = 7;
			value = 50;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[87]);
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_8", 16);
			num = 5;
			num2 = 8;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_9", 16);
			num = 5;
			num2 = 9;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_10", 16);
			num = 5;
			num2 = 10;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_11", 16);
			num = 5;
			num2 = 11;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_12", 16);
			num = 5;
			num2 = 12;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_13", 16);
			num = 5;
			num2 = 13;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_14", 16);
			num = 5;
			num2 = 14;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_15", 16);
			num = 5;
			num2 = 15;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
			num = 6;
			num2 = 0;
		
			if (Global_262145.f_4035 != -1)
				value = Global_262145.f_4035;
			else
				value = 420;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
			num = 6;
			num2 = 1;
		
			if (Global_262145.f_4033 != -1)
				value = Global_262145.f_4033;
			else
				value = 415;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
			num = 6;
			num2 = 2;
		
			if (Global_262145.f_4013 != -1)
				value = Global_262145.f_4013;
			else
				value = 440;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
			num = 6;
			num2 = 3;
		
			if (Global_262145.f_4027 != -1)
				value = Global_262145.f_4027;
			else
				value = 400;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
			num = 6;
			num2 = 4;
		
			if (Global_262145.f_4012 != -1)
				value = Global_262145.f_4012;
			else
				value = 400;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
			num = 6;
			num2 = 5;
		
			if (Global_262145.f_4029 != -1)
				value = Global_262145.f_4029;
			else
				value = 410;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
			num = 6;
			num2 = 6;
		
			if (Global_262145.f_4032 != -1)
				value = Global_262145.f_4032;
			else
				value = 435;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
			num = 6;
			num2 = 7;
		
			if (Global_262145.f_4028 != -1)
				value = Global_262145.f_4028;
			else
				value = 425;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
			num = 6;
			num2 = 8;
		
			if (Global_262145.f_4021 != -1)
				value = Global_262145.f_4021;
			else
				value = 435;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
			num = 6;
			num2 = 9;
		
			if (Global_262145.f_4026 != -1)
				value = Global_262145.f_4026;
			else
				value = 420;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
			num = 6;
			num2 = 10;
		
			if (Global_262145.f_4024 != -1)
				value = Global_262145.f_4024;
			else
				value = 425;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
			num = 6;
			num2 = 11;
		
			if (Global_262145.f_4034 != -1)
				value = Global_262145.f_4034;
			else
				value = 425;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
			num = 6;
			num2 = 12;
		
			if (Global_262145.f_4020 != -1)
				value = Global_262145.f_4020;
			else
				value = 435;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
			num = 6;
			num2 = 13;
		
			if (Global_262145.f_4015 != -1)
				value = Global_262145.f_4015;
			else
				value = 750;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
			num = 6;
			num2 = 14;
		
			if (Global_262145.f_4030 != -1)
				value = Global_262145.f_4030;
			else
				value = 400;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
			num = 6;
			num2 = 15;
		
			if (Global_262145.f_4023 != -1)
				value = Global_262145.f_4023;
			else
				value = 435;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_0" /*White Shirt*/, 16);
			num = 7;
			num2 = 0;
		
			if (Global_262145.f_4035 != -1)
				value = Global_262145.f_4035;
			else
				value = 420;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_1" /*Silver Shirt*/, 16);
			num = 7;
			num2 = 1;
		
			if (Global_262145.f_4033 != -1)
				value = Global_262145.f_4033;
			else
				value = 415;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_2" /*Charcoal Shirt*/, 16);
			num = 7;
			num2 = 2;
		
			if (Global_262145.f_4013 != -1)
				value = Global_262145.f_4013;
			else
				value = 440;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_3" /*Pale Blue Shirt*/, 16);
			num = 7;
			num2 = 3;
		
			if (Global_262145.f_4027 != -1)
				value = Global_262145.f_4027;
			else
				value = 400;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_4" /*Barely Blue Shirt*/, 16);
			num = 7;
			num2 = 4;
		
			if (Global_262145.f_4012 != -1)
				value = Global_262145.f_4012;
			else
				value = 400;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_5" /*Pink Check Shirt*/, 16);
			num = 7;
			num2 = 5;
		
			if (Global_262145.f_4029 != -1)
				value = Global_262145.f_4029;
			else
				value = 410;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_6" /*Salmon Shirt*/, 16);
			num = 7;
			num2 = 6;
		
			if (Global_262145.f_4032 != -1)
				value = Global_262145.f_4032;
			else
				value = 435;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_7" /*Pale Olive Shirt*/, 16);
			num = 7;
			num2 = 7;
		
			if (Global_262145.f_4028 != -1)
				value = Global_262145.f_4028;
			else
				value = 425;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_8" /*Fuchsia Shirt*/, 16);
			num = 7;
			num2 = 8;
		
			if (Global_262145.f_4021 != -1)
				value = Global_262145.f_4021;
			else
				value = 435;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_9" /*Off-White Shirt*/, 16);
			num = 7;
			num2 = 9;
		
			if (Global_262145.f_4026 != -1)
				value = Global_262145.f_4026;
			else
				value = 420;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_10" /*Mint Shirt*/, 16);
			num = 7;
			num2 = 10;
		
			if (Global_262145.f_4024 != -1)
				value = Global_262145.f_4024;
			else
				value = 425;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_11" /*Tan Shirt*/, 16);
			num = 7;
			num2 = 11;
		
			if (Global_262145.f_4034 != -1)
				value = Global_262145.f_4034;
			else
				value = 425;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_12" /*Dark Salmon Shirt*/, 16);
			num = 7;
			num2 = 12;
		
			if (Global_262145.f_4020 != -1)
				value = Global_262145.f_4020;
			else
				value = 435;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_13" /*Blue Check Shirt*/, 16);
			num = 7;
			num2 = 13;
		
			if (Global_262145.f_4015 != -1)
				value = Global_262145.f_4015;
			else
				value = 750;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_14" /*Pink Shirt*/, 16);
			num = 7;
			num2 = 14;
		
			if (Global_262145.f_4030 != -1)
				value = Global_262145.f_4030;
			else
				value = 400;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_6_15" /*Lemon Shirt*/, 16);
			num = 7;
			num2 = 15;
		
			if (Global_262145.f_4023 != -1)
				value = Global_262145.f_4023;
			else
				value = 435;
			break;
	}

	switch (plParam0)
	{
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_0" /*Red Accent Tee*/, 16);
			num = 8;
			num2 = 0;
			value = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_1", 16);
			num = 8;
			num2 = 1;
			flag = true;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_2", 16);
			num = 8;
			num2 = 2;
			flag = true;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_3", 16);
			num = 8;
			num2 = 3;
			flag = true;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_4", 16);
			num = 8;
			num2 = 4;
			flag = true;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_5", 16);
			num = 8;
			num2 = 5;
			flag = true;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_6", 16);
			num = 8;
			num2 = 6;
			flag = true;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_7", 16);
			num = 8;
			num2 = 7;
			flag = true;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_8", 16);
			num = 8;
			num2 = 8;
			flag = true;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_9", 16);
			num = 8;
			num2 = 9;
			flag = true;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_10" /*Sky Blue Tee*/, 16);
			num = 8;
			num2 = 10;
			value = 65;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_11", 16);
			num = 8;
			num2 = 11;
			flag = true;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_12", 16);
			num = 8;
			num2 = 12;
			flag = true;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_13" /*Slate Tee*/, 16);
			num = 8;
			num2 = 13;
			value = 40;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_14" /*Gray Two-Tone Tee*/, 16);
			num = 8;
			num2 = 14;
			value = 45;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_15", 16);
			num = 8;
			num2 = 15;
			flag = true;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_0" /*White Striped Polo Shirt*/, 16);
			num = 9;
			num2 = 0;
			value = 265;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_1" /*Metal Polo Shirt*/, 16);
			num = 9;
			num2 = 1;
			value = 340;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_2" /*Night Polo Shirt*/, 16);
			num = 9;
			num2 = 2;
			value = 335;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_3" /*Cupcake Polo Shirt*/, 16);
			num = 9;
			num2 = 3;
			value = 330;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_4" /*Blue Polo Shirt*/, 16);
			num = 9;
			num2 = 4;
			value = 345;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_5" /*Vibe Polo Shirt*/, 16);
			num = 9;
			num2 = 5;
			value = 550;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_6" /*Salmon Polo Shirt*/, 16);
			num = 9;
			num2 = 6;
			value = 340;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_7" /*Royale Polo Shirt*/, 16);
			num = 9;
			num2 = 7;
			value = 295;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_8", 16);
			num = 9;
			num2 = 8;
			flag = true;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_9", 16);
			num = 9;
			num2 = 9;
			flag = true;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_10" /*Pro Lite Polo Shirt*/, 16);
			num = 9;
			num2 = 10;
			value = 545;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_11" /*Ice Polo Shirt*/, 16);
			num = 9;
			num2 = 11;
			value = 345;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_12" /*Money Polo Shirt*/, 16);
			num = 9;
			num2 = 12;
			value = 315;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_13" /*Hunter Polo Shirt*/, 16);
			num = 9;
			num2 = 13;
			value = 520;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_14" /*Red Polo Shirt*/, 16);
			num = 9;
			num2 = 14;
			value = 325;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_15" /*Sunshine Polo Shirt*/, 16);
			num = 9;
			num2 = 15;
			value = 330;
			break;
	}

	switch (plParam0)
	{
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
			num = 10;
			num2 = 0;
		
			if (Global_262145.f_4035 != -1)
				value = Global_262145.f_4035;
			else
				value = 405;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
			num = 10;
			num2 = 1;
		
			if (Global_262145.f_4033 != -1)
				value = Global_262145.f_4033;
			else
				value = 400;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
			num = 10;
			num2 = 2;
		
			if (Global_262145.f_4019 != -1)
				value = Global_262145.f_4019;
			else
				value = 425;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
			num = 10;
			num2 = 3;
		
			if (Global_262145.f_4027 != -1)
				value = Global_262145.f_4027;
			else
				value = 385;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
			num = 10;
			num2 = 4;
		
			if (Global_262145.f_4012 != -1)
				value = Global_262145.f_4012;
			else
				value = 385;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
			num = 10;
			num2 = 5;
		
			if (Global_262145.f_4029 != -1)
				value = Global_262145.f_4029;
			else
				value = 395;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
			num = 10;
			num2 = 6;
		
			if (Global_262145.f_4018 != -1)
				value = Global_262145.f_4018;
			else
				value = 500;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
			num = 10;
			num2 = 7;
		
			if (Global_262145.f_4032 != -1)
				value = Global_262145.f_4032;
			else
				value = 420;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
			num = 10;
			num2 = 8;
		
			if (Global_262145.f_4028 != -1)
				value = Global_262145.f_4028;
			else
				value = 410;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
			num = 10;
			num2 = 9;
		
			if (Global_262145.f_4021 != -1)
				value = Global_262145.f_4021;
			else
				value = 420;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
			num = 10;
			num2 = 10;
		
			if (Global_262145.f_4026 != -1)
				value = Global_262145.f_4026;
			else
				value = 405;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
			num = 10;
			num2 = 11;
		
			if (Global_262145.f_4024 != -1)
				value = Global_262145.f_4024;
			else
				value = 410;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
			num = 10;
			num2 = 12;
		
			if (Global_262145.f_4016 != -1)
				value = Global_262145.f_4016;
			else
				value = 420;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
			num = 10;
			num2 = 13;
		
			if (Global_262145.f_4031 != -1)
				value = Global_262145.f_4031;
			else
				value = 420;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
			num = 10;
			num2 = 14;
		
			if (Global_262145.f_4034 != -1)
				value = Global_262145.f_4034;
			else
				value = 410;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
			num = 10;
			num2 = 15;
		
			if (Global_262145.f_4025 != -1)
				value = Global_262145.f_4025;
			else
				value = 460;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_0" /*White Shirt*/, 16);
			num = 11;
			num2 = 0;
		
			if (Global_262145.f_4035 != -1)
				value = Global_262145.f_4035;
			else
				value = 405;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_1" /*Silver Shirt*/, 16);
			num = 11;
			num2 = 1;
		
			if (Global_262145.f_4033 != -1)
				value = Global_262145.f_4033;
			else
				value = 400;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_2" /*Charcoal Shirt*/, 16);
			num = 11;
			num2 = 2;
		
			if (Global_262145.f_4019 != -1)
				value = Global_262145.f_4019;
			else
				value = 425;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_3" /*Pale Blue Shirt*/, 16);
			num = 11;
			num2 = 3;
		
			if (Global_262145.f_4027 != -1)
				value = Global_262145.f_4027;
			else
				value = 385;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_4" /*Barely Blue Shirt*/, 16);
			num = 11;
			num2 = 4;
		
			if (Global_262145.f_4012 != -1)
				value = Global_262145.f_4012;
			else
				value = 385;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_5" /*Pink Check Shirt*/, 16);
			num = 11;
			num2 = 5;
		
			if (Global_262145.f_4029 != -1)
				value = Global_262145.f_4029;
			else
				value = 395;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_6" /*Blue Woven Shirt*/, 16);
			num = 11;
			num2 = 6;
		
			if (Global_262145.f_4018 != -1)
				value = Global_262145.f_4018;
			else
				value = 500;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_7" /*Salmon Shirt*/, 16);
			num = 11;
			num2 = 7;
		
			if (Global_262145.f_4032 != -1)
				value = Global_262145.f_4032;
			else
				value = 420;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_8" /*Pale Olive Shirt*/, 16);
			num = 11;
			num2 = 8;
		
			if (Global_262145.f_4028 != -1)
				value = Global_262145.f_4028;
			else
				value = 410;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_9" /*Fuchsia Shirt*/, 16);
			num = 11;
			num2 = 9;
		
			if (Global_262145.f_4021 != -1)
				value = Global_262145.f_4021;
			else
				value = 420;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_10" /*Off-White Shirt*/, 16);
			num = 11;
			num2 = 10;
		
			if (Global_262145.f_4026 != -1)
				value = Global_262145.f_4026;
			else
				value = 405;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_11" /*Mint Shirt*/, 16);
			num = 11;
			num2 = 11;
		
			if (Global_262145.f_4024 != -1)
				value = Global_262145.f_4024;
			else
				value = 410;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_12" /*Blue Striped Shirt*/, 16);
			num = 11;
			num2 = 12;
		
			if (Global_262145.f_4016 != -1)
				value = Global_262145.f_4016;
			else
				value = 420;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_13" /*Pink Striped Shirt*/, 16);
			num = 11;
			num2 = 13;
		
			if (Global_262145.f_4031 != -1)
				value = Global_262145.f_4031;
			else
				value = 420;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_14" /*Tan Shirt*/, 16);
			num = 11;
			num2 = 14;
		
			if (Global_262145.f_4034 != -1)
				value = Global_262145.f_4034;
			else
				value = 410;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_10_15" /*Ocean Stripe Shirt*/, 16);
			num = 11;
			num2 = 15;
		
			if (Global_262145.f_4025 != -1)
				value = Global_262145.f_4025;
			else
				value = 460;
			break;
	}

	switch (plParam0)
	{
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_0" /*White Untucked*/, 16);
			num = 12;
			num2 = 0;
			value = 420;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_1" /*Steel Untucked*/, 16);
			num = 12;
			num2 = 1;
			value = 415;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_2" /*Black Untucked*/, 16);
			num = 12;
			num2 = 2;
			value = 695;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_3" /*Sky Untucked*/, 16);
			num = 12;
			num2 = 3;
			value = 385;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_4" /*Navy Untucked*/, 16);
			num = 12;
			num2 = 4;
			value = 330;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_5" /*Red Untucked*/, 16);
			num = 12;
			num2 = 5;
			value = 345;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_6" /*Moss Untucked*/, 16);
			num = 12;
			num2 = 6;
			value = 340;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_7" /*Ash Untucked*/, 16);
			num = 12;
			num2 = 7;
			value = 450;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_8" /*Mustard Untucked*/, 16);
			num = 12;
			num2 = 8;
			value = 295;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_9" /*Butter Untucked*/, 16);
			num = 12;
			num2 = 9;
			value = 340;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_10" /*Forest Untucked*/, 16);
			num = 12;
			num2 = 10;
			value = 1060;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_11" /*Azure Untucked*/, 16);
			num = 12;
			num2 = 11;
			value = 1040;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_12", 16);
			num = 12;
			num2 = 12;
			flag = true;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_13", 16);
			num = 12;
			num2 = 13;
			flag = true;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_14", 16);
			num = 12;
			num2 = 14;
			flag = true;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_15", 16);
			num = 12;
			num2 = 15;
			flag = true;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_0" /*White Tucked*/, 16);
			num = 13;
			num2 = 0;
			value = 420;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_1" /*Silver Tucked*/, 16);
			num = 13;
			num2 = 1;
			value = 415;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_2" /*Black Tucked*/, 16);
			num = 13;
			num2 = 2;
			value = 680;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_3" /*Blue Tucked*/, 16);
			num = 13;
			num2 = 3;
			value = 385;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_4", 16);
			num = 13;
			num2 = 4;
			flag = true;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_5" /*Burgundy Tucked*/, 16);
			num = 13;
			num2 = 5;
			value = 345;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_6", 16);
			num = 13;
			num2 = 6;
			flag = true;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_7", 16);
			num = 13;
			num2 = 7;
			flag = true;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_8", 16);
			num = 13;
			num2 = 8;
			flag = true;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_9", 16);
			num = 13;
			num2 = 9;
			flag = true;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_10", 16);
			num = 13;
			num2 = 10;
			flag = true;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_11", 16);
			num = 13;
			num2 = 11;
			flag = true;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_12", 16);
			num = 13;
			num2 = 12;
			flag = true;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_13" /*Green Plaid Tucked*/, 16);
			num = 13;
			num2 = 13;
			value = 1065;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_14", 16);
			num = 13;
			num2 = 14;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_15", 16);
			num = 13;
			num2 = 15;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_0" /*White V Neck*/, 16);
			num = 14;
			num2 = 0;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[16]);
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_1" /*Ash V Neck*/, 16);
			num = 14;
			num2 = 1;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[17]);
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
			num = 14;
			num2 = 2;
			flag = true;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_3" /*Swallow V Neck*/, 16);
			num = 14;
			num2 = 3;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[19]);
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_4" /*Harsh Souls V Neck*/, 16);
			num = 14;
			num2 = 4;
			value = 315;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[20]);
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_5" /*Broker V Neck*/, 16);
			num = 14;
			num2 = 5;
			value = 215;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[21]);
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_6" /*Hip-Hop Royalty V Neck*/, 16);
			num = 14;
			num2 = 6;
			value = 265;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[22]);
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_7" /*Green V Neck*/, 16);
			num = 14;
			num2 = 7;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[23]);
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_8" /*G&B V Neck*/, 16);
			num = 14;
			num2 = 8;
			value = 205;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[24]);
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
			num = 14;
			num2 = 9;
			flag = true;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
			num = 14;
			num2 = 10;
			flag = true;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_11" /*Orange V Neck*/, 16);
			num = 14;
			num2 = 11;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[27]);
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_12" /*Brown V Neck*/, 16);
			num = 14;
			num2 = 12;
			value = 55;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[28]);
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
			num = 14;
			num2 = 13;
			flag = true;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_14" /*Signs V Neck*/, 16);
			num = 14;
			num2 = 14;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[30]);
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_15" /*Blue Striped V Neck*/, 16);
			num = 14;
			num2 = 15;
			flag = true;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_15_0", 16);
			num = 15;
			num2 = 0;
			value = 0;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[32]);
			break;
	}

	if (plParam0 == 23 || plParam0 == 231)
	{
		if (func_409(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23]);
		}
	}
	else if (plParam0 == 17 || plParam0 == 225)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
	}
	else if (plParam0 == 28 || plParam0 == 236)
	{
		if (func_409(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28]);
		}
	}
	else if (plParam0 >= 0 && plParam0 < 32)
	{
		player = plParam0;
	
		if (player >= 0 && player < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[player]);
	}
	else if (plParam0 >= 32 && plParam0 < 48)
	{
		num6 = plParam0 - 32;
	
		if (num6 >= 0 && num6 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num6]);
	}
	else if (plParam0 >= 128 && plParam0 < 160)
	{
		num7 = (plParam0 - 160) + 124;
	
		if (num7 >= 0 && num7 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num7]);
	}
	else if (plParam0 >= 192 && plParam0 < 224)
	{
		num8 = (plParam0 - 160) + 188;
	
		if (num8 >= 0 && num8 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num8]);
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_298659.f_16);

	if (plParam0 >= 241)
	{
		Global_79031[0 /*14*/].f_5 = 3;
		func_480(num5, plParam0, 241, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_16);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_508(Player plParam0, int iParam1) // Position - 0x3E669
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	Player player;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 11;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 210;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 90;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 210;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 200;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 130;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 220;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 220;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 45;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 315;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 215;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 265;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 205;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 55;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 170;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 160;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 205;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 110;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 150;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 115;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 115;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 150;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 150;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 115;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 140;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 125;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 115;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 150;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 150;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 275;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 460;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 260;
			break;
	}

	switch (plParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 965;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 2520;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 350;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 150;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 3125;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 80;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 45;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 50;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 50;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 2485;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 535;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 2945;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 3080;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 2990;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 3750;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 515;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 530;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 2810;
			break;
	
		case 108:
			num = 7;
			num2 = 0;
			value = 150;
			break;
	
		case 109:
			num = 7;
			num2 = 1;
			value = 155;
			break;
	
		case 110:
			num = 7;
			num2 = 2;
			value = 320;
			break;
	
		case 111:
			num = 7;
			num2 = 3;
			value = 140;
			break;
	
		case 112:
			num = 7;
			num2 = 4;
			value = 150;
			break;
	
		case 113:
			num = 7;
			num2 = 5;
			value = 145;
			break;
	
		case 114:
			num = 7;
			num2 = 6;
			value = 150;
			break;
	
		case 115:
			num = 7;
			num2 = 7;
			value = 140;
			break;
	
		case 116:
			num = 7;
			num2 = 8;
			value = 135;
			break;
	
		case 117:
			num = 7;
			num2 = 9;
			value = 130;
			break;
	
		case 118:
			num = 7;
			num2 = 10;
			value = 130;
			break;
	
		case 119:
			num = 7;
			num2 = 11;
			value = 150;
			break;
	
		case 120:
			num = 7;
			num2 = 12;
			value = 145;
			break;
	
		case 121:
			num = 7;
			num2 = 13;
			value = 740;
			break;
	
		case 122:
			num = 7;
			num2 = 14;
			value = 790;
			break;
	
		case 123:
			num = 7;
			num2 = 15;
			value = 130;
			break;
	}

	switch (plParam0)
	{
		case 124:
			num = 8;
			num2 = 0;
			value = 45;
			break;
	
		case 125:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 128:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 129:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 130:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 131:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 132:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 133:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 10;
			value = 65;
			break;
	
		case 135:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 13;
			value = 40;
			break;
	
		case 138:
			num = 8;
			num2 = 14;
			value = 45;
			break;
	
		case 139:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 9;
			num2 = 0;
			value = 265;
			break;
	
		case 141:
			num = 9;
			num2 = 1;
			value = 340;
			break;
	
		case 142:
			num = 9;
			num2 = 2;
			value = 335;
			break;
	
		case 143:
			num = 9;
			num2 = 3;
			value = 330;
			break;
	
		case 144:
			num = 9;
			num2 = 4;
			value = 345;
			break;
	
		case 145:
			num = 9;
			num2 = 5;
			value = 550;
			break;
	
		case 146:
			num = 9;
			num2 = 6;
			value = 340;
			break;
	
		case 147:
			num = 9;
			num2 = 7;
			value = 295;
			break;
	
		case 148:
			num = 9;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 149:
			num = 9;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 150:
			num = 9;
			num2 = 10;
			value = 545;
			break;
	
		case 151:
			num = 9;
			num2 = 11;
			value = 345;
			break;
	
		case 152:
			num = 9;
			num2 = 12;
			value = 315;
			break;
	
		case 153:
			num = 9;
			num2 = 13;
			value = 520;
			break;
	
		case 154:
			num = 9;
			num2 = 14;
			value = 325;
			break;
	
		case 155:
			num = 9;
			num2 = 15;
			value = 330;
			break;
	}

	switch (plParam0)
	{
		case 156:
			num = 10;
			num2 = 0;
			value = 505;
			break;
	
		case 157:
			num = 10;
			num2 = 1;
			value = 470;
			break;
	
		case 158:
			num = 10;
			num2 = 2;
			value = 475;
			break;
	
		case 159:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 160:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 161:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 162:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 163:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 11;
			num2 = 0;
			value = 120;
			break;
	
		case 173:
			num = 11;
			num2 = 1;
			value = 360;
			break;
	
		case 174:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 7;
			value = 90;
			break;
	
		case 180:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 14;
			value = 2450;
			break;
	
		case 187:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 188:
			num = 12;
			num2 = 0;
			value = 420;
			break;
	
		case 189:
			num = 12;
			num2 = 1;
			value = 415;
			break;
	
		case 190:
			num = 12;
			num2 = 2;
			value = 695;
			break;
	
		case 191:
			num = 12;
			num2 = 3;
			value = 385;
			break;
	
		case 192:
			num = 12;
			num2 = 4;
			value = 330;
			break;
	
		case 193:
			num = 12;
			num2 = 5;
			value = 345;
			break;
	
		case 194:
			num = 12;
			num2 = 6;
			value = 340;
			break;
	
		case 195:
			num = 12;
			num2 = 7;
			value = 450;
			break;
	
		case 196:
			num = 12;
			num2 = 8;
			value = 295;
			break;
	
		case 197:
			num = 12;
			num2 = 9;
			value = 340;
			break;
	
		case 198:
			num = 12;
			num2 = 10;
			value = 1060;
			break;
	
		case 199:
			num = 12;
			num2 = 11;
			value = 1040;
			break;
	
		case 200:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 13;
			num2 = 0;
			value = 420;
			break;
	
		case 205:
			num = 13;
			num2 = 1;
			value = 415;
			break;
	
		case 206:
			num = 13;
			num2 = 2;
			value = 680;
			break;
	
		case 207:
			num = 13;
			num2 = 3;
			value = 385;
			break;
	
		case 208:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 5;
			value = 345;
			break;
	
		case 210:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 13;
			value = 1065;
			break;
	
		case 218:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (plParam0)
	{
		case 220:
			num = 14;
			num2 = 0;
			value = 420;
			break;
	
		case 221:
			num = 14;
			num2 = 1;
			value = 415;
			break;
	
		case 222:
			num = 14;
			num2 = 2;
			value = 440;
			break;
	
		case 223:
			num = 14;
			num2 = 3;
			value = 385;
			break;
	
		case 224:
			num = 14;
			num2 = 4;
			value = 330;
			break;
	
		case 225:
			num = 14;
			num2 = 5;
			value = 445;
			break;
	
		case 226:
			num = 14;
			num2 = 6;
			value = 340;
			break;
	
		case 227:
			num = 14;
			num2 = 7;
			value = 440;
			break;
	
		case 228:
			num = 14;
			num2 = 8;
			value = 295;
			break;
	
		case 229:
			num = 14;
			num2 = 9;
			value = 340;
			break;
	
		case 230:
			num = 14;
			num2 = 10;
			value = 325;
			break;
	
		case 231:
			num = 14;
			num2 = 11;
			value = 435;
			break;
	
		case 232:
			num = 14;
			num2 = 12;
			value = 445;
			break;
	
		case 233:
			num = 14;
			num2 = 13;
			value = 440;
			break;
	
		case 234:
			num = 14;
			num2 = 14;
			value = 325;
			break;
	
		case 235:
			num = 14;
			num2 = 15;
			value = 325;
			break;
	
		case 236:
			num = 15;
			num2 = 0;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (plParam0 == 23)
	{
		if (func_409(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_RS" /*Rockstar V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_298659.f_16);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23] * Global_298659.f_16);
		}
	}
	else if (plParam0 == 17)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "REW_LSB" /*Los Santos Belle V Neck*/, 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_298659.f_16);
	}
	else if (plParam0 == 28)
	{
		if (func_409(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "REW_REDSK" /*Red Skull V Neck*/, 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_298659.f_16);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28] * Global_298659.f_16);
		}
	}
	else
	{
		player = plParam0;
	
		if (player >= 0 && player < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[player] * Global_298659.f_16);
	}

	if (plParam0 >= 237)
	{
		Global_79031[0 /*14*/].f_5 = 3;
		func_480(num5, plParam0, 237, iParam1);
	
		if (Global_79031[0 /*14*/].f_7 > 0)
			Global_79031[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_79031[0 /*14*/].f_7) * Global_298659.f_16);
	}
	else
	{
		func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_509(Player plParam0, int iParam1) // Position - 0x3FBF4
{
	BOOL flag;
	int value;
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 2;

	switch (plParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[0]);
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[1]);
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[2]);
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[3]);
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 175;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[4]);
			break;
	
		case 5:
			num = 1;
			num2 = 4;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[5]);
			break;
	
		case 6:
			num = 1;
			num2 = 5;
			value = 0;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
			value = 580;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[6]);
			break;
	
		case 8:
			num = 2;
			num2 = 1;
			value = 575;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[7]);
			break;
	
		case 9:
			num = 2;
			num2 = 2;
			value = 570;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[8]);
			break;
	
		case 10:
			num = 2;
			num2 = 3;
			value = 565;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[9]);
			break;
	
		case 11:
			num = 2;
			num2 = 4;
			value = 560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[10]);
			break;
	
		case 12:
			num = 2;
			num2 = 5;
			value = 0;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
			value = 1100;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[11]);
			break;
	
		case 14:
			num = 3;
			num2 = 1;
			value = 1095;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[12]);
			break;
	
		case 15:
			num = 3;
			num2 = 2;
			value = 1090;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[13]);
			break;
	
		case 16:
			num = 3;
			num2 = 3;
			value = 1085;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[14]);
			break;
	
		case 17:
			num = 3;
			num2 = 4;
			value = 1080;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[15]);
			break;
	
		case 18:
			num = 3;
			num2 = 5;
			value = 0;
			break;
	
		case 19:
			num = 4;
			num2 = 0;
			value = 520;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[16]);
			break;
	
		case 20:
			num = 4;
			num2 = 1;
			value = 515;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[17]);
			break;
	
		case 21:
			num = 4;
			num2 = 2;
			value = 510;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[18]);
			break;
	
		case 22:
			num = 4;
			num2 = 3;
			value = 505;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[19]);
			break;
	
		case 23:
			num = 4;
			num2 = 4;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[20]);
			break;
	
		case 24:
			num = 4;
			num2 = 5;
			value = 0;
			break;
	
		case 25:
			num = 4;
			num2 = 6;
			value = 0;
			break;
	
		case 26:
			num = 5;
			num2 = 0;
			value = 295;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[21]);
			break;
	
		case 27:
			num = 5;
			num2 = 1;
			value = 290;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[22]);
			break;
	
		case 28:
			num = 5;
			num2 = 2;
			value = 285;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[23]);
			break;
	
		case 29:
			num = 5;
			num2 = 3;
			value = 280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[24]);
			break;
	
		case 30:
			num = 5;
			num2 = 4;
			value = 275;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[25]);
			break;
	
		case 31:
			num = 5;
			num2 = 5;
			value = 0;
			break;
	
		case 32:
			num = 6;
			num2 = 0;
			value = 950;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[26]);
			break;
	
		case 33:
			num = 6;
			num2 = 1;
			value = 945;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[27]);
			break;
	
		case 34:
			num = 6;
			num2 = 2;
			value = 940;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[28]);
			break;
	
		case 35:
			num = 6;
			num2 = 3;
			value = 935;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[29]);
			break;
	
		case 36:
			num = 6;
			num2 = 4;
			value = 930;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[30]);
			break;
	
		case 37:
			num = 6;
			num2 = 5;
			value = 0;
			break;
	
		case 38:
			num = 7;
			num2 = 0;
			value = 440;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[31]);
			break;
	
		case 39:
			num = 7;
			num2 = 1;
			value = 435;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[32]);
			break;
	
		case 40:
			num = 7;
			num2 = 2;
			value = 430;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[33]);
			break;
	
		case 41:
			num = 7;
			num2 = 3;
			value = 425;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[34]);
			break;
	
		case 42:
			num = 7;
			num2 = 4;
			value = 420;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[35]);
			break;
	
		case 43:
			num = 7;
			num2 = 5;
			value = 0;
			break;
	
		case 44:
			num = 7;
			num2 = 6;
			value = 0;
			break;
	
		case 45:
			num = 8;
			num2 = 0;
			value = 1150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[36]);
			break;
	
		case 46:
			num = 8;
			num2 = 1;
			value = 1145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[37]);
			break;
	
		case 47:
			num = 8;
			num2 = 2;
			value = 1140;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[38]);
			break;
	
		case 48:
			num = 8;
			num2 = 3;
			value = 1135;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[39]);
			break;
	
		case 49:
			num = 8;
			num2 = 4;
			value = 1130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[40]);
			break;
	
		case 50:
			num = 9;
			num2 = 0;
			value = 395;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[41]);
			break;
	
		case 51:
			num = 9;
			num2 = 1;
			value = 390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[42]);
			break;
	
		case 52:
			num = 9;
			num2 = 2;
			value = 385;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[43]);
			break;
	
		case 53:
			num = 9;
			num2 = 3;
			value = 380;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[44]);
			break;
	
		case 54:
			num = 9;
			num2 = 4;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[45]);
			break;
	
		case 55:
			num = 9;
			num2 = 5;
			value = 0;
			break;
	
		case 56:
			num = 9;
			num2 = 6;
			value = 0;
			break;
	
		case 57:
			num = 10;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[46]);
			break;
	
		case 58:
			num = 10;
			num2 = 1;
			value = 495;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[47]);
			break;
	
		case 59:
			num = 10;
			num2 = 2;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[48]);
			break;
	
		case 60:
			num = 10;
			num2 = 3;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[49]);
			break;
	
		case 61:
			num = 10;
			num2 = 4;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[50]);
			break;
	
		case 62:
			num = 10;
			num2 = 5;
			value = 0;
			break;
	
		case 63:
			num = 11;
			num2 = 0;
			value = 1050;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[51]);
			break;
	
		case 64:
			num = 11;
			num2 = 1;
			value = 1045;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[52]);
			break;
	
		case 65:
			num = 11;
			num2 = 2;
			value = 1040;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[53]);
			break;
	
		case 66:
			num = 11;
			num2 = 3;
			value = 1035;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[54]);
			break;
	
		case 67:
			num = 11;
			num2 = 4;
			value = 1030;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[55]);
			break;
	
		case 68:
			num = 11;
			num2 = 5;
			value = 0;
			break;
	
		case 69:
			num = 12;
			num2 = 0;
			value = 550;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[56]);
			break;
	
		case 70:
			num = 12;
			num2 = 1;
			value = 545;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[57]);
			break;
	
		case 71:
			num = 12;
			num2 = 2;
			value = 540;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[58]);
			break;
	
		case 72:
			num = 12;
			num2 = 3;
			value = 535;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[59]);
			break;
	
		case 73:
			num = 12;
			num2 = 4;
			value = 530;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[60]);
			break;
	
		case 74:
			num = 13;
			num2 = 0;
			value = 1200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[61]);
			break;
	
		case 75:
			num = 13;
			num2 = 1;
			value = 1195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[62]);
			break;
	
		case 76:
			num = 13;
			num2 = 2;
			value = 1190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[63]);
			break;
	
		case 77:
			num = 13;
			num2 = 3;
			value = 1185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[64]);
			break;
	
		case 78:
			num = 13;
			num2 = 4;
			value = 1180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[65]);
			break;
	
		case 79:
			num = 13;
			num2 = 5;
			value = 0;
			break;
	
		case 80:
			num = 14;
			num2 = 0;
			value = 2000;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[66]);
			break;
	
		case 81:
			num = 14;
			num2 = 1;
			value = 1995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[67]);
			break;
	
		case 82:
			num = 14;
			num2 = 2;
			value = 1990;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[68]);
			break;
	
		case 83:
			num = 14;
			num2 = 3;
			value = 1985;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[69]);
			break;
	
		case 84:
			num = 14;
			num2 = 4;
			value = 1980;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[70]);
			break;
	
		case 85:
			num = 15;
			num2 = 0;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[71]);
			break;
	
		case 86:
			num = 15;
			num2 = 1;
			value = 470;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[72]);
			break;
	
		case 87:
			num = 15;
			num2 = 2;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[73]);
			break;
	
		case 88:
			num = 15;
			num2 = 3;
			value = 460;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[74]);
			break;
	
		case 89:
			num = 15;
			num2 = 4;
			value = 455;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[75]);
			break;
	
		case 90:
			num = 15;
			num2 = 5;
			value = 0;
			break;
	
		default:
			Global_79031[0 /*14*/].f_5 = 3;
			func_480(num5, plParam0, 91, iParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_470(&Global_79031[0 /*14*/], num5, plParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_510() // Position - 0x40AAF
{
	Global_79031[0 /*14*/].f_1 = -1;
	Global_79031[0 /*14*/].f_2 = -1;
	Global_79031[0 /*14*/].f_5 = -1;
	Global_79031[0 /*14*/].f_3 = -1;
	Global_79031[0 /*14*/].f_4 = -1;
	Global_79031[0 /*14*/].f_7 = 0;
	Global_79031[0 /*14*/].f_6 = 0;
	Global_79031[0 /*14*/].f_13 = -1;
	Global_79031[0 /*14*/].f_12 = 0;
	Global_79031[0 /*14*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_79031[0 /*14*/].f_8), "NO_LABEL", 16);
	return;
}

BOOL func_511(Vehicle veParam0) // Position - 0x40B28
{
	Player player;

	if (unk_0x834C960822A4683F())
	{
		player = Global_1845263[unk_0x259BE71D8A81D4FA() /*877*/].f_96.f_28;
	
		if (player != -1 && player < 4)
			if (func_512(player) != -1 && func_512(player) != 0)
				return 1;
	}

	if (!unk_0x4FAFF4BCB7633475(veParam0))
		if (unk_0x4B423FAA24E8ABF0(veParam0) == joaat("MP_M_Freemode_01"))
			if (unk_0xC0120BBCC298EA2F(veParam0, 11) == 15)
				return 1;

	return 0;
}

Player func_512(Player plParam0) // Position - 0x40BA4
{
	if (func_513(true))
		return Global_1679955;

	if (plParam0 <= -1 || plParam0 >= 4)
		return -1;

	return Global_2685249.f_6339[plParam0];
}

BOOL func_513(BOOL bParam0) // Position - 0x40BDB
{
	if (func_517(bParam0) || func_515() || func_514(*Global_4718592.f_183007))
		return true;

	return false;
}

BOOL func_514(int iParam0) // Position - 0x40C0F
{
	return iParam0 == 87;
}

BOOL func_515() // Position - 0x40C1C
{
	return func_516(*Global_4718592.f_126144);
}

int func_516(Hash hParam0) // Position - 0x40C32
{
	int i;

	if (hParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_31332[i] == hParam0)
			return 1;
	}

	return 0;
}

BOOL func_517(BOOL bParam0) // Position - 0x40C6C
{
	if (bParam0)
		return IS_BIT_SET(*Global_4718592.f_176243, 12) && func_518();

	return IS_BIT_SET(*Global_4718592.f_176243, 12);
}

BOOL func_518() // Position - 0x40CA2
{
	if (*Global_4718592.f_126721 == 1 || *Global_4718592.f_126721 == 2)
		return true;

	return false;
}

BOOL func_519(Vehicle veParam0, BOOL bParam1) // Position - 0x40CD0
{
	int num;
	int num2;
	int num3;
	Player player;
	int num4;
	Player player2;
	int num5;
	int num6;
	Player player3;
	int num7;
	int num8;
	int num9;
	Player player4;

	{
		{