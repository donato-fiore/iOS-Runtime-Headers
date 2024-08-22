// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQTIPINFO_H
#define ICQTIPINFO_H

@class NSArray, NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICQTipIcon.h"

@interface ICQTipInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *anchor; // ivar: _anchor
@property (retain, nonatomic) NSURL *dismissURL; // ivar: _dismissURL
@property (retain, nonatomic) ICQTipIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSString *id; // ivar: _id
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)_parseTipIcon:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif