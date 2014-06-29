/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIView.h>

@protocol RCControlsViewDelegate;
@class RCRecorderStateButton, UIButton, UIAlertView, UIColor;

@interface RCControlsView : UIView {

	RCRecorderStateButton* _recordingStateButton;
	UIButton* _playPauseButton;
	UIButton* _doneButton;
	UIAlertView* _noMicAlertView;
	bool _canRecord;
	<RCControlsViewDelegate>* _delegate;
	long long _recordingState;
	long long _playbackState;
	UIColor* _bottomSeparatorLineColor;
	long long _configuration;

}

@property (assign,nonatomic,__weak) <RCControlsViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool canRecord;                                          //@synthesize canRecord=_canRecord - In the implementation block
@property (assign,nonatomic) long long recordingState;                                //@synthesize recordingState=_recordingState - In the implementation block
@property (assign,nonatomic) long long playbackState;                                 //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) UIColor * bottomSeparatorLineColor;                      //@synthesize bottomSeparatorLineColor=_bottomSeparatorLineColor - In the implementation block
@property (assign,nonatomic) long long configuration;                                 //@synthesize configuration=_configuration - In the implementation block
-(bool)_canEnableDoneButton;
-(long long)playbackState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setConfiguration:(long long)arg1 ;
-(void).cxx_destruct;
-(long long)configuration;
-(void)setRecordingState:(long long)arg1 ;
-(long long)recordingState;
-(id)_assetImageForButtonPlaybackState:(long long)arg1 ;
-(void)performFailedToStartRecordingActions;
-(void)_recordingStateButtonPressed:(id)arg1 ;
-(void)_playPauseButtonPressed:(id)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)setCanRecord:(bool)arg1 ;
-(void)_inputAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_layoutSubviews;
-(void)_updateButtonsAnimated:(bool)arg1 ;
-(void)setConfiguration:(long long)arg1 animate:(bool)arg2 ;
-(bool)_canShowPlayPauseButton;
-(bool)_canShowRecordButton;
-(bool)_canShowDoneButton;
-(bool)_canRecord;
-(bool)_canPlayPause;
-(bool)canRecord;
-(void)setBottomSeparatorLineColor:(id)arg1 ;
-(void)setPlaybackState:(long long)arg1 ;
-(id)_recordButton;
-(void)performRecordButtonPress;
-(id)bottomSeparatorLineColor;
@end
