/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLBindable.h>

@class NSString;

@interface TSCH3DGLESRTT : NSObject <TSCH3DGLBindable> {

	unsigned mTexture;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isTexturable;
+(id)colorbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)depthbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
+(id)bufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 internalFormat:(unsigned)arg2 format:(unsigned)arg3 attachment:(unsigned)arg4 ;
+(char)isEqual:(id)arg1 ;
-(void)destroyResourcesInContext:(id)arg1 ;
-(void)deactivateInContext:(id)arg1 ;
-(void)bindInSession:(id)arg1 ;
-(id)initWithGLTexture:(unsigned)arg1 ;
-(void)dealloc;
-(char)valid;
@end

