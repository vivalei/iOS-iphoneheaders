/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface TSDUserDefinedGuide : NSObject {

	float mPosition;
	int mGuideType;

}

@property (nonatomic,readonly) float position; 
@property (nonatomic,readonly) int guideType; 
-(int)guideType;
-(id)initWithPosition:(float)arg1 type:(int)arg2 ;
-(id)initWithTSDAlignmentGuide:(id)arg1 ;
-(id)alignmentGuide;
-(id)alignmentGuideForEditing;
-(id)description;
-(float)position;
@end
