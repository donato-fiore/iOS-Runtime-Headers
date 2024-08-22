// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWNETWORKPREDICTIONS_H
#define NWNETWORKPREDICTIONS_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NWNetworkPredictions : NSObject <NSSecureCoding>



@property (readonly) NSDate *changePointAt; // ivar: _changePointAt
@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly) NSInteger resolutionSeconds; // ivar: _resolutionSeconds
@property (readonly) NSInteger toQuality; // ivar: _toQuality


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpec:(id)arg0 toQuality:(NSInteger)arg1 withConfidence:(CGFloat)arg2 resolutionSeconds:(unsigned int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif