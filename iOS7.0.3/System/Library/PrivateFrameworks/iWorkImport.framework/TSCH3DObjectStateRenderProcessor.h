/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@interface TSCH3DObjectStateRenderProcessor : TSCH3DRetargetRenderProcessor {

	StateStack<TSCH3D::ObjectState, 6>* mObjectStateStack;

}
-(StateStack<TSCH3D::ObjectState, 6>*)objectStateStack;
-(void)resetBuffers;
-(void)popState;
-(id).cxx_construct;
-(void)pushState;
-(void).cxx_destruct;
@end
