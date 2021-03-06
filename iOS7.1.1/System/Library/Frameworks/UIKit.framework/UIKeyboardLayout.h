/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITextInputTraits, UIKBScreenTraits, NSMutableArray, UITouch, UIKeyboardTaskQueue;

@interface UIKeyboardLayout : UIView {

	UITextInputTraits* _inputTraits;
	UIKBScreenTraits* _screenTraits;
	NSMutableArray* _uncommittedTouches;
	UITouch* _activeTouch;
	UITouch* _shiftKeyTouch;
	long long _cursorLocation;
	bool _disableInteraction;
	UIKeyboardTaskQueue* _taskQueue;
	bool hideKeysUnderIndicator;

}

@property (nonatomic,retain) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,retain) UITouch * activeTouch;                        //@synthesize activeTouch=_activeTouch - In the implementation block
@property (nonatomic,retain) UITouch * shiftKeyTouch;                      //@synthesize shiftKeyTouch=_shiftKeyTouch - In the implementation block
@property (nonatomic,readonly) long long orientation; 
@property (assign,nonatomic) bool hideKeysUnderIndicator; 
@property (assign,nonatomic) long long cursorLocation;                     //@synthesize cursorLocation=_cursorLocation - In the implementation block
@property (assign,nonatomic) bool disableInteraction;                      //@synthesize disableInteraction=_disableInteraction - In the implementation block
+(Class)_subclassForScreenTraits:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setShift:(bool)arg1 ;
-(long long)orientation;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(bool)canHandleEvent:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)candidateList;
-(void)clearUnusedObjects:(bool)arg1 ;
-(bool)hasCandidateKeys;
-(bool)hasAccentKey;
-(bool)canMultitap;
-(bool)isAlphabeticPlane;
-(void)deactivateActiveKeys;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(CGSize)dragGestureSize;
-(id)taskQueue;
-(bool)shouldShowIndicator;
-(id)activationIndicatorView;
-(void)setHideKeysUnderIndicator:(bool)arg1 ;
-(bool)performReturnAction;
-(id)currentKeyplane;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)setAutoshift:(bool)arg1 ;
-(void)setTaskQueue:(id)arg1 ;
-(bool)shouldFadeFromLayout;
-(bool)shouldFadeToLayout;
-(void)fadeWithInvocation:(id)arg1 ;
-(bool)usesAutoShift;
-(void)didClearInput;
-(void)restoreDefaultsForAllKeys;
-(void)updateBackgroundCorners;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)longPressAction;
-(bool)canProduceString:(id)arg1 ;
-(double)hitBuffer;
-(void)setReturnKeyEnabled:(bool)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(bool)ignoresShiftState;
-(bool)isShiftKeyPlaneChooser;
-(bool)isShiftKeyBeingHeld;
-(void)updateLocalizedKeys:(bool)arg1 ;
-(void)setLayoutTag:(id)arg1 ;
-(long long)cursorLocation;
-(void)setCursorLocation:(long long)arg1 ;
-(bool)disableInteraction;
-(void)setDisableInteraction:(bool)arg1 ;
-(void)setPasscodeOutlineAlpha:(double)arg1 ;
-(id)baseKeyForString:(id)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(bool)arg3 baseKeyForVariants:(bool)arg4 ;
-(void)wipeGestureRecognized:(id)arg1 ;
-(void)addWipeRecognizer;
-(SEL)handlerForNotification:(id)arg1 ;
-(void)setActiveTouch:(id)arg1 ;
-(void)setShiftKeyTouch:(id)arg1 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(void)clearShiftIfNecessaryForEndedTouch:(id)arg1 ;
-(void)didCommitTouch:(id)arg1 ;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(id)activeTouch;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(id)touchesToCommitBeforeTouch:(id)arg1 ;
-(void)commitTouches:(id)arg1 ;
-(void)touchDown:(id)arg1 ;
-(void)touchDragged:(id)arg1 ;
-(bool)canForceTouchCommit:(id)arg1 ;
-(void)touchUp:(id)arg1 ;
-(void)touchCancelled:(id)arg1 ;
-(void)forceUpdatesForCommittedTouch;
-(void)commitTouches:(id)arg1 executionContext:(id)arg2 ;
-(bool)performSpaceAction;
-(void)deactivateActiveKeysClearingTouchInfo:(bool)arg1 clearingDimming:(bool)arg2 ;
-(void)physicalKeyDownWithEvent:(id)arg1 ;
-(void)physicalKeyUpWithEvent:(id)arg1 ;
-(double)flickDistance;
-(id)shiftKeyTouch;
-(bool)hideKeysUnderIndicator;
@end

