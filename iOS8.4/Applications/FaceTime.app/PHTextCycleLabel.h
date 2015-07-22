/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class NSArray, NSTimer;

@interface PHTextCycleLabel : UILabel {

	NSArray* _cycleStrings;
	NSTimer* _cycleTimer;
	int _currentCycleStringIndex;

}

@property (retain) NSArray * cycleStrings;                   //@synthesize cycleStrings=_cycleStrings - In the implementation block
@property (retain) NSTimer * cycleTimer;                     //@synthesize cycleTimer=_cycleTimer - In the implementation block
@property (assign) int currentCycleStringIndex;              //@synthesize currentCycleStringIndex=_currentCycleStringIndex - In the implementation block
-(NSArray *)cycleStrings;
-(void)setCurrentCycleStringIndex:(int)arg1 ;
-(int)currentCycleStringIndex;
-(NSTimer *)cycleTimer;
-(void)setCycleTimer:(NSTimer *)arg1 ;
-(void)cycleToNextString;
-(void)startCyclingStrings;
-(void)setCycleStrings:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
@end
