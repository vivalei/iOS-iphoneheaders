/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSCopying;
@class NSObject;

@interface ML3StatementCacheNode : NSObject {

	NSObject*<NSCopying> _dictionaryKey;
	ML3StatementCacheNode* _next;

}

@property (nonatomic,copy) NSObject*<NSCopying> dictionaryKey;              //@synthesize dictionaryKey=_dictionaryKey - In the implementation block
@property (nonatomic,retain) ML3StatementCacheNode * next;                  //@synthesize next=_next - In the implementation block
-(ML3StatementCacheNode *)next;
-(id)description;
-(id)initWithDictionaryKey:(id)arg1 ;
-(NSObject*<NSCopying>)dictionaryKey;
-(void)setDictionaryKey:(NSObject*<NSCopying>)arg1 ;
-(void)setNext:(ML3StatementCacheNode *)arg1 ;
@end
