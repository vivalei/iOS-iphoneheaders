/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:57 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface _UIAssociationTable : NSObject {

	NSMapTable* _leftToRightHashTables;
	NSMapTable* _rightToLeftHashTables;

}
-(void)dealloc;
-(id)description;
-(char)isEmpty;
-(id)initWithLeftValueOptions:(unsigned)arg1 rightValueOptions:(unsigned)arg2 ;
-(id)rightValueEnumerableForLeftValue:(id)arg1 ;
-(void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2 ;
-(char)hasRightValuesForLeftValue:(id)arg1 ;
-(id)leftValuesForRightValue:(id)arg1 ;
-(char)hasLeftValuesForRightValue:(id)arg1 ;
-(id)leftValueEnumerable;
-(id)leftValues;
-(id)rightValues;
-(id)rightValueEnumerable;
-(id)rightValuesForLeftValue:(id)arg1 ;
-(id)leftValueEnumerableForRightValue:(id)arg1 ;
@end

