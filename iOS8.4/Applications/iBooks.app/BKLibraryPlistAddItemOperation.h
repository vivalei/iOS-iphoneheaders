/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKLibraryPlistOperation.h>

@class NSArray;

@interface BKLibraryPlistAddItemOperation : BKLibraryPlistOperation {

	NSArray* _summaries;

}

@property (retain) NSArray * summaries;              //@synthesize summaries=_summaries - In the implementation block
-(void)performOperation;
-(void)setSummaries:(NSArray *)arg1 ;
-(NSArray *)summaries;
-(id)newEntryFromSummary:(id)arg1 ;
-(id)entries;
@end

