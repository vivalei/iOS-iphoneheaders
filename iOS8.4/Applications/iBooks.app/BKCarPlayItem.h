/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPContentItem.h>

@class NSURL, NSArray;

@interface BKCarPlayItem : MPContentItem {

	char _bk_resumePrevious;
	NSURL* _bk_assetURL;
	NSArray* _bk_subContentItems;
	int _bk_chapterIndex;

}

@property (nonatomic,retain) NSURL * bk_assetURL;                       //@synthesize bk_assetURL=_bk_assetURL - In the implementation block
@property (nonatomic,retain) NSArray * bk_subContentItems;              //@synthesize bk_subContentItems=_bk_subContentItems - In the implementation block
@property (assign,nonatomic) int bk_chapterIndex;                       //@synthesize bk_chapterIndex=_bk_chapterIndex - In the implementation block
@property (assign,nonatomic) char bk_resumePrevious;                    //@synthesize bk_resumePrevious=_bk_resumePrevious - In the implementation block
-(void)setBk_subContentItems:(NSArray *)arg1 ;
-(int)bk_chapterIndex;
-(void)setBk_chapterIndex:(int)arg1 ;
-(void)setBk_assetURL:(NSURL *)arg1 ;
-(void)setBk_resumePrevious:(char)arg1 ;
-(NSArray *)bk_subContentItems;
-(char)bk_resumePrevious;
-(NSURL *)bk_assetURL;
-(id)description;
@end

