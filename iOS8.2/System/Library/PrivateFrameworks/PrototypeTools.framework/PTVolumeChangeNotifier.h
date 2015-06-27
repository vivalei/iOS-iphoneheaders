/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PTVolumeChangeNotifier : NSObject {

	NSMutableSet* ringerVolumeChangedHandlers;
	NSMutableSet* ringerSilentChangedHandlers;

}
+(id)sharedInstance;
-(id)init;
-(void)ringerVolumeChanged:(id)arg1 ;
-(void)addRingerSwitchChangedHandler:(/*^block*/id)arg1 ;
-(void)addVolumeChangedHandler:(/*^block*/id)arg1 ;
-(void)ringerSilentChanged;
@end
