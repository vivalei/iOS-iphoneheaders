/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:52 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, UIWindow;

@interface UISpringBoardHostedView : UIView {

	NSString* _remoteViewIdentifier;
	UIWindow* _remoteWindow;
	char _remoteViewOpaque;

}
-(void)dealloc;
-(void)unregister;
-(void)setRemoteViewOpaque:(char)arg1 ;
-(void)registerWithIdentifier:(id)arg1 andController:(id)arg2 ;
-(id)remoteViewIdentifier;
@end
