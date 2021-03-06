/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString;

@interface TSDGLFrameBufferTextureLookupInfo : NSObject {

	unsigned _attachment;
	int _indexOnAttachment;
	unsigned _textureName;
	NSString* _name;
	CGSize _textureSize;

}

@property (assign,nonatomic) unsigned attachment;                 //@synthesize attachment=_attachment - In the implementation block
@property (assign,nonatomic) int indexOnAttachment;               //@synthesize indexOnAttachment=_indexOnAttachment - In the implementation block
@property (nonatomic,readonly) unsigned textureName;              //@synthesize textureName=_textureName - In the implementation block
@property (nonatomic,readonly) CGSize textureSize;                //@synthesize textureSize=_textureSize - In the implementation block
@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
+(id)textureLookupInfoWithAttachment:(unsigned)arg1 indexOnAttachment:(int)arg2 textureName:(unsigned)arg3 textureSize:(CGSize)arg4 name:(id)arg5 ;
-(id)initWithAttachment:(unsigned)arg1 indexOnAttachment:(int)arg2 textureName:(unsigned)arg3 textureSize:(CGSize)arg4 name:(id)arg5 ;
-(unsigned)textureName;
-(int)indexOnAttachment;
-(void)setIndexOnAttachment:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setAttachment:(unsigned)arg1 ;
-(unsigned)attachment;
-(CGSize)textureSize;
@end

