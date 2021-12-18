class CfgPatches
{
	class FalconTweaks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data", "JM_CF_Scripts"};
	};
};

class CfgMods
{
	class FalconTweaks
	{
	    dir = FalconTweaks
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = FalconTweaks
	    credits = "";
	    author = "";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = { "Mission" };

		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"FalconTweaks/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"FalconTweaks/5_Mission"};
			};
		};
	};
};

class CfgVehicleSurfaces
{
	class Asphalt
	{
		frictionOffroad = 0.9;
		frictionSlick = 1;
		rollResistance = 1;
		rollDrag = 0.1;
	};
	class Dirt
	{
		noiseSteer = 0.009;
		noiseFrequency = 0.31;
		roughness = 0.02;
		frictionOffroad = 0.87;
		frictionSlick = 0.7;
		rollResistance = 6;
		rollDrag = 10;
	};
	class Grass
	{
		noiseSteer = 0.02;
		noiseFrequency = 0.65;
		roughness = 0.03;
		frictionOffroad = 0.7;
		frictionSlick = 0.4;
		rollResistance = 20;
		rollDrag = 10;
	};
	class Forest
	{
		noiseSteer = 0.04;
		noiseFrequency = 1.65;
		roughness = 0.09;
		frictionOffroad = 0.75;
		frictionSlick = 0.3;
		rollResistance = 30;
		rollDrag = 10;
	};
	class Gravel
	{
		noiseSteer = 0.07;
		noiseFrequency = 2;
		roughness = 0.04;
		frictionOffroad = 0.7;
		frictionSlick = 0.4;
		rollResistance = 25;
		rollDrag = 10;
	};
};

