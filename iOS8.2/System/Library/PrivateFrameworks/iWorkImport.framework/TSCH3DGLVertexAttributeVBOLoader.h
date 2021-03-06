/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLVBOLoader.h>

@interface TSCH3DGLVertexAttributeVBOLoader : TSCH3DGLVBOLoader {

	int mLocation;
	AttributeSpecs mAttributeSpecs;

}
+(int)attributeLocation:(id)arg1 shaderHandle:(id)arg2 ;
+(id)loader;
-(void)loadSingleValueInBuffer:(id)arg1 ;
-(void)loadSingleValue:(const float*)arg1 components:(unsigned)arg2 ;
-(char)activateResource:(id)arg1 location:(int)arg2 specs:(const AttributeSpecs*)arg3 insideSession:(id)arg4 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setClientState:(const DataBufferInfo*)arg1 ;
@end

