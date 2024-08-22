// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQCONFIRMATIONINFO_H
#define ICQCONFIRMATIONINFO_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQImageURL.h"

@interface ICQConfirmationInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) ICQImageURL *iconURL; // ivar: _iconURL
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif