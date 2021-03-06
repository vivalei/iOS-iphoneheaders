/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>
#import <Radio/NSMutableCopying.h>

@class NSMutableDictionary;

@interface RadioPlaybackTimeoutInfo : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _playbackTimeoutIdentifierToTimeoutNumber;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_playbackTimeoutIdentifierForBase:(id)arg1 playbackType:(long long)arg2 ;
-(double)pausedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)unlockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)dockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
-(double)lockedPlaybackTimeoutForPlaybackType:(long long)arg1 ;
@end

