/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (assign,nonatomic) int mediaItemType; 
@property (assign,nonatomic) BOOL shouldShuffle; 
+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)shouldShuffle;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setShouldShuffle:(BOOL)arg1 ;
-(int)mediaItemType;
-(void)setMediaItemType:(int)arg1 ;
@end

