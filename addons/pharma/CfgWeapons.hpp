class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class kat_PainkillerItem: ACE_ItemCore {
        scope = 2; //This item is not actually used and it is replaced by ace_common_fnc_registerItemReplacement 
        author = "Katalam";
        displayName = CSTRING(Painkillers_Box_Display);
        picture = QPATHTOF(ui\icon_painkillers.paa);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class kat_CarbonateItem: ACE_ItemCore {
        scope = 2; //This item is not actually used and it is replaced by ace_common_fnc_registerItemReplacement 
        author = "Mazinski.H";
        displayName = CSTRING(Carbonate_Box_Display);
        picture = QPATHTOF(ui\icon_Carbonate.paa);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class kat_PervitinItem: ACE_ItemCore {
        scope = 2; //This item is not actually used and it is replaced by ace_common_fnc_registerItemReplacement 
        author = "Miss Heda";
        displayName = CSTRING(Pervitin_Capsule_Display);
        picture = QPATHTOF(ui\icon_Pervitin.paa);
        descriptionShort = CSTRING(Pervitin_Capsule_DescShort);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        }; 
    };
    class kat_CaffeineItem: ACE_ItemCore {
        scope = 2; //This item is not actually used and it is replaced by ace_common_fnc_registerItemReplacement 
        author = "Miss Heda";
        displayName = CSTRING(Caffeine_Bottle_Display);
        picture = QPATHTOF(ui\icon_Caffeine.paa);
        descriptionShort = CSTRING(Caffeine_Bottle_DescShort);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        }; 
    };
    class kat_PenthroxItem: ACE_ItemCore {
        scope = 2; //This item is not actually used and it is replaced by ace_common_fnc_registerItemReplacement 
        author = "Blue";
        displayName = CSTRING(Penthrox_Display);
        picture = QPATHTOF(ui\icon_penthrox.paa);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class kat_IV_16: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(IV_16_Display);
        picture = QPATHTOF(ui\icon_IV_16.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = CSTRING(IV_DescShort);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_IO_FAST: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(IO_45_Display);
        picture = QPATHTOF(ui\icon_fast_io.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = CSTRING(IO_DescShort);
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_naloxone: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(Naloxone_Box_Display);
        picture = QPATHTOF(ui\icon_Naloxone.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
        descriptionShort = CSTRING(Naloxone_DescShort);
        ACE_isMedicalItem = 1;
        
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_EACA: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(EACA_Display);
        picture = QPATHTOF(ui\icon_TXA.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(EACA_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			//"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.2;
        };
    };
    class kat_TXA: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(TXA_Box_Display);
        picture = QPATHTOF(ui\icon_TXA.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(TXA_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine"
			//"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_norepinephrine: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Norep_Box_Display);
        picture = QPATHTOF(ui\norep.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Norep_DescShort);
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			//"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_phenylephrine: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Phenyl_Box_Display);
        picture = QPATHTOF(ui\phen.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Phenyl_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			//"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_nitroglycerin: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Nitro_Box_Display);
        picture = QPATHTOF(ui\nitro.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Nitro_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			//"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_amiodarone: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Amiodarone_Box_Display);
        picture = QPATHTOF(ui\icon_Amiodarone.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Amiodarone_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            //"label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_lidocaine: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Lidocaine_Box_Display);
        picture = QPATHTOF(ui\icon_Lidocaine.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Lidocaine_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			//"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_atropine: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Atropine_Box_Display);
        picture = QPATHTOF(ui\icon_Atropine.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Atropine_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			//"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_ketamine: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Ketamine_Box_Display);
        picture = QPATHTOF(ui\icon_Ketamine.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Ketamine_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			//"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_fentanyl: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Fentanyl_Box_Display);
        picture = QPATHTOF(ui\icon_Fentanyl.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Fentanyl_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			//"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
    class kat_nalbuphine: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Nalbuphine_Box_Display);
        picture = QPATHTOF(ui\icon_Nalbuphine.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Nalbuphine_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			//"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        }; 
    };
        class kat_lorazepam: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Lorazepam_displayName);
        picture = QPATHTOF(ui\icon_lorazepam.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Lorazepam_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			//"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.2;
        }; 
    };
    class kat_flumazenil: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Flumazenil_displayName);
        picture = QPATHTOF(ui\icon_flumazenil.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Flumazenil_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			"label_etomidate",
			"label_fentanyl",
			//"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.2;
        }; 
    };
    class kat_etomidate: ACE_ItemCore {
        scope = 2;
        author = "fijik,Archer,J3FF";
        displayName = CSTRING(Etomidate_displayName);
        picture = QPATHTOF(ui\icon_etomidate.paa);
        model = QPATHTOF(models\vial\vial_01.p3d);
        descriptionShort = CSTRING(Etomidate_DescShort);
        ACE_isMedicalItem = 1;
        hiddenSelections[]=
        {
            "camo1",
            "camo2",
            "label_amiodarone",
			"label_atropine",
			"label_EACA",
			//"label_etomidate",
			"label_fentanyl",
			"label_flumazenil",
			"label_ketamine",
			"label_lidocaine",
			"label_lorazepam",
			"label_nalbuphine",
			"label_nitroglycerin",
			"label_Norepinephrine",
			"label_phenylephrine",
			"label_TXA"
        };

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.2;
        }; 
    };
};