class CfgVehicles
{
	class BaseBuildingBase;
	class Fence: BaseBuildingBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Fence0";
		descriptionShort = "$STR_CfgVehicles_Fence1";
		model = "\DZ\gear\camping\fence.p3d";
		bounding = "BSphere";
		overrideDrawArea = "3.0";
		forceFarBubble = "true";
		handheld = "false";
		lootCategory = "Crafted";
		carveNavmesh = 1;
		weight = 10000;
		itemSize[] = {2,3};
		physLayer = "item_large";
		createProxyPhysicsOnInit = "false";
		createdProxiesOnInit[] = {"Deployed"};
		hybridAttachments[] = {"Material_WoodenLogs","Material_MetalWire","Wall_Barbedwire_1","Wall_Barbedwire_2"};
		mountables[] = {"Wall_Barbedwire_1","Wall_Barbedwire_2"};
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
			class GlobalArmor
			{
				class FragGrenade
				{
					class Health
					{
						damage = 0;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
			class DamageZones
			{
				class Body
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.7,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\fence_pile_of_planks_destruct.rvmat"}}};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"body"};
					fatalInjuryCoef = -1;
				};
				class Wall_Base_Down
				{
					class Health
					{
						hitpoints = 12000;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.7,{"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}},{0.0,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}}};
					};
					displayName = "$STR_CfgVehicles_Construction_Part_Base_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.65;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 25;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"wall_base_down"};
					fatalInjuryCoef = -1;
				};
				class Wall_Base_Up: Wall_Base_Down
				{
					displayName = "$STR_CfgVehicles_Construction_Part_Base_Up";
					componentNames[] = {"wall_base_up"};
				};
				class Wall_Wood_Down
				{
					class Health
					{
						hitpoints = 16000;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.7,{"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}},{0.0,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}}};
					};
					displayName = "$STR_CfgVehicles_Construction_Part_Wood_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.65;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 25;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"wall_wood_down"};
					fatalInjuryCoef = -1;
				};
				class Wall_Wood_Up: Wall_Wood_Down
				{
					displayName = "$STR_CfgVehicles_Construction_Part_Wood_Up";
					componentNames[] = {"wall_wood_up"};
				};
				class Wall_Metal_Down
				{
					class Health
					{
						hitpoints = 41000;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence_metalsheets.rvmat"}},{0.7,{"DZ\gear\camping\data\fence_metalsheets_worn.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_metalsheets_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"}},{0.0,{"DZ\gear\camping\data\fence_metalsheets_bdamage.rvmat"}}};
					};
					displayName = "$STR_CfgVehicles_Construction_Part_Metal_Down";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.65;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 20;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"wall_metal_down"};
					fatalInjuryCoef = -1;
				};
				class Wall_Metal_Up: Wall_Metal_Down
				{
					displayName = "$STR_CfgVehicles_Construction_Part_Metal_Up";
					componentNames[] = {"wall_metal_up"};
				};
				class Wall_Platform
				{
					class Health
					{
						hitpoints = 18000;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.7,{"DZ\gear\camping\data\fence_pile_of_planks_worn.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_pile_of_planks_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}},{0.0,{"DZ\gear\camping\data\fence_pile_of_planks_bdamage.rvmat"}}};
					};
					displayName = "$STR_CfgVehicles_Construction_Part_Platform";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.65;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 20;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"wall_platform"};
					fatalInjuryCoef = -1;
				};
				class Wall_Platform_Stairs_Left: Wall_Platform
				{
					displayName = "$STR_CfgVehicles_Construction_Part_Platform_Stairs_Right";
					componentNames[] = {"wall_platform_stairs_left"};
				};
				class Wall_Platform_Stairs_Right: Wall_Platform
				{
					displayName = "$STR_CfgVehicles_Construction_Part_Platform_Stairs_Left";
					componentNames[] = {"wall_platform_stairs_right"};
				};
				class Wall_Barbedwire_1
				{
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\barbed_wire.rvmat"}},{0.7,{"DZ\gear\camping\data\barbed_wire.rvmat"}},{0.5,{"DZ\gear\camping\data\barbed_wire.rvmat"}},{0.3,{"DZ\gear\camping\data\barbed_wire.rvmat"}},{0.0,{"DZ\gear\camping\data\barbed_wire.rvmat"}}};
					};
					displayName = "$STR_cfgvehicles_barbedwire0";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.01;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 40;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"wall_barbedwire_1","wall_barbedwire_1_mounted"};
					inventorySlots[] = {"Wall_Barbedwire_1"};
					fatalInjuryCoef = -1;
				};
				class Wall_Barbedwire_2: Wall_Barbedwire_1
				{
					displayName = "$STR_cfgvehicles_barbedwire0";
					componentNames[] = {"wall_barbedwire_2","wall_barbedwire_2_mounted"};
					inventorySlots[] = {"Wall_Barbedwire_2"};
				};
				class Wall_Gate
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},{0.7,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},{0.3,{"DZ\gear\camping\data\fence_metalwire.rvmat"}},{0.0,"hidden"}};
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"wall_gate"};
					fatalInjuryCoef = -1;
				};
				class Material_WoodenLogs
				{
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.7,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.3,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}},{0.0,{"DZ\gear\camping\data\fence_pile_of_planks.rvmat"}}};
					};
					displayName = "$STR_CfgVehicles_Construction_Part_Base";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.65;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 50;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Material_WoodenLogs"};
					inventorySlots[] = {"Material_WoodenLogs"};
					fatalInjuryCoef = -1;
				};
				class Material_MetalWire
				{
					class Health
					{
						hitpoints = 200;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1.0,{"DZ\gear\crafting\data\string_metalwire.rvmat"}},{0.7,{"DZ\gear\crafting\data\string_metalwire.rvmat"}},{0.5,{"DZ\gear\crafting\data\string_metalwire_damage.rvmat"}},{0.3,{"DZ\gear\crafting\data\string_metalwire_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\string_metalwire_destruct.rvmat"}}};
					};
					displayName = "$STR_CfgVehicles_MetalWire0";
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Melee
						{
							class Health
							{
								damage = 0.65;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 40;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Material_MetalWire"};
					inventorySlots[] = {"Material_MetalWire"};
					fatalInjuryCoef = -1;
				};
			};
		};
		attachments[] = {"Wall_Barbedwire_1","Wall_Barbedwire_2","Wall_Camonet","Att_CombinationLock","Material_Nails","Material_WoodenPlanks","Material_MetalSheets","Material_WoodenLogs","Material_MetalWire"};
		class GUIInventoryAttachmentsProps
		{
			class Base
			{
				name = "$STR_CfgVehicles_Fence_Att_Category_Base";
				description = "";
				attachmentSlots[] = {"Material_WoodenLogs"};
				icon = "set:dayz_inventory image:cat_bb_base";
				selection = "wall";
			};
			class Attachments
			{
				name = "$STR_CfgVehicles_Fence_Att_Category_Attachments";
				description = "";
				attachmentSlots[] = {"Wall_Camonet","Wall_Barbedwire_1","Wall_Barbedwire_2","Att_CombinationLock"};
				icon = "set:dayz_inventory image:cat_bb_attachments";
				selection = "wall";
			};
			class Material
			{
				name = "$STR_CfgVehicles_Fence_Att_Category_Materials";
				description = "";
				attachmentSlots[] = {"Material_Nails","Material_WoodenPlanks","Material_MetalSheets","Material_MetalWire"};
				icon = "set:dayz_inventory image:cat_bb_material";
				selection = "wall";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class AnimSourceHidden
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class AnimRotate
			{
				source = "user";
				animPeriod = 0.018;
				initPhase = 0;
			};
			class Wall_Interact_Rotate: AnimRotate{};
			class Wall_Barbedwire_1_Mounted_Rotate: AnimRotate{};
			class Wall_Barbedwire_2_Mounted_Rotate: AnimRotate{};
			class Wall_Camonet_Rotate: AnimRotate{};
			class Wall_Gate_Rotate: AnimRotate{};
			class Wall_Base_Down_Rotate: AnimRotate{};
			class Wall_Base_Up_Rotate: AnimRotate{};
			class Wall_Wood_Down_Rotate: AnimRotate{};
			class Wall_Wood_Up_Rotate: AnimRotate{};
			class Wall_Metal_Down_Rotate: AnimRotate{};
			class Wall_Metal_Up_Rotate: AnimRotate{};
			class Material_WoodenLogs: AnimSourceHidden{};
			class Material_MetalWire: AnimSourceHidden{};
			class Wall_Barbedwire_1: AnimSourceHidden{};
			class Wall_Barbedwire_1_Mounted: AnimSourceHidden{};
			class Wall_Barbedwire_2: AnimSourceHidden{};
			class Wall_Barbedwire_2_Mounted: AnimSourceHidden{};
			class Wall_Camonet: AnimSourceHidden{};
			class Deployed: AnimSourceHidden{};
			class Base: AnimSourceHidden{};
			class Wall_Platform: AnimSourceHidden{};
			class Wall_Platform_Stairs_Left: AnimSourceHidden{};
			class Wall_Platform_Stairs_Right: AnimSourceHidden{};
			class Wall_Gate: AnimSourceHidden{};
			class Wall_Base_Down: AnimSourceHidden{};
			class Wall_Base_Up: AnimSourceHidden{};
			class Wall_Metal_Down: AnimSourceHidden{};
			class Wall_Metal_Up: AnimSourceHidden{};
			class Wall_Wood_Down: AnimSourceHidden{};
			class Wall_Wood_Up: AnimSourceHidden{};
		};
		class Construction
		{
			class wall
			{
				class base
				{
					name = "$STR_CfgVehicles_Construction_Part_Base";
					is_base = 1;
					id = 1;
					required_parts[] = {};
					conflicted_parts[] = {};
					collision_data[] = {};
					build_action_type = 4;
					dismantle_action_type = 4;
					material_type = 1;
					class Materials
					{
						class Material1
						{
							type = "WoodenLog";
							slot_name = "Material_WoodenLogs";
							quantity = 2;
							lockable = 1;
						};
					};
				};
				class wall_base_down
				{
					name = "$STR_CfgVehicles_Construction_Part_Base_Down";
					id = 6;
					required_parts[] = {"base"};
					conflicted_parts[] = {};
					collision_data[] = {"wall_down_min","wall_down_max"};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 2;
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							slot_name = "Material_WoodenPlanks";
							quantity = 4;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 8;
						};
					};
				};
				class wall_wood_down
				{
					name = "$STR_CfgVehicles_Construction_Part_Wood_Down";
					id = 7;
					required_parts[] = {"wall_base_down"};
					conflicted_parts[] = {"wall_metal_down"};
					collision_data[] = {"wall_down_min","wall_down_max"};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 2;
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							slot_name = "Material_WoodenPlanks";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 10;
						};
					};
				};
				class wall_metal_down
				{
					name = "$STR_CfgVehicles_Construction_Part_Metal_Down";
					id = 8;
					required_parts[] = {"wall_base_down"};
					conflicted_parts[] = {"wall_wood_down"};
					collision_data[] = {"wall_down_min","wall_down_max"};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 4;
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							slot_name = "Material_MetalSheets";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 12;
						};
					};
				};
				class wall_base_up
				{
					name = "$STR_CfgVehicles_Construction_Part_Base_Up";
					id = 9;
					required_parts[] = {"base"};
					conflicted_parts[] = {};
					collision_data[] = {"wall_up_min","wall_up_max"};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 2;
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							slot_name = "Material_WoodenPlanks";
							quantity = 4;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 8;
						};
					};
				};
				class wall_wood_up
				{
					name = "$STR_CfgVehicles_Construction_Part_Wood_Up";
					id = 10;
					required_parts[] = {"wall_base_up"};
					conflicted_parts[] = {"wall_metal_up"};
					collision_data[] = {"wall_up_min","wall_up_max"};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 2;
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							slot_name = "Material_WoodenPlanks";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 10;
						};
					};
				};
				class wall_metal_up
				{
					name = "$STR_CfgVehicles_Construction_Part_Metal_Up";
					id = 11;
					required_parts[] = {"wall_base_up"};
					conflicted_parts[] = {"wall_wood_up"};
					collision_data[] = {"wall_up_min","wall_up_max"};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 4;
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							slot_name = "Material_MetalSheets";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 12;
						};
					};
				};
				class wall_platform
				{
					name = "$STR_CfgVehicles_Construction_Part_Platform";
					id = 2;
					required_parts[] = {"base"};
					conflicted_parts[] = {"wall_gate"};
					collision_data[] = {"wall_platform_min","wall_platform_max"};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 3;
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							slot_name = "Material_WoodenPlanks";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 15;
						};
					};
				};
				class wall_platform_stairs_left
				{
					name = "$STR_CfgVehicles_Construction_Part_Platform_Stairs_Right";
					id = 3;
					required_parts[] = {"wall_platform"};
					conflicted_parts[] = {};
					collision_data[] = {};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 3;
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							slot_name = "Material_WoodenPlanks";
							quantity = 4;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 8;
						};
					};
				};
				class wall_platform_stairs_right
				{
					name = "$STR_CfgVehicles_Construction_Part_Platform_Stairs_Left";
					id = 4;
					required_parts[] = {"wall_platform"};
					conflicted_parts[] = {};
					collision_data[] = {};
					build_action_type = 2;
					dismantle_action_type = 2;
					material_type = 3;
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							slot_name = "Material_WoodenPlanks";
							quantity = 4;
						};
						class Material2
						{
							type = "Nail";
							slot_name = "Material_Nails";
							quantity = 8;
						};
					};
				};
				class wall_gate
				{
					name = "$STR_CfgVehicles_Construction_Part_Gate";
					is_gate = 1;
					id = 5;
					required_parts[] = {"base","wall_base_down","wall_base_up"};
					conflicted_parts[] = {"wall_platform"};
					collision_data[] = {};
					build_action_type = 1;
					dismantle_action_type = 1;
					material_type = 5;
					class Materials
					{
						class Material1
						{
							type = "MetalWire";
							slot_name = "Material_MetalWire";
							quantity = -1;
							lockable = 1;
						};
					};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,1.0,0.05};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
	};
};
