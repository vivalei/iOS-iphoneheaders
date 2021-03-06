/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableDictionary, FCRFaceDetector, NSArray, NSMutableArray;

@interface CIBurstImageFaceAnalysisContext : NSObject {

	NSMutableDictionary* curConfig;
	NSMutableDictionary* faceIdMapping;
	NSMutableDictionary* renameMapping;
	int faceIdCounter;
	FCRFaceDetector* faceDetector;
	NSArray* faces;
	double timeOfLastAnalyzedFrame;
	double timeBlinkDetectionDone;
	double timeFaceDetectionDone;
	BOOL forceFaceDetectionEnable;
	NSMutableArray* faceTimestampArray;
	double latestFaceTimestamp;
	double latestImageTimestamp;
	int lastFaceIndex;

}

@property (assign) double timeFaceDetectionDone; 
@property (assign) double timeBlinkDetectionDone; 
@property (assign) BOOL forceFaceDetectionEnable; 
@property (assign) double latestFaceTimestamp; 
-(void)setupFaceDetector;
-(void)addFaceToArray:(id)arg1 ;
-(int)findFacesInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)calcFaceScores:(id)arg1 ;
-(void)adjustFaceIdsForImageStat:(id)arg1 ;
-(void)extractFacesFromMetadata:(id)arg1 ;
-(void)addFacesToImageStat:(id)arg1 imageSize:(CGSize)arg2 ;
-(double)timeBlinkDetectionDone;
-(void)setTimeBlinkDetectionDone:(double)arg1 ;
-(double)timeFaceDetectionDone;
-(void)setTimeFaceDetectionDone:(double)arg1 ;
-(BOOL)forceFaceDetectionEnable;
-(void)setForceFaceDetectionEnable:(BOOL)arg1 ;
-(double)latestFaceTimestamp;
-(void)setLatestFaceTimestamp:(double)arg1 ;
-(void)dealloc;
-(id)init;
@end

