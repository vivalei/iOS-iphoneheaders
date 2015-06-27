/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface HNDHoverCursorCircle : UIView {

	char _fill;
	char _dashed;
	char _selected;
	UIView* _innerCircle;
	float _radiusMultiplier;

}

@property (assign,nonatomic) char fill;                           //@synthesize fill=_fill - In the implementation block
@property (assign,nonatomic) char dashed;                         //@synthesize dashed=_dashed - In the implementation block
@property (assign,nonatomic) char selected;                       //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) float radiusMultiplier;              //@synthesize radiusMultiplier=_radiusMultiplier - In the implementation block
@property (nonatomic,readonly) float radius; 
-(void)showInnerCircle:(char)arg1 ;
-(void)setDashed:(char)arg1 ;
-(void)setRadiusMultiplier:(float)arg1 ;
-(float)radiusMultiplier;
-(char)dashed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(char)fill;
-(void)setSelected:(char)arg1 ;
-(char)selected;
-(float)radius;
-(void)setFill:(char)arg1 ;
@end
