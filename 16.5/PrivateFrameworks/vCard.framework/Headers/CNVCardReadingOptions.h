// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDREADINGOPTIONS_H
#define CNVCARDREADINGOPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNVCardReadingOptions : NSObject

@property (nonatomic) NSUInteger contactLimit; // ivar: _contactLimit
@property (nonatomic) NSUInteger maximumValueLength; // ivar: _maximumValueLength
@property (copy, nonatomic) NSArray *propertiesToFetch; // ivar: _propertiesToFetch
@property (nonatomic) BOOL useConcurrentParsing; // ivar: _useConcurrentParsing


-(id)description;
-(id)init;


@end


#endif