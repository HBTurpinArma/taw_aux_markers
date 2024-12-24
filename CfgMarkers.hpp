
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
	class TAW_AUX_MARKER_POI: TAW_AUX_MARKER_BASE
	{
		name="Point of Intrest";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_POI.paa";
		scope=2;
	};
	class TAW_AUX_MARKER_CCP: TAW_AUX_MARKER_BASE
	{
		name="Casualty Collection Point";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_CCP.paa";
		scope=2;
	};	
	class TAW_AUX_MARKER_FM: TAW_AUX_MARKER_BASE
	{
		name="Fire Mission";
		icon="\TAW_AUX_MARKERS\Data\UI\marker_FM.paa";
		scope=2;
	};
	// class TAW_AUX_MARKER_FAC: TAW_AUX_MARKER_BASE
	// {
	// 	name="Forward Air Controller";
	// 	icon="\TAW_AUX_MARKERS\Data\UI\marker_FAC.paa";
	// 	scope=2;
	// };

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