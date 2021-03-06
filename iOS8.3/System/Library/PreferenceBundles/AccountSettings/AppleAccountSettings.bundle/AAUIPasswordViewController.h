/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:40:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <AppleAccountSettings/AAUICredentialRecoveryPresentationDelegate.h>

@protocol AAUIPasswordViewControllerDelegate;
@class ACAccount, UITextField, NSString, AAUICredentialRecoveryController;

@interface AAUIPasswordViewController : ACUIViewController <AAUICredentialRecoveryPresentationDelegate> {

	ACAccount* _account;
	UITextField* _passwordField;
	NSString* _password;
	id _textFieldTextDidChangeObserver;
	char _isBlockingUserInteraction;
	AAUICredentialRecoveryController* _credentialRecoveryUIController;
	id<AAUIPasswordViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIPasswordViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_verifyPassword;
-(void)_iforgotButtonWasTapped:(id)arg1 ;
-(void)_updatePassword:(id)arg1 sender:(id)arg2 ;
-(void)_showIncorrectPasswordAlert;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)setDelegate:(id<AAUIPasswordViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<AAUIPasswordViewControllerDelegate>)delegate;
-(id)navigationItem;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)credentialRecoveryController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)credentialRecoveryController:(id)arg1 finishedWithSuccess:(char)arg2 ;
-(id)navigationItemToShowInitialLoadingForCredentialRecoveryController:(id)arg1 ;
-(void)credentialRecoveryController:(id)arg1 needsPresentationOfViewController:(id)arg2 ;
-(id)navigationControllerForPresentationWithCredentialRecoveryController:(id)arg1 ;
-(void)_updateDoneButton;
-(id)_passwordForSpecifier:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_openWebBasedCredentialRecoveryFlow;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end

