// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICURLBAGMESCALCONFIGURATION_H
#define ICURLBAGMESCALCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ICURLBagMescalConfiguration : NSObject

@property (copy, nonatomic) NSArray *fields; // ivar: _fields
@property (copy, nonatomic) NSArray *headers; // ivar: _headers
@property (nonatomic) BOOL shouldSignBody; // ivar: _shouldSignBody


-(id)description;


@end


#endif