// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDFILTEREDPERSONSCOPE_H
#define CNVCARDFILTEREDPERSONSCOPE_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CNVCardFilteredPersonScope : NSObject

@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) NSSet *excludedFields; // ivar: _excludedFields
@property (readonly) NSUInteger filterOptions; // ivar: _filterOptions


-(id)initWithExcludedFields:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif