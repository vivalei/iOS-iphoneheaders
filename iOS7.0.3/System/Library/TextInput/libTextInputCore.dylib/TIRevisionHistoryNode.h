/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TIRevisionHistoryNode : NSObject {

	NSString* _lastAcceptedWord;
	NSString* _shadowInput;
	unsigned _usageLearningMask;
	unsigned _usageTrackingMask;
	TIRevisionHistoryNode* _previousHistory;

}

@property (nonatomic,copy) NSString * lastAcceptedWord;                            //@synthesize lastAcceptedWord=_lastAcceptedWord - In the implementation block
@property (nonatomic,copy) NSString * shadowInput;                                 //@synthesize shadowInput=_shadowInput - In the implementation block
@property (assign,nonatomic) unsigned usageLearningMask;                           //@synthesize usageLearningMask=_usageLearningMask - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask;                           //@synthesize usageTrackingMask=_usageTrackingMask - In the implementation block
@property (nonatomic,retain) TIRevisionHistoryNode * previousHistory;              //@synthesize previousHistory=_previousHistory - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned)usageTrackingMask;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(id)lastAcceptedWord;
-(id)shadowInput;
-(unsigned)usageLearningMask;
-(void)didAcceptWithDelegate:(id)arg1 ;
-(void)didRejectWithDelegate:(id)arg1 ;
-(void)setLastAcceptedWord:(id)arg1 ;
-(void)setShadowInput:(id)arg1 ;
-(void)setUsageLearningMask:(unsigned)arg1 ;
-(id)previousHistory;
-(void)setPreviousHistory:(id)arg1 ;
@end
