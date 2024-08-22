// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAGEVERIFIER_H
#define ICAGEVERIFIER_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICAgeVerifier : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isExplicitContentAllowed) BOOL explicitContentAllowed;
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSDate *verificationExpirationDate; // ivar: _verificationExpirationDate


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithExpirationDate:(id)arg0 ;
-(void)runAgeVerification;


@end


#endif