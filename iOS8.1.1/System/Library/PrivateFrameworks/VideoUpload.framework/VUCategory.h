/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VUCategory : NSObject {

	NSString* _displayName;
	id _value;

}

@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
+(id)categoryWithDisplayName:(id)arg1 value:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(NSString *)displayName;
@end

