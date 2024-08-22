// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef W5PINGRESULT_H
#define W5PINGRESULT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5PingResult : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (nonatomic) CGFloat avg; // ivar: _avg
@property (copy, nonatomic) NSString *command; // ivar: _command
@property (nonatomic) NSInteger count; // ivar: _count
@property (nonatomic) NSUInteger dataLength; // ivar: _dataLength
@property (nonatomic) CGFloat endedAt; // ivar: _endedAt
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) CGFloat max; // ivar: _max
@property (nonatomic) CGFloat min; // ivar: _min
@property (copy, nonatomic) NSString *output; // ivar: _output
@property (nonatomic) CGFloat packetLoss; // ivar: _packetLoss
@property (nonatomic) CGFloat startedAt; // ivar: _startedAt
@property (nonatomic) CGFloat stddev; // ivar: _stddev
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) CGFloat timestamp;
@property (nonatomic) NSInteger trafficClass; // ivar: _trafficClass
@property (nonatomic) CGFloat wait; // ivar: _wait


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif