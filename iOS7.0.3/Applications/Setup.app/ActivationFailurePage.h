/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>

@class UILabel, UITableViewCell;

@interface ActivationFailurePage : BuddyTableViewController {

	id _delegate;
	UILabel* _label;
	UITableViewCell* _tryAgainCell;
	UITableViewCell* _wifiCell;
	BOOL _isOTA;

}
-(id)initWithConnectionFailed:(BOOL)arg1 isOTA:(BOOL)arg2 ;
-(float)_tableHeight;
-(id)_wifiCell;
-(id)_tryAgainCell;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
@end

