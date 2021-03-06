/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, NSArray;

@interface SKUIVideoViewElement : SKUIViewElement {

	char _enabled;
	long long _itemIdentifier;
	int _playbackStyle;
	SKUIImageViewElement* _thumbnailImage;

}

@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) int playbackStyle;                                  //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(char)isEnabled;
-(SKUIImageViewElement *)thumbnailImage;
-(NSArray *)assets;
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)playbackStyle;
@end

