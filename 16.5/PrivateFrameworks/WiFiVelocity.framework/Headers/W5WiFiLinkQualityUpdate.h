// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef W5WIFILINKQUALITYUPDATE_H
#define W5WIFILINKQUALITYUPDATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5WiFiLinkQualityUpdate : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) float cca; // ivar: _cca
@property (nonatomic) NSInteger rssi; // ivar: _rssi
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger txRate; // ivar: _txRate


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif