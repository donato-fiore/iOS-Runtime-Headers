// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPMEDIAITEMADVISORYINFO_H
#define TVPMEDIAITEMADVISORYINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVPMediaItemAdvisoryInfo : NSObject

@property (readonly, nonatomic) NSString *ratingDescription; // ivar: _ratingDescription
@property (retain, nonatomic) NSString *ratingName; // ivar: _ratingName


-(id)description;
-(id)initWithRatingDescription:(id)arg0 ;


@end


#endif