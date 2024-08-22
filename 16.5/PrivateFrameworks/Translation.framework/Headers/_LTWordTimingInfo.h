// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTWORDTIMINGINFO_H
#define _LTWORDTIMINGINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTWordTimingInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned int length; // ivar: _length
@property (readonly, nonatomic) unsigned int offset; // ivar: _offset
@property (readonly, nonatomic) unsigned int sampleIndex; // ivar: _sampleIndex
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSString *word; // ivar: _word


+(BOOL)supportsSecureCoding;
+(id)wordTimingInfoFromArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFTWordTimingInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif