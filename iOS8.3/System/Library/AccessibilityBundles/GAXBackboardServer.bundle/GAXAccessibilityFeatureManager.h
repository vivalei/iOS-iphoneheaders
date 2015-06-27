/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:35:52 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableArray, AXTimer;

@interface GAXAccessibilityFeatureManager : NSObject {

	char _restoring;
	SCD_Struct_GA0 _overrideAXFeatureSet;
	NSMutableArray* _updateQueue;
	AXTimer* _updateTimer;

}

@property (nonatomic,readonly) char hasAccessibilityTripleClickOptions; 
@property (assign,getter=isRestoring,nonatomic) char restoring;                      //@synthesize restoring=_restoring - In the implementation block
@property (assign,nonatomic) SCD_Struct_GA0 overrideAXFeatureSet;                    //@synthesize overrideAXFeatureSet=_overrideAXFeatureSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;                           //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) AXTimer * updateTimer;                                  //@synthesize updateTimer=_updateTimer - In the implementation block
-(id)_accessibilityTripleClickOptions;
-(char)_hasSavedUserPreferredFeatures;
-(void)_saveCurrentFeatureSetAsUserPreferredSet;
-(id)_updateBlocksForFeatureSet:(SCD_Struct_GA0)arg1 ;
-(void)_processNextUpdateBlockInQueue;
-(SCD_Struct_GA0)_loadUserPreferredSet;
-(SCD_Struct_GA0)_currentFeatureSet;
-(char)hasAccessibilityTripleClickOptions;
-(void)overrideAccessibiltyFeaturesWithFeatureSet:(SCD_Struct_GA0)arg1 ;
-(void)restoreAccessibilityFeatures;
-(SCD_Struct_GA0)overrideAXFeatureSet;
-(void)setOverrideAXFeatureSet:(SCD_Struct_GA0)arg1 ;
-(void)dealloc;
-(id)init;
-(AXTimer *)updateTimer;
-(void)setUpdateTimer:(AXTimer *)arg1 ;
-(char)isRestoring;
-(void)setRestoring:(char)arg1 ;
-(NSMutableArray *)updateQueue;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
@end
