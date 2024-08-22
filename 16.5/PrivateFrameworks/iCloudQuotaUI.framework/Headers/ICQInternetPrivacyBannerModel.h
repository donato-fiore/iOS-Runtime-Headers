// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQINTERNETPRIVACYBANNERMODEL_H
#define ICQINTERNETPRIVACYBANNERMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICQInternetPrivacyBannerModel : NSObject

@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *networkName; // ivar: _networkName
@property (nonatomic) NSUInteger status; // ivar: _status
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 status:(NSUInteger)arg3 networkName:(id)arg4 ;


@end


#endif