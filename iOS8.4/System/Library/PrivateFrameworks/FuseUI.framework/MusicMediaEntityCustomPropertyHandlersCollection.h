/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface MusicMediaEntityCustomPropertyHandlersCollection : NSObject {

	NSMutableSet* _customProperties;
	NSMutableDictionary* _customPropertyValueHandlers;

}

@property (nonatomic,readonly) NSSet * customProperties; 
@property (nonatomic,readonly) NSDictionary * customPropertyValueHandlers; 
-(id)init;
-(NSDictionary *)customPropertyValueHandlers;
-(NSSet *)customProperties;
-(void)addCustomProperty:(id)arg1 withValueHandler:(/*^block*/id)arg2 ;
@end
