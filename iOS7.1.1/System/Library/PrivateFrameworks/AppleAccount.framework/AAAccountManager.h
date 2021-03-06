/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;

}
+(id)sharedManager;
-(void)dealloc;
-(void).cxx_destruct;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_removeAppleIDCertsForUsername:(id)arg1 ;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(void)saveAllAccounts;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(void)reloadAccounts;
-(id)accountWithIdentifier:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(id)primaryAccount;
-(id)_accountStore;
@end

