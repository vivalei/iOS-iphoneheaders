/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@interface CoreDAVPostTask : CoreDAVPostOrPutTask

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
@end
