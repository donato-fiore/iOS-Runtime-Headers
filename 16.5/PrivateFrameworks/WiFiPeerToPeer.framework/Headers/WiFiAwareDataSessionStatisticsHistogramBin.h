// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIAWAREDATASESSIONSTATISTICSHISTOGRAMBIN_H
#define WIFIAWAREDATASESSIONSTATISTICSHISTOGRAMBIN_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WiFiAwareDataSessionStatisticsHistogramBin : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat binEnd; // ivar: _binEnd
@property (readonly, nonatomic) CGFloat binStart; // ivar: _binStart
@property (nonatomic) CGFloat value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithBinStart:(CGFloat)arg0 binEnd:(CGFloat)arg1 value:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif