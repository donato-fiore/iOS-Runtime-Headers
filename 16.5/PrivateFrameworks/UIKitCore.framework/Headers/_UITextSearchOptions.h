// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTSEARCHOPTIONS_H
#define _UITEXTSEARCHOPTIONS_H


#import <Foundation/Foundation.h>


@interface _UITextSearchOptions : NSObject

@property (nonatomic) NSUInteger stringCompareOptions; // ivar: _stringCompareOptions
@property (nonatomic) NSInteger wordMatchMethod; // ivar: _wordMatchMethod


+(id)defaultSearchOptions;
-(BOOL)isEqual:(id)arg0 ;


@end


#endif