/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIImage.h>
#import <SpringBoard/SBCountedMapValue.h>

@class NSString;

@interface SBIconAccessoryImage : UIImage <SBCountedMapValue> {

	NSString* _countedMapKey;

}

@property (nonatomic,copy) NSString * countedMapKey;                //@synthesize countedMapKey=_countedMapKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCountedMapKey:(NSString *)arg1 ;
-(NSString *)countedMapKey;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
@end

