/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSString;

@interface TDSlice : NSManagedObject {

	CGRect _sliceRect;

}

@property (assign,nonatomic) CGRect sliceRect; 
@property (assign,nonatomic) CGRect primitiveSliceRect; 
@property (nonatomic,retain) NSString * sliceRectString; 
-(CGRect)primitiveSliceRect;
-(void)setPrimitiveSliceRect:(CGRect)arg1 ;
-(void)setSliceRect:(CGRect)arg1 ;
-(CGRect)sliceRect;
-(void)awakeFromFetch;
@end
