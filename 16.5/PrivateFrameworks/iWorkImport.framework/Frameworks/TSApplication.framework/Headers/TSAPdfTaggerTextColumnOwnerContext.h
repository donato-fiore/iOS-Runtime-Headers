// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSAPDFTAGGERTEXTCOLUMNOWNERCONTEXT_H
#define TSAPDFTAGGERTEXTCOLUMNOWNERCONTEXT_H

@class NSArray, TSWPSelection, TSWPStorage;


#import "TSAPdfTaggerContext.h"

@interface TSAPdfTaggerTextColumnOwnerContext : TSAPdfTaggerContext

@property (readonly, copy, nonatomic) NSArray *columns; // ivar: _columns
@property (readonly, weak, nonatomic) TSWPSelection *limitSelection; // ivar: _limitSelection
@property (readonly, weak, nonatomic) TSWPStorage *storage; // ivar: _storage


-(id)initWithStateOfTagger:(id)arg0 columns:(id)arg1 storage:(id)arg2 limitSelection:(id)arg3 ;


@end


#endif