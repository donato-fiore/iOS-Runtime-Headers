// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKEVENT_H
#define WLKEVENT_H

@class NSString, NSDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLKEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSString *nowPlayingPassThrough; // ivar: _nowPlayingPassThrough
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif