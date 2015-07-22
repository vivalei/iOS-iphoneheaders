/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPassbookBridgeSettings.bundle/NanoPassbookBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassbookBridgeSettings/NPKPaymentWebServiceHelperDelegate.h>
#import <NanoPassbookBridgeSettings/PKPaymentSetupDelegate.h>
#import <NanoPassbookBridgeSettings/PKPaymentVerificationEntryDelegate.h>
#import <NanoPassbookBridgeSettings/PKPassDeleteHandler.h>
#import <NanoPassbookBridgeSettings/PKPassLibraryDataProvider.h>
#import <NanoPassbookBridgeSettings/PKPassbookSettingsOptionsDelegate.h>

@class PKPaymentWebService, PKPaymentSetupNavigationController, NPKPaymentWebServiceHelper, NPKCompanionAgentConnection, NSMutableDictionary, NSMutableSet, NSString;

@interface NPKPassbookPaymentSetupDelegate : NSObject <NPKPaymentWebServiceHelperDelegate, PKPaymentSetupDelegate, PKPaymentVerificationEntryDelegate, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPassbookSettingsOptionsDelegate> {

	BOOL _lastProvidedCanAddPaymentPass;
	PKPaymentWebService* _webService;
	PKPaymentSetupNavigationController* _currentSetupController;
	NPKPaymentWebServiceHelper* _webServiceHelper;
	NPKCompanionAgentConnection* _companionAgentConnection;
	NSMutableDictionary* _deleteStatusHandlers;
	NSMutableSet* _deletionInProgressPasses;

}

@property (nonatomic,retain) PKPaymentWebService * webService;                                         //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPaymentSetupNavigationController * currentSetupController;              //@synthesize currentSetupController=_currentSetupController - In the implementation block
@property (nonatomic,retain) NPKPaymentWebServiceHelper * webServiceHelper;                            //@synthesize webServiceHelper=_webServiceHelper - In the implementation block
@property (nonatomic,retain) NPKCompanionAgentConnection * companionAgentConnection;                   //@synthesize companionAgentConnection=_companionAgentConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deleteStatusHandlers;                               //@synthesize deleteStatusHandlers=_deleteStatusHandlers - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletionInProgressPasses;                                  //@synthesize deletionInProgressPasses=_deletionInProgressPasses - In the implementation block
@property (assign,nonatomic) BOOL lastProvidedCanAddPaymentPass;                                       //@synthesize lastProvidedCanAddPaymentPass=_lastProvidedCanAddPaymentPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSetupDelegate;
-(void)loadWebService;
-(BOOL)isSettingsControllerReloadNecessary;
-(NPKPaymentWebServiceHelper *)webServiceHelper;
-(id)_webServiceContext;
-(PKPaymentSetupNavigationController *)currentSetupController;
-(NPKCompanionAgentConnection *)companionAgentConnection;
-(void)_setDeletionInProgress:(BOOL)arg1 forPassWithUniqueID:(id)arg2 ;
-(NSMutableSet *)deletionInProgressPasses;
-(NSMutableDictionary *)deleteStatusHandlers;
-(BOOL)_canAddPaymentPass;
-(void)setLastProvidedCanAddPaymentPass:(BOOL)arg1 ;
-(BOOL)lastProvidedCanAddPaymentPass;
-(void)setCurrentSetupController:(PKPaymentSetupNavigationController *)arg1 ;
-(BOOL)uniqueBillingAddresses;
-(void)setCompanionAgentConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)setDeletionInProgressPasses:(NSMutableSet *)arg1 ;
-(void)setDeleteStatusHandlers:(NSMutableDictionary *)arg1 ;
-(id)_defaultPaymentPassIdentifier;
-(void)setWebServiceHelper:(NPKPaymentWebServiceHelper *)arg1 ;
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2 ;
-(id)defaultBillingAddressForPaymentPass:(id)arg1 ;
-(BOOL)isDeletionInProgressForPass:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(id)defaultBillingAddresses;
-(id)defaultShippingAddress;
-(id)defaultContactEmail;
-(id)defaultContactPhone;
-(id)defaultPaymentPassIdentifier;
-(void)setDefaultShippingAddress:(id)arg1 ;
-(void)setDefaultContactEmail:(id)arg1 ;
-(void)setDefaultContactPhone:(id)arg1 ;
-(void)setDefaultPaymentPassIdentifier:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(void)handleProvisioningErrorForAID:(id)arg1 ;
-(void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handlePassAlreadyProvisionedError;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)handleDownloadedPasses:(id)arg1 fromPaymentSetupWithCompletion:(/*^block*/id)arg2 ;
-(void)paymentSetupDidFinish;
-(void)dealloc;
-(id)init;
-(void)shouldArchiveWebServiceContext:(id)arg1 ;
-(void)shouldArchiveWebServiceBackgroundContext:(id)arg1 ;
-(void)shouldSetNewAuthRandom:(/*^block*/id)arg1 ;
-(void)handlePushToken:(id)arg1 ;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1 ;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(BOOL)arg2 ;
-(id)passWithUniqueID:(id)arg1 ;
-(void)removePass:(id)arg1 ;
-(id)paymentPasses;
-(BOOL)canAddPaymentPass;
-(id)defaultCardIdentifier;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
@end
