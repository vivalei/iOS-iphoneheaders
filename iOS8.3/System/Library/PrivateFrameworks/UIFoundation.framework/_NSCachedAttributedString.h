/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:55:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long _length;
	unsigned long _hashValue;
	SCD_Struct_NS25* _runs;
	long _numRuns;
	long _allocedRunsSize;
	long _numHits;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(unsigned)length;
-(id)string;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)cache;
-(oneway void)release;
-(char)_isStringDrawingTextStorage;
-(char)_baselineMode;
-(id)copyCachedInstance;
-(void)finalize;
@end

