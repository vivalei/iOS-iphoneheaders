/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathRowExpression : SCRCMathArrayExpression
-(char)isNumber;
-(int)integerValue;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(char)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(char)arg1 ;
-(unsigned)fractionLevel;
-(id)speakableSummary;
-(char)canBeUsedWithRange;
-(char)canBeUsedWithBase;
-(char)isInteger;
-(char)isFunctionName;
-(char)isWordOrAbbreviation;
-(char)beginsWithSpace;
-(char)endsWithSpace;
-(id)childSpeakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned*)arg4 ;
-(id)_indexesOfCharactersInWords;
-(void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned)arg5 treePosition:(id)arg6 ;
-(id)mathMLTag;
@end
