// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPCHAPTER_H
#define TVPCHAPTER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TVPDateRange.h"
#import "TVPTimeRange.h"

@interface TVPChapter : NSObject

@property (copy, nonatomic) NSString *chapterDescription; // ivar: _chapterDescription
@property (retain, nonatomic) TVPDateRange *dateRange; // ivar: _dateRange
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (retain, nonatomic) TVPTimeRange *timeRange; // ivar: _timeRange




@end


#endif