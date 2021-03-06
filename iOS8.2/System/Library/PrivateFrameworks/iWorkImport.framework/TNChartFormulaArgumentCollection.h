/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSFastEnumeration.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@class NSArray;

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying> {

	NSArray* mArray;

}
+(id)argumentCollectionFromFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 usingCalcEngine:(id)arg3 ;
-(id)elementEnumerator;
-(id)initWithFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 usingCalcEngine:(id)arg3 ;
-(id)wrappedChartFormulaWithID:(SCD_Struct_TS282)arg1 ;
-(id)reverseElementEnumerator;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_TS23*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)firstElement;
-(id)lastElement;
-(id)elementAtIndex:(unsigned)arg1 ;
@end

