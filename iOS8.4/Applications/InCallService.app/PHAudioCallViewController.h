/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <InCallService/PHCallViewController.h>
#import <InCallService/MFMessageComposeViewControllerDelegate.h>
#import <InCallService/PHAudioRoutingAlertDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <InCallService/TPSuperBottomBarDelegateProtocol.h>
#import <InCallService/PHAudioCallControlsViewControllerDelegate.h>

@class TUCall, TPSuperBottomBar, UIView, PHCallParticipantsViewController, NSLayoutConstraint, PHAudioCallControlsViewController, PHInCallKeypadViewController, UIImageView, UIVisualEffectView, CALayer, NSString;

@interface PHAudioCallViewController : PHCallViewController <MFMessageComposeViewControllerDelegate, PHAudioRoutingAlertDelegate, UIPopoverPresentationControllerDelegate, TPSuperBottomBarDelegateProtocol, PHAudioCallControlsViewControllerDelegate> {

	unsigned short _currentState;
	unsigned short _middleViewState;
	TUCall* _disconnectedCallToMessage;
	TPSuperBottomBar* _bottomBar;
	UIView* _currentMiddleView;
	PHCallParticipantsViewController* _callParticipantsViewController;
	PHCallParticipantsViewController* _callWaitingParticipantsViewController;
	NSLayoutConstraint* _participantsViewYAdjustmentConstraint;
	PHAudioCallControlsViewController* _buttonsViewController;
	PHInCallKeypadViewController* _keypadViewController;
	TUCall* _callForBackgroundImage;
	UIImageView* _backgroundImageView;
	UIVisualEffectView* _backgroundEffectView;
	CALayer* _backgroundImageFilterLayer;

}

