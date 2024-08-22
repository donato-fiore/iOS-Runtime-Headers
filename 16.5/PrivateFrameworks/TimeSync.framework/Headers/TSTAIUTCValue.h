// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTAIUTCVALUE_H
#define TSTAIUTCVALUE_H

@class NSDictionary, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSTAIUTCValue : NSObject <NSCopying>



@property (nonatomic) CGFloat coefficient; // ivar: _coefficient
@property (nonatomic) CGFloat constant; // ivar: _constant
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) NSUInteger modifiedJulianDay; // ivar: _modifiedJulianDay
@property (nonatomic) NSUInteger offset; // ivar: _offset
@property (retain, nonatomic) NSDate *taiDate; // ivar: _taiDate
@property (retain, nonatomic) NSDate *utcDate; // ivar: _utcDate


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif