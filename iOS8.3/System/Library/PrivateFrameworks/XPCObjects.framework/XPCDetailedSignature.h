/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:26:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface XPCDetailedSignature : NSObject {

	unsigned _argumentCount;
	Class* _classes;

}
+(id)signatureWithArgumentCount:(unsigned)arg1 classes:(Class)arg2 ;
+(id)signatureWithoutArguments;
-(void)dealloc;
-(Class)argumentClassAtIndex:(unsigned)arg1 ;
-(id)initWithArgumentCount:(unsigned)arg1 ;
-(void)setClass:(Class)arg1 forArgumentAtIndex:(unsigned)arg2 ;
@end

