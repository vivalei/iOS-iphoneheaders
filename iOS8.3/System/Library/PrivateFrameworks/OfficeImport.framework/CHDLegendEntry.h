/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources;

@interface CHDLegendEntry : NSObject {

	unsigned mFontIndex;
	unsigned mEntryIndex;
	EDResources* mResources;

}
-(void)dealloc;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)setFontIndex:(unsigned)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setEntryIndex:(unsigned)arg1 ;
-(unsigned)fontIndex;
-(unsigned)entryIndex;
@end
