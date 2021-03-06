/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebDocumentView;
#import <UIKit/UIKit-Structs.h>
@class NSObject, NSArray, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject {

	NSObject<WebDocumentView>* _documentView;
	double _scaleFactor;
	CGSize _layoutSize;
	NSArray* _pageRects;
	UIWebDocumentView* _webDocumentView;

}

@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) double lastPageHeight; 
@property (nonatomic,retain) UIWebDocumentView * webDocumentView;              //@synthesize webDocumentView=_webDocumentView - In the implementation block
-(void)dealloc;
-(id)documentView;
-(id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(CGSize)arg3 pageRects:(id)arg4 ;
-(void)setWebDocumentView:(id)arg1 ;
-(id)pageRects;
-(double)scaleFactor;
-(CGSize)layoutSize;
-(unsigned long long)pageCount;
-(double)lastPageHeight;
-(CGSize)sizeForPageAtIndex:(long long)arg1 ;
-(id)webDocumentView;
@end

