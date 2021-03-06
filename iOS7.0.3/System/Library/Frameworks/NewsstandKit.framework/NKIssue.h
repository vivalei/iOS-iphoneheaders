/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NKLibrary, NSString, NSDate, NSMutableArray, NSMapTable, NSMutableSet, NSArray, NSURL;

@interface NKIssue : NSObject {

	NKLibrary* _library;
	NSString* _name;
	NSDate* _date;
	NSString* _directory;
	NSMutableArray* _assets;
	NSMapTable* _assetsByRequest;
	NSMutableSet* _resolvedAssets;
	BOOL _foundContent;
	BOOL _isDecodingValid;

}

@property (readonly) NSArray * downloadingAssets; 
@property (readonly) NSURL * contentURL; 
@property (readonly) int status; 
@property (copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (copy) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (copy) NSString * directory;                         //@synthesize directory=_directory - In the implementation block
-(id)contentURL;
-(id)downloadingAssets;
-(id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3 ;
-(BOOL)_isDecodingValid;
-(id)_directory;
-(void)_setLibrary:(id)arg1 ;
-(id)addAssetWithRequest:(id)arg1 ;
-(id)_assetsForRequest:(id)arg1 ;
-(void)_markAssetAsResolved:(id)arg1 ;
-(void)_cleanupAsset:(id)arg1 ;
-(void)_assetChanged:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)date;
-(id)_commonInit;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setDate:(id)arg1 ;
-(int)status;
-(id)directory;
-(void)setDirectory:(id)arg1 ;
-(id)_library;
@end

