/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCameraViewfinder.h>
#import <Celestial/FigCaptureSessionObserver.h>

@class NSDictionary, FigCameraViewfinderSessionLocal, NSString;

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver> {

	BOOL _observing;
	NSDictionary* _options;
	FigCameraViewfinderSessionLocal* _activeViewfinderSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) BOOL photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
+(void)initialize;
+(id)cameraViewfinder;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)startWithOptions:(id)arg1 ;
-(int)photoThumbnailMaxDimension;
-(BOOL)photoThumbnailQualitySpecified;
-(float)photoThumbnailQuality;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4 ;
-(void)captureSessionDidStop:(long long)arg1 ;
-(void)captureSessionDidStart:(id)arg1 ;
-(void)_updateActiveViewfinderSession:(id)arg1 ;
@end

