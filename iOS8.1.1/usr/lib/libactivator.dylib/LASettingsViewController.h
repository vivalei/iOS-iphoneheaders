/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /usr/lib/libactivator.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol LASettingsViewControllerDelegate;
@class UITableView, UINavigationController;

@interface LASettingsViewController : UIViewController {

	UITableView* _tableView;
	id<LASettingsViewControllerDelegate> _delegate;
	UINavigationController* _savedNavigationController;

}
+(id)adPaneURL;
+(void)updateAdSettings;
+(id)moreActionsURL;
+(void)initialize;
+(id)controller;
+(void)initialize;
-(BOOL)showsAd;
-(double)rowHeightForInterfaceOrientation:(long long)arg1 ;
-(void)hideAdAnimated:(BOOL)arg1 ;
-(void)pushSettingsController:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(id)navigationController;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)purgeMemoryForReason:(int)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)tableView;
@end
