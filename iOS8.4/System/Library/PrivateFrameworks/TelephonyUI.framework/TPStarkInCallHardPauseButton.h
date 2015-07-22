/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol TPStarkHardPauseButtonDelegate;
@interface TPStarkInCallHardPauseButton : UIButton {

	id<TPStarkHardPauseButtonDelegate> _delegate;

}

@property (assign) id<TPStarkHardPauseButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<TPStarkHardPauseButtonDelegate>)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(id<TPStarkHardPauseButtonDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateHardPauseButtonState;
-(void)hardPausePressed;
-(void)hardPauseControllerChangedNotification:(id)arg1 ;
@end
