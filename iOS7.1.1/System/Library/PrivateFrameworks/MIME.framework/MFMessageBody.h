/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFMessage;

@interface MFMessageBody : NSObject {

	MFMessage* _message;

}
-(unsigned)numberOfAttachmentsSigned:(bool*)arg1 encrypted:(bool*)arg2 ;
-(void)dealloc;
-(id)message;
-(id)rawData;
-(void)setMessage:(id)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 ;
-(bool)isRich;
-(id)attachmentURLs;
-(id)textHtmlPart;
-(bool)isHTML;
-(id)attachments;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)htmlContent;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 isComplete:(bool*)arg4 ;
@end
