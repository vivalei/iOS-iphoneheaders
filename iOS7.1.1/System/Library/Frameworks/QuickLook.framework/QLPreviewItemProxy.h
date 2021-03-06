/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>
#import <Message/QLPreviewItem.h>

@class NSUUID, NSString, NSURL;

@interface QLPreviewItemProxy : NSObject <NSSecureCoding, QLPreviewItem> {

	NSUUID* _uuid;
	NSString* _fileExtensionToken;
	long long _fileExtensionHandle;
	long long _index;
	NSURL* _url;
	NSString* _title;
	NSURL* _urlForDisplay;
	NSString* _contentType;
	NSString* _password;

}

@property (readonly) NSUUID * uuid;                            //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (retain) NSURL * urlForDisplay;                      //@synthesize urlForDisplay=_urlForDisplay - In the implementation block
@property (retain) NSString * contentType;                     //@synthesize contentType=_contentType - In the implementation block
@property (retain) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign) long long index;                            //@synthesize index=_index - In the implementation block
@property (readonly) NSURL * previewItemURL; 
@property (readonly) NSString * previewItemTitle; 
+(id)encodedClasses;
+(id)proxyWithPreviewItem:(id)arg1 ;
+(bool)supportsSecureCoding;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)issueFileExtension;
-(void)consumeFileExtension;
-(id)initWithPreviewItem:(id)arg1 ;
-(id)urlForDisplay;
-(void)setUrlForDisplay:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)title;
-(long long)index;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)previewItemURL;
-(id)previewItemContentType;
-(id)previewItemURLForDisplay;
-(id)previewItemTitle;
-(void)setIndex:(long long)arg1 ;
-(void)setContentType:(id)arg1 ;
-(id)contentType;
-(id)uuid;
@end

