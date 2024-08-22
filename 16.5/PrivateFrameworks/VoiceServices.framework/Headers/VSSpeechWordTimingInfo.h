// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSPEECHWORDTIMINGINFO_H
#define VSSPEECHWORDTIMINGINFO_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) _NSRange textRange; // ivar: _textRange


+(BOOL)supportsSecureCoding;
+(NSUInteger)extraBytesFromUTF8ToUTF16With:(char *)arg0 totalLength:(NSUInteger)arg1 begin:(NSUInteger)arg2 end:(NSUInteger)arg3 ;
+(id)utf16TimingInfoWithUTF8Range:(id)arg0 withText:(id)arg1 ;
+(id)wordTimingInfoFrom:(id)arg0 timestamps:(id)arg1 ;
+(void)adjustWordTimingInfo:(id)arg0 forContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif