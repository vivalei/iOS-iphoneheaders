/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIDictationLandingViewSettings : NSObject {

	char _useBlackWave;
	float _fadeInDuration;
	float _fadeOutDuration;
	float _shrinkDuration;
	float _colorTransitionInDuration;
	float _colorTransitionOutDuration;
	float _circleRPM;

}

@property (assign,nonatomic) float fadeInDuration;                          //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) float fadeOutDuration;                         //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) float shrinkDuration;                          //@synthesize shrinkDuration=_shrinkDuration - In the implementation block
@property (assign,nonatomic) float colorTransitionInDuration;               //@synthesize colorTransitionInDuration=_colorTransitionInDuration - In the implementation block
@property (assign,nonatomic) float colorTransitionOutDuration;              //@synthesize colorTransitionOutDuration=_colorTransitionOutDuration - In the implementation block
@property (assign,nonatomic) float circleRPM;                               //@synthesize circleRPM=_circleRPM - In the implementation block
@property (assign,nonatomic) char useBlackWave;                             //@synthesize useBlackWave=_useBlackWave - In the implementation block
+(id)sharedInstance;
-(id)init;
-(float)fadeOutDuration;
-(float)colorTransitionInDuration;
-(float)colorTransitionOutDuration;
-(char)useBlackWave;
-(void)setUseBlackWave:(char)arg1 ;
-(void)setFadeInDuration:(float)arg1 ;
-(void)setFadeOutDuration:(float)arg1 ;
-(void)setShrinkDuration:(float)arg1 ;
-(void)setColorTransitionInDuration:(float)arg1 ;
-(void)setColorTransitionOutDuration:(float)arg1 ;
-(void)setCircleRPM:(float)arg1 ;
-(float)fadeInDuration;
-(float)shrinkDuration;
-(float)circleRPM;
@end

