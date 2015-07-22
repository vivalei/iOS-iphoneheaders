/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, NSLayoutConstraint;

@interface EKUIDividedGridViewWeekView : UIView {

	NSMutableArray* _buttonViews;
	NSLayoutConstraint* _heightConstraint;

}

@property (retain) NSMutableArray * buttonViews;                       //@synthesize buttonViews=_buttonViews - In the implementation block
@property (__weak) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(NSMutableArray *)buttonViews;
-(void)setButtonViews:(NSMutableArray *)arg1 ;
-(id)init;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end
