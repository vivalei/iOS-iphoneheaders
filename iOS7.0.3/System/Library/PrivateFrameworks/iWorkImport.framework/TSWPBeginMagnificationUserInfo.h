/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPRep;

@interface TSWPBeginMagnificationUserInfo : NSObject {

	TSWPRep* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	BOOL _animated;

}

@property (assign,nonatomic) TSWPRep * target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) CGPoint magnificationPoint;              //@synthesize magnificationPoint=_magnificationPoint - In the implementation block
@property (assign,nonatomic) CGPoint offset;                          //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL animated;                           //@synthesize animated=_animated - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(BOOL)animated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id).cxx_construct;
-(void)setMagnificationPoint:(CGPoint)arg1 ;
-(CGPoint)magnificationPoint;
@end

