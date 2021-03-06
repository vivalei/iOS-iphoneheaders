/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PDPassGroupingProfile : NSObject {

	NSString* _passTypeID;
	NSString* _groupingID;
	unsigned _passStyle;
	NSDate* _relevantDate;
	NSDate* _ingestedDate;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                //@synthesize groupingID=_groupingID - In the implementation block
@property (assign,nonatomic) unsigned passStyle;                 //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) NSDate * relevantDate;              //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,retain) NSDate * ingestedDate;              //@synthesize ingestedDate=_ingestedDate - In the implementation block
-(id)passTypeID;
-(void)setPassTypeID:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)passStyle;
-(void)setGroupingID:(id)arg1 ;
-(void)setRelevantDate:(id)arg1 ;
-(void)setIngestedDate:(id)arg1 ;
-(id)groupingID;
-(id)relevantDate;
-(id)ingestedDate;
-(void)setPassStyle:(unsigned)arg1 ;
@end

