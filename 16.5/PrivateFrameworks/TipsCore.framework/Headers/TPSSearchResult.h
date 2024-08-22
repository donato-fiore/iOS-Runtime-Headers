// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSSEARCHRESULT_H
#define TPSSEARCHRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TPSSearchQuery.h"

@interface TPSSearchResult : NSObject {
    ? items;
    ? suggestions;
}


@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) TPSSearchQuery *query; // ivar: query
@property (nonatomic, copy) NSArray *suggestions;


+(id)makeResultWith:(id)arg0 items:(id)arg1 suggestions:(id)arg2 ;
-(id)init;
-(id)initWithQuery:(id)arg0 items:(id)arg1 suggestions:(id)arg2 ;


@end


#endif