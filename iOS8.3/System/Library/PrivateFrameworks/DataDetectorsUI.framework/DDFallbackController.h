/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:27:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIWindow;

@interface DDFallbackController : UIViewController {

	UIWindow* _baseWindow;
	UIWindow* _ourWindow;
	id _interactionDelegate;
	int _startOrientation;

}
-(void)dealloc;
-(void)loadView;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithWindow:(id)arg1 interactionDelegate:(id)arg2 ;
@end

