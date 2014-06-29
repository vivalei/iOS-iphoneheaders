/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray, SASyncAnchor;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic,retain) SASyncAnchor * current; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
@property (nonatomic,@dynamic,copy) NSString * appId; 
@property (nonatomic,@dynamic,copy) NSArray * callbacks; 
+(id)chunkDenied;
+(id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)chunkDeniedWithErrorCode:(long long)arg1 ;
-(id)groupIdentifier;
-(void)setCurrent:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)initWithErrorCode:(long long)arg1 ;
-(id)current;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
@end
