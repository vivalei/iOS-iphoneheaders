/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

@interface TSCH3DPlaneProjectRenderProcessor : TSCH3DTransformGeometryRenderProcessor {

	plane<glm::detail::tvec3<float> > mPlane;
	tvec3<float> mProjPt;
	box<glm::detail::tvec3<float> > mBounds;

}

@property (nonatomic,readonly) const box<glm::detail::tvec3<float> >* bounds; 
+(id)processorWithPlane:(const plane<glm::detail::tvec3<float> >*)arg1 projPt:(const tvec3<float>*)arg2 ;
-(void)submit:(const PrimitiveInfo*)arg1 ;
-(id)initWithPlane:(const plane<glm::detail::tvec3<float> >*)arg1 projPt:(const tvec3<float>*)arg2 ;
-(const box<glm::detail::tvec3<float> >*)bounds;
-(id).cxx_construct;
@end
