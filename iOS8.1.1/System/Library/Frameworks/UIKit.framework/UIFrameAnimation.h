/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UIFrameAnimation : UIAnimation {

	CGRect _startFrame;
	CGRect _endFrame;
	int _fieldsToChange;

}
-(void)setProgress:(float)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)setSignificantRectFields:(int)arg1 ;
@end

