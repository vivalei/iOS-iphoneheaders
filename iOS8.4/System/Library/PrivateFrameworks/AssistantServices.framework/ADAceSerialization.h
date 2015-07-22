/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ADAceSerialization : NSObject
+(id)aceDataForObject:(id)arg1 error:(id*)arg2 ;
+(id)aceDataForSpeechPacket:(id)arg1 error:(id*)arg2 ;
+(id)_insufficientDataErrorForBytesNeeded:(unsigned long long)arg1 available:(unsigned long long)arg2 ;
+(id)aceDataForStreamHeaderWithCompressionType:(unsigned char)arg1 ;
+(id)aceDataForPing:(unsigned)arg1 ;
+(id)aceDataForPong:(unsigned)arg1 ;
+(id)aceDataForNop;
+(id)aceDataForStreamEnd;
+(BOOL)tryParsingAceHeaderData:(id)arg1 compressionType:(unsigned char*)arg2 bytesRead:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)tryParsingPacketData:(id)arg1 parsedData:(id*)arg2 bytesRead:(unsigned long long*)arg3 error:(id*)arg4 ;
@end
