/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASParsingLeafNode.h>
#import <DAEAS/NSCopying.h>

@class NSDate, NSString;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {

	NSDate* _exceptionDate;
	NSString* _uidWithoutExceptionDate;
	BOOL _isOutlookCreatedUid;

}
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(int)parsingState;
-(id)uidForCalFramework;
-(id)recurrenceIDForResponseEmail;
-(id)initWithCalFrameworkString:(id)arg1 ;
-(id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2 ;
-(id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(BOOL*)arg2 ;
-(id)uidForResponseEmailWithTimeZone:(id)arg1 ;
-(id)uidWithoutExceptionDate;
-(id)uidForActiveSyncWithTimeZone:(id)arg1 ;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
@end

