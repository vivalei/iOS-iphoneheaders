/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {

	AVCaptureInputInternal* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
+(void)initialize;
-(void)attachSafelyToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachSafelyFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)performFigCaptureSessionOperationSafelyUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)ports;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)dealloc;
-(id)init;
-(id)session;
-(void)setSession:(id)arg1 ;
-(OpaqueCMClockRef)clock;
@end

