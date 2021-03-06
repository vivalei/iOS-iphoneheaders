/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _MPUSharedLibrariesViewController, UINavigationController;

@interface MPUSharedLibrariesViewController : UIViewController {

	_MPUSharedLibrariesViewController* _sharedLibariesViewController;
	UINavigationController* _navigationController;
	BOOL _showsCancelButton;

}

@property (assign,nonatomic) BOOL showsCancelButton;              //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (assign,nonatomic) BOOL showsLocalLibrary; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)presentSharedLibrariesViewController:(BOOL)arg1 ;
-(void)setShowsLocalLibrary:(BOOL)arg1 ;
-(BOOL)showsLocalLibrary;
-(void)dismissSharedLibrariesViewController:(BOOL)arg1 ;
@end

