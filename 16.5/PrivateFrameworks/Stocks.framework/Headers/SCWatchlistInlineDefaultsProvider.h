// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWATCHLISTINLINEDEFAULTSPROVIDER_H
#define SCWATCHLISTINLINEDEFAULTSPROVIDER_H

@protocol SCWatchlistDefaultsProviding;

#import <Foundation/Foundation.h>

#import "SCWatchlistDefaults.h"

@interface SCWatchlistInlineDefaultsProvider : NSObject <SCWatchlistDefaultsProviding>

 {
    SCWatchlistDefaults *_defaults;
}




-(id)initWithDefaults:(id)arg0 ;
-(void)fetchWatchlistDefaultsWithCompletion:(id)arg0 ;


@end


#endif