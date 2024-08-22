// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQACTIONINFO_H
#define ICQACTIONINFO_H

@class NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQConfirmationInfo.h"
#import "ICQLink.h"

@interface ICQActionInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSURL *actionURL; // ivar: _actionURL
@property (retain, nonatomic) ICQConfirmationInfo *confirmation; // ivar: _confirmation
@property (retain, nonatomic) ICQLink *icqLink; // ivar: _icqLink
@property (nonatomic) BOOL isDefault; // ivar: _isDefault
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromConfirmationAction:(id)arg0 ;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif