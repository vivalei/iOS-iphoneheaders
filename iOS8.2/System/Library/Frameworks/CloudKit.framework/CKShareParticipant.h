/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class CKRecordID, NSString;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	char _isCurrentUser;
	CKRecordID* _userRecordID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSString* _participantID;
	int _acceptanceStatus;
	int _itemPermission;
	int _listPermission;
	int _originalAcceptanceStatus;
	int _originalItemPermission;
	int _originalListPermission;

}

@property (nonatomic,copy) CKRecordID * userRecordID;                   //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,copy) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                     //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * participantID;                    //@synthesize participantID=_participantID - In the implementation block
@property (assign,nonatomic) char isCurrentUser;                        //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) int acceptanceStatus;                      //@synthesize acceptanceStatus=_acceptanceStatus - In the implementation block
@property (assign,nonatomic) int itemPermission;                        //@synthesize itemPermission=_itemPermission - In the implementation block
@property (assign,nonatomic) int listPermission;                        //@synthesize listPermission=_listPermission - In the implementation block
@property (assign,nonatomic) int originalAcceptanceStatus;              //@synthesize originalAcceptanceStatus=_originalAcceptanceStatus - In the implementation block
@property (assign,nonatomic) int originalItemPermission;                //@synthesize originalItemPermission=_originalItemPermission - In the implementation block
@property (assign,nonatomic) int originalListPermission;                //@synthesize originalListPermission=_originalListPermission - In the implementation block
+(char)supportsSecureCoding;
-(char)isEquivalentToParticipant:(id)arg1 ;
-(void)setItemPermission:(int)arg1 ;
-(void)setListPermission:(int)arg1 ;
-(void)setOriginalAcceptanceStatus:(int)arg1 ;
-(void)setOriginalItemPermission:(int)arg1 ;
-(void)setOriginalListPermission:(int)arg1 ;
-(int)originalAcceptanceStatus;
-(char)isCurrentUser;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)CKPropertiesDescription;
-(int)itemPermission;
-(int)originalItemPermission;
-(int)listPermission;
-(int)originalListPermission;
-(id)_initWithUserRecordID:(id)arg1 participantID:(id)arg2 emailAddress:(id)arg3 acceptanceStatus:(int)arg4 itemPermission:(int)arg5 listPermission:(int)arg6 ;
-(void)setIsCurrentUser:(char)arg1 ;
-(CKRecordID *)userRecordID;
-(int)acceptanceStatus;
-(void)setAcceptanceStatus:(int)arg1 ;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(NSString *)participantID;
-(void)setParticipantID:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

