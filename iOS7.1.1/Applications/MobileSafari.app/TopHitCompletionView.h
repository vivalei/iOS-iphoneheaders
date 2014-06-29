/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class NSAttributedString, UIColor;

@interface TopHitCompletionView : UIView {

	NSAttributedString* _attributedText;
	unsigned _highlightStartIndex;
	UIColor* _highlightColor;

}

@property (nonatomic,copy) UIColor * highlightColor;              //@synthesize highlightColor=_highlightColor - In the implementation block
-(void)setAttributedText:(id)arg1 highlightStartIndex:(unsigned)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)highlightColor;
-(void)setHighlightColor:(id)arg1 ;
@end
