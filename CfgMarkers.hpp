
class CfgMarkerClasses
{
	class TAW_AUX_MARKERS
	{
		displayName="TAW";
	};
};

class CfgMarkers
{
	class Flag;
	//Hide all unit/faction based markers from the list...
	class b_unknown: Flag
	{
		scope=2;
	};
	class o_unknown: b_unknown
	{
		scope=1;
	};
	class n_unknown: b_unknown
	{
		scope=1;
	};
	class c_unknown: b_unknown
	{
		scope=1;
	};
	class RedCrystal: Flag
	{
		scope=1;
	};
	class White: Flag
	{
		scope=1;
	};
	
	//Add TAW specific markers
	class TAW_AUX_MARKER_BASE
	{
		name="";
		icon="";
		color[]={0,0,0,1};
		size=24;
		scope=0;
		scopeCurator=0;
		shadow=0;
		markerClass="TAW_AUX_MARKERS";
	};
	//Point markers
	class TAW_AUX_MARKER_POINT_AMMO: TAW_AUX_MARKER_BASE
	{
		name="Ammunition Supply Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_ammo.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_POINT_R3P: TAW_AUX_MARKER_BASE
	{
		name="Rearm, Refuel, and Resupply Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_r3p.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_POINT_MEDEVAV: TAW_AUX_MARKER_BASE
	{
		name="Medical Evacuation Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_medevac.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_POINT_CCP: TAW_AUX_MARKER_BASE
	{
		name="Casualty Collection Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_ccp.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_POINT_CIV: TAW_AUX_MARKER_BASE
	{
		name="Civilian Collection Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_civ.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_POINT_DETAINEE: TAW_AUX_MARKER_BASE
	{
		name="Detainee Collection Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_detainee.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_POINT_IPRP: TAW_AUX_MARKER_BASE
	{
		name="Isolated Personnel Recovery Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_iprp.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_POINT_RALLY: TAW_AUX_MARKER_BASE
	{
		name="Rally Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_point_rally.paa";
		scope=2;
	};


	//Support markers
	class TAW_AUX_MARKER_DZ: TAW_AUX_MARKER_BASE
	{
		name="Drop Zone";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_DZ.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_LZ: TAW_AUX_MARKER_BASE
	{
		name="Landing Zone";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_LZ.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_FM: TAW_AUX_MARKER_BASE
	{
		name="Fire Mission";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_FM.paa";
		scope=2;
	};

	//Add squad markers
	class TAW_AUX_MARKER_ALPHA: TAW_AUX_MARKER_BASE
	{
		name="Alpha";
		color[]={0.4,0,0.5,1};
		size=48;
		showEditorMarkerColor = 1;	
		icon="\TAW_AUX_MARKERS\Data\UI\marker_ALPHA.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_BRAVO: TAW_AUX_MARKER_BASE
	{
		name="Bravo";
		color[]={0,0.996,0.996,1};
		size=48;
		showEditorMarkerColor = 1;	
		icon="\TAW_AUX_MARKERS\Data\UI\marker_BRAVO.paa";
		scope=2;
	};	
	class TAW_AUX_MARKER_CHARLIE: TAW_AUX_MARKER_BASE
	{
		name="Charlie";
		color[]={0,0.8,0,1};
		size=48;
		showEditorMarkerColor = 1;	
		icon="\TAW_AUX_MARKERS\Data\UI\marker_CHARLIE.paa";
		scope=2;
	};	
	class TAW_AUX_MARKER_DELTA: TAW_AUX_MARKER_BASE
	{
		name="Delta";
		color[]={0,0,1,1};
		size=48;
		showEditorMarkerColor = 1;	
		icon="\TAW_AUX_MARKERS\Data\UI\marker_DELTA.paa";
		scope=2;
	};	
	class TAW_AUX_MARKER_RECON: TAW_AUX_MARKER_BASE
	{
		name="Recon";
		color[]={0.965,0.522,0.69,1};
		size=48;
		showEditorMarkerColor = 1;	
		icon="\TAW_AUX_MARKERS\Data\UI\marker_RECON.paa";
		scope=2;
	};
};