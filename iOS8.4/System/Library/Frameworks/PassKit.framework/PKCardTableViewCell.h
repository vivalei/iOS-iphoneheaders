/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKCardOnFileTableViewCell.h>

@class PKPaymentCredential;

@interface PKCardTableViewCell : PKCardOnFileTableViewCell {

	PKPaymentCredential* _paymentCredential;

}

@property (nonatomic,retain) PKPaymentCredential * paymentCredential;              //@synthesize paymentCredential=_paymentCredential - In the implementation block
-(void)setPaymentCredential:(PKPaymentCredential *)arg1 ;
-(PKPaymentCredential *)paymentCredential;
-(void)dealloc;
@end