@property (assign,nonatomic) unsigned short currentState;                                                 //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,readonly) char canShowBackgroundImage; 
@property (getter=isShowingBackgroundImage,nonatomic,readonly) char showingBackgroundImage; 
@property (retain) TUCall * disconnectedCallToMessage;                                                    //@synthesize disconnectedCallToMessage=_disconnectedCallToMessage - In the implementation block
@property (retain) TPSuperBottomBar * bottomBar;                                                          //@synthesize bottomBar=_bottomBar - In the implementation block
@property (retain) UIView * currentMiddleView;                                                            //@synthesize currentMiddleView=_currentMiddleView - In the implementation block
@property (assign,nonatomic) unsigned short middleViewState;                                              //@synthesize middleViewState=_middleViewState - In the implementation block
@property (retain) PHCallParticipantsViewController * callParticipantsViewController;                     //@synthesize callParticipantsViewController=_callParticipantsViewController - In the implementation block
@property (retain) PHCallParticipantsViewController * callWaitingParticipantsViewController;              //@synthesize callWaitingParticipantsViewController=_callWaitingParticipantsViewController - In the implementation block
@property (retain) NSLayoutConstraint * participantsViewYAdjustmentConstraint;                            //@synthesize participantsViewYAdjustmentConstraint=_participantsViewYAdjustmentConstraint - In the implementation block
@property (nonatomic,retain) PHAudioCallControlsViewController * buttonsViewController;                   //@synthesize buttonsViewController=_buttonsViewController - In the implementation block
@property (nonatomic,retain) PHInCallKeypadViewController * keypadViewController;                         //@synthesize keypadViewController=_keypadViewController - In the implementation block
@property (nonatomic,retain) TUCall * callForBackgroundImage;                                             //@synthesize callForBackgroundImage=_callForBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                                   //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (nonatomic,retain) CALayer * backgroundImageFilterLayer;                                        //@synthesize backgroundImageFilterLayer=_backgroundImageFilterLayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dismissalAssertionReason;
-(char)needsDismissalAssertion;
-(char)allowsMenuButtonDismissal;
-(char)allowsBanners;
-(int)desiredButtonEvents;
-(void)audioRoutingAlertController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)audioRoutingAlertControllerDidDismiss:(id)arg1 ;
-(id)hideActionTitleForAudioRoutingAlertController:(id)arg1 ;
-(void)resetAutodismissTimer;
-(void)_autodismissAudioMenu;
-(void)setupAutodismissRoutingTimer;
-(void)_testing_finishedAnimatingToActiveCallState;
-(void)_testing_didTransitionToActiveCallState:(id)arg1 ;
-(void)_testing_didTransitionToEndingCallState;
-(void)_testing_didTransitionToEndedCallState;
-(void)_testing_didTransitionToIncomingRingingCallState:(id)arg1 ;
-(void)hardwareButtonEventNotification:(id)arg1 ;
-(void)wantsHoldMusicChangedNotification:(id)arg1 ;
-(void)updateCurrentState;
-(void)setCurrentState:(unsigned short)arg1 animated:(char)arg2 ;
-(void)_leaveMessage;
-(char)isShowingBackgroundImage;
-(void)callCenterCallStatusChangedNotification:(id)arg1 ;
-(void)handleProximityChangedNotification:(id)arg1 ;
-(void)callContinuityStateChangedNotification:(id)arg1 ;
-(void)setupDeviceController;
-(void)setDisconnectedCallToMessage:(TUCall *)arg1 ;
-(TUCall *)disconnectedCallToMessage;
-(char)setCallForBackgroundImage:(id)arg1 animated:(char)arg2 blurred:(char)arg3 ;
-(unsigned short)middleViewState;
-(void)setMiddleViewState:(unsigned short)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(UIView *)currentMiddleView;
-(id)isolatedCall;
-(int)bottomBarStateForCallWaitingCall;
-(void)setMiddleViewState:(unsigned short)arg1 animated:(char)arg2 ;
-(void)setShowsCallWaitingParticipantView:(char)arg1 ;
-(void)setMiddleViewState:(unsigned short)arg1 ;
-(void)startSuppressionOfSTKAlerts;
-(void)stopSuppressionOfSTKAlerts;
-(char)canShowBackgroundImage;
-(TUCall *)callForBackgroundImage;
-(void)setCallForBackgroundImage:(TUCall *)arg1 ;
-(PHCallParticipantsViewController *)callParticipantsViewController;
-(void)revealAudioRoutingDeviceListAnimated:(char)arg1 ;
-(PHAudioCallControlsViewController *)buttonsViewController;
-(PHInCallKeypadViewController *)keypadViewController;
-(NSLayoutConstraint *)participantsViewYAdjustmentConstraint;
-(void)setParticipantsViewYAdjustmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCurrentMiddleView:(UIView *)arg1 ;
-(UIVisualEffectView *)backgroundEffectView;
-(void)_sheetCancel;
-(void)audioCallControlsViewControllerRequestedKeypadPresentation:(id)arg1 ;
-(void)audioCallControlsViewControllerRequestedKeypadPresentationForFieldMode:(id)arg1 ;
-(void)audioCallControlsViewControllerRequestedContactsPresentation:(id)arg1 ;
-(void)audioCallControlsViewControllerRequestedAddCallPresentation:(id)arg1 ;
-(void)audioCallControlsViewControllerRequestedAudioRoutesPresentation:(id)arg1 ;
-(void)setCallParticipantsViewController:(PHCallParticipantsViewController *)arg1 ;
-(PHCallParticipantsViewController *)callWaitingParticipantsViewController;
-(void)setCallWaitingParticipantsViewController:(PHCallParticipantsViewController *)arg1 ;
-(void)setButtonsViewController:(PHAudioCallControlsViewController *)arg1 ;
-(void)setKeypadViewController:(PHInCallKeypadViewController *)arg1 ;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(CALayer *)backgroundImageFilterLayer;
-(void)setBackgroundImageFilterLayer:(CALayer *)arg1 ;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(unsigned short)currentState;
-(UIImageView *)backgroundImageView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setBackgroundImage:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setCurrentState:(unsigned short)arg1 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)setBottomBar:(TPSuperBottomBar *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(TPSuperBottomBar *)bottomBar;
-(char)shouldShowHardPauseNumbers;
-(void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2 ;
-(void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2 ;
-(id)customizedTitleForItemInBar:(id)arg1 withActionType:(int)arg2 ;
-(void)hardPauseControllerChangedNotification:(id)arg1 ;
@end
