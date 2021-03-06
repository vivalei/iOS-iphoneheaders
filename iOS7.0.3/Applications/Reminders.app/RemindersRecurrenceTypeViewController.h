/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RemindersRecurrenceTypeViewControllerDelegate;
@class UITableView, NSString, NSIndexPath, EKReminder;

@interface RemindersRecurrenceTypeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _table;
	NSString* _customString;
	int _repeatType;
	int _originalRepeatType;
	NSIndexPath* _checkedItem;
	EKReminder* _reminder;
	<RemindersRecurrenceTypeViewControllerDelegate>* _delegate;

}

@property (nonatomic,retain) EKReminder * reminder;                                                          //@synthesize reminder=_reminder - In the implementation block
@property (assign,nonatomic) int repeatType;                                                                 //@synthesize repeatType=_repeatType - In the implementation block
@property (nonatomic,copy) NSString * customString;                                                          //@synthesize customString=_customString - In the implementation block
@property (assign,nonatomic,__weak) <RemindersRecurrenceTypeViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(int)getRepeatTypeForReminder:(id)arg1 customRepeatString:(id*)arg2 repeatEnd:(id*)arg3 ;
-(void)refreshFromReminderAndStore;
-(BOOL)_validateRecurrenceType;
-(id)customString;
-(void)setCustomString:(id)arg1 ;
-(void)_checkItemAtIndexPath:(id)arg1 ;
-(void)setReminder:(id)arg1 ;
-(id)reminder;
-(int)repeatType;
-(void)setRepeatType:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)viewDidUnload;
-(void).cxx_destruct;
@end

