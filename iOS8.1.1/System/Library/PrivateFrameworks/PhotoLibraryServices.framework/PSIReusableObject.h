/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSIReusableObject : NSObject {

	BOOL _isPreparedForReuse;
	BOOL _isPreparingFromStatement;
	BOOL _isPreparedFromStatement;

}

@property (nonatomic,readonly) BOOL isPreparedFromStatement;              //@synthesize isPreparedFromStatement=_isPreparedFromStatement - In the implementation block
-(id)init;
-(void)prepareForReuse;
-(void)prepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(void)didPrepareFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)isPreparedFromStatement;
@end

