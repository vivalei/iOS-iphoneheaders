/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@protocol _MKPopoverEmbeddingViewWindowDelegate;
@interface _MKPopoverEmbeddingView : UIView {

	id<_MKPopoverEmbeddingViewWindowDelegate> _windowDelegate;

}

@property (assign,nonatomic,__weak) id<_MKPopoverEmbeddingViewWindowDelegate> windowDelegate;              //@synthesize windowDelegate=_windowDelegate - In the implementation block
-(void)setWindowDelegate:(id<_MKPopoverEmbeddingViewWindowDelegate>)arg1 ;
-(id<_MKPopoverEmbeddingViewWindowDelegate>)windowDelegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
@end
