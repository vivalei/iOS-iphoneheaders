/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLFileTypeMappingsInternal;

@interface NSURLFileTypeMappings : NSObject {

	NSURLFileTypeMappingsInternal* _internal;

}
+(id)sharedMappings;
-(id)_UTIMIMETypeForExtension:(id)arg1 ;
-(id)_UTIextensionForMIMEType:(id)arg1 ;
-(id)preferredExtensionForMIMEType:(id)arg1 ;
-(id)extensionsForMIMEType:(id)arg1 ;
-(id)_init;
-(id)MIMETypeForExtension:(id)arg1 ;
@end

