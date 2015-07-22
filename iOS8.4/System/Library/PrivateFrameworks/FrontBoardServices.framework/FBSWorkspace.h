/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceClientDelegate.h>

@protocol OS_dispatch_queue, FBSWorkspaceDelegate;
@class NSObject, FBSWorkspaceClient, FBSSerialQueue, NSMutableDictionary, NSArray, NSString;

@interface FBSWorkspace : NSObject <FBSWorkspaceClientDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBSWorkspaceDelegate> _delegate;
	FBSWorkspaceClient* _client;
	FBSSerialQueue* _callOutQueue;
	NSObject*<OS_dispatch_queue> _scenesQueue;
	NSMutableDictionary* _scenesByIdentifier;

}

@property (assign,nonatomic) id<FBSWorkspaceDelegate> delegate; 
@property (nonatomic,retain,readonly) FBSSerialQueue * queue;                //@synthesize callOutQueue=_callOutQueue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scenes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUIApplicationWorkspace;
-(void)dealloc;
-(void)setDelegate:(id<FBSWorkspaceDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<FBSWorkspaceDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(id)initWithSerialQueue:(id)arg1 ;
-(NSArray *)scenes;
-(FBSSerialQueue *)queue;
-(id)_internalQueue;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)_performDelegateCallOut:(/*^block*/id)arg1 ;
-(void)clientSystemApplicationTerminated:(id)arg1 ;
-(void)clientBeginTransaction:(id)arg1 ;
-(void)clientEndTransaction:(id)arg1 ;
-(void)client:(id)arg1 handleCreateScene:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)client:(id)arg1 handleDestroyScene:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)client:(id)arg1 handleActions:(id)arg2 ;
-(Class)_clientClass;
-(id)_sceneWithIdentifier:(id)arg1 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestDestructionOfScene:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_client;
@end
