/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>
#import <SpringBoard/_UIActionSliderDelegate.h>
#import <SpringBoard/SBPowerDownViewInterface.h>

@protocol SBPowerDownViewDelegate;
@class NSTimer, UIView, SBShapeView, _UIActionSlider, UIButton, UILabel, NSString;

@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface> {

	NSTimer* _autoDismissTimer;
	id<SBPowerDownViewDelegate> _delegate;
	UIView* _backdropView;
	SBShapeView* _darkeningUnderlayView;
	UIView* _darkeningOverlayView;
	_UIActionSlider* _actionSlider;
	UIButton* _cancelButton;
	UILabel* _cancelLabel;
	char _hiddenLockScreenForeground;
	char _canAlterScreenBrightness;

}

@property (assign,nonatomic) char canAlterScreenBrightness;                     //@synthesize canAlterScreenBrightness=_canAlterScreenBrightness - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBPowerDownViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)layoutForInterfaceOrientation:(int)arg1 ;
-(id)_lockScreenView;
-(void)_notifyDelegateCancelled;
-(void)_cancelAutoDismissTimer;
-(void)_updateSliderExclusionPath;
-(void)_resetAutoDismissTimer;
-(void)_resetScreenBrightness;
-(void)_saveScreenBrightnessInformation;
-(char)canAlterScreenBrightness;
-(void)_animatePowerDown;
-(void)setCanAlterScreenBrightness:(char)arg1 ;
-(void)_notifyDelegatePowerDown;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBPowerDownViewDelegate>)arg1 ;
-(id<SBPowerDownViewDelegate>)delegate;
-(void)dismiss;
-(void)animateOut;
-(void)actionSlider:(id)arg1 didUpdateSlideWithValue:(float)arg2 ;
-(void)actionSliderDidCompleteSlide:(id)arg1 ;
-(void)actionSliderDidCancelSlide:(id)arg1 ;
-(void)actionSliderDidBeginSlide:(id)arg1 ;
-(void)animateIn;
@end
