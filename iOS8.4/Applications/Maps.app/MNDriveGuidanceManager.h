/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNGuidanceManager.h>

@class NSMutableArray;

@interface MNDriveGuidanceManager : MNGuidanceManager {

	NSMutableArray* _substeps;
	int _currentContinuePhase;

}
-(void)_resetStepState;
-(id)_nameInfoForContinueSign;
-(void)_updatePrepareForNextStep;
-(char)_updateConsiderSubstepAnnouncement:(id)arg1 location:(id)arg2 ;
-(char)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2 ;
-(char)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2 ;
-(char)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2 ;
-(double)_distanceForSign;
-(char)_hasSubsteps;
-(id)_nextSubstep;
-(const SCD_Struct_Ma32*)_announceSettings;
-(int)_continuePhase;
-(int)transportType;
@end

