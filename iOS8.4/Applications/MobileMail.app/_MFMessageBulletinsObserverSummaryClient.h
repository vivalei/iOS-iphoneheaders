/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MBLSingleMessageClient.h>

@class MFMessageBulletinsObserver, MFLibraryMessage, NSString;

@interface _MFMessageBulletinsObserverSummaryClient : NSObject <MBLSingleMessageClient> {

	MFMessageBulletinsObserver* _observer;
	MFLibraryMessage* _message;
	unsigned _attempts;
	unsigned _priority;
	double _ordering;

}

@property (assign,nonatomic) MFMessageBulletinsObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)wantsContentsOfType:(int)arg1 ;
-(void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2 ;
-(void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2 ;
-(id)initWithObserver:(id)arg1 message:(id)arg2 ;
-(unsigned)_calculatePriority;
-(unsigned)_calculateOrdering;
-(double)ordering;
-(void)dealloc;
-(NSString *)description;
-(id)message;
-(MFMessageBulletinsObserver *)observer;
-(void)setObserver:(MFMessageBulletinsObserver *)arg1 ;
-(unsigned)priority;
@end
