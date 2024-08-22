// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSEARCH_H
#define TSWPSEARCH_H

@class NSString;


#import "TSKSearch.h"
#import "TSWPFilteredString.h"
#import "TSWPStorage.h"

@interface TSWPSearch : TSKSearch

@property (readonly, retain, nonatomic) TSWPFilteredString *filteredString; // ivar: _filteredString
@property (nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) NSString *searchedString; // ivar: _searchedString
@property (readonly, nonatomic) TSWPStorage *storage; // ivar: _storage


-(BOOL)isComplete;
// -(id)initWithString:(id)arg0 options:(NSUInteger)arg1 hitBlock:(id)arg2 storage:(unk)arg3 range:(id)arg4  ;
-(void)dealloc;
-(void)foundHitWithRange:(struct _NSRange )arg0 ;


@end


#endif