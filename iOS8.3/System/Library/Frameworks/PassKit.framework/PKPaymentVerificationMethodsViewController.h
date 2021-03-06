/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentPass, PKPaymentWebService, NSArray, UIActivityIndicatorView, UIImage;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupTableViewController {

	PKPaymentPass* _pass;
	PKPaymentWebService* _paymentWebService;
	NSArray* _verificationChannels;
	UIActivityIndicatorView* _activityIndicator;
	unsigned _selectedIndex;
	UIImage* _passSnapshot;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	/*^block*/id _verificationRequestHandler;

}

@property (nonatomic,retain) UIImage * passSnapshot;                                              //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,copy) id verificationRequestHandler;                                         //@synthesize verificationRequestHandler=_verificationRequestHandler - In the implementation block
-(void)send:(id)arg1 ;
-(void)_showRequestError:(id)arg1 ;
-(id)_detailTextLabelForChanne:(id)arg1 ;
-(void)_terminateFlow;
-(void)_disableCells;
-(id)verificationRequestHandler;
-(void)_enableCells;
-(void)_showSendCodeError:(id)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(int)arg3 ;
-(UIImage *)passSnapshot;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)setVerificationRequestHandler:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)cancel:(id)arg1 ;
@end

