/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSUBasicProgressStorage : NSObject {

	double mValue;
	double mMaxValue;
	char mIndeterminate;

}

@property (assign) double value; 
@property (assign) double maxValue; 
@property (getter=isIndeterminate) char indeterminate; 
-(double)maxValue;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(char)isIndeterminate;
-(void)setIndeterminate:(char)arg1 ;
@end
