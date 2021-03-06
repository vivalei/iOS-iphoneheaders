/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {

	AVPlayerItemTrackInternal* _playerItemTrack;

}

@property (nonatomic,readonly) AVAssetTrack * assetTrack; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) float currentVideoFrameRate; 
+(id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(id)loudnessInfo;
-(void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1 ;
-(void)_respondToFigPlaybackItemBecomingReadyForInpection;
-(id)_playerItem;
-(id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5 ;
-(id)_weakReferenceToPlayerItem;
-(void)_transferEnabledToFig;
-(void)_transferLoudnessInfoToFig;
-(void)_transferCachedValuesToFig;
-(id)fallbackTrack;
-(float)currentVideoFrameRate;
-(void)setLoudnessInfo:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(AVAssetTrack *)assetTrack;
-(int)trackID;
-(void)finalize;
@end

