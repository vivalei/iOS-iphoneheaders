/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSSet;

@interface SSDownloadPolicyApplicationState : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	NSString* _applicationIdentifier;
	NSSet* _applicationStates;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                     //@synthesize applicationStates=_applicationStates - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)applicationIdentifier;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setApplicationIdentifier:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)applicationStates;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)addApplicationState:(int)arg1 ;
-(void)setNotRunningApplicationStates;
-(void)setApplicationStates:(id)arg1 ;
@end

