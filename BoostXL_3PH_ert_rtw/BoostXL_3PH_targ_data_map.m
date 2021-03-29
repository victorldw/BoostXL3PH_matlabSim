  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (BoostXL_3PH_P)
    ;%
      section.nData     = 45;
      section.data(45)  = dumData; %prealloc
      
	  ;% BoostXL_3PH_P.Vdc_Amplitude
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BoostXL_3PH_P.SwitchCurrents_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BoostXL_3PH_P.StateSpace_AS_param
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 13;
	
	  ;% BoostXL_3PH_P.StateSpace_BS_param
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 22;
	
	  ;% BoostXL_3PH_P.StateSpace_CS_param
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 61;
	
	  ;% BoostXL_3PH_P.StateSpace_DS_param
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 115;
	
	  ;% BoostXL_3PH_P.StateSpace_X0_param
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 349;
	
	  ;% BoostXL_3PH_P.donotdeletethisgain_Gain
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 352;
	
	  ;% BoostXL_3PH_P.donotdeletethisgain_Gain_d
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 353;
	
	  ;% BoostXL_3PH_P.donotdeletethisgain_Gain_c
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 354;
	
	  ;% BoostXL_3PH_P.Constant_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 355;
	
	  ;% BoostXL_3PH_P.donotdeletethisgain_Gain_a
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 356;
	
	  ;% BoostXL_3PH_P.donotdeletethisgain_Gain_h
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 357;
	
	  ;% BoostXL_3PH_P.donotdeletethisgain_Gain_df
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 358;
	
	  ;% BoostXL_3PH_P.Gain4_Gain
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 359;
	
	  ;% BoostXL_3PH_P.Gain6_Gain
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 360;
	
	  ;% BoostXL_3PH_P.Gain5_Gain
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 361;
	
	  ;% BoostXL_3PH_P.StateSpace_A
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 362;
	
	  ;% BoostXL_3PH_P.StateSpace_B
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 365;
	
	  ;% BoostXL_3PH_P.StateSpace_C
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 366;
	
	  ;% BoostXL_3PH_P.StateSpace_InitialCondition
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 367;
	
	  ;% BoostXL_3PH_P.Gain1_Gain
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 368;
	
	  ;% BoostXL_3PH_P.StateSpace_A_p
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 369;
	
	  ;% BoostXL_3PH_P.StateSpace_B_f
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 372;
	
	  ;% BoostXL_3PH_P.StateSpace_C_o
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 373;
	
	  ;% BoostXL_3PH_P.StateSpace_InitialCondition_i
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 374;
	
	  ;% BoostXL_3PH_P.Gain_Gain
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 375;
	
	  ;% BoostXL_3PH_P.StateSpace_A_j
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 376;
	
	  ;% BoostXL_3PH_P.StateSpace_B_m
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 379;
	
	  ;% BoostXL_3PH_P.StateSpace_C_b
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 380;
	
	  ;% BoostXL_3PH_P.StateSpace_InitialCondition_b
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 381;
	
	  ;% BoostXL_3PH_P.Gain2_Gain
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 382;
	
	  ;% BoostXL_3PH_P.K_Gain
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 383;
	
	  ;% BoostXL_3PH_P.StateSpace_A_jk
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 386;
	
	  ;% BoostXL_3PH_P.StateSpace_B_p
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 389;
	
	  ;% BoostXL_3PH_P.StateSpace_C_j
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 390;
	
	  ;% BoostXL_3PH_P.StateSpace_InitialCondition_f
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 391;
	
	  ;% BoostXL_3PH_P.StateSpace_A_b
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 392;
	
	  ;% BoostXL_3PH_P.StateSpace_B_a
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 395;
	
	  ;% BoostXL_3PH_P.StateSpace_C_p
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 396;
	
	  ;% BoostXL_3PH_P.StateSpace_InitialCondition_p
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 397;
	
	  ;% BoostXL_3PH_P.StateSpace_A_f
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 398;
	
	  ;% BoostXL_3PH_P.StateSpace_B_e
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 401;
	
	  ;% BoostXL_3PH_P.StateSpace_C_p1
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 402;
	
	  ;% BoostXL_3PH_P.StateSpace_InitialCondition_iv
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 403;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (BoostXL_3PH_B)
    ;%
      section.nData     = 23;
      section.data(23)  = dumData; %prealloc
      
	  ;% BoostXL_3PH_B.StateSpace_o1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BoostXL_3PH_B.StateSpace_o2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 18;
	
	  ;% BoostXL_3PH_B.donotdeletethisgain
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 30;
	
	  ;% BoostXL_3PH_B.donotdeletethisgain_n
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 31;
	
	  ;% BoostXL_3PH_B.donotdeletethisgain_d
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 32;
	
	  ;% BoostXL_3PH_B.DataTypeConversion
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 33;
	
	  ;% BoostXL_3PH_B.DataTypeConversion_p
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 34;
	
	  ;% BoostXL_3PH_B.DataTypeConversion_pp
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 35;
	
	  ;% BoostXL_3PH_B.DataTypeConversion_b
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 36;
	
	  ;% BoostXL_3PH_B.DataTypeConversion_i
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 37;
	
	  ;% BoostXL_3PH_B.DataTypeConversion_k
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 38;
	
	  ;% BoostXL_3PH_B.donotdeletethisgain_c
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 39;
	
	  ;% BoostXL_3PH_B.donotdeletethisgain_g
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 40;
	
	  ;% BoostXL_3PH_B.donotdeletethisgain_p
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 41;
	
	  ;% BoostXL_3PH_B.Gain4
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 42;
	
	  ;% BoostXL_3PH_B.Van
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 43;
	
	  ;% BoostXL_3PH_B.Vcn
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 44;
	
	  ;% BoostXL_3PH_B.Gain1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 45;
	
	  ;% BoostXL_3PH_B.Gain
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 46;
	
	  ;% BoostXL_3PH_B.Gain2
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 47;
	
	  ;% BoostXL_3PH_B.StateSpace
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 48;
	
	  ;% BoostXL_3PH_B.StateSpace_i
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 49;
	
	  ;% BoostXL_3PH_B.StateSpace_o
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 50;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% BoostXL_3PH_B.GPIO12217
	  section.data(1).logicalSrcIdx = 23;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BoostXL_3PH_B.GPIO12318
	  section.data(2).logicalSrcIdx = 24;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BoostXL_3PH_B.GPIO12413
	  section.data(3).logicalSrcIdx = 25;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BoostXL_3PH_B.GPIO5815
	  section.data(4).logicalSrcIdx = 26;
	  section.data(4).dtTransOffset = 3;
	
	  ;% BoostXL_3PH_B.GPIO5914
	  section.data(5).logicalSrcIdx = 27;
	  section.data(5).dtTransOffset = 4;
	
	  ;% BoostXL_3PH_B.GPIO6119
	  section.data(6).logicalSrcIdx = 28;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (BoostXL_3PH_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% BoostXL_3PH_DW.StateSpace_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% BoostXL_3PH_DW.StateSpace_PWORK.AS
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% BoostXL_3PH_DW.Scope4_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% BoostXL_3PH_DW.Scope8_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% BoostXL_3PH_DW.Scope1_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
	  ;% BoostXL_3PH_DW.Scope10_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% BoostXL_3PH_DW.StateSpace_IWORK
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 3075925041;
  targMap.checksum1 = 121593010;
  targMap.checksum2 = 3637391159;
  targMap.checksum3 = 3861704222;

