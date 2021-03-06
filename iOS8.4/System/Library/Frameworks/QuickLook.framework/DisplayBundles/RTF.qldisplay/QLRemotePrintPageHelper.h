/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/RTF.qldisplay/RTF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLRemotePrintPageHelper <NSObject>
@property (assign,nonatomic) CGSize printableSize; 
@required
-(id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL*)arg2;
-(CGSize)printableSize;
-(void)setPrintableSize:(CGSize)arg1;
-(long long)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1;

@end

