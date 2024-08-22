// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCWWATCHLIST_H
#define SCWWATCHLIST_H

@class NSNumber, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SCWWatchlist : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSNumber *displayState; // ivar: _displayState
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSNumber *sortOrderState; // ivar: _sortOrderState
@property (readonly, copy, nonatomic) NSNumber *sortState; // ivar: _sortState
@property (readonly, copy, nonatomic) NSArray *symbols; // ivar: _symbols


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 symbols:(id)arg2 sortState:(id)arg3 sortOrderState:(id)arg4 displayState:(id)arg5 ;


@end


#endif